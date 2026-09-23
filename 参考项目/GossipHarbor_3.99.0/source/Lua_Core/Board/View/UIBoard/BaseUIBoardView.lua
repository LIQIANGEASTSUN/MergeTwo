BaseUIBoardView = setmetatable({}, BaseActionBoardView)
BaseUIBoardView.__index = BaseUIBoardView
BaseUIBoardView.MergePromptInterval = 2.3

function BaseUIBoardView:Init(boardModel)
  BaseActionBoardView.Init(self, boardModel)
  self.m_cacheRoot:Init(self)
  EventDispatcher.AddListener(EEventType.TutorialFinished, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.TutorialAnyStrongTutorialUpdated, self, self._CancelPrompt)
  EventDispatcher.AddListener(EEventType.UIBoardEnergyChanged, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.UIBoardSwitchExponent, self, self._StartPrompt)
  REGISTER_BOARD_EVENT_HANDLER(self, "MergeItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CollapseItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "CostItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "PopCachedItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SpreadFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "FogUnlock")
  REGISTER_BOARD_EVENT_HANDLER(self, "FogItemFlyToLock")
  REGISTER_BOARD_EVENT_HANDLER(self, "FogProgressUpdate")
  REGISTER_BOARD_EVENT_HANDLER(self, "UnlockItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ConsumeGenItemByUIEnergy")
  self.m_uIBoardEnergyInfoViewLuaTable:Init(self)
  self:_StartPrompt()
  self:_TryUpdateFogLock()
  if self:HasBin() then
    self:GetBinGo():SetActive(false)
    self:TryUpdateBin()
  end
  self:_InitPaperBoxExtraRewards()
  if self.m_model:GetObstacleLayerModel() ~= nil then
    self.m_obstacleLayerView = GameObject.Instantiate(self.m_obstacleLayerPrefab, self.m_canvas.transform):GetLuaTable()
    self.m_obstacleLayerView:Init(self)
  end
end

function BaseUIBoardView:OnDestroy()
  BaseActionBoardView.OnDestroy(self)
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
  GM.UIManager:RemoveAllEventLocks(self)
  self:_CancelPrompt()
  if self.m_paperBoxExtraRewardPlayingAnimationCount > 0 or not Table.IsEmpty(self.m_arrWindowArgs) then
    EventDispatcher.DispatchEvent(EEventType.RefreshHudPropertyButton, {
      [EPropertyType.Gold] = true,
      [EPropertyType.Gem] = true,
      [EPropertyType.Energy] = true
    })
  end
  local window = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.CollectItemConfirmWindow)
  if window ~= nil then
    window:Close()
  end
  if self.m_fogSeq ~= nil then
    self.m_fogSeq:Kill()
    self.m_fogSeq = nil
  end
end

