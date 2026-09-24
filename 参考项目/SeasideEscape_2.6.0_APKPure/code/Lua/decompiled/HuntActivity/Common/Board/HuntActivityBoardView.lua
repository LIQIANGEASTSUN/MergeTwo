HuntActivityBoardView = setmetatable({}, BaseUIBoardView)
HuntActivityBoardView.__index = HuntActivityBoardView
HuntActivityBoardView.MergePromptInterval = 2.3

function HuntActivityBoardView.GetInstance()
  return HuntActivityBoardView.s_instance
end

function HuntActivityBoardView:Init(activityType, boardModel, itemDeleteButton)
  BaseUIBoardView.Init(self, activityType, boardModel, itemDeleteButton)
  HuntActivityBoardView.s_instance = self
  if not UIUtil.IsEmptyComponent(self.m_testText) then
    UIUtil.SetActive(self.m_testText.gameObject, GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.ShowItemTestInfo, 0) ~= 0 and GM.UIManager:IsTestActivityButtonValid())
  end
  self.m_mapRewardAniCount = {}
  self.m_mapRewardAniSeq = {}
  EventDispatcher.AddListener(EEventType.RewardFlyAnimationStart, self, self._OnRewardFlyAnimationStart)
  EventDispatcher.AddListener(EEventType.RewardFlyAnimationFinish, self, self._OnRewardFlyAnimationFinish)
  EventDispatcher.AddListener(EEventType.HuntPdSwallowFailed, self, self._OnHuntPdItemOnTap)
  EventDispatcher.AddListener(EEventType.TutorialShowMask, self, self.StopPrompt)
  EventDispatcher.AddListener(EEventType.OpenView, self, self.StopPrompt)
  EventDispatcher.AddListener(EEventType.CloseView, self, self._StartPrompt)
end

function HuntActivityBoardView:_Ctor(activityType, boardModel, itemDeleteButton)
  self.m_activityType = activityType
  self.m_activityDefinition = HuntActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.m_mapScrollSeq = {}
  self.m_completeTileMap = HuntActivityBoardModel.CreateMatrix()
  self.CompleteTileColor = UIUtil.ConvertHexColor2CSColor("84d38e")
  self.m_bCloudKeyFirstAppeared = self.m_activityModel:GetCloudKeyFirstAppeared()
  self.m_bHasCloudKeyLock = boardModel:HasCloudKeyLock()
  self.m_bTileInversed = false
end

function HuntActivityBoardView:_RegisterBoardEvent()
  BaseUIBoardView._RegisterBoardEvent(self)
  REGISTER_BOARD_EVENT_HANDLER(self, "AddMonsterSpreadItem")
end

function HuntActivityBoardView:GetBoardCamera()
  return GM.ModeViewController:GetHuntActivityBoardCamera()
end

function HuntActivityBoardView:_OnRewardFlyAnimationStart(msg)
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

function HuntActivityBoardView:_OnRewardFlyAnimationFinish(msg)
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

function HuntActivityBoardView:_ShowHudButton(rewardType)
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

function HuntActivityBoardView:_HideHudButton(rewardType)
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

function HuntActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  if HuntActivityBoardView.s_instance == self then
    HuntActivityBoardView.s_instance = nil
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
  end
  self.m_mapRewardAniCount = nil
  self.m_mapRewardAniSeq = nil
end

function HuntActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return HuntActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function HuntActivityBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  if itemModel:GetComponent(ItemSand) and lastItemModel:GetComponent(ItemBroom) then
    return true
  end
  if self.m_model:CanItemMerge(itemModel, lastItemModel) then
    return true
  end
  return BaseUIBoardView._CanShowMergeLight(self, itemModel, lastItemModel)
end

function HuntActivityBoardView:_UpdateIndicator(item, playAnimation)
  if self.m_model:GetSkipNextIndicatorUpdate() then
    self.m_model:SetSkipNextIndicatorUpdate(nil)
    return
  end
  BaseUIBoardView._UpdateIndicator(self, item, playAnimation)
  if GM.ConfigModel:IsSwallowDisOpen("hunt") then
    self.m_swallowItemIndicator:UpdateIndicator(item, nil, self.m_model)
  else
    self.m_swallowItemIndicator:UpdateIndicator(item, playAnimation, self.m_model)
  end
  self.m_portalItemIndicator:UpdateIndicator(item, playAnimation)
  if not UIUtil.IsEmptyComponent(self.m_testText) and self.m_testText.gameObject.activeSelf then
    if item then
      self.m_testText.text = item:GetCode()
    else
      self.m_testText.text = ""
    end
    local sig = self.m_model:GetExtraItem(2)
    if sig then
      self.m_testText.text = self.m_testText.text .. "\n" .. sig:GetCode()
    end
  end
