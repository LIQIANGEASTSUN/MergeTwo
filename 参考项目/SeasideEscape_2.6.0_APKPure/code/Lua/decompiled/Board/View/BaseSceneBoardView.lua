BaseSceneBoardView = setmetatable({}, BaseActionBoardView)
BaseSceneBoardView.__index = BaseSceneBoardView
BaseSceneBoardView.MergePromptInterval = 2.3
BaseSceneBoardView.RemoveItemDt = 0.5

local function REGISTER_TOUCH_HANDLER(view, eventName)
  local triggerEventName = "OnLua" .. eventName
  local functionName = "_On" .. eventName
  view.m_eventTrigger[triggerEventName] = function(eventData)
    view[functionName](view, eventData)
  end
end

function BaseSceneBoardView:Awake()
  self:_AddListeners()
end

function BaseSceneBoardView:Init(boardModel)
  BaseActionBoardView.Init(self, boardModel)
  self.m_disabledPosList = {}
  local sceneView = TutorialHelper.GetSceneView()
  if sceneView and sceneView.UpdateIconTrans then
    sceneView:UpdateIconTrans()
  end
  local eventActivityModel = boardModel.GetEventActivityModel and boardModel:GetEventActivityModel() or nil
  self.m_shopModel = eventActivityModel and eventActivityModel:GetShopModel() or GM.ShopModel
  self.m_camera = GM.ModeViewController:GetBoardInfo()
  self.m_canvas.worldCamera = self.m_camera
  self.m_infoBar:Init(boardModel)
  self.m_blinkingItems = {}
  self.m_profiling = {frames = 0, hiccups = 0}
  self.m_storeItemSeqCount = 0
  if self.gameObject.activeInHierarchy then
    self:_AddListeners()
  end
  self:_RegisterTouchHandler()
  REGISTER_BOARD_EVENT_HANDLER(self, "MergeItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CollapseItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CostItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SellItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "UndoSellItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "PopCachedItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ChooseItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemUnlocked")
  REGISTER_BOARD_EVENT_HANDLER(self, "ShakeItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SplitItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "TimeSkip")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemScaled")
  REGISTER_BOARD_EVENT_HANDLER(self, "BubbleBreak")
  REGISTER_BOARD_EVENT_HANDLER(self, "BubbleDisappear")
  REGISTER_BOARD_EVENT_HANDLER(self, "IceDisappear")
  REGISTER_BOARD_EVENT_HANDLER(self, "FinishOrder")
  REGISTER_BOARD_EVENT_HANDLER(self, "LackGem")
  REGISTER_BOARD_EVENT_HANDLER(self, "LackSpreadEnergy")
  REGISTER_BOARD_EVENT_HANDLER(self, "SpreadFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "SpreadIntoCache")
  REGISTER_BOARD_EVENT_HANDLER(self, "RefreshOrder")
  REGISTER_BOARD_EVENT_HANDLER(self, "OrderPrompt")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemFindEffect")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemFindNewEffect")
  REGISTER_BOARD_EVENT_HANDLER(self, "ActivityItemFindEffect")
  REGISTER_BOARD_EVENT_HANDLER(self, "DoubleConfirmedCollect")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddLuckyStarItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddIceItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddMagicCrucibleItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddSunshineItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddSunshineRaceItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ShowSunshineRaceItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddFireworksGalaItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddTriggerPlaneItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddChestCustomerItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CollectFromItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CollectFromCache")
  self.m_initialized = true
  DelayExecuteFuncInView(function()
    if self:_GetInventoryButton() then
      self:_GetInventoryButton():SetLayoutData()
    end
  end, 0.5, self)
end

function BaseSceneBoardView:_RegisterTouchHandler()
  REGISTER_TOUCH_HANDLER(self, "PointerDown")
  REGISTER_TOUCH_HANDLER(self, "Drag")
  REGISTER_TOUCH_HANDLER(self, "PointerUp")
end

function BaseSceneBoardView:OnEnable()
  if not self.m_initialized then
    return
  end
  self:_TryStartPrompt()
  self:_AdjustBoardInfoBarPos()
  if self.m_model then
    MicrofunProfiler.Instance:StartSession(self.m_model:GetGameMode())
  end
end

function BaseSceneBoardView:_AddListeners()
  EventDispatcher.AddActiveListener(EEventType.OrderStateChanged, self, self._OnOrderStateChanged)
  EventDispatcher.AddActiveListener(EEventType.OpenView, self, self._OnOpenView)
  EventDispatcher.AddActiveListener(EEventType.CloseView, self, self._OnCloseView)
  EventDispatcher.AddActiveListener(EEventType.TutorialFinished, self, self._OnTutorialFinished)
  EventDispatcher.AddActiveListener(EEventType.ItemOpened, self, self._TryStartPrompt)
  EventDispatcher.AddActiveListener(EEventType.ItemCharged, self, self._TryStartPrompt)
  EventDispatcher.AddActiveListener(EEventType.ItemOpening, self, self._TryStartPrompt)
  EventDispatcher.AddActiveListener(EEventType.ChangeGameMode, self, self._OnGameModeChanged)
  EventDispatcher.AddActiveListener(EEventType.ApplicationWillEnterForeground, self, self._ClearPointerDataOnUnexpectedPointerExit)
  EventDispatcher.AddActiveListener(EEventType.AutoRun, self, self._TryAutoRun)
end

function BaseSceneBoardView:_AdjustBoardInfoBarPos()
  if not self.m_adjustedInfoBarPosition then
    local sceneView = GM.UIManager:GetOpenedTopViewByType(EViewType.SceneView)
    if sceneView ~= nil then
      self.m_adjustedInfoBarPosition = true
      local screenPosition = sceneView:GetBoardInfoBarScreenPosition()
      local worldPosition = self:ConvertScreenPositionToWorldPosition(screenPosition)
      local transform = self.m_infoBar.gameObject.transform
      local localPosition = transform.parent:InverseTransformPoint(worldPosition)
      localPosition.z = 0
      transform.localPosition = localPosition
      if CSScreenFitter.IsWideScreen() then
        transform.localScale = transform.localScale * 0.82
        localPosition.y = localPosition.y - 15
        transform.localPosition = localPosition
      end
    end
  end
end

function BaseSceneBoardView:OnDisable()
  if not self.m_initialized then
    return
  end
  if self.m_findEffectSeq and self.m_findEffectSeq:IsActive() then
    self.m_findEffectSeq:Complete()
  end
  self:_CancelPrompt()
  if not self.m_infoBar.gameObject:IsNull() then
    self:_OnPointerUp()
  end
  if self.m_model and GM and GM.BIManager and MicrofunProfiler.Instance and not MicrofunProfiler.Instance:IsNull() then
    GM.BIManager:LogProfilingSession(self.m_model:GetGameMode())
    if self.m_profiling.frames >= 100 then
      GM.BIManager:LogInteractHiccup(self.m_model:GetGameMode(), self.m_profiling.frames, self.m_profiling.hiccups)
    end
    self.m_profiling.frames = 0
    self.m_profiling.hiccups = 0
    MicrofunProfiler.Instance:StopFrameTime(self.m_model:GetGameMode() .. "_interact")
  end
  if 0 < self.m_storeItemSeqCount then
    local inventoryButton = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
    inventoryButton:PlayDragEndEffect()
  end
  if self:_GetInventoryButton() then
    self:_GetInventoryButton():StopItemInAnimation()
    self:_GetInventoryButton():StopPromptAnimation()
  end
end

function BaseSceneBoardView:OnDestroy()
  if self.m_infoBar then
    self.m_infoBar:RemoveEventListener()
  end
  BaseActionBoardView.OnDestroy(self)
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
end

function BaseSceneBoardView:IsNewInfoBarActive()
  return self.m_infoBar and self.m_infoBar.gameObject.activeInHierarchy
end

function BaseSceneBoardView:Update()
  if not self.m_model then
    return
  end
  local hasOpeningItem = self.m_model:HasOpeningItem()
  if self.m_model.FilterItemsWithComponent then
    local items = self.m_model:FilterItemsWithComponent(ItemSpread)
    if not Table.IsEmpty(items) then
      for _, item in ipairs(items) do
        local view = self:GetItemView(item)
        if view then
          view:UpdateExclamation(not hasOpeningItem and item:GetComponent(ItemSpread):GetState() == ItemSpreadState.Closed)
        else
          local pos = item:GetPosition()
          GM.BIManager:LogErrorInfo(EBIProjectType.ElementNoViewWhenUpdate, tostring(pos:GetX()) .. "_" .. tostring(pos:GetY()) .. ", item id is " .. item:GetId() .. ", code is " .. item:GetCode())
        end
      end
    end
  else
    for position in self.m_model.GetValidPositionIterator() do
      local itemModel = self.m_model:GetItem(position)
      local itemSpread = itemModel and itemModel:GetComponent(ItemSpread)
      if itemModel and not itemModel.toBeAdd and itemSpread ~= nil then
        local itemView = self:GetItemView(itemModel)
        if itemView == nil then
          local pos = itemModel:GetPosition()
          local info = pos:GetX() .. "_" .. pos:GetY() .. ", item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode()
          GM.BIManager:LogErrorInfo(EBIProjectType.ElementNoViewWhenUpdate, info)
        elseif itemSpread:GetState() == ItemSpreadState.Closed then
          itemView:UpdateExclamation(not hasOpeningItem)
        else
          itemView:UpdateExclamation(false)
        end
      end
    end
  end
  if self.m_hasCollapsedPaperBox then
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxSandBreak)
  end
  self.m_hasCollapsedPaperBox = false
  if Input.GetMouseButtonDown(0) then
    self:_StopAllBlinkItems()
  end
  if 0 < Input.touchCount then
    for i = 0, Input.touchCount - 1 do
      if Input.GetTouch(i).phase == TouchPhase.Began then
        self:_StopAllBlinkItems()
        break
      end
    end
  end
  if self.m_profiling.counter then
    self.m_profiling.counter = self.m_profiling.counter - 1
    if 0 >= self.m_profiling.counter then
      self.m_profiling.counter = nil
      local result, frames, _, _, _, _, hiccups, _ = MicrofunProfiler.Instance:GetFrameTime(self.m_model:GetGameMode() .. "_interact")
      if result then
        self.m_profiling.frames = self.m_profiling.frames + frames
        self.m_profiling.hiccups = self.m_profiling.hiccups + hiccups
        if self.m_profiling.frames >= 5000 then
          GM.BIManager:LogInteractHiccup(self.m_model:GetGameMode(), self.m_profiling.frames, self.m_profiling.hiccups)
          self.m_profiling.frames = 0
          self.m_profiling.hiccups = 0
        end
      end
      MicrofunProfiler.Instance:StopFrameTime(self.m_model:GetGameMode() .. "_interact")
    end
  end
end

function BaseSceneBoardView:GetInfoBar()
  return self.m_infoBar
end

function BaseSceneBoardView:GetOrderArea()
  return self.m_orderArea
end

function BaseSceneBoardView:GetBoardCacheRoot()
  return self.m_orderArea:GetBoardCacheRoot()
end

function BaseSceneBoardView:GetBuildRoot()
  return self.m_orderArea:GetBuildRoot()
end

function BaseSceneBoardView:_GetInventoryButton()
  if self.m_inventoryButton == nil then
    local baseSceneView = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.BaseSceneView)
    self.m_inventoryButton = baseSceneView and baseSceneView:GetHudButton(ESceneViewHudButtonKey.Inventory) or nil
  end
  return self.m_inventoryButton
end

function BaseSceneBoardView:ConvertWorldPositionToScreenPosition(position)
  return self.m_camera:WorldToScreenPoint(position)
end

function BaseSceneBoardView:ConvertScreenPositionToWorldPosition(position)
  return self.m_camera:ScreenToWorldPoint(position)
end

function BaseSceneBoardView:ConvertBoardPositionToScreenPosition(boardPosition)
  local plottingPosition = boardPosition:ToLocalPosition()
  return self.m_camera:WorldToScreenPoint(self:GetItemsTransform():TransformPoint(Vector3(plottingPosition.x + self.m_model.TileSize / 2, plottingPosition.y + self.m_model.TileSize / 2, 0)))
end

function BaseSceneBoardView:_RemoveItemViewByView(itemView)
  if itemView == nil then
    return
  end
  if self.m_lastTouchedItem == itemView then
    self.m_lastTouchedItem = nil
    if self.m_onInventory then
      if self:_GetInventoryButton() then
        self:_GetInventoryButton():PlayDragEndEffect()
      end
      self.m_onInventory = false
    end
  end
  BaseActionBoardView._RemoveItemViewByView(self, itemView)
end

function BaseSceneBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  if self.m_model:CanItemMerge(itemModel, lastItemModel) or self.m_model:CanItemSplit(lastItemModel, itemModel) then
    return true
  end
  return BaseActionBoardView._CanShowMergeLight(self, itemModel, lastItemModel)
end

