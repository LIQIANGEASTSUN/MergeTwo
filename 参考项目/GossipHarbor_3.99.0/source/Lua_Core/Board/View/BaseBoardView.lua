BaseBoardView = {
  Tile1Sprite = ImageFileConfigName.tile_bg1,
  Tile2Sprite = ImageFileConfigName.tile_bg2
}
BaseBoardView.__index = BaseBoardView

function REGISTER_BOARD_EVENT_HANDLER(view, eventName)
  local functionName = "_On" .. eventName
  AddHandlerAndRecordMap(view.m_model.event, BoardEventType[eventName], {
    obj = view,
    method = view[functionName]
  })
end

function BaseBoardView:Init(boardModel)
  self.m_model = boardModel
  self.m_itemViewFactory:Init()
  self.m_tileMap = {}
  self.m_modelViewMap = {}
  for position in boardModel:GetValidPositionIterator() do
    self:_AddTile(position)
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil then
      self:_AddItemView(itemModel)
    end
  end
  self:_UpdateTile()
  REGISTER_BOARD_EVENT_HANDLER(self, "SpreadItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SwallowItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "BatchSwallowItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "TransformItem")
end

function BaseBoardView:OnDestroy()
  if self.m_model ~= nil then
    RemoveAllHandlers(self.m_model.event, self)
  end
end

function BaseBoardView:GetModel()
  return self.m_model
end

function BaseBoardView:GetItemsTransform()
  return self.m_itemsTransform
end

function BaseBoardView:ConvertBoardPositionToLocalPosition(boardPosition)
  return self.m_model:ToLocalPositionSetZ(boardPosition, 0)
end

function BaseBoardView:ConvertBoardPositionToScreenPosition(boardPosition)
  local localPosition = self:ConvertBoardPositionToLocalPosition(boardPosition)
  local worldPosition = self:GetItemsTransform():TransformPoint(localPosition)
  return self:ConvertWorldPositionToScreenPosition(worldPosition)
end

function BaseBoardView:_GetBoardPosition(worldPosition)
  local localPosition = self.transform:InverseTransformPoint(worldPosition)
  return self.m_model:CreatePositionFromLocalPosition(localPosition.x, localPosition.y)
end

function BaseBoardView:GetItemView(itemModel)
  return self.m_modelViewMap[itemModel]
end

function BaseBoardView:_AddItemView(itemModel, needIgnore)
  local position = itemModel:GetPosition()
  local currentItem = self.m_model:GetItem(position)
  if not needIgnore and currentItem ~= nil and currentItem ~= itemModel then
    local info = position:GetKey() .. ", cur logic item id is " .. currentItem:GetId() .. ", code is " .. currentItem:GetCode() .. ", add item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode() .. "\n" .. debug.traceback()
    GM.BIManager:LogErrorInfo(EBIProjectType.ElementOverlapLogic, info)
    return
  end
  for model, view in pairs(self.m_modelViewMap) do
    if not view.toBeRemoved and model:GetPosition() == position then
      self:_RemoveItemView(view)
      local info = position:GetKey() .. ", cur view item id is " .. model:GetId() .. ", code is " .. model:GetCode() .. ", add item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode()
      GM.BIManager:LogErrorInfo(EBIProjectType.ElementOverlapView, info)
    end
  end
  local itemView = self.m_itemViewFactory:Create(self, itemModel)
  self.m_modelViewMap[itemModel] = itemView
  return itemView
end

function BaseBoardView:_RemoveItemView(itemView)
  if itemView == nil then
    return
  end
  local itemModel = itemView:GetModel()
  local currentView = self.m_modelViewMap[itemModel]
  if itemModel ~= nil and currentView == nil then
    local position = itemModel:GetPosition()
    local info = position:GetKey() .. ", item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode()
    GM.BIManager:LogErrorInfo(EBIProjectType.ElementNoViewWhenRemove, info)
  end
  itemView.toBeRemoved = nil
  self.m_itemViewFactory:RecycleItem(itemView)
  self.m_modelViewMap[itemModel] = nil
end

function BaseBoardView:GetCustomItemViewSpriteMappings()
  return Table.Empty
end

