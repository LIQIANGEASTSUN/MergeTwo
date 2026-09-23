StickerboardActivityObstacleMapView = {}
StickerboardActivityObstacleMapView.__index = StickerboardActivityObstacleMapView

function StickerboardActivityObstacleMapView:Init(boardView, activityDefinition)
  self.m_boardView = boardView
  self.m_boardModel = boardView:GetModel()
  self.m_model = self.m_boardModel:GetObstacleMapModel()
  self.m_activityDefinition = activityDefinition
  self:LoadObstacle()
  EventDispatcher.AddListener(self.m_activityDefinition.RemoveObstacleEvent, self, self._OnRemoveObstacle)
end

function StickerboardActivityObstacleMapView:LoadObstacle()
  self.m_obstacleViewMap = {}
  for _, obstacleModel in pairs(self.m_model:GetObstacleModels()) do
    self:_AddObstacleView(obstacleModel)
  end
end

function StickerboardActivityObstacleMapView:OnDestroy()
  GM.UIManager:RemoveAllEventLocks(self)
end

function StickerboardActivityObstacleMapView:_AddObstacleView(obstacleModel)
  local leftTop, rightBottom = obstacleModel:GetPosition()
  local position = self:ObstacleViewPosition(leftTop, rightBottom)
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(self.m_activityDefinition.ObstacleViewPrefabName), self.transform, Vector3.zero, function(obstacleObject)
    if not obstacleObject:IsNull() then
      obstacleObject.name = StickerboardActivityBoardContainer.ObstacleName
      obstacleObject.transform.position = Vector3(position.x, position.y, obstacleObject.transform.position.z)
      local obstacleView = obstacleObject:GetLuaTable()
      obstacleView:Init(obstacleModel, self)
      self.m_obstacleViewMap[obstacleModel] = obstacleView
    end
  end)
end

function StickerboardActivityObstacleMapView:ObstacleViewPosition(leftTop, rightBottom)
  local halfTileSize = self.m_boardModel.TileSize * 0.5
  local leftTopLocalPos = self.m_boardModel:ToLocalPosition(BoardPosition.Create(leftTop[1], leftTop[2]))
  leftTopLocalPos = Vector3(leftTopLocalPos.x + halfTileSize, leftTopLocalPos.y + halfTileSize, 0)
  local leftTopWorldPosition = self.m_boardView:GetItemsTransform():TransformPoint(leftTopLocalPos)
  local rightBottomLocalPos = self.m_boardModel:ToLocalPosition(BoardPosition.Create(rightBottom[1], rightBottom[2]))
  rightBottomLocalPos = Vector3(rightBottomLocalPos.x + halfTileSize, rightBottomLocalPos.y + halfTileSize, 0)
  local rightBottomWorldPosition = self.m_boardView:GetItemsTransform():TransformPoint(rightBottomLocalPos)
  local worldPosition = (leftTopWorldPosition + rightBottomWorldPosition) * 0.5
  return worldPosition
end

function StickerboardActivityObstacleMapView:_OnRemoveObstacle(obstacleView)
  local obstacleModel = obstacleView:GetModel()
  local currentView = self.m_obstacleViewMap[obstacleModel]
  if obstacleModel ~= nil and currentView == nil then
    Log.Error("StickerboardActivityObstacleMapView:_OnRemoveObstacle error: not found obstacleView, obstacleIndex = " .. obstacleModel:GetIndex())
  end
  self.m_obstacleViewMap[obstacleModel] = nil
  local obstaclePosition = self.m_boardView:ConvertWorldPositionToUIWorldPosition(obstacleView.transform.position)
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if mainWindow then
    local stickerType = obstacleModel:GetStickerType()
    local stickerImage = obstacleModel:GetIconStickerImage()
    mainWindow:AcquireStickerAnimation(obstaclePosition, stickerType, stickerImage, obstacleModel:HasGotStickerReward())
  end
end

