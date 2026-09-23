BaseUIBoardContainer = {}
BaseUIBoardContainer.__index = BaseUIBoardContainer
BaseUIBoardContainer.ItemBoardName = "ItemBoard"
BaseUIBoardContainer.CacheRootName = "BoardCacheRoot"
BaseUIBoardContainer.BinName = "Bin"
BaseUIBoardContainer.ObstacleName = "Obstacle"

function BaseUIBoardContainer:Init(boardView, boardCamera)
  boardView:GetCanvas().worldCamera = boardCamera
  self.m_boardView = boardView
  self.m_boardCamera = boardCamera
  local eventTrigger = self.gameObject:GetComponent(typeof(CS.LuaEventTrigger))
  
  function eventTrigger.OnLuaPointerDown(eventData)
    self:_OnPointerDown(eventData)
  end
  
  function eventTrigger.OnLuaDrag(eventData)
    self:_OnDrag(eventData)
  end
  
  function eventTrigger.OnLuaPointerUp(eventData)
    self:_OnPointerUp(eventData)
  end
end

function BaseUIBoardContainer:_ConvertTouchToWorldPosition(eventData)
  local _, localPosition = RectTransformUtility.ScreenPointToLocalPointInRectangle(self.transform, eventData.position, GM.UIManager.camera)
  local viewportPosition = UIUtil.ToVector3(Rect.PointToNormalized(self.transform.rect, localPosition))
  return self.m_boardCamera:ViewportToWorldPoint(viewportPosition)
end

function BaseUIBoardContainer:ConvertWorldPositionToScreenPosition(position)
  local normalizedPosition = UIUtil.ToVector2(self.m_boardCamera:WorldToViewportPoint(position))
  local localPosition = UIUtil.ToVector3(Rect.NormalizedToPoint(self.transform.rect, normalizedPosition))
  local uiWorldPosition = self.transform:TransformPoint(localPosition)
  return PositionUtil.UICameraWorld2Screen(uiWorldPosition)
end

function BaseUIBoardContainer:ConvertWorldPositionToUIWorldPosition(position)
  local normalizedPosition = UIUtil.ToVector2(self.m_boardCamera:WorldToViewportPoint(position))
  local localPosition = UIUtil.ToVector3(Rect.NormalizedToPoint(self.transform.rect, normalizedPosition))
  local uiWorldPosition = self.transform:TransformPoint(localPosition)
  return uiWorldPosition
end

function BaseUIBoardContainer:ConvertUIWorldPositionToWorldPosition(position)
  local localPosition = UIUtil.ToVector2(self.transform:InverseTransformPoint(position))
  local viewportPosition = UIUtil.ToVector3(Rect.PointToNormalized(self.transform.rect, localPosition))
  local worldPosition = self.m_boardCamera:ViewportToWorldPoint(viewportPosition)
  return worldPosition
end

function BaseUIBoardContainer:PerformClick(UIBoardEventData, raycaster)
  local results = CS.System.Collections.Generic.List(CS.UnityEngine.EventSystems.RaycastResult)()
  raycaster:Raycast(UIBoardEventData, results)
  for _, result in pairs(results) do
    if result.gameObject:GetComponent(typeof(CS.UnityEngine.UI.Button)) ~= nil and result.gameObject:GetComponent(typeof(CS.UnityEngine.UI.Button)).enabled then
      CS.UnityEngine.EventSystems.EventSystem.current:SetSelectedGameObject(result.gameObject)
      result.gameObject:GetComponent(typeof(CS.UnityEngine.UI.Button)).onClick:Invoke()
      return true
    end
  end
  return false
end

function BaseUIBoardContainer:_OnPointerDown(eventData)
  local worldPosition = self:_ConvertTouchToWorldPosition(eventData)
  local screenPosition = self.m_boardCamera:WorldToScreenPoint(worldPosition)
  local UIBoardEventData = Table.DeepCopy(eventData)
  UIBoardEventData.position = Vector2(screenPosition.x, screenPosition.y)
  if self:PerformClick(UIBoardEventData, self.m_boardView:GetCanvasRayCaster()) then
    return
  end
  self.m_collider = CS.UnityEngine.Physics2D.OverlapPoint(Vector2(worldPosition.x, worldPosition.y))
  if self.m_collider == nil or self.m_collider:IsNull() then
    return
  end
  if self.m_collider.gameObject.name == self.ItemBoardName then
    self.m_boardView:OnPointerDown(worldPosition)
  end
  local obstacleLayerView = self.m_boardView:GetObstacleLayerView()
  if obstacleLayerView ~= nil then
    if self.m_collider.gameObject.name == self.ObstacleName then
      self.m_boardView:OnObstaclePointerDown(self.m_collider.gameObject)
    else
      self.m_boardView:GetObstacleLayerView():ClearPointerData()
    end
  end
end

function BaseUIBoardContainer:_OnDrag(eventData)
  if self.m_collider == nil or self.m_collider:IsNull() then
    return
  end
  if self.m_collider.gameObject.name == self.ItemBoardName then
    local worldPosition = self:_ConvertTouchToWorldPosition(eventData)
    self.m_boardView:OnDrag(worldPosition)
  end
  local obstacleLayerView = self.m_boardView:GetObstacleLayerView()
  if obstacleLayerView ~= nil and self.m_collider.gameObject.name == self.ObstacleName then
    self.m_boardView:OnObstacleDrag(self.m_collider.gameObject)
  end
end

function BaseUIBoardContainer:_OnPointerUp(eventData)
  if self.m_collider == nil or self.m_collider:IsNull() then
    return
  end
  local worldPosition = self:_ConvertTouchToWorldPosition(eventData)
  local targetCollider = CS.UnityEngine.Physics2D.OverlapPoint(Vector2(worldPosition.x, worldPosition.y))
  if self.m_boardView:HasBin() and targetCollider ~= nil and targetCollider.gameObject.name == self.BinName then
    self.m_boardView:OnBinClicked()
    return
  end
  local obstacleLayerView = self.m_boardView:GetObstacleLayerView()
  if obstacleLayerView ~= nil then
    if targetCollider ~= nil and targetCollider.gameObject.name == self.ObstacleName then
      self.m_boardView:OnObstaclePointerUp(targetCollider.gameObject)
      return
    end
    obstacleLayerView:ClearPointerData()
  end
  if self.m_collider.gameObject.name == self.ItemBoardName then
    self.m_boardView:OnPointerUp(worldPosition)
  elseif self.m_collider.gameObject.name == self.CacheRootName then
    self.m_boardView:GetCacheRoot():OnClicked()
  end
  if self.m_boardView:HasBin() then
    self.m_boardView:TryUpdateBin()
  end
  self.m_collider = nil
end