function BaseBoardView:_AddTile(boardPosition)
  local tileObject = Object.Instantiate(self.m_tilePrefab, self.m_tilesTransform)
  local tileSprite = tileObject:GetComponent(typeof(SpriteRenderer))
  self.m_tileMap[boardPosition] = tileSprite
  tileObject.transform.localPosition = self.m_model:ToLocalPositionSetZ(boardPosition, 0)
end

function BaseBoardView:_UpdateTile(tile1Sprite, tile2Sprite)
  local tile1 = tile1Sprite or self.Tile1Sprite
  local tile2 = tile2Sprite or self.Tile2Sprite
  for position, tileSprite in pairs(self.m_tileMap) do
    local isEven = (position:GetX() + position:GetY()) % 2 == 0
    SpriteUtil.SetSpriteRenderer(tileSprite, isEven and tile1 or tile2)
  end
end

function BaseBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  if self.m_model:CanItemMerge(itemModel, lastItemModel) then
    return true
  end
  local itemSwallow = itemModel:GetComponent(ItemSwallow)
  return itemSwallow ~= nil and itemSwallow:CanSwallow(lastItemModel)
end

function BaseBoardView:_TryShowMergeLight(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local itemModel
  if self.m_model:IsPositionInteractable(boardPosition) then
    itemModel = self.m_model:GetItem(boardPosition)
  end
  local itemView = self:GetItemView(itemModel)
  if itemView == self.m_lastMergeLightItem then
    return
  end
  self:_ClearMergeLight()
  local lastItemModel = self.m_lastTouchedItem:GetModel()
  if itemModel == nil or itemModel == lastItemModel then
    return
  end
  if self:_CanShowMergeLight(itemModel, lastItemModel) then
    self:_ShowMergeLight(itemView)
  end
end

function BaseBoardView:_ShowMergeLight(itemView)
  itemView:MergeLightAppear()
  self.m_lastMergeLightItem = itemView
end

function BaseBoardView:_ClearMergeLight()
  if self.m_lastMergeLightItem ~= nil then
    if not self.m_lastMergeLightItem.gameObject:IsNull() then
      self.m_lastMergeLightItem:MergeLightDisappear()
    end
    self.m_lastMergeLightItem = nil
  end
end

function BaseBoardView:_PlayParabolaAnimation(itemView, sourcePosition, targetPosition, height, totaltim, scl)
  sourcePosition = Vector3(sourcePosition.x, sourcePosition.y, 0)
  targetPosition = Vector3(targetPosition.x, targetPosition.y, 0)
  local h1 = height
  local h2 = sourcePosition.y + height - targetPosition.y
  local tim1 = 1 / (1 + math.sqrt(h2 * 1.0 / h1)) * totaltim
  local tim2 = totaltim - tim1
  local dx1 = (targetPosition.x - sourcePosition.x) * tim1 / totaltim
  local sequence = DOTween.Sequence()
  itemView:SetJumpTween(sequence)
  local transform = itemView.gameObject.transform
  transform.localPosition = sourcePosition
  transform.localScale = Vector3.zero
  sequence:Insert(0, transform:DOLocalMoveY(sourcePosition.y + h1, tim1):SetEase(Ease.OutQuart))
  sequence:Insert(0, transform:DOScale(Vector3(scl, scl, 1), tim1):SetEase(Ease.OutQuart))
  sequence:Insert(0, transform:DOLocalMoveX(targetPosition.x, totaltim))
  sequence:Insert(tim1, transform:DOLocalMoveY(targetPosition.y, tim2):SetEase(Ease.InQuad))
  sequence:Insert(tim1, transform:DOScale(Vector3.one, tim2):SetEase(Ease.InQuad))
  sequence:InsertCallback(totaltim - 0.1, function()
    itemView:ShowSpreadLight(false)
  end)
end

function BaseBoardView:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, energyBoost, spreadEffectType, sourceItemView)
  local bShowTail = spreadEffectType == BoardSpreadType.Dig or spreadEffectType == BoardSpreadType.CardItem or energyBoost
  local bShowBox = BoardSpreadType.IsLuckySpread(spreadEffectType) or spreadEffectType == BoardSpreadType.GeneratorBoostExtraLucky
  local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, 0)
  local targetPositionZero = Vector3(targetPosition.x, targetPosition.y, 0)
  local deltaPosition = targetPositionZero - sourcePositionZero
  local transform = itemView.gameObject.transform
  transform.localPosition = sourcePositionZero
  transform.localScale = Vector3.zero
  if bShowTail then
    itemView:ShowTail(energyBoost, spreadEffectType)
  end
  local sequence = DOTween.Sequence()
  itemView:SetJumpTween(sequence)
  sequence:Insert(0.05, transform:DOLocalJump(sourcePositionZero + deltaPosition * 0.9, 60, 1, 0.6))
  sequence:Insert(0.65, transform:DOLocalMove(targetPosition, 0.25):SetEase(Ease.OutQuad))
  sequence:InsertCallback(0.6, function()
    itemView:ShowSpreadLight(energyBoost, spreadEffectType)
    self:_PlayItemSpreadPrompt(itemView, spreadEffectType)
    if bShowTail then
      itemView:RemoveTail()
    end
  end)
  sequence:Insert(0.05, transform:DOScale(Vector3(0.8, 0.8, 1), 0.1))
  sequence:Insert(0.15, transform:DOScale(Vector3(1.5, 1.5, 1), 0.2))
  sequence:Insert(0.35, transform:DOScale(Vector3(1, 1, 1), 0.3))
  sequence:Insert(0.65, transform:DOScale(V3One, 0.2))
  if bShowBox then
    itemView:ShowLuckySpreadEffect()
    sequence:InsertCallback(0.65, function()
      itemView:RemoveLuckySpreadEffect()
    end)
  end
  return sequence
