FreefallActivityBoardView = setmetatable({}, BaseUIBoardView)
FreefallActivityBoardView.__index = FreefallActivityBoardView
FreefallActivityBoardView.MergePromptInterval = 2.3

function FreefallActivityBoardView.GetInstance()
  return FreefallActivityBoardView.s_instance
end

function FreefallActivityBoardView:Init(activityType, boardModel, itemDeleteButton)
  BaseUIBoardView.Init(self, activityType, boardModel, itemDeleteButton)
  self:UpdateHitPointTip()
  FreefallActivityBoardView.s_instance = self
  if not UIUtil.IsEmptyComponent(self.m_testText) then
    UIUtil.SetActive(self.m_testText.gameObject, GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.ShowItemTestInfo, 0) ~= 0)
  end
  self.m_mapRewardAniCount = {}
  self.m_mapRewardAniSeq = {}
  EventDispatcher.AddListener(EEventType.RewardFlyAnimationStart, self, self._OnRewardFlyAnimationStart)
  EventDispatcher.AddListener(EEventType.RewardFlyAnimationFinish, self, self._OnRewardFlyAnimationFinish)
  EventDispatcher.AddListener(EEventType.BoardStateChanged, self, self._OnBoardStateChanged)
  EventDispatcher.AddListener(self.m_activityDefinition.OnSettlementEvent, self, self._OnSettlement)
  EventDispatcher.AddListener(self.m_activityDefinition.SettlementFinishedEvent, self, self._OnSettlementFinished)
end

function FreefallActivityBoardView:_Ctor(activityType, boardModel, itemDeleteButton)
  self.m_activityType = activityType
  self.m_activityDefinition = FreefallActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.m_mapScrollSeq = {}
  self.m_completeTileMap = HuntActivityBoardModel.CreateMatrix()
  self.CompleteTileColor = UIUtil.ConvertHexColor2CSColor("84d38e")
  self.m_bHasCloudKeyLock = boardModel:HasCloudKeyLock()
  self.m_bTileInversed = false
end

function FreefallActivityBoardView:_RegisterBoardEvent()
  BaseUIBoardView._RegisterBoardEvent(self)
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemFall")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemStable")
  REGISTER_BOARD_EVENT_HANDLER(self, "SpawnItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "FreefallHitTarget")
  REGISTER_BOARD_EVENT_HANDLER(self, "HandleItemFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "ChainLevelUp")
  REGISTER_BOARD_EVENT_HANDLER(self, "RandomLevelUp")
end

function FreefallActivityBoardView:GetBoardCamera()
  return GM.ModeViewController:GetFreefallActivityBoardCamera()
end

function FreefallActivityBoardView:_AddActiveListeners()
  EventDispatcher.AddActiveListener(EEventType.AutoRun, self, self._TryAutoRun)
  EventDispatcher.AddActiveListener(EEventType.ApplicationWillEnterForeground, self, self._ClearPointerDataOnUnexpectedPointerExit)
  EventDispatcher.AddActiveListener(EEventType.TutorialFinished, self, self._StartPrompt)
  EventDispatcher.AddActiveListener(EEventType.HuntUpdateTileBG, self, self._UpdateTileBG)
end

function FreefallActivityBoardView:_OnRewardFlyAnimationStart(msg)
  local rewardType = msg and msg.type
  if rewardType == EPropertyType.Energy then
    self.m_mapRewardAniCount[EPropertyType.Energy] = math.max(0, self.m_mapRewardAniCount[EPropertyType.Energy] or 0) + 1
  elseif rewardType == EPropertyType.Gold then
    self.m_mapRewardAniCount[EPropertyType.Gold] = math.max(0, self.m_mapRewardAniCount[EPropertyType.Gold] or 0) + 1
  elseif rewardType == EPropertyType.Gem then
    self.m_mapRewardAniCount[EPropertyType.Gem] = math.max(0, self.m_mapRewardAniCount[EPropertyType.Gem] or 0) + 1
  end
  self:_ShowHudButton(rewardType)
end

function FreefallActivityBoardView:_OnRewardFlyAnimationFinish(msg)
  local rewardType = msg and msg.type
  if rewardType == EPropertyType.Energy then
    self.m_mapRewardAniCount[EPropertyType.Energy] = math.max(0, (self.m_mapRewardAniCount[EPropertyType.Energy] or 0) - 1)
  elseif rewardType == EPropertyType.Gold then
    self.m_mapRewardAniCount[EPropertyType.Gold] = math.max(0, (self.m_mapRewardAniCount[EPropertyType.Gold] or 0) - 1)
  elseif rewardType == EPropertyType.Gem then
    self.m_mapRewardAniCount[EPropertyType.Gem] = math.max(0, (self.m_mapRewardAniCount[EPropertyType.Gem] or 0) - 1)
  end
  self:_HideHudButton(rewardType)
end

function FreefallActivityBoardView:_ShowHudButton(rewardType)
  if not self.m_mapRewardAniCount[rewardType] or not (self.m_mapRewardAniCount[rewardType] > 0) then
    return
  end
  if self.m_mapRewardAniSeq[rewardType] ~= nil then
    self.m_mapRewardAniSeq[rewardType]:Kill()
    self.m_mapRewardAniSeq[rewardType] = nil
  end
  if rewardType == EPropertyType.Energy then
    EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
      highlight = true,
      hudKey = ESceneViewHudButtonKey.Energy,
      ignoreDoubleEnergyBtn = true
    })
  elseif rewardType == EPropertyType.Gold then
    EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
      highlight = true,
      hudKey = ESceneViewHudButtonKey.Coin
    })
  elseif rewardType == EPropertyType.Gem then
    EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
      highlight = true,
      hudKey = ESceneViewHudButtonKey.Gem
    })
  end
