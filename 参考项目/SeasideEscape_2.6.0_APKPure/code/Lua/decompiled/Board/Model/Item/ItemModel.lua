ItemEventType = {
  SetPosition = 1,
  SwallowOver = 2,
  Pick = 3
}
ItemModel = {}
ItemModel.__index = ItemModel

function ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemModel = setmetatable({
    costEnergy = 0,
    freeScore = 0,
    shopGemCost = 0,
    bubbleGemCost = 0,
    energyToday = 0,
    energyStarToday = 0,
    createTime = GM.GameModel:GetServerTime()
  }, ItemModel)
  itemModel:_Init(boardModel, position, itemConfig, originalCode)
  return itemModel
end

function ItemModel:_Init(boardModel, position, itemConfig, originalCode)
  self.event = PairEvent.Create(self)
  self.m_components = {}
  self.m_componentTypes = {}
  self.m_boardModel = boardModel
  self.m_position = BoardPosition.Copy(position)
  self.m_type = itemConfig.Type
  self.m_mergedType = itemConfig.MergedType
  self.m_mergedFromType = itemConfig.MergedFromType
  self.m_endConversionType = itemConfig.End_Conversion
  self.m_bubbleChance = itemConfig.BubbleChance
  self.m_sellingPrice = itemConfig.SellingPrice
  self.m_canMergeByJoker = itemConfig.Only_Same ~= 1
  self.m_canSplit = itemConfig.CanSplit == 1
  self.m_canMove = itemConfig.Fixed ~= 1
  if itemConfig.Merged_Extra then
    self.m_mergedExtra = itemConfig.Merged_Extra
  end
  self.m_code = originalCode
end

function ItemModel:Destroy()
  self:DispatchComponentEvent("Destroy")
end

function ItemModel:AddComponent(component)
  component:SetItemModel(self)
  local type = getmetatable(component)
  local existingComp = self:GetComponent(type)
  Log.Assert(not existingComp, "duplicate item component! " .. tostring(self.m_type))
  self.m_components[type] = component
  while type do
    if not self.m_componentTypes[type] then
      self.m_componentTypes[type] = component
    end
    type = getmetatable(type)
  end
end

function ItemModel:GetComponent(type)
  return self.m_componentTypes[type]
end

function ItemModel:GetCompleteComponents()
  return self.m_componentTypes
end

function ItemModel:ToSerialization(dbTable)
  dbTable.code = self.m_code
  dbTable.itemScore = tostring(self.itemScore)
  dbTable.costEnergy = self.costEnergy
  dbTable.freeScore = self.freeScore
  dbTable.shopGemCost = self.shopGemCost
  dbTable.bubbleGemCost = self.bubbleGemCost
  dbTable.sunshineId = self.m_sunshineId
  dbTable.createTime = self.createTime
  dbTable.energyToday = self.energyToday
  dbTable.energyStarToday = self.energyStarToday
end

function ItemModel:FromSerialization(data)
  self.itemScore = tonumber(data.itemScore) or self.itemScore
  self.costEnergy = data.costEnergy or self.costEnergy
  self.freeScore = data.freeScore or self.freeScore
  self.shopGemCost = data.shopGemCost or self.shopGemCost
  self.bubbleGemCost = data.bubbleGemCost or self.bubbleGemCost
  self.m_sunshineId = data.sunshineId or self.m_sunshineId
  self.createTime = data.createTime or self.createTime or 0
  self.energyToday = data.energyToday or self.energyToday or 0
  self.energyStarToday = data.energyStarToday or self.energyStarToday or 0
end

function ItemModel:GetCostInfo()
  return {
    freeScore = self.freeScore,
    costEnergy = self.costEnergy,
    shopGemCost = self.shopGemCost,
    bubbleGemCost = self.bubbleGemCost,
    energyToday = self.energyToday,
    energyStarToday = self.energyStarToday
  }
end

