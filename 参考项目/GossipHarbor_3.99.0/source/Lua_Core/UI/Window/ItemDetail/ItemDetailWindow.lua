ItemDetailWindowMode = {
  Normal = 1,
  Iap = 2,
  Tutorial = 3,
  Detail = 4,
  Temp = 5
}
ItemDetailWindowReference = {
  OrderIcon = 1,
  BoardInfoBar = 2,
  Shop = 3
}
ItemDetailWindow = setmetatable({}, BaseWindow)
ItemDetailWindow.__index = ItemDetailWindow

function ItemDetailWindow:Init(itemType, mode, param, ref)
  local config = GM.ItemDataModel:GetModelConfig(itemType)
  if mode == ItemDetailWindowMode.Iap and config.Spread_Weight == nil then
    mode = ItemDetailWindowMode.Normal
  end
  self.m_itemType = itemType
  self.m_ref = ref
  local chainId = GM.ItemDataModel:GetChainId(itemType)
  local chain = GM.ItemDataModel:GetChain(chainId)
  local level = GM.ItemDataModel:GetChainLevel(itemType)
  local firstLevelGenerators = GM.ItemDataModel:GetChainGenerators(chainId, 1)
  self.m_titleText.text = GM.GameTextModel:GetText(ItemNameDefinition.GetName(itemType))
  self.m_levelText.text = GM.GameTextModel:GetText("item_info_level", level)
  if mode == ItemDetailWindowMode.Temp then
    local imageName = GM.ItemDataModel:GetSpriteName(itemType)
    SpriteUtil.SetImage(self.m_tempInnerImage, imageName, true)
    SpriteUtil.SetImage(self.m_tempItemImage, ImageFileConfigName.item_temp, true)
  else
    self.m_tempContentGo:SetActive(false)
  end
  if mode == ItemDetailWindowMode.Iap or mode == ItemDetailWindowMode.Temp then
    self.m_selectImageTransform.gameObject:SetActive(false)
    self.m_mergeContentGo:SetActive(false)
  else
    local minChainLevel = 1
    if level ~= 1 then
      local previousConfig = GM.ItemDataModel:GetModelConfig(chain[level - 1])
      if previousConfig.MergedType == nil then
        minChainLevel = level
      end
    end
    local maxChainLevel = #chain
    if level ~= #chain then
      local previousConfig = GM.ItemDataModel:GetModelConfig(chain[#chain - 1])
      if previousConfig.MergedType == nil then
        maxChainLevel = #chain - 1
      end
    end
    self.m_displayChainId = chainId
    self.m_mapMergeItemCells = {}
    for index = minChainLevel, maxChainLevel do
      local cell = self:_AddCell(chain[index], false, index ~= maxChainLevel, index == level, false, self.m_mergeContentGroupTransform, nil, nil, nil, self)
      self.m_mapMergeItemCells[index] = cell
      if index == level then
        self.m_selectImageTransform:SetParent(cell.transform, false)
        self.m_selectImageTransform:SetSiblingIndex(cell.transform.childCount - 4)
      end
    end
  end
  if mode == ItemDetailWindowMode.Detail then
    self.m_detailPlaceholderGo:SetActive(false)
    self.m_descriptionText.text = GM.GameTextModel:GetText(param)
  elseif mode == ItemDetailWindowMode.Normal and param ~= nil then
    self.m_detailTitleGo:SetActive(false)
    self.m_descriptionText.text = GM.GameTextModel:GetText(param)
  else
    self.m_detailContentGo:SetActive(false)
  end
  if mode == ItemDetailWindowMode.Iap then
    self.m_amountText.text = config.Spread_ItemMaxNumber
  else
    self.m_amountContentGo:SetActive(false)
  end
  if firstLevelGenerators ~= nil and (mode == ItemDetailWindowMode.Normal or mode == ItemDetailWindowMode.Iap) then
    local firstLevelGenerator = self:_SelectGeneratorType(firstLevelGenerators)
    local secondLevelGenerators = GM.ItemDataModel:GetChainGenerators(chainId, 2)
    if secondLevelGenerators == nil then
      self.m_firstLevelGroupGo:SetActive(true)
      self.m_firstLevelItemCell:Init(firstLevelGenerator, true, false, true, true)
    else
      self.m_secondLevelGroupGo:SetActive(true)
      local secondLevelGenerator = self:_SelectGeneratorType(secondLevelGenerators)
      self.m_secondLevelItemCell1:Init(secondLevelGenerator, true, false, true, true)
      self.m_secondLevelItemCell2:Init(firstLevelGenerator, true, false, true, true)
      self.m_secondLevelItemCell3:Init(itemType, true, false, true, false)
    end
  else
    self.m_previousContentGo:SetActive(false)
  end
  local currentSpreadData
  if firstLevelGenerators == nil and mode ~= ItemDetailWindowMode.Tutorial then
    currentSpreadData = self:_GetSpreadData(config)
  end
  if currentSpreadData ~= nil then
    local arrNormalizedWeight
    if mode == ItemDetailWindowMode.Iap or self:_NeedShowWeightInfo(config) then
      local totalWeight = 0
      for _, data in ipairs(currentSpreadData) do
        totalWeight = totalWeight + data.Weight
      end
      arrNormalizedWeight = {}
      local normalizedWeightSum = 0
      local maxWeight, maxWeightIndex
      for i, data in ipairs(currentSpreadData) do
        local normalizedWeight = math.floor(data.Weight * 1000 / totalWeight) / 10
        normalizedWeightSum = normalizedWeightSum + normalizedWeight
        arrNormalizedWeight[#arrNormalizedWeight + 1] = normalizedWeight
        if maxWeight == nil or maxWeight < data.Weight then
          maxWeight = data.Weight
          maxWeightIndex = i
        end
      end
      local normalizedWeightDelta = 100 - normalizedWeightSum
      arrNormalizedWeight[maxWeightIndex] = arrNormalizedWeight[maxWeightIndex] + normalizedWeightDelta
    end
    for i, item in ipairs(currentSpreadData) do
      local spreadWeight = arrNormalizedWeight and string.format("%.1f", arrNormalizedWeight[i]) .. "%"
      self:_AddCell(item.Code, true, false, false, false, self.m_currentContentGroupTransform, spreadWeight)
    end
  else
    self.m_currentContentGo:SetActive(false)
  end
  local nextConfig = chain[level + 1] and GM.ItemDataModel:GetModelConfig(chain[level + 1])
  local nextSpreadData
  if firstLevelGenerators == nil and mode == ItemDetailWindowMode.Normal and nextConfig ~= nil then
    nextSpreadData = self:_GetSpreadData(nextConfig)
  end
  local bShowTip = false
  for i, v in ipairs(chain) do
    local cfg = GM.ItemDataModel:GetModelConfig(v)
    if cfg and cfg.Spread_ItemRecoveryDuration ~= nil then
      bShowTip = true
      break
    end
  end
  if currentSpreadData ~= nil and nextSpreadData ~= nil then
    local currentWeightTotal = 0
    for i, v in ipairs(currentSpreadData) do
      currentWeightTotal = currentWeightTotal + v.Weight
    end
    local nextSpreadWeightTotal = 0
    for i, v in ipairs(nextSpreadData) do
      nextSpreadWeightTotal = nextSpreadWeightTotal + v.Weight
    end
    local index = 1
    while index <= #nextSpreadData do
      local removeItem = false
      local isWeightUp = false
      for _, item in ipairs(currentSpreadData) do
        if item.Code == nextSpreadData[index].Code then
          if bShowTip and item.Weight / currentWeightTotal < nextSpreadData[index].Weight / nextSpreadWeightTotal then
            isWeightUp = true
            break
          end
          removeItem = true
          break
        end
      end
      if removeItem then
        table.remove(nextSpreadData, index)
      else
        if bShowTip then
          nextSpreadData[index].WeightUp = isWeightUp
        end
        index = index + 1
      end
    end
  end
  if nextSpreadData and 0 < #nextSpreadData then
    for _, item in ipairs(nextSpreadData) do
      if item.WeightUp == nil and bShowTip then
        item.WeightUp = false
      end
      self:_AddCell(item.Code, true, false, false, false, self.m_nextContentGroupTransform, nil, item.WeightUp, self.m_textFixedTipBubbleLuaTable)
    end
  else
    self.m_nextContentGo:SetActive(false)
  end
  if mode == ItemDetailWindowMode.Tutorial then
    local tutorialBoardData = require("Model.TutorialBoard." .. param)
    self.m_boardContainer:Init(tutorialBoardData)
  elseif mode == ItemDetailWindowMode.Temp then
    local template = require("Model.TutorialBoard.TutorialBoardTemp")
    self.m_boardContainer:Init(template(itemType))
  else
    self.m_tutorialContentGo:SetActive(false)
  end
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_contentGroup.transform)
  local preferredContentHeight = math.max(self.m_contentGroup.preferredHeight + 232, 1062)
  UIUtil.SetSizeDelta(self.m_contentRect, nil, preferredContentHeight)
  local ext = {
    itemType = itemType,
    mode = mode,
    ref = self.m_ref
  }
  self:LogWindowAction(EBIType.UIActionType.Open, {
    EBIReferType.UserClick
  }, ext)
end

function ItemDetailWindow:_SelectGeneratorType(generatorList)
  local selectedType, selectedLevel
  local selectedExist = false
  for _, generatorType in ipairs(generatorList) do
    local level = GM.ItemDataModel:GetChainLevel(generatorType)
    if GM.ItemDataModel:IsUnlocked(generatorType) then
      if not selectedExist or selectedLevel < level then
        selectedType = generatorType
        selectedLevel = level
        selectedExist = true
      end
    elseif not selectedExist and (selectedType == nil or level < selectedLevel) then
      selectedType = generatorType
      selectedLevel = level
    end
  end
  return selectedType
end

function ItemDetailWindow:_GetSpreadData(config)
  local collectionStateType = GM.ItemDataModel:GetStateCollectionStateType(config.Type, 1)
  if collectionStateType ~= nil then
    local data
    local stateIndex = 1
    while collectionStateType ~= nil do
      local collectionStateConfig = GM.ItemDataModel:GetModelConfig(collectionStateType)
      if collectionStateConfig.Spread_Weight ~= nil then
        if data == nil then
          data = {}
        end
        Table.ListAppend(data, collectionStateConfig.Spread_Weight)
      end
      stateIndex = stateIndex + 1
      collectionStateType = GM.ItemDataModel:GetStateCollectionStateType(config.Type, stateIndex)
    end
    return data
  end
  return Table.ShallowCopy(config.Spread_Weight)
end

function ItemDetailWindow:_NeedShowWeightInfo(config)
  return config.Spread_CostEnergy == 0 and config.Spread_ItemRecoveryDuration == nil
end

function ItemDetailWindow:_AddCell(itemType, isProduceCell, hasArrow, forceShow, hasTipButton, parent, spreadWeight, isWeightUp, tipBubbleLua, window)
  local cellObj = Object.Instantiate(self.m_itemOriginGo, parent)
  local cell = cellObj:GetLuaTable()
  cell:Init(itemType, isProduceCell, hasArrow, forceShow, hasTipButton, spreadWeight, isWeightUp, tipBubbleLua, window)
  return cell
end

function ItemDetailWindow:_AddAnonymousCell(parent)
  local cellObj = Object.Instantiate(self.m_itemOriginGo, parent)
  cellObj:SetActive(true)
  local cell = cellObj:GetLuaTable()
  cell:InitAnonymous()
end

function ItemDetailWindow:OnCloseView()
  BaseWindow.OnCloseView(self)
  self:_TryFindSpreadItem()
end

function ItemDetailWindow:_TryFindSpreadItem()
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.MotherItemHint) or self.m_ref ~= ItemDetailWindowReference.OrderIcon then
    return
  end
  local chainId = GM.ItemDataModel:GetChainId(self.m_itemType)
  local firstLevelGenerators = GM.ItemDataModel:GetChainGenerators(chainId, 1)
  if firstLevelGenerators == nil then
    return
  end
  local secondLevelGenerators = GM.ItemDataModel:GetChainGenerators(chainId, 2)
  local firstLevelGeneratorItems = {}
  local secondLevelGeneratorItems = {}
  for position in GM.MainBoardModel:GetValidPositionIterator() do
    local itemModel = GM.MainBoardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemSpread) ~= nil then
      if Table.ListContain(firstLevelGenerators, itemModel:GetType()) then
        table.insert(firstLevelGeneratorItems, itemModel)
      elseif secondLevelGenerators ~= nil and Table.ListContain(secondLevelGenerators, itemModel:GetType()) then
        table.insert(secondLevelGeneratorItems, itemModel)
      end
    end
  end
  
  local function _getTargetItemFunc(items)
    if Table.IsEmpty(items) then
      return
    end
    table.sort(items, function(a, b)
      local restNumA = a:GetComponent(ItemSpread) and a:GetComponent(ItemSpread):GetItemRestNumber()
      local restNumB = b:GetComponent(ItemSpread) and b:GetComponent(ItemSpread):GetItemRestNumber()
      if restNumA == nil or restNumB == nil or restNumA ~= 0 and restNumB ~= 0 or restNumA == 0 and restNumB == 0 then
        local levelA = tonumber(GM.ItemDataModel:GetChainLevel(a:GetType()))
        local levelB = tonumber(GM.ItemDataModel:GetChainLevel(b:GetType()))
        return levelA and levelB and levelA < levelB
      else
        return a:GetComponent(ItemSpread):GetItemRestNumber() < b:GetComponent(ItemSpread):GetItemRestNumber()
      end
    end)
    return items[#items]
  end
  
  local selectItem = _getTargetItemFunc(firstLevelGeneratorItems) or _getTargetItemFunc(secondLevelGeneratorItems)
  if selectItem then
    DelayExecuteFunc(function()
      local selectView = selectItem and MainBoardView.GetInstance():GetItemView(selectItem)
      if selectView then
        selectView:ShowFocusEffect()
      end
    end, 0.5)
  end
end

function ItemDetailWindow:OnTestAddItem()
  GM.MainBoardModel:CacheItems({
    self.m_itemType
  }, CacheItemType.Type2)
end

function ItemDetailWindow:GetCanShowItemCount(itemType)
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemInfoShowNum) and (self.m_ref == ItemDetailWindowReference.OrderIcon or self.m_ref == ItemDetailWindowReference.BoardInfoBar) then
    local itemMap = GM.MainBoardModel:GetCodeCountMap(true, false, true)
    return itemMap[itemType] or 0
  end
  return 0
end

function ItemDetailWindow:GetMergeContentGO()
  return self.m_mergeContentGroupTransform
end
