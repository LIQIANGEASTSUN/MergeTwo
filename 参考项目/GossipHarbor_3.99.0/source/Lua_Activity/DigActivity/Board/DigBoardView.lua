DigBoardView = setmetatable({}, BaseUIBoardView)
DigBoardView.__index = DigBoardView

function DigBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.m_activityDefinition = DigActivityDefinition[activityType]
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames,
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames
  }
  self.transform.localPosition = Vector3(boardModel.HorizontalTiles * boardModel.TileSize * -0.5, self.transform.position.y, self.transform.position.z)
  BaseUIBoardView.Init(self, boardModel)
  REGISTER_BOARD_EVENT_HANDLER(self, "DigFailed")
  
  function self.m_cacheRoot._PromptFullBoard()
    GM.UIManager:ShowPromptWithKey("hint_board_full")
  end
end

function DigBoardView:ConvertWorldPositionToScreenPosition(position)
  return DigBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function DigBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.BinShowBIType)
end

function DigBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function DigBoardView:ScrollUp(rows, boardmodel)
  local firstRowPosY = 367.5
  local animInOrderMap = {}
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local code = itemModel:GetCode()
    while true do
      local innerCode = ItemModelFactory.GetInnerType(code)
      if innerCode == code then
        break
      end
      code = innerCode
    end
    local config = GM.ItemDataModel:GetModelConfig(code, true)
    if config == nil or config.Dig_MaxLevel == nil then
      local position = itemModel:GetPosition()
      local y = position:GetY()
      if animInOrderMap[y] == nil then
        animInOrderMap[y] = {}
      end
      animInOrderMap[y][position:GetX()] = true
    end
  end
  for i = 1, DigBoardModel.VerticalTiles do
    if animInOrderMap[i] ~= nil then
      local cnt = 0
      for j = 1, DigBoardModel.HorizontalTiles do
        if animInOrderMap[i][j] then
          animInOrderMap[i][j] = cnt
          cnt = cnt + 1
        end
      end
    end
  end
  local cacheRootAnimMap = {}
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local moveTime = 0.8
    local flyTime = 0.34
    if rows >= position:GetY() then
      local code = itemModel:GetCode()
      while true do
        local innerCode = ItemModelFactory.GetInnerType(code)
        if innerCode == code then
          break
        end
        code = innerCode
      end
      local config = GM.ItemDataModel:GetModelConfig(code, true)
      if config ~= nil and config.Dig_MaxLevel == nil then
        local flyItem = self.m_itemViewFactory:CreateFlyItem(self, code, ItemFlyView.EFLYTYPE.DigActivityToCache)
        flyItem.transform:SetParent(self.transform)
        flyItem.transform:SetSiblingIndex(self.transform.childCount - 2)
        flyItem.transform.position = Vector3(itemView.transform.position.x, firstRowPosY, itemView.transform.position.z)
        flyItem.gameObject:SetActive(false)
        DelayExecuteFunc(function()
          if not flyItem.gameObject:IsNull() then
            flyItem.gameObject:SetActive(true)
            flyItem.m_numOutl.gameObject:SetActive(false)
            flyItem.transform:GetChild(2).gameObject:SetActive(false)
            local delayTime = animInOrderMap[position:GetY()][position:GetX()] * 0.05
            DelayExecuteFunc(function()
              if not flyItem.gameObject:IsNull() then
                flyItem.transform:DOMove(self.m_cacheRoot.transform.position, flyTime):SetEase(Ease.OutQuad):OnComplete(function()
                  flyItem:RecycleSelf()
                end)
              end
            end, delayTime)
            if cacheRootAnimMap[position:GetY()] == nil then
              cacheRootAnimMap[position:GetY()] = true
              DelayExecuteFunc(function()
                local mainwindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
                if mainwindow ~= nil then
                  mainwindow:ShowCacheEffect()
                end
              end, flyTime - 0.08)
              DelayExecuteFunc(function()
                if not self.m_cacheRoot.gameObject:IsNull() then
                  local seq = DOTween.Sequence()
                  seq:Append(self.m_cacheRoot.transform:DOScale(Vector3.one * 1.08, 0.083):SetEase(Ease.Linear))
                  seq:Append(self.m_cacheRoot.transform:DOScale(Vector3.one * 0.92, 0.083):SetEase(Ease.Linear))
                  seq:Append(self.m_cacheRoot.transform:DOScale(Vector3.one * 1.0, 0.083):SetEase(Ease.Linear))
                end
              end, flyTime - 0.15)
            end
          end
        end, 0.55 + moveTime * (position:GetY() - 1))
      end
      self:_RemoveItemView(itemView)
    else
      do
        local pos = BoardPosition.Create(position:GetX(), position:GetY() - rows)
        itemModel:SetPositionWithoutAnim(pos)
        itemView.transform.localPosition = itemView:_GetLocalPosition(pos)
      end
    end
  end
  for position in boardmodel:GetValidPositionIterator(0, boardmodel.VerticalTiles - rows + 1) do
    local itemModel = boardmodel:GetItem(position)
    if itemModel ~= nil then
      self:_AddItemView(itemModel)
    end
  end
  self:_UpdatePaperBoxReward()