function BaseUIBoardView:ConvertWorldPositionToScreenPosition(position)
  Log.Assert(false, "ConvertWorldPositionToScreenPosition()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseUIBoardView:ConvertBoardLocalPositionToScreenPosition(boardLocalPosition)
  local localPosition = Vector3(boardLocalPosition.x + self.m_model.TileSize / 2, boardLocalPosition.y + self.m_model.TileSize / 2, 0)
  local worldPosition = self:GetItemsTransform():TransformPoint(localPosition)
  return self:ConvertWorldPositionToScreenPosition(worldPosition)
end

function BaseUIBoardView:ConvertWorldPositionToUIWorldPosition(position)
  Log.Assert(false, "ConvertWorldPositionToUIWorldPosition()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseUIBoardView:ConvertUIWorldPositionToWorldPosition(position)
  Log.Assert(false, "ConvertUIWorldPositionToWorldPosition()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseUIBoardView:GetCacheRoot()
  return self.m_cacheRoot
end

function BaseUIBoardView:PlayCacheRootEffect()
  self.m_cacheRootEffect:Play()
end

function BaseUIBoardView:OnPointerDown(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local itemModel
  if self.m_model:IsPositionInteractable(boardPosition) then
    itemModel = self.m_model:GetItem(boardPosition)
  end
  if itemModel ~= nil then
    local forceSourceBoardPosition = GM.TutorialModel:GetForceSourceBoardPosition()
    if forceSourceBoardPosition ~= nil and forceSourceBoardPosition ~= boardPosition then
      return
    end
    if itemModel:GetComponent(ItemPaperBox) ~= nil then
      return
    end
    if itemModel:GetComponent(ItemFog) ~= nil then
      self:_OnItemFogClick(itemModel)
      return
    end
    if itemModel:GetComponent(ItemDig) ~= nil and itemModel:GetComponent(ItemDig):IsDeleted() then
      return
    end
    self.m_lastTouchedItem = self:GetItemView(itemModel)
    if self.m_selectedBoardPosition == boardPosition then
      self.m_moreThanOnceTap = true
    end
    self:_UpdateIndicator(itemModel, false)
    self:_CancelPrompt()
    EventDispatcher.DispatchEvent(EEventType.ItemClick, {
      isOnceTap = not self.m_moreThanOnceTap
    })
  end
end

function BaseUIBoardView:OnDrag(worldPosition)
  if self.m_lastTouchedItem == nil then
    return
  end
  local canItemMove = self.m_model:CanItemMove(self.m_lastTouchedItem:GetModel())
  if not self.m_dragging and canItemMove then
    self:_UpdateIndicator()
  end
  self.m_dragging = true
  if not canItemMove then
    return
  end
  worldPosition.z = 0
  self.m_lastTouchedItem.transform.position = worldPosition
  self:_TryShowMergeLight(worldPosition)
end

function BaseUIBoardView:OnPointerUp(worldPosition)
  if self.m_lastTouchedItem == nil then
    return
  end
  self:_ClearMergeLight()
  local targetBoardPosition = self:_GetBoardPosition(worldPosition)
  local forceTargetBoardPosition = GM.TutorialModel:GetForceTargetBoardPosition()
  if forceTargetBoardPosition ~= nil and forceTargetBoardPosition ~= targetBoardPosition then
    targetBoardPosition = BoardPosition.Create(0, 0)
  end
  local itemModel = self.m_lastTouchedItem:GetModel()
  local boardPositionChanged = targetBoardPosition ~= itemModel:GetPosition()
  if self.m_dragging then
    if self.m_model:CanItemMove(itemModel) then
      self.m_model:DragItem(itemModel, targetBoardPosition)
      if self.m_model:GetItem(itemModel:GetPosition()) == itemModel then
        self.m_selectedBoardPosition = itemModel:GetPosition()
      else
        self.m_selectedBoardPosition = targetBoardPosition
      end
    end
  else
    if self.m_moreThanOnceTap or itemModel:GetComponent(ItemDig) ~= nil then
      self.m_model:TapItem(itemModel)
    end
    if self.m_model:GetItem(itemModel:GetPosition()) == itemModel then
      local itemSwallow = itemModel:GetComponent(ItemSwallow)
      local itemDig = itemModel:GetComponent(ItemDig)
      if (itemSwallow == nil or itemSwallow:AllowTap()) and itemDig == nil then
        local itemView = self:GetItemView(itemModel)
        itemView:PlayTapAnimation(0.2)
      end
    end
  end
  local selectedItem = self:GetSelectedItemModel()
  local selectedItemDisappeared = selectedItem ~= itemModel and self.m_model:GetItem(itemModel:GetPosition()) ~= itemModel
  local itemCollectableTipShowStatus
  if selectedItemDisappeared then
    itemCollectableTipShowStatus = ItemCollectableTipShowStatus.MergeItem
  elseif not boardPositionChanged then
    itemCollectableTipShowStatus = ItemCollectableTipShowStatus.SelectItem
  else
    itemCollectableTipShowStatus = ItemCollectableTipShowStatus.None
  end
  self:_UpdateIndicator(selectedItem, true, itemModel == selectedItem, itemCollectableTipShowStatus)
  EventDispatcher.DispatchEvent(EEventType.BoardPointerUp, {
    dragging = self.m_dragging
  })
  self:_ClearPointerData()
  self:_StartPrompt()
end

function BaseUIBoardView:_ClearPointerDataOnUnexpectedPointerExit()
  if self.m_lastTouchedItem == nil then
    return
  end
  local itemModel = self.m_lastTouchedItem:GetModel()
  if self.m_model:CanItemMove(itemModel) then
    self.m_model:DragItem(itemModel, BoardPosition.Create(0, 0))
  end
  local selectedItem = self:GetSelectedItemModel()
  self:_UpdateIndicator(selectedItem, true)
  self:_ClearPointerData()
  for _, view in pairs(self.m_modelViewMap) do
    if view ~= self.m_lastTouchedItem then
      view:UpdateItemAffectedEffect(self.m_lastTouchedItem and self.m_lastTouchedItem:GetModel() or nil)
    end
  end
end

function BaseUIBoardView:_ClearPointerData()
  self.m_moreThanOnceTap = false
  self.m_dragging = false
  self.m_lastTouchedItem = nil
end

function BaseUIBoardView:_StartPrompt()
  self:_DoStartPrompt(BaseUIBoardView.MergePromptInterval)
end

function BaseUIBoardView:_SelectPrompt()
  return self:_DoSelectPrompt()
end

function BaseUIBoardView:_GetPrompts()
  if GameConfig.IsTestMode() and TestMaskButton.autoMergeAll then
    return {
      BoardPromptMergeItems.Create()
    }
  end
  return {
    BoardPromptMergeItems.Create(),
    BoardPromptSwallowItems.Create(),
    BoardPromptSwallowItemsDisallowTap.Create(),
    BoardPromptTapRewardBubbleItem.Create(),
    BoardPromptTapFogUnlockKeyItem.Create(),
    BoardPromptEnergyBoostClickTip.Create()
  }
end

function BaseUIBoardView:_HandleCollectItemViewData(viewData, message)
  local _highlightHudArgs, _itemAlwaysFlytoOther
  local boardModel = message.Source:GetBoardModel()
  local boardtype = boardModel and boardModel.BoardType
  if BoardModelHelper.IsExtraBoard(boardtype) then
    _highlightHudArgs = {duration = 3}
    _itemAlwaysFlytoOther = true
  end
  viewData.highlightHudArgs = _highlightHudArgs
  viewData.itemAlwaysFlytoOther = _itemAlwaysFlytoOther
end

function BaseUIBoardView:_OnCollapseItem(message, callback)
  if message.CollapseReward ~= nil then
    if self.m_model ~= nil and self.m_model.CheckActivityProp ~= nil and self.m_model:CheckActivityProp(message.CollapseReward) then
      message.isPropReward = true
      message.PropPos = PositionUtil.UICameraScreen2World(self:ConvertBoardPositionToScreenPosition(message.Source:GetPosition()))
    end
    self:_PlayPaperboxExtraRewardAnimation(message, callback)
  else
    self:_DOCollapseItem(message)
    if callback ~= nil then
      callback()
    end
  end
end

function BaseUIBoardView:_DOCollapseItem(message)
  if message.Source:GetComponent(ItemPaperBox) ~= nil then
    self.m_hasCollapsedPaperBox = true
  end
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator()
  end
  local position = message.Source:GetLocalPositionOverrideZ(0)
  local itemView = self:GetItemView(message.Source)
  self:_RemoveItemView(itemView)
  if message.New ~= nil then
    self:_AddItemView(message.New)
  end
  local prefabName = self:GetCollapseEffectPrefabName(message)
  if prefabName == nil then
    return
  end
  GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(prefabName), self.transform, position, function(go)
  end)
end

function BaseUIBoardView:GetCollapseEffectPrefabName()
  return ScenePrefabConfigName.effect_zhixiang_boom
end

function BaseUIBoardView:_OnTransformItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
  end
  self:_DoTransformItem(message, 0)
end

function BaseUIBoardView:_OnPopCachedItem(message)
  BaseActionBoardView._OnPopCachedItem(self, message)
  self:_StartPrompt()
end

function BaseUIBoardView:_OnSpreadFailed(message)
  local key
  if message.Reason == SpreadFailedReason.ItemRecharging then
    key = "hint_item_recharging"
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
  else
    key = "hint_board_full"
  end
  local itemView = self:GetItemView(message.Item)
  local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(0, 100, 0)
  local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
  GM.UIManager:ShowPromptWithKey(key, screenPosition)
end

function BaseUIBoardView:InverseTiles()
  local temp = self.Tile1Sprite
  self.Tile1Sprite = self.Tile2Sprite
  self.Tile2Sprite = temp
  self:_UpdateTile()
end

function BaseUIBoardView:HideBoard()
  self.m_tilesTransform.gameObject:SetActive(false)
  self.m_itemsTransform.gameObject:SetActive(false)
  self.m_paperboxExtraRewardArea.gameObject:SetActive(false)
  if self.m_obstacleLayerView ~= nil then
    self.m_obstacleLayerView.gameObject:SetActive(false)
  end
  if self.m_fogLockGoCopy ~= nil and not self.m_fogLockGoCopy:IsNull() then
    self.m_fogLockGoCopy:SetActive(false)
  end
end

function BaseUIBoardView:ShowBoard()
  self.m_tilesTransform.gameObject:SetActive(true)
  self.m_itemsTransform.gameObject:SetActive(true)
  self.m_paperboxExtraRewardArea.gameObject:SetActive(true)
  if self.m_obstacleLayerView ~= nil then
    self.m_obstacleLayerView.gameObject:SetActive(true)
  end
  if self.m_fogLockGoCopy ~= nil and not self.m_fogLockGoCopy:IsNull() then
    self.m_fogLockGoCopy:SetActive(true)
  end
end

function BaseUIBoardView:HideCacheAndBin()
  self.m_cacheRoot:Hide()
  if self.HasBin then
    self.m_binGo:SetActive(false)
  end
  self.m_uIBoardEnergyInfoViewLuaTable:TryActive(false)
end

function BaseUIBoardView:ShowCacheAndBin()
  self.m_cacheRoot:Show()
  if self.HasBin then
    self:TryUpdateBin()
  end
  self.m_uIBoardEnergyInfoViewLuaTable:TryActive(true)
end

function BaseUIBoardView:Scroll(rows, flyItemRoot)
  if self.m_model.ScrollDirection == EBoardScrollDirection.Up then
    self:ScrollUp(rows, flyItemRoot)
  else
    self:ScrollDown(rows, flyItemRoot)
  end
  self:_UpdatePaperBoxReward()
  self:_UpdateObstacleLayerView()
end

function BaseUIBoardView:ScrollUp(rows, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local cacheRoot = self:GetCacheRoot()
  local animInOrderMap = {}
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local y = position:GetY()
    if animInOrderMap[y] == nil then
      animInOrderMap[y] = {}
    end
    animInOrderMap[y][position:GetX()] = true
  end
  for i = 1, self.m_model.VerticalTiles do
    if animInOrderMap[i] ~= nil then
      local cnt = 0
      for j = 1, self.m_model.HorizontalTiles do
        if animInOrderMap[i][j] then
          animInOrderMap[i][j] = cnt
          cnt = cnt + 1
        end
      end
    end
  end
  local delay = 0.2
  local cacheRootAnimMap = {}
  local moveLength = self.m_model.TileSize
  local moveTime = 0.8
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local flyTime = 0.34
    if rows >= position:GetY() then
      local innerCode = ItemModelFactory.GetInnerTypeRecursive(itemModel:GetCode())
      local rule = self.m_model:GetScrollItemProcessingRule(itemModel, innerCode)
      if rule == EScrollItemProcessingRule.CacheBoardItem or rule == EScrollItemProcessingRule.CacheItemCode then
        local itemType = innerCode or itemModel:GetType()
        local flyItem = self.m_itemViewFactory:CreateFlyItem(self, itemType)
        flyItem.transform:SetParent(self.transform)
        flyItem.transform.position = Vector3(itemView.transform.position.x, itemView.transform.position.y, itemView.transform.position.z)
        flyItem.gameObject:SetActive(false)
        flyItem.m_numOutl.gameObject:SetActive(false)
        flyItem.transform:GetChild(2).gameObject:SetActive(false)
        flyItem.transform:SetParent(flyItemRoot)
        DelayExecuteFuncInView(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.gameObject:SetActive(true)
          end
        end, 0.7, self)
        if position:GetY() - 1 > 0 then
          DelayExecuteFuncInView(function()
            if not UIUtil.IsEmptyComponent(flyItem) then
              flyItem.transform:DOMoveY(flyItem.transform.position.y + moveLength * (position:GetY() - 1), moveTime * (position:GetY() - 1)):SetEase(Ease.Linear)
            end
          end, delay + 0.55, self)
        end
        local startFlyTime = delay + 0.55 + moveTime * (position:GetY() - 1)
        DelayExecuteFuncInView(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.transform:SetParent(self.transform)
            flyItem.transform:SetSiblingIndex(self.transform.childCount - 2)
            flyItem.transform:DOMove(cacheRoot.transform.position, flyTime):SetEase(Ease.OutQuad):OnComplete(function()
              flyItem:RecycleSelf()
            end)
          end
        end, startFlyTime + animInOrderMap[position:GetY()][position:GetX()] * 0.05, self)
        if cacheRootAnimMap[position:GetY()] == nil then
          cacheRootAnimMap[position:GetY()] = true
          DelayExecuteFuncInView(function()
            self:PlayCacheRootEffect()
          end, startFlyTime + flyTime - 0.08, self)
          DelayExecuteFuncInView(function()
            if not cacheRoot.gameObject:IsNull() then
              local seq = DOTween.Sequence()
              seq:Append(cacheRoot.transform:DOScale(Vector3.one * 1.08, 0.083):SetEase(Ease.Linear))
              seq:Append(cacheRoot.transform:DOScale(Vector3.one * 0.92, 0.083):SetEase(Ease.Linear))
              seq:Append(cacheRoot.transform:DOScale(Vector3.one * 1.0, 0.083):SetEase(Ease.Linear))
            end
          end, startFlyTime + flyTime - 0.15, self)
        end
      end
      self:_RemoveItemView(itemView)
    else
      DelayExecuteFuncInView(function()
        local pos = BoardPosition.Create(position:GetX(), position:GetY() - rows)
        itemModel:SetPositionWithoutAnim(pos)
        if not UIUtil.IsEmptyComponent(itemView) and itemView:GetModel() ~= nil then
          itemView.transform.localPosition = itemView:_GetLocalPosition(pos)
        end
      end, delay, self)
    end
  end
  DelayExecuteFuncInView(function()
    if UIUtil.IsEmptyComponent(self.transform) then
      return
    end
    for position in self.m_model:GetValidPositionIterator(0, self.m_model.VerticalTiles - rows + 1) do
      local itemModel = self.m_model:GetItem(position, true)
      if itemModel ~= nil then
        self:_AddItemView(itemModel)
      end
    end
    self:_TryUpdateFogLock(false, true)
  end, delay, self)
end

function BaseUIBoardView:ScrollDown(rows, flyItemRoot)
  self:_ClearPointerDataOnUnexpectedPointerExit()
  local cacheRoot = self:GetCacheRoot()
  local animInOrderMap = {}
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local y = position:GetY()
    if animInOrderMap[y] == nil then
      animInOrderMap[y] = {}
    end
    animInOrderMap[y][position:GetX()] = true
  end
  for i = self.m_model.VerticalTiles, 1, -1 do
    if animInOrderMap[i] ~= nil then
      local cnt = 0
      for j = 1, self.m_model.HorizontalTiles do
        if animInOrderMap[i][j] then
          animInOrderMap[i][j] = cnt
          cnt = cnt + 1
        end
      end
    end
  end
  local delay = 0.2
  local cacheRootAnimMap = {}
  local moveTime = 0.8
  local moveLength = -self.m_model.TileSize
  local boardLength = self.m_model.VerticalTiles
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    local position = itemModel:GetPosition()
    local flyTime = 0.34
    if position:GetY() >= boardLength + 1 - rows and boardLength >= position:GetY() then
      local innerCode = ItemModelFactory.GetInnerTypeRecursive(itemModel:GetCode())
      local rule = self.m_model:GetScrollItemProcessingRule(itemModel, innerCode)
      if rule == EScrollItemProcessingRule.CacheBoardItem or rule == EScrollItemProcessingRule.CacheItemCode then
        local itemType = innerCode and innerCode or itemModel:GetType()
        local flyItem = self.m_itemViewFactory:CreateFlyItem(self, itemType)
        flyItem.transform:SetParent(self.transform)
        flyItem.transform.position = Vector3(itemView.transform.position.x, itemView.transform.position.y, itemView.transform.position.z)
        flyItem.gameObject:SetActive(false)
        flyItem.m_numOutl.gameObject:SetActive(false)
        flyItem.transform:GetChild(2).gameObject:SetActive(false)
        flyItem.transform:SetParent(flyItemRoot)
        DelayExecuteFuncInView(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.gameObject:SetActive(true)
          end
        end, 0.7, self)
        if boardLength - position:GetY() > 0 then
          DelayExecuteFuncInView(function()
            if not UIUtil.IsEmptyComponent(flyItem) then
              flyItem.transform:DOMoveY(flyItem.transform.position.y + moveLength * (boardLength - position:GetY()), moveTime * (boardLength - position:GetY())):SetEase(Ease.Linear)
            end
          end, delay + 0.55, self)
        end
        local startFlyTime = delay + 0.55 + moveTime * (boardLength - position:GetY())
        DelayExecuteFuncInView(function()
          if not UIUtil.IsEmptyComponent(flyItem) then
            flyItem.transform:SetParent(self.transform)
            flyItem.transform:SetSiblingIndex(self.transform.childCount - 2)
            flyItem.transform:DOMove(cacheRoot.transform.position, flyTime):SetEase(Ease.OutQuad):OnComplete(function()
              if not UIUtil.IsEmptyComponent(flyItem) then
                flyItem:RecycleSelf()
              end
            end)
          end
        end, startFlyTime + animInOrderMap[position:GetY()][position:GetX()] * 0.05, self)
        if cacheRootAnimMap[position:GetY()] == nil then
          cacheRootAnimMap[position:GetY()] = true
          DelayExecuteFuncInView(function()
            self:PlayCacheRootEffect()
          end, startFlyTime + flyTime - 0.08, self)
          DelayExecuteFuncInView(function()
            if not cacheRoot.gameObject:IsNull() then
              local originScale = cacheRoot.transform.localScale
              local seq = DOTween.Sequence()
              seq:Append(cacheRoot.transform:DOScale(originScale * 1.08, 0.083):SetEase(Ease.Linear))
              seq:Append(cacheRoot.transform:DOScale(originScale * 0.92, 0.083):SetEase(Ease.Linear))
              seq:Append(cacheRoot.transform:DOScale(originScale * 1.0, 0.083):SetEase(Ease.Linear))
            end
          end, startFlyTime + flyTime - 0.15, self)
        end
      end
      self:_RemoveItemView(itemView)
    elseif position:GetY() < boardLength + 1 - rows then
      DelayExecuteFuncInView(function()
        local pos = BoardPosition.Create(position:GetX(), position:GetY() + rows)
        itemModel:SetPositionWithoutAnim(pos)
        if not UIUtil.IsEmptyComponent(itemView) and itemView:GetModel() ~= nil then
          itemView.transform.localPosition = itemView:_GetLocalPosition(pos)
        end
      end, delay, self)
    end
  end
  DelayExecuteFuncInView(function()
    if UIUtil.IsEmptyComponent(self.transform) then
      return
    end
    for position in self.m_model:GetValidPositionIterator(0, 1) do
      if position:GetY() <= rows then
        local itemModel = self.m_model:GetItem(position, true)
        if itemModel ~= nil then
          self:_AddItemView(itemModel)
        end
      end
    end
    self:_TryUpdateFogLock(false, true)
  end, delay, self)
end

function BaseUIBoardView:_OnFogItemFlyToLock(message)
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.FlyElement), self.m_canvasRectTrans, V3Zero, function(go)
    if not go:IsNull() then
      if self.gameObject:IsNull() then
        AddressableLoader.Destroy(go)
        return
      end
      local keyItemView = self:GetItemView(message.Source)
      if keyItemView and not keyItemView.gameObject:IsNull() then
        go.transform.position = keyItemView.transform.position
        UIUtil.SetLocalPosition(go.transform, nil, nil, 0)
        local flyElement = go:GetLuaTable()
        flyElement:SetImage(GM.ItemDataModel:GetSpriteName(message.Source:GetCode()))
        if message.IsUnlockByItem then
          self:_RemoveItemView(keyItemView)
        end
        local sequence = DOTween.Sequence()
        local targetPos = Vector3(self.m_fogLockGoCopy.transform.position.x, self.m_fogLockGoCopy.transform.position.y, go.transform.position.z)
        sequence:Append(go.transform:DOScale(Vector3(1.3, 1.3, 1), 0.25))
        sequence:Join(go.transform:DOMove(targetPos, 0.4):SetEase(Ease.InOutSine))
        sequence:Append(go.transform:DOScale(Vector3(0.6, 0.6, 1), 0.15))
        sequence:AppendCallback(function()
          AddressableLoader.Destroy(go)
          if self.m_fogLockGoCopy == nil or self.m_fogLockGoCopy:IsNull() then
            return
          end
          GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBpUnlock)
          self.m_fogLockGoCopy:GetLuaTable():PlayKeyArriveEffect()
          if not message.ViewDelay then
            self:_OnFogProgressUpdate()
          end
        end)
      else
        AddressableLoader.Destroy(go)
      end
    end
  end)
end

function BaseUIBoardView:_OnFogProgressUpdate()
  if self.m_fogLockGoCopy == nil or self.m_fogLockGoCopy:IsNull() then
    return
  end
  self.m_fogLockGoCopy:GetLuaTable():UpdateProgress(true)
end

function BaseUIBoardView:_OnFogUnlock(message)
  GM.UIManager:SetEventLock(true, self)
  local sequence = DOTween.Sequence()
  local delay = self:GetUnlockFogDelayTime()
  local keyAniDelay = message.ViewDelay and 0.7 or 1.2
  sequence:InsertCallback(keyAniDelay, function()
    if self.m_fogLockGoCopy and not self.m_fogLockGoCopy:IsNull() then
      self.m_fogLockGoCopy:GetLuaTable():PlayUnlockAni()
    end
  end)
  for _, result in ipairs(message.Items) do
    local sourceItemView = self:GetItemView(result.Source)
    sourceItemView.toBeRemoved = true
    local trans = sourceItemView.transform
    trans:SetLocalPosZ(trans.localPosition.z - 5)
    sequence:InsertCallback(delay + 0.1, function()
      self:_AddItemView(result.New)
    end)
    sequence:Insert(delay, sourceItemView:GetSpriteRenderer():DOFade(0, 0.4))
    sequence:InsertCallback(delay, function()
      local fogView = sourceItemView:GetComponent(ItemFog)
      fogView:PlayUnlockEffect()
    end)
    sequence:InsertCallback(delay + 1, function()
      self:_RemoveItemView(sourceItemView)
    end)
  end
  sequence:InsertCallback(delay + 0.5, function()
    GM.UIManager:SetEventLock(false, self)
    EventDispatcher.DispatchEvent(EEventType.FogUnlocked)
    self:_UpdatePaperBoxReward()
    local fogModel = self.m_model:GetFogModel()
    local fogId = fogModel:GetMinLevelFogId()
    if fogId == nil then
      return
    end
    local fogs = fogModel:GetFogGroupById(fogId)
    for _, fog in ipairs(fogs) do
      local itemModel = fog:GetItemModel()
      local itemView = self:GetItemView(itemModel)
      local fogView = itemView:GetComponent(ItemFog)
      fogView:UpdateColor()
    end
    self:_TryUpdateFogLock(true)
  end)
  self.m_fogSeq = sequence
end

function BaseUIBoardView:GetUnlockFogDelayTime()
  return 1.6
end

function BaseUIBoardView:GetFogLockPrefabName()
  return UIPrefabConfigName.FogLock
end

function BaseUIBoardView:_TryUpdateFogLock(needAnim, bScroll)
  local fogModel = self.m_model:GetFogModel()
  if fogModel == nil then
    return
  end
  local fogId = fogModel:GetMinLevelFogId()
  if fogId == nil then
    return
  end
  local localPos = fogModel:GetLockPosById(fogId, bScroll)
  if localPos == nil then
    return
  end
  local oldLockGo = self.m_fogLockGoCopy
  if bScroll then
    if oldLockGo and not oldLockGo:IsNull() then
      AddressableLoader.Destroy(oldLockGo)
    end
  else
    DelayExecuteFuncInView(function()
      if oldLockGo and not oldLockGo:IsNull() then
        AddressableLoader.Destroy(oldLockGo)
      end
    end, 1.2, self)
  end
  local lockPrefabName = self:GetFogLockPrefabName()
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(lockPrefabName), self.m_canvasRectTrans, V3Zero, function(go)
    if not go:IsNull() then
      if self.gameObject:IsNull() then
        AddressableLoader.Destroy(go)
        return
      end
      self.m_fogLockGoCopy = go
      local pos = self:GetItemsTransform():TransformPoint(localPos)
      self.m_fogLockGoCopy.transform.position = pos
      UIUtil.SetLocalPosition(self.m_fogLockGoCopy.transform, nil, nil, 0)
      self.m_fogLockGoCopy:GetLuaTable():Init(self.m_model:GetFogModel(), fogId)
      if needAnim then
        self.m_fogLockGoCopy:GetLuaTable():ShowLockAni()
      end
    end
  end)