function BaseSceneBoardView:_ShowMergeLight(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local itemModel = self.m_model:GetItem(boardPosition)
  local itemView = self:GetItemView(itemModel)
  if itemView == self.m_lastMergeLightItem then
    return
  end
  self:_ClearMergeLight()
  local lastItemModel = self.m_lastTouchedItem:GetModel()
  if itemModel == nil or itemModel == lastItemModel or itemView == nil then
    return
  end
  if self:_CanShowMergeLight(itemModel, lastItemModel) then
    itemView:MergeLightAppear()
    self.m_lastMergeLightItem = itemView
    self.m_lastMergableItem = itemModel
    self.m_lastMergableItemTime = CSTime.timeSinceLevelLoad
  end
end

function BaseSceneBoardView:_UpdateIndicator(item, playAnimation)
  BaseActionBoardView._UpdateIndicator(self, item, playAnimation)
  if GM.ConfigModel:IsSwallowDisOpen(self.m_model:GetGameMode()) then
    self.m_swallowItemIndicator:UpdateIndicator(item, nil, self.m_model)
  else
    self.m_swallowItemIndicator:UpdateIndicator(item, playAnimation, self.m_model)
  end
end

function BaseSceneBoardView:_ClickSwallowIem(item, playAnimation)
  if not playAnimation then
    return
  end
  local itemSwallow = item and item:GetComponent(ItemSwallow)
  if itemSwallow == nil or itemSwallow:IsSwallowOver() then
    return
  end
  if itemSwallow:HasSomethingToSwallowInBoard() then
    return
  end
  local key = "swallowdis_guide_desc"
  local swallowItem
  for _, info in ipairs(itemSwallow:GetSwallowInfo()) do
    if info.Swallowed < info.Count then
      swallowItem = info.Code
    end
  end
  local itemView = self:GetItemView(item)
  local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(0, 200, 0)
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  screenPosition = Vector3(Screen.width * 0.5, screenPosition.y, screenPosition.z)
  GM.UIManager:ShowImagePromptWithKey(key, screenPosition, nil, EPromptStyle.HuntSwallowTip, nil, nil, ImageFileConfigName.swallow_prompt_bg, swallowItem and GM.ItemDataModel:GetSpriteName(swallowItem))
end

function BaseSceneBoardView:_SetItemViewToBeRemoved(itemModel)
  if self.m_selectedBoardPosition == itemModel:GetPosition() then
    self:_UpdateIndicator()
    self.m_infoBar:UpdateInfoBar()
  end
  local itemView = self:GetItemView(itemModel)
  if itemView then
    itemView.toBeRemoved = true
  else
    Log.Debug(itemModel:GetId() .. ", code:" .. itemModel:GetCode(), "[\230\163\139\229\173\144view\230\182\136\229\164\177]")
  end
end

function BaseSceneBoardView:_PlayRemoveOrderItemAnimation(targetCell, index, itemModel, moveDuration, bToBeStore)
  self:_SetItemViewToBeRemoved(itemModel)
  local itemView = self:GetItemView(itemModel)
  if itemView == nil then
    Log.Debug("\232\166\129\230\148\182\232\181\176\231\154\132\230\163\139\229\173\144\229\176\154\230\156\170\229\136\155\229\187\186View, code:" .. itemModel:GetCode() .. "pos:" .. itemModel:GetPosition():ToString(), "[\230\163\139\229\173\144view\230\182\136\229\164\177]")
    return
  end
  itemView:SetFlying(true)
  itemView:TryStopJumpTween()
  local callback
  if bToBeStore then
    function callback()
      itemView.gameObject:SetActive(false)
      
      itemView:SetJumpTween(nil)
    end
  else
    function callback()
      self:_RemoveItemViewByView(itemView)
    end
  end
  self:_PlayRemoveOrderItemViewAnimation(targetCell, index, itemView, moveDuration, callback)
end

function BaseSceneBoardView:_PlayRemoveOrderStoredItemAnimation(targetCell, index, itemCode, moveDuration)
  local itemView = ItemViewFactory:CreateFlyingItem(itemCode, self)
  local btn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
  local screenPos = PositionUtil.UICameraWorld2Screen(btn.transform.position)
  itemView.transform.position = self:ConvertScreenPositionToWorldPosition(screenPos)
  
  local function callback()
    itemView:RemoveSelf()
  end
  
  local seq = self:_PlayRemoveOrderItemViewAnimation(targetCell, index, itemView, moveDuration - 0.1, callback)
  seq:SetDelay(0.1)
  btn:PlayDragStartEffect()
  seq:InsertCallback(0.2, function()
    btn:PlayDragEndEffect()
  end)
end

function BaseSceneBoardView:_PlayRemoveOrderItemViewAnimation(targetCell, index, itemView, moveDuration, callback)
  local targetIcon = targetCell:GetIcon(index)
  local targetPosition = targetIcon.transform.position
  targetPosition = Vector3(targetPosition.x, targetPosition.y, 0)
  local transform = itemView.transform
  local position = transform.position
  position = Vector3(position.x, position.y, 0)
  transform.position = position
  local sequence = DOTween.Sequence()
  sequence:Insert(0, transform:DOMove(targetPosition, moveDuration):SetEase(Ease.OutQuad))
  sequence:Insert(0, transform:DOScale(1.8, moveDuration * 0.7))
  sequence:Insert(moveDuration * 0.7, transform:DOScale(0.8, moveDuration * 0.3))
  sequence:AppendCallback(callback)
  if itemView.SetJumpTween then
    itemView:SetJumpTween(sequence)
  end
  return sequence
end

function BaseSceneBoardView:_PlayCurtainCallStoreItemToInventoryAnimation(targetOrderCell, itemModel, moveDuration, bStoreSuccess, storeItemCount)
  local inventoryButton = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
  local itemView, callback
  if itemModel.stored then
    itemView = ItemViewFactory:CreateFlyingItem(itemModel:GetCode(), self)
    local targetIcon = targetOrderCell:GetIcon()
    local startPos = targetIcon.transform.position
    startPos = Vector3(startPos.x, startPos.y, 0)
    itemView.transform.position = startPos
    
    function callback()
      itemView:RemoveSelf()
    end
  else
    itemView = self:GetItemView(itemModel)
    if bStoreSuccess then
      self.m_modelViewMap[itemModel] = nil
      
      function callback()
        if self.m_lastTouchedItem == itemView then
          self.m_lastTouchedItem = nil
        end
        if itemView.OnRemoved then
          itemView:OnRemoved()
        end
        itemView.gameObject:RemoveSelf()
      end
    else
      function callback()
        itemModel:SetLocked(false)
        
        itemView:SetFlying(false)
        itemView.toBeRemoved = nil
        local screenPosition
        if storeItemCount and storeItemCount == 1 then
          local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
          screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
        else
          screenPosition = Vector3(Screen.width / 2, Screen.height / 2, 0)
        end
        GM.UIManager:ShowPromptWithKey("hint_inventory_full", screenPosition)
      end
    end
  end
  if itemView.TryStopJumpTween then
    itemView:TryStopJumpTween()
  end
  itemView.gameObject:SetActive(true)
  local targetPos
  local bPlayInventoryEffect = false
  if itemModel.stored or bStoreSuccess then
    local screenPos = PositionUtil.UICameraWorld2Screen(inventoryButton.transform.position)
    targetPos = self:ConvertScreenPositionToWorldPosition(screenPos)
    targetPos = Vector3(targetPos.x, targetPos.y, 0)
    bPlayInventoryEffect = true
  else
    targetPos = itemView.transform.parent:TransformPoint(itemModel:GetLocalPosition())
  end
  local transform = itemView.transform
  local position = transform.position
  position = Vector3(position.x, position.y, 0)
  transform.position = position
  local jumpPos = Vector3(position.x, position.y + 100, 0)
  targetOrderCell:HidePdItemIcon()
  self.m_storeItemSeqCount = self.m_storeItemSeqCount + 1
  local sequence = DOTween.Sequence()
  local duration = 0.3
  sequence:Insert(0, transform:DOMove(jumpPos, duration))
  duration = duration + 0.1
  sequence:Insert(duration, transform:DOMove(targetPos, moveDuration):SetEase(Ease.OutQuad))
  if bPlayInventoryEffect then
    sequence:InsertCallback(duration + moveDuration * 0.8, function()
      if GM.SceneManager:GetGameMode() == EGameMode.Main then
        inventoryButton:PlayDragStartEffect()
      end
    end)
  else
    sequence:Insert(duration, transform:DOScale(1, moveDuration))
  end
  sequence:AppendCallback(function()
    callback()
    self.m_storeItemSeqCount = self.m_storeItemSeqCount - 1
    if bPlayInventoryEffect and GM.SceneManager:GetGameMode() == EGameMode.Main then
      inventoryButton:PlayDragEndEffect()
      inventoryButton:PlayItemInEffect()
    end
  end)
end

function BaseSceneBoardView:PlayButtonStoreItemToInventoryAnimation(itemModel, moveDuration, startPos)
  local inventoryButton = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
  local itemView, callback
  itemView = ItemViewFactory:CreateFlyingItem(itemModel:GetCode(), self)
  itemView.transform.position = startPos
  
  function callback()
    itemView:RemoveSelf()
  end
  
  if itemView.TryStopJumpTween then
    itemView:TryStopJumpTween()
  end
  itemView.gameObject:SetActive(true)
  local targetPos
  local screenPos = PositionUtil.UICameraWorld2Screen(inventoryButton.transform.position)
  targetPos = self:ConvertScreenPositionToWorldPosition(screenPos)
  targetPos = Vector3(targetPos.x, targetPos.y, 0)
  local transform = itemView.transform
  local position = transform.position
  position = Vector3(position.x, position.y, 0)
  transform.position = position
  local jumpPos = Vector3(position.x, position.y + 100, 0)
  local sequence = DOTween.Sequence()
  local duration = 0.3
  self.m_storeItemSeqCount = self.m_storeItemSeqCount + 1
  sequence:Insert(0, transform:DOMove(jumpPos, duration))
  duration = duration + 0.1
  sequence:Insert(duration, transform:DOMove(targetPos, moveDuration):SetEase(Ease.OutQuad))
  sequence:InsertCallback(duration + moveDuration * 0.8, function()
    if GM.SceneManager:GetGameMode() == EGameMode.Main then
      inventoryButton:PlayDragStartEffect()
    end
  end)
  sequence:AppendCallback(function()
    callback()
    self.m_storeItemSeqCount = self.m_storeItemSeqCount - 1
    if GM.SceneManager:GetGameMode() == EGameMode.Main then
      inventoryButton:PlayDragEndEffect()
      inventoryButton:PlayItemInEffect()
    end
  end)
end

function BaseSceneBoardView:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, callback, boardSpreadType, speedup, onKill)
  local sequence = BaseActionBoardView._PlayJumpAnimation(self, itemView, sourcePosition, targetPosition, boardSpreadType, speedup, onKill)
  if callback then
    sequence:AppendCallback(callback)
  end
end

function BaseSceneBoardView:_PlayDoubleEnergyJumpAnimation(itemView, sourcePosition, targetPosition, callback, boardSpreadType)
  local luckySpread = BoardSpreadType.IsLuckySpread(boardSpreadType)
  local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, -1)
  local targetPositionZero = Vector3(targetPosition.x, targetPosition.y, 0)
  local deltaPosition = targetPositionZero - sourcePositionZero
  local transform = itemView.gameObject.transform
  transform.localPosition = sourcePositionZero
  transform.localScale = Vector3.zero
  local sequence = DOTween.Sequence()
  itemView:SetJumpTween(sequence)
  sequence:Insert(0.05, transform:DOLocalJump(sourcePositionZero + deltaPosition, 60, 1, 0.65))
  sequence:InsertCallback(0.6, function()
    itemView:ShowSpreadLight(boardSpreadType)
    self:_PlayLuckyProducePrompt(itemView, boardSpreadType)
  end)
  sequence:Insert(0.05, transform:DOScale(Vector3(0.8, 0.8, 1), 0.1))
  sequence:Insert(0.15, transform:DOScale(Vector3(1.5, 1.5, 1), 0.2))
  sequence:Insert(0.35, transform:DOScale(Vector3(1, 1, 1), 0.3))
  if luckySpread then
    itemView:ShowLuckySpreadEffect()
    sequence:InsertCallback(0.65, function()
      itemView:RemoveLuckySpreadEffect()
    end)
  end
  if callback then
    sequence:AppendCallback(callback)
  end
end

function BaseSceneBoardView:_StartPrompt(extraDelayTime)
  self:_CancelPrompt()
  if PlayerPrefs.GetInt(EPlayerPrefKey.OpenHint, 1) == 0 or self.m_stopPrompt then
    return
  end
  extraDelayTime = extraDelayTime or 0
  if self.m_promptSchedulerOrigin == nil then
    function self.m_promptSchedulerOrigin()
      if self.m_promptScheduler then
        Scheduler.Unschedule(self.m_promptScheduler, self)
        
        self.m_promptScheduler = nil
      end
      self.m_prompt = self:_SelectPrompt()
      local prompt = self.m_prompt
      if self.m_prompt ~= nil then
        self.m_prompt:Start(self)
        if GameConfig.IsTestMode() and (GM.TestAutoRunModel.mergeAll or GM.TestAutoRunModel.autoRun) then
          self.m_prompt:AutoDo(self)
        end
      end
      if GameConfig.IsTestMode() and (GM.TestAutoRunModel.mergeAll or GM.TestAutoRunModel.autoRun) then
        if prompt == nil then
          if GM.TestAutoRunModel.mergeAll then
            GM.TestAutoRunModel.mergeAll = false
          end
          GM.TestAutoRunModel:AddInterval()
          self:_TryStartPrompt()
        else
          GM.TestAutoRunModel:ResetInterval()
        end
      end
    end
  end
  self.m_promptScheduler = self.m_promptSchedulerOrigin
  local defaultInterval = BaseSceneBoardView.MergePromptInterval
  local interval = defaultInterval + extraDelayTime
  if GameConfig.IsTestMode() then
    if GM.TestAutoRunModel.mergeAll then
      interval = 0
    elseif GM.TestAutoRunModel.autoRun then
      interval = GM.TestAutoRunModel.interval
    end
  end
  Scheduler.Schedule(self.m_promptScheduler, self, 0, 1, interval)
