MainBoardView = setmetatable({CompleteTileColor = "84d38e"}, BaseSceneBoardView)
MainBoardView.__index = MainBoardView

function MainBoardView.GetInstance()
  return MainBoardView.s_instance
end

function MainBoardView:Awake()
  BaseSceneBoardView.Awake(self)
  self.m_completeTileMap = GM.MainBoardModel:CreateMatrix()
  self.CompleteTileColor = UIUtil.ConvertHexColor2CSColor(self.CompleteTileColor)
  BaseSceneBoardView.Init(self, GM.MainBoardModel)
  MainBoardView.s_instance = self
  self:_UpdateCompleteTiles(false)
  self.m_orderArea:Init(self)
  REGISTER_BOARD_EVENT_HANDLER(self, "StoreItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "RetrieveStoredItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "StoreFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "BatchRemoveItems")
  REGISTER_BOARD_EVENT_HANDLER(self, "PlayAccelerationAnimation")
  self.m_retrieveList = {}
  self:SwitchBoardBackground(true)
end

function MainBoardView:_AddListeners()
  BaseSceneBoardView._AddListeners(self)
  EventDispatcher.AddListener(EEventType.AmbienceStyleChange, self, self._OnAmbienceStyleChanged)
  EventDispatcher.AddListener(EEventType.OnViewWillClose, self, self._OnViewWillClosed)
end

function MainBoardView:Update()
  BaseSceneBoardView.Update(self)
  if GameConfig.IsTestMode() and Input.GetKeyUp(KeyCode.BackQuote) then
    if GM.UIManager:IsEventLock() or not GM.UIManager.allWindowClosed then
      return
    end
    GM.TestAutoRunModel:OnMergeAllClicked()
  end
end

function MainBoardView:OnDestroy()
  BaseSceneBoardView.OnDestroy(self)
  MainBoardView.s_instance = nil
end

function MainBoardView:OnEnable()
  BaseSceneBoardView.OnEnable(self)
  self:_UpdateCompleteTiles()
end

function MainBoardView:_PlayAddOrderItemAnimation(targetCell, itemModel)
  local itemView = self:_AddItemView(itemModel)
  itemView.gameObject:SetActive(false)
  itemView:SetFlying(true)
  local targetIcon = targetCell:GetIcon(1)
  local targetPosition = targetIcon.transform.position
  targetPosition = Vector3(targetPosition.x, targetPosition.y, 0)
  local position = itemView.transform.position
  local positionZero = Vector3(position.x, position.y, 0)
  itemView.transform.position = targetPosition
  itemView.transform.localScale = Vector3(0.8, 0.8, 1)
  local sequence = DOTween.Sequence()
  sequence:InsertCallback(1, function()
    itemView.gameObject:SetActive(true)
  end)
  sequence:Insert(0.9, itemView.transform:DOMove(positionZero, 0.8):SetEase(Ease.InQuad))
  sequence:Insert(0.9, itemView.transform:DOScale(1.8, 0.3))
  sequence:Insert(1.2, itemView.transform:DOScale(1, 0.5))
  sequence:InsertCallback(1.7, function()
    itemView:SetFlying(false)
    itemView.transform.position = position
  end)
end

function MainBoardView:_GetRetrieveList()
  if self.m_retrieveList == nil then
    self.m_retrieveList = {}
  end
  return self.m_retrieveList
end

function MainBoardView:_ShowRetrieveLight()
  local retrieveList = self:_GetRetrieveList()
  for i = #retrieveList, 1, -1 do
    retrieveList[i]:ShowRetrieveLight()
    retrieveList[i] = nil
  end
end

function MainBoardView:_GetPrompts()
  local prompts = BaseSceneBoardView._GetPrompts(self)
  if GM.ConfigModel:IsBoardPromptSunshineOpen() then
    table.insert(prompts, BoardPromptSunshineOrderBoost.Create())
  end
  table.insert(prompts, BoardPromptStoreItem.Create())
  table.insert(prompts, BoardPromptTapSpreadCrucible.Create())
  return prompts
end

function MainBoardView:MergeItemPrompts()
  BaseSceneBoardView._CancelPrompt(self)
  
  function self.m_promptScheduler()
    local prompts = BaseSceneBoardView._GetPrompts(self)
    for _, prompt in ipairs(prompts) do
      if prompt:GetType() == BoardPromptType.MergeItems and prompt:CanStart(self) then
        prompt:Start(self)
        self.m_prompt = prompt
        break
      end
    end
  end
  
  Scheduler.Schedule(self.m_promptScheduler, self, 0, 1, 0.4)
end

function MainBoardView:_OnGameModeChanged()
  BaseSceneBoardView._OnGameModeChanged(self)
  if GM.SceneManager:GetGameMode() == self.m_model:GetGameMode() then
    self:_ShowRetrieveLight()
  end
end

function MainBoardView:_OnCloseView(msg)
  BaseSceneBoardView._OnCloseView(self)
  if msg and GM.UIManager.allWindowClosed then
    self:_ShowRetrieveLight()
  end
end

function MainBoardView:_OnStoreItem(message)
  if not message.DontRemoveView then
    self:_RemoveItemViewByView(self:GetItemView(message.Source))
  end
  self:_UpdateIndicator()
  self.m_infoBar:UpdateInfoBar()
end

function MainBoardView:_OnRetrieveStoredItem(message)
  local itemView = self:_AddItemView(message.Source)
  local retrieveList = self:_GetRetrieveList()
  retrieveList[#retrieveList + 1] = itemView
  if GM.UIManager.allWindowClosed then
    self:_ShowRetrieveLight()
  end
  self:_UpdateIndicator(message.Source, true)
  if not self.m_infoBar.gameObject:IsNull() then
    self.m_infoBar:UpdateInfoBar(message.Source)
  end
end

function MainBoardView:_OnStoreFailed(message)
  local function onStoreFailed()
    local itemView = self:GetItemView(message.Item)
    
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    local key = message.Reason == StoreFailedReason.CannotStore and "hint_cannot_store" or "hint_inventory_full"
    GM.UIManager:ShowPromptWithKey(key, screenPosition)
  end
  
  DOVirtual.DelayedCall(ItemView.MoveDuration, onStoreFailed)
end

function MainBoardView:_OnFinishOrder(message)
  local activityOrderCell
  local isSpokenOrder = false
  if message.ActivityType then
    isSpokenOrder = SpokespersonDefinition[message.ActivityType]
    activityOrderCell = self.m_orderArea:GetOrderTbByActivityType(message.ActivityType)
  end
  local orderType = message.Order:GetType()
  if isSpokenOrder or orderType == OrderType.CurtainCall or orderType == OrderType.LuckyStar then
    self:_FinsihOrderOld(message, activityOrderCell)
  elseif GM.ConfigModel:IsOrderGivePerformanceOpen() then
    BaseSceneBoardView._OnFinishOrderNew(self, message, activityOrderCell)
  else
    self:_FinsihOrderOld(message, activityOrderCell)
  end
end

function MainBoardView:_FinsihOrderOld(message, activityOrderCell)
  local orderId = message and message.Order and message.Order:GetId()
  local delayTime
  if orderId ~= nil and message.bItemClicked and self.m_orderArea:IsTargetOrderOffScreen(orderId) then
    delayTime = self.m_orderArea:ScrollTargetOrderToView(orderId, true)
  end
  BaseSceneBoardView._OnFinishOrder(self, message, activityOrderCell, delayTime)
end

function MainBoardView:_OnBatchRemoveItems(message)
  for _, itemModel in ipairs(message.Removed) do
    local itemView = self:GetItemView(itemModel)
    itemView.toBeRemoved = true
    itemView.transform:DOScale(0, 0.5):OnComplete(function()
      self:_RemoveItemViewByView(itemView)
    end)
    if self.m_selectedBoardPosition == itemModel:GetPosition() then
      self:_UpdateIndicator()
      self.m_infoBar:UpdateInfoBar()
    end
  end
end

function MainBoardView:_OnPlayAccelerationAnimation(message)
  local maxX = 1
  local maxY = 1
  if message and message.IsStart then
    maxX = BaseSceneBoardModel.HorizontalTiles
    maxY = BaseSceneBoardModel.VerticalTiles
  end
  for position in BaseSceneBoardModel.GetValidPositionIterator() do
    local item = self:GetItemView(GM.MainBoardModel:GetItem(position))
    if item then
      do
        local disX = maxX - position:GetX()
        local disY = maxY - position:GetY()
        local dis = math.sqrt(disX * disX + disY * disY)
        DelayExecuteFunc(function()
          if item and item.gameObject and not item.gameObject:IsNull() then
            item:PlayAccEffect()
          end
        end, dis * 0.075)
      end
    end
  end
end

function MainBoardView:IsMainBoard()
  return true
end

function MainBoardView:GetLuckyStarTargetButton(tilePosition)
  local posX = (tilePosition:GetX() - math.ceil(BaseSceneBoardModel.HorizontalTiles / 2)) * self.m_model.TileSize
  local posY = (math.ceil(BaseSceneBoardModel.VerticalTiles / 2) - tilePosition:GetY()) * self.m_model.TileSize
  UIUtil.SetLocalPosition(self.m_luckyStarTargetButton.gameObject.transform, posX, posY)
  return self.m_luckyStarTargetButton
end

function MainBoardView:_OnOrderStateChanged()
  BaseSceneBoardView._OnOrderStateChanged(self)
  self:_UpdateCompleteTiles(true)
end

function MainBoardView:_OnPointerUp(...)
  BaseSceneBoardView._OnPointerUp(self, ...)
  self:_UpdateCompleteTiles(true)
end

function MainBoardView:_OnDrag(...)
  BaseSceneBoardView._OnDrag(self, ...)
  if self.m_lastTouchedItem == nil then
    return
  end
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if canItemMove then
    self:UpdateCompleteTileDisplay(self.m_lastTouchedItem:GetModel():GetPosition(), false, true)
  end
end

function MainBoardView:_AddTile(boardPosition)
  BaseSceneBoardView._AddTile(self, boardPosition)
  local tileObject = Object.Instantiate(self.m_tilePrefab, self.m_tilesTransform)
  local tileSprite = tileObject:GetComponent(typeof(SpriteRenderer))
  SpriteUtil.SetSpriteRenderer(tileSprite, ImageFileConfigName.tile_bg3)
  tileSprite.color = self.CompleteTileColor
  self.m_completeTileMap:SetValueOnPosition(boardPosition, {Sprite = tileSprite, Show = true})
  local localPosition = boardPosition:ToLocalPosition()
  tileObject.transform.localPosition = Vector3(localPosition.x + self.m_model.TileSize / 2, localPosition.y + self.m_model.TileSize / 2, -1)
end

function MainBoardView:_UpdateCompleteTiles(animation)
  for position in GM.MainBoardModel.GetValidPositionIterator() do
    local itemModel = self.m_model:GetItem(position)
    self:UpdateCompleteTileDisplay(position, itemModel ~= nil and self:IsOrderStateCanDiliver(itemModel), animation)
  end
end

function MainBoardView:_UpdateSingleCompleteTile(position, animation)
  local itemModel = self.m_model:GetItem(position)
  self:UpdateCompleteTileDisplay(position, itemModel ~= nil and self:IsOrderStateCanDiliver(itemModel), animation)
end

function MainBoardView:IsOrderStateCanDiliver(itemModel)
  local swallow = itemModel:GetComponent(ItemSwallow)
  if swallow and swallow:IsSwallowOver() then
    return false
  end
  local code = itemModel:GetCode()
  for _, order in pairs(self.m_model:GetOrders()) do
    if order:GetState() == OrderState.CanDeliver and not order.bIsActOrder then
      local requires = order:GetRequirements()
      if Table.ListContain(requires, code) then
        return true
      end
    end
  end
  for _, order in pairs(GM.ActivityManager:GetModel(ActivityType.ExtraCustomer):GetOngoingOrders()) do
    if order:GetState() == OrderState.CanDeliver then
      local requires = order:GetRequirements()
      if Table.ListContain(requires, code) then
        return true
      end
    end
  end
  return false
end

function MainBoardView:UpdateCompleteTileDisplay(position, show, animation)
  if self.m_completeTileMap:GetValueOnPosition(position).Show == show then
    if not animation then
      self.m_completeTileMap:GetValueOnPosition(position).Sprite:DOKill()
      UIUtil.SetAlpha(self.m_completeTileMap:GetValueOnPosition(position).Sprite, show and 1 or 0)
    end
  else
    self.m_completeTileMap:GetValueOnPosition(position).Show = show
    if animation then
      self.m_completeTileMap:GetValueOnPosition(position).Sprite:DOFade(show and 1 or 0, 0.2)
    else
      UIUtil.SetAlpha(self.m_completeTileMap:GetValueOnPosition(position).Sprite, show and 1 or 0)
    end
  end
end

function MainBoardView:ShowFlyItemFromOrderToItem(orderCell, items)
  for _, item in ipairs(items) do
    local itemView = self:GetItemView(item)
    if itemView then
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.NewUserFlyItem), self.transform, orderCell.transform.position, function(go)
        local tb = go:GetLuaTable()
        tb:Init(orderCell.transform.position, itemView.transform.position, 1)
      end)
    end
  end
