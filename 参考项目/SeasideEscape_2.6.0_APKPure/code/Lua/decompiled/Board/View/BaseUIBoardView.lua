BaseUIBoardView = setmetatable({}, BaseActionBoardView)
BaseUIBoardView.__index = BaseUIBoardView
BaseUIBoardView.MergePromptInterval = 2.3

function BaseUIBoardView:Init(activityType, boardModel, itemDeleteButton)
  self:_Ctor(activityType, boardModel, itemDeleteButton)
  BaseActionBoardView.Init(self, boardModel)
  self:_InitCamera()
  self:_InitBoardNormalView(boardModel, itemDeleteButton)
  self:_InitItemTransformLayer()
  self:_InitCloudView()
  self:_InitExtraPdItems()
  self:_UpdateCompleteTiles(false)
  self:_StartPrompt()
  self:_RegisterBoardEvent()
  self:_AddActiveListeners()
end

function BaseUIBoardView:_RegisterBoardEvent()
  REGISTER_BOARD_EVENT_HANDLER(self, "MergeItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CollapseItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CostItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SpreadFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "BatchRemoveItems")
  REGISTER_BOARD_EVENT_HANDLER(self, "LackSpreadEnergy")
  REGISTER_BOARD_EVENT_HANDLER(self, "SellItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "DissolveItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SweepItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddNewItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "UnlockCloud")
  REGISTER_BOARD_EVENT_HANDLER(self, "HuntPdTransformItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "DigFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "FocusOnItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemScaled")
  REGISTER_BOARD_EVENT_HANDLER(self, "HuntKeyCollect")
  REGISTER_BOARD_EVENT_HANDLER(self, "SignatureUpgrade")
  REGISTER_BOARD_EVENT_HANDLER(self, "PopCachedItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemStickRewardClaim")
end

function BaseUIBoardView:_AddActiveListeners()
  EventDispatcher.AddActiveListener(EEventType.AutoRun, self, self._TryAutoRun)
  EventDispatcher.AddActiveListener(EEventType.ApplicationWillEnterForeground, self, self._ClearPointerDataOnUnexpectedPointerExit)
  EventDispatcher.AddActiveListener(EEventType.TutorialFinished, self, self._StartPrompt)
  EventDispatcher.AddActiveListener(EEventType.ItemOpened, self, self._StartPrompt)
  EventDispatcher.AddActiveListener(EEventType.HuntUpdateTileBG, self, self._UpdateTileBG)
end

function BaseUIBoardView:_Ctor(activityType, boardModel, itemDeleteButton)
  Log.Assert("BaseUIBoardView:_Ctor \230\152\175\232\153\154\229\135\189\230\149\176")
end

function BaseUIBoardView:GetBoardCamera()
  Log.Assert(false, "BaseUIBoardView:GetBoardCamera \230\152\175\232\153\154\229\135\189\230\149\176")
end

function BaseUIBoardView:GetBIActionMap()
  Log.Assert(false, "BaseUIBoardView:GetBIActionMap \230\152\175\232\153\154\229\135\189\230\149\176")
end

function BaseUIBoardView:ConvertWorldPositionToScreenPosition(position)
  Log.Assert(false, "BaseUIBoardView:ConvertWorldPositionToScreenPosition \230\152\175\232\153\154\229\135\189\230\149\176")
  return Vector3(0, 0, 0)
end

function BaseUIBoardView:OnDestroy()
  BaseActionBoardView.OnDestroy(self)
  self:_CancelPrompt()
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
  if not Table.IsEmpty(self.m_mapScrollSeq) then
    for seq, _ in pairs(self.m_mapScrollSeq) do
      seq:Kill()
    end
  end
  self.m_mapScrollSeq = nil
end

function BaseUIBoardView:Update()
  if self.m_hasDissolveItem then
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxSandBreak)
    self.m_hasDissolveItem = false
  end
  if GameConfig.IsTestMode() and Input.GetKeyUp(KeyCode.BackQuote) then
    if GM.UIManager:IsEventLock() then
      return
    end
    GM.TestAutoRunModel:OnMergeAllClicked()
  end
end

function BaseUIBoardView:GetDisplayBoardWindowName()
  return self.m_activityDefinition.MainWindowPrefabName
end

function BaseUIBoardView:IsDigType()
  return self.m_activityDefinition and self.m_activityDefinition.IsDigType
end

function BaseUIBoardView:ConvertBoardPositionToScreenPosition(boardPosition)
  local plottingPosition = boardPosition:ToLocalPosition()
  local worldPosition = self:GetItemsTransform():TransformPoint(Vector3(plottingPosition.x + BaseSceneBoardModel.TileSize / 2, plottingPosition.y + BaseSceneBoardModel.TileSize / 2, 0))
  return self:ConvertWorldPositionToScreenPosition(worldPosition)
end

function BaseUIBoardView:_InitBoardNormalView(boardModel, itemDeleteButton)
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
      local mskTrans = go.transform:Find("ScrollMask")
      if mskTrans then
        mskTrans.gameObject:SetActive(false)
        self.m_scrollMaskTrans = mskTrans
      end
    end)
  end
end

function BaseUIBoardView:GetCacheRoot()
  return self.m_cacheRootController:GetRoot()
end

function BaseUIBoardView:_InitCamera()
  self.m_camera = self:GetBoardCamera()
  self.m_canvas.worldCamera = self.m_camera
  if self.m_activityDefinition.CanvasPos then
    self.m_canvas.transform.localPosition = self.m_activityDefinition.CanvasPos
  else
    UIUtil.SetLocalPosition(self.m_canvas.transform, BaseBoardModel.TileSize * self.m_model.HorizontalTiles / 2)
  end
  if self.m_activityDefinition.CanvasScaler then
    self.m_canvas.transform.localScale = self.m_activityDefinition.CanvasScaler
  end
end

function BaseUIBoardView:GetCanvasRect()
  return self.m_canvas.transform
end

function BaseUIBoardView:_InitExtraPdItems()
  local items = self.m_model:GetExtraPdItems()
  if not items then
    return
  end
  for index, item in pairs(items) do
    local view = self.m_itemViewFactory:Create(self, item)
    self.m_modelViewMap[item] = view
  end
end