function ItemModel:DispatchComponentEvent(functionName, ...)
  for _, component in pairs(self.m_components) do
    component[functionName](component, ...)
  end
end

function ItemModel:GetBoardModel()
  return self.m_boardModel
end

function ItemModel:SetBoardModel(boardModel)
  self.m_boardModel = boardModel
end

function ItemModel:GetBubbleBrokenConfig()
  return self.m_boardModel:GetBubbleBrokenConfig()
end

function ItemModel:GetEnergyPropertyType()
  return self.m_boardModel:GetEnergyPropertyType()
end

function ItemModel:GetGameMode()
  return self.m_boardModel:GetGameMode()
end

function ItemModel:GetPosition()
  return self.m_position
end

function ItemModel:GetLocalPosition()
  local localPos = self.m_position:ToLocalPosition()
  local zIndex = self.m_boardModel.HorizontalTiles * self.m_boardModel.VerticalTiles - self.m_boardModel.HorizontalTiles * (self.m_position:GetY() - 1) - self.m_position:GetX() + 1
  return Vector3(localPos.x + BaseBoardModel.TileSize / 2, localPos.y + BaseBoardModel.TileSize / 2, zIndex * 10)
end

function ItemModel:GetMergedExtra()
  return self.m_mergedExtra
end

function ItemModel:SetPosition(position)
  self.m_position = position
  self.event:Call(ItemEventType.SetPosition, position)
end

function ItemModel:GetType()
  return self.m_type
end

function ItemModel:GetMergedType()
  for _, cmp in pairs(self.m_components) do
    if cmp and cmp.GetMergedType then
      return cmp:GetMergedType()
    end
  end
  if StringUtil.StartWith(self.m_type, ItemCodePrefix.Spokesperson) then
    local model = SpokespersonModel.GetActiveModel()
    if model and GM.ItemDataModel:GetChainLevel(self.m_type) >= model:GetCurrentRoundMaxItemLevel() then
      return nil
    end
  end
  return self.m_mergedType
end

function ItemModel:GetMergedFromType()
  return self.m_mergedFromType
end

function ItemModel:GetEndConversionType()
  return self.m_endConversionType
end

function ItemModel:GetBubbleChance()
  return self.m_bubbleChance
end

function ItemModel:GetSellingPrice()
  return self.m_sellingPrice
end

function ItemModel:GetCode()
  return self.m_code
end

function ItemModel:GetId()
  return self.m_id
end

function ItemModel:SetId(id)
  self.m_id = id
end

function ItemModel:SetSunshineId(id)
  self.m_sunshineId = id
  self.m_boardModel:SaveItemProperty(self)
end

function ItemModel:GetSunshineId()
  return self.m_sunshineId
end

function ItemModel:CanMergeByJoker()
  for _, cmp in pairs(self.m_components) do
    if cmp and cmp.CanMergeByJoker then
      return cmp:CanMergeByJoker()
    end
  end
  return self.m_canMergeByJoker
end

function ItemModel:CanSplit()
  return self.m_canSplit
end

function ItemModel:CanMove()
  if not self.m_canMove then
    return false
  end
  for _, component in pairs(self.m_components) do
    if component.canMove == false then
      return false
    end
  end
  if self:IsLocked() then
    return false
  end
  return true
end

function ItemModel:OnSwallowOver()
  self.event:Call(ItemEventType.SwallowOver)
end

function ItemModel:SetPositionWithoutAnim(position)
  self.m_position = position
end

function ItemModel:SetLocked(bLock)
  self.m_bLocked = bLock
end

function ItemModel:IsLocked()
  return self.m_bLocked
end

function ItemModel:OnTempItemStateChanged()
  if self.m_components[ItemIce] and StringUtil.StartWith(self:GetCode(), ItemCodePrefix.Temp) then
    self.m_components[ItemIce]:OnTempItemStateChanged()
  end
end