end

function MainBoardView:GetCurSkin()
  return self.m_curSkin
end

function MainBoardView:SwitchBoardBackground(bInit)
  local skinName = GM.UISkinModel:GetUsedSkinName(bInit)
  if self.m_curSkin == skinName then
    return
  end
  self.m_curSkin = skinName
  local def = skinName and UISkinDefinition[skinName]
  if def then
    if def.boardBackgroundPrefabName then
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(def.boardBackgroundPrefabName), self.m_boardBgRoot, V3Zero, function(go)
        self:_HideBoardBackground()
        if self.m_uiSkinBoardBackground then
          Object.Destroy(self.m_uiSkinBoardBackground.gameObject)
        end
        local tb = go:GetLuaTable()
        tb:Init(skinName)
        self.m_uiSkinBoardBackground = tb
      end)
    end
    self:_UpdateTile(def.tileNew1Sprite, def.tileNew2Sprite)
  else
    if self.m_uiSkinBoardBackground then
      Object.Destroy(self.m_uiSkinBoardBackground.gameObject)
    end
    self:_ShowBoardBackground()
    self:_UpdateTile()
  end
end

function MainBoardView:SetRaycastEnabled(enabled)
  if self.m_raycastEnabled ~= enabled then
    self.m_raycastEnabled = enabled
    self.m_raycaster.enabled = enabled
    local sceneView = TutorialHelper.GetSceneView()
    sceneView:SetRaycasterEnabled(enabled)
  end