function BaseUIBoardView:_InitCloudView()
  local cloudConfig, stateMap, swallowLockStateMap = self.m_model:GetCloudInfo()
  if not cloudConfig then
    return
  end
  local model = GM.ActivityManager:GetModel(self.m_activityType)
  local boardOffsetLine = model:GetBoardInitDepth() - (self.m_model.VerticalTiles + 1)
  local cloudMatrix = cloudConfig.board
  self.m_cloudView = {}
  self.m_cloudTransform.gameObject:RemoveChildren()
  local tileSize = self.m_model.TileSize
  local verticalTiles = self.m_model.VerticalTiles
  for i = #cloudMatrix - boardOffsetLine, #cloudMatrix - boardOffsetLine - self.m_model.VerticalTiles + 1, -1 do
    if not Table.IsEmpty(cloudMatrix[i]) then
      for j = 1, #cloudMatrix[i] do
        local id = cloudMatrix[i][j]
        if self.m_cloudView[id] == nil and (not stateMap[id] and cloudConfig.lock[id] or self.m_delayUnlockCloudId ~= nil and self.m_delayUnlockCloudId == id) then
          local go
          if cloudConfig.lock[id].num then
            go = GameObject.Instantiate(self.m_cloudSwallowLockPrefab, self.m_cloudTransform)
          else
            go = GameObject.Instantiate(self.m_cloudLockPrefab, self.m_cloudTransform)
          end
          local x = (cloudConfig.lock[id].pos[1] - 0.5) * tileSize
          local y = (#cloudMatrix - boardOffsetLine - cloudConfig.lock[id].pos[2] + 0.5) * tileSize
          go.transform.localPosition = Vector3(x, y, 0)
          self.m_cloudView[id] = go:GetLuaTable()
          local bShowLock
          if self.m_delayUnlockCloudId ~= nil and self.m_delayUnlockCloudId == id then
            bShowLock = false
          else
            bShowLock = id <= 1 or 1 < id and stateMap[id - 1]
          end
          self:_InitCloudViewLockConfig(cloudConfig, id, bShowLock, swallowLockStateMap)
        end
        if self.m_cloudView[id] then
          local go = GameObject.Instantiate(self.m_cloudPrefab, self.m_cloudTransform)
          local x = (j - 0.5) * tileSize
          local y = (#cloudMatrix - boardOffsetLine - i + 0.5) * tileSize
          go.transform.localPosition = Vector3(x, y, 5)
          self.m_cloudView[id]:AddCloud(go, j, i + boardOffsetLine - (#cloudMatrix - self.m_model.VerticalTiles))
        end
      end
    end
  end
end

function BaseUIBoardView:_InitCloudViewLockConfig(cloudConfig, id, bShowLock, swallowLockStateMap)
  local lockConfig = cloudConfig.lock[id]
  if lockConfig.num then
    self.m_cloudView[id]:Init(lockConfig.unlock, self.m_activityType, bShowLock, lockConfig.num, swallowLockStateMap and swallowLockStateMap[id] or 0, lockConfig.notice, lockConfig.color)
  else
    self.m_cloudView[id]:Init(lockConfig.unlock, self.m_activityType, bShowLock, lockConfig.notice, lockConfig.color)
  end
end

function BaseUIBoardView:TryShowCloudUnlockAnimation()
  if self.m_delayUnlockCloudId and self.m_cloudView and self.m_cloudView[self.m_delayUnlockCloudId] then
    self.m_cloudView[self.m_delayUnlockCloudId]:PlayLockAppearAni(function()
      local mainWindow = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
      if mainWindow and mainWindow.TryShowPdUpgradeTip then
        mainWindow:TryShowPdUpgradeTip()
      end
    end, 0)
    self.m_delayUnlockCloudId = nil
    if self.m_delayUpgradeFunc then
      self.m_delayUpgradeFunc()
      self.m_delayUpgradeFunc = nil
    end
  end
end

function BaseUIBoardView:_AddTile(boardPosition)
  BaseActionBoardView._AddTile(self, boardPosition)
  local tileObject = Object.Instantiate(self.m_tilePrefab, self.m_tilesTransform)
  local tileSprite = tileObject:GetComponent(typeof(SpriteRenderer))
  SpriteUtil.SetSpriteRenderer(tileSprite, ImageFileConfigName.tile_bg3)
  tileSprite.color = self.CompleteTileColor
  self.m_completeTileMap:SetValueOnPosition(boardPosition, {Sprite = tileSprite, Show = true})
  local localPosition = boardPosition:ToLocalPosition()
  tileObject.transform.localPosition = Vector3(localPosition.x + self.m_model.TileSize / 2, localPosition.y + self.m_model.TileSize / 2, -1)
end

function BaseUIBoardView:_UpdateTile(tile1Sprite, tile2Sprite)
  local tile1, tile2
  if self.m_bTileInversed then
    tile1 = self.m_activityDefinition.TileImageName2
    tile2 = self.m_activityDefinition.TileImageName1
  else
    tile1 = self.m_activityDefinition.TileImageName1
    tile2 = self.m_activityDefinition.TileImageName2
  end
  for position, tileSprite in pairs(self.m_tileMap) do
    local isEven = (position:GetX() + position:GetY()) % 2 == 0
    if not isEven then
      if tile1 then
        SpriteUtil.SetSpriteRenderer(tileSprite, tile1)
      else
        tileSprite.sprite = nil
      end
    elseif tile2 then
      SpriteUtil.SetSpriteRenderer(tileSprite, tile2)
    else
      tileSprite.sprite = nil
    end
  end
end

function BaseUIBoardView:_UpdateCompleteTiles(animation)
  for position in self.m_model.GetValidPositionIterator() do
    local itemModel = self.m_model:GetItem(position)
    self:UpdateCompleteTileDisplay(position, itemModel ~= nil and self:CanShowGreenTileBG(itemModel:GetCode()), animation)
  end
end

function BaseUIBoardView:_UpdateTileBG(msg)
  if msg and msg.updateAll then
    self:_UpdateCompleteTiles(true)
  else
    self:_UpdateSingleCompleteTile(msg and msg.pos, true, msg and msg.NoAnimation)
  end
end

function BaseUIBoardView:_UpdateSingleCompleteTile(position, animation, noFade)
  if position == nil then
    return
  end
  local itemModel = self.m_model:GetItem(position)
  self:UpdateCompleteTileDisplay(position, itemModel ~= nil and self:CanShowGreenTileBG(itemModel:GetCode()), animation, noFade)
end

function BaseUIBoardView:CanShowGreenTileBG(code)
  return self.m_model:IsCurrentNeedKeyType(code)
end

function BaseUIBoardView:UpdateCompleteTileDisplay(position, show, animation, noFade)
  if position == nil or self.m_completeTileMap:GetValueOnPosition(position) == nil then
    return
  end
  if self.m_completeTileMap:GetValueOnPosition(position).Show == show then
    if not animation then
      self.m_completeTileMap:GetValueOnPosition(position).Sprite:DOKill()
      UIUtil.SetAlpha(self.m_completeTileMap:GetValueOnPosition(position).Sprite, show and 1 or 0)
    end
  else
    self.m_completeTileMap:GetValueOnPosition(position).Show = show
    if animation and not noFade then
      self.m_completeTileMap:GetValueOnPosition(position).Sprite:DOFade(show and 1 or 0, 0.2)
    else
      UIUtil.SetAlpha(self.m_completeTileMap:GetValueOnPosition(position).Sprite, show and 1 or 0)
    end
  end
end

function BaseUIBoardView:HideBoard()
  self.m_tilesTransform.gameObject:SetActive(false)
  self.m_itemsTransform.gameObject:SetActive(false)
  if self.m_boardBgGo then
    self.m_boardBgGo:SetActive(false)
  end
  self.m_cloudTransform.gameObject:SetActive(false)
  if self.m_transformLayerTrans then
    self.m_transformLayerTrans.gameObject:SetActive(false)
  end
end

function BaseUIBoardView:ShowBoard()
  self.m_tilesTransform.gameObject:SetActive(true)
  self.m_itemsTransform.gameObject:SetActive(true)
  if self.m_boardBgGo then
    self.m_boardBgGo:SetActive(true)
  end
  self.m_cloudTransform.gameObject:SetActive(true)
  if self.m_transformLayerTrans then
    self.m_transformLayerTrans.gameObject:SetActive(true)
  end
end

function BaseUIBoardView:_InitItemTransformLayer()
  self.m_itemTransformLayerModelViewMap = {}
  for position in self.m_model.GetValidPositionIterator() do
    local itemModel = self.m_model:GetItemTransformModel(position)
    if itemModel ~= nil then
      self:_AddItemTransformLayerView(itemModel)
    end
  end
end

function BaseUIBoardView:GetItemTransformLayer()
  return self.m_transformLayerTrans
end

function BaseUIBoardView:_AddItemTransformLayerView(itemModel)
  local itemView = self.m_itemViewFactory:CreateItemTransformLayerView(self, itemModel)
  itemView:SetToCobwebColor()
  local itemSpreadView = itemView:GetComponent(ItemSpreadView)
  if itemSpreadView then
    itemSpreadView:HideEffect(true)
  end
  self.m_itemTransformLayerModelViewMap[itemModel] = itemView
end

function BaseUIBoardView:_StartPrompt()
  if self.m_iPromptLockCount and self.m_iPromptLockCount > 0 then
    return
  end
  self:_CancelPrompt()
  if GM.TutorialModel:HasAnyStrongTutorialOngoing() then
    if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
      GM.TestAutoRunModel.mergeAll = false
    end
    return
  end
  if PlayerPrefs.GetInt(EPlayerPrefKey.OpenHint, 1) == 0 then
    return
  end
  self.m_promptScheduler = self.PromptSchedulerOrigin
  local interval = self:_GetStartPromptScheduleDelay()
  Scheduler.Schedule(self.m_promptScheduler, self, 0, 1, interval)
end

function BaseUIBoardView:_GetStartPromptScheduleDelay()
  local interval = self.MergePromptInterval
  if GameConfig.IsTestMode() then
    if GM.TestAutoRunModel.mergeAll then
      interval = 0
    elseif GM.TestAutoRunModel.autoRun then
      interval = GM.TestAutoRunModel.interval
    end
  end
  return interval
end

function BaseUIBoardView:PromptSchedulerOrigin()
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
    if self.m_prompt == nil then
      if GM.TestAutoRunModel.mergeAll then
        GM.TestAutoRunModel.mergeAll = false
      end
      GM.TestAutoRunModel:AddInterval()
      self:_StartPrompt()
    else
      GM.TestAutoRunModel:ResetInterval()
      self:_StartPrompt()
    end
  end
end

function BaseUIBoardView:SetPromptLock(isLock)
  self.m_iPromptLockCount = (self.m_iPromptLockCount or 0) + (isLock and 1 or -1)
  if self.m_iPromptLockCount < 0 then
    self.m_iPromptLockCount = 0
    Log.Error("EventLockCount \228\184\141\229\186\148\228\184\186\232\180\159\230\149\176\239\188\129")
  end
end

function BaseUIBoardView:_SelectPrompt()
  if GM.TutorialModel:HasAnyStrongTutorialOngoing() then
    return nil
  end
  local prompts = self:_GetPrompts()
  
  local function comparer(prompt1, prompt2)
    return prompt1:GetType() < prompt2:GetType()
  end
  
  table.sort(prompts, comparer)
  for _, prompt in ipairs(prompts) do
    if prompt:CanStart(self) then
      return prompt
    end
  end
  return nil
end

function BaseUIBoardView:_GetPrompts()
  return {}
end

function BaseUIBoardView:_CancelPrompt()
  if self.m_promptScheduler ~= nil then
    Scheduler.Unschedule(self.m_promptScheduler, self)
    self.m_promptScheduler = nil
  end
  if self.m_prompt ~= nil then
    self.m_prompt:Stop(self)
    self.m_prompt = nil
  end
end

function BaseUIBoardView:StopPrompt()
  self:_CancelPrompt()
end

function BaseUIBoardView:_OnCollectItem(message)
  local rewards = message.Source:GetComponent(ItemCollectable):GetRewards()
  if rewards[1][PROPERTY_TYPE] == HuntActivityModel.MineScoreType then
    local score = rewards[1][PROPERTY_COUNT]
    local model = GM.ActivityManager:GetModel(self.m_activityType)
    model:AddDigScore(score)
    GM.BIManager:LogAcquire("huntscore", score, EBIType.HuntTokenAcquireItem, true, EGameMode.Hunt)
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
    BaseActionBoardView._OnCollectItem(self, message)
  end
end

function BaseUIBoardView:_OnTransformItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
  end
  if message.bTransformLayer then
    local itemView = self.m_itemTransformLayerModelViewMap[message.New]
    if itemView then
      itemView:OnRemoved()
      itemView.gameObject:RemoveSelf()
    end
    self.m_itemTransformLayerModelViewMap[message.New] = nil
  end
  BaseActionBoardView._OnTransformItem(self, message)
end

function BaseUIBoardView:_ClickSwallowIem(item, playAnimation)
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
  if itemView == nil then
    return
  end
  local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(0, 200, 0)
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  screenPosition = Vector3(Screen.width * 0.5, screenPosition.y, screenPosition.z)
  GM.UIManager:ShowImagePromptWithKey(key, screenPosition, nil, EPromptStyle.HuntSwallowTip, nil, nil, ImageFileConfigName.swallow_prompt_bg, swallowItem and GM.ItemDataModel:GetSpriteName(swallowItem))
end

function BaseUIBoardView:_OnSpreadItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  if sourceItemView.BeforeSpreadItem then
    sourceItemView:BeforeSpreadItem()
  end
  BaseActionBoardView._OnSpreadItem(self, message)
  local sfx = self:_GetSpreadAudio(message)
  GM.AudioModel:PlayEffect(sfx)
end

function BaseUIBoardView:_GetSpreadAudio(message)
  return AudioFileConfigName.SfxMergeSpawnManual
end

function BaseUIBoardView:_OnBatchSwallowItem(message)
  local function onBegin()
    if self.m_activityDefinition.IsDigType or Table.IsEmpty(self.m_model:GetExtraPdItems()) then
      self:_UpdateIndicator()
    else
      for _, score in pairs(message.Sources) do
        if self.m_selectedBoardPosition == score:GetPosition() then
          self:_UpdateIndicator()
          break
        end
      end
    end
    GM.UIManager:SetEventLock(true)
  end
  
  local function onEnd()
    GM.UIManager:SetEventLock(false)
  end
  
  self:_DoBatchSwallowItem(message, onBegin, onEnd)
end

function BaseUIBoardView:_OnMergeItem(message)
  local level = GM.ItemDataModel:GetChainLevel(message.New:GetType())
  local sfx
  if level <= 2 then
    sfx = AudioFileConfigName.SfxMergelv2
  elseif level < 9 then
    sfx = AudioFileConfigName["SfxMergelv" .. level]
  else
    sfx = AudioFileConfigName.SfxMergelv9
  end
  GM.AudioModel:PlayEffect(sfx)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local targetItemView = self:GetItemView(message.Target)
  targetItemView.toBeRemoved = true
  local newItemView = self:_AddItemView(message.New)
  local targetPosition = targetItemView.transform.localPosition
  local sequence = DOTween.Sequence()
  sequence:Insert(0, sourceItemView.transform:DOLocalMove(targetPosition, 0.1))
  sequence:Insert(0, sourceItemView.transform:DOScale(0.3, 0.1))
  sequence:InsertCallback(0.1, function()
    self:_RemoveItemViewByView(sourceItemView)
  end)
  targetItemView:MergeLightDisappear()
  sequence:Insert(0, targetItemView.transform:DOScale(0.3, 0.1))
  sequence:InsertCallback(0.1, function()
    self:_RemoveItemViewByView(targetItemView)
  end)
  if newItemView ~= nil then
    newItemView.transform.localScale = Vector3.zero
    sequence:InsertCallback(0.1, function()
      newItemView.transform.localScale = 0.3 * V3One
    end)
    sequence:Insert(0.1, newItemView.transform:DOScale(1.3, 0.2))
    sequence:Insert(0.3, newItemView.transform:DOScale(1, 0.1))
  end
  sequence:InsertCallback(0.1, function()
    local mergeEffectPrefab = self.m_mergeEffectManager:GetPrefab(level)
    if mergeEffectPrefab ~= nil then
      local gameObject = Object.Instantiate(mergeEffectPrefab, targetItemView.transform.position, Quaternion.identity, self.m_itemsTransform)
      DOVirtual.DelayedCall(1, function()
        gameObject:RemoveSelf()
      end)
    end
  end)
  self:_UpdateIndicator(message.New, true)
  self:GetHitScore(message.New)
end

function BaseUIBoardView:_OnCollapseItem(message)
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
  local itemGray = message.Source:GetComponent(ItemGray)
  if itemGray then
    itemView:GrayBreak(self.m_itemsTransform)
  end
  self:_RemoveItemViewByView(itemView)
  if message.New ~= nil then
    self:_AddItemView(message.New, itemView)
  end
  local effectPrefabConfigName = self.m_activityDefinition.PaperBoxBreakEffectPrefabName or ScenePrefabConfigName.effect_zhixiang_boom
  if itemGray then
    effectPrefabConfigName = ScenePrefabConfigName.effct_UI_boli_posui_1
  end
  GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(effectPrefabConfigName), self.transform, position, function(go)
  end)
  if isMineCollapse then
    EventDispatcher.DispatchEvent(EEventType.DigOreCollapse)
  end
  if message.ItemSticker ~= nil then
    message.ItemSticker:SetNewItem(message.New)
    message.ItemSticker:OnRewardClaimed()
  end
end

function BaseUIBoardView:_OnCostItem(message)
  local itemView = self:GetItemView(message.Source)
  self:_RemoveItemViewByView(itemView)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator()
  end
end

function BaseUIBoardView:_OnSpreadFailed(message)
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
    }, self:GetBIActionMap())
  elseif message.Reason == SpreadFailedReason.LackEnergy then
    local model = GM.ActivityManager:GetModel(self.m_activityType)
    if model and model:TryOnLackHuntFarmToken() then
      return
    end
    local mainWindow = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
    if mainWindow and mainWindow.ShowLackTokenPrompt and mainWindow:ShowLackTokenPrompt() then
      return
    end
    key = "hunt_lack_energy"
  else
    key = "hint_board_full"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardFull)
  end
  local itemView = self:GetItemView(message.Item)
  local offset = self.m_activityDefinition.SpreadFiledPromptOffset and self.m_activityDefinition.SpreadFiledPromptOffset[message.Item:GetId()] or V3Zero
  local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(0, 100, 0) + offset
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  GM.UIManager:ShowPromptWithKey(key, screenPosition)
end