end

function HuntActivityBoardView:GetTapPromptOffest()
  return Vector3(0, HuntActivityBoardModel.TileSize / 2, 0)
end

function HuntActivityBoardView:_GetIsDragToUnlockCloud(targetBoardPosition)
  local dragToUnlockCloud = false
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.UnlockCloud) then
    for _, v in pairs(self.m_cloudView) do
      if v.IsCurrentShowLock and v:IsCurrentShowLock() and v.IsClicked and v:IsClicked(targetBoardPosition) then
        dragToUnlockCloud = true
        break
      end
    end
  end
  return dragToUnlockCloud
end

function HuntActivityBoardView:_GetStartPromptScheduleDelay()
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

function HuntActivityBoardView:_SelectPrompt()
  if GM.UIManager:IsEventLock() then
    return nil
  end
  return BaseUIBoardView._SelectPrompt(self)
end

function HuntActivityBoardView:_GetPrompts()
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    return {
      BoardPromptHuntMergeItems.Create()
    }
  end
  local prompts = {
    BoardPromptHuntPortal.Create(),
    BoardPromptHuntCollectCloudKey.Create(),
    BoardPromptHuntClickCow.Create(),
    BoardPromptHuntMaxLevelItem.Create(self.m_activityType),
    BoardPromptHuntMergeItems.Create(),
    BoardPormptHuntPopCache.Create(),
    BoardPromptHuntBubble.Create(),
    BoardPromptHuntCollect.Create(),
    BoardPromptHuntSwallowItems.Create(),
    BoardPormptHuntPopSpread.Create(self.m_activityModel)
  }
  if self.m_activityDefinition.IsDigType then
    table.insert(prompts, BoardPromptHuntDigItem.Create())
    table.insert(prompts, BoardPromptHuntDigCollect.Create())
  end
  return prompts
end

function HuntActivityBoardView:PromptSwallowItem(srcItem, tarItem)
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

function HuntActivityBoardView:_OnTransformItem(message)
  BaseUIBoardView._OnTransformItem(self, message)
  if message.Source:GetComponent(ItemDig) ~= nil and message.New:GetComponent(ItemDig) == nil then
    EventDispatcher.DispatchEvent(EEventType.DigOreCollapse)
  end
end

function HuntActivityBoardView:_GetPopCachedItemHitScore(message, newItemWorldPos)
  if message.IsPd then
    self:GetHitScore(message.New, 0.8, newItemWorldPos)
  end
end

function HuntActivityBoardView:GetBIActionMap()
  return EGameMode.Hunt
end

function HuntActivityBoardView:_OnHuntPdTransformItem(message)
  BaseUIBoardView._OnHuntPdTransformItem(self, message)
  self:_UpdateIndicator()
end

function HuntActivityBoardView:_GetShowMergeLightItem(boardPosition, colliderName)
  local x, y = boardPosition:GetX(), boardPosition:GetY()
  local itemModel, itemView
  if not Table.IsEmpty(self.m_model:GetExtraPdItems()) and (self.m_activityDefinition.HuntPdBoardPos ~= nil and x >= self.m_activityDefinition.HuntPdBoardPos.x - (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[1] or 1) and x <= self.m_activityDefinition.HuntPdBoardPos.x + (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[2] or 1) and y >= self.m_activityDefinition.HuntPdBoardPos.y - (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[3] or 1) and y <= self.m_activityDefinition.HuntPdBoardPos.y + (self.m_activityDefinition.HuntPdBoardSize and self.m_activityDefinition.HuntPdBoardSize[4] or 1) or self.m_activityDefinition.HuntPdBoardPos == nil and 5 <= x and x <= 7 and 8 <= y and y <= 10 and not StringUtil.IsNilOrEmpty(colliderName) and StringUtil.StartWith(colliderName, "HuntPd_2")) then
    itemModel = self.m_model:GetExtraItem(2)
    itemView = self.m_lastTouchedItem
  else
    itemModel = self.m_model:GetItem(boardPosition)
    itemView = self:GetItemView(itemModel)
  end
  return itemModel, itemView
end

function HuntActivityBoardView:InverseTiles()
  self.m_bTileInversed = not self.m_bTileInversed
  self:_UpdateTile()
end

function HuntActivityBoardView:GetVerticalHorizontalTiles()
  return HuntActivityBoardModel.VerticalTiles, HuntActivityBoardModel.HorizontalTiles
end

