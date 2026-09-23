MultiboardsActivityBoardView = setmetatable({}, BaseUIBoardView)
MultiboardsActivityBoardView.__index = MultiboardsActivityBoardView

function MultiboardsActivityBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityDefinition = MultiboardsActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames,
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames,
    [ItemType.ObstacleClear] = self.m_activityDefinition.ObstacleClearNames
  }
  self.m_posy = self.transform.localPosition.y
  self.m_canvasposy = self.m_CanvasGo.transform.localPosition.y
  self:UpdatePos(boardModel)
  BaseUIBoardView.Init(self, boardModel)
  self.m_paperBoxCollapseDelay = 0
  EventDispatcher.AddListener(EEventType.CloseView, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.MultiboardsUnlockPortalAnimationFinished, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.OpenView, self, self._CancelPrompt)
  local cacheRoot = self:GetCacheRoot()
  local binTrans = self:GetBinGo().transform
  if self.m_model:IsEnergyModuleOpen() then
    cacheRoot.transform.anchoredPosition = Vector2(-276, 0)
    binTrans.anchoredPosition = Vector2(-449.18, 0)
    binTrans.localScale = Vector3(0.9, 0.9, 0.9)
    cacheRoot.transform.localScale = Vector3(0.9, 0.9, 0.9)
  else
    cacheRoot.transform.anchoredPosition = Vector2(0, 0)
    binTrans.anchoredPosition = Vector2(336, 0)
    binTrans.localScale = Vector3.one
    cacheRoot.transform.localScale = Vector3.one
  end
end

function MultiboardsActivityBoardView:OnPointerDown(worldPosition)
  local itemPortalView = self:GetItemPortalView()
  if itemPortalView then
    itemPortalView:OnPointerDown(self:_GetBoardPosition(worldPosition))
  end
  BaseUIBoardView.OnPointerDown(self, worldPosition)
end

function MultiboardsActivityBoardView:UpdatePos(boardModel)
  self.transform.localPosition = Vector3(boardModel.HorizontalTiles * boardModel.TileSize * -0.5, self.m_posy - (boardModel.VerticalTiles - 8) * boardModel.TileSize * 0.5, self.transform.position.z)
  self.m_CanvasGo.transform.localPosition = Vector3(boardModel.HorizontalTiles * boardModel.TileSize * 0.5, self.m_canvasposy + (boardModel.VerticalTiles - 8) * boardModel.TileSize * 0.5, 5)
  self:SetPaperBoxAreaPosition()
end

function MultiboardsActivityBoardView:UpdateTilesAndItems(boardModel)
  self.m_tileMap = {}
  self.m_portalItem = nil
  for position in boardModel:GetValidPositionIterator() do
    self:_AddTile(position)
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil then
      self:_AddItemView(itemModel)
    end
  end
  self:_UpdateTile()
  self:_UpdatePaperBoxReward()
  self:_UpdateObstacleLayerView()
end

function MultiboardsActivityBoardView:GetItemPortalView()
  if self.m_itemPortalView == nil then
    for position in self.m_model:GetValidPositionIterator() do
      local item = self.m_model:GetItem(position)
      if item ~= nil and item:GetComponent(ItemPortal) ~= nil then
        local itemView = self:GetItemView(item)
        self.m_itemPortalView = itemView:GetComponent(ItemPortal)
      end
    end
  end
  return self.m_itemPortalView
end

function MultiboardsActivityBoardView:GetItemPortalModel()
  for position in self.m_model:GetValidPositionIterator() do
    local item = self.m_model:GetItem(position)
    if item ~= nil and item:GetComponent(ItemPortal) ~= nil then
      return item
    end
  end
end

function MultiboardsActivityBoardView:DeleteAll()
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    self:_RemoveItemView(itemView)
  end
  while self.m_tilesTransform.childCount ~= 0 do
    GameObject.DestroyImmediate(self.m_tilesTransform:GetChild(0).gameObject)
  end
  self.m_itemPortalView = nil
end

function MultiboardsActivityBoardView:Update()
  if self.m_paperBoxCollapseDelay ~= 0 then
    self.m_paperBoxCollapseDelay = 0
  end
  BaseUIBoardView.Update(self)
end

function MultiboardsActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function MultiboardsActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return MultiboardsActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function MultiboardsActivityBoardView:ConvertWorldPositionToUIWorldPosition(position)
  return MultiboardsActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(position)
end

function MultiboardsActivityBoardView:ConvertUIWorldPositionToWorldPosition(position)
  return MultiboardsActivityBoardContainer.GetInstance():ConvertUIWorldPositionToWorldPosition(position)
end

function MultiboardsActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function MultiboardsActivityBoardView:_OnCollapseItem(message)
  if message.Source:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:SetEventLock(true, self)
    DOVirtual.DelayedCall(self.m_paperBoxCollapseDelay, function()
      GM.UIManager:SetEventLock(false, self)
      BaseUIBoardView._OnCollapseItem(self, message)
    end)
  else
    BaseUIBoardView._OnCollapseItem(self, message)
  end
end

function MultiboardsActivityBoardView:_GetPrompts()
  local prompts = BaseUIBoardView._GetPrompts(self)
  if (not GameConfig.IsTestMode() or not TestMaskButton.autoMergeAll) and not GM.UIManager:IsViewExisting(UIPrefabConfigName.MultiboardsActivityUnlockWindow) and self.m_activityModel:IsReachLimitLevel() and not GM.UIManager:IsEventLock() then
    table.insert(prompts, BoardPromptTapPortalItem.Create())
  end
  if GM.UIManager:IsViewExisting(self.m_activityDefinition.NextStageConfirmWindowPrefabName) then
    return {}
  end
  return prompts
end

function MultiboardsActivityBoardView:UpdateCacheRootLockState()
  self.m_cacheRoot:UpdateLockState()
  self.m_uIBoardEnergyInfoViewLuaTable:UpdateLockState()
end

function MultiboardsActivityBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function MultiboardsActivityBoardView:CanItemDelete(itemModel)
  return self.m_model:CanItemSell(itemModel)
end

function MultiboardsActivityBoardView:BinClickPrompt()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  mainWindow:ShowBinTextTip()
end

function MultiboardsActivityBoardView:CantDeletePrompt(itemModel)
  DOVirtual.DelayedCall(ItemView.MoveDuration, function()
    local itemView = self:GetItemView(itemModel)
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_cannot_delete", screenPosition)
  end)
end

function MultiboardsActivityBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.ActivateBinBIType)
end