end

function BaseUIBoardView:GetFogLockTransform()
  if not self.m_fogLockGoCopy then
    return
  end
  return self.m_fogLockGoCopy.transform
end

function BaseUIBoardView:_OnItemFogClick(itemModel)
  local itemFog = itemModel:GetComponent(ItemFog)
  if itemFog == nil then
    Log.Error("FogItemClick:ItemModel has no ItemFog component")
    return
  end
  local fogs = self.m_model:GetFogModel():GetFogGroupById(itemFog:GetFogId())
  if fogs == nil then
    Log.Error("FogItemClick:FogGroup not found : " .. itemFog:GetFogId())
    return
  end
  for _, fog in ipairs(fogs) do
    local item = fog:GetItemModel()
    local itemView = item and self:GetItemView(item) or nil
    local itemFogView = itemView and itemView:GetComponent(ItemFog) or nil
    if itemFogView == nil then
      Log.Error("FogItemClick:ItemView has no ItemFog component")
    else
      itemFogView:PlayClickEffect()
    end
  end
  if self.m_fogLockGoCopy and not self.m_fogLockGoCopy:IsNull() then
    self.m_fogLockGoCopy:GetLuaTable():PlayClickEffect()
  end
  GM.UIManager:ShowPromptWithKey("miniboard_foglocked_hint")
