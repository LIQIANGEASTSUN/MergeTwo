ItemFog = setmetatable({}, BaseItemComponent)
ItemFog.__index = ItemFog

function ItemFog.Create(innerItemCode)
  local itemFog = setmetatable({}, ItemFog)
  itemFog:Init(innerItemCode)
  return itemFog
end

function ItemFog.SplitCode(codeWithoutPrefix)
  local index = string.find(codeWithoutPrefix, "#")
  if index == nil then
    Log.Error("ItemFog.SplitCode codeWithoutPrefix is invalid :" .. codeWithoutPrefix)
    return
  end
  local fogId = string.sub(codeWithoutPrefix, 1, index - 1)
  local innerItemCode = string.sub(codeWithoutPrefix, index + 1)
  return fogId, innerItemCode
end

function ItemFog:Init(innerItemCode)
  self.m_fogId, self.m_innerItemCode = ItemFog.SplitCode(innerItemCode)
end

function ItemFog:GetFogId()
  return self.m_fogId
end

function ItemFog:GetInnerItemCode()
  return self.m_innerItemCode
end
