BreakBoardModel = setmetatable({
  BoardType = EBoardType.Break
}, BaseUIBoardModel)
BreakBoardModel.__index = BreakBoardModel
BreakBoardModel.HorizontalTiles = 7
BreakBoardModel.VerticalTiles = 7

function BreakBoardModel.Create(args)
  local boardModel = setmetatable({}, BreakBoardModel)
  boardModel:Init(args)
  return boardModel
end

function BreakBoardModel:CanDelete(item)
  return not StringUtil.StartWith(item:GetCode(), self.m_activityModel:GetDefinition().CantDeleteItemCodePrefix)
end

function BreakBoardModel:FindMoneyItem()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item:GetComponent(ItemCobweb) == nil and item:GetComponent(ItemPaperBox) == nil and item:GetCode() == self.m_activityModel:GetDefinition().TopMoneyItemCode then
      return item
    end
  end
end

function BreakBoardModel:FindMachineItem()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item:GetComponent(ItemCobweb) == nil and item:GetComponent(ItemPaperBox) == nil then
      local itemConfig = GM.ItemDataModel:GetModelConfig(item:GetType())
      if item:GetComponent(ItemSwallow) ~= nil and itemConfig ~= nil and itemConfig.Static == 1 then
        return item
      end
    end
  end
end

function BreakBoardModel:FindShoppingItem()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and item:GetComponent(ItemCobweb) == nil and item:GetComponent(ItemPaperBox) == nil and (StringUtil.StartWith(item:GetCode(), self.m_activityModel:GetDefinition().ShoppingItemCodePrefix1) or StringUtil.StartWith(item:GetCode(), self.m_activityModel:GetDefinition().ShoppingItemCodePrefix2)) then
      return item
    end
  end
end

function BreakBoardModel:CheckBoardFulled()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item == nil then
      return false
    end
    local collectTb = item:GetComponent(ItemCollectable)
    if collectTb then
      return false
    end
  end
  if self:FindMergePair() ~= nil then
    return false
  end
  return true
end

function BreakBoardModel:IsPropEnoughToDig()
  if self.m_activityModel:GetTokenNum() <= 0 then
    return false
  end
  return true
end

function BreakBoardModel:HasEmptyPos()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item == nil then
      return true
    end
  end
  return false
end

function BreakBoardModel:ConsumeProp(num, itemType)
  self.m_activityModel:AddTokenNum(num, itemType)
  EventDispatcher.DispatchEvent(EEventType.BreakPropUsed, {
    num = -num
  })
end

function BreakBoardModel:_LogPopCacheItem(code)
end

function BreakBoardModel:CacheItems(cachedItemCodes)
  self.m_itemCacheModel:PushItems(cachedItemCodes, self.CacheItemType)
  EventDispatcher.DispatchEvent(EEventType.CacheItems, {
    boardType = self.BoardType
  })
  self:_LogCacheItems({items = cachedItemCodes})
end