end

function BaseUIBoardView:OnObstaclePointerDown(obstacleObj)
  self.m_obstacleLayerView:OnObstaclePointerDown(obstacleObj)
end

function BaseUIBoardView:OnObstaclePointerUp(obstacleObj)
  if self.m_lastTouchedItem == nil then
    self.m_obstacleLayerView:OnObstaclePointerUp(obstacleObj)
  else
    local itemModel = self.m_lastTouchedItem:GetModel()
    if self.m_dragging then
      itemModel:SetPosition(itemModel:GetPosition())
      self:ResetIndicator(itemModel)
    end
  end
  self:_ClearPointerData()
  self:_StartPrompt()
end

function BaseUIBoardView:OnObstacleDrag(obstacleObj)
  self.m_obstacleLayerView:OnObstacleDrag(obstacleObj)
end

function BaseUIBoardView:_OnUnlockItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  self:_RemoveItemView(sourceItemView)
  if message.New ~= nil then
    self:_AddItemView(message.New)
  end
end

function BaseUIBoardView:ResetIndicator(itemModel)
  self.m_selectedBoardPosition = itemModel:GetPosition()
  local selectedItem = self:GetSelectedItemModel()
  self:_UpdateIndicator(selectedItem, true)
end

function BaseUIBoardView:ReloadObstacle()
  self.m_obstacleLayerView:UpdateObstaclesView()