end

function BaseBoardView:_PlayItemSpreadPrompt(itemView, spreadEffectType)
end

function BaseBoardView.TryPlayTapAnimation(boardView, itemModels)
  if not Table.IsEmpty(itemModels) and boardView and boardView.GetItemView then
    GM.UIManager:SetEventLock(true, self)
    DelayExecuteFunc(function()
      GM.UIManager:SetEventLock(false, self)
      for _, itemModel in ipairs(itemModels) do
        local itemView = boardView:GetItemView(itemModel)
        if itemView then
          if itemView.PlayTapAnimation then
            itemView:PlayTapAnimation(0.2)
          end
          if itemView.ShowRetrieveLight then
            itemView:ShowRetrieveLight()
          end
        end
      end
    end, 0.7)
  end
end

function BaseBoardView:_GetSpreadAudio(message)
  local array = {
    {
      audio = AudioFileConfigName.SfxMergeSpawnManual,
      weight = 70
    },
    {
      audio = AudioFileConfigName.SfxMergeSpawnManual2,
      weight = 30
    }
  }
  local data = Table.ListWeightSelectOne(array, "weight")
  return data.audio
end

function BaseBoardView:_OnSpreadItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  local newItemView = self:_AddItemView(message.New)
  if newItemView ~= nil then
    self:_PlayJumpAnimation(newItemView, sourceItemView.transform.localPosition, newItemView.transform.localPosition, message.EnergyBoostRatio, message.BoardSpreadType, message.Source)
  end
  local sfx = self:_GetSpreadAudio(message)
  GM.AudioModel:PlayEffect(sfx)
end

function BaseBoardView:_OnSwallowItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local targetItemView = self:GetItemView(message.Target)
  local targetPosition = targetItemView.transform.localPosition
  local sequence = DOTween.Sequence()
  sequence:Insert(0, sourceItemView.transform:DOLocalMove(targetPosition, 0.1))
  sequence:Insert(0, sourceItemView.transform:DOScale(0.3, 0.1))
  sequence:InsertCallback(0.1, function()
    self:_RemoveItemView(sourceItemView)
  end)
end

function BaseBoardView:_OnBatchSwallowItem(message)
  self:_DoBatchSwallowItem(message, nil, nil)
end

