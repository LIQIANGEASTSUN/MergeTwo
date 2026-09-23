StickerboardActivityBoardContainer = setmetatable({}, BaseUIBoardContainer)
StickerboardActivityBoardContainer.__index = StickerboardActivityBoardContainer
StickerboardActivityBoardContainer.ObstacleName = "ObstacleView"

function StickerboardActivityBoardContainer.GetInstance()
  return StickerboardActivityBoardContainer.s_instance
end

function StickerboardActivityBoardContainer:Init()
  local boardView = GM.ModeViewController:GetStickerboardActivityBoardView()
  local boardCamera = GM.ModeViewController:GetStickerboardActivityBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  StickerboardActivityBoardContainer.s_instance = self
end

function StickerboardActivityBoardContainer:OnDestroy()
  StickerboardActivityBoardContainer.s_instance = nil
end

function StickerboardActivityBoardContainer:_OnPointerDown(eventData)
  self.m_boardView:HideObstacleTip()
  BaseUIBoardContainer._OnPointerDown(self, eventData)
  if self.m_collider == nil or self.m_collider:IsNull() then
    return
  end
  if self.m_collider.gameObject.name == self.ObstacleName then
    self.m_boardView:OnObstaclePointerDown(self.m_collider.gameObject)
  else
    self.m_boardView:GetObstacleMapView():ClearPointerData()
  end
end

function StickerboardActivityBoardContainer:_OnDrag(eventData)
  if self.m_collider == nil or self.m_collider:IsNull() then
    return
  end
  BaseUIBoardContainer._OnDrag(self, eventData)
  if self.m_collider.gameObject.name == self.ObstacleName then
    self.m_boardView:OnObstacleDrag(self.m_collider.gameObject)
  end
end

function StickerboardActivityBoardContainer:_OnPointerUp(eventData)
  if self.m_collider == nil or self.m_collider:IsNull() then
    return
  end
  local worldPosition = self:_ConvertTouchToWorldPosition(eventData)
  local targetCollider = CS.UnityEngine.Physics2D.OverlapPoint(Vector2(worldPosition.x, worldPosition.y))
  if targetCollider ~= nil and targetCollider.gameObject.name == self.ObstacleName then
    if self.m_collider ~= nil and self.m_collider.gameObject.name == self.ItemBoardName then
      self.m_boardView:TryRemoveObstacle(targetCollider.gameObject)
    else
      self.m_boardView:OnObstaclePointerUp(targetCollider.gameObject)
    end
    return
  end
  self.m_boardView:GetObstacleMapView():ClearPointerData()
  BaseUIBoardContainer._OnPointerUp(self, eventData)
end
