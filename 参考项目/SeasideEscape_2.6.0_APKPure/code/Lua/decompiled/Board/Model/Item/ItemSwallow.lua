ItemSwallowEventType = {StateChanged = 1, ItemSwallowed = 2}
ItemSwallow = setmetatable({}, BaseItemComponent)
ItemSwallow.__index = ItemSwallow
ItemSwallow.TapProtectionTime = 0

function ItemSwallow.Create(itemConfig)
  local itemSwallow = setmetatable({}, ItemSwallow)
  itemSwallow:Init(itemConfig)
  return itemSwallow
end

function ItemSwallow:Init(itemConfig)
  self.event = PairEvent.Create(self)
  local costItemConfig = itemConfig.CostItem
  self.m_bCostItem = costItemConfig ~= nil
  self.m_bSwallowRepeat = itemConfig.Swallow_Repeat == 1
  if costItemConfig then
    self.m_swallowInfo = {}
    for _, config in ipairs(costItemConfig) do
      table.insert(self.m_swallowInfo, {
        Code = config.Code,
        Count = config.Weight,
        Swallowed = 0
      })
    end
  else
    self.m_swallowInfo = {
      self:_CreateSwallowInfo(itemConfig, 1),
      self:_CreateSwallowInfo(itemConfig, 2)
    }
  end
  self.m_generateTime = GM.GameModel:GetServerTime()
end

function ItemSwallow:FromSerialization(dbTable)
  self.m_swallowInfo = ItemSwallow.StringToSwallowInfo(dbTable.swallowInfo)
end

function ItemSwallow:ToSerialization(dbTable)
  dbTable.swallowInfo = ItemSwallow.SwallowInfoToString(self:GetSwallowInfo()) or ""
end

function ItemSwallow:Update()
  local hasSomethingToSwallow = self:HasSomethingToSwallowInBoard()
  if hasSomethingToSwallow ~= self.m_hasSomethingToSwallow then
    self.event:Call(ItemSwallowEventType.StateChanged)
    self.m_hasSomethingToSwallow = hasSomethingToSwallow
  end
end

function ItemSwallow:_GetTargetItems()
  local targetItems = {}
  local targetNumbers = {0, 0}
  local boardModel = self.m_itemModel:GetBoardModel()
  for position in boardModel.GetValidPositionIterator() do
    local item = boardModel:GetItem(position)
    if not boardModel:IsTileLock(position) and item ~= nil then
      for index, info in ipairs(self.m_swallowInfo) do
        if info.Code == item:GetCode() and info.Swallowed + targetNumbers[index] < info.Count then
          table.insert(targetItems, item)
          targetNumbers[index] = targetNumbers[index] + 1
        end
      end
    end
  end
  return targetItems
end

function ItemSwallow:OnTap(index)
  if GM.GameModel:GetServerTime() - self.m_generateTime < ItemSwallow.TapProtectionTime then
    return
  end
  if not self:HasSomethingToSwallowInBoard() then
    if not self:IsSwallowOver() then
      EventDispatcher.DispatchEvent(EEventType.HuntPdSwallowFailed, {
        Index = index,
        Item = self.m_itemModel
      })
    end
    return
  end
  local targetItems = self:_GetTargetItems()
  if #targetItems == 0 then
    return
  end
  local message = {
    Sources = targetItems,
    Target = self.m_itemModel,
    Index = index
  }
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.BatchSwallowItem, message)
end

function ItemSwallow:HasSomethingToSwallowInBoard()
  local boardModel = self.m_itemModel:GetBoardModel()
  for _, info in ipairs(self.m_swallowInfo) do
    if boardModel:GetItemLayerCount(info.Code) > 0 and info.Swallowed < info.Count then
      return true
    end
  end
  return false
end

function ItemSwallow:WillCostItem()
  return self.m_bCostItem
end

function ItemSwallow:WillSwallow()
  return self.m_bSwallowRepeat
end