function StickerboardActivityObstacleMapView:OnObstacleLevelDown(obstacleView, bSpecial)
  local obstacleModel = obstacleView:GetModel()
  local currentView = self.m_obstacleViewMap[obstacleModel]
  if obstacleModel ~= nil and currentView == nil then
    Log.Error("StickerboardActivityObstacleMapView:_OnRemoveObstacle error: not found obstacleView, obstacleIndex = " .. obstacleModel:GetIndex())
  end
  local obstaclePosition = self.m_boardView:ConvertWorldPositionToUIWorldPosition(obstacleView.transform.position)
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if mainWindow then
    mainWindow:ClearToolAnimation(obstaclePosition, bSpecial)
  end
end

function StickerboardActivityObstacleMapView:OnObstaclePointerDown(obstacleObj)
  self.m_lastTouchedObstacle = obstacleObj
  local index = obstacleObj:GetLuaTable():GetModel():GetIndex()
  if self.m_selectedObstacleIndex == index then
    self.m_moreThanOnceTap = true
  end
  self.m_selectedObstacleIndex = index
end

function StickerboardActivityObstacleMapView:OnObstaclePointerUp(obstacleObj)
  if self.m_lastTouchedObstacle == nil then
    return
  end
  local index = obstacleObj:GetLuaTable():GetModel():GetIndex()
  if not self.m_dragging then
    if self.m_selectedObstacleIndex == index and self.m_moreThanOnceTap then
      local success = self.m_model:FindClearToolToUse(obstacleObj:GetLuaTable():GetModel())
      if not success then
        self.m_boardView:ShowObstacleTip(obstacleObj)
        obstacleObj:GetLuaTable():OnClicked()
        self.m_selectedObstacleIndex = index
      else
        self.m_selectedObstacleIndex = nil
      end
    else
      self.m_boardView:ShowObstacleTip(obstacleObj)
      obstacleObj:GetLuaTable():OnClicked()
      self.m_selectedObstacleIndex = index
    end
  else
    self.m_selectedObstacleIndex = index
  end
  self.m_moreThanOnceTap = false
  self.m_lastTouchedObstacle = nil
  self.m_dragging = false
end

function StickerboardActivityObstacleMapView:OnObstacleDrag(obstacleObj)
  if self.m_lastTouchedObstacle == nil then
    return
  end
  self.m_dragging = true
end

function StickerboardActivityObstacleMapView:ClearPointerData()
  self.m_moreThanOnceTap = false
  self.m_lastTouchedObstacle = nil
  self.m_selectedObstacleIndex = nil
  self.m_dragging = false
end

function StickerboardActivityObstacleMapView:TryRemoveObstacle(obstacleObj, itemModel)
  if self.m_boardModel:CanItemMove(itemModel) then
    local itemClearTool = itemModel:GetComponent(ItemClearTool)
    if itemClearTool then
      local obstaclModel = obstacleObj:GetLuaTable():GetModel()
      if obstaclModel ~= nil then
        itemClearTool:DragToObstacle(obstaclModel)
      end
    else
      itemModel:SetPosition(itemModel:GetPosition())
      self.m_boardView:ResetIndicator(itemModel)
    end
  end
end

function StickerboardActivityObstacleMapView:OnCollapse(obstacleTrans, bRemove)
  if bRemove then
    local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if mainWindow then
      local obstaclePosition = self.m_boardView:ConvertWorldPositionToUIWorldPosition(obstacleTrans.position)
      mainWindow:OnObstacleCollapse(obstaclePosition)
    end
  else
    local prefabName = self.m_activityDefinition.RemoveObstacleEffectPrefabName
    GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(prefabName), self.transform, obstacleTrans.localPosition)
  end
end

function StickerboardActivityObstacleMapView:GetAllObstacleViews()
  return self.m_obstacleViewMap
end

function StickerboardActivityObstacleMapView:DeleteAll()
  for _, obstacleView in pairs(self.m_obstacleViewMap) do
    if obstacleView ~= nil and not obstacleView.gameObject:IsNull() then
      obstacleView.gameObject:RemoveSelf()
    end
  end
  self.m_obstacleViewMap = {}
end
