ItemPick = setmetatable({}, BaseItemComponent)
ItemPick.__index = ItemPick
local Choice_Count = 3

function ItemPick.Create()
  local ItemPick = setmetatable({}, ItemPick)
  ItemPick:Init()
  return ItemPick
end

function ItemPick:Init()
end

function ItemPick:FromSerialization(dbTable)
  if not StringUtil.IsNilOrEmpty(dbTable.chooseChoices) then
    self.m_choosedCode = dbTable.chooseChoices
    if self:_CheckItemData() then
      self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    end
  end
end

function ItemPick:_CheckItemData()
  local changed = false
  if GM.MiscModel:Get(EMiscKey.ItemChangedState) ~= "1" and not GM.ItemDataModel:IsItemExist(self.m_choosedCode) then
    self.m_choosedCode = nil
    changed = true
  else
    local code = ItemUtility.CheckData(self.m_choosedCode)
    self.m_choosedCode = code or self.m_choosedCode
    changed = changed or code ~= nil
  end
  return changed
end

function ItemPick:ToSerialization(dbTable)
  local info = ""
  if self.m_choosedCode then
    info = self.m_choosedCode
  end
  dbTable.chooseChoices = info
end

function ItemPick:OnPick(code)
  local boardModel = self.m_itemModel:GetBoardModel()
  self.m_choosedCode = code
  self.m_itemModel.event:Call(ItemEventType.Pick)
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
end

function ItemPick:GetChoices()
  local orderList = self.m_itemModel:GetBoardModel():GetOrders()
  local needMap = {}
  local doneMap = {}
  for _, order in pairs(orderList) do
    local orderType = order:GetType()
    if orderType == OrderType.Random or orderType == OrderType.Fixed or orderType == OrderType.Lane or orderType == OrderType.Recall then
      local codeList = order:GetRequirements()
      for index, done in pairs(order:GetRequirementFillStates()) do
        local code = codeList[index]
        local pd = GM.ItemDataModel:GetModelConfig(code).Generators
        if not done and not needMap[pd] then
          needMap[pd] = true
          doneMap[pd] = nil
        end
        if done and not needMap[pd] then
          doneMap[pd] = true
        end
      end
    end
  end
  local needList = self:_GetChoiceCode(Table.GetKeys(needMap))
  while #needList > Choice_Count do
    table.remove(needList, math.random(1, #needList))
  end
  if #needList == Choice_Count then
    return needList
  end
  local doneList = self:_GetChoiceCode(Table.GetKeys(doneMap))
  while #needList < Choice_Count and 0 < #doneList do
    needList[#needList + 1] = table.remove(doneList, math.random(1, #doneList))
  end
  return needList
end

function ItemPick:_GetChoiceCode(chainList)
  local codeList = {}
  for i = 1, #chainList do
    local level = GM.ItemDataModel:GetChainUnlockedLevel(chainList[i])
    if 0 < level then
      local code = ItemUtility.GetItemCode(chainList[i], level)
      if GM.ItemDataModel:GetModelConfig(code).Spread_Auto ~= nil then
        codeList[#codeList + 1] = code
      end
    end
  end
  return codeList
end

function ItemPick:GetChoosedCode()
  return self.m_choosedCode
end

function ItemPick:GetCurtainCallScore()
  local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
  local spreadConfig = itemSpread:GetCodeWeightPairs()
  local totalWeight = 0
  local score = 0
  for _, config in pairs(spreadConfig) do
    totalWeight = totalWeight + config.Weight
    local code = config.Code
    score = tonumber(code:sub(code:find("_") + 1)) * config.Weight + score
  end
  return itemSpread:GetItemRestNumber() * score / totalWeight * 0.6
end