function BaseUIBoardView:_OnBatchRemoveItems(message)
  for _, itemModel in ipairs(message.Removed) do
    local itemView = self:GetItemView(itemModel)
    itemView.toBeRemoved = true
    itemView.transform:DOScale(0, 0.5):OnComplete(function()
      self:_RemoveItemViewByView(itemView)
    end)
    if self.m_selectedBoardPosition == itemModel:GetPosition() then
      self:_UpdateIndicator()
    end
    self:_CancelPrompt()
  end
end

function BaseUIBoardView:_OnLackSpreadEnergy()
  local eGameMode = self.m_model:GetGameMode()
  local shopModel = ShopModel.GetCurrentShopModel()
  shopModel:TryToRefreshEnergy()
  if shopModel:GetBuyEnergyCost() == shopModel:GetMaxBuyEnergyGemCost() and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.MultiTierTriggerOrder) then
    local model = GM.BundleManager:GetModel(EBundleType.MultiTierEnergyActivityBundle)
    
    local function func()
      if not GM.EnergyModel:IsEnergyFull() then
        local prefabName, extraArgs = BuyEnergyWindow.GetPrefabName(eGameMode, shopModel)
        if extraArgs ~= nil then
          extraArgs.bIgnoreTrigger = true
        else
          extraArgs = {bIgnoreTrigger = true}
        end
        GM.UIManager:OpenView(prefabName, shopModel, extraArgs)
      end
    end
    
    local bTriggerd, bShowView = model:Try2ShowEnergyBundle(EBundleTriggerType.LackEnergy, {closeCallback = func})
    if bTriggerd and bShowView then
      return
    end
  end
  local prefabName, extraArgs = BuyEnergyWindow.GetPrefabName(eGameMode, shopModel)
  GM.UIManager:OpenView(prefabName, shopModel, extraArgs)
