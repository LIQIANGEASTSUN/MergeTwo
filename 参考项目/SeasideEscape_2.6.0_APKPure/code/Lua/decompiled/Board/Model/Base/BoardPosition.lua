BoardPosition = {}
BoardPosition.__index = BoardPosition

function BoardPosition:Init(boardClass, x, y)
  self.m_boardClass = boardClass
  self.m_x = x
  self.m_y = y
end

function BoardPosition:IsValid()
  return self.m_x >= 1 and self.m_x <= self.m_boardClass.HorizontalTiles and 1 <= self.m_y and self.m_y <= self.m_boardClass.VerticalTiles
end

function BoardPosition:GetX()
  return self.m_x
end

function BoardPosition:GetY()
  return self.m_y
end

function BoardPosition:ToLocalPosition()
  local x = (self.m_x - 1) * self.m_boardClass.TileSize
  local y = (self.m_boardClass.VerticalTiles - self.m_y) * self.m_boardClass.TileSize
  return Vector2(x, y)
end

function BoardPosition.__add(position, vector)
  return BoardPosition.Create(position.m_boardClass, position.m_x + math.tointeger(vector.x), position.m_y + math.tointeger(vector.y))
end

function BoardPosition.__eq(a, b)
  if getmetatable(a) == BoardPosition and getmetatable(b) == BoardPosition then
    return a.m_boardClass == b.m_boardClass and a.m_x == b.m_x and a.m_y == b.m_y
  else
    return false
  end
end

function BoardPosition:ToString()
  return self.m_x .. "_" .. self.m_y
end

local BoardPositionPool = {}
local boardPositionCreateCount = 0

function BoardPosition.Release(position)
  position.m_boardClass = nil
  position.m_x = nil
  position.m_y = nil
  table.insert(BoardPositionPool, position)
end

function BoardPosition.Create(boardClass, x, y)
  local pos
  if 0 < #BoardPositionPool then
    pos = BoardPositionPool[#BoardPositionPool]
    BoardPositionPool[#BoardPositionPool] = nil
  else
    pos = setmetatable({}, BoardPosition)
    boardPositionCreateCount = boardPositionCreateCount + 1
    if 500 < boardPositionCreateCount then
    end
  end
  pos:Init(boardClass, x, y)
  return pos
end

function BoardPosition.Copy(other)
  if other == nil then
    return nil
  end
  return BoardPosition.Create(other.m_boardClass, other.m_x, other.m_y)
end