function HuntActivityBoardView:_SetItemVisibleInScrollMask(bSet)
  BaseUIBoardView._SetItemVisibleInScrollMask(self, bSet)
  if not self.m_scrollMaskTrans then
    return
  end
  local sprites = self.m_itemsTransform.gameObject:GetComponentsInChildren(typeof(SkeletonAnimation))
  for i = 0, sprites.Length - 1 do
    sprites[i].maskInteraction = bSet and 1 or 0
  end
  local texts = self.m_itemsTransform.gameObject:GetComponentsInChildren(typeof(CS.TMPro.TextMeshPro))
  for i = 0, texts.Length - 1 do
    texts[i].enabled = not bSet
  end
end

HuntActivityBoardView.MonsterSpreadItemStyle = {Base = 1, Parabola = 2}

function HuntActivityBoardView:_OnAddMonsterSpreadItem(message)
  local worldPos = self:GetItemView(message.SourceItem).transform.position + (message.Offset or Vector3(-200, -200))
  if not worldPos then
    return
  end
  local code = message.Code or message.New:GetCode()
  if StringUtil.StartWith(code, ItemCodePrefix.Bubble) then
    code = string.sub(code, 3, #code)
  end
  local flyItem = self.m_itemViewFactory:CreateFlyItem(self, code, ItemFlyView.EFLYTYPE.HuntActivity, message.New)
  flyItem.transform:SetParent(message.FlyItemRoot)
  flyItem:SetTail(UIPrefabConfigName.effct_UI_tw_6)
  local transform = flyItem.transform
  local itemView
  if message.Code then
    local cacheRoot = self:GetCacheRoot()
    flyItem.transform.position = cacheRoot.transform.position
  else
    itemView = self:_AddItemView(message.New)
    flyItem.transform.position = itemView.transform.position
    itemView.gameObject:SetActive(false)
  end
  PropertyAnimationManager.AddFlyingCount()
  local sourcePosition = transform.parent:InverseTransformPoint(worldPos)
  sourcePosition.z = -500
  local targetPosition = transform.localPosition
  targetPosition.z = -500
  local baseScale = self.transform.localScale
  local sequence = DOTween.Sequence()
  if message.Style == HuntActivityBoardView.MonsterSpreadItemStyle.Parabola then
    local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, 0)
    transform.localPosition = sourcePositionZero
    transform.localScale = V3Zero
    local delay = (math.min(5, message.Index) - 1) * 0.2 + (message.Delay or 0)
    sequence:AppendInterval(delay)
    sequence:Append(transform:DOScale(0.5 * baseScale, 0.1))
    sequence:Append(transform:DOScale(baseScale, 0.2))
    sequence:Insert(0.1 + delay, transform:DOLocalMoveX(targetPosition.x, 0.3):SetEase(Ease.Linear))
    sequence:Insert(0.1 + delay, transform:DOLocalMoveY(targetPosition.y, 0.3):SetEase(Ease.InQuad))
  else
    local screenPos = self:ConvertWorldPositionToScreenPosition(worldPos)
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
    transform.localScale = V3Zero
    local midPosition = Vector3(sourcePosition.x + deltaX, sourcePosition.y, 0)
    local delay = (math.min(5, message.Index) - 1) * 0.2 + (message.Delay or 0)
    sequence:AppendInterval(delay)
    sequence:Append(transform:DOScale(0.5 * baseScale, 0.1))
    sequence:Append(transform:DOScale(0.8 * baseScale, 0.2))
    sequence:Append(transform:DOScale(baseScale, 0.3))
    sequence:Append(transform:DOScale(baseScale, 0.2))
    sequence:Insert(0.05 + delay, transform:DOLocalJump(midPosition, 150, 1, 0.3))
    sequence:Insert(0.35 + delay, transform:DOLocalMove(targetPosition, 0.55))
  end
  sequence:OnKill(function()
    PropertyAnimationManager.RemoveFlyingCount()
    if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
      itemView.gameObject:SetActive(true)
    end
    if flyItem and flyItem.gameObject and not flyItem.gameObject:IsNull() then
      Object.Destroy(flyItem.gameObject)
    end
  end)
end

function HuntActivityBoardView:_OnHuntPdItemOnTap(message)
  if message and message.Index == 2 then
    local itemView = self:GetItemView(message.Item)
    local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(-50, 200, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    local key = self.m_activityDefinition.SWallowClickKey
    if not key then
      return
    end
    GM.UIManager:ShowPromptWithKey(key, screenPosition)
  end
end

function HuntActivityBoardView:_TryStartPrompt()
  if self.m_promptScheduler ~= nil then
    return
  end
  if self.m_prompt ~= nil then
    return
  end
  self:_StartPrompt()
end
