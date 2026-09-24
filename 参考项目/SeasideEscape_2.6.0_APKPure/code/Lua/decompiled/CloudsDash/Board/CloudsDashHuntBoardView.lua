CloudsDashHuntBoardView = setmetatable({}, BaseUIBoardView)
CloudsDashHuntBoardView.__index = CloudsDashHuntBoardView
CloudsDashHuntBoardView.MergePromptInterval = 2.3

function CloudsDashHuntBoardView.GetInstance()
  return CloudsDashHuntBoardView.s_instance
end

function CloudsDashHuntBoardView:Init(activityType, boardModel, itemDeleteButton)
  BaseUIBoardView.Init(self, activityType, boardModel, itemDeleteButton)
  CloudsDashHuntBoardView.s_instance = self
  if not UIUtil.IsEmptyComponent(self.m_testText) then
    UIUtil.SetActive(self.m_testText.gameObject, GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.ShowItemTestInfo, 0) ~= 0 and GM.UIManager:IsTestActivityButtonValid())
  end
end

function CloudsDashHuntBoardView:_Ctor(activityType, boardModel, itemDeleteButton)
  self.m_activityType = activityType
  self.m_activityDefinition = CloudsDashDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.m_mapScrollSeq = {}
  self.m_completeTileMap = CloudsDashHuntBoardModel.CreateMatrix()
  self.CompleteTileColor = UIUtil.ConvertHexColor2CSColor("84d38e")
  self.m_bCloudKeyFirstAppeared = self.m_activityModel:GetCloudKeyFirstAppeared()
  self.m_bHasCloudKeyLock = boardModel:HasCloudKeyLock()
  self.m_bTileInversed = false
end

function CloudsDashHuntBoardView:GetBoardCamera()
  return GM.ModeViewController:GetCloudsDashBoardCamera()
end

function CloudsDashHuntBoardView:_AddActiveListeners()
  EventDispatcher.AddActiveListener(EEventType.AutoRun, self, self._TryAutoRun)
  EventDispatcher.AddActiveListener(EEventType.ApplicationWillEnterForeground, self, self._ClearPointerDataOnUnexpectedPointerExit)
  EventDispatcher.AddActiveListener(EEventType.TutorialFinished, self, self._StartPrompt)
  EventDispatcher.AddActiveListener(EEventType.HuntUpdateTileBG, self, self._UpdateTileBG)
end

function CloudsDashHuntBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  if CloudsDashHuntBoardView.s_instance == self then
    CloudsDashHuntBoardView.s_instance = nil
  end
end

function CloudsDashHuntBoardView:ConvertWorldPositionToScreenPosition(position)
  return CloudsDashHuntBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function CloudsDashHuntBoardView:_InitBoardNormalView(boardModel, itemDeleteButton)
  self.m_cacheRootController:Init(self)
  self.m_itemDeleteButton = itemDeleteButton
  if self.m_itemDeleteButton then
    self.m_itemDeleteButton:Init(boardModel, self.m_activityType)
  end
  if self.m_activityDefinition.ItemBoardSize then
    self.m_itemBoardGo:ResizeCollider(self.m_activityDefinition.ItemBoardPos, self.m_activityDefinition.ItemBoardSize)
  end
  if self.m_activityDefinition.BoardBg then
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(self.m_activityDefinition.BoardBg), self.transform, V3Zero, function(go)
      self.m_boardBgGo = go
    end)
  end
end

function CloudsDashHuntBoardView:_InitCloudViewLockConfig(cloudConfig, id, bShowLock, swallowLockStateMap)
  if cloudConfig.lock[id].num then
    self.m_cloudView[id]:Init(cloudConfig.lock[id].unlock, self.m_activityType, bShowLock, cloudConfig.lock[id].num, swallowLockStateMap and swallowLockStateMap[id] or 0)
  else
    self.m_cloudView[id]:Init(cloudConfig.lock[id].unlock, self.m_activityType, bShowLock)
  end
end

function CloudsDashHuntBoardView:_InitItemTransformLayer()
end

function CloudsDashHuntBoardView:GetItemTransformLayer()
  Log.Assert("CloudsDashHuntBoardView:GetItemTransformLayer \228\186\145\231\171\175\229\176\143\230\163\139\231\155\152\228\184\141\230\148\175\230\140\129transformLayer")
end

function CloudsDashHuntBoardView:_AddItemTransformLayerView(itemModel)
end

function CloudsDashHuntBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  if itemModel:GetComponent(ItemSand) and lastItemModel:GetComponent(ItemBroom) then
    return true
  end
  if self.m_model:CanItemMerge(itemModel, lastItemModel) then
    return true
  end
  return BaseUIBoardView._CanShowMergeLight(self, itemModel, lastItemModel)
end

function CloudsDashHuntBoardView:_UpdateIndicator(item, playAnimation)
  if self.m_model:GetSkipNextIndicatorUpdate() then
    self.m_model:SetSkipNextIndicatorUpdate(nil)
    return
  end
  BaseUIBoardView._UpdateIndicator(self, item, playAnimation)
  self.m_swallowItemIndicator:UpdateIndicator(item, playAnimation, self.m_model)
  self.m_portalItemIndicator:UpdateIndicator(item, playAnimation)
  if item and not UIUtil.IsEmptyComponent(self.m_testText) and self.m_testText.gameObject.activeSelf then
    self.m_testText.text = item:GetCode()
  end
end

function CloudsDashHuntBoardView:OnPointerDown(worldPosition)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local forceSourceBoardPosition = GM.TutorialModel:GetForceSourceBoardPosition()
  if forceSourceBoardPosition ~= nil and forceSourceBoardPosition ~= boardPosition then
    return
  end
  if self.m_model:IsTileLock(boardPosition) then
    return
  end
  if boardPosition == self.m_swallowPos then
    return
  end
  local itemModel = self.m_model:GetItem(boardPosition)
  if itemModel ~= nil then
    self.m_lastTouchedItem = self:GetItemView(itemModel)
    if self.m_selectedBoardPosition == boardPosition then
      self.m_moreThanOnceTap = true
    end
    self:_UpdateIndicator(itemModel, false)
    self:_CancelPrompt()
    if not self.m_moreThanOnceTap then
      EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    end
    self.m_selectExtraPos = nil
  end
end

function CloudsDashHuntBoardView:OnDrag(worldPosition)
  if self.m_lastTouchedItem == nil then
    return
  end
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if not self.m_dragging and canItemMove then
    self:_UpdateIndicator()
  end
  if not canItemMove then
    return
  end
  if not self.m_dragging then
    EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
    EventDispatcher.DispatchEvent(EEventType.UpdateSwallowItemTip)
  end
  self.m_dragging = true
  worldPosition.z = 0
  self.m_lastTouchedItem.transform.position = worldPosition
  self:_TryShowMergeLight(worldPosition)
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if canItemMove then
    self:UpdateCompleteTileDisplay(self.m_lastTouchedItem:GetModel():GetPosition(), false, true)
  end
end

function CloudsDashHuntBoardView:_OnTouchedItemNull(worldPosition)
  if self.m_sandItemIndicator then
    self.m_sandItemIndicator:UpdateIndicator()
  end
  local pos = self:_GetBoardPosition(worldPosition)
  if self.m_model:IsTileLock(pos) then
    for _, v in pairs(self.m_cloudView) do
      v:TryShowLockPrompt(pos)
    end
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
  EventDispatcher.DispatchEvent(EEventType.UpdateSwallowItemTip)
end

function CloudsDashHuntBoardView:_OnTapSwallowedItem(itemModel)
  for index, item in pairs(self.m_model:GetExtraPdItems()) do
    local swallow = item:GetComponent(ItemSwallow)
    local itemSpeard = item:GetComponent(ItemSpread)
    if swallow then
      self:_DoBatchSwallowItem({
        Sources = {itemModel},
        Target = item,
        Index = index
      }, function()
        GM.UIManager:SetEventLock(true)
        EventDispatcher.DispatchEvent(EEventType.OnBatchSwallowItemBegin)
      end, function()
        GM.UIManager:SetEventLock(false)
        self.m_swallowPos = nil
      end)
      self.m_swallowPos = itemModel:GetPosition()
      self:ClearIndicator()
      break
    elseif itemSpeard then
      GM.UIManager:ShowPromptWithKey("simulate_cache_tips1")
      EventDispatcher.DispatchEvent(EEventType.HuntCowShowHandEffect)
    end
  end
end

function CloudsDashHuntBoardView:GetTapPromptOffest()
  return Vector3(0, CloudsDashHuntBoardModel.TileSize / 2, 0)
end