end

function FreefallActivityBoardView:_HideHudButton(rewardType)
  if not self.m_mapRewardAniCount[rewardType] or not (self.m_mapRewardAniCount[rewardType] <= 0) then
    return
  end
  if self.m_mapRewardAniSeq[rewardType] ~= nil then
    self.m_mapRewardAniSeq[rewardType]:Kill()
    self.m_mapRewardAniSeq[rewardType] = nil
  end
  local seq = DOTween.Sequence()
  seq:AppendInterval(0.5)
  seq:AppendCallback(function()
    if rewardType == EPropertyType.Energy then
      EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
        highlight = false,
        hudKey = ESceneViewHudButtonKey.Energy
      })
    elseif rewardType == EPropertyType.Gold then
      EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
        highlight = false,
        hudKey = ESceneViewHudButtonKey.Coin
      })
    elseif rewardType == EPropertyType.Gem then
      EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
        highlight = false,
        hudKey = ESceneViewHudButtonKey.Gem
      })
    end
    self.m_mapRewardAniSeq[rewardType] = nil
  end)
  self.m_mapRewardAniSeq[rewardType] = seq
end

function FreefallActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  if FreefallActivityBoardView.s_instance == self then
    FreefallActivityBoardView.s_instance = nil
  end
  for _, rewardType in pairs({
    EPropertyType.Gold,
    EPropertyType.Energy,
    EPropertyType.Gem
  }) do
    local needHide = false
    if self.m_mapRewardAniCount and self.m_mapRewardAniCount[rewardType] and self.m_mapRewardAniCount[rewardType] > 0 then
      needHide = true
    elseif self.m_mapRewardAniSeq and self.m_mapRewardAniSeq[rewardType] ~= nil then
      self.m_mapRewardAniSeq[rewardType]:Kill()
      self.m_mapRewardAniSeq[rewardType] = nil
      needHide = true
    end
    if needHide then
      if rewardType == EPropertyType.Energy then
        EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
          highlight = false,
          hudKey = ESceneViewHudButtonKey.Energy
        })
      elseif rewardType == EPropertyType.Gold then
        EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
          highlight = false,
          hudKey = ESceneViewHudButtonKey.Coin
        })
      elseif rewardType == EPropertyType.Gem then
        EventDispatcher.DispatchEvent(EEventType.HighlightHud, {
          highlight = false,
          hudKey = ESceneViewHudButtonKey.Gem
        })
      end
    end
    self.m_mapRewardAniCount = nil
    self.m_mapRewardAniSeq = nil
  end
end

function FreefallActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return FreefallActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function FreefallActivityBoardView:_InitExtraPdItems()
end

function FreefallActivityBoardView:_InitCloudViewLockConfig(cloudConfig, id, bShowLock, swallowLockStateMap)
  if cloudConfig.lock[id].num then
    self.m_cloudView[id]:Init(cloudConfig.lock[id].unlock, self.m_activityType, bShowLock, cloudConfig.lock[id].num, swallowLockStateMap and swallowLockStateMap[id] or 0)
  else
    self.m_cloudView[id]:Init(cloudConfig.lock[id].unlock, self.m_activityType, bShowLock)
  end