end

function BaseUIBoardView:_OnSellItem(message)
  local itemView = self:GetItemView(message.Source)
  if itemView == nil then
    local sourceItemCode = message.Source and message.Source:GetCode()
    Log.Error("OnSellItem Error: " .. tostring(sourceItemCode))
    return
  end
  local cost = message.Source:GetSellingPrice()
  local costType = self.m_model:GetSellingPropertyType()
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
  self:_UpdateIndicator()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemSell)
  self:_StartPrompt()
end

function BaseUIBoardView:_OnDissolveItem(message)
  self.m_hasDissolveItem = true
  if message.Source:GetPosition() == self.m_selectedBoardPosition then
    self:_UpdateIndicator()
  end
  local itemView = self:GetItemView(message.Source)
  self:_AddItemView(message.New, itemView)
  itemView.toBeRemoved = true
  itemView:OnDissolve()
  DelayExecuteFunc(function()
    self:_RemoveItemViewByView(itemView)
  end, 1.5)
end

function BaseUIBoardView:_OnSweepItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local targetItemView = self:GetItemView(message.Target)
  targetItemView:MergeLightDisappear()
  local targetPosition = targetItemView.transform.localPosition
  targetPosition = Vector3(targetPosition.x, targetPosition.y, -90)
  local sourcePosition = sourceItemView.transform.localPosition
  sourcePosition = Vector3(sourcePosition.x, sourcePosition.y, -90)
  sourceItemView.transform.localPosition = sourcePosition
  local sequence = DOTween.Sequence()
  sequence:Append(sourceItemView.transform:DOLocalMove(targetPosition, message.FlyTime))
  sequence:AppendCallback(function()
    message.Target:GetComponent(ItemSand):OnSweep()
    if self:GetItemView(message.Source) == sourceItemView then
      self:_RemoveItemViewByView(sourceItemView)
    end
  end)
  self.m_sweepingItem = message.Target
end

function BaseUIBoardView:_OnAddNewItem(message)
  local itemView = self:GetItemView(message.Source)
  if message.New ~= nil then
    self:_AddItemView(message.New, itemView)
  end
end

function BaseUIBoardView:_OnUnlockCloud(message)
  if message.Id == nil then
    if message.KeyProgress ~= nil then
      self.m_cloudView[message.KeyProgress.Id]:PlayProgressAnimation(message.KeyProgress.Val, message.CloudUnlockCallback)
    end
    return
  end
  local upgradeFunc
  if message.Old and message.Index == 2 then
    local view = self:GetItemView(message.Old)
    
    function upgradeFunc()
      view:Init(message.New, view.gameObject, true)
    end
  end
  local id = message.Id
  if message.bNeedScrollBoard then
    self.m_delayUnlockCloudId = id + 1
    self.m_delayUpgradeFunc = upgradeFunc
    self.m_cloudView[id]:PlayDisappearAnim(message.CloudUnlockCallback)
  else
    local function callback()
      if message.CloudUnlockCallback then
        message.CloudUnlockCallback()
      end
      if upgradeFunc then
        upgradeFunc()
      end
      local mainWindow = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
      if mainWindow and mainWindow.TryShowPdUpgradeTip then
        mainWindow:TryShowPdUpgradeTip()
      end
    end
    
    if self.m_cloudView[id + 1] then
      self.m_cloudView[id]:PlayDisappearAnim()
      self.m_cloudView[id + 1]:PlayLockAppearAni(callback, message.KeyProgress ~= nil and 3.3 or 2)
    else
      self.m_cloudView[id]:PlayDisappearAnim(callback)
    end
  end
  if message.Old then
    local view = self:GetItemView(message.Old)
    if message.Index == 1 then
      EventDispatcher.DispatchEvent(EEventType.HuntCloudUnlock, {
        pos = self:ConvertWorldPositionToScreenPosition(self.m_cloudView[id].transform.position),
        item = message.New,
        callback = function()
          view:Init(message.New, view.gameObject, true)
        end
      })
    end
    self:_ReplaceHuntPd(message.Old, message.New)
  end
end

function BaseUIBoardView:_ReplaceHuntPd(origin, new)
  local view = self:GetItemView(origin)
  view:UpdateModel(new)
  self.m_modelViewMap[origin] = nil
  self.m_modelViewMap[new] = view
end

function BaseUIBoardView:_OnHuntPdTransformItem(message)
  self:_ReplaceHuntPd(message.Source, message.New)
  local view = self:GetItemView(message.New)
  view:PlayTransformAnim(message.Source, message.New)
end

function BaseUIBoardView:_OnDigFailed(message)
  local key
  if message.Reason == DigFailedReason.NoToken then
    key = "hunt_dig_hint"
  else
    key = "hint_board_full"
  end
  local itemView = self:GetItemView(message.Item)
  local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  GM.UIManager:ShowPromptWithKey(key, screenPosition)
end

function BaseUIBoardView:_OnFocusOnItem(message)
  self:_UpdateIndicator(message and message.Item, true)
end

function BaseUIBoardView:_OnItemScaled(message)
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

function BaseUIBoardView:_OnHuntKeyCollect(message)
  GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
  local itemView = self:GetItemView(message.Source)
  itemView.toBeRemoved = true
  if message and message.Drag then
    self:_RemoveItemViewByView(itemView)
    return
  end
  itemView.transform:DOScale(Vector3.zero, 0.2):OnComplete(function()
    self:_RemoveItemViewByView(itemView)
  end)
end

function BaseUIBoardView:_OnSignatureUpgrade(message)
  if message.Old == nil and message.New then
    local view = self.m_itemViewFactory:Create(self, message.New)
    self.m_modelViewMap[message.New] = view
    view:PlayAppearAnim()
  elseif message.Old and message.New then
    local view = self:GetItemView(message.Old)
    view:Init(message.New, view.gameObject, true)
    self:_ReplaceHuntPd(message.Old, message.New)
  end
end

function BaseUIBoardView:_OnPopCachedItem(message)
  if message.OriginalItem ~= nil then
    self:OndoublePopCachedItem(message)
    return
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnManual)
  local itemView = self:_AddItemView(message.New)
  if itemView ~= nil then
    local worldPosition = self.m_cacheRootController:GetRoot():GetCachedItemWorldPos()
    local sourcePosition = self.transform:InverseTransformPoint(worldPosition)
    local targetPosition = itemView.transform.localPosition
    local targetWorldPosition = itemView.transform.position
    self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition)
    if message.IsPd then
      self:GetHitScore(message.New, 0.8, targetWorldPosition)
    end
  end
  self:_StartPrompt()
  if self.m_sandItemIndicator then
    self.m_sandItemIndicator:UpdateIndicator()
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
end

