Matrix = {}
Matrix.__index = Matrix

function Matrix:Init(boardClass)
  self.m_boardClass = boardClass
  self.m_data = {}
  for y = 1, boardClass.VerticalTiles do
    self.m_data[y] = {}
  end
end

function Matrix:FillWith(value)
  for x = 1, self.m_boardClass.HorizontalTiles do
    for y = 1, self.m_boardClass.VerticalTiles do
      self:Set(x, y, value)
    end
  end
end

function Matrix:Get(x, y)
  return self.m_data[y][x]
end

function Matrix:GetValueOnPosition(position)
  return self:Get(position:GetX(), position:GetY())
end

function Matrix:Set(x, y, value)
  self.m_data[y][x] = value
end

function Matrix:SetValueOnPosition(position, value)
  self:Set(position:GetX(), position:GetY(), value)
end