end

function DigBoardView:_DoTransformItem(message, delay)
  if message.Source:GetComponent(ItemDig) == nil then
    BaseUIBoardView._DoTransformItem(self, message, delay)
    return
  end
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  self:_RemoveItemView(sourceItemView)
  if sourceItemView == self.m_lastTouchedItem then
    self:_ClearPointerData()
  end
  self:_AddItemView(message.New)
  if message.New:GetComponent(ItemDig) == nil then
    EventDispatcher.DispatchEvent(EEventType.DigOreCollapse)
  end
end

function DigBoardView:_OnDigFailed(message)
  local key
  if message.Reason == DigFailedReason.NoToken then
    key = "mineral_dig_hint"
  else
    key = "hint_board_full"
  end
  GM.UIManager:ShowPromptWithKey(key)
end

function DigBoardView:_GetPrompts()
  local prompts = BaseUIBoardView._GetPrompts(self)
  if not GameConfig.IsTestMode() or not TestMaskButton.autoMergeAll then
    table.insert(prompts, BoardPromptDigItem.Create())
    table.insert(prompts, BoardPromptDigCollect.Create())
    table.insert(prompts, BoardPromptDigCollectLowLevelItem.Create())
  end
  return prompts
end

function DigBoardView:_OnCollectItem(message)
  local rewards = message.Source:GetComponent(ItemCollectable):GetRewards()
  if rewards[1][PROPERTY_TYPE] ~= self.m_activityDefinition.ScoreType then
    BaseUIBoardView._OnCollectItem(self, message)
    return
  end
  local score = rewards[1][PROPERTY_COUNT]
  self.m_activityModel:AddScore(score)
  GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
  local itemView = self:GetItemView(message.Source)
  itemView.toBeRemoved = true
  local sequence = DOTween.Sequence()
  sequence:Insert(0, itemView.transform:DOScale(0.4, 0.2))
  sequence:InsertCallback(0.1, function()
    local sourceScreenPosition = self:ConvertWorldPositionToScreenPosition(itemView.transform.position)
    local sourceUIWorldPosition = PositionUtil.UICameraScreen2World(sourceScreenPosition)
    local chainId = GM.ItemDataModel:GetChainId(message.Source:GetType())
    local itemType = GM.ItemDataModel:GetTypeByChainAndLevel(chainId, 1)
    local message = {
      position = sourceUIWorldPosition,
      score = score,
      icon = GM.ItemDataModel:GetSpriteName(itemType),
      item = message.Source
    }
    EventDispatcher.DispatchEvent(EEventType.DigPlayScoreFlyAnimation, message)
  end)
  sequence:InsertCallback(0.2, function()
    self:_RemoveItemView(itemView)
  end)
end

function DigBoardView:_OnCollapseItem(message)
  if message.Source:GetComponent(ItemDig) ~= nil then
    local itemView = self:GetItemView(message.Source)
    if itemView == self.m_lastTouchedItem then
      self:_ClearPointerData()
    end
  end
  BaseUIBoardView._OnCollapseItem(self, message, function()
    EventDispatcher.DispatchEvent(EEventType.DigOreCollapse)
  end)
end

function DigBoardView:GetCollapseEffectPrefabName(message)
  if message.Source:GetComponent(ItemDig) == nil then
    return self.m_activityDefinition.PaperItemCollapseEffectPrefabName
  end
end

function DigBoardView:OnDrag(worldPosition)
  if GM.TutorialModel:HasAnyStrongTutorialOngoing() then
    return
  end
  BaseUIBoardView.OnDrag(self, worldPosition)
end

function DigBoardView:OnPointerDown(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local itemModel = self.m_model:GetItem(boardPosition)
  if itemModel ~= nil and itemModel:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:ShowPromptWithKey("hint_item_locked")
  end
  BaseUIBoardView.OnPointerDown(self, worldPosition)
end