end

function FreefallActivityBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  if itemModel:GetComponent(ItemSand) and lastItemModel:GetComponent(ItemBroom) then
    return true
  end
  if self.m_model:CanItemMerge(itemModel, lastItemModel) then
    return true
  end
  return BaseUIBoardView._CanShowMergeLight(self, itemModel, lastItemModel)
end

function FreefallActivityBoardView:_UpdateIndicator(item, playAnimation)
  if self.m_model:GetSkipNextIndicatorUpdate() then
    self.m_model:SetSkipNextIndicatorUpdate(nil)
    return
  end
  BaseUIBoardView._UpdateIndicator(self, item, playAnimation)
  self.m_swallowItemIndicator:UpdateIndicator(item, playAnimation, self.m_model)
  if item and not UIUtil.IsEmptyComponent(self.m_testText) and self.m_testText.gameObject.activeSelf then
    self.m_testText.text = item:GetCode()
  end
end

function FreefallActivityBoardView:OnPointerDown(worldPosition)
  if self.m_model:GetBoardState() ~= BoardState.Stable or self.m_bOnSettlement then
    return
  end
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

function FreefallActivityBoardView:OnDrag(worldPosition, colliderName)
  if self.m_lastTouchedItem == nil or self.m_lastTouchedItem.gameObject == nil or self.m_lastTouchedItem.gameObject:IsNull() then
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
  self:_TryShowMergeLight(worldPosition, colliderName)
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if canItemMove then
    self:UpdateCompleteTileDisplay(self.m_lastTouchedItem:GetModel():GetPosition(), false, true)
  end
end

function FreefallActivityBoardView:_OnTouchedItemNull(worldPosition)
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

function FreefallActivityBoardView:_OnTapSwallowedItem(itemModel)
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

function FreefallActivityBoardView:GetTapPromptOffest()
  return Vector3(0, HuntActivityBoardModel.TileSize / 2, 0)
end

function FreefallActivityBoardView:_OnPlayTapEffect(itemModel)
  local itemView = self:GetItemView(itemModel)
  local pos = self:ConvertWorldPositionToScreenPosition(itemView.transform.position) + Vector3(0, HuntActivityBoardModel.TileSize / 2, 0)
  if itemModel:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:ShowPromptWithKey("item_lock_pb", pos)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
  elseif itemModel:GetComponent(ItemCobweb) ~= nil then
    GM.UIManager:ShowPromptWithKey("item_lock_cw", pos)
    itemView:PlayTapAnimation(0.2)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
  elseif itemModel:GetComponent(ItemDig) ~= nil then
  elseif itemModel:GetComponent(ItemGray) ~= nil then
    GM.UIManager:ShowPromptWithKey("item_lock_cw", pos)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
  else
    itemView:PlayTapAnimation(0.2)
  end
end

function FreefallActivityBoardView:OnPointerUp(worldPosition, index)
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

function FreefallActivityBoardView:_StartPrompt()
  if self.m_model:GetBoardState() ~= BoardState.Stable or self.m_bOnSettlement or not not self.m_bPlayingSpeicalItemAnimation then
    self:_CancelPrompt()
    return
  end
  FreefallActivityBoardView._StartPrompt(self)
end

function FreefallActivityBoardView:_GetStartPromptScheduleDelay()
  local interval = FreefallActivityBoardView.MergePromptInterval
  if GameConfig.IsTestMode() then
    if GM.TestAutoRunModel.mergeAll then
      interval = 0
    elseif GM.TestAutoRunModel.autoRun then
      interval = GM.TestAutoRunModel.interval
    end
  end
  return interval
end

function FreefallActivityBoardView:PromptSchedulerOrigin()
  if self.m_promptScheduler then
    Scheduler.Unschedule(self.m_promptScheduler, self)
    self.m_promptScheduler = nil
  end
  if self.m_iPromptLockCount and self.m_iPromptLockCount > 0 then
    return
  end
  self.m_prompt = self:_SelectPrompt()
  if self.m_prompt ~= nil then
    self.m_prompt:Start(self)
    if GameConfig.IsTestMode() and (GM.TestAutoRunModel.mergeAll or GM.TestAutoRunModel.autoRun) then
      self.m_prompt:AutoDo(self)
    end
  end
  if GameConfig.IsTestMode() and (GM.TestAutoRunModel.mergeAll or GM.TestAutoRunModel.autoRun) then
    if GM.TestAutoRunModel.mergeAll then
      GM.TestAutoRunModel.mergeAll = false
    end
    if self.m_prompt == nil then
      GM.TestAutoRunModel:AddInterval()
      self:_StartPrompt()
    else
      GM.TestAutoRunModel:ResetInterval()
      self:_StartPrompt()
    end
  end