end

function BaseSceneBoardView:_StartPromptStep2()
  return self.m_prompt ~= nil and self.m_prompt:StartStep2(self)
end

function BaseSceneBoardView:_GetPrompts()
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    return {
      BoardPromptMergeItems.Create()
    }
  end
  local prompts = {
    BoardPromptMergeItems.Create(),
    BoardPromptOpenChest.Create(),
    BoardPromptTapSpreadItem.Create(),
    BoardPromptFinishOrder.Create(),
    BoardPromptCollect.Create(),
    BoardPromptBuildButton.Create(),
    BoardPromptSwallowItems.Create()
  }
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun then
    table.insert(prompts, BoardPormptPopCache.Create())
    table.insert(prompts, BoardPromptCollectAll.Create())
  end
  return prompts
end

function BaseSceneBoardView:_SelectPrompt()
  if GM.TutorialModel:HasAnyStrongTutorialOngoing() then
    return nil
  end
  local prompts = self:_GetPrompts()
  local promptConfig = self.m_model:GetPromptConfig()
  
  local function comparer(prompt1, prompt2)
    local priority1 = promptConfig[prompt1:GetType()].Priority
    local priority2 = promptConfig[prompt2:GetType()].Priority
    return priority1 < priority2
  end
  
  table.sort(prompts, comparer)
  
  local function isOpen(prompt)
    local closeCondition = promptConfig[prompt:GetType()].CloseCondition
    if closeCondition == nil then
      return true
    end
    local parts = StringUtil.Split(closeCondition, "_")
    if #parts == 1 then
      return GM.LevelModel:GetCurrentLevel() < tonumber(parts[1])
    end
    return true
  end
  
  for _, prompt in ipairs(prompts) do
    if isOpen(prompt) and prompt:CanStart(self) then
      return prompt
    end
  end
  return nil
end

function BaseSceneBoardView:_CancelPrompt()
  if self.m_promptScheduler then
    Scheduler.Unschedule(self.m_promptScheduler, self)
    self.m_promptScheduler = nil
  end
  if self.m_prompt ~= nil then
    self.m_prompt:Stop(self)
    self.m_prompt = nil
  end
end

function BaseSceneBoardView:ShowHandEffect(targetPosition)
  self.m_handEffectGo:SetActive(true)
  targetPosition = Vector3(targetPosition.x + 40, targetPosition.y - 65, 0)
  self.m_handEffectGo.transform.position = targetPosition
end

function BaseSceneBoardView:HideHandEffect()
  self.m_handEffectGo:SetActive(false)
end

function BaseSceneBoardView:_OnOrderStateChanged()
  self:_TryStartPrompt()
end

function BaseSceneBoardView:_OnOpenView(msg)
  if msg.name == UIPrefabConfigName.BaseSceneView then
    self:_AdjustBoardInfoBarPos()
  end
  if self.gameObject.activeInHierarchy and not GM.UIManager.allWindowClosed then
    self:_CancelPrompt()
  end
  if self.m_findEffectSeq and self.m_findEffectSeq:IsActive() then
    self.m_findEffectSeq:Complete()
  end
end

function BaseSceneBoardView:_OnCloseView()
  self:_TryStartPrompt()
end

function BaseSceneBoardView:_OnTutorialFinished()
  self:_TryStartPrompt()
end

function BaseSceneBoardView:StopBoardPromptFinishOrder()
  self:_CancelPrompt()
  self:_TryStartPrompt()
end

function BaseSceneBoardView:_TryStartPrompt(_, extraDelayTime)
  if self.gameObject.activeInHierarchy and GM.UIManager.allWindowClosed then
    self:_StartPrompt(extraDelayTime)
  end
end

function BaseSceneBoardView:_TryAutoRun()
  self:_UpdateIndicator()
  self.m_infoBar:UpdateInfoBar()
  self.m_model:ResetMergeAllDisableItem()
  self:_TryStartPrompt()
end

function BaseSceneBoardView:_OnGameModeChanged()
  if GM.SceneManager:GetGameMode() == self.m_model:GetGameMode() then
    self:_UpdateIndicator()
    self.m_infoBar:UpdateInfoBar()
    DelayExecuteFuncInView(function()
      if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderScrollRule) then
        self.m_orderArea:PlayAnimationWhenEnterMain()
      else
        self.m_orderArea:ScrollToFront()
      end
    end, 0.05, self, true)
  end
  if self.m_arrLuckyProduceGo ~= nil then
    for _, go in ipairs(self.m_arrLuckyProduceGo) do
      AddressableLoader.Destroy(go)
    end
    self.m_arrLuckyProduceGo = nil
  end
end

function BaseSceneBoardView:_ClearPointerDataOnUnexpectedPointerExit()
  if self.m_lastTouchedItem == nil then
    return
  end
  if self.m_onInventory then
    if self:_GetInventoryButton() then
      self:_GetInventoryButton():PlayDragEndEffect()
    end
    self.m_onInventory = false
  end
  local itemModel = self.m_lastTouchedItem:GetModel()
  if self.m_model:CanItemMove(itemModel) then
    self.m_model:DragItem(itemModel, self.m_model.CreatePosition(0, 0))
  end
  local selectedItem = self:GetSelectedItemModel()
  self:_UpdateIndicator(selectedItem, true)
  self.m_infoBar:UpdateInfoBar(selectedItem)
  self.m_moreThanOnceTap = false
  self.m_dragging = false
  self.m_lastTouchedItem = nil
  self:_UpdateItemAffectedEffect()
end

function BaseSceneBoardView:_OnPointerDown(eventData)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local screenPosition = eventData.position
  local worldPosition = self:ConvertScreenPositionToWorldPosition(Vector3(screenPosition.x, screenPosition.y, 0))
  local boardPosition = self:_GetBoardPosition(worldPosition)
  if boardPosition:IsValid() then
    local forceSourceBoardPosition = GM.TutorialModel:GetForceSourceBoardPosition()
    if forceSourceBoardPosition ~= nil and forceSourceBoardPosition ~= boardPosition then
      return
    elseif Table.ListContain(self.m_disabledPosList, boardPosition) then
      return
    end
    local itemModel = self.m_model:GetItem(boardPosition)
    if itemModel ~= nil then
      self.m_lastTouchedItem = self:GetItemView(itemModel)
      if not self.m_lastTouchedItem or self.m_lastTouchedItem.cantClick == true then
        return
      end
      if self.m_selectedBoardPosition == boardPosition then
        self.m_moreThanOnceTap = true
      end
      self:_UpdateIndicator(itemModel, false)
      self.m_infoBar:UpdateInfoBar(itemModel)
      if self:_StartPromptStep2() then
        self.m_startedPromptStep2 = true
      else
        self:_CancelPrompt()
      end
      if GameConfig.IsTestMode() and GM.AutoTestingServer and GM.AutoTestingServer:IsAutoTesting() and "MFPointerEventData" == eventData.name then
        self:_PassPointerGameObjectInfo(eventData, self.m_lastTouchedItem.gameObject, self.m_lastTouchedItem.transform.position)
      end
      if not self.m_moreThanOnceTap then
        EventDispatcher.DispatchEvent(EEventType.VibrationLight)
      end
      MicrofunProfiler.Instance:StartFrameTime(self.m_model:GetGameMode() .. "_interact", 100, 100)
      self.m_profiling.timer = nil
    end
  end
end

function BaseSceneBoardView:_OnDrag(eventData)
  if self.m_lastTouchedItem == nil then
    return
  end
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if not self.m_dragging and canItemMove then
    EventDispatcher.DispatchEvent(EEventType.StartDraggingItem, {
      item = self.m_lastTouchedItem
    })
    self:_UpdateIndicator()
    self:_UpdateItemAffectedEffect()
  end
  if not canItemMove then
    return
  end
  self.m_dragging = true
  local screenPosition = eventData.position
  local lastTouchedItemPosition = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(self.m_lastTouchedItem.transform.position))
  local lastTouchedItemSize = self.m_lastTouchedItem:GetSpriteRendererSize()
  if self:_GetInventoryButton() and self:_GetInventoryButton():IsItemAndButtonOverlap(lastTouchedItemPosition, lastTouchedItemSize) then
    if not self.m_onInventory then
      self.m_onInventory = true
      if self:_GetInventoryButton() then
        self:_GetInventoryButton():PlayDragStartEffect()
      end
    end
  elseif self.m_onInventory then
    if self:_GetInventoryButton() then
      self:_GetInventoryButton():PlayDragEndEffect()
    end
    self.m_onInventory = false
  end
  local worldPosition = self:ConvertScreenPositionToWorldPosition(Vector3(screenPosition.x, screenPosition.y, 0))
  self.m_lastTouchedItem.transform.position = Vector3(worldPosition.x, worldPosition.y, 0)
  if GameConfig.IsTestMode() and GM.AutoTestingServer and GM.AutoTestingServer:IsAutoTesting() and "MFPointerEventData" == eventData.name then
    self:_PassPointerGameObjectInfo(eventData, self.m_lastTouchedItem.gameObject, self.m_lastTouchedItem.transform.position)
  end
  self:_ShowMergeLight(worldPosition)
end

function BaseSceneBoardView:_OnPointerUp(eventData)
  self:_ClearMergeLight()
  if self.m_onInventory then
    if self:_GetInventoryButton() then
      self:_GetInventoryButton():PlayDragEndEffect()
    end
    self.m_onInventory = false
  end
  if self.m_lastTouchedItem == nil then
    self:_ResetAfterPointerUp(false)
    return
  end
  self:_ResetPressedState()
  local itemModel = self.m_lastTouchedItem:GetModel()
  if GameConfig.IsTestMode() and GM.AutoTestingServer and GM.AutoTestingServer:IsAutoTesting() and eventData ~= nil and "MFPointerEventData" == eventData.name then
    self:_PassPointerGameObjectInfo(eventData, self.m_lastTouchedItem.gameObject, self.m_lastTouchedItem.transform.position)
  end
  if self.m_model:GetItem(itemModel:GetPosition()) ~= itemModel then
    self:_ResetAfterPointerUp(false)
    return
  end
  if eventData == nil then
    itemModel:SetPosition(itemModel:GetPosition())
    self:_ResetAfterPointerUp(false)
    return
  end
  local screenPosition = eventData.position
  local worldPosition = self:ConvertScreenPositionToWorldPosition(Vector3(screenPosition.x, screenPosition.y, 0))
  local targetBoardPosition = self:_GetBoardPosition(worldPosition)
  if self.m_lastMergableItem ~= nil and CSTime.timeSinceLevelLoad - self.m_lastMergableItemTime < 0.15 then
    local lastMergeablePosition = self.m_lastMergableItem:GetPosition()
    if (lastMergeablePosition:GetX() - targetBoardPosition:GetX()) ^ 2 <= 1 and 1 >= (lastMergeablePosition:GetY() - targetBoardPosition:GetY()) ^ 2 then
      targetBoardPosition = lastMergeablePosition
    end
  end
  local forceTargetBoardPosition = GM.TutorialModel:GetForceTargetBoardPosition()
  if forceTargetBoardPosition ~= nil and forceTargetBoardPosition ~= targetBoardPosition then
    targetBoardPosition = self.m_model.CreatePosition(0, 0)
  end
  if Table.ListContain(self.m_disabledPosList, targetBoardPosition) then
    targetBoardPosition = self.m_model.CreatePosition(0, 0)
  end
  if self.m_dragging then
    if self.m_model:CanItemMove(itemModel) then
      local lastTouchedItemPosition = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(self.m_lastTouchedItem.transform.position))
      local lastTouchedItemSize = self.m_lastTouchedItem:GetSpriteRendererSize()
      if self:_GetInventoryButton() and self:_GetInventoryButton():IsItemAndButtonOverlap(lastTouchedItemPosition, lastTouchedItemSize) then
        local stored = false
        if GM.OpenFunctionModel:IsFunctionOpen(EFunction.Inventory) then
          if self.m_model:StoreItem(itemModel) then
            if GameConfig.IsTestMode() and GM.AutoTestingServer and GM.AutoTestingServer:IsAutoTesting() and "MFPointerEventData" == eventData.name then
              eventData.recordGameObjectPath = "!StoreItem"
            end
            if self:_GetInventoryButton() then
              self:_GetInventoryButton():PlayItemInEffect()
            end
            stored = true
          end
        elseif self:_GetInventoryButton() then
          self:_GetInventoryButton():ShowLockedPrompt()
        end
        if not stored then
          self.m_model:DragItem(itemModel, targetBoardPosition)
          EventDispatcher.DispatchEvent(EEventType.VibrationHeavy)
        end
      else
        self.m_model:DragItem(itemModel, targetBoardPosition)
        if self.m_model:GetItem(itemModel:GetPosition()) == itemModel then
          self.m_selectedBoardPosition = itemModel:GetPosition()
        else
          local targetItem = self.m_model:GetItem(targetBoardPosition)
          if targetItem and targetItem:GetComponent(ItemSwallowChain) then
            self.m_selectedBoardPosition = nil
          else
            self.m_selectedBoardPosition = targetBoardPosition
          end
        end
      end
    end
  elseif forceTargetBoardPosition == nil or forceTargetBoardPosition == itemModel:GetPosition() then
    if self.m_moreThanOnceTap then
      local map = self.m_model:GetOrderCodeStateMap()
      local itemSpread = itemModel:GetComponent(ItemSpread)
      if map[itemModel:GetCode()] and (itemSpread == nil or itemSpread:GetState() == ItemSpreadState.OpenFinish) then
        local sortedOrders, hasFinishing = self.m_orderArea:GetSortedOrders()
        if not hasFinishing then
          self.m_model:TryFinishOrders(sortedOrders, itemModel)
        end
      elseif self.m_model:GetGameMode() == EGameMode.NoCDTrain and GM.ActivityManager:GetModel(self.m_activityType):IsOrderNeededItemCode(itemModel:GetCode()) and (itemSpread == nil or itemSpread:GetState() == ItemSpreadState.OpenFinish) then
        GM.ActivityManager:GetModel(self.m_activityType):TryFinishOrderByItem(itemModel)
      elseif self.m_infoBar:GetOpenBtnGo().activeInHierarchy then
        self.m_infoBar:GetInfoContent():OnOpenButtonClicked()
      elseif itemModel:GetComponent(ItemChoose) == nil then
        local pick = itemModel:GetComponent(ItemPick)
        if pick ~= nil and pick:GetChoosedCode() == nil then
          GM.UIManager:OpenView(UIPrefabConfigName.ItemPickWindow, itemModel)
        else
          self.m_model:TapItem(itemModel)
        end
      elseif not GM.UIManager:IsEventLock() and not GM.UIManager:IsViewExisting(UIPrefabConfigName.ItemChooseWindow) then
        GM.UIManager:OpenView(UIPrefabConfigName.ItemChooseWindow, itemModel)
      end
    elseif itemModel:GetComponent(ItemMapBlocker) ~= nil then
      self.m_model:TapItem(itemModel)
    end
    if self.m_model:GetItem(itemModel:GetPosition()) == itemModel then
      local itemView = self:GetItemView(itemModel)
      local pos = self:ConvertWorldPositionToScreenPosition(itemView.transform.position) + Vector3(0, self.m_model.TileSize / 2, 0)
      if itemModel:GetComponent(ItemMapBlocker) ~= nil then
        GM.UIManager:ShowPrompt(GM.GameTextModel:GetText("item_lock_mb", itemModel:GetComponent(ItemMapBlocker):GetUnlockLevel()), pos)
        GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
      elseif itemModel:GetComponent(ItemPaperBox) ~= nil then
        local itemSticker = itemModel:GetComponent(ItemSticker)
        if itemSticker ~= nil and itemSticker:IsReward() then
          if not self.m_moreThanOnceTap then
            local screenPos = PositionUtil.UICameraScreen2World(pos)
            GM.UIManager:ShowPromptWithKeyScreenPos("board_reward_locked_hint", Vector2(0, screenPos.y))
          end
          itemSticker:OnChoose()
        else
          GM.UIManager:ShowPromptWithKey("item_lock_pb", pos)
          GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
        end
      elseif itemModel:GetComponent(ItemCobweb) ~= nil then
        GM.UIManager:ShowPromptWithKey("item_lock_cw", pos)
        itemView:PlayTapAnimation(0.2)
        GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
      else
        itemView:PlayTapAnimation(0.2)
      end
    end
  end
  self:_ResetAfterPointerUp(true)
  self.m_profiling.counter = 100