function CloudsDashHuntBoardView:_OnPlayTapEffect(itemModel)
  local itemView = self:GetItemView(itemModel)
  local pos = self:ConvertWorldPositionToScreenPosition(itemView.transform.position) + self:GetTapPromptOffest()
  if itemModel:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:ShowPromptWithKey("item_lock_pb", pos)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
  elseif itemModel:GetComponent(ItemCobweb) ~= nil then
    GM.UIManager:ShowPromptWithKey("item_lock_cw", pos)
    itemView:PlayTapAnimation(0.2)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
  elseif itemModel:GetComponent(ItemDig) ~= nil then
  else
    itemView:PlayTapAnimation(0.2)
  end
end

function CloudsDashHuntBoardView:OnPointerUp(worldPosition, index)
  if self.m_lastTouchedItem == nil then
    self:_OnTouchedItemNull(worldPosition)
    return
  elseif self.m_lastTouchedItem:GetModel():GetComponent(ItemBroom) == nil then
    EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
    EventDispatcher.DispatchEvent(EEventType.UpdateSwallowItemTip)
  end
  self:_ClearMergeLight()
  local targetBoardPosition = self:_GetBoardPosition(worldPosition)
  local forceTargetBoardPosition = GM.TutorialModel:GetForceTargetBoardPosition()
  if forceTargetBoardPosition ~= nil and forceTargetBoardPosition ~= targetBoardPosition then
    targetBoardPosition = BaseSceneBoardModel.CreatePosition(0, 0)
    if self.m_activityDefinition.StartTutorialId == ETutorialId.HuntSignature then
      index = nil
    end
  end
  local itemModel = self.m_lastTouchedItem:GetModel()
  if self.m_dragging then
    self:_OnDraggingEnd(itemModel, targetBoardPosition, index)
  else
    if itemModel:GetComponent(ItemDig) ~= nil then
      self.m_model:TapItem(itemModel)
    elseif self.m_moreThanOnceTap then
      if not self.m_infoBar and itemModel:GetComponent(ItemBubble) ~= nil then
        self.m_model:BreakItem(itemModel)
      else
        EventDispatcher.DispatchEvent(EEventType.UpdateSwallowItemTip, itemModel)
        if itemModel:GetCode() == self.m_activityDefinition.SwallowCode then
          self:_OnTapSwallowedItem(itemModel)
        else
          self.m_model:TapItem(itemModel, index)
        end
      end
    end
    if self.m_model:GetItem(itemModel:GetPosition()) == itemModel then
      self:_OnPlayTapEffect(itemModel)
    end
  end
  if not self.m_selectExtraPos then
    local selectedItem = self:GetSelectedItemModel()
    self:_UpdateIndicator(selectedItem, true)
  end
  self.m_moreThanOnceTap = false
  self.m_dragging = false
  self.m_lastTouchedItem = nil
  self:_StartPrompt()
  EventDispatcher.DispatchEvent(EEventType.HuntBoardPointerUp, {
    dragging = self.m_dragging
  })
end

function CloudsDashHuntBoardView:_GetStartPromptScheduleDelay()
  local interval = BaseUIBoardView._GetStartPromptScheduleDelay(self)
  if self.m_bHasCloudKeyLock and not self.m_bCloudKeyFirstAppeared then
    local prompt = BoardPromptHuntCollectCloudKey.Create()
    if prompt:CanStart(self) then
      interval = 0.1
      self.m_bCloudKeyFirstAppeared = true
      self.m_activityModel:SetCloudKeyFirstAppeared(true)
    end
  end
  return interval
end

function CloudsDashHuntBoardView:_GetPrompts()
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    return {
      BoardPromptHuntMergeItems.Create()
    }
  end
  local prompts = {
    BoardPromptHuntPortal.Create(),
    BoardPromptHuntCollectCloudKey.Create(),
    BoardPromptHuntClickCow.Create(),
    BoardPromptHuntMergeItems.Create(),
    BoardPormptHuntPopCache.Create(),
    BoardPromptHuntBubble.Create(),
    BoardPromptHuntCollect.Create(),
    BoardPromptHuntSwallowItems.Create()
  }
  return prompts
end

function CloudsDashHuntBoardView:PromptSwallowItem(srcItem, tarItem)
  local itemSwallow = tarItem and tarItem:GetComponent(ItemSwallow)
  if not itemSwallow then
    return
  end
  self:_CancelPrompt()
  self:_UpdateIndicator(tarItem, true)
  local prompt = BoardPromptHuntSwallowItems.Create()
  if prompt and prompt:CanStart(self) then
    self.m_prompt = prompt
    prompt:Start(self)
  end