end

function FreefallActivityBoardView:_GetPrompts()
  local prompts = {
    BoardPromptFreefallCollectMaxLevelActivityItems.Create(),
    BoardPromptFreefallMergeItems.Create()
  }
  return prompts
end

function FreefallActivityBoardView:PromptSwallowItem(srcItem, tarItem)
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

function FreefallActivityBoardView:_OnCollectItem(message)
  local customData
  local rewards = message.Source:GetComponent(ItemCollectable):GetRewards()
  if FreefallActivityModel.IsHitTokenType(rewards[1][PROPERTY_TYPE]) then
    local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if window ~= nil then
      customData = {}
      customData.targetButton = window:GetMatchedHitTargetInfos(rewards[1])
      customData.endPos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(customData.targetButton:GetScaleTrans().position))
      if rewards[1][PROPERTY_TYPE] == EPropertyType.FreefallBossToken then
        local itemView = self:GetItemView(message.Source)
        local worldPosition = itemView.transform.position
        local screenPosition = self:ConvertWorldPositionToScreenPosition(worldPosition)
        local uiWorldPosition = PositionUtil.UICameraScreen2World(screenPosition)
        itemView.toBeRemoved = true
        itemView.transform:DOScale(Vector3.zero, 0.2):OnComplete(function()
          self:_RemoveItemViewByView(itemView)
        end)
        window:PlayHitBossAnimation(message.Source, uiWorldPosition, customData, rewards[1])
        return
      end
    end
  end
  BaseActionBoardView._OnCollectItem(self, message)
  self.m_model:SetBoardState(BoardState.Falling)
end

function FreefallActivityBoardView:_OnCollapseItem(message)
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

function FreefallActivityBoardView:_OnPopCachedItem(message)
end

function FreefallActivityBoardView:GetBIActionMap()
  return EGameMode.Hunt
end

function FreefallActivityBoardView:_OnBatchRemoveItems(message)
  for _, itemModel in ipairs(message.Removed) do
    local itemView = self:GetItemView(itemModel)
    itemView.toBeRemoved = true
    local aniTrans
    if itemView:GetComponent(ItemFreefallBossView) and itemModel and itemModel:GetComponent(ItemFreefallBoss) and itemModel:GetComponent(ItemFreefallBoss):IsMainItem() then
      aniTrans = itemView:GetComponent(ItemFreefallBossView):GetAniTrans()
    else
      aniTrans = itemView.transform
    end
    aniTrans:DOScale(0, 0.5):OnComplete(function()
      self:_RemoveItemViewByView(itemView)
    end)
    if self.m_selectedBoardPosition == itemModel:GetPosition() then
      self:_UpdateIndicator()
    end
    self:_CancelPrompt()
  end
end

function FreefallActivityBoardView:GetCacheRoot()
  Log.Assert(false, "FreefallActivityBoardView:GetCacheRoot \230\178\161\230\156\137cacheRoot")
end

function FreefallActivityBoardView:_TryAutoRun()
  if self.m_activityModel:GetTokenNumber() <= 0 then
    GM.TestAutoRunModel.mergeAll = false
    return
  end
  self:_UpdateIndicator()
  self.m_model:ResetMergeAllDisableItem()
  self:_StartPrompt()
end

function FreefallActivityBoardView:_TryShowMergeLight(worldPosition, colliderName)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local x, y = boardPosition:GetX(), boardPosition:GetY()
  local itemModel, itemView
  if not Table.IsEmpty(self.m_model:GetExtraPdItems()) and (self.m_activityDefinition.HuntPdBoardPos ~= nil and x >= self.m_activityDefinition.HuntPdBoardPos.x - (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[1] or 1) and x <= self.m_activityDefinition.HuntPdBoardPos.x + (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[2] or 1) and y >= self.m_activityDefinition.HuntPdBoardPos.y - (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[3] or 1) and y <= self.m_activityDefinition.HuntPdBoardPos.y + (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[4] or 1) or self.m_activityDefinition.HuntPdBoardPos == nil and 5 <= x and x <= 7 and 8 <= y and y <= 10 and not StringUtil.IsNilOrEmpty(colliderName) and StringUtil.StartWith(colliderName, "HuntPd_2")) then
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