end

function BaseSceneBoardView:_ResetPressedState()
  self.m_eventTrigger:ResetPressedState()
end

function BaseSceneBoardView:_ResetAfterPointerUp(playAnimation)
  local selectedItem = self:GetSelectedItemModel()
  self:_UpdateIndicator(selectedItem, playAnimation)
  self.m_infoBar:UpdateInfoBar(selectedItem)
  local itemCode
  if selectedItem ~= nil then
    itemCode = selectedItem:GetCode()
  end
  EventDispatcher.DispatchEvent(EEventType.BoardPointerUp, {
    dragging = self.m_dragging,
    selectItemCode = itemCode
  })
  self.m_moreThanOnceTap = false
  self.m_dragging = false
  self.m_lastTouchedItem = nil
  self:_UpdateItemAffectedEffect()
  if self.m_startedPromptStep2 then
    self.m_startedPromptStep2 = false
  else
    self:_TryStartPrompt()
  end
  self.m_lastMergableItem = nil
  self.m_lastMergableItemTime = nil
end

function BaseSceneBoardView:_OnMergeItem(message)
  local newItemType = message.New:GetType()
  local level = GM.ItemDataModel:GetChainLevel(message.New:GetType())
  local sfx
  if level < 12 then
    sfx = AudioFileConfigName["SfxMergelv" .. level]
  else
    sfx = AudioFileConfigName.SfxMergelv12
  end
  GM.AudioModel:PlayEffect(sfx)
  local sourceItemView = self:GetItemView(message.Source)
  local targetItemView = self:GetItemView(message.Target)
  local newItemView = self:_AddItemView(message.New, targetItemView)
  if sourceItemView == nil or targetItemView == nil then
    self:_RemoveItemViewByView(sourceItemView)
    self:_RemoveItemViewByView(targetItemView)
    return
  end
  sourceItemView.toBeRemoved = true
  targetItemView.toBeRemoved = true
  local targetPosition = targetItemView.transform.localPosition
  local sequence = DOTween.Sequence()
  local delay = 0
  if message.Source:GetType() == ItemType.Ice then
    sequence:InsertCallback(0.1, function()
      sourceItemView:IceBoom(self.m_itemsTransform)
    end)
    delay = 0.5
  elseif message.Target:GetType() == ItemType.Ice then
    sequence:InsertCallback(0.1, function()
      targetItemView:IceBoom(self.m_itemsTransform)
    end)
    delay = 0.5
  end
  sequence:Insert(0, sourceItemView.transform:DOLocalMove(targetPosition, 0.1))
  sequence:Insert(0 + delay, sourceItemView.transform:DOScale(0.3, 0.1))
  targetItemView:MergeLightDisappear()
  sequence:Insert(0 + delay, targetItemView.transform:DOScale(0.3, 0.1))
  newItemView.transform.localScale = Vector3.zero
  sequence:Insert(0.1 + delay, newItemView.transform:DOScale(1.3, 0.2))
  sequence:Insert(0.3 + delay, newItemView.transform:DOScale(1, 0.1))
  sequence:InsertCallback(0.1 + delay, function()
    self:_RemoveItemViewByView(sourceItemView)
    self:_RemoveItemViewByView(targetItemView)
    newItemView.transform.localScale = 0.3 * V3One
    local mergeEffectPrefab = self.m_mergeEffectManager:GetPrefab(level)
    if mergeEffectPrefab ~= nil then
      local gameObject = Object.Instantiate(mergeEffectPrefab, targetItemView.transform.position, Quaternion.identity, self.m_itemsTransform)
      DelayExecuteFunc(function()
        gameObject:RemoveSelf()
      end, 1)
    end
  end)
  local selectedItem = message.New
  self:_UpdateIndicator(selectedItem, true)
  self.m_infoBar:UpdateInfoBar(selectedItem)
end

function BaseSceneBoardView:_OnSpreadItem(message)
  local sfx = AudioFileConfigName.SfxMergeSpawnManual
  if message.New:GetComponent(ItemBubble) ~= nil then
    sfx = AudioFileConfigName.SfxMergeBubbleSpawn
  elseif message.BoardSpreadType == BoardSpreadType.Lucky or message.BoardSpreadType == BoardSpreadType.ExtraLucky then
    sfx = AudioFileConfigName.SfxMergeSpawnLucky1
  elseif message.BoardSpreadType == BoardSpreadType.SuperLucky or message.BoardSpreadType == BoardSpreadType.ExtraSuperLucky then
    sfx = AudioFileConfigName.SfxMergeSpawnLucky2
  elseif message.BoardSpreadType == BoardSpreadType.DoubleLucky or message.BoardSpreadType == BoardSpreadType.TripleLucky1 then
    sfx = AudioFileConfigName.SfxMergeSpawnLucky3
  elseif message.BoardSpreadType == BoardSpreadType.TripleLucky2 then
    sfx = AudioFileConfigName.SfxMergeSpawnLucky4
  end
  GM.AudioModel:PlayEffect(sfx)
  local sourceItemView = self:GetItemView(message.Source)
  local newItemView = self:_AddItemView(message.New)
  local originalItemView
  if newItemView == nil then
    GM.BIManager:LogErrorInfo(EBIProjectType.ElementNoViewWhenRemove, "spreadItem new ItemView Fail" .. message.New:GetCode())
    return
  end
  if message.OriginalItem ~= nil and not BoardSpreadType.IsLuckySpread(message.BoardSpreadType) then
    originalItemView = self.m_itemViewFactory:Create(self, message.OriginalItem)
    originalItemView:SetDoubleEnergyFlyItemInfo()
  end
  local flyItemView = newItemView
  local nHintCode = message.New:GetCode()
  if originalItemView ~= nil then
    flyItemView = originalItemView
    newItemView.gameObject:SetActive(false)
    nHintCode = message.OriginalItem:GetCode()
  end
  local promptStyle, promptKey = GM.ItemDataModel:GetSpreadPrompt(nHintCode, message.Source:GetCode())
  local curMode = GM.SceneManager:GetGameMode()
  local newItemLocalPos = newItemView.transform.localPosition
  local newItemWorldPos = newItemView.transform.position
  
  local function callback()
    if originalItemView ~= nil then
      DelayExecuteFunc(function()
        if not originalItemView.gameObject:IsNull() then
          originalItemView.gameObject:RemoveSelf()
        end
        if not newItemView.gameObject:IsNull() then
          newItemView.gameObject:SetActive(true)
        end
      end, 0.1)
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.effect_qizi_up_1), self:GetItemsTransform(), newItemLocalPos, function(go)
        DelayExecuteFunc(function()
          go:RemoveSelf()
        end, 1)
      end)
    end
    if promptStyle then
      if GM.SceneManager:GetGameMode() ~= curMode or not GM.UIManager.allWindowClosed then
        return
      end
      GM.UIManager:ShowPromptWithKey(promptKey, self:ConvertWorldPositionToScreenPosition(newItemWorldPos) + Vector3(0, self.m_model.TileSize / 2, 0), 0.6, promptStyle)
    end
  end
  
  if originalItemView ~= nil then
    self:_PlayDoubleEnergyJumpAnimation(flyItemView, sourceItemView.transform.localPosition, newItemView.transform.localPosition, callback, message.BoardSpreadType)
  else
    self:_PlayJumpAnimation(flyItemView, sourceItemView.transform.localPosition, newItemView.transform.localPosition, callback, message.BoardSpreadType)
  end
  local itemSpread = message.Source:GetComponent(ItemSpread)
  if self.m_selectedBoardPosition == message.Source:GetPosition() and itemSpread ~= nil and itemSpread:IsAutoSpread() then
    self.m_infoBar:UpdateInfoBar(message.Source)
  end
end

function BaseSceneBoardView:_OnCollectFromItem(message)
  GM.OpenFunctionModel:SetFunctionEnable(EFunction.Inventory)
  local sourceItemView = self:GetItemView(message.Source)
  local startPos = sourceItemView.gameObject.transform.position
  local invBtn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
  local endPos = PositionUtil.UICameraWorld2Screen(invBtn:GetOriginalPosition())
  local startLocalPos = self.m_canvas.transform:InverseTransformPoint(startPos)
  local endLocalPos = self.m_canvas.transform:InverseTransformPoint(self:ConvertScreenPositionToWorldPosition(endPos))
  startLocalPos.z = 0
  endLocalPos.z = 0
  local offset = message.Source:GetPosition():GetX() == 1 and 1 or -1
  for i, v in ipairs(message.Rewards) do
    PropertyAnimationManager.AddFlyingCount()
    DelayExecuteFunc(function()
      self:_PlayFlyElementAnimInBoardCanvas(v[PROPERTY_TYPE], startLocalPos, endLocalPos, invBtn, offset)
    end, 0.15 * (i - 1))
  end
  if message.Source:GetPosition() == self.m_selectedBoardPosition then
    self:_UpdateIndicator()
    self.m_infoBar:UpdateInfoBar()
  end
  local itemView = self:GetItemView(message.Source)
  itemView.toBeRemoved = true
  local delay = 0.15 * #message.Rewards
  DelayExecuteFunc(function()
    itemView:ShowCollapseEffect()
    itemView:OnCollapse()
  end, delay)
  DelayExecuteFunc(function()
    self:_RemoveItemViewByView(itemView)
  end, 1.2 + delay)
end

function BaseSceneBoardView:_OnCollectFromCache(message)
  GM.OpenFunctionModel:SetFunctionEnable(EFunction.Inventory)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnManual)
  local startPos = self:GetBoardCacheRoot():GetCachedItemWorldPos()
  local invBtn = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
  local endPos = PositionUtil.UICameraWorld2Screen(invBtn:GetOriginalPosition())
  local startLocalPos = self.m_canvas.transform:InverseTransformPoint(startPos)
  local endLocalPos = self.m_canvas.transform:InverseTransformPoint(self:ConvertScreenPositionToWorldPosition(endPos))
  startLocalPos.z = 0
  endLocalPos.z = 0
  for i, v in ipairs(message.Rewards) do
    PropertyAnimationManager.AddFlyingCount(EPropertyFlyingType.CacheItem)
    DelayExecuteFunc(function()
      self:_PlayFlyElementAnimInBoardCanvasNoJump(v[PROPERTY_TYPE], startLocalPos, endLocalPos, invBtn, EPropertyFlyingType.CacheItem)
    end, 0.15 * (i - 1))
  end