end

function CloudsDashHuntBoardView:_OnCollectItem(message)
  local rewards = message.Source:GetComponent(ItemCollectable):GetRewards()
  if rewards[1][PROPERTY_TYPE] == HuntActivityModel.MineScoreType then
    local score = rewards[1][PROPERTY_COUNT]
    local model = GM.ActivityManager:GetModel(self.m_activityType)
    model:AddDigScore(score)
    GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    local itemView = self:GetItemView(message.Source)
    itemView.toBeRemoved = true
    local sequence = DOTween.Sequence()
    sequence:Insert(0, itemView.transform:DOScale(0.4, 0.2))
    sequence:InsertCallback(0.1, function()
      local sourceScreenPosition = self:ConvertWorldPositionToScreenPosition(itemView.transform.position)
      local sourceUIWorldPosition = PositionUtil.UICameraScreen2World(sourceScreenPosition)
      sourceUIWorldPosition.z = 0
      local chainId = GM.ItemDataModel:GetChainId(message.Source:GetType())
      local itemType = ItemUtility.GetItemCode(chainId, 1)
      local message = {
        position = sourceUIWorldPosition,
        score = score,
        icon = GM.ItemDataModel:GetSpriteName(itemType),
        item = message.Source
      }
      EventDispatcher.DispatchEvent(EEventType.HuntDigScoreFlyAnimation, message)
    end)
    sequence:InsertCallback(0.2, function()
      self:_RemoveItemViewByView(itemView)
    end)
  else
    BaseUIBoardView._OnCollectItem(self, message)
  end
end

function CloudsDashHuntBoardView:_OnCollapseItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator()
  end
  local isMineCollapse = false
  if message.Source:GetComponent(ItemDig) ~= nil then
    isMineCollapse = true
  end
  local position = message.Source:GetPosition():ToLocalPosition()
  position = Vector3(position.x + BaseBoardModel.TileSize / 2, position.y + BaseBoardModel.TileSize / 2, 0)
  local itemView = self:GetItemView(message.Source)
  self:_RemoveItemViewByView(itemView)
  if message.New ~= nil then
    self:_AddItemView(message.New, itemView)
  end
  GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(ScenePrefabConfigName.effect_zhixiang_boom), self.transform, position, function(go)
  end)
  if isMineCollapse then
    EventDispatcher.DispatchEvent(EEventType.DigOreCollapse)
  end
end

function CloudsDashHuntBoardView:_OnTransformItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
  end
  BaseActionBoardView._OnTransformItem(self, message)
end

function CloudsDashHuntBoardView:_OnPopCachedItem(message)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnManual)
  local itemView = self:_AddItemView(message.New)
  if itemView ~= nil then
    local worldPosition = self.m_cacheRootController:GetRoot():GetCachedItemWorldPos()
    local sourcePosition = self.transform:InverseTransformPoint(worldPosition)
    local targetPosition = itemView.transform.localPosition
    self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition)
  end
  self:_StartPrompt()
  if self.m_sandItemIndicator then
    self.m_sandItemIndicator:UpdateIndicator()
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
end

function CloudsDashHuntBoardView:_OnSpreadFailed(message)
  local key
  if message.Reason == SpreadFailedReason.ItemClosed then
    key = "hint_item_locked"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProducerCD)
  elseif message.Reason == SpreadFailedReason.ItemOpening then
    key = "hint_item_opening"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProducerCD)
  elseif message.Reason == SpreadFailedReason.ItemRecharging then
    local item = message.Item
    if item:GetComponent(ItemDig) ~= nil then
      return
    end
    key = "hint_item_recharging"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProducerCD)
    local _, cost, cd = BoardInfoContent.GetSkipInfo(item)
    GM.BIManager:LogAction(EBIType.ClickItem, {
      i = item:GetType(),
      cd = cd,
      c = cost
    }, EGameMode.Hunt)
  elseif message.Reason == SpreadFailedReason.LackEnergy then
    local model = GM.ActivityManager:GetModel(self.m_activityType)
    if model and model:TryOnLackHuntFarmToken() then
      return
    end
    local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.HuntWindowPrefabName)
    if mainWindow and mainWindow.ShowLackTokenPrompt and mainWindow:ShowLackTokenPrompt() then
      return
    end
    key = "hunt_lack_energy"
  else
    key = "hint_board_full"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardFull)
  end
  local extraPd = self.m_model:GetExtraPdItems()
  if extraPd ~= nil then
    for _, item in pairs(extraPd) do
      if message.Item == item then
        local screenPosition
        if message.Item:GetId() == "hunt_pd_2" and self.m_activityDefinition.StartTutorialId ~= ETutorialId.HuntSignature then
          local itemView = self:GetItemView(message.Item)
          local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(0, 100, 0)
          screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
        end
        GM.UIManager:ShowPromptWithKey(key, screenPosition)
        return
      end
    end
  end
  local itemView = self:GetItemView(message.Item)
  local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(0, 100, 0)
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  GM.UIManager:ShowPromptWithKey(key, screenPosition)
end