function ItemSwallow:OnCostSpreadFinish()
  for _, info in ipairs(self.m_swallowInfo) do
    info.Swallowed = 0
  end
  self.event:Call(ItemSwallowEventType.StateChanged)
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  self.m_generateTime = math.max(self.m_generateTime, GM.GameModel:GetServerTime())
end

function ItemSwallow:IsSwallowOver()
  for _, info in ipairs(self.m_swallowInfo) do
    if info.Swallowed < info.Count then
      return false
    end
  end
  return true
end

function ItemSwallow:CanSwallow(item)
  local itemCode = item:GetCode()
  for _, info in ipairs(self.m_swallowInfo) do
    if info.Code == itemCode and info.Swallowed < info.Count then
      return true
    end
  end
  return false
end

function ItemSwallow:_AddSwallowCount(item)
  for _, info in ipairs(self.m_swallowInfo) do
    if info.Code == item:GetCode() then
      info.Swallowed = info.Swallowed + 1
      break
    end
  end
end

function ItemSwallow:Swallow(item, index)
  local boardModel = self.m_itemModel:GetBoardModel()
  if index and boardModel:GetExtraItem(index) ~= self.m_itemModel then
    return
  elseif not index and boardModel:GetItem(self.m_itemModel:GetPosition()) ~= self.m_itemModel then
    return
  elseif not item or boardModel:GetItem(item:GetPosition()) ~= item then
    return
  end
  self:_AddSwallowCount(item)
  self:_AddItemCost(item)
  boardModel:SaveItemProperty(self.m_itemModel)
  boardModel:RemoveItem(item)
  local message = {
    Source = item,
    Target = self.m_itemModel
  }
  boardModel.event:Call(BoardEventType.SwallowItem, message)
  GM.BIManager:LogAction(EBIType.SwallowItem, item:GetCode(), self.m_itemModel:GetBoardModel():GetGameMode(), {
    id = item:GetId(),
    pos = self.m_itemModel:GetPosition():ToString(),
    sw_pos = item:GetPosition():ToString()
  })
  if GM.ItemDataModel:GetChainId(self.m_itemModel:GetType()) == ItemChain.Dove1 or GM.ItemDataModel:GetChainId(self.m_itemModel:GetType()) == ItemChain.Dove4 or GM.ItemDataModel:GetChainId(self.m_itemModel:GetType()) == ItemChain.Dove5 then
    GM.BIManager:LogUseItem(item:GetCode(), 1, EBIType.ProgressNewUseItem, self.m_itemModel:GetType())
  else
    local itemChainId = GM.ItemDataModel:GetChainId(item:GetCode())
    if itemChainId and StringUtil.StartWith(itemChainId, "hunt") and StringUtil.EndWith(itemChainId, "_key") then
      GM.BIManager:LogUseItem(item:GetCode(), 1, EBIType.HuntSwallowKey, self.m_itemModel:GetType(), EGameMode.Hunt)
    end
  end
  local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
  if not itemSpread and self:IsSwallowOver() then
    local itemTransform = self.m_itemModel:GetComponent(ItemTransform)
    if index then
      itemTransform:HuntPdTransform(index)
    else
      itemTransform:Transform()
      if boardModel.ShockNearby then
        boardModel:ShockNearby(self.m_itemModel)
      end
    end
  else
    self.event:Call(ItemSwallowEventType.StateChanged)
    if itemSpread and self:IsSwallowOver() then
      itemSpread:OnSwallowOver()
    end
    if self:IsSwallowOver() then
      self.m_itemModel:OnSwallowOver()
    end
  end
  self.event:Call(ItemSwallowEventType.ItemSwallowed)
  EventDispatcher.DispatchEvent(EEventType.ItemSwallowed, {
    Source = self.m_itemModel,
    IsSwallowOver = self:IsSwallowOver(),
    SwallowCode = item:GetCode()
  })
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end

