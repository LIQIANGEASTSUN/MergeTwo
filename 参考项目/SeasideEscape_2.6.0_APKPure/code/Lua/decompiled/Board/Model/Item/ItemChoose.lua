ItemChoose = setmetatable({}, BaseItemComponent)
ItemChoose.__index = ItemChoose
local Choice_Count = 3

function ItemChoose.Create(chooseConfig)
  local itemChoose = setmetatable({}, ItemChoose)
  itemChoose:Init(chooseConfig)
  return itemChoose
end

function ItemChoose:Init(chooseConfig)
  self.m_chooseConfig = chooseConfig
end

function ItemChoose:FromSerialization(dbTable)
  if not StringUtil.IsNilOrEmpty(dbTable.chooseChoices) then
    self.m_choices = StringUtil.Split(dbTable.chooseChoices, ";")
    local changed = self:_CheckItemData()
    if changed then
      self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
    end
    if #self.m_choices ~= Choice_Count then
      self:RefreshChoice()
      GM.BIManager:LogErrorInfo(EBIProjectType.ItemChoose, tostring(dbTable.chooseChoices) .. "#" .. self.m_itemModel:GetId())
    end
  end
end

function ItemChoose:_CheckItemData()
  local changed = false
  for i = 1, #self.m_choices do
    if GM.MiscModel:Get(EMiscKey.ItemChangedState) ~= "1" and not GM.ItemDataModel:IsItemExist(self.m_choices[i]) then
      self.m_choices = {}
      changed = true
      break
    else
      local code = ItemUtility.CheckData(self.m_choices[i])
      self.m_choices[i] = code or self.m_choices[i]
      changed = changed or code ~= nil
    end
  end
  return changed
end

function ItemChoose:ToSerialization(dbTable)
  local info = ""
  if self.m_choices ~= nil then
    for i = 1, #self.m_choices do
      if i == 1 then
        info = self.m_choices[i]
      else
        info = info .. ";" .. self.m_choices[i]
      end
    end
  end
  dbTable.chooseChoices = info
end

function ItemChoose:OnChoose(index)
  if self.m_choices == nil or #self.m_choices ~= Choice_Count then
    return
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  local choice = self.m_choices[index]
  local newItem = boardModel:ReplaceItem(self.m_itemModel, choice, {
    freeScore = boardModel:GetItemScoreByUnlockGen(choice)
  })
  boardModel.event:Call(BoardEventType.ChooseItem, {
    Source = self.m_itemModel,
    New = newItem
  })
  local biSource = "chest:" .. tostring(self.m_itemModel:GetType()) .. ";items:["
  local count = #self.m_choices
  for i = 1, count do
    biSource = biSource .. tostring(self.m_choices[i])
    if i < count then
      biSource = biSource .. ","
    end
  end
  biSource = biSource .. "]"
  GM.BIManager:LogSpread(biSource, choice, newItem.itemScore, nil, nil, {
    id = newItem:GetId()
  })
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end

function ItemChoose:RefreshChoice()
  if self.m_choices ~= nil then
    self.m_choices = nil
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  end
end

function ItemChoose:GetChoices()
  if self.m_choices ~= nil and #self.m_choices == Choice_Count then
    return self.m_choices
  end
  if self.m_chooseConfig[1].Type == EPropertyType.BalloonBox then
    self.m_choices = GM.BalloonRewardModel:GetItemsForCbox(self.m_chooseConfig)
  else
    self.m_choices = self:_GenerateChoices()
  end
  self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  return self.m_choices
end

function ItemChoose:NeedExclude(type)
  local excludeItemChain = {
    [ItemChain.Honey1] = true,
    [ItemChain.Honey2] = true,
    [ItemChain.Honey3] = true,
    [ItemChain.Honey4] = true,
    [ItemChain.Honey5] = true
  }
  return excludeItemChain[GM.ItemDataModel:GetChainId(type)]
end

