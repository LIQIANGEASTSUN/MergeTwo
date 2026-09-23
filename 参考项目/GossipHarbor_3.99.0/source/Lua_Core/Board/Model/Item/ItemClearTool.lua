ItemClearTool = setmetatable({}, BaseItemComponent)
ItemClearTool.__index = ItemClearTool

function ItemClearTool.Create(itemConfig)
  local ItemClearTool = setmetatable({}, ItemClearTool)
  ItemClearTool:Init(itemConfig)
  return ItemClearTool
end

function ItemClearTool:Init(itemConfig)
  self.event = PairEvent.Create(self)
  self.m_clearNum = itemConfig.Clear_ClearNum
  self.m_bSpecial = itemConfig.Clear_Special and itemConfig.Clear_Special == 1
end

function ItemClearTool:OnTap(obstaclModel)
  local boardModel = self.m_itemModel:GetBoardModel()
  local obstacleMapModel = boardModel:GetObstacleMapModel()
  if obstacleMapModel == nil then
    return
  end
  if obstacleMapModel:HaveNoObstacle() then
    return
  end
  local itemType = self:GetItemModel():GetType()
  if self.m_bSpecial then
    obstacleMapModel:ClearAllObstacle(itemType, self.m_clearNum)
  elseif obstaclModel ~= nil then
    obstacleMapModel:ReduceObstacleLevel(itemType, obstaclModel, self.m_clearNum)
  else
    local itemPosition = self.m_itemModel:GetPosition()
    obstacleMapModel:FindOneObstacleToClear(itemType, self.m_clearNum, itemPosition)
  end
  boardModel:RemoveItem(self.m_itemModel)
  boardModel.event:Call(BoardEventType.CostItem, {
    Source = self.m_itemModel,
    HasEffect = true
  })
  EventDispatcher.DispatchEvent(EEventType.ItemClearToolOnTap)
end

function ItemClearTool:DragToObstacle(obstaclModel)
  self:OnTap(obstaclModel)
end

function ItemClearTool:GetClearNum()
  return self.m_clearNum
end

function ItemClearTool:IsSpecial()
  return self.m_bSpecial
end
