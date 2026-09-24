DropActivityFlyItem = {}
DropActivityFlyItem.__index = DropActivityFlyItem

function DropActivityFlyItem:Init(startPos, itemcode, targetItem, callBack, speed)
  self.m_ItemImg.enabled = false
  SpriteUtil.SetImage(self.m_ItemImg, ImageFileConfigName[itemcode], true)
  self.m_targetItem = targetItem
  self.transform.position = startPos
  self.m_callBack = callBack
  self.m_speed = speed
  self.m_bFinish = false
end

function DropActivityFlyItem:Update(dt)
  if self.m_targetItem == nil or self.m_bFinish then
    return
  end
  local endPosition = self.m_targetItem.transform.position
  local curPosition = self.transform.position
  local distance = math.sqrt((endPosition.x - curPosition.x) * (endPosition.x - curPosition.x) + (endPosition.y - curPosition.y) * (endPosition.y - curPosition.y))
  local angle = Mathf.Atan2(endPosition.y - curPosition.y, endPosition.x - curPosition.x)
  if distance <= self.m_speed * dt then
    self:OnFinish()
    if self.m_callBack then
      self.m_callBack()
    end
  end
  UIUtil.AddPosition(self.transform, math.cos(angle) * dt * self.m_speed, math.sin(angle) * dt * self.m_speed, 0)
end

function DropActivityFlyItem:OnFinish()
  self.m_bFinish = true
  self.m_targetItem = nil
end