function BaseUIBoardView:OndoublePopCachedItem(message)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeSpawnManual)
  local newItemView = self:_AddItemView(message.New)
  local originalItemView
  if message.OriginalItem ~= nil then
    originalItemView = self.m_itemViewFactory:Create(self, message.OriginalItem)
    originalItemView:SetDoubleEnergyFlyItemInfo()
  end
  local flyItemView = newItemView
  local nHintCode = message.New:GetCode()
  if newItemView == nil then
    return
  end
  if originalItemView ~= nil then
    flyItemView = originalItemView
    newItemView.gameObject:SetActive(false)
    nHintCode = message.OriginalItem:GetCode()
  end
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
  end
  
  local worldPosition = self.m_cacheRootController:GetRoot():GetCachedItemWorldPos()
  local sourcePosition = self.transform:InverseTransformPoint(worldPosition)
  local targetPosition = newItemView.transform.localPosition
  if originalItemView ~= nil then
    self:_PlayDoubleEnergyJumpAnimation(flyItemView, sourcePosition, targetPosition, callback)
  else
    self:_PlayJumpAnimation(newItemView, sourcePosition, targetPosition)
  end
  self:_GetPopCachedItemHitScore(message, newItemWorldPos)
  self:_StartPrompt()
  if self.m_sandItemIndicator then
    self.m_sandItemIndicator:UpdateIndicator()
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
end

function BaseUIBoardView:_PlayDoubleEnergyJumpAnimation(itemView, sourcePosition, targetPosition, callback, boardSpreadType)
  local luckySpread = BoardSpreadType.IsLuckySpread(boardSpreadType)
  local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, 0)
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

function BaseUIBoardView:_OnItemStickRewardClaim(msg)
  if not msg then
    return
  end
  local sourceScreenPosition
  if msg.NewItemModel then
    local itemView = self:GetItemView(msg.NewItemModel)
    sourceScreenPosition = self:ConvertWorldPositionToScreenPosition(itemView.transform.position)
  elseif msg.NewPosition then
    sourceScreenPosition = self:ConvertWorldPositionToScreenPosition(msg.NewPosition)
  end
  local sourceUIWorldPosition = PositionUtil.UICameraScreen2World(sourceScreenPosition)
  sourceUIWorldPosition.z = 0
  local positions = {}
  for i = 1, #msg.Rewards do
    positions[i] = sourceUIWorldPosition
  end
  RewardApi.AcquireRewardsInView(msg.Rewards, {
    arrWorldPos = positions,
    noDelayTime = true,
    startScale = Vector3(0.9, 0.9, 1)
  })
end

function BaseUIBoardView:_UpdateIndicator(item, playAnimation)
  BaseActionBoardView._UpdateIndicator(self, item, playAnimation)
  if self.m_infoBar then
    self.m_infoBar:UpdateInfoBar(item)
  end
  if self.m_itemDeleteButton then
    self.m_itemDeleteButton:UpdateItem(item)
  end
  self.m_indicator.transform.localPosition = Vector3(self.m_indicator.transform.localPosition.x, self.m_indicator.transform.localPosition.y, 0)
  if self.m_sweepingItem == item then
    self.m_sandItemIndicator:UpdateIndicator()
  else
    self.m_sandItemIndicator:UpdateIndicator(item, playAnimation)
  end
end

function BaseUIBoardView:OnPointerDown(worldPosition)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local forceSourceBoardPosition = GM.TutorialModel:GetForceSourceBoardPosition()
  if forceSourceBoardPosition ~= nil and forceSourceBoardPosition ~= boardPosition then
    return
  end
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.UnlockCloud) and self.m_model:IsTileLock(boardPosition) then
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
  if self.m_model:IsTileLock(boardPosition) then
    for _, v in pairs(self.m_cloudView) do
      if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.UnlockCloud) and v.TryShowGray and v:TryShowGray(boardPosition) then
        self:ClearIndicator()
        self:_CancelPrompt()
        break
      end
    end
  end
end

function BaseUIBoardView:_ClearPointerDataOnUnexpectedPointerExit()
  if self.m_lastTouchedItem == nil then
    return
  end
  local itemModel = self.m_lastTouchedItem:GetModel()
  if self.m_model:CanItemMove(itemModel) then
    self.m_model:DragItem(itemModel, self.m_model.CreatePosition(0, 0))
  end
  local selectedItem = self:GetSelectedItemModel()
  self:_UpdateIndicator(selectedItem, true)
  self.m_moreThanOnceTap = false
  self.m_dragging = false
  self.m_lastTouchedItem = nil
  self:_UpdateItemAffectedEffect()
end

function BaseUIBoardView:OnPointerDownOnExtraItem(index)
  local itemModel = self.m_model:GetExtraItem(index)
  if itemModel ~= nil then
    self.m_lastTouchedItem = self:GetItemView(itemModel)
    self.m_moreThanOnceTap = true
    self.m_selectExtraPos = index
    self:_CancelPrompt()
    if not self.m_moreThanOnceTap then
      EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    end
    self.m_selectExtraItem = true
  end
end

function BaseUIBoardView:OnDrag(worldPosition, colliderName)
  if self.m_lastTouchedItem == nil or self.m_lastTouchedItem.gameObject == nil or self.m_lastTouchedItem.gameObject:IsNull() then
    return
  end
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if not self.m_dragging and canItemMove then
    self:_UpdateIndicator()
    EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
    EventDispatcher.DispatchEvent(EEventType.UpdateSwallowItemTip)
    EventDispatcher.DispatchEvent(EEventType.StartDraggingItem, {
      item = self.m_lastTouchedItem
    })
    self:_UpdateItemAffectedEffect()
  end
  if not canItemMove then
    return
  end
  self.m_dragging = true
  worldPosition.z = 0
  self.m_lastTouchedItem.transform.position = worldPosition
  self:_TryShowMergeLight(worldPosition, colliderName)
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.UnlockCloud) then
    self:_TryShowCloudUnlock(worldPosition)
  end
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if canItemMove then
    self:UpdateCompleteTileDisplay(self.m_lastTouchedItem:GetModel():GetPosition(), false, true)
  end
end

function BaseUIBoardView:_TryShowMergeLight(worldPosition, colliderName)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local itemModel, itemView = self:_GetShowMergeLightItem(boardPosition, colliderName)
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

function BaseUIBoardView:_GetShowMergeLightItem(boardPosition, colliderName)
  local itemModel = self.m_model:GetItem(boardPosition)
  local itemView = self:GetItemView(itemModel)
  return itemModel, itemView
end

function BaseUIBoardView:_TryShowCloudUnlock(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local x, y = boardPosition:GetX(), boardPosition:GetY()
  local lastItemModel = self.m_lastTouchedItem:GetModel()
  if not lastItemModel then
    return
  end
  if not lastItemModel:GetComponent(ItemHuntCloudKey) or not self.m_model:IsCurrentNeedKeyType(lastItemModel:GetCode()) then
    return
  end
  local pos = self:_GetBoardPosition(worldPosition)
  if self.m_model:IsTileLock(pos) then
    for _, v in pairs(self.m_cloudView) do
      if v.TryShowGray then
        v:TryShowGray(pos)
      end
    end
  else
    for _, v in pairs(self.m_cloudView) do
      if v.TryShowNormal then
        v:TryShowNormal()
      end
    end
  end
end

function BaseUIBoardView:_OnTouchedItemNull(worldPosition)
  if self.m_sandItemIndicator then
    self.m_sandItemIndicator:UpdateIndicator()
  end
  local pos = self:_GetBoardPosition(worldPosition)
  if self.m_model:IsTileLock(pos) then
    for _, v in pairs(self.m_cloudView) do
      local unlock
      if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.UnlockCloud) and v.IsCurrentShowLock and v:IsCurrentShowLock() and v.IsClicked and v:IsClicked(pos) then
        unlock = self.m_model:TryUnclockCloudByClick()
        if v.TryShowNormal then
          v:TryShowNormal()
        end
      end
      if not unlock then
        v:TryShowLockPrompt(pos)
      end
    end
  else
    for _, v in pairs(self.m_cloudView) do
      if v.TryShowNormal then
        v:TryShowNormal()
      end
    end
  end
  EventDispatcher.DispatchEvent(EEventType.UpdateBroomItemTip)
  EventDispatcher.DispatchEvent(EEventType.UpdateSwallowItemTip)
end

function BaseUIBoardView:_GetPopCachedItemHitScore(message, newItemWorldPos)
end

function BaseUIBoardView:_GetIsDragToUnlockCloud(targetBoardPosition)
  return nil
end

