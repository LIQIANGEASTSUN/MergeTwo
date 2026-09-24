local DirectFallDirection = Vector2(0, 1)
local InverseFallDirection = Vector2(0, -1)
local DiagnoalFallDirections = {
  Vector2(-1, 1),
  Vector2(1, 1)
}
local FallDuration = 0.15
ItemFall = setmetatable({}, BaseItemComponent)
ItemFall.__index = ItemFall

function ItemFall.Create(boardModel)
  local itemFall = setmetatable({}, ItemFall)
  itemFall:Init(boardModel)
  return itemFall
end

function ItemFall:Init(boardModel)
  self.m_boardModel = boardModel
  self.m_bfalling = false
end

function ItemFall:Update(dt)
  if self.m_bCanFall == nil then
    self.m_bCanFall = self.m_boardModel:CanItemFall(self.m_itemModel)
  end
  if not self.m_bCanFall or self.m_boardModel:GetBoardState() ~= BoardState.Falling then
    return
  end
  local checkFalling = false
  if self.m_bfalling then
    self.m_fallingDurationLeft = self.m_fallingDurationLeft - dt
    if self.m_fallingDurationLeft <= 0 then
      self.m_bfalling = false
      self.m_fallingDurationLeft = nil
      checkFalling = true
    end
  end
  if not self.m_bfalling then
    local targetPos = self:_FindFallTargetPos()
    if targetPos ~= nil then
      self.m_bfalling = true
      local former
      self.m_boardModel:SetFalling(self.m_itemModel, targetPos, FallDuration)
      self.m_fallingDurationLeft = FallDuration
    end
  end
  if checkFalling and not self.m_bfalling then
    self.m_boardModel:SetStable(self.m_itemModel)
  end
end

function ItemFall:_FindFallTargetPos()
  local directTargetPos = self.m_itemModel:GetPosition() + DirectFallDirection
  if directTargetPos:IsValid() then
    local item = self.m_boardModel:GetItem(directTargetPos)
    if item == nil then
      return directTargetPos
    end
  end
  for _, direction in ipairs(DiagnoalFallDirections) do
    local targetPos = self.m_itemModel:GetPosition() + direction
    if targetPos:IsValid() then
      local item = self.m_boardModel:GetItem(targetPos)
      if item == nil then
        local upPos = targetPos + InverseFallDirection
        while upPos:IsValid() do
          local upperItem = self.m_boardModel:GetItem(upPos)
          if upperItem ~= nil then
            if not self.m_boardModel:CanItemFall(upperItem) then
              return targetPos
            else
              break
            end
          else
            upPos = upPos + InverseFallDirection
          end
        end
      end
    end
  end
end

function ItemFall:CanFall()
  return self.m_bCanFall
end

function ItemFall:PauseFall()
  self.m_bfalling = false
  self.m_fallingDurationLeft = nil
end
