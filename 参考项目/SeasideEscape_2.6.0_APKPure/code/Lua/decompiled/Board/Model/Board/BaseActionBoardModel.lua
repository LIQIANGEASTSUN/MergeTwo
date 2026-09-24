BaseActionBoardModel = setmetatable({}, BaseBoardModel)
BaseActionBoardModel.__index = BaseActionBoardModel

function BaseActionBoardModel:Init(itemLayerModel, itemManager, itemCacheModel)
  BaseBoardModel.Init(self, itemLayerModel)
  self.m_itemManager = itemManager
  self.m_itemCacheModel = itemCacheModel
end

function BaseActionBoardModel:SaveItemProperty(item)
  self.m_itemManager:SetItem(item)
end

function BaseActionBoardModel:_RemoveItemProperty(item)
  BaseBoardModel._RemoveItemProperty(self, item)
  self.m_itemManager:RemoveItem(item:GetId())
end

function BaseActionBoardModel:CacheItems(cachedItemCodes, type, cost)
  self.m_itemCacheModel:PushItems(cachedItemCodes, type, cost)
end

function BaseActionBoardModel:PopCachedItem()
  if self:IsBoardFull() then
    return false
  end
  local codeRef = self.m_itemCacheModel:GetItem(1)
  local position = self:FindEmptyPositionInAttach(codeRef)
  position = position or self:FindEmptyPositionInValidOrder()
  if position == nil then
    return false
  end
  local cacheId = self.m_itemCacheModel.m_itemIdList[1]
  local code, _, itemId = self.m_itemCacheModel:PopItem()
  if StringUtil.IsNilOrEmpty(code) then
    Log.Assert(false, "code\228\184\141\232\131\189\228\184\186\231\169\186")
    return false
  end
  local newItem
  if itemId ~= nil then
    newItem = self.m_itemManager:GetItem(itemId)
    if newItem ~= nil then
      self:_SetItem(position, newItem)
      newItem:SetBoardModel(self)
      newItem:SetPosition(position)
    end
  end
  if newItem == nil then
    newItem = self:GenerateItem(position, code)
  end
  local message = {
    New = newItem,
    CacheId = cacheId,
    IsPd = false
  }
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  self.event:Call(BoardEventType.PopCachedItem, message)
  return true
end

function BaseActionBoardModel:RemoveCachedItem(index)
  return self.m_itemCacheModel:RemoveItem(index)
end

function BaseActionBoardModel:GetCachedItem(index)
  return self.m_itemCacheModel:GetItem(index)
end

function BaseActionBoardModel:GetCachedItemCount()
  return self.m_itemCacheModel:GetItemCount()
end