function BaseUIBoardView:_OnDraggingEnd(itemModel, targetBoardPosition, index)
  local dragToUnlockCloud = self:_GetIsDragToUnlockCloud(targetBoardPosition)
  self.m_model:DragItem(itemModel, targetBoardPosition, index, dragToUnlockCloud)
  if self.m_model:GetItem(itemModel:GetPosition()) == itemModel then
    self.m_selectedBoardPosition = itemModel:GetPosition()
  else
    self.m_selectedBoardPosition = targetBoardPosition
  end
end

function BaseUIBoardView:OnPointerUp(worldPosition, index)
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
        if itemModel:GetCode() == self.m_activityDefinition.SwallowCode or itemModel:GetCode() == self.m_activityDefinition.SwallowCode2 then
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
  self:_UpdateItemAffectedEffect()
  self:_StartPrompt()
  EventDispatcher.DispatchEvent(EEventType.HuntBoardPointerUp, {
    dragging = self.m_dragging
  })
end

function BaseUIBoardView:_OnTapSwallowedItem(itemModel)
  for index, item in pairs(self.m_model:GetExtraPdItems()) do
    local swallow = item:GetComponent(ItemSwallow)
    local itemSpeard = item:GetComponent(ItemSpread)
    if swallow then
      if swallow:CanSwallow(itemModel) then
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
      end
      break
    elseif itemSpeard then
      GM.UIManager:ShowPromptWithKey("simulate_cache_tips1")
      EventDispatcher.DispatchEvent(EEventType.HuntCowShowHandEffect)
    end
  end
end

function BaseUIBoardView:_OnPlayTapEffect(itemModel)
  local itemView = self:GetItemView(itemModel)
  local pos = self:ConvertWorldPositionToScreenPosition(itemView.transform.position) + self:GetTapPromptOffest()
  if itemModel:GetComponent(ItemPaperBox) ~= nil then
    local itemSticker = itemModel:GetComponent(ItemSticker)
    if itemSticker ~= nil and itemSticker:IsReward() then
      if not self.m_moreThanOnceTap then
        local screenPos = PositionUtil.UICameraScreen2World(pos)
        GM.UIManager:ShowPromptWithKeyScreenPos("board_reward_locked_hint", Vector2(0, screenPos.y))
      end
      itemSticker:OnChoose()
    else
      GM.UIManager:ShowPromptWithKey("item_lock_pb", pos)
    end
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxItemLocked)
  elseif itemModel:GetComponent(ItemGray) ~= nil then
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

function BaseUIBoardView:GetTapPromptOffest()
  Log.Assert(false, "BaseUIBoardView:GetTapPromptOffest \230\152\175\232\153\154\229\135\189\230\149\176")
  return Vector3(0, 0, 0)
end

function BaseUIBoardView:ShowHandEffect(targetPosition)
  local window = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
  if window and window.HasHandEffectGo and window:HasHandEffectGo() then
    window:ShowHandEffect(targetPosition)
  else
    self.m_handEffectGo:SetActive(true)
    targetPosition = Vector3(targetPosition.x + 40, targetPosition.y - 65, 0)
    self.m_handEffectGo.transform.position = targetPosition
  end
end

function BaseUIBoardView:HideHandEffect()
  local window = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
  if window and window.HasHandEffectGo and window:HasHandEffectGo() then
    window:HideHandEffect()
  else
    self.m_handEffectGo:SetActive(false)
  end
end

function BaseUIBoardView:GetVerticalHorizontalTiles()
  if self.m_model and self.m_model.HorizontalTiles and self.m_model.VerticalTiles then
    return self.m_model.VerticalTiles, self.m_model.HorizontalTiles
  end
  return BaseBoardModel.VerticalTiles, BaseBoardModel.HorizontalTiles
end