function FreefallActivityBoardView:InverseTiles()
  self.m_bTileInversed = not self.m_bTileInversed
  self:_UpdateTile()
end

function FreefallActivityBoardView:GetVerticalHorizontalTiles()
  return HuntActivityBoardModel.VerticalTiles, HuntActivityBoardModel.HorizontalTiles
end

function FreefallActivityBoardView:ScrollDown(rows, boardmodel, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local delay = 0.2
  local arrViewMap = {
    self.m_modelViewMap,
    self.m_itemTransformLayerModelViewMap
  }
  self:_DoScrollDownItemViewInAllMap(arrViewMap, rows, boardmodel, flyItemRoot, delay)
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

function FreefallActivityBoardView:_DoScrollDownItemViewInAllMap(arrViewMap, rows, boardmodel, flyItemRoot, delay)
  local cacheRootAnimMap = {}
  local moveTime = 0.8
  local moveLength = -boardmodel.TileSize * (self.m_activityDefinition.BoardScale or 1)
  local boardLength = boardmodel.VerticalTiles
  local animInOrderMap = self:_GetScrollAnimInOrderMap()
  for _, viewMap in ipairs(arrViewMap) do
    for itemModel, itemView in pairs(viewMap or {}) do
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
        self:_DoRemoveOverflowItemView(itemView, flyItem, position, cacheRootAnimMap, animInOrderMap, startFlyTime)
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
  end
end

function FreefallActivityBoardView:_OnHuntKeyCollect(message)
  GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
  local itemView = self:GetItemView(message.Source)
  itemView.toBeRemoved = true
  itemView.transform:DOScale(Vector3.zero, 0.2):OnComplete(function()
    self:_RemoveItemViewByView(itemView)
  end)
end

function FreefallActivityBoardView:_UpdateSingleCompleteTile(position, animation, noFade)
  BaseUIBoardView._UpdateSingleCompleteTile(self, position, animation, nil)
end

function FreefallActivityBoardView:UpdateCompleteTileDisplay(position, show, animation, noFade)
  BaseUIBoardView.UpdateCompleteTileDisplay(self, position, show, animation, nil)
end

function FreefallActivityBoardView:_InitBoardNormalView(boardModel, itemDeleteButton)
  self.m_itemDeleteButton = itemDeleteButton
  if self.m_itemDeleteButton then
    self.m_itemDeleteButton:Init(boardModel, self.m_activityType)
  end
  if self.m_activityDefinition.ItemBoardSize then
    self.m_itemBoardGo:ResizeCollider(self.m_activityDefinition.ItemBoardPos, self.m_activityDefinition.ItemBoardSize)
  end
  if self.m_activityDefinition.BoardBg then
    local pos = Vector3(0, 0, 0)
    if FreefallActivityBoardModel.HorizontalTiles < 6 then
      pos = Vector3(pos.x - 142 * (6 - FreefallActivityBoardModel.HorizontalTiles) * 0.5, pos.y, pos.z)
    end
    if FreefallActivityBoardModel.VerticalTiles < 7 then
      pos = Vector3(pos.x, pos.y - 142 * (7 - FreefallActivityBoardModel.VerticalTiles) * 0.5, pos.z)
    end
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(self.m_activityDefinition.BoardBg), self.transform, pos, function(go)
      self.m_boardBgGo = go
    end)
  end
end

function FreefallActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function FreefallActivityBoardView:_OnItemFall(message)
  local itemView = self:GetItemView(message.Item)
  itemView.transform:DOKill(false)
  itemView.transform:DOLocalMove(message.Item:GetLocalPosition(), message.Duration):SetEase(Ease.Linear)
end

function FreefallActivityBoardView:_OnItemStable(message)
  local itemView = self:GetItemView(message.Item)
  itemView.transform:DOLocalMoveY(itemView.transform.localPosition.y + 10, 0.05):SetLoops(2, LoopType.Yoyo)
end

function FreefallActivityBoardView:_OnSpawnItem(message)
  local itemView = self:_AddItemView(message.Item)
  itemView.transform.localPosition = message.Item:GetLocalPosition()
end

