FarmboardActivityBoardView = setmetatable({}, BaseUIBoardView)
FarmboardActivityBoardView.__index = FarmboardActivityBoardView

function FarmboardActivityBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_promptsEnabled = true
  self.m_activityDefinition = FarmboardActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames,
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames,
    [ItemType.ObstacleClear] = self.m_activityDefinition.ObstacleClearNames
  }
  BaseUIBoardView.Init(self, boardModel)
  EventDispatcher.AddListener(EEventType.FarmboardAnimalProduced, self, self._FlyItemFromUI)
  EventDispatcher.AddListener(EEventType.FarmboardBlockProduced, self, self._FlyItemFromUI)
  EventDispatcher.AddListener(EEventType.FarmboardStartPrompt, self, self._StartPrompt)
  EventDispatcher.AddListener(EEventType.FarmboardCancelPrompt, self, self._CancelPrompt)
  local corners = self.m_dragRangeRectTrans:GetWorldCornersToLua()
  self.m_dragRangeCorners = {}
  for i = 0, 3 do
    self.m_dragRangeCorners[i + 1] = {
      x = corners[i].x,
      y = corners[i].y,
      z = corners[i].z
    }
  end
  self.m_tileSize = boardModel.TileSize
end

function FarmboardActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function FarmboardActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return FarmboardActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function FarmboardActivityBoardView:ConvertWorldPositionToUIWorldPosition(position)
  return FarmboardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(position)
end

function FarmboardActivityBoardView:ConvertUIWorldPositionToWorldPosition(position)
  return FarmboardActivityBoardContainer.GetInstance():ConvertUIWorldPositionToWorldPosition(position)
end

function FarmboardActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function FarmboardActivityBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function FarmboardActivityBoardView:OnDrag(worldPosition)
  BaseUIBoardView.OnDrag(self, self:FixDragPosition(worldPosition))
end

function FarmboardActivityBoardView:FixDragPosition(worldPosition)
  local corners = self.m_dragRangeCorners
  local minX = corners[1].x + self.m_tileSize * 0.5
  local minY = corners[1].y + self.m_tileSize * 0.5
  local maxX = corners[3].x - self.m_tileSize * 0.5
  local maxY = corners[3].y - self.m_tileSize * 0.5
  if minX > worldPosition.x then
    worldPosition.x = minX
  elseif maxX < worldPosition.x then
    worldPosition.x = maxX
  end
  if minY > worldPosition.y then
    worldPosition.y = minY
  elseif maxY < worldPosition.y then
    worldPosition.y = maxY
  end
  return worldPosition
end

function FarmboardActivityBoardView:_FlyItemFromUI(message)
  if not message.ToCache then
    local itemView = self:_AddItemView(message.Source)
    itemView.gameObject:SetActive(false)
  end
end

function FarmboardActivityBoardView:GetItemPos(itemModel)
  local pos = self.transform:TransformPoint(itemModel:GetLocalPosition())
  return FarmboardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(pos)
end

function FarmboardActivityBoardView:GetCacheRootPos()
  local pos = self.m_cacheRoot.transform.position
  return FarmboardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(pos)
end

function FarmboardActivityBoardView:RemoveItemView(itemView)
  self:_RemoveItemView(itemView)
end

function FarmboardActivityBoardView:_GetPrompts()
  local prompts = BaseUIBoardView._GetPrompts(self)
  table.insert(prompts, BoardPromptFarmboardTapBlockKeyItem.Create())
  table.insert(prompts, BoardPromptFarmboardAnimalProduce.Create())
  table.insert(prompts, BoardPromptFarmboardActivateAnimal.Create())
  table.insert(prompts, BoardPromptFarmboardBlockProduce.Create())
  return prompts
end

function FarmboardActivityBoardView:_StartPrompt()
  if not self.m_promptsEnabled then
    return
  end
  BaseUIBoardView._StartPrompt(self)
end

function FarmboardActivityBoardView:SetPromptsEnabled(enabled)
  self.m_promptsEnabled = enabled
end

function FarmboardActivityBoardView:CanItemDelete(itemModel)
  return self.m_model:CanItemSell(itemModel)
end

function FarmboardActivityBoardView:BinClickPrompt()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  mainWindow:ShowBinTextTip()
end

function FarmboardActivityBoardView:CantDeletePrompt(itemModel)
  DOVirtual.DelayedCall(ItemView.MoveDuration, function()
    local itemView = self:GetItemView(itemModel)
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_cannot_delete", screenPosition)
  end)
end

function FarmboardActivityBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.BIActivateBin)
end

function FarmboardActivityBoardView:GetFogLockPrefabName()
  if self.m_activityDefinition.FogLockPrefabName == nil then
    return BaseUIBoardView.GetFogLockPrefabName(self)
  end
  return self.m_activityDefinition.FogLockPrefabName
end