function CloudsDashHuntBoardView:GetBIActionMap()
  return EGameMode.Hunt
end

function CloudsDashHuntBoardView:GetDisplayBoardWindowName()
  return self.m_activityDefinition.HuntWindowPrefabName
end

function CloudsDashHuntBoardView:_TryShowMergeLight(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local x, y = boardPosition:GetX(), boardPosition:GetY()
  local itemModel, itemView
  if not Table.IsEmpty(self.m_model:GetExtraPdItems()) and (self.m_activityDefinition.HuntPdBoardPos ~= nil and x >= self.m_activityDefinition.HuntPdBoardPos.x - (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[1] or 1) and x <= self.m_activityDefinition.HuntPdBoardPos.x + (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[2] or 1) and y >= self.m_activityDefinition.HuntPdBoardPos.y - (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[3] or 1) and y <= self.m_activityDefinition.HuntPdBoardPos.y + (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[4] or 1) or self.m_activityDefinition.HuntPdBoardPos == nil and 5 <= x and x <= 7 and 8 <= y and y <= 10) then
    itemModel = self.m_model:GetExtraItem(2)
    itemView = self.m_lastTouchedItem
  else
    itemModel = self.m_model:GetItem(boardPosition)
    itemView = self:GetItemView(itemModel)
  end
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

function CloudsDashHuntBoardView:InverseTiles()
  self.m_bTileInversed = not self.m_bTileInversed
  self:_UpdateTile()
end

function CloudsDashHuntBoardView:HideBoard()
  self.m_tilesTransform.gameObject:SetActive(false)
  self.m_itemsTransform.gameObject:SetActive(false)
  if self.m_boardBgGo then
    self.m_boardBgGo:SetActive(false)
  end
  self.m_cloudTransform.gameObject:SetActive(false)
end

function CloudsDashHuntBoardView:ShowBoard()
  self.m_tilesTransform.gameObject:SetActive(true)
  self.m_itemsTransform.gameObject:SetActive(true)
  if self.m_boardBgGo then
    self.m_boardBgGo:SetActive(true)
  end
  self.m_cloudTransform.gameObject:SetActive(true)
end

function CloudsDashHuntBoardView:GetVerticalHorizontalTiles()
  return CloudsDashHuntBoardModel.VerticalTiles, CloudsDashHuntBoardModel.HorizontalTiles
end

function CloudsDashHuntBoardView:ScrollUp(rows, boardmodel, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local firstRowPosY = 367.5
  local delay = 0.2
  self:_DoScrollUpItemViewInAllMap({
    self.m_modelViewMap
  }, rows, boardmodel, flyItemRoot, delay)
  DelayExecuteFunc(function()
    if UIUtil.IsEmptyComponent(self.transform) then
      return
    end
    for position in boardmodel._GetValidPositionIterator(boardmodel, 0, boardmodel.VerticalTiles - rows + 1) do
      self:_DoAddScrollEndItemView(position, boardmodel)
    end
  end, delay)
end

function CloudsDashHuntBoardView:ScrollDown(rows, boardmodel, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local firstRowPosY = 367.5
  local cacheRoot = self:GetCacheRoot()
  local animInOrderMap = self:_GetScrollAnimInOrderMap()
  local delay = 0.2
  local cacheRootAnimMap = {}
  local moveTime = 0.8
  local moveLength = -boardmodel.TileSize * (self.m_activityDefinition.BoardScale or 1)
  local boardLength = boardmodel.VerticalTiles
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local flyTime = 0.34
    if position:IsValid() and position:GetY() >= boardLength + 1 - rows and boardLength >= position:GetY() then
      local flyItem = self:_GetInitedFlyItemInScrollAnim(itemModel, itemView, flyItemRoot, true)
      DelayExecuteFunc(function()
        if not UIUtil.IsEmptyComponent(flyItem) then
          flyItem.gameObject:SetActive(true)
        end
      end, 0.7)
      local itemRemoveSeq = DOTween.Sequence()
      if boardLength - position:GetY() > 0 then
        DelayExecuteFunc(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.transform:DOMoveY(flyItem.transform.position.y + moveLength * (boardLength - position:GetY()), moveTime * (boardLength - position:GetY())):SetEase(Ease.Linear)
          end
        end, delay + 0.55)
      end
      local startFlyTime = delay + 0.55 + moveTime * (boardLength - position:GetY())
      DelayExecuteFunc(function()
        if not UIUtil.IsEmptyComponent(flyItem) then
          flyItem.transform:SetParent(self.transform)
          flyItem.transform:SetSiblingIndex(self.transform.childCount - 2)
          flyItem.transform:DOMove(cacheRoot.transform.position, flyTime):SetEase(Ease.OutQuad):OnComplete(function()
            flyItem:RecycleSelf()
          end)
        end
      end, startFlyTime + animInOrderMap[position:GetY()][position:GetX()] * 0.05)
      if cacheRootAnimMap[position:GetY()] == nil then
        cacheRootAnimMap[position:GetY()] = true
        DelayExecuteFunc(function()
          local mainwindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.HuntWindowPrefabName)
          if mainwindow ~= nil then
            mainwindow:ShowCacheEffect()
          end
        end, startFlyTime + flyTime - 0.08)
        DelayExecuteFunc(function()
          if not cacheRoot.gameObject:IsNull() then
            local seq = DOTween.Sequence()
            seq:Append(cacheRoot.transform:DOScale(Vector3.one * 1.08, 0.083):SetEase(Ease.Linear))
            seq:Append(cacheRoot.transform:DOScale(Vector3.one * 0.92, 0.083):SetEase(Ease.Linear))
            seq:Append(cacheRoot.transform:DOScale(Vector3.one * 1.0, 0.083):SetEase(Ease.Linear))
          end
        end, startFlyTime + flyTime - 0.15)
      end
      self:_RemoveItemViewByView(itemView)
    elseif position:IsValid() and position:GetY() < boardLength + 1 - rows then
      DelayExecuteFunc(function()
        local pos = boardmodel.CreatePosition(position:GetX(), position:GetY() + rows)
        itemModel:SetPositionWithoutAnim(pos)
        if not UIUtil.IsEmptyComponent(itemView) then
          itemView.transform.localPosition = itemView:_GetLocalPosition(pos)
        end
      end, delay)
    end
  end
  DelayExecuteFunc(function()
    if UIUtil.IsEmptyComponent(self.transform) then
      return
    end
    for position in boardmodel._GetValidPositionIterator(boardmodel, 0, 1) do
      if position:GetY() <= rows then
        self:_DoAddScrollEndItemView(position, boardmodel)
      end
    end
    self:_InitCloudView()
  end, delay)
end

function CloudsDashHuntBoardView:_DoAddScrollEndItemView(position, boardmodel)
  local itemModel = boardmodel:GetItem(position, true)
  if itemModel ~= nil then
    self:_AddItemView(itemModel)
  end
end

function CloudsDashHuntBoardView:_OnHuntKeyCollect(message)
  GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
  local itemView = self:GetItemView(message.Source)
  itemView.toBeRemoved = true
  itemView.transform:DOScale(Vector3.zero, 0.2):OnComplete(function()
    self:_RemoveItemViewByView(itemView)
  end)
end

function CloudsDashHuntBoardView:_UpdateSingleCompleteTile(position, animation, noFade)
  BaseUIBoardView._UpdateSingleCompleteTile(self, position, animation, nil)
end

function CloudsDashHuntBoardView:UpdateCompleteTileDisplay(position, show, animation, noFade)
  BaseUIBoardView.UpdateCompleteTileDisplay(self, position, show, animation, nil)
end

function CloudsDashHuntBoardView:OndoublePopCachedItem(message)
end

function CloudsDashHuntBoardView:GetHitScore()
end

function CloudsDashHuntBoardView:_PlayDoubleEnergyJumpAnimation()
end

function CloudsDashHuntBoardView:_ClickSwallowIem()
end

function CloudsDashHuntBoardView:_OnItemStickRewardClaim()
end