end

function BaseSceneBoardView:_PlayFlyElementAnimInBoardCanvas(type, startPos, endPos, btn, offset)
  GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.FlyElement), self.m_canvas.transform, startPos, function(go)
    if not go:IsNull() then
      go:GetLuaTable():Init(EPropertySprite[type], nil, 1, {
        prefabName = UIPrefabConfigName.effect_ui_daoju_guang_1,
        sortingOrder = 0
      })
      local trans = go.transform
      trans.localScale = V3One
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBurgerJump)
      local sequence = DOTween.Sequence()
      sequence:Append(trans:DOLocalMoveY(startPos.y + BaseSceneBoardModel.TileSize * 0.75, 0.3):SetEase(Ease.OutCubic))
      sequence:Join(trans:DOLocalMoveX(startPos.x + BaseSceneBoardModel.TileSize * offset, 0.3):SetEase(Ease.OutCubic))
      sequence:Append(trans:DOLocalMove(endPos, 0.5):SetEase(Ease.InQuad))
      sequence:OnKill(function()
        Recycle(go)
        if btn ~= nil and btn.gameObject ~= nil and not btn.gameObject:IsNull() and btn.IconScaleAnimation ~= nil then
          btn:IconScaleAnimation(true, type)
        end
        EventDispatcher.DispatchEvent(EEventType.OnFlyElementArrived, {type = type})
        PropertyAnimationManager.RemoveFlyingCount()
      end)
    end
  end)
end

function BaseSceneBoardView:_PlayFlyElementAnimInBoardCanvasNoJump(type, startPos, endPos, btn, flyingType)
  GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.FlyElement), self.m_canvas.transform, startPos, function(go)
    if not go:IsNull() then
      go:GetLuaTable():Init(EPropertySprite[type], nil, 1, {
        prefabName = UIPrefabConfigName.effect_ui_daoju_guang_1,
        sortingOrder = 0
      })
      local trans = go.transform
      trans.localScale = V3One
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBurgerJump)
      local seq
      if ToolCodeToLevel[type] == 5 then
        seq = DOTween.Sequence()
        seq:Append(trans:DOLocalMoveY(startPos.y * 0.9 + endPos.y * 0.1, 0.3):SetEase(Ease.OutCubic))
        seq:Join(trans:DOLocalMoveX(startPos.x * 0.9 + endPos.x * 0.1, 0.3):SetEase(Ease.OutCubic))
        seq:Join(trans:DOScale(1.5, 0.2):SetEase(Ease.OutCubic))
        seq:Append(trans:DOLocalMove(endPos, 0.45):SetEase(Ease.InQuad))
        seq:Insert(0.45, trans:DOScale(1, 0.2):SetEase(Ease.OutCubic))
      else
        seq = trans:DOLocalMove(endPos, 0.8):SetEase(Ease.InQuad)
      end
      seq:OnKill(function()
        Recycle(go)
        if btn ~= nil and btn.gameObject ~= nil and not btn.gameObject:IsNull() and btn.IconScaleAnimation ~= nil then
          btn:IconScaleAnimation(true, type)
        end
        EventDispatcher.DispatchEvent(EEventType.OnFlyElementArrived, {type = type})
        PropertyAnimationManager.RemoveFlyingCount(flyingType)
      end)
    end
  end)
end

function BaseSceneBoardView:_OnCollapseItem(message)
  if message.Source:GetComponent(ItemPaperBox) ~= nil then
    self.m_hasCollapsedPaperBox = true
  else
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemCollapase)
  end
  if message.Source:GetComponent(ItemSwallow) ~= nil or message.Source:GetPosition() == self.m_selectedBoardPosition then
    self:_UpdateIndicator()
    self.m_infoBar:UpdateInfoBar()
  end
  local itemView = self:GetItemView(message.Source)
  if message.New ~= nil then
    self:_AddItemView(message.New, itemView)
  end
  itemView.toBeRemoved = true
  itemView:ShowCollapseEffect()
  itemView:OnCollapse()
  DelayExecuteFunc(function()
    self:_RemoveItemViewByView(itemView)
  end, 1.2)
end

function BaseSceneBoardView:_OnShakeItem(message)
  local itemView = self:GetItemView(message.Source)
  if itemView then
    itemView:PlayShakeAnim()
  end
end

function BaseSceneBoardView:_OnItemScaled(message)
  local items = message and message.Items
  if Table.IsEmpty(items) then
    return
  end
  for _, item in pairs(items) do
    local itemView = self:GetItemView(item)
    if itemView then
      itemView:PlayTapAnimation(0.3)
    end
  end
end

function BaseSceneBoardView:_OnCostItem(message)
  self:_RemoveItemViewByView(self:GetItemView(message.Source))
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator()
    self.m_infoBar:UpdateInfoBar()
  end
end

function BaseSceneBoardView:_OnBatchSwallowItem(message)
  local function onBegin()
    self:_UpdateIndicator()
    
    GM.UIManager:SetEventLock(true)
  end
  
  local function onEnd()
    GM.UIManager:SetEventLock(false)
  end
  
  self:_DoBatchSwallowItem(message, onBegin, onEnd)
end

function BaseSceneBoardView:_OnTransformItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
    self.m_infoBar:UpdateInfoBar(message.New)
  end
  BaseActionBoardView._OnTransformItem(self, message)
end

function BaseSceneBoardView:_GetHudButtonByPropertyType(ePropertyType)
  local hudKey = ePropertyType == EPropertyType.Gold and ESceneViewHudButtonKey.Coin or ESceneViewHudButtonKey.Energy
  local baseSceneView = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.BaseSceneView)
  return baseSceneView:GetHudButton(hudKey)
end

function BaseSceneBoardView:_OnSellItem(message)
  local itemView = self:GetItemView(message.Source)
  if itemView == nil then
    local sourceItemCode = message.Source and message.Source:GetCode()
    Log.Error("OnSellItem Error: " .. tostring(sourceItemCode))
    return
  end
  local cost = message.Source:GetSellingPrice()
  local costType = self.m_model:GetSellingPropertyType()
  if cost and cost ~= 0 then
    local target = self:_GetHudButtonByPropertyType(costType)
    local startPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(itemView.transform.position))
    local endPos = target:GetScaleTrans().position
    local code = message.Source:GetCode()
    GM.PropertyDataManager:PlayCollectAnimation({
      {
        [PROPERTY_TYPE] = code,
        [PROPERTY_COUNT] = 1
      }
    }, startPos, {
      {
        endPos = endPos,
        flyCount = 1,
        spriteKey = GM.ItemDataModel:GetSpriteName(code),
        targetButton = target
      }
    })
    local properties = {
      {
        [PROPERTY_TYPE] = costType,
        [PROPERTY_COUNT] = cost
      }
    }
    DelayExecuteFunc(function()
      GM.PropertyDataManager:PlayAcquireAnimation(properties)
    end, 0.8)
    self:_RemoveItemViewByView(itemView)
  else
    itemView.toBeRemoved = true
    itemView.transform:DOScale(0, 0.5):OnComplete(function()
      if self:GetItemView(message.Source) == itemView then
        self:_RemoveItemViewByView(itemView)
      else
        itemView:OnRemoved()
        itemView.transform:DOKill(false)
        itemView.gameObject:RemoveSelf()
      end
    end)
  end
  self:_UpdateIndicator()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemSell)
end

function BaseSceneBoardView:_OnUndoSellItem(message)
  if message.Removed ~= nil then
    self:_RemoveItemViewByView(self:GetItemView(message.Removed))
  end
  local itemView = self:_AddItemView(message.Source)
  itemView.transform.localScale = V3Zero
  if message.Source:GetSellingPrice() ~= 0 then
    local costType = self.m_model:GetSellingPropertyType()
    local target = self:_GetHudButtonByPropertyType(costType)
    local startPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(itemView.transform.position))
    local endPos = target:GetScaleTrans().position
    startPos.z = 0
    local code = message.Source:GetCode()
    GM.PropertyDataManager:PlayCollectAnimation({
      {
        [PROPERTY_TYPE] = code,
        [PROPERTY_COUNT] = 1
      }
    }, endPos, {
      {
        endPos = startPos,
        flyCount = 1,
        spriteKey = GM.ItemDataModel:GetSpriteName(code)
      }
    })
    DelayExecuteFunc(function()
      if not (itemView and itemView.transform) or itemView.transform:IsNull() then
        return
      end
      itemView.transform.localScale = V3One
    end, 0.8)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxSpendCoins)
  else
    itemView.transform:DOScale(1, 0.5)
  end
  self.m_infoBar:UpdateInfoBar()
end

function BaseSceneBoardView:_OnPopCachedItem(message)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnManual)
  local itemView = self:_AddItemView(message.New)
  local worldPosition = self:GetBoardCacheRoot():GetCachedItemWorldPos()
  local sourcePosition = self.transform:InverseTransformPoint(worldPosition)
  local targetPosition = itemView.transform.localPosition
  PropertyAnimationManager.AddTypeCount(EPropertyFlyingType.CacheItem)
  self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, function()
    if not UIUtil.IsEmptyComponent(itemView) and StringUtil.StartWith(message.New:GetCode(), "sbox_2") then
      itemView:ShowAnniversarySBoxEffect()
    end
  end, nil, nil, function()
    PropertyAnimationManager.RemoveTypeCount(EPropertyFlyingType.CacheItem)
  end)
end

function BaseSceneBoardView:_OnChooseItem(message)
  self:_UpdateIndicator(message.New, true)
  self.m_infoBar:UpdateInfoBar(message.New)
  self:_RemoveItemViewByView(self:GetItemView(message.Source))
  self:_AddItemView(message.New)
  local pos = message.New:GetPosition():ToLocalPosition()
  pos = Vector3(pos.x + self.m_model.TileSize / 2, pos.y + self.m_model.TileSize / 2, 0)
  GM.ResourceLoader:LoadPrefab(GM.DataResource:GetScenePrefabConfig(ScenePrefabConfigName.effect_wenhao_open), self.transform, pos, function(go)
  end)
end

function BaseSceneBoardView:_OnSplitItem(message)
  local function onBegin()
    self:_UpdateIndicator()
    
    self.m_infoBar:UpdateInfoBar()
    GM.UIManager:SetEventLock(true)
  end
  
  local function onEnd()
    GM.UIManager:SetEventLock(false)
  end
  
  self:_DoSplitItem(message, onBegin, onEnd)
end

function BaseSceneBoardView:_OnTimeSkip(message)
  local cPos = message.Item:GetPosition()
  local item, itemView
  for position in self.m_model.GetValidPositionIterator() do
    item = self.m_model:GetItem(position)
    if item ~= nil and message.Item ~= item and self.m_model:CanItemMove(item) then
      itemView = self:GetItemView(item)
      if itemView ~= nil then
        itemView:PlayTimeSkipAnimation(self:_GetTimeSkipDelay(cPos, position))
      end
    end
  end
end

function BaseSceneBoardView:_GetTimeSkipDelay(cPos, tPos)
  return math.max(math.abs(cPos:GetX() - tPos:GetX()) - 1, math.abs(cPos:GetY() - tPos:GetY()) - 1) * 0.1
end

function BaseSceneBoardView:_OnBubbleBreak(message)
  self:_UpdateIndicator(message.New, true)
  self.m_infoBar:UpdateInfoBar(message.New)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local spriteRenderer = sourceItemView:GetSpriteRenderer()
  local innerSpriteRenderer = sourceItemView:GetInnerSpriteRenderer()
  innerSpriteRenderer.gameObject:SetActive(false)
  local newItemView = self:_AddItemView(message.New, sourceItemView)
  newItemView.transform.localScale = Vector3(0.8, 0.8, 1)
  local sequence = DOTween.Sequence()
  sequence:Append(spriteRenderer.transform:DOScale(2, 0.6))
  sequence:Insert(0, spriteRenderer:DOFade(0, 0.6))
  sequence:AppendCallback(function()
    sourceItemView:ShowBubbleBreakLight()
  end)
  sequence:AppendInterval(1)
  sequence:Insert(0.6, newItemView.transform:DOScale(1, 0.3))
  sequence:AppendCallback(function()
    self:_RemoveItemViewByView(sourceItemView)
  end)
  sourceItemView:RemoveActivityToken()
end