function ItemChoose:_GenerateChoices()
  local discardChain = {}
  local arrResult = {}
  local needCount = #self.m_chooseConfig
  local targetScores = self.m_chooseConfig
  local orders = self.m_itemModel:GetBoardModel():GetOrders()
  local unFilledItems = {}
  local requirements
  for _, order in pairs(orders) do
    local orderType = order:GetType()
    if orderType ~= OrderType.CurtainCall and orderType ~= OrderType.Clear and orderType ~= OrderType.LuckyStar then
      requirements = order:GetUnFilledRequirements()
      for _, itemCode in pairs(requirements) do
        if not Table.ListContain(unFilledItems, itemCode) and not self:NeedExclude(itemCode) then
          unFilledItems[#unFilledItems + 1] = itemCode
        end
      end
    end
  end
  self:_RandomResultFromCandidateItems(targetScores, unFilledItems, discardChain, arrResult, true)
  if self:_GenerateFinished(arrResult, needCount) then
    return arrResult
  end
  self:_RandomResultFromCandidateItems(targetScores, unFilledItems, discardChain, arrResult)
  if self:_GenerateFinished(arrResult, needCount) then
    return arrResult
  end
  local filledItems = {}
  for _, order in pairs(orders) do
    local orderType = order:GetType()
    if orderType ~= OrderType.CurtainCall and orderType ~= OrderType.Clear and orderType ~= OrderType.LuckyStar then
      requirements = order:GetRequirements()
      for _, itemCode in pairs(requirements) do
        if not Table.ListContain(filledItems, itemCode) and not Table.ListContain(unFilledItems, itemCode) and not self:NeedExclude(itemCode) then
          filledItems[#filledItems + 1] = itemCode
        end
      end
    end
  end
  self:_RandomResultFromCandidateItems(targetScores, filledItems, discardChain, arrResult)
  if self:_GenerateFinished(arrResult, needCount) then
    return arrResult
  end
  local boardItems = self.m_itemModel:GetBoardModel():FilterItems(function(itemModel)
    return GM.ItemDataModel:IsInOrder(itemModel:GetType()) and not self:NeedExclude(itemModel:GetType())
  end)
  for i = 1, #boardItems do
    boardItems[i] = boardItems[i]:GetCode()
  end
  self:_RandomResultFromCandidateItems(targetScores, boardItems, discardChain, arrResult)
  if self:_GenerateFinished(arrResult, needCount) then
    return arrResult
  end
  local backFill = {
    "gold_3",
    "energy_2",
    "gem_1"
  }
  for i = 1, needCount do
    if arrResult[i] == nil then
      arrResult[i] = backFill[i] or "gem_1"
    end
  end
  return arrResult
end

function ItemChoose:_GenerateFinished(arrResult, needCount)
  local curCount = 0
  for i = 1, needCount do
    if arrResult[i] ~= nil then
      curCount = curCount + 1
    end
  end
  if needCount > curCount then
    return false
  end
  return true
end

function ItemChoose:_RandomResultFromCandidateItems(targetScores, candidateItems, discardChain, result, noConsiderSelf)
  self:_RemoveDiscardChain(candidateItems, discardChain)
  if #candidateItems == 0 then
    return
  end
  local score, tolerance
  local candidateResults = {}
  local chainId, itemCode, itemScore, maxLevel
  for i = 1, #targetScores do
    if result[i] == nil then
      score = targetScores[i].Score
      tolerance = targetScores[i].Tolerance
      local cdResult = {}
      for j = 1, #candidateItems do
        chainId = GM.ItemDataModel:GetChainId(candidateItems[j])
        maxLevel = GM.ItemDataModel:GetChainLevel(candidateItems[j])
        maxLevel = noConsiderSelf and maxLevel - 1 or maxLevel
        for k = maxLevel, 1, -1 do
          itemCode = ItemUtility.GetItemCode(chainId, k)
          itemScore = self.m_itemModel:GetBoardModel():GetItemScoreByUnlockGen(itemCode)
          if itemScore ~= nil and itemScore <= score + tolerance then
            cdResult[#cdResult + 1] = itemCode
            break
          end
        end
      end
      candidateResults[i] = cdResult
    else
      candidateResults[i] = {}
    end
  end
  local tmp = self:_RandomOneCandidate(candidateResults, discardChain, result)
  while tmp ~= nil do
    tmp = self:_RandomOneCandidate(candidateResults, discardChain, result)
  end
end

function ItemChoose:_RandomOneCandidate(candidateResults, discardChain, result)
  local index, count, curCount
  for i = 1, #candidateResults do
    if result[i] == nil then
      self:_RemoveDiscardChain(candidateResults[i], discardChain)
      curCount = self:_GetDistinctChainCount(candidateResults[i])
      if 0 < curCount and (count == nil or count > curCount) then
        index = i
        count = curCount
      end
    end
  end
  if count == nil or count == 0 then
    return
  end
  local itemCode = Table.ListRandomSelectOne(candidateResults[index])
  discardChain[#discardChain + 1] = GM.ItemDataModel:GetChainId(itemCode)
  candidateResults[index] = {}
  result[index] = itemCode
  return itemCode
end

function ItemChoose:_RemoveDiscardChain(list, discardChain)
  local chainid
  for i = #list, 1, -1 do
    chainid = GM.ItemDataModel:GetChainId(list[i])
    if Table.ListContain(discardChain, chainid) then
      table.remove(list, i)
    end
  end
end

function ItemChoose:_GetDistinctChainCount(list)
  local chainId
  local arrChain = {}
  for i = 1, #list do
    chainId = GM.ItemDataModel:GetChainId(list[i])
    if not Table.ListContain(arrChain, chainId) then
      arrChain[#arrChain + 1] = chainId
    end
  end
  return #arrChain
end