function FreefallActivityBoardView:_OnFreefallHitTarget(message)
  local pos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(message.TargetPos))
  local targetButton
  local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if window ~= nil then
    targetButton = window:GetMatchedHitTargetInfos(message.Rewards[1])
  end
  if message.Delay ~= nil and message.Delay > 0 then
    if window then
      window:_SetEventLock(true)
    end
    DelayExecuteFuncInView(function()
      if not self.gameObject:IsNull() then
        if window then
          window:_SetEventLock(false)
        end
        local viewData = {
          arrWorldPos = Table.ListRep(pos, #message.Rewards),
          noDelayTime = true,
          targetButton = targetButton
        }
        RewardApi.AcquireRewardsInView(message.Rewards, viewData)
      end
    end, message.Delay, self)
  else
    local viewData = {
      arrWorldPos = Table.ListRep(pos, #message.Rewards),
      noDelayTime = true,
      targetButton = targetButton
    }
    RewardApi.AcquireRewardsInView(message.Rewards, viewData)
  end
end

function FreefallActivityBoardView:_OnHandleItemFailed(message)
  if message.Reason == FreefallHandleItemFailedReason.LackToken then
    local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if mainWindow ~= nil then
      mainWindow:PlayStepTokenShakeAnimation()
    end
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardFull)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
  elseif message.Reason == FreefallHandleItemFailedReason.CannotSwap then
  elseif message.Reason == FreefallHandleItemFailedReason.InvalidDragTargetItem then
  elseif message.Reason == FreefallHandleItemFailedReason.NoValidTargetItem then
  elseif message.Reason == FreefallHandleItemFailedReason.NoHitTokenTarget then
  end
end

function FreefallActivityBoardView:_CanShowSpecialItemMergeLight(itemModel, lastItemModel)
  return itemModel:GetType() == FreefallActivitySpecialItemType.ChainlevelUp and Table.ListContain(self.m_activityModel:GetDefinition().ActivityItemChainIds, GM.ItemDataModel:GetChainId(lastItemModel:GetType())) or lastItemModel:GetType() == FreefallActivitySpecialItemType.ChainlevelUp and Table.ListContain(self.m_activityModel:GetDefinition().ActivityItemChainIds, GM.ItemDataModel:GetChainId(itemModel:GetType()))
end

function FreefallActivityBoardView:_OnChainLevelUp(message)
  self:ClearIndicator()
  self:_CancelPrompt()
  local specialItemView, sourcePos
  if message.Source:GetType() == FreefallActivitySpecialItemType.ChainlevelUp then
    specialItemView = self:GetItemView(message.Source)
    sourcePos = PositionUtil.UICameraScreen2World(self:ConvertWorldPositionToScreenPosition(specialItemView.transform.position))
  else
    specialItemView = self:GetItemView(message.Target)
    local chainItemView = self:GetItemView(message.Source)
    chainItemView.transform:DOLocalMove(specialItemView.transform.localPosition, 0.1)
    sourcePos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(message.Target:GetPosition()))
  end
  self:_RemoveItemView(specialItemView)
  self:_PlayLevelUpAnimation(self.m_chainLevelUpItemEffect, sourcePos, message.AffectedItems)
end

function FreefallActivityBoardView:_OnRandomLevelUp(message)
  self:ClearIndicator()
  self:_CancelPrompt()
  local specialItemView = self:GetItemView(message.Source)
  local sourcePos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(message.Source:GetPosition()))
  self:_RemoveItemView(specialItemView)
  self:_PlayLevelUpAnimation(self.m_randomLevelUpItemEffect, sourcePos, message.AffectedItems)
end

FreefallActivityBoardView.LevelUpItemStartDelay = 0.35
FreefallActivityBoardView.LevelUpItemInterval = 0.05
FreefallActivityBoardView.LevelUpItemLevelUpDelay = 0.7
FreefallActivityBoardView.LevelUpLineDuration = 0.233
FreefallActivityBoardView.LevelUpItemEndDelay = 0.7