function BaseSceneBoardView:_OnBubbleDisappear(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
    self.m_infoBar:UpdateInfoBar(message.New)
  end
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local spriteRenderer = sourceItemView:GetSpriteRenderer()
  local innerSpriteRenderer = sourceItemView:GetInnerSpriteRenderer()
  local newItemView = self:_AddItemView(message.New, sourceItemView)
  newItemView.transform.localScale = Vector3.zero
  newItemView:UpdateItemAffectedEffect(self.m_lastTouchedItem and self.m_lastTouchedItem:GetModel() or nil)
  local sequence = DOTween.Sequence()
  sequence:Append(innerSpriteRenderer.transform:DOScale(0, 0.2))
  sequence:Append(spriteRenderer.transform:DOScale(2, 0.8))
  sequence:Insert(0.2, spriteRenderer:DOFade(0, 0.8))
  sequence:Insert(0.2, newItemView.transform:DOScale(1, 0.2))
  sequence:AppendCallback(function()
    self:_RemoveItemViewByView(sourceItemView)
  end)
  sourceItemView:RemoveActivityToken()
end

function BaseSceneBoardView:_OnIceDisappear(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
    self.m_infoBar:UpdateInfoBar(message.New)
  end
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  sourceItemView:IceDisappear()
  local innerSpriteRenderer = sourceItemView:GetInnerSpriteRenderer()
  local newItemView = self:_AddItemView(message.New, sourceItemView)
  newItemView.transform.localScale = Vector3.zero
  newItemView:UpdateItemAffectedEffect(self.m_lastTouchedItem and self.m_lastTouchedItem:GetModel() or nil)
  local sequence = DOTween.Sequence()
  sequence:Append(innerSpriteRenderer.transform:DOScale(0, 0.2))
  sequence:Insert(0.2, newItemView.transform:DOScale(1, 0.2))
  sequence:AppendCallback(function()
    self:_RemoveItemViewByView(sourceItemView)
  end)
end

function BaseSceneBoardView:_OnFinishOrder(message, activityOrderCell, delayTime)
  self.m_orderArea:ForceRebuildLayout()
  self.m_orderArea:SetScrollEnabled(false)
  local isSpokespersonActivity = message and message.ActivityType and SpokespersonDefinition[message.ActivityType]
  if isSpokespersonActivity then
    GM.UIManager:SetEventLock(true)
  end
  local sequence = DOTween.Sequence()
  local targetCell = self.m_orderArea:GetCell(message.Order) or activityOrderCell
  if not targetCell then
    return sequence
  end
  local orderType = message.Order:GetType()
  local fDelayTime = delayTime or 0
  if targetCell:CanPlaySurpriseChestRewardAnim() then
    local animTime = targetCell:GetSurpriseChestRewardAnimTime()
    targetCell:WaitPlaySurpriseChestAnim(true)
    sequence:InsertCallback(fDelayTime, function()
      targetCell:WaitPlaySurpriseChestAnim(false)
      targetCell:PlaySurpriseChestRewardAnim()
    end)
    fDelayTime = fDelayTime + animTime
  end
  if orderType == OrderType.CurtainCall then
    fDelayTime = 0.3
  end
  local itemFlyTime = 0.5
  
  local function removeOrderItemFunc(arrItems, bToBeStore)
    if Table.IsEmpty(arrItems) then
      return
    end
    for index, itemModel in ipairs(arrItems) do
      if itemModel.stored then
        self:_PlayRemoveOrderStoredItemAnimation(targetCell, index, itemModel:GetCode(), itemFlyTime)
      else
        self:_PlayRemoveOrderItemAnimation(targetCell, index, itemModel, itemFlyTime, bToBeStore)
      end
    end
  end
  
  if fDelayTime == 0 then
    removeOrderItemFunc(message.Removed)
    removeOrderItemFunc(message.Stored, true)
  else
    for index, itemModel in ipairs(message.Removed) do
      if not itemModel.stored then
        self:_SetItemViewToBeRemoved(itemModel)
      end
    end
    for index, itemModel in ipairs(message.Stored or {}) do
      if not itemModel.stored then
        self:_SetItemViewToBeRemoved(itemModel)
      end
    end
    sequence:InsertCallback(fDelayTime, function()
      removeOrderItemFunc(message.Removed)
      removeOrderItemFunc(message.Stored, true)
    end)
  end
  fDelayTime = fDelayTime + itemFlyTime
  if targetCell:IsHavePlayMultiReward() then
    local fWaitTime = targetCell:GetPlayDoubleAniTime()
    sequence:InsertCallback(fDelayTime, function()
      targetCell:PlayDoubleDecorationCoinAni()
    end)
    fDelayTime = fDelayTime + fWaitTime
  end
  if orderType == OrderType.CurtainCall then
    local dt = targetCell:GetPdArrivedAnimationDuration()
    sequence:InsertCallback(fDelayTime, function()
      targetCell:PlayPdArrivedAnimation()
    end)
    fDelayTime = fDelayTime + dt
    if not Table.IsEmpty(message.Stored) then
      dt = 0.8
      do
        local function storeItemFunc()
          for index, item in ipairs(message.Stored) do
            self:_PlayCurtainCallStoreItemToInventoryAnimation(targetCell, item, dt, message.bStoreSuccess, index == 1 and #message.Stored or nil)
          end
        end
        
        sequence:InsertCallback(fDelayTime, storeItemFunc)
        fDelayTime = fDelayTime + dt
      end
    end
  end
  sequence:InsertCallback(fDelayTime, function()
    targetCell:PlayCoinEffect()
    local rewardPosTrans = targetCell.GetRewardPosTrans and targetCell:GetRewardPosTrans() or targetCell:GetIconArea()
    local worldPosition = rewardPosTrans.transform.position
    local screenPosition = self:ConvertWorldPositionToScreenPosition(worldPosition)
    local uiWorldPosition = PositionUtil.UICameraScreen2World(screenPosition)
    local positionArray = {
      uiWorldPosition,
      uiWorldPosition,
      uiWorldPosition
    }
    for i = 1, #(message.Rewards or {}) do
      positionArray[i] = uiWorldPosition
    end
    local viewData = {
      arrWorldPos = positionArray,
      noDelayTime = false,
      delayTime = 0.15
    }
    local rewards = {}
    local bandRewards = {}
    for k, v in pairs(message.Rewards or {}) do
      if v[PROPERTY_TYPE] == EPropertyType.BandToken1 or v[PROPERTY_TYPE] == EPropertyType.BandToken2 or v[PROPERTY_TYPE] == EPropertyType.BandToken3 then
        bandRewards[#bandRewards + 1] = v
      else
        rewards[#rewards + 1] = v
      end
    end
    for i = 1, #rewards do
      if string.match(string.sub(rewards[i][PROPERTY_TYPE], 1, 4), ItemCodePrefix.Tool) ~= nil then
        local temp = rewards[1]
        rewards[1] = rewards[i]
        rewards[i] = temp
        break
      end
    end
    if isSpokespersonActivity then
      GM.UIManager:SetEventLock(false)
    end
    if not Table.IsEmpty(rewards) then
      if message.ActivityType ~= nil and SpokespersonDefinition[message.ActivityType] ~= nil then
        GM.UIManager:OpenView(SpokespersonDefinition[message.ActivityType].RewardWindowPrefabName, message.ActivityType, rewards, uiWorldPosition)
      else
        RewardApi.AcquireRewardsInView(rewards, viewData, true)
      end
    end
    if not Table.IsEmpty(bandRewards) then
      BandModel.PlayBandScoreAcquireAnimation(bandRewards, uiWorldPosition, EItemTokenTriggerType.Order)
    end
    EventDispatcher.DispatchEvent(EEventType.AcquireOrderRewardInView, {
      order = message.Order,
      rewards = rewards,
      viewData = viewData
    })
    local order = message.Order
    if order.bIsActOrder and order:GetActType() == ActivityType.ExtraCustomer then
      WindowPopupHelper.AddWindowToPopupChainWithExtraArgs(UIPrefabConfigName.ExtraCustomerRewardWindow, {order}, false, false, EGameMode.Main)
    end
  end)
  if targetCell:CanPlayDecorationScoreRewardAnim() then
    local animTime = targetCell:GetDecorationScoreRewardAnimTime()
    sequence:InsertCallback(fDelayTime, function()
      targetCell:PlayDecorationScoreRewardAnim()
    end)
    fDelayTime = fDelayTime + animTime
  end
  if targetCell:CanPlaySunflowerRewardAnim() then
    local animTime = targetCell:GetSunflowerRewardAnimTime()
    sequence:InsertCallback(fDelayTime, function()
      targetCell:PlaySunflowerRewardAnim()
    end)
    fDelayTime = fDelayTime + animTime
  end
  sequence:InsertCallback(fDelayTime + 0.01, function()
    self.m_orderArea:SetScrollEnabled(true)
    if activityOrderCell then
      self.m_orderArea:OnFinishActivityOrder(activityOrderCell)
      return
    end
    self.m_orderArea:FinishOrderAndEnterNewOrder(message.Order, function()
      self:_TryStartPrompt()
    end)
  end)
  return sequence
end

function BaseSceneBoardView:_OnFinishOrderNew(message, activityOrderCell)
  local targetCell = self.m_orderArea:GetCell(message.Order) or activityOrderCell
  if not targetCell then
    return
  end
  self.m_orderArea:ForceRebuildLayout()
  self.m_orderArea:SetScrollEnabled(false)
  message.IsDecoScoreOrder = targetCell:CanPlayDecorationScoreRewardAnim()
  local sequence = DOTween.Sequence()
  local itemFlyTime = 0.5
  for index, itemModel in ipairs(message.Removed) do
    if not itemModel.stored then
      self:_SetItemViewToBeRemoved(itemModel)
    end
  end
  for index, itemModel in ipairs(message.Stored or {}) do
    if not itemModel.stored then
      self:_SetItemViewToBeRemoved(itemModel)
    end
  end
  PropertyAnimationManager.AddFlyingCount()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderEventLock) then
    self:SetRaycastEnabled(false)
  end
  local moveDuration = 0.5
  local bRight = OrderFinishRewardWindow.NeedMoveOrderToRight(message.Rewards, targetCell)
  if not activityOrderCell then
    moveDuration = self.m_orderArea:ScrollTargetOrderToView(message.Order:GetId(), true, false, false, false, bRight, moveDuration)
  else
    moveDuration = self.m_orderArea:ScrollActivityEntryToView(activityOrderCell:GetType(), true, false, false, false, bRight, moveDuration)
  end
  if moveDuration and 0 < moveDuration then
    sequence:AppendInterval(moveDuration)
  end
  local removeItemDt = 0.4
  sequence:AppendCallback(function()
    for index, itemModel in ipairs(message.Removed) do
      if itemModel.stored then
        self:_PlayRemoveOrderStoredItemAnimation(targetCell, index, itemModel:GetCode(), removeItemDt)
      else
        self:_PlayRemoveOrderItemAnimation(targetCell, index, itemModel, removeItemDt)
      end
    end
  end)
  sequence:AppendInterval(removeItemDt)
  sequence:AppendCallback(function()
    targetCell:PlayCoinEffect(true)
    self:_PlayFinishRewardAnimation(targetCell, activityOrderCell, message)
  end)
end

function BaseSceneBoardView:_PlayFinishRewardAnimation(targetCell, activityOrderCell, message)
  local function funcNewOrderEnter()
    local fireworksDuration = 0
    
    local sequence = DOTween.Sequence()
    if not Table.IsEmpty(message.FireworksRewardCodes) then
      self:_AddFireworksGalaItem(message)
      fireworksDuration = Table.IsEmpty(message.FireworksRewardItems) and 0.5 or 1.5
    end
    local supriseChestDuration = 0
    if targetCell:CanPlaySurpriseChestRewardAnim() then
      targetCell:WaitPlaySurpriseChestAnim(true)
      supriseChestDuration = targetCell:GetSurpriseChestRewardAnimTime()
      targetCell:PlaySurpriseChestRewardAnim(true)
    end
    local decoScoreDuration = 0
    if message.IsDecoScoreOrder then
      targetCell:ResetDecorationScoreParent()
      decoScoreDuration = targetCell:GetDecorationScoreRewardAnimTime()
      targetCell:PlayDecorationScoreRewardAnim(true)
    end
    local interval = math.max(math.max(supriseChestDuration, fireworksDuration), decoScoreDuration)
    if 0 < interval then
      sequence:AppendInterval(interval)
      if not Table.IsEmpty(message.ChestReward) then
        sequence:AppendCallback(function()
          self.m_orderArea:ScrollTargetOrderToView(message.Order:GetId(), true, false, false, true, false, 0.5)
        end)
        sequence:AppendInterval(0.5)
      end
      sequence:AppendCallback(function()
        targetCell:WaitPlaySurpriseChestAnim(false)
      end)
    end
    if not Table.IsEmpty(message.ChestReward) then
      local chestDelay = #message.ChestReward * 0.15 + 0.5
      sequence:AppendCallback(function()
        targetCell:PlayChestCustomerAnim()
        self:_AddChestCustomerItem(message)
      end)
      sequence:AppendInterval(chestDelay)
    end
    sequence:AppendCallback(function()
      targetCell:StopChestCustomerAnim()
      if activityOrderCell and activityOrderCell.PlayNewExitAnim then
        activityOrderCell:PlayNewExitAnim(function()
          self.m_orderArea:OnFinishActivityOrder(activityOrderCell)
          self:_OnOrderRewardAnimFinished()
        end)
      else
        self.m_orderArea:FinishOrderAndEnterNewOrder(message.Order, function()
          self:_OnOrderRewardAnimFinished()
        end, true)
      end
    end)
  end
  
  GM.UIManager:OpenView(UIPrefabConfigName.OrderFinishRewardWindow, message.Rewards, message.Order, targetCell, self.m_orderArea, funcNewOrderEnter)
end

function BaseSceneBoardView:_OnOrderRewardAnimFinished()
  PropertyAnimationManager.RemoveFlyingCount()
  self:SetRaycastEnabled(true)
  self.m_orderArea:SetScrollEnabled(true)
  self.m_orderArea:ForceRebuildLayout()
  EventDispatcher.DispatchEvent(EEventType.OrderAnimationFinished)
  self:_TryStartPrompt()
end

function BaseSceneBoardView:_OnRefreshOrder(message)
  self.m_orderArea:OnRefreshOrder(message)
end

function BaseSceneBoardView:_PlayLuckyProducePrompt(itemView, spreadEffectType)
  local promptConfig
  if spreadEffectType == BoardSpreadType.Lucky or spreadEffectType == BoardSpreadType.ExtraLucky then
    promptConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.LuckyProducePromptNormal)
  elseif spreadEffectType == BoardSpreadType.SuperLucky or spreadEffectType == BoardSpreadType.ExtraSuperLucky then
    promptConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.LuckyProducePromptSuper)
  elseif spreadEffectType == BoardSpreadType.DoubleLucky or spreadEffectType == BoardSpreadType.TripleLucky1 then
    promptConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.LuckyProducePromptCombo1)
  elseif spreadEffectType == BoardSpreadType.TripleLucky2 then
    promptConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.LuckyProducePromptCombo2)
  end
  if promptConfig == nil then
    return
  end
  local position = self.m_canvas.transform:InverseTransformPoint(self:GetItemsTransform():TransformPoint(itemView:GetModel():GetLocalPosition()))
  position.z = 0
  local code = itemView:GetModel():GetCode()
  GM.ResourceLoader:LoadPrefab(promptConfig, self.m_canvas.transform, position, function(go)
    self.m_arrLuckyProduceGo = self.m_arrLuckyProduceGo or {}
    table.insert(self.m_arrLuckyProduceGo, go)
    local luaTb = go:GetLuaTable()
    luaTb:Init(position, function()
      Table.ListRemove(self.m_arrLuckyProduceGo or {}, go)
    end, code)
  end)