end

function MainBoardView:_HideBoardBackground()
  if self.m_boardBackgroundGo then
    UIUtil.SetActive(self.m_boardBackgroundGo, false)
  end
end

function MainBoardView:_ShowBoardBackground()
  if self.m_boardBackgroundGo then
    UIUtil.SetActive(self.m_boardBackgroundGo, true)
  else
    local key = AmbienceHelper.GetBoardBGByStyle()
    if key then
      GM.ResourceLoader:LoadUIPrefabConfig(key, self.m_boardBgRoot, V3Zero, function(go)
        self.m_boardBackgroundGo = go
        UIUtil.SetActive(self.m_defaultBoardBgGo, false)
      end)
    else
      self.m_boardBackgroundGo = self.m_defaultBoardBgGo
      UIUtil.SetActive(self.m_boardBackgroundGo, true)
    end
  end
end

function MainBoardView:_OnAmbienceStyleChanged()
  if self.m_uiSkinBoardBackground then
    return
  end
  if self.m_boardBackgroundGo ~= self.m_defaultBoardBgGo then
    Object.Destroy(self.m_boardBackgroundGo)
  end
  self.m_boardBackgroundGo = nil
  self:_ShowBoardBackground()
end

local fullBoardScreenCount = 0

function MainBoardView:_OnOpenView(msg)
  BaseSceneBoardView._OnOpenView(self, msg)
  if msg and msg.fullScreen and GM.SceneManager:GetGameMode() == EGameMode.Main then
    fullBoardScreenCount = fullBoardScreenCount + 1
    if 0 < fullBoardScreenCount then
      DelayExecuteFuncInView(function()
        if fullBoardScreenCount <= 0 then
          return
        end
        UIUtil.SetActive(GM.ModeViewController:GetBoardRootTrans().gameObject, false)
      end, 0.5, self)
    end
  end
end

function MainBoardView:_OnViewWillClosed(msg)
  if msg and msg.fullScreen and GM.SceneManager:GetGameMode() == EGameMode.Main then
    fullBoardScreenCount = fullBoardScreenCount - 1
    if fullBoardScreenCount <= 0 then
      UIUtil.SetActive(GM.ModeViewController:GetBoardRootTrans().gameObject, true)
      self.m_orderArea:_OnGameModeChanged()
    end
  end
end