end

function BaseUIBoardView:GetObstacleLayerView()
  return self.m_obstacleLayerView
end

function BaseUIBoardView:_UpdateObstacleLayerView()
  if self.m_obstacleLayerView ~= nil then
    self.m_obstacleLayerView:UpdateObstaclesView()
  end
end

function BaseUIBoardView:OnAddFlyItem(itemModel, startBoardWorldPos, spreadEffectType)
  local newItem = self:_AddItemView(itemModel)
  local startLocalPos = self:GetItemsTransform():InverseTransformPoint(startBoardWorldPos)
  local seq = self:_PlayJumpAnimation(newItem, startLocalPos, itemModel:GetLocalPosition(), nil, spreadEffectType)
end

function BaseUIBoardView:_LogBin()
end

function BaseUIBoardView:HasBin()
  return not self.m_model.WithoutBin
end

function BaseUIBoardView:TryUpdateBin()
  if self.m_activityModel:HasBoardEverFulled() then
    self.m_binGo:SetActive(true)
    return
  end
  if self.m_model:CheckBoardFulled() then
    self.m_activityModel:SetBoardFulled()
    self.m_binGo:SetActive(true)
    self:_LogBin()
  end
end

function BaseUIBoardView:CanItemDelete(itemModel)
  return true
end

