DropActivityItemFactory = {}
DropActivityItemFactory.__index = DropActivityItemFactory

function DropActivityItemFactory:Init()
  self.m_mapCacheItem = {}
end

function DropActivityItemFactory:CreateItem(itemcode)
  if self.m_mapCacheItem[itemcode] ~= nil and #self.m_mapCacheItem[itemcode] > 0 then
    local item = table.remove(self.m_mapCacheItem[itemcode])
    item.transform:SetParent(self.m_ItemRectTrans)
    return item
  end
  local prefab
  if self[tostring(itemcode)] ~= nil then
    prefab = self[tostring(itemcode)]
  end
  if prefab == nil then
    Log.Assert(false, itemcode)
  end
  local item = Object.Instantiate(prefab, self.m_ItemRectTrans):GetLuaTable()
  return item
end

function DropActivityItemFactory:CycleItem(item)
  item.transform:SetParent(self.m_CacheRectTrans)
  if self.m_mapCacheItem[item:GetItemCode()] == nil then
    self.m_mapCacheItem[item:GetItemCode()] = {}
  end
  table.insert(self.m_mapCacheItem[item:GetItemCode()], item)
end