end

function BaseSceneBoardView:PlayNewFindItemAnimFunc(startPos, endPos, itemView)
  startPos.z = 0
  endPos.z = 0
  local data = {
    startPos = startPos,
    endPos = endPos,
    effect = {
      name = UIPrefabConfigName.effct_UI_tw_5_2
    },
    endEffect = {
      name = UIPrefabConfigName.effct_UI_tw_boom_3_2,
      dt = 0.8,
      noWait = true
    },
    customData = {
      specialSequence = function(sequence, transform, start, terminal)
        local height = 80
        self.m_findEffectSeq = sequence
        sequence:Append(transform:DOLocalPath({
          terminal,
          Vector3((start.x + terminal.x) / 2, start.y + height, 0),
          Vector3((start.x + terminal.x) / 2, start.y + height, 0)
        }, 0.8, PathType.CubicBezier):SetEase(Ease.InQuad))
        if itemView then
          sequence:AppendCallback(function()
            itemView:PlayTapAnimation(0.2)
          end)
        end
      end
    }
  }
  EventDispatcher.DispatchEvent(EEventType.PlayEffectFlyAnimation, data)
end

function BaseSceneBoardView:PlayFindItemAnimFunc(startPos, endPos, itemView)
  startPos.z = 0
  endPos.z = 0
  local data = {
    startPos = startPos,
    endPos = endPos,
    effect = {
      name = UIPrefabConfigName.effct_UI_tw_3
    },
    endEffect = {
      name = UIPrefabConfigName.effct_UI_tw_boom_3,
      dt = 0.8
    },
    customData = {
      specialSequence = function(sequence, transform, start, terminal)
        local height = 80
        self.m_findEffectSeq = sequence
        sequence:Append(transform:DOLocalPath({
          terminal,
          Vector3((start.x + terminal.x) / 2, start.y + height, 0),
          Vector3((start.x + terminal.x) / 2, start.y + height, 0)
        }, 0.8, PathType.CubicBezier):SetEase(Ease.InQuad))
        if itemView then
          sequence:AppendCallback(function()
            self:_BlinkItem(itemView:GetModel())
          end)
        end
      end
    }
  }
  EventDispatcher.DispatchEvent(EEventType.PlayEffectFlyAnimation, data)
end

function BaseSceneBoardView:_OnItemFindEffect(message)
  local items = message and message.Items
  local Icon = message and message.Icon
  local bInInventory = message and message.bInInventory
  local originItemPos = message and message.OriginItemPos
  if Table.IsEmpty(items) and not bInInventory then
    return
  end
  local startPos
  if originItemPos then
    startPos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(originItemPos))
  elseif Icon ~= nil and Icon.gameObject ~= nil and not Icon.gameObject:IsNull() then
    startPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(Icon.transform.position)) + Vector3(0, -30, 0)
  else
    return
  end
  local inventory = self:_GetInventoryButton()
  if bInInventory then
    self:PlayFindItemAnimFunc(startPos, inventory.transform.position)
  end
  for _, item in pairs(items) do
    local itemView = self:GetItemView(item)
    if itemView then
      local endPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(itemView.transform.position))
      self:PlayFindItemAnimFunc(startPos, endPos, itemView)
    end
  end
  self:_TryStartPrompt(nil, 3)
end

function BaseSceneBoardView:_OnItemFindNewEffect(message)
  local items = message and message.Items
  local Icon = message and message.Icon
  local bInInventory = message and message.bInInventory
  local originItemPos = message and message.OriginItemPos
  if Table.IsEmpty(items) and not bInInventory then
    return
  end
  local startPos
  if originItemPos then
    startPos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(originItemPos))
  elseif Icon ~= nil and Icon.gameObject ~= nil and not Icon.gameObject:IsNull() then
    startPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(Icon.transform.position)) + Vector3(0, -30, 0)
  else
    return
  end
  local inventory = self:_GetInventoryButton()
  if bInInventory then
    self:PlayNewFindItemAnimFunc(startPos, inventory.transform.position)
  end
  for _, item in pairs(items) do
    local itemView = self:GetItemView(item)
    if itemView then
      local endPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(itemView.transform.position))
      self:PlayNewFindItemAnimFunc(startPos, endPos, itemView)
    end
  end
  self:_TryStartPrompt(nil, 3)
end

function BaseSceneBoardView:_OnActivityItemFindEffect(message)
  local items = message and message.Items or {}
  local bInInventory = message and message.bInInventory
  local itemPos = message and message.originItemPos
  local worldPos = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory).transform.position
  if bInInventory and itemPos and worldPos then
    local boardview = BoardViewHelper.GetActiveView()
    local to = boardview:ConvertScreenPositionToWorldPosition(PositionUtil.UICameraWorld2Screen(worldPos))
    local from = boardview:ConvertScreenPositionToWorldPosition(boardview:ConvertBoardPositionToScreenPosition(itemPos))
    self:PlayFindItemAnimFunc(from, to)
  end
  for _, item in pairs(items) do
    self:_BlinkItem(item)
    local itemView = self:GetItemView(item)
    if itemView then
      itemView:PlayTapAnimation(0.2)
    end
  end
end

function BaseSceneBoardView:_BlinkItem(item)
  if item then
    local itemView = self:GetItemView(item)
    if itemView then
      itemView:PlayBlinkAnim()
      table.insert(self.m_blinkingItems, item:GetId())
    end
  end
end

function BaseSceneBoardView:_StopAllBlinkItems()
  for _, itemId in ipairs(self.m_blinkingItems) do
    local item = self.m_model:GetItemById(itemId)
    if item then
      local itemView = self:GetItemView(item)
      if itemView then
        itemView:StopBlinkAnim()
      end
    end
  end
  local cnt = #self.m_blinkingItems
  for i = cnt, 1, -1 do
    self.m_blinkingItems[i] = nil
  end
end

function BaseSceneBoardView:_OnLackGem(message)
  GM.ShopModel:OnLackGem(message.LackNumber, EBIReferType.LackGem, self.m_shopModel)
end

function BaseSceneBoardView:_OnLackSpreadEnergy()
  local eGameMode = self.m_model:GetGameMode()
  self.m_shopModel:TryToRefreshEnergy()
  if self.m_shopModel:GetBuyEnergyCost() == self.m_shopModel:GetMaxBuyEnergyGemCost() and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.MultiTierTriggerOrder) then
    local model = GM.BundleManager:GetModel(EBundleType.MultiTierEnergyActivityBundle)
    
    local function func()
      if not GM.EnergyModel:IsEnergyFull() then
        local prefabName, extraArgs = BuyEnergyWindow.GetPrefabName(eGameMode, self.m_shopModel)
        if extraArgs ~= nil then
          extraArgs.bIgnoreTrigger = true
        else
          extraArgs = {bIgnoreTrigger = true}
        end
        GM.UIManager:OpenView(prefabName, self.m_shopModel, extraArgs)
      end
    end
    
    local bTriggerd, bShowView = model:Try2ShowEnergyBundle(EBundleTriggerType.LackEnergy, {closeCallback = func})
    if bTriggerd and bShowView then
      return
    end
  end
  local prefabName, extraArgs = BuyEnergyWindow.GetPrefabName(eGameMode, self.m_shopModel)
  GM.UIManager:OpenView(prefabName, self.m_shopModel, extraArgs)
end

function BaseSceneBoardView:_OnSpreadIntoCache(message)
  local uiWorldPosition = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(message.Tile))
  uiWorldPosition.z = 0
  local viewData = {
    noDelayTime = true,
    arrWorldPos = {uiWorldPosition}
  }
  RewardApi.AcquireRewardsInView(message.Rewards, viewData)
end

function BaseSceneBoardView:_OnSpreadFailed(message)
  local key
  if message.Reason == SpreadFailedReason.ItemClosed then
    key = "hint_item_locked"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProducerCD)
  elseif message.Reason == SpreadFailedReason.ItemOpening then
    key = "hint_item_opening"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProducerCD)
  elseif message.Reason == SpreadFailedReason.ItemRecharging then
    key = "hint_item_recharging"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProducerCD)
    EventDispatcher.DispatchEvent(EEventType.ItemRecharging, message)
    local item = message.Item
    local _, cost, cd = BoardInfoContent.GetSkipInfo(item)
    GM.BIManager:LogAction(EBIType.ClickItem, {
      i = item:GetType(),
      cd = cd,
      c = cost
    }, self.m_model:GetGameMode())
    local itemBattery = item:GetComponent(ItemBattery)
    local itemConfig = GM.ItemDataModel:GetModelConfig(item:GetType())
    if (not itemConfig.Spread_Auto or itemConfig.Spread_Auto == 0) and itemBattery == nil then
      local triggerdBundle = GM.BundleManager:GetModel(EBundleType.TriggerBundle):TryTriggerBundle(ETriggerAction.ClickCDGenerator)
      if not triggerdBundle then
        GM.BundleManager:TryStartBundlePopupChain(EBundleTriggerType.ClickCDGenerator)
      end
    end
    local itemSpread = item:GetComponent(ItemSpread)
    if itemSpread ~= nil then
      local restDuration = itemSpread:GetTimerDuration() + itemSpread:GetStartTimer() - GM.GameModel:GetServerTime()
      if 60 <= restDuration then
        UIHelper.TryOpenWXSubscriptionWindow(SubscriptionType.CDRecover, true)
      end
    end
  else
    key = "hint_board_full"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardFull)
    EventDispatcher.DispatchEvent(EEventType.BoardFull, message)
  end
  local itemView = self:GetItemView(message.Item)
  local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  GM.UIManager:ShowPromptWithKey(key, screenPosition)
  if message.Reason == SpreadFailedReason.ItemRecharging or message.Reason == SpreadFailedReason.ItemOpening then
    self.m_infoBar:GetInfoContent():PlaySkipButtonEffect()
  elseif message.Reason == SpreadFailedReason.ItemClosed and not self.m_model:HasOpeningItem() then
    self.m_infoBar:GetInfoContent():PlayOpenButtonEffect()
  end
end

function BaseSceneBoardView:_OnItemUnlocked(position)
  if not position then
    return
  end
  if GM.OpenFunctionModel:IsFunctionOpen(EFunction.Discoveries) then
    local screenPos = self:ConvertBoardPositionToScreenPosition(position)
    GM.UIManager:ShowPromptWithKey("hint_item_unlock", screenPos)
  end
end

function BaseSceneBoardView:_OnDoubleConfirmedCollect()
  self:_UpdateIndicator()
  self.m_infoBar:UpdateInfoBar()
end

function BaseSceneBoardView:_PassPointerGameObjectInfo(eventData, go, worldpos)
  if go ~= nil then
    eventData.recordGameObject = go
    eventData.recordGameObjectPath = self:_GetGameObjectPath(go)
    if eventData.pointerCurrentRaycast.module ~= nil then
      local camera = eventData.pointerCurrentRaycast.module.eventCamera
      eventData.recordCameraPath = self:_GetGameObjectPath(camera.gameObject)
    end
    local goVec3 = go.transform:InverseTransformPoint(worldpos)
    eventData.recordPosition = goVec3
  end
end

function BaseSceneBoardView:_GetGameObjectPath(go)
  local path = "/" .. go.name
  while go.transform.parent ~= nil do
    go = go.transform.parent.gameObject
    path = "/" .. go.name .. path
  end
  return path
end

function BaseSceneBoardView:_OnAddLuckyStarItem(message)
  local itemView
  if message.bCreate then
    itemView = self:_AddItemView(message.New)
  end
  itemView = self:GetItemView(message.New)
  if itemView then
    itemView.transform.gameObject:SetActive(message.bShow)
    if message.bShow then
      local luckyType
      if message.New.itemScore and message.New.itemScore > 1 then
        luckyType = BoardSpreadType.SuperLucky
        itemView:ShowLuckySpreadEffect()
      end
      DelayExecuteFunc(function()
        if itemView.gameObject and not itemView.gameObject:IsNull() then
          if luckyType then
            itemView:RemoveLuckySpreadEffect()
            itemView:ShowSpreadLight(BoardSpreadType.SuperLucky)
            GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnLucky2)
          else
            GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnLucky1)
          end
          itemView:PlayLuckyStarEffect()
        end
      end, 0.2)
    end
  end