function BaseBoardView:_DoBatchSwallowItem(message, onBegin, onEnd)
  if onBegin ~= nil then
    onBegin()
  end
  local targetItemView = self:GetItemView(message.Target)
  local targetPosition = targetItemView.transform.position
  targetPosition.z = 0
  local reachedCount = 0
  local mergeLightAppearItem = {}
  for _, sourceItem in ipairs(message.Sources) do
    local sourceItemView = self:GetItemView(sourceItem)
    local sourcePosition = sourceItemView.transform.position
    sourcePosition.z = 0
    sourceItemView.transform.position = sourcePosition
    
    local function onUpdate(value)
      local currentPosition = Vector3.Lerp(sourcePosition, targetPosition, value)
      sourceItemView.transform.position = currentPosition
      local boardPosition = self:_GetBoardPosition(currentPosition)
      if boardPosition == message.Target:GetPosition() then
        if Table.IsEmpty(mergeLightAppearItem) then
          targetItemView:MergeLightAppear()
        end
        mergeLightAppearItem[sourceItem] = true
      end
    end
    
    local function onComplete()
      local itemSwallow = message.Target:GetComponent(ItemSwallow)
      itemSwallow:Swallow(sourceItem)
      mergeLightAppearItem[sourceItem] = nil
      if Table.IsEmpty(mergeLightAppearItem) then
        targetItemView:MergeLightDisappear()
      end
      reachedCount = reachedCount + 1
      if reachedCount == #message.Sources and onEnd ~= nil then
        onEnd()
      end
    end
    
    local distance = Vector3.Distance(sourcePosition, targetPosition)
    DOVirtual.Float(0, 1, distance / 1200, onUpdate):OnComplete(onComplete)
  end
end

function BaseBoardView:_OnTransformItem(message)
  self:_DoTransformItem(message, 0)
end

function BaseBoardView:_DoTransformItem(message, delay)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local sequence = DOTween.Sequence()
  sequence:Insert(delay, sourceItemView.transform:DOScale(0.3, 0.1))
  sequence:InsertCallback(delay + 0.1, function()
    self:_RemoveItemView(sourceItemView)
  end)
  local newItemView = self:_AddItemView(message.New)
  if newItemView ~= nil then
    newItemView.transform.localScale = Vector3.zero
    sequence:InsertCallback(delay + 0.1, function()
      newItemView.transform.localScale = 0.3 * V3One
    end)
    sequence:Insert(delay + 0.1, newItemView.transform:DOScale(1.3, 0.2))
    sequence:Insert(delay + 0.3, newItemView.transform:DOScale(1, 0.1))
  end
end

function BaseBoardView:GetTestInfo()
  if self.m_selectedBoardPosition == nil or self.m_model:GetItem(self.m_selectedBoardPosition) == nil then
    return "\229\189\147\229\137\141\230\178\161\230\156\137\233\128\137\228\184\173\230\163\139\229\173\144"
  end
  local str = ""
  local selectedItemModel = self.m_model:GetItem(self.m_selectedBoardPosition)
  str = "code:" .. selectedItemModel:GetCode() .. " type:" .. selectedItemModel:GetType() .. [[

pos:]] .. tostring(self.m_selectedBoardPosition)
  local itemSpread = selectedItemModel:GetComponent(ItemSpread)
  if itemSpread ~= nil then
    local lastSpreadInfo = itemSpread:GetTestLastSpreadInfo()
    str = str .. "\n\228\184\138\230\172\161\229\150\183\229\143\145\230\131\133\229\134\181:"
    local lastSpreadCodeOrigin = lastSpreadInfo.lastSpreadCodeOrigin
    local lastSpreadFishNetProduceSmartCode = lastSpreadInfo.lastSpreadFishNetProduceSmartCode
    if lastSpreadCodeOrigin == nil then
      str = str .. "\230\151\160"
    else
      str = str .. "\n\229\142\159\229\167\139\229\150\183\229\143\145\239\188\154" .. tostring(lastSpreadCodeOrigin) .. "\n\229\138\169\229\138\155\229\144\142\239\188\154" .. tostring(lastSpreadInfo.lastSpreadCodeEnergyBoost)
    end
    if lastSpreadFishNetProduceSmartCode then
      str = str .. "\n\233\153\141\231\186\167\229\144\142\239\188\154" .. tostring(lastSpreadFishNetProduceSmartCode)
    end
    str = str .. "\n\228\189\147\229\138\155\230\182\136\232\128\151\239\188\154" .. tostring(lastSpreadInfo.lastCostEnergyCount)
  end
  return str
end