function BaseUIBoardView:CantDeletePrompt(itemModel)
end

function BaseUIBoardView:BinClickPrompt()
end

function BaseUIBoardView:OnBinClicked()
  local activityId = self.m_activityModel:GetId()
  if self.m_dragging then
    local itemModel = self.m_lastTouchedItem:GetModel()
    if self.m_model:CanItemMove(itemModel) then
      if self:CanItemDelete(itemModel) then
        GM.UIManager:OpenView(UIPrefabConfigName.UIBoardDeleteItemConfirmWindow, self.m_activityType, itemModel, function()
          local activityModel = GM.ActivityManager:GetModel(self.m_activityType)
          if activityModel:GetState() ~= ActivityState.Started or activityModel:GetId() ~= activityId then
            return
          end
          self.m_model:RemoveItem(itemModel)
          self:_OnCostItem({Source = itemModel})
          self:_StartPrompt()
        end, function()
          local activityModel = GM.ActivityManager:GetModel(self.m_activityType)
          if activityModel:GetState() ~= ActivityState.Started or activityModel:GetId() ~= activityId then
            return
          end
          itemModel:SetPosition(itemModel:GetPosition())
          self:_StartPrompt()
        end)
      else
        itemModel:SetPosition(itemModel:GetPosition())
        self:_StartPrompt()
        self:CantDeletePrompt(itemModel)
      end
    end
  else
    self:BinClickPrompt()
    self:_StartPrompt()
  end
  local selectedItem = self:GetSelectedItemModel()
  self:_UpdateIndicator(selectedItem, false)
  self:_ClearPointerData()
