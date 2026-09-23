StickerboardActivityBoardView = setmetatable({}, BaseUIBoardView)
StickerboardActivityBoardView.__index = StickerboardActivityBoardView

function StickerboardActivityBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityDefinition = StickerboardActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames,
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames
  }
  BaseUIBoardView.Init(self, boardModel)
  self.m_paperBoxCollapseDelay = 0
  REGISTER_BOARD_EVENT_HANDLER(self, "DigFailed")
  EventDispatcher.AddListener(EEventType.CloseView, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.StickerboardBoardViewUpdateFinish, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.OpenView, self, self._CancelPrompt)
  self.m_obstaclesLuaTable:Init(self, self.m_activityDefinition)
end

function StickerboardActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function StickerboardActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function StickerboardActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return StickerboardActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function StickerboardActivityBoardView:ConvertWorldPositionToUIWorldPosition(position)
  return StickerboardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(position)
end

function StickerboardActivityBoardView:UpdateTilesAndItems(boardModel)
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
end

function StickerboardActivityBoardView:DeleteAll()
  for itemModel, itemView in pairs(self.m_modelViewMap) do
    self:_RemoveItemView(itemView)
  end
  while self.m_tilesTransform.childCount ~= 0 do
    GameObject.DestroyImmediate(self.m_tilesTransform:GetChild(0).gameObject)
  end
  self.m_itemPortalView = nil
end

function StickerboardActivityBoardView:GetItemPortalView()
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

function StickerboardActivityBoardView:GetItemPortalModel()
  for position in self.m_model:GetValidPositionIterator() do
    local item = self.m_model:GetItem(position)
    if item ~= nil and item:GetComponent(ItemPortal) ~= nil then
      return item
    end
  end
end

function StickerboardActivityBoardView:Update()
  if self.m_paperBoxCollapseDelay ~= 0 then
    self.m_paperBoxCollapseDelay = 0
  end
  BaseUIBoardView.Update(self)
end

function StickerboardActivityBoardView:OnPointerDown(worldPosition)
  local itemPortalView = self:GetItemPortalView()
  if itemPortalView then
    itemPortalView:OnPointerDown(self:_GetBoardPosition(worldPosition))
  end
  BaseUIBoardView.OnPointerDown(self, worldPosition)
end

function StickerboardActivityBoardView:_OnCollapseItem(message)
  if message.Source:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:SetEventLock(true, self)
    DOVirtual.DelayedCall(self.m_paperBoxCollapseDelay, function()
      GM.UIManager:SetEventLock(false, self)
      BaseUIBoardView._OnCollapseItem(self, message)
    end)
  else
    if message.Source:GetComponent(ItemDig) ~= nil then
      local itemView = self:GetItemView(message.Source)
      if itemView == self.m_lastTouchedItem then
        self:_ClearPointerData()
      end
    end
    BaseUIBoardView._OnCollapseItem(self, message)
  end
end

function StickerboardActivityBoardView:_DoTransformItem(message, delay)
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
end

function StickerboardActivityBoardView:_OnDigFailed(message)
  local key
  if message.Reason == DigFailedReason.NoToken then
    key = "mineral_dig_hint"
  else
    key = "hint_board_full"
  end
  GM.UIManager:ShowPromptWithKey(key)
end

function StickerboardActivityBoardView:CanItemDelete(itemModel)
  return self.m_model:CanItemSell(itemModel)
end

function StickerboardActivityBoardView:CantDeletePrompt(itemModel)
  DOVirtual.DelayedCall(ItemView.MoveDuration, function()
    local itemView = self:GetItemView(itemModel)
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_cannot_delete", screenPosition)
  end)
end

function StickerboardActivityBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.ActivateBinBIType)
end

function StickerboardActivityBoardView:_GetPrompts()
  local prompts = BaseUIBoardView._GetPrompts(self)
  if not self.m_activityModel:HasRemovedAllObstacle() then
    table.insert(prompts, BoardPromptTapStickerboardClearToolItem.Create())
  end
  if (not GameConfig.IsTestMode() or not TestMaskButton.autoMergeAll) and self.m_activityModel:HasRemovedAllObstacle() and not GM.UIManager:IsEventLock() then
    table.insert(prompts, BoardPromptTapPortalItem.Create())
  end
  if not GameConfig.IsTestMode() or not TestMaskButton.autoMergeAll then
    table.insert(prompts, BoardPromptDigItem.Create())
  end
  if GM.UIManager:IsViewExisting(self.m_activityDefinition.NextStageConfirmWindowPrefabName) then
    return {}
  end
  return prompts
end

function StickerboardActivityBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function StickerboardActivityBoardView:_OnCostItem(message)
  local itemView = self:GetItemView(message.Source)
  if message.HasEffect then
    local position = Vector3(itemView.transform.position.x, itemView.transform.position.y, 0)
    position = self.transform:InverseTransformPoint(position)
    local prefabName = self:GetCostItemEffectPrefabName()
    GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(prefabName), self.transform, position, function(go)
    end)
  end
  self:_RemoveItemView(itemView)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator()
  end
end

function StickerboardActivityBoardView:GetCostItemEffectPrefabName()
  return self.m_activityDefinition.ClearToolEffectPrefabName
end

function StickerboardActivityBoardView:OnObstaclePointerDown(obstacleObj)
  self.m_obstaclesLuaTable:OnObstaclePointerDown(obstacleObj)
end

function StickerboardActivityBoardView:OnObstaclePointerUp(obstacleObj)
  self.m_obstaclesLuaTable:OnObstaclePointerUp(obstacleObj)
  self:_ClearPointerData()
  self:_StartPrompt()
end

function StickerboardActivityBoardView:OnObstacleDrag(obstacleObj)
  self.m_obstaclesLuaTable:OnObstacleDrag(obstacleObj)
end

function StickerboardActivityBoardView:HideObstacleTip(obstacleObj)
  self.m_obstacleTipLuaTable:Hide(obstacleObj)
end

function StickerboardActivityBoardView:ShowObstacleTip(obstacleObj)
  self.m_obstacleTipLuaTable:Show(obstacleObj)
end

function StickerboardActivityBoardView:TryRemoveObstacle(obstacleObj)
  if self.m_lastTouchedItem == nil then
    return
  end
  local itemModel = self.m_lastTouchedItem:GetModel()
  if self.m_dragging then
    self.m_obstaclesLuaTable:TryRemoveObstacle(obstacleObj, itemModel)
  end
  self:_ClearPointerData()
  self:_StartPrompt()
end

function StickerboardActivityBoardView:ReloadObstacle()
  self.m_obstaclesLuaTable:DeleteAll()
  self.m_obstaclesLuaTable:LoadObstacle()
end

function StickerboardActivityBoardView:GetObstacleMapView()
  return self.m_obstaclesLuaTable
end