function BaseUIBoardView:ScrollUp(rows, boardmodel, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local delay = 0.2
  local arrViewMap = {
    self.m_modelViewMap,
    self.m_itemTransformLayerModelViewMap
  }
  self:_DoScrollUpItemViewInAllMap(arrViewMap, rows, boardmodel, flyItemRoot, delay)
  DelayExecuteFunc(function()
    if UIUtil.IsEmptyComponent(self.transform) then
      return
    end
    for position in boardmodel._GetValidPositionIterator(boardmodel, 0, boardmodel.VerticalTiles - rows + 1) do
      self:_DoAddScrollEndItemView(position, boardmodel)
    end
  end, delay)
end

function BaseUIBoardView:ScrollDown(rows, boardmodel, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local delay = 0.2
  local arrViewMap = {
    self.m_modelViewMap,
    self.m_itemTransformLayerModelViewMap
  }
  local updatePosItem = self:_DoScrollDownItemViewInAllMap(arrViewMap, rows, boardmodel, flyItemRoot, delay)
  DelayExecuteFunc(function()
    for _, value in pairs(updatePosItem) do
      value.model:SetPositionWithoutAnim(value.pos)
      if not UIUtil.IsEmptyComponent(value.view) then
        value.view.transform.localPosition = value.view:_GetLocalPosition(value.pos)
      end
    end
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

function BaseUIBoardView:_DoScrollUpItemViewInAllMap(arrViewMap, rows, boardmodel, flyItemRoot, delay)
  local cacheRootAnimMap = {}
  local moveLength = boardmodel.TileSize
  local moveTime = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.HuntActProm) and 0.64 or 0.8
  local animInOrderMap = self:_GetScrollAnimInOrderMap()
  for _, viewMap in ipairs(arrViewMap) do
    for itemModel, itemView in pairs(viewMap or {}) do
      local position = itemModel:GetPosition()
      if rows >= position:GetY() then
        local flyItem = self:_GetInitedFlyItemInScrollAnim(itemModel, itemView, flyItemRoot, true)
        DelayExecuteFunc(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.gameObject:SetActive(true)
          end
        end, 0.7)
        local itemRemoveSeq = DOTween.Sequence()
        if position:GetY() - 1 > 0 then
          DelayExecuteFunc(function()
            if not UIUtil.IsEmptyComponent(flyItem) then
              flyItem.transform:DOMoveY(flyItem.transform.position.y + moveLength * (position:GetY() - 1), moveTime * (position:GetY() - 1)):SetEase(Ease.Linear)
            end
          end, delay + 0.55)
        end
        local startFlyTime = delay + 0.55 + moveTime * (position:GetY() - 1)
        self:_DoRemoveOverflowItemView(itemView, flyItem, position, cacheRootAnimMap, animInOrderMap, startFlyTime)
      else
        DelayExecuteFunc(function()
          local pos = boardmodel.CreatePosition(position:GetX(), position:GetY() - rows)
          itemModel:SetPositionWithoutAnim(pos)
          if not UIUtil.IsEmptyComponent(itemView) then
            itemView.transform.localPosition = itemView:_GetLocalPosition(pos)
          end
        end, delay)
      end
    end
  end
end

function BaseUIBoardView:_DoScrollDownItemViewInAllMap(arrViewMap, rows, boardmodel, flyItemRoot, delay)
  local updatePosItem = {}
  local cacheRootAnimMap = {}
  local moveTime = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.HuntActProm) and 0.64 or 0.8
  local moveLength = -boardmodel.TileSize * (self.m_activityDefinition.BoardScale or 1)
  local boardLength = boardmodel.VerticalTiles
  local animInOrderMap = self:_GetScrollAnimInOrderMap()
  for _, viewMap in ipairs(arrViewMap) do
    for itemModel, itemView in pairs(viewMap or {}) do
      local position = itemModel:GetPosition()
      local flyTime = 0.34
      if position:IsValid() and position:GetY() >= boardLength + 1 - rows and boardLength >= position:GetY() then
        local flyItem = self:_GetInitedFlyItemInScrollAnim(itemModel, itemView, flyItemRoot, true)
        local itemSticker = itemModel:GetComponent(ItemSticker)
        DelayExecuteFunc(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.gameObject:SetActive(true)
            if itemSticker ~= nil then
              itemSticker:OnRewardClaimed()
            end
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
        updatePosItem[#updatePosItem + 1] = {
          model = itemModel,
          view = itemView,
          pos = boardmodel.CreatePosition(position:GetX(), position:GetY() + rows)
        }
      end
    end
  end
  return updatePosItem
end

function BaseUIBoardView:_GetInitedFlyItemInScrollAnim(itemModel, itemView, flyItemRoot, bSetActiveFalse)
  local itemType
  local itemCobweb = itemModel:GetComponent(ItemCobweb)
  local itemPaperBox = itemModel:GetComponent(ItemPaperBox)
  local itemBubble = itemModel:GetComponent(ItemBubble)
  if itemCobweb ~= nil then
    itemType = itemCobweb:GetInnerItemCode()
  end
  if itemPaperBox ~= nil then
    itemType = itemPaperBox:GetInnerItemCode()
  end
  if itemBubble ~= nil then
    itemType = itemBubble:GetInnerItemCode()
  end
  if itemType ~= nil then
    local idx = StringUtil.rFind(itemType, "#")
    if idx ~= nil then
      itemType = string.sub(itemType, idx + 1)
    end
  end
  if itemType == nil then
    itemType = itemModel:GetType()
  end
  local flyItem = self.m_itemViewFactory:CreateFlyItem(self, itemType, ItemFlyView.EFLYTYPE.HuntActivity)
  flyItem.transform:SetParent(self.transform)
  flyItem.transform.position = Vector3(itemView.transform.position.x, itemView.transform.position.y, itemView.transform.position.z)
  if bSetActiveFalse then
    flyItem.gameObject:SetActive(false)
  end
  flyItem.m_numOutl.gameObject:SetActive(false)
  flyItem:HideEffect()
  flyItem.transform:SetParent(flyItemRoot)
  return flyItem
end

function BaseUIBoardView:_GetScrollAnimInOrderMap()
  local animInOrderMap = {}
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local y = position:GetY()
    if animInOrderMap[y] == nil then
      animInOrderMap[y] = {}
    end
    animInOrderMap[y][position:GetX()] = true
  end
  local iVerticalTiles, iHorizontalTiles = self:GetVerticalHorizontalTiles()
  for i = 1, iVerticalTiles do
    if animInOrderMap[i] ~= nil then
      local cnt = 0
      for j = 1, iHorizontalTiles do
        if animInOrderMap[i][j] then
          animInOrderMap[i][j] = cnt
          cnt = cnt + 1
        end
      end
    end
  end
  return animInOrderMap
end

function BaseUIBoardView:_DoRemoveOverflowItemView(itemView, flyItem, position, cacheRootAnimMap, animInOrderMap, startFlyTime)
  local flyTime = 0.34
  local cacheRoot = self:GetCacheRoot()
  DelayExecuteFunc(function()
    if not UIUtil.IsEmptyComponent(flyItem) and not UIUtil.IsEmptyComponent(self.transform) and not UIUtil.IsEmptyComponent(cacheRoot) then
      flyItem.transform:SetParent(self.transform)
      flyItem.transform:SetSiblingIndex(self.transform.childCount - 2)
      flyItem.transform:DOMove(cacheRoot.transform.position, flyTime):SetEase(Ease.OutQuad):OnComplete(function()
        if not UIUtil.IsEmptyComponent(flyItem) then
          flyItem:RecycleSelf()
        end
      end)
    end
  end, startFlyTime + animInOrderMap[position:GetY()][position:GetX()] * 0.05)
  if cacheRootAnimMap[position:GetY()] == nil then
    cacheRootAnimMap[position:GetY()] = true
    DelayExecuteFunc(function()
      local mainwindow = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
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
end

function BaseUIBoardView:_DoAddScrollEndItemView(position, boardmodel)
  local itemModel = boardmodel:GetItem(position, true)
  if itemModel ~= nil then
    self:_AddItemView(itemModel)
  end
  local transformLayerItem = boardmodel:GetItemTransformModel(position)
  if transformLayerItem then
    self:_AddItemTransformLayerView(transformLayerItem)
  end
end

function BaseUIBoardView:EfficientScrollDown(rows, boardmodel, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local animInOrderMap = self:_GetScrollAnimInOrderMap()
  local delay = 0.2
  local cacheRootAnimMap = {}
  local moveTime = GM.ConfigModel:IsServerControlOpen(EGeneralConfType.HuntActProm) and 0.64 or 0.8
  local moveLength = -boardmodel.TileSize * (self.m_activityDefinition.BoardScale or 1)
  local boardLength = boardmodel.VerticalTiles
  local originPositionY = self.m_tilesTransform.position.y
  UIUtil.AddLocalPosition(self.m_tilesTransform, nil, rows * boardmodel.TileSize)
  UIUtil.AddLocalPosition(self.m_itemsTransform, nil, rows * boardmodel.TileSize)
  UIUtil.AddLocalPosition(self.m_cloudTransform, nil, rows * boardmodel.TileSize)
  if rows % 2 == 1 then
    self.m_bTileInversed = not self.m_bTileInversed
  end
  local newTileMap = {}
  for position, tileSprite in pairs(self.m_tileMap) do
    newTileMap[position:GetX() .. "-" .. position:GetY()] = tileSprite
    UIUtil.AddLocalPosition(tileSprite.transform, nil, -rows * boardmodel.TileSize)
  end
  local toMovedTileGo = {}
  for position, tileSprite in pairs(self.m_tileMap) do
    if rows >= position:GetY() then
      BaseUIBoardView._AddTile(self, position)
    else
      local sprite = newTileMap[position:GetX() .. "-" .. position:GetY() - rows]
      self.m_tileMap[position] = newTileMap[position:GetX() .. "-" .. position:GetY() - rows]
    end
    if position:GetY() > boardLength - rows then
      table.insert(toMovedTileGo, newTileMap[position:GetX() .. "-" .. position:GetY()].transform.gameObject)
    end
  end
  self:_UpdateTile()
  self:_UpdateCompleteTiles(false)
  local arrViewMap = {
    self.m_modelViewMap,
    self.m_itemTransformLayerModelViewMap
  }
  for _, viewMap in ipairs(arrViewMap) do
    for itemModel, itemView in pairs(viewMap or {}) do
      local position = itemModel:GetPosition()
      local flyTime = 0.34
      if position:IsValid() and position:GetY() >= boardLength + 1 - rows and boardLength >= position:GetY() then
        UIUtil.AddLocalPosition(itemView.transform, nil, -rows * boardmodel.TileSize)
        local flyItem = self:_GetInitedFlyItemInScrollAnim(itemModel, itemView, flyItemRoot, false)
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
        do
          local pos = boardmodel.CreatePosition(position:GetX(), position:GetY() + rows)
          itemModel:SetPositionWithoutAnim(pos)
          if not UIUtil.IsEmptyComponent(itemView) then
            itemView.transform.localPosition = itemView:_GetLocalPosition(pos)
          end
        end
      end
    end
  end
  for position in boardmodel._GetValidPositionIterator(boardmodel, 0, 1) do
    if rows >= position:GetY() then
      local itemModel = boardmodel:GetItem(position, true)
      if itemModel ~= nil then
        self:_AddItemView(itemModel)
      end
      local transformLayerItem = boardmodel:GetItemTransformModel(position)
      if transformLayerItem then
        self:_AddItemTransformLayerView(transformLayerItem)
      end
    end
  end
  self:_InitCloudView()
  local moveSeq = DOTween.Sequence()
  moveSeq:AppendInterval(0.75)
  moveSeq:Append(self.m_tilesTransform:DOMoveY(originPositionY, moveTime * rows):SetEase(Ease.Linear))
  moveSeq:Insert(0.75, self.m_itemsTransform:DOMoveY(originPositionY, moveTime * rows):SetEase(Ease.Linear))
  moveSeq:Insert(0.75, self.m_cloudTransform:DOMoveY(originPositionY, moveTime * rows):SetEase(Ease.Linear))
  moveSeq:AppendCallback(function()
    if not Table.IsEmpty(toMovedTileGo) then
      for _, go in pairs(toMovedTileGo) do
        go:SetActive(false)
        GameObject.Destroy(go)
      end
    end
  end)
  moveSeq:AppendInterval(0.1)
  moveSeq:AppendCallback(function()
    self:_SetItemVisibleInScrollMask(false)
    self.m_mapScrollSeq[moveSeq] = nil
  end)
  self.m_mapScrollSeq[moveSeq] = true
  self:_SetItemVisibleInScrollMask(true)
end

function BaseUIBoardView:_SetItemVisibleInScrollMask(bSet)
  if not self.m_scrollMaskTrans then
    return
  end
  self.m_scrollMaskTrans.gameObject:SetActive(bSet)
  local sprites = self.m_tilesTransform.gameObject:GetComponentsInChildren(typeof(SpriteRenderer))
  for i = 0, sprites.Length - 1 do
    sprites[i].maskInteraction = bSet and 1 or 0
  end
  local sprites = self.m_itemsTransform.gameObject:GetComponentsInChildren(typeof(SpriteRenderer))
  for i = 0, sprites.Length - 1 do
    sprites[i].maskInteraction = bSet and 1 or 0
  end
  local sprites = self.m_cloudTransform.gameObject:GetComponentsInChildren(typeof(SpriteRenderer))
  for i = 0, sprites.Length - 1 do
    sprites[i].maskInteraction = bSet and 1 or 0
  end
  if self.m_transformLayerTrans then
    local sprites = self.m_transformLayerTrans.gameObject:GetComponentsInChildren(typeof(SpriteRenderer))
    for i = 0, sprites.Length - 1 do
      sprites[i].maskInteraction = bSet and 1 or 0
    end
  end
end

function BaseUIBoardView:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, boardSpreadType)
  if boardSpreadType == BoardSpreadType.HuntSignature then
    return self:_PlaySignatureChildJumpAnimation(itemView, sourcePosition, targetPosition, boardSpreadType)
  elseif boardSpreadType == BoardSpreadType.HuntKitchen then
    return self:_PlayKitchenChildJumpAnimation(itemView, sourcePosition, targetPosition, boardSpreadType)
  end
  return BaseActionBoardView._PlayJumpAnimation(self, itemView, sourcePosition, targetPosition, boardSpreadType)
end

function BaseUIBoardView:_PlaySignatureChildJumpAnimation(itemView, sourcePosition, targetPosition, boardSpreadType)
  local sourcePositionZero = Vector3(497, 1220, -1)
  local targetPositionZero = Vector3(targetPosition.x, targetPosition.y, -1)
  local deltaPosition = targetPositionZero - sourcePositionZero
  local midPosition = Vector3((targetPositionZero.x - sourcePositionZero.x) / 2, sourcePositionZero.y + math.random(50, 200), 0)
  local transform = itemView.gameObject.transform
  transform.localPosition = sourcePositionZero
  transform.localScale = Vector3.zero
  local sequence = DOTween.Sequence()
  itemView:SetJumpTween(sequence)
  sequence:Insert(0.05, transform:DOLocalMoveX(targetPositionZero.x, 0.85):SetEase(Ease.Linear))
  sequence:Insert(0.05, transform:DOLocalMoveY(midPosition.y, 0.4):SetEase(Ease.OutCubic))
  sequence:Insert(0.45, transform:DOLocalMoveY(targetPositionZero.y, 0.45):SetEase(Ease.InCubic))
  sequence:InsertCallback(0.75, function()
    itemView:ShowSpreadLight(boardSpreadType)
    self:_PlayLuckyProducePrompt(itemView, boardSpreadType)
  end)
  sequence:Insert(0.05, transform:DOScale(Vector3(0.8, 0.8, 1), 0.1))
  sequence:Insert(0.15, transform:DOScale(Vector3(1.5, 1.5, 1), 0.2))
  sequence:Insert(0.35, transform:DOScale(Vector3(1, 1, 1), 0.3))
  sequence:Insert(0.65, transform:DOScale(V3One, 0.2))
  sequence:AppendCallback(function()
    transform.localPosition = targetPosition
  end)
  return sequence
end

function BaseUIBoardView:_PlayKitchenChildJumpAnimation(itemView, sourcePosition, targetPosition, boardSpreadType)
  local sourcePositionZero = Vector3(497, 1220, -1)
  sourcePositionZero.x = sourcePosition.x
  sourcePositionZero.y = sourcePosition.y
  local targetPositionZero = Vector3(targetPosition.x, targetPosition.y, -1)
  local deltaPosition = targetPositionZero - sourcePositionZero
  local midPosition = Vector3((targetPositionZero.x - sourcePositionZero.x) / 2, sourcePositionZero.y + math.random(50, 200), 0)
  if self.m_activityDefinition.bSignatureJumpStart then
    midPosition.y = math.min(midPosition.y, 1700)
  end
  local transform = itemView.gameObject.transform
  transform.localPosition = sourcePositionZero
  transform.localScale = Vector3.zero
  local sequence = DOTween.Sequence()
  itemView:SetJumpTween(sequence)
  sequence:Insert(0.05, transform:DOLocalMoveX(targetPositionZero.x, 0.85):SetEase(Ease.Linear))
  sequence:Insert(0.05, transform:DOLocalMoveY(midPosition.y, 0.4):SetEase(Ease.OutCubic))
  sequence:Insert(0.45, transform:DOLocalMoveY(targetPositionZero.y, 0.45):SetEase(Ease.InOutSine))
  sequence:InsertCallback(0.75, function()
    itemView:ShowSpreadLight(boardSpreadType)
    self:_PlayLuckyProducePrompt(itemView, boardSpreadType)
  end)
  sequence:Insert(0, transform:DOScale(Vector3(1, 1, 1), 0.2):SetEase(Ease.Linear))
  sequence:Insert(0.2, transform:DOScale(Vector3(1.8, 1.8, 1), 0.6):SetEase(Ease.Linear))
  sequence:Insert(0.8, transform:DOScale(Vector3(1, 1, 1), 0.15))
  sequence:AppendCallback(function()
    transform.localPosition = targetPosition
  end)
  return sequence
end

function BaseUIBoardView:GetBoardFrameBoundary()
  local boardModel = self.m_model
  local leftUpScreenPos, rightDownScreenPos, localPos, worldPos
  for position in boardModel.GetValidPositionIterator() do
    if position:GetX() == 1 and position:GetY() == 1 then
      localPos = position:ToLocalPosition()
      worldPos = self.m_tilesTransform:TransformPoint(Vector3(localPos.x, localPos.y + BaseSceneBoardModel.TileSize, 0))
      leftUpScreenPos = self:ConvertWorldPositionToScreenPosition(worldPos)
    elseif position:GetX() == boardModel.HorizontalTiles and position:GetY() == boardModel.VerticalTiles then
      localPos = position:ToLocalPosition()
      worldPos = self.m_tilesTransform:TransformPoint(Vector3(localPos.x + BaseSceneBoardModel.TileSize, localPos.y, 0))
      rightDownScreenPos = self:ConvertWorldPositionToScreenPosition(worldPos)
    end
  end
  return leftUpScreenPos, rightDownScreenPos
end

function BaseUIBoardView:GetHitScore(itemModel, aniDelay, targetPosition)
  local itemType = itemModel:GetType()
  local itemView = self:GetItemView(itemModel)
  local itemConfig = GM.ItemDataModel:GetModelConfig(itemType)
  local rewards = itemConfig.GetRewards
  if rewards and rewards[1][PROPERTY_TYPE] == HuntActivityModel.MonsterScoreType then
    local score = rewards[1][PROPERTY_COUNT]
    local model = GM.ActivityManager:GetModel(self.m_activityType)
    model:AddDigScore(score)
    local totalScore = model:GetDigScore()
    local sourceScreenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition or itemView.transform.position)
    local sourceUIWorldPosition = PositionUtil.UICameraScreen2World(sourceScreenPosition)
    sourceUIWorldPosition.z = 0
    local message = {
      position = sourceUIWorldPosition,
      score = score,
      icon = GM.ItemDataModel:GetSpriteName(self.m_activityDefinition.AttackItemFileName),
      item = itemModel,
      totalScore = totalScore
    }
    
    local function func()
      EventDispatcher.DispatchEvent(EEventType.HuntDigScoreFlyAnimation, message)
    end
    
    if aniDelay then
      DelayExecuteFuncInView(func, aniDelay, self)
    else
      func()
    end
  end
end

function BaseUIBoardView:_TryAutoRun()
  self:_UpdateIndicator()
  self.m_model:ResetMergeAllDisableItem()
  self:_StartPrompt()
end

function BaseUIBoardView:_ShouldHideItemCollectableTip()
  if self.gameObject:IsNull() then
    return true
  end
  if not self.m_activityDefinition then
    return true
  end
  local mainWindow = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
  if not mainWindow then
    return true
  end
  if GM.UIManager:GetOpenedTopViewByType(EViewType.Window) ~= mainWindow then
    return true
  end
  if mainWindow.m_pdMaskGo and mainWindow.m_pdMaskGo.activeSelf then
    return true
  end
  return false
end

function BaseUIBoardView:_GetItemCollectableTipSortingOrder()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self:GetDisplayBoardWindowName())
  if mainWindow then
    return mainWindow:GetSortingOrder() + ItemCollectableTipSortingOrder
  end
  return BaseActionBoardView._GetItemCollectableTipSortingOrder(self)
end
