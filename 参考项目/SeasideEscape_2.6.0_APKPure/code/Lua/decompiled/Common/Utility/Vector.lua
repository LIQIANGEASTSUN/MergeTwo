Vector = {}
Vector.__index = Vector
Vector._pool = {}
local sqrt = math.sqrt
local abs = math.abs
local mathType = math.type

function Vector.Create(x, y)
  x = x or 0
  y = y or 0
  local bNeedCache = false
  if mathType(x) == "integer" and mathType(y) == "integer" then
    if Vector._pool[x] and Vector._pool[x][y] then
      return Vector._pool[x][y]
    else
      bNeedCache = true
    end
  end
  local newVector = setmetatable({}, Vector)
  newVector.x = x
  newVector.y = y
  if bNeedCache then
    if not Vector._pool[x] then
      Vector._pool[x] = {}
    end
    Vector._pool[x][y] = newVector
  end
  return newVector
end

function Vector:GetLength()
  return self.x ^ 2 + self.y ^ 2
end

function Vector:GetSqrLength()
  return sqrt(self.x ^ 2 + self.y ^ 2)
end

function Vector:GetValueSum()
  return self.x + self.y
end

function Vector:GetNormalized()
  local length = self:GetLength()
  if length == 0 then
    return Vector.Create(1, 0)
  end
  return self / length
end

function Vector:GetDistance(other)
  if getmetatable(other) == Vector then
    return (self.x - other.x) ^ 2 + (self.y - other.y) ^ 2
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\228\185\139\233\151\180\231\154\132\230\147\141\228\189\156")
  end
end

function Vector:GetSqrDistance(other)
  if getmetatable(other) == Vector then
    return sqrt((self.x - other.x) ^ 2 + (self.y - other.y) ^ 2)
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\228\185\139\233\151\180\231\154\132\230\147\141\228\189\156")
  end
end

function Vector:IsAdjacent(other)
  if getmetatable(other) == Vector then
    return abs(self.x - other.x) + abs(self.y - other.y) == 1
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\228\185\139\233\151\180\231\154\132\230\147\141\228\189\156")
  end
end

function Vector.__eq(a, b)
  if getmetatable(a) == Vector and getmetatable(b) == Vector then
    return a.x == b.x and a.y == b.y
  else
    return false
  end
end

function Vector.__add(a, b)
  if getmetatable(a) == Vector and getmetatable(b) == Vector then
    return Vector.Create(a.x + b.x, a.y + b.y)
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\228\185\139\233\151\180\231\154\132\230\147\141\228\189\156")
  end
end

function Vector.__sub(a, b)
  if getmetatable(a) == Vector and getmetatable(b) == Vector then
    return Vector.Create(a.x - b.x, a.y - b.y)
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\228\185\139\233\151\180\231\154\132\230\147\141\228\189\156")
  end
end

function Vector.__mul(a, b)
  if getmetatable(a) == Vector and IsNumber(b) then
    return Vector.Create(a.x * b, a.y * b)
  elseif IsNumber(a) and getmetatable(b) == Vector then
    return Vector.Create(b.x * a, b.y * a)
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\229\146\140\230\149\180\229\158\139\228\185\139\233\151\180\231\154\132\230\147\141\228\189\156")
  end
end

function Vector.__div(a, b)
  if getmetatable(a) == Vector and IsNumber(b) then
    return Vector.Create(a.x / b, a.y / b)
  else
    Log.Error("\228\187\133\229\133\129\232\174\184Vector\229\175\185\232\177\161\233\153\164\228\187\165\230\149\180\229\158\139")
  end
end

function Vector.Zero()
  return Vector.Create(0, 0)
end

function Vector.One()
  return Vector.Create(1, 1)
end

function Vector.MoveTowards(current, target, maxDistanceDelta)
  local num1 = target.x - current.x
  local num2 = target.y - current.y
  local num3 = target.z - current.z
  local num4 = num1 * num1 + num2 * num2 + num3 * num3
  if num4 == 0.0 or 0.0 <= maxDistanceDelta and num4 <= maxDistanceDelta * maxDistanceDelta then
    return target
  end
  local num5 = sqrt(num4)
  return current.x + num1 / num5 * maxDistanceDelta, current.y + num2 / num5 * maxDistanceDelta, current.z + num3 / num5 * maxDistanceDelta
end

function Vector.MoveTowards3(currentX, currentY, currentZ, targetX, targetY, targetZ, maxDistanceDelta)
  local num1 = targetX - currentX
  local num2 = targetY - currentY
  local num3 = targetZ - currentZ
  local num4 = num1 * num1 + num2 * num2 + num3 * num3
  if num4 == 0.0 or 0.0 <= maxDistanceDelta and num4 <= maxDistanceDelta * maxDistanceDelta then
    return targetX, targetY, targetZ
  end
  local num5 = sqrt(num4)
  return currentX + num1 / num5 * maxDistanceDelta, currentY + num2 / num5 * maxDistanceDelta, currentZ + num3 / num5 * maxDistanceDelta
end

function Vector.SqrMagnitude3(x, y, z)
  return x * x + y * y + z * z
end

function Vector.Magnitude3(x, y, z)
  return sqrt(Vector.SqrMagnitude(x, y, z))
end