end

function BaseUIBoardView:GetBinGo()
  if self:HasBin() then
    return self.m_binGo
  else
    GM.UIManager:ShowPrompt("\229\189\147\229\137\141\230\163\139\231\155\152\230\178\161\230\156\137\229\158\131\229\156\190\231\174\177")
  end
end

function BaseUIBoardView:SetPaperBoxAreaPosition()
  self.m_paperboxExtraRewardArea.localPosition = -self.m_canvasRectTrans.localPosition
end

function BaseUIBoardView:SetWaitLock(count)
  self.m_waitLock = (self.m_waitLock or 0) + count
end

function BaseUIBoardView:CheckIdle()
  return GM.UIManager:GetOpenedTopView().name == self.m_activityModel:GetDefinition().MainWindowPrefabName and not GM.TutorialModel:HasAnyStrongTutorialOngoing() and not GM.UIManager:IsEventLock() and (self.m_waitLock == nil or not (self.m_waitLock > 0))
end

function BaseUIBoardView:_ShowRewardWindowWhenIdle(rewardWindowArgs)
  rewardWindowArgs.highlightHudArgs = {duration = 3}
  rewardWindowArgs.itemAlwaysFlytoOther = true
  rewardWindowArgs.eventLockWhenPlayRewardAnimation = false
  if self:CheckIdle() then
    GM.UIManager:OpenView(UIPrefabConfigName.RewardWindow, rewardWindowArgs)
  else
    self.m_arrWindowArgs = self.m_arrWindowArgs or {}
    self.m_arrWindowArgs[#self.m_arrWindowArgs + 1] = Table.DeepCopy(rewardWindowArgs)
  end
end

function BaseUIBoardView:Update()
  BaseActionBoardView.Update(self)
  if Table.IsEmpty(self.m_arrWindowArgs) then
    return
  end
  if self:CheckIdle() then
    GM.UIManager:OpenView(UIPrefabConfigName.RewardWindow, self.m_arrWindowArgs[1])
    table.remove(self.m_arrWindowArgs, 1)
  end
end

function BaseUIBoardView:GetCanvas()
  return self.m_canvas
end

function BaseUIBoardView:GetCanvasRayCaster()
  return self.m_canvasGraphicRaycaster
end

function BaseUIBoardView:_HasItemTypeCollectableTipShownFromMerge(itemType)
  return self.m_model:HasItemTypeCollectableTipShownFromMerge(itemType)
end

function BaseUIBoardView:_SetItemTypeCollectableTipShownFromMerge(itemType)
  self.m_model:SetItemTypeCollectableTipShownFromMerge(itemType)
end

function BaseUIBoardView:ChangeEnergyGestureActive(bFlag)
  self.m_uIBoardEnergyInfoViewLuaTable:ChangeEnergyGestureActive(bFlag)
end

function BaseUIBoardView:_OnConsumeGenItemByUIEnergy(msg)
  local itemModel = msg.newItem
  local multi = msg.exponent
  local itemView = self:_AddItemView(itemModel)
  if itemView ~= nil then
    self:_CancelPrompt()
    self:_StartPrompt()
    local worldPosition = self.m_uIBoardEnergyInfoViewLuaTable:GetEnergyBoostTrans().position
    local sourcePosition = self.transform:InverseTransformPoint(worldPosition)
    local targetPosition = itemView.transform.localPosition
    self:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, multi, BoardSpreadType.UIBoardEnergy)
  end
end

function BaseUIBoardView:GetEnergyViewInfo()
  return self.m_uIBoardEnergyInfoViewLuaTable
end

function BaseUIBoardView:GetBoardEntryBtnAndPos()
  local iconTrans = self.m_uIBoardEnergyInfoViewLuaTable:GetEnergyIconTrans()
  local uiPos = self:ConvertWorldPositionToUIWorldPosition(iconTrans.position)
  return iconTrans.gameObject, uiPos
end

function BaseUIBoardView:GetBoardEntrySwitchBtnAndPos()
  local switchTrans = self.m_uIBoardEnergyInfoViewLuaTable:GetSwitchBtnTrans()
  local uiPos = self:ConvertWorldPositionToUIWorldPosition(switchTrans.position)
  return switchTrans.gameObject, uiPos
end