end

function BaseSceneBoardView:_OnAddSunshineItem(message)
  local itemView
  itemView = self:_AddItemView(message.New)
  if itemView then
    local targetButton = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.SunshineOrderBoost)
    if not targetButton then
      return
    end
    local boardPosition = targetButton:GetAirplaneBoxPos(true)
    local sourcePosition = itemView.transform.parent:InverseTransformPoint(boardPosition)
    local targetPosition = itemView.transform.localPosition
    
    local function callback()
      itemView:CreateSunshineArriveEffect()
      itemView:DestroySunshineEffect()
    end
    
    local speedUp = 0.7
    self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, callback, nil, speedUp)
    itemView:CreateSunshineEffect()
  end
end

function BaseSceneBoardView:_OnAddSunshineRaceItem(message)
  local itemView
  itemView = self:_AddItemView(message.New)
  if itemView then
    UIUtil.SetActive(itemView.gameObject, false)
  end
end

function BaseSceneBoardView:_OnShowSunshineRaceItem(message)
  local itemView = self:GetItemView(message.New)
  if itemView then
    UIUtil.SetActive(itemView.gameObject, true)
    if message.bRaceSource then
      itemView:CreateSunshineRaceEffect()
    else
      itemView:CreateSunshineEffect()
    end
    local targetButton = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.SunshineOrderBoost)
    if not targetButton then
      return
    end
    local worldPosition = targetButton:GetRacePlaneFlagPos(message.bRaceSource)
    local sourcePosition = PositionUtil.UICameraWorld2Screen(worldPosition)
    local boardCamera = GM.ModeViewController:GetBoardInfo()
    sourcePosition = boardCamera:ScreenToWorldPoint(sourcePosition)
    sourcePosition = itemView.transform.parent:InverseTransformPoint(sourcePosition)
    local targetPosition = itemView.transform.localPosition
    
    local function callback()
      if message.bRaceSource then
        itemView:CreateSunshineRaceArriveEffect()
      else
        itemView:CreateSunshineArriveEffect()
      end
      itemView:DestroySunshineEffect()
    end
    
    local speedUp = 0.7
    self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, callback, nil, speedUp)
  end
end

function BaseSceneBoardView:_GetChestCustomerAvatarRewardRootPos(order)
  local cell = self.m_orderArea:GetCell(order)
  if not cell then
    return
  end
  local avatarTb = cell:GetAvatarLuaTable()
  if not avatarTb then
    return
  end
  return avatarTb:GetRewardRootPos()
end

function BaseSceneBoardView:_AddChestCustomerItem(message)
  local count = #message.ChestReward
  for i = 1, count do
    local msg = {
      Order = message.Order,
      Index = i,
      Finish = i == count
    }
    if message.ChestItem[i] then
      msg.New = message.ChestItem[i]
    else
      msg.Code = message.ChestReward[i].code
    end
    self:_OnAddChestCustomerItem(msg, i * 0.15 + 0.5)
  end
end

function BaseSceneBoardView:_OnAddChestCustomerItem(message, delay)
  if message.Code then
    self.m_playingChestRewardAnim = true
    local delay = delay or math.min(message.Index, 9) * 0.15 + 0.8
    DelayExecuteFunc(function()
      local worldPos = self:_GetChestCustomerAvatarRewardRootPos(message.Order)
      if not worldPos then
        EventDispatcher.DispatchEvent(EEventType.SunshineRewardToCache)
        return
      end
      local screenPos = self:ConvertWorldPositionToScreenPosition(worldPos)
      local rewards = {
        {
          [PROPERTY_TYPE] = message.Code,
          [PROPERTY_COUNT] = 1
        }
      }
      local viewData = {
        arrWorldPos = {
          PositionUtil.UICameraScreen2World(screenPos)
        }
      }
      RewardApi.AcquireRewardsInView(rewards, viewData)
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxGemHud)
      if message.Finish then
        self.m_playingChestRewardAnim = nil
        if self.m_orderArea and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderScrollRule) then
          self.m_orderArea:ScollOrderAreaToFisrtNewFinishedOrder(true)
        end
      end
    end, delay)
    return
  end
  message.New.toBeAdd = nil
  local itemView = self:_AddItemView(message.New, nil, nil, true)
  if not itemView then
    return
  end
  local pos = message.New:GetPosition()
  if not Table.ListContain(self.m_disabledPosList, pos) then
    self.m_disabledPosList[#self.m_disabledPosList + 1] = pos
  end
  local transform = itemView.transform
  transform.localScale = V3Zero
  PropertyAnimationManager.AddFlyingCount()
  local delay = delay or (math.min(9, message.Index) - 1) * 0.15 + 2.5
  DelayExecuteFunc(function()
    local worldPos = self:_GetChestCustomerAvatarRewardRootPos(message.Order)
    if not worldPos then
      PropertyAnimationManager.RemoveFlyingCount()
      Table.ListRemove(self.m_disabledPosList, pos)
      self.m_model:UpdateOrderState()
      return
    end
    local screenPos = self:ConvertWorldPositionToScreenPosition(worldPos)
    if not (itemView and itemView.gameObject) or itemView.gameObject:IsNull() then
      PropertyAnimationManager.RemoveFlyingCount()
      Table.ListRemove(self.m_disabledPosList, pos)
      self.m_model:UpdateOrderState()
      return
    end
    itemView:CreateTriggerPlaneEffect()
    local sourcePosition = itemView.transform.parent:InverseTransformPoint(worldPos)
    local targetPosition = itemView.transform.localPosition
    local width = GM.UIManager:GetCanvasSize().x
    local deltaX = 0
    local screenX = screenPos.x
    if screenX > width * 0.65 then
      deltaX = -200
    elseif screenX < width * 0.25 then
      deltaX = 200
    else
      deltaX = 200 * (message.Index & 1 == 1 and -1 or 1)
    end
    local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, 0)
    transform.localPosition = sourcePositionZero
    local midPosition = Vector3(sourcePosition.x + deltaX, sourcePosition.y, 0)
    local sequence = DOTween.Sequence()
    itemView:SetJumpTween(sequence)
    sequence:AppendCallback(function()
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxGemHud)
    end)
    sequence:Append(transform:DOScale(Vector3(0.5, 0.5, 1), 0.1))
    sequence:Append(transform:DOScale(Vector3(0.8, 0.8, 1), 0.2))
    sequence:Append(transform:DOScale(V3One, 0.3))
    sequence:Append(transform:DOScale(V3One, 0.2))
    sequence:Insert(0.05, transform:DOLocalJump(midPosition, 150, 1, 0.3))
    sequence:Insert(0.35, transform:DOLocalMove(targetPosition, 0.55))
    sequence:OnComplete(function()
      if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
        itemView:CreateTriggerPlaneArriveEffect()
        itemView:DestroyTriggerPlaneEffect()
        itemView:CreateChestCustomerArriveEffect()
      end
      if message.Finish then
        self.m_playingChestRewardAnim = nil
        if self.m_orderArea and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderScrollRule) then
          self.m_orderArea:ScollOrderAreaToFisrtNewFinishedOrder(true)
        end
      end
    end)
    sequence:OnKill(function()
      if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
        itemView:DestroyTriggerPlaneEffect()
      end
      self.m_model:UpdateOrderState()
      PropertyAnimationManager.RemoveFlyingCount()
      Table.ListRemove(self.m_disabledPosList, pos)
    end)
  end, delay)
end

function BaseSceneBoardView:_OnAddTriggerPlaneItem(message)
  local itemView
  if message.bGenerated then
    itemView = self:GetItemView(message.New)
    UIUtil.SetActive(itemView.gameObject, true)
  else
    itemView = self:_AddItemView(message.New)
  end
  local worldPosition, sourcePosition
  if itemView then
    itemView:CreateTriggerPlaneEffect(message.bUseExterCustomerEffect)
    local window = GM.UIManager:GetOpenedViewByName(message.prefabName or UIPrefabConfigName.TriggerPlaneRewardWindow)
    if window then
      worldPosition = window:GetBoxPos()
      sourcePosition = PositionUtil.UICameraWorld2Screen(worldPosition)
    else
      return
    end
    local boardCamera = GM.ModeViewController:GetBoardInfo()
    sourcePosition = boardCamera:ScreenToWorldPoint(sourcePosition)
    sourcePosition = itemView.transform.parent:InverseTransformPoint(sourcePosition)
    local targetPosition = itemView.transform.localPosition
    
    local function callback()
      itemView:CreateTriggerPlaneArriveEffect(message.bUseExterCustomerEffect)
      itemView:DestroyTriggerPlaneEffect(message.flyEffectDestroyDelay)
    end
    
    local speedUp = message.speedUp or 1
    self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, callback, nil, speedUp)
  end
end

function BaseSceneBoardView:_AddFireworksGalaItem(message)
  for i = 1, #message.FireworksRewardCodes do
    local msg = {
      Order = message.Order,
      Stage = message.FwStage,
      ActivityType = message.ActivityType,
      Super = 1 < i
    }
    if message.FireworksRewardItems[i] then
      msg.New = message.FireworksRewardItems[i]
    else
      msg.Code = message.FireworksRewardCodes[i]
    end
    self:_OnAddFireworksGalaItem(msg)
  end
end

function BaseSceneBoardView:_OnAddFireworksGalaItem(message)
  local itemView
  if message.Code then
    local targetCell = self.m_orderArea:GetCell(message.Order)
    if not targetCell then
      return
    end
    local rewardRoot = targetCell:GetFireworksBuffReward()
    if rewardRoot then
      rewardRoot.gameObject:SetActive(false)
    end
    local rewardNode = targetCell:GetFireworksGalaNode()
    local worldPosition = rewardNode.position
    local screenPos = self:ConvertWorldPositionToScreenPosition(worldPosition)
    local rewards = {
      {
        [PROPERTY_TYPE] = message.Code,
        [PROPERTY_COUNT] = 1
      }
    }
    local viewData = {
      arrWorldPos = {
        PositionUtil.UICameraScreen2World(screenPos)
      }
    }
    RewardApi.AcquireRewardsInView(rewards, viewData)
    return
  end
  message.New.toBeAdd = nil
  itemView = self:_AddItemView(message.New, nil, nil, true)
  if not itemView then
    return
  end
  local pos = message.New:GetPosition()
  if pos and not Table.ListContain(self.m_disabledPosList, pos) then
    self.m_disabledPosList[#self.m_disabledPosList + 1] = pos
  end
  itemView.gameObject:SetActive(false)
  local prefab = GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.FireworksGalaFlyItem)
  GM.ResourceLoader:LoadPrefab(prefab, self.m_canvas.transform, V3Zero, function(go)
    local flyItem = go:GetLuaTable()
    flyItem:Init(message.Stage, message.New:GetType(), message.Super)
    local targetCell
    if message.ActivityType and message.ActivityType ~= ActivityType.ExtraCustomer then
      targetCell = self.m_orderArea:GetOrderTbByActivityType(message.ActivityType)
    else
      targetCell = self.m_orderArea:GetCell(message.Order)
    end
    local rewardRoot = targetCell and targetCell:GetFireworksBuffReward() or nil
    if rewardRoot then
      rewardRoot.gameObject:SetActive(false)
    end
    local rewardNode = targetCell and targetCell:GetFireworksGalaNode() or nil
    if not rewardNode then
      if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
        itemView.gameObject:SetActive(true)
      end
      self.m_model:UpdateOrderState()
      Table.ListRemove(self.m_disabledPosList, pos)
      return
    end
    go.transform.position = rewardNode.position
    local boardPos = pos:ToLocalPosition()
    local targetPos = self.m_itemsTransform:TransformPoint(Vector3(boardPos.x + self.m_model.TileSize / 2, boardPos.y + self.m_model.TileSize / 2, 0))
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxfireworksGalafly1)
    go.transform:DOMove(targetPos, 0.8):SetEase(Ease.InOutCubic):OnComplete(function()
      DelayExecuteFunc(function()
        if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
          itemView.gameObject:SetActive(true)
        end
        flyItem:Open(function()
          self.m_model:UpdateOrderState()
          Table.ListRemove(self.m_disabledPosList, pos)
        end)
        if message.ActivityType and targetCell:GetOrder() and targetCell:GetOrder():GetState() ~= OrderState.Finished and rewardRoot and rewardRoot.gameObject and not rewardRoot.gameObject:IsNull() then
          rewardRoot.gameObject:SetActive(true)
        end
      end, 0.6)
    end)
  end)
end

function BaseSceneBoardView:_OnAddMagicCrucibleItem(message)
  local itemView = self:_AddItemView(message.New)
  if itemView then
    itemView.transform.gameObject:SetActive(true)
  end
end

function BaseSceneBoardView:_OnAddIceItem(message)
  local itemView
  itemView = self:_AddItemView(message.New)
  itemView.transform.localScale = V3Zero
  DelayExecuteFunc(function()
    if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
      itemView.transform.localScale = V3One
      itemView:IceCDAppear()
    end
  end, 1.9)
  self:_UpdateIndicator()
  self.m_infoBar:UpdateInfoBar()
end

function BaseSceneBoardView:IsplayingChestRewardAnim()
  return self.m_playingChestRewardAnim
end
