ItemMapBlocker = setmetatable({canMove = false}, BaseItemComponent)
ItemMapBlocker.__index = ItemMapBlocker
local Countdown = 5

function ItemMapBlocker.Create(innerItemCode, unlockLevel)
  local itemMapBlocker = setmetatable({}, ItemMapBlocker)
  itemMapBlocker:Init(innerItemCode, unlockLevel)
  return itemMapBlocker
end

function ItemMapBlocker:Init(innerItemCode, unlockLevel)
  self.m_innerItemCode = innerItemCode
  self.m_unlockLevel = unlockLevel
  EventDispatcher.AddListener(EEventType.LevelUp, self, self._CheckLevel)
  EventDispatcher.AddListener(EEventType.TutorialUnlockBoard, self, self.OnTap)
end

function ItemMapBlocker:SetItemModel(itemModel)
  BaseItemComponent.SetItemModel(self, itemModel)
  self:_CheckLevel()
end

function ItemMapBlocker:GetUnlockLevel()
  return self.m_unlockLevel
end

function ItemMapBlocker:UpdatePerSecond()
  if not self.m_startTimer then
    return
  end
  self.m_startTimer = self.m_startTimer - 1
  if self.m_startTimer < 0 then
    self:_Disappear()
    self.m_startTimer = nil
  end
end

function ItemMapBlocker:OnTap()
  if self.m_startTimer or self:_CheckLevel() then
    self:_Disappear()
  end
end

function ItemMapBlocker:_CheckLevel()
  if self.m_itemModel:GetBoardModel():GetLevel() >= self.m_unlockLevel then
    self.m_startTimer = Countdown
    self.m_itemModel:GetBoardModel().event:Call(BoardEventType.ShakeItem, {
      Source = self.m_itemModel
    })
    return true
  end
  return false
end

function ItemMapBlocker:_Disappear()
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode)
  boardModel.event:Call(BoardEventType.CollapseItem, {
    Source = self.m_itemModel,
    New = newItem
  })
  EventDispatcher.RemoveTarget(self)
end
