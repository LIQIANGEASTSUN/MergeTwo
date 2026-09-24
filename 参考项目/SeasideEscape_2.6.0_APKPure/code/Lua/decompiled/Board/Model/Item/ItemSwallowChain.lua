ItemSwallowChain = setmetatable({}, ItemSwallow)
ItemSwallowChain.__index = ItemSwallowChain

function ItemSwallowChain.Create(itemConfig)
  local itemSwallow = setmetatable({}, ItemSwallowChain)
  itemSwallow:Init(itemConfig)
  return itemSwallow
end

function ItemSwallowChain:Init(itemConfig)
  self.event = PairEvent.Create(self)
  local swallowChainConfig = itemConfig.Swallow_Chain
  Log.Assert(swallowChainConfig, "Swallow_Chain is nil")
  local itemType = swallowChainConfig[1]
  local count = swallowChainConfig[2]
  self.m_swallowInfo = {
    {
      Code = itemType,
      Count = count,
      Swallowed = 0
    }
  }
  local itemData = GM.ItemDataModel:GetModelConfig(itemType)
  Log.Assert(itemData, "Invalid Swallow_Chain")
  self.m_level = itemData and itemData.level or 0
  self.m_chainId = itemData and itemData.chainId or 0
  self.m_maxLevel = GM.ItemDataModel:GetChainMaxLevel(self.m_chainId)
  self.m_chainList = {}
  if itemConfig.chainId == ItemChain.Crucible1 or itemConfig.chainId == ItemChain.Crucible2 or itemConfig.chainId == ItemChain.Crucible3 then
    self.m_itemRateMap = ItemLotionCollectNum
    for level = self.m_maxLevel, self.m_level, -1 do
      self.m_chainList[#self.m_chainList + 1] = ItemUtility.GetItemCode(self.m_chainId, level)
    end
  else
    self.m_itemRateMap = {}
    local canSwallowType
    local rate = 1
    for level = self.m_level, self.m_maxLevel do
      canSwallowType = ItemUtility.GetItemCode(self.m_chainId, level)
      self.m_itemRateMap[canSwallowType] = rate
      self.m_chainList[#self.m_chainList + 1] = canSwallowType
      rate = rate * 2
    end
  end
  self.m_generateTime = GM.GameModel:GetServerTime()
end

function ItemSwallowChain:HasSomethingToSwallowInBoard()
  local boardModel = self.m_itemModel:GetBoardModel()
  for _, info in ipairs(self.m_swallowInfo) do
    for type, _ in pairs(self.m_itemRateMap) do
      if boardModel:GetItemLayerCount(type) > 0 and info.Swallowed < info.Count then
        return true
      end
    end
  end
  return false
end

function ItemSwallowChain:CanSwallow(item)
  local itemCode = item:GetCode()
  for _, info in ipairs(self.m_swallowInfo) do
    for type, _ in pairs(self.m_itemRateMap) do
      if type == itemCode and info.Swallowed < info.Count then
        return true
      end
    end
  end
  return false
end

function ItemSwallowChain:_AddSwallowCount(item)
  for _, info in ipairs(self.m_swallowInfo) do
    for type, equivalent in pairs(self.m_itemRateMap) do
      if type == item:GetCode() then
        info.Swallowed = info.Swallowed + equivalent
        return
      end
    end
  end
end

function ItemSwallowChain:_GetTargetItems()
  local boardModel = self.m_itemModel:GetBoardModel()
  for _, type in ipairs(self.m_chainList) do
    if boardModel:GetItemLayerCount(type) > 0 then
      for position in boardModel.GetValidPositionIterator() do
        local item = boardModel:GetItem(position)
        if item and item:GetCode() == type then
          return {item}
        end
      end
    end
  end
  return {}
end