function FreefallActivityBoardView:_PlayLevelUpAnimation(specialItemEffectOrigin, sourcePos, affectedItems)
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if mainWindow == nil then
    return
  end
  self.m_bPlayingSpeicalItemAnimation = true
  local canvasRoot = mainWindow:GetFlyItemCanvasRoot()
  local itemEffectGo = GameObject.Instantiate(specialItemEffectOrigin, sourcePos, Quaternion.identity, canvasRoot)
  local itemEffect = itemEffectGo:GetLuaTable()
  itemEffect:UpdateSortingOrder(mainWindow:GetSortingOrder() + 5)
  GM.AudioModel:PlayEffect(self.m_activityDefinition.SpecialItemWindingAudioName)
  EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
  GM.UIManager:SetEventLock(true, self)
  local sequence = DOTween.Sequence()
  local affectedItemCount = #affectedItems
  local disposeDelay = FreefallActivityBoardView.LevelUpItemStartDelay + affectedItemCount * FreefallActivityBoardView.LevelUpItemInterval + FreefallActivityBoardView.LevelUpItemLevelUpDelay
  sequence:InsertCallback(disposeDelay, function()
    local brokenEffect = GameObject.Instantiate(self.m_itemBrokenEffect, sourcePos, Quaternion.identity, canvasRoot)
    UIUtil.UpdateSortingOrder(brokenEffect, mainWindow:GetSortingOrder() + 5)
  end)
  sequence:InsertCallback(disposeDelay + 0.05, function()
    itemEffectGo:RemoveSelf()
  end)
  local delay = FreefallActivityBoardView.LevelUpItemStartDelay
  for _, itemInfo in ipairs(affectedItems) do
    local targetPos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(itemInfo.Old:GetPosition()))
    local lineEffectGo
    sequence:InsertCallback(delay, function()
      local offsetPos = targetPos - sourcePos
      local length = math.sqrt(offsetPos.x * offsetPos.x + offsetPos.y * offsetPos.y)
      local angle = MathUtil.atan2(offsetPos.y, offsetPos.x)
      angle = math.deg(angle)
      local rotation = Quaternion.Euler(0, 0, angle)
      lineEffectGo = GameObject.Instantiate(self.m_itemLineEffect, sourcePos, rotation, canvasRoot)
      UIUtil.SetSizeDelta(lineEffectGo.transform, 0, 0)
      lineEffectGo.transform:DOSizeDelta(Vector2(length, 0), FreefallActivityBoardView.LevelUpLineDuration)
      GM.AudioModel:PlayEffect(self.m_activityDefinition.LineAnimationAudioName)
      EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
    end)
    sequence:InsertCallback(disposeDelay, function()
      if not lineEffectGo:IsNull() then
        lineEffectGo:RemoveSelf()
      end
    end)
    local oldItemView = self:GetItemView(itemInfo.Old)
    oldItemView.toBeRemoved = true
    sequence:InsertCallback(delay + FreefallActivityBoardView.LevelUpLineDuration, function()
      oldItemView.transform:DOLocalMoveY(oldItemView.transform.localPosition.y + 5, 0.05):SetLoops(-1, LoopType.Yoyo)
    end)
    sequence:InsertCallback(disposeDelay, function()
      local newItemView = self:_AddItemView(itemInfo.New)
      newItemView.transform.localScale = V3One * 0.3
      newItemView.transform:DOScale(1.3, 0.2):OnComplete(function()
        newItemView.transform:DOScale(1, 0.1)
      end)
      oldItemView.transform:DOKill()
      self:_RemoveItemView(oldItemView)
      local effectGo = GameObject.Instantiate(self.m_itemLevelUpEffect, targetPos, Quaternion.identity, canvasRoot)
      UIUtil.UpdateSortingOrder(effectGo, mainWindow:GetSortingOrder() + 5)
      if itemInfo.Rewards ~= nil then
        self:_OnFreefallHitTarget({
          Rewards = itemInfo.Rewards,
          TargetPos = itemInfo.Old:GetPosition(),
          Delay = FreefallActivityBoardModel.AutoMergeAcquireInViewDelay
        })
      end
    end)
    delay = delay + FreefallActivityBoardView.LevelUpItemInterval
  end
  sequence:InsertCallback(disposeDelay + FreefallActivityBoardView.LevelUpItemEndDelay, function()
    self.m_model:SetBoardState(BoardState.Falling)
    GM.UIManager:SetEventLock(false, self)
    self.m_bPlayingSpeicalItemAnimation = false
  end)
end

function FreefallActivityBoardView:_OnBoardStateChanged(message)
  if message.BoardType == self.m_model.Boardtype then
    if self.m_model:GetBoardState() == BoardState.Stable then
      self:_StartPrompt()
    else
      self:_CancelPrompt()
    end
  end
end

