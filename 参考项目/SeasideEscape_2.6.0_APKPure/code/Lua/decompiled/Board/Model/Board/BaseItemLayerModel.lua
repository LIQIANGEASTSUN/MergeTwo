BaseItemLayerModel = {}
BaseItemLayerModel.__index = BaseItemLayerModel
BaseItemLayerModel.Directions4Way = {
  Vector.Create(1, 0),
  Vector.Create(0, 1),
  Vector.Create(-1, 0),
  Vector.Create(0, -1)
}
BaseItemLayerModel.Directions8Way = {
  Vector.Create(0, -1),
  Vector.Create(1, -1),
  Vector.Create(1, 0),
  Vector.Create(1, 1),
  Vector.Create(0, 1),
  Vector.Create(-1, 1),
  Vector.Create(-1, 0),
  Vector.Create(-1, -1)
}

function BaseItemLayerModel:Init(boardModel)
  self.m_boardModel = boardModel
  self.m_items = boardModel.CreateMatrix()
end

function BaseItemLayerModel:GetItem(position)
  assert(false, "GetItem()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseItemLayerModel:SetItem(position, item)
  assert(false, "SetItem()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseItemLayerModel:GetItemCount(itemType)
  assert(false, "GetItemCount()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseItemLayerModel:GetEmptyPositionCount()
  assert(false, "GetEmptyPositionCount()\230\152\175\230\138\189\232\177\161\230\142\165\229\143\163")
end

function BaseItemLayerModel:HasEmptyPosition()
  return self:GetEmptyPositionCount() > 0
end

function BaseItemLayerModel:FindEmptyPositionInSpreadOrder(centerPosition, openedPosition)
  local currentPosition = centerPosition
  local maxTiles = math.max(self.m_boardModel.HorizontalTiles, self.m_boardModel.VerticalTiles)
  for i = 1, maxTiles do
    currentPosition = currentPosition + Vector.Create(-1, -1)
    local stepLength = 2 * i
    for direction = 1, 4 do
      for _ = 1, stepLength do
        currentPosition = currentPosition + BaseItemLayerModel.Directions4Way[direction]
        if currentPosition:IsValid() and self:GetItem(currentPosition) == nil then
          return currentPosition
        end
      end
    end
  end
  return openedPosition
end

function BaseItemLayerModel:FindEmptyPositionInValidOrder(isFromBottomRight)
  for position in self.m_boardModel.GetValidPositionIterator(isFromBottomRight) do
    if self:GetItem(position) == nil then
      return position
    end
  end
  return nil
end

function BaseItemLayerModel:FindEmptyPositionInCircleOrder(centerPosition)
  for _, direction in ipairs(BaseItemLayerModel.Directions8Way) do
    local position = centerPosition + direction
    if position:IsValid() and self:GetItem(position) == nil then
      return position
    end
    BoardPosition.Release(position)
  end
  return nil
end

local directionAttach = {
  Vector.Create(-1, 0),
  Vector.Create(1, 0),
  Vector.Create(0, -1),
  Vector.Create(0, 1),
  Vector.Create(-1, -1),
  Vector.Create(-1, 1),
  Vector.Create(1, -1),
  Vector.Create(1, 1)
}

function BaseItemLayerModel:FindEmptyPositionInAutoAttach(itemType)
  local itemLevel = GM.ItemDataModel:GetChainLevel(itemType)
  local itemChain = GM.ItemDataModel:GetChainId(itemType)
  if not itemLevel then
    return nil
  end
  local level, chain
  local minLevel = 999
  local result
  for curPosition in self.m_boardModel.GetValidPositionIterator() do
    local itemModel = self:GetItem(curPosition)
    if itemModel ~= nil then
      chain = GM.ItemDataModel:GetChainId(itemModel:GetType())
      if chain and chain == itemChain then
        level = GM.ItemDataModel:GetChainLevel(itemModel:GetType())
        local disA = itemLevel - level
        local disB = itemLevel - minLevel
        if math.abs(disA) < math.abs(disB) or math.abs(disA) == math.abs(disB) and minLevel > level then
          for _, direction in ipairs(directionAttach) do
            local position = curPosition + direction
            if position:IsValid() and self:GetItem(position) == nil then
              if level == itemLevel then
                return position
              end
              result = position
              minLevel = level
              break
            end
            BoardPosition.Release(position)
          end
        end
      end
    end
  end
  return result
end