function ItemSwallow:_AddItemCost(item)
  self.m_itemModel.costEnergy = self.m_itemModel.costEnergy + item.costEnergy
  self.m_itemModel.freeScore = self.m_itemModel.freeScore + item.freeScore
  self.m_itemModel.shopGemCost = self.m_itemModel.shopGemCost + item.shopGemCost
  self.m_itemModel.bubbleGemCost = self.m_itemModel.bubbleGemCost + item.bubbleGemCost
  if item.createTime // 86400 == self.m_itemModel.createTime // 86400 then
    self.m_itemModel.energyToday = self.m_itemModel.energyToday + item.energyToday
    self.m_itemModel.energyStarToday = self.m_itemModel.energyStarToday + item.energyStarToday
  end
end

function ItemSwallow:GetSwallowInfo()
  return self.m_swallowInfo
end

function ItemSwallow:_CreateSwallowInfo(itemConfig, index)
  local swallowWeight = itemConfig["Swallow_Weight" .. index]
  if swallowWeight == nil then
    return nil
  end
  return {
    Code = Table.ListWeightSelectOne(swallowWeight).Code,
    Count = itemConfig["Swallow_Number" .. index],
    Swallowed = 0
  }
end

function ItemSwallow.SwallowInfoToString(swallowInfo)
  local data = ""
  for index, item in ipairs(swallowInfo) do
    data = data .. item.Code .. "-" .. item.Swallowed .. "-" .. item.Count
    if index ~= #swallowInfo then
      data = data .. ";"
    end
  end
  return data
end

function ItemSwallow.StringToSwallowInfo(data)
  local swallowInfo = {}
  local array = StringUtil.Split(data, ";")
  for _, item in ipairs(array) do
    local parts = StringUtil.Split(item, "-")
    table.insert(swallowInfo, {
      Code = parts[1],
      Swallowed = tonumber(parts[2]),
      Count = tonumber(parts[3])
    })
  end
  return swallowInfo
end

ItemSwallowed = setmetatable({}, BaseItemComponent)
ItemSwallowed.__index = ItemSwallowed
ItemSwallowed.TapProtectionTime = 0

function ItemSwallowed.Create(itemConfig)
  local itemSwallow = setmetatable({}, ItemSwallowed)
  itemSwallow:Init(itemConfig)
  return itemSwallow
end

function ItemSwallowed:Init(itemConfig)
  self.event = PairEvent.Create(self)
  local parentItemConfig = itemConfig.Swallow_Parents
  if not Table.IsEmpty(parentItemConfig) then
    self.m_swallowParent = {}
    for _, config in ipairs(parentItemConfig) do
      table.insert(self.m_swallowParent, {
        Code = config.Code
      })
    end
  else
    Log.Error("ItemSwallow.Init Swallow_Parents is empty ?")
  end
  self.m_generateTime = GM.GameModel:GetServerTime()
end

function ItemSwallowed:GetSwallowParent()
  return self.m_swallowParent
end

function ItemSwallowed:OnTap(index)
  local gameMode = self.m_itemModel:GetGameMode()
  if not gameMode then
    return
  end
  if not GM.ConfigModel:IsSwallowDisOpen(gameMode) then
    return
  end
  if GM.GameModel:GetServerTime() - self.m_generateTime < ItemSwallow.TapProtectionTime then
    return
  end
  local targetItems = self:_GetTargetItems()
  if #targetItems == 0 then
    return
  end
  local message = {
    Sources = {
      self.m_itemModel
    },
    Target = targetItems[1],
    Index = index
  }
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.BatchSwallowItem, message)
end

function ItemSwallowed:_GetTargetItems()
  local targetItems = {}
  local boardModel = self.m_itemModel:GetBoardModel()
  for position in boardModel.GetValidPositionIterator() do
    local item = boardModel:GetItem(position)
    if not boardModel:IsTileLock(position) and item ~= nil then
      for index, info in ipairs(self.m_swallowParent) do
        if info.Code == item:GetCode() then
          local ItemSwallow = item:GetComponent(ItemSwallow)
          if ItemSwallow and not ItemSwallow:IsSwallowOver() and ItemSwallow:CanSwallow(self.m_itemModel) then
            table.insert(targetItems, item)
          end
        end
      end
    end
  end
  return targetItems
end