function FreefallActivityBoardView:_OnSettlement()
  self.m_bOnSettlement = true
  self:_CancelPrompt()
end

function FreefallActivityBoardView:_OnSettlementFinished()
  self.m_bOnSettlement = nil
  self:_StartPrompt()
end

function FreefallActivityBoardView:Test_GetBinGo()
  GM.UIManager:ShowPrompt("\229\189\147\229\137\141\230\163\139\231\155\152\230\178\161\230\156\137\229\158\131\229\156\190\231\174\177")
end

function FreefallActivityBoardView:CreateBossItem(pos)
  for _, v in pairs({
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  }) do
    local position = FreefallActivityBoardModel.CreatePosition(pos[1] + v[1], pos[2] + v[2])
    local itemModel = self.m_model:GetItem(position, true)
    if itemModel ~= nil then
      local itemView = self:_AddItemView(itemModel)
      if itemView and itemView:GetComponent(ItemFreefallBossView) then
        itemView:GetComponent(ItemFreefallBossView):PlayAppearAnim()
      end
    end
  end
end

function FreefallActivityBoardView:UpdateHitPointTip()
  self.m_tileEffectTransform.gameObject:RemoveChildren()
  local bossItems = self.m_model:FilterItems(function(itemModel)
    return itemModel:GetComponent(ItemFreefallBoss) ~= nil and itemModel:GetComponent(ItemFreefallBoss):IsMainItem()
  end)
  if Table.IsEmpty(bossItems) then
    return
  end
  local infoMap = {}
  for y = 1, FreefallActivityBoardModel.VerticalTiles do
    for x = 1, FreefallActivityBoardModel.HorizontalTiles do
      if infoMap[x] == nil then
        infoMap[x] = {}
      end
      infoMap[x][y] = 0
    end
  end
  local offset = {
    {-1, 0},
    {-1, 1},
    {0, -1},
    {1, -1},
    {2, 0},
    {2, 1},
    {0, 2},
    {1, 2}
  }
  for _, item in pairs(bossItems) do
    local x, y = item:GetPosition():GetX(), item:GetPosition():GetY()
    for _, v in pairs(offset) do
      local pos = FreefallActivityBoardModel.CreatePosition(x + v[1], y + v[2])
      if pos:IsValid() then
        local item2 = self.m_model:GetItem(pos)
        local isBossItem = item2 and item2:GetComponent(ItemFreefallBoss) ~= nil
        local config = self.m_activityModel:GetTargetConfigBySlotId(item:GetComponent(ItemFreefallBoss):GetSlotId())
        local weakDir = config:GetWeakDir()
        if not isBossItem and not Table.IsEmpty(weakDir) then
          if Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.All) then
            infoMap[x + v[1]][y + v[2]] = 2
          elseif v[1] < 0 and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Left) then
            infoMap[x + v[1]][y + v[2]] = 2
          elseif 1 < v[1] and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Right) then
            infoMap[x + v[1]][y + v[2]] = 2
          elseif 0 > v[2] and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Up) then
            infoMap[x + v[1]][y + v[2]] = 2
          elseif 1 < v[2] and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Down) then
            infoMap[x + v[1]][y + v[2]] = 2
          else
            infoMap[x + v[1]][y + v[2]] = math.max(infoMap[x + v[1]][y + v[2]], 1)
          end
        end
      end
    end
  end
  for y = 1, FreefallActivityBoardModel.VerticalTiles do
    for x = 1, FreefallActivityBoardModel.HorizontalTiles do
      local val = infoMap and infoMap[x] and infoMap[x][y] or 0
      local tileObject
      if val == 2 then
        tileObject = Object.Instantiate(self.m_weaakTileGo, self.m_tileEffectTransform)
      end
      if tileObject ~= nil then
        local pos = FreefallActivityBoardModel.CreatePosition(x, y)
        local localPosition = pos:ToLocalPosition()
        tileObject.transform.localPosition = Vector3(localPosition.x + self.m_model.TileSize / 2, localPosition.y + self.m_model.TileSize / 2, 0)
      end
    end
  end
end

function FreefallActivityBoardView:OndoublePopCachedItem(message)
end

function FreefallActivityBoardView:GetHitScore()
end

function FreefallActivityBoardView:_PlayDoubleEnergyJumpAnimation()
end

function FreefallActivityBoardView:_ClickSwallowIem()
end

function FreefallActivityBoardView:_OnItemStickRewardClaim()
end
