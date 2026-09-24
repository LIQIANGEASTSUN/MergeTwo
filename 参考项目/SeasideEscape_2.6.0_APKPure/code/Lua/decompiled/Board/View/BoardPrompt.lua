BoardPromptType = {
  MergeItems = 1,
  OpenChest = 2,
  TapSpreadItem = 3,
  StoreItem = 5,
  FinishOrder = 6,
  Collect = 7,
  BuildButton = 8,
  PopCache = 9,
  CollectAll = 10,
  SwallowItems = 11,
  MaxLevelResources = 12,
  TapSpreadCrucible = 13,
  SunshineOrderBoost = 14
}
local BoardPromptTypeToString = {}
for key, value in pairs(BoardPromptType) do
  BoardPromptTypeToString[value] = key
end
local BoardPromptInnerType = {
  MainGenerator = "pd",
  Cobweb = "cob",
  OrderNeed = "on",
  DailyGift = "dbox",
  Gem = "gem",
  Energy = "energy",
  Tool = "tl",
  GoldBox = "pbox",
  MainItem = "it",
  Coin = "gold"
}
BoardPrompt = {}
BoardPrompt.__index = BoardPrompt

function BoardPrompt:Init(type)
  self.m_type = type
end

function BoardPrompt:GetType()
  return self.m_type
end

function BoardPrompt:CanStart(boardView)
  return false
end

function BoardPrompt:Start(boardView)
end

function BoardPrompt:AutoDo(boardView)
end

function BoardPrompt:StartStep2(boardView)
  return false
end

function BoardPrompt:Stop(boardView)
end

function BoardPrompt:_LogStart(contentStr)
  local info = {
    type = BoardPromptTypeToString[self.m_type],
    content = contentStr
  }
  GM.BIManager:LogAction(EBIType.BoardPrompt, info)
end

BoardPromptMergeItems = setmetatable({}, BoardPrompt)
BoardPromptMergeItems.__index = BoardPromptMergeItems

function BoardPromptMergeItems.Create()
  local prompt = setmetatable({}, BoardPromptMergeItems)
  prompt:Init(BoardPromptType.MergeItems)
  return prompt
end

function BoardPromptMergeItems:CanStart(boardView)
  self.m_itemModels = self:GetPromptItemModels(boardView:GetModel())
  return self.m_itemModels ~= nil and #self.m_itemModels == 2
end

function BoardPromptMergeItems:Start(boardView)
  BoardPrompt.Start(boardView)
  self.m_mapPromptItemModels = {}
  local firstItemView = boardView:GetItemView(self.m_itemModels[1])
  local secondItemView = boardView:GetItemView(self.m_itemModels[2])
  if firstItemView ~= nil and secondItemView ~= nil then
    self.m_mapPromptItemModels[self.m_itemModels[1]] = true
    self.m_mapPromptItemModels[self.m_itemModels[2]] = true
    firstItemView:PlayPromptAnimation(secondItemView.gameObject.transform.position)
    secondItemView:PlayPromptAnimation(firstItemView.gameObject.transform.position)
    local code1 = self.m_itemModels[1]:GetCode()
    local code2 = self.m_itemModels[2]:GetCode()
    if code2 ~= code1 then
      code1 = code1 .. "," .. code2
    end
    self:_LogStart(code1)
  end
end

function BoardPromptMergeItems:AutoDo(boardView)
  local boardModel = boardView:GetModel()
  if boardModel:CanItemMove(self.m_itemModels[1]) then
    boardModel:DragItem(self.m_itemModels[1], self.m_itemModels[2]:GetPosition())
  else
    boardModel:DragItem(self.m_itemModels[2], self.m_itemModels[1]:GetPosition())
  end
end

function BoardPromptMergeItems:Stop(boardView)
  BoardPrompt.Stop(self, boardView)
  for itemModel, _ in pairs(self.m_mapPromptItemModels) do
    local itemView = boardView:GetItemView(itemModel)
    if itemView ~= nil then
      itemView:StopPromptAnimation()
    end
  end
  self.m_mapPromptItemModels = nil
end

function BoardPromptMergeItems:_GetOrderCodeStateMap(boardModel)
  local codeStateMap = boardModel:GetOrderCodeStateMap() or {}
  codeStateMap = Table.ShallowCopy(codeStateMap)
  local actDef
  if boardModel:GetGameMode() == EGameMode.NoCDTrain then
    actDef = {
      NoCDTrainDefinition,
      NoCDBingoDefinition,
      PuzzleBingoDefinition
    }
  else
    actDef = {
      BingoDefinition,
      NoCDTrainDefinition,
      NoCDBingoDefinition,
      PuzzleBingoDefinition
    }
  end
  for _, def in pairs(actDef) do
    for activityType, _ in pairs(def) do
      local bingoItemCodes = GM.ActivityManager:GetModel(activityType):GetMapNeedOrderItemCodes()
      if not Table.IsEmpty(bingoItemCodes) then
        for code, count in pairs(bingoItemCodes) do
          if not codeStateMap[code] then
            codeStateMap[code] = 0
          end
          codeStateMap[code] = codeStateMap[code] + count
        end
      end
    end
  end
  return codeStateMap
end

local MergePromptIgnorePdMap = {
  pd_5 = true,
  pd_13 = true,
  pd_20 = true,
  pd_27 = true,
  pd_35 = true
}

function BoardPromptMergeItems:_IsIgnorePd(itemModel)
  if not GM.ConfigModel:IsBoardPromptFreepdOpen() then
    return false
  end
  local itemCode = itemModel:GetType()
  local chainId = GM.ItemDataModel:GetChainId(itemCode)
  return MergePromptIgnorePdMap[chainId] == true
end

function BoardPromptMergeItems:GetPromptItemModels(boardModel, filter)
  local codeStateMap = self:_GetOrderCodeStateMap(boardModel)
  local updatedCodeStateMap = {}
  for code, count in pairs(codeStateMap) do
    if #boardModel:FilterItems(function(itemModel)
      return itemModel:GetCode() == code
    end) < count + 2 then
      updatedCodeStateMap[code] = true
    end
  end
  local mapGroups = {}
  local arrJokers = {}
  local arrMergeByJoker = {}
  local itemModel, itemType
  for position in boardModel.GetValidPositionIterator() do
    itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and boardModel:CanMergeAll(itemModel) and (filter == nil or filter(itemModel)) then
      local itemSpread = itemModel:GetComponent(ItemSpread)
      if itemModel:GetType() == ItemType.Joker then
        arrJokers[#arrJokers + 1] = itemModel
      end
      if itemSpread == nil or not itemSpread:IsChestUsedOnce() then
        local mergedType = itemModel:GetMergedType()
        if mergedType ~= nil then
          local itemComp = itemModel:GetComponent(ItemCobweb) or itemModel:GetComponent(ItemIce)
          itemType = itemComp ~= nil and itemComp:GetInnerItemCode() or itemModel:GetType()
          itemType = mergedType == ItemType.ScissorsSp and ItemType.ScissorsSp or itemType
          if not updatedCodeStateMap[itemType] then
            if mapGroups[itemType] == nil then
              mapGroups[itemType] = {
                Cobweb = {},
                Normal = {}
              }
            end
            table.insert(itemComp ~= nil and mapGroups[itemType].Cobweb or mapGroups[itemType].Normal, itemModel)
            if itemModel:CanMergeByJoker() then
              arrMergeByJoker[#arrMergeByJoker + 1] = itemModel
            end
          end
        end
      end
    end
  end
  if mapGroups[ItemType.ScissorsSp] and 2 <= #mapGroups[ItemType.ScissorsSp].Normal then
    return Table.ListRandomSelectN(mapGroups[ItemType.ScissorsSp].Normal, 2)
  end
  local arrWithCobweb = {}
  local arrWithoutCobweb = {}
  for type, group in pairs(mapGroups) do
    if #group.Normal > 0 and 2 <= #group.Normal + #group.Cobweb then
      if #group.Cobweb > 0 then
        arrWithCobweb[#arrWithCobweb + 1] = {
          Table.ListRandomSelectOne(group.Cobweb),
          Table.ListRandomSelectOne(group.Normal)
        }
      elseif not self:_IsIgnorePd(group.Normal[1]) then
        arrWithoutCobweb[#arrWithoutCobweb + 1] = Table.ListRandomSelectN(group.Normal, 2)
      end
    end
  end
  if GM.ConfigModel:IsNewUserSystem() then
    local arr = {}
    local arrWithPd = {}
    Table.ListAppend(arr, arrWithCobweb)
    Table.ListAppend(arr, arrWithoutCobweb)
    for _, pair in ipairs(arr) do
      if GM.ItemDataModel:IsPdItem(pair[1]:GetType()) then
        arrWithPd[#arrWithPd + 1] = pair
      end
    end
    if 0 < #arrWithPd then
      return Table.ListRandomSelectOne(arrWithPd)
    end
  end
  if 0 < #arrWithCobweb then
    return Table.ListRandomSelectOne(arrWithCobweb)
  elseif 0 < #arrWithoutCobweb then
    return Table.ListRandomSelectOne(arrWithoutCobweb)
  end
  if 0 < #arrJokers and 0 < #arrMergeByJoker then
    local joker = Table.ListRandomSelectOne(arrJokers)
    table.sort(arrMergeByJoker, function(a, b)
      local typeA = a:GetType()
      if typeA == ItemType.Cobweb then
        typeA = a:GetComponent(ItemCobweb):GetInnerItemCode()
      elseif typeA == ItemType.Ice then
        typeA = a:GetComponent(ItemIce):GetInnerItemCode()
      end
      local levelA = GM.ItemDataModel:GetChainLevel(typeA)
      local typeB = b:GetType()
      if typeB == ItemType.Cobweb then
        typeB = b:GetComponent(ItemCobweb):GetInnerItemCode()
      elseif typeB == ItemType.Ice then
        typeB = b:GetComponent(ItemIce):GetInnerItemCode()
      end
      local levelB = GM.ItemDataModel:GetChainLevel(typeB)
      return levelA > levelB
    end)
    return {
      joker,
      arrMergeByJoker[1]
    }
  end
  return nil
end

BoardPromptOpenChest = setmetatable({}, BoardPrompt)
BoardPromptOpenChest.__index = BoardPromptOpenChest

function BoardPromptOpenChest.Create()
  local prompt = setmetatable({}, BoardPromptOpenChest)
  prompt:Init(BoardPromptType.OpenChest)
  return prompt
end

function BoardPromptOpenChest:CanStart(boardView)
  if boardView:GetModel():HasOpeningItem() then
    return false
  end
  
  local function filter(itemModel)
    local itemSpread = itemModel:GetComponent(ItemSpread)
    return itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Closed
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptOpenChest:Start(boardView)
  self.m_itemModel = Table.ListRandomSelectOne(self.m_itemModels)
  if boardView:GetSelectedItemModel() == self.m_itemModel then
    self:StartStep2(boardView)
  else
    local itemView = boardView:GetItemView(self.m_itemModel)
    boardView:ShowHandEffect(itemView.transform.position)
  end
end

function BoardPromptOpenChest:AutoDo(boardView)
  boardView:GetModel():OpenItem(self.m_itemModel)
end

function BoardPromptOpenChest:StartStep2(boardView)
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun then
    return false
  end
  if boardView:GetSelectedItemModel() ~= self.m_itemModel then
    return false
  end
  boardView:HideHandEffect()
  boardView:GetInfoBar():GetInfoContent():SetHandEffectActive(true)
  return true
end

function BoardPromptOpenChest:Stop(boardView)
  boardView:HideHandEffect()
  boardView:GetInfoBar():GetInfoContent():SetHandEffectActive(false)
end

BoardPromptCollect = setmetatable({}, BoardPrompt)
BoardPromptCollect.__index = BoardPromptCollect

function BoardPromptCollect.Create()
  local prompt = setmetatable({}, BoardPromptCollect)
  prompt:Init(BoardPromptType.Collect)
  return prompt
end

function BoardPromptCollect:CanStart(boardView)
  local boardModel = boardView:GetModel()
  local orders = boardModel:GetOrders()
  self.m_bGoldCollect = next(orders) == nil and GM.MapDataModel:GoldInsufficientToUpgrade()
  
  local function filter(itemModel)
    if itemModel:GetComponent(ItemCollectable) ~= nil then
      if self.m_bGoldCollect then
        return GM.ItemDataModel:GetChainId(itemModel:GetCode()) == GM.ItemDataModel:GetChainId(ItemType.Coin01) or GM.ItemDataModel:IsItemMaxLevel(itemModel:GetCode())
      end
      return GM.ItemDataModel:IsItemMaxLevel(itemModel:GetCode())
    end
    return false
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptCollect:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    if self.m_bGoldCollect then
      if GM.ItemDataModel:GetChainId(a:GetCode()) == GM.ItemDataModel:GetChainId(ItemType.Coin01) and GM.ItemDataModel:GetChainId(b:GetCode()) ~= GM.ItemDataModel:GetChainId(ItemType.Coin01) then
        return true
      elseif GM.ItemDataModel:GetChainId(a:GetCode()) ~= GM.ItemDataModel:GetChainId(ItemType.Coin01) and GM.ItemDataModel:GetChainId(b:GetCode()) == GM.ItemDataModel:GetChainId(ItemType.Coin01) then
        return false
      else
        return tonumber(a:GetId()) < tonumber(b:GetId())
      end
    end
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptCollect:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

function BoardPromptCollect:Stop(boardView)
  boardView:HideHandEffect()
end

BoardPromptTapSpreadItem = setmetatable({}, BoardPrompt)
BoardPromptTapSpreadItem.__index = BoardPromptTapSpreadItem

function BoardPromptTapSpreadItem.Create()
  local prompt = setmetatable({}, BoardPromptTapSpreadItem)
  prompt:Init(BoardPromptType.TapSpreadItem)
  return prompt
end

function BoardPromptTapSpreadItem:CanStart(boardView)
  if boardView:GetModel():IsBoardFull() then
    return false
  end
  
  local function filter(itemModel)
    local itemSpread = itemModel:GetComponent(ItemSpread)
    local itemCharge = itemModel:GetComponent(ItemCharge)
    local itemTransform = itemModel:GetComponent(ItemTransform)
    return itemSpread ~= nil and not itemSpread:IsLockedBySwallow() and itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() ~= 0 or itemCharge and itemCharge:GetState() == ItemChargeState.Charging or itemTransform and itemTransform:CanTap()
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptTapSpreadItem:Start(boardView)
  local boxItems = {}
  for _, item in pairs(self.m_itemModels) do
    if string.find(item:GetCode():lower(), "box") ~= nil then
      boxItems[#boxItems + 1] = item
    end
  end
  if 0 < #boxItems then
    table.sort(boxItems, function(a, b)
      return tonumber(a:GetId()) < tonumber(b:GetId())
    end)
    self.m_itemModel = boxItems[1]
    local itemView = boardView:GetItemView(self.m_itemModel)
    if itemView then
      boardView:ShowHandEffect(itemView.transform.position)
    end
    self:_LogStart(self.m_itemModel:GetCode())
    return
  end
  local boardModel = boardView:GetModel()
  local orderModel = boardModel:GetOrderModel()
  local orders = orderModel:GetOrders()
  local arrOrderData = {}
  for _, order in pairs(orders) do
    local arrUnFilled = order:GetUnFilledRequirements()
    if not Table.IsEmpty(arrUnFilled) then
      local oneOrderData = {}
      for i = 1, #arrUnFilled do
        local oneUnFillData = {}
        oneUnFillData.itemName = arrUnFilled[i]
        oneUnFillData.score = boardModel:GetITItemAvgScore(arrUnFilled[i]) or 100
        oneOrderData[#oneOrderData + 1] = oneUnFillData
      end
      arrOrderData[#arrOrderData + 1] = oneOrderData
    end
  end
  for _, oneOrderData in ipairs(arrOrderData) do
    table.sort(oneOrderData, function(a, b)
      return a.score < b.score
    end)
  end
  table.sort(arrOrderData, function(arrA, arrB)
    local scoreA, scoreB = 0, 0
    for _, data in ipairs(arrA) do
      scoreA = scoreA + data.score
    end
    for _, data in ipairs(arrB) do
      scoreB = scoreB + data.score
    end
    return scoreA < scoreB
  end)
  self.m_itemModel = self:_SelectItem(self.m_itemModels, arrOrderData)
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
  self:_LogStart(self.m_itemModel:GetCode())
end

function BoardPromptTapSpreadItem:_SelectItem(itemModels, arrOrderData)
  for i = 1, #arrOrderData do
    for j = 1, #arrOrderData[i] do
      local item = arrOrderData[i][j].itemName
      local generator = GM.ItemDataModel:GetItemGenerators(item)
      if generator ~= nil then
        for _, itemModel in pairs(self.m_itemModels) do
          if Table.ListContain(generator, itemModel:GetCode()) then
            return itemModel
          end
        end
        for _, gen in pairs(generator) do
          local superGen = GM.ItemDataModel:GetItemGenerators(gen)
          if superGen ~= nil then
            for _, itemModel in pairs(self.m_itemModels) do
              if Table.ListContain(superGen, itemModel:GetCode()) then
                return itemModel
              end
            end
          end
        end
      end
    end
  end
  return Table.ListRandomSelectOne(self.m_itemModels)
end

function BoardPromptTapSpreadItem:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

function BoardPromptTapSpreadItem:Stop(boardView)
  boardView:HideHandEffect()
end

BoardPromptStoreItem = setmetatable({}, BoardPrompt)
BoardPromptStoreItem.__index = BoardPromptStoreItem

function BoardPromptStoreItem.Create()
  local prompt = setmetatable({}, BoardPromptStoreItem)
  prompt:Init(BoardPromptType.StoreItem)
  return prompt
end

function BoardPromptStoreItem:CanStart(boardView)
  if not GM.OpenFunctionModel:IsFunctionOpen(EFunction.Inventory) then
    return false
  end
  if not boardView:GetModel():IsBoardFull() then
    return false
  end
  local boardModel = boardView:GetModel()
  if boardModel:GetStoredItemCount() >= boardModel:GetStoreSlotCount() then
    return false
  end
  local codeStateMap = boardModel:GetOrderCodeStateMap()
  
  local function filter(itemModel)
    if codeStateMap[itemModel:GetType()] ~= nil then
      return false
    end
    local itemSpread = itemModel:GetComponent(ItemSpread)
    if itemSpread ~= nil then
      return false
    end
    return boardModel:CanItemStore(itemModel)
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptStoreItem:Start(boardView)
  BoardPrompt.Start(boardView)
  local maxLevel = 0
  local maxLevelItems
  for _, itemModel in ipairs(self.m_itemModels) do
    local itemLevel = GM.ItemDataModel:GetChainLevel(itemModel:GetType())
    if maxLevel < itemLevel then
      maxLevel = itemLevel
      maxLevelItems = {itemModel}
    elseif itemLevel == maxLevel then
      table.insert(maxLevelItems, itemModel)
    end
  end
  local selectedItem = Table.ListRandomSelectOne(maxLevelItems)
  self.m_itemModel = selectedItem
  self.m_itemView = boardView:GetItemView(selectedItem)
  if self.m_itemView == nil then
    Log.Error("no item view, code is " .. self.m_itemModel:GetCode())
    return
  end
  self.m_itemView:PlayPromptAnimation(nil)
  local baseSceneView = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.BaseSceneView)
  if baseSceneView ~= nil then
    local inventoryButton = baseSceneView:GetHudButton(ESceneViewHudButtonKey.Inventory)
    inventoryButton:PlayPromptAnimation()
  end
end

function BoardPromptStoreItem:AutoDo(boardView)
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.autoRun and GM.TestAutoRunModel.store then
    boardView:GetModel():StoreItem(self.m_itemModel)
  end
end

function BoardPromptStoreItem:Stop(boardView)
  BoardPrompt.Stop(self, boardView)
  self.m_itemView:StopPromptAnimation()
  local baseSceneView = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.BaseSceneView)
  if baseSceneView ~= nil then
    local inventoryButton = baseSceneView:GetHudButton(ESceneViewHudButtonKey.Inventory)
    inventoryButton:StopPromptAnimation()
  end
end

BoardPromptFinishOrder = setmetatable({}, BoardPrompt)
BoardPromptFinishOrder.__index = BoardPromptFinishOrder

function BoardPromptFinishOrder.Create()
  local prompt = setmetatable({}, BoardPromptFinishOrder)
  prompt:Init(BoardPromptType.FinishOrder)
  return prompt
end

function BoardPromptFinishOrder:CanStart(boardView)
  if GM.ConfigModel:IsOrderDeliverPromptOpen() then
    return false
  end
  local fullVisibleCanDeliverCells, halfVisibleCanDeliverCells, noVisibleCells = boardView:GetOrderArea():GetVisibleCanDeliverCells()
  if 0 < #fullVisibleCanDeliverCells then
    self.m_cells = fullVisibleCanDeliverCells
  elseif 0 < #halfVisibleCanDeliverCells then
    self.m_cells = halfVisibleCanDeliverCells
  else
    self.m_cells = noVisibleCells
  end
  return #self.m_cells ~= 0
end

function BoardPromptFinishOrder:Start(boardView)
  BoardPrompt.Start(boardView)
  if boardView:GetModel():GetGameMode() == EGameMode.Main then
    local volcanoRaceModel = VolcanoRaceModel.GetActiveModel()
    if volcanoRaceModel and volcanoRaceModel:CanShowBoardEntrance() and volcanoRaceModel:GetRoundState() == EVolcanoRaceRoundState.Racing then
      local volcanoRaceOrder = boardView:GetModel():GetOrderModel():GetOrderById(volcanoRaceModel:GetCurOrderId())
      if volcanoRaceOrder and volcanoRaceOrder:GetState() == OrderState.CanDeliver then
        self.m_cell = boardView and boardView:GetOrderArea() and boardView:GetOrderArea():GetCell(volcanoRaceOrder)
        if self.m_cell ~= nil then
          self.m_cell:SetHandEffectActive(true)
          self:_LogCellStart(self.m_cell)
          return
        end
      end
    end
  end
  self.m_cell = Table.ListRandomSelectOne(self.m_cells)
  self.m_cell:SetHandEffectActive(true)
  self:_LogCellStart(self.m_cell)
end

function BoardPromptFinishOrder:_LogCellStart(cell)
  local order = cell:GetOrder()
  local requirements = order:GetRequirements()
  self:_LogStart(table.concat(requirements, ","))
end

function BoardPromptFinishOrder:AutoDo(boardView)
  self.m_cell:OnGoButtonClicked()
end

function BoardPromptFinishOrder:Stop(boardView)
  BoardPrompt.Stop(self, boardView)
  self.m_cell:SetHandEffectActive(false)
  if self.m_schedulerFunc then
    Scheduler.Unschedule(self.m_schedulerFunc, self)
    self.m_schedulerFunc = nil
  end
end

BoardPromptBuildButton = setmetatable({}, BoardPrompt)
BoardPromptBuildButton.__index = BoardPromptBuildButton

function BoardPromptBuildButton.Create()
  local prompt = setmetatable({}, BoardPromptBuildButton)
  prompt:Init(BoardPromptType.BuildButton)
  return prompt
end

function BoardPromptBuildButton:CanStart(boardView)
  if GameConfig.IsTestMode() and not GM.TestAutoRunModel.build then
    return false
  end
  local orderArea = boardView:GetOrderArea()
  if not orderArea.GetTaskBubble then
    return false
  end
  self.m_buildBtn = boardView:GetOrderArea():GetTaskBubble()
  return self.m_buildBtn.gameObject.activeInHierarchy
end

function BoardPromptBuildButton:AutoDo(boardView)
  self.m_buildBtn:OnClicked()
end

function BoardPromptBuildButton:Start(boardView)
  self.m_buildBtn:SetHandEffectActive(true)
end

function BoardPromptBuildButton:Stop(boardView)
  self.m_buildBtn:SetHandEffectActive(false)
end

BoardPormptPopCache = setmetatable({}, BoardPrompt)
BoardPormptPopCache.__index = BoardPormptPopCache

function BoardPormptPopCache.Create()
  local prompt = setmetatable({}, BoardPormptPopCache)
  prompt:Init(BoardPromptType.PopCache)
  return prompt
end

function BoardPormptPopCache:CanStart(boardView)
  self.m_cacheRoot = boardView:GetOrderArea():GetBoardCacheRoot()
  return self.m_cacheRoot:IsShowing() and not boardView:GetModel():IsBoardFull()
end

function BoardPormptPopCache:AutoDo(boardView)
  self.m_cacheRoot:OnClicked()
end

BoardPromptCollectAll = setmetatable({}, BoardPrompt)
BoardPromptCollectAll.__index = BoardPromptCollectAll

function BoardPromptCollectAll.Create()
  local prompt = setmetatable({}, BoardPromptCollectAll)
  prompt:Init(BoardPromptType.CollectAll)
  return prompt
end

function BoardPromptCollectAll:CanStart(boardView)
  local function filter(itemModel)
    local itemTransform = itemModel:GetComponent(ItemTransform)
    
    return itemModel:GetComponent(ItemCollectable) ~= nil or itemTransform ~= nil and itemTransform:CanTap()
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptCollectAll:AutoDo(boardView)
  table.sort(self.m_itemModels, function(a, b)
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  boardView:GetModel():TapItem(self.m_itemModels[1])
end

BoardPromptSwallowItems = setmetatable({}, BoardPrompt)
BoardPromptSwallowItems.__index = BoardPromptSwallowItems

function BoardPromptSwallowItems.Create()
  local prompt = setmetatable({}, BoardPromptSwallowItems)
  prompt:Init(BoardPromptType.SwallowItems)
  return prompt
end

function BoardPromptSwallowItems:CanStart(boardView)
  self.m_itemModels = self:_GetSwallowItemModels(boardView)
  return self.m_itemModels ~= nil
end

function BoardPromptSwallowItems:Start(boardView)
  local sourceItemView = boardView:GetItemView(self.m_itemModels.Source)
  local targetItemView = boardView:GetItemView(self.m_itemModels.Target)
  sourceItemView:PlayPromptAnimation(targetItemView.transform.position)
  targetItemView:PlayPromptAnimation(nil)
  if self.m_itemModels.AllReached then
    boardView:ShowHandEffect(targetItemView.transform.position)
  end
end

function BoardPromptSwallowItems:Stop(boardView)
  boardView:GetItemView(self.m_itemModels.Source):StopPromptAnimation()
  boardView:GetItemView(self.m_itemModels.Target):StopPromptAnimation()
  boardView:HideHandEffect()
end

function BoardPromptSwallowItems:_GetSwallowItemModels(boardView)
  local boardModel = boardView:GetModel()
  local selectedItemModel = boardView:GetSelectedItemModel()
  local preferredPairs = {}
  local pairs = {}
  local itemAllReachedMap = {}
  for position in boardModel.GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    local itemSwallow = itemModel and itemModel:GetComponent(ItemSwallow)
    local itemSwallowChain = itemModel and itemModel:GetComponent(ItemSwallowChain)
    if itemSwallowChain ~= nil then
      local function filter(itemModel)
        return itemSwallowChain:CanSwallow(itemModel)
      end
      
      if StringUtil.StartWith(itemModel:GetType(), ItemCodePrefix.Crucible) then
        local sourceItems = boardModel:FilterItems(filter)
        if not Table.IsEmpty(sourceItems) then
          local maxLv
          for _, sourceItem in ipairs(sourceItems) do
            local lv = GM.ItemDataModel:GetChainLevel(sourceItem:GetType())
            if maxLv == nil or maxLv < lv then
              maxLv = lv
            end
          end
          if maxLv ~= nil then
            for _, sourceItem in ipairs(sourceItems) do
              local lv = GM.ItemDataModel:GetChainLevel(sourceItem:GetType())
              if maxLv == lv then
                local pair = {Source = sourceItem, Target = itemModel}
                if itemModel == selectedItemModel then
                  table.insert(preferredPairs, pair)
                  break
                end
                table.insert(pairs, pair)
                break
              end
            end
          end
        end
      else
        local sourceItems = boardModel:FilterItems(filter)
        for _, sourceItem in ipairs(sourceItems) do
          local pair = {Source = sourceItem, Target = itemModel}
          if itemModel == selectedItemModel then
            table.insert(preferredPairs, pair)
          else
            table.insert(pairs, pair)
          end
        end
      end
    elseif itemSwallow ~= nil then
      do
        local allReached = true
        for _, info in ipairs(itemSwallow:GetSwallowInfo()) do
          local unreachCount = info.Count - info.Swallowed
          if unreachCount ~= 0 then
            local function filter(itemModel)
              return itemModel:GetCode() == info.Code
            end
            
            local sourceItems = boardModel:FilterItems(filter)
            for _, sourceItem in ipairs(sourceItems) do
              local pair = {Source = sourceItem, Target = itemModel}
              if itemModel == selectedItemModel then
                table.insert(preferredPairs, pair)
              else
                table.insert(pairs, pair)
              end
            end
            if unreachCount > #sourceItems then
              allReached = false
            end
          end
        end
        itemAllReachedMap[itemModel] = allReached
      end
    end
  end
  local preferredAllReachPairs = {}
  local allReachPairs = {}
  for i = 1, #preferredPairs do
    if itemAllReachedMap[preferredPairs[i].Target] then
      preferredAllReachPairs[#preferredAllReachPairs + 1] = preferredPairs[i]
    end
  end
  for i = 1, #pairs do
    if itemAllReachedMap[pairs[i].Target] then
      allReachPairs[#allReachPairs + 1] = pairs[i]
    end
  end
  if 0 < #preferredAllReachPairs or 0 < #allReachPairs then
    local selectedPair = Table.ListRandomSelectOne(preferredAllReachPairs) or Table.ListRandomSelectOne(allReachPairs)
    selectedPair.AllReached = true
    return selectedPair
  end
  local selectedPair = Table.ListRandomSelectOne(preferredPairs) or Table.ListRandomSelectOne(pairs)
  if selectedPair ~= nil then
    selectedPair.AllReached = itemAllReachedMap[selectedPair.Target]
  end
  return selectedPair
end

function BoardPromptSwallowItems:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModels.Target)
end

BoardPromptMaxLevelResources = setmetatable({}, BoardPrompt)
BoardPromptMaxLevelResources.__index = BoardPromptMaxLevelResources

function BoardPromptMaxLevelResources.Create()
  local prompt = setmetatable({}, BoardPromptMaxLevelResources)
  prompt:Init(BoardPromptType.MaxLevelResources)
  return prompt
end

local BoardPromptMaxLevelResourcesPriority = {
  BoardPromptInnerType.GoldBox,
  BoardPromptInnerType.Coin,
  BoardPromptInnerType.Energy,
  BoardPromptInnerType.Tool,
  BoardPromptInnerType.Gem,
  BoardPromptInnerType.DailyGift
}

function BoardPromptMaxLevelResources:CanStart(boardView)
  self.m_itemModel = nil
  self.m_innerType = nil
  local boardModel = boardView:GetModel()
  local bIsBoardFull = boardModel:IsBoardFull()
  local curPriority = 0
  local mapMainGeneratorItems = {}
  for position in boardModel.GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    local itemType = itemModel and itemModel:GetType()
    if itemModel and itemModel:GetMergedType() == nil then
      local itemSpread = itemModel:GetComponent(ItemSpread)
      if not (itemSpread ~= nil and (itemSpread:GetState() ~= ItemSpreadState.Closed or boardModel:HasOpeningItem())) or itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() ~= 0 and not bIsBoardFull then
        for i = #BoardPromptMaxLevelResourcesPriority, 1, -1 do
          local innerType = BoardPromptMaxLevelResourcesPriority[i]
          if i > curPriority and string.find(itemType, "^" .. innerType .. "[_%d+]") and GM.ItemDataModel:IsItemMaxLevel(itemType) then
            self.m_itemModel = itemModel
            self.m_innerType = innerType
            curPriority = i
          end
        end
      end
    end
    if itemType and string.match(itemType, "^" .. BoardPromptInnerType.MainGenerator .. "[_%d+]") then
      local itemSpread = itemModel:GetComponent(ItemSpread)
      if itemSpread and 0 < itemSpread:GetItemRestNumber() then
        local chainId = GM.ItemDataModel:GetChainId(itemType)
        mapMainGeneratorItems[chainId] = itemModel
      end
    end
  end
  if not self.m_itemModel and not Table.IsEmpty(mapMainGeneratorItems) and not bIsBoardFull then
    local arrOrders = boardModel:GetOrders()
    
    local function scoreFunc(requirements)
      local totalScore = 0
      local score
      for _, itemCode in ipairs(requirements) do
        score = boardModel:GetOrderModel():GetItemScoreByUnlockGen(itemCode)
        if score then
          totalScore = totalScore + score
        end
      end
      return totalScore
    end
    
    local minOrderScore = math.maxinteger
    local orderScore, chainId
    for _, order in pairs(arrOrders) do
      if order:GetState() ~= OrderState.CanDeliver then
        local arrUnfilledRequirements = order:GetUnFilledRequirements()
        orderScore = scoreFunc(arrUnfilledRequirements)
        if minOrderScore > orderScore then
          for _, itemType in ipairs(arrUnfilledRequirements) do
            chainId = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(itemType))
            if mapMainGeneratorItems[chainId] then
              minOrderScore = orderScore
              self.m_itemModel = mapMainGeneratorItems[chainId]
              self.m_innerType = BoardPromptInnerType.MainGenerator
              break
            end
          end
        end
      end
    end
  end
  return self.m_itemModel ~= nil
end

function BoardPromptMaxLevelResources:Start(boardView)
  BoardPrompt.Start(boardView)
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptMaxLevelResources:AutoDo(boardView)
  local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
  if itemSpread and itemSpread:GetState() == ItemSpreadState.Closed then
    boardView:GetModel():OpenItem(self.m_itemModel)
  else
    boardView:GetModel():TapItem(self.m_itemModel)
  end
end

function BoardPromptMaxLevelResources:Stop(boardView)
  BoardPrompt.Stop(self, boardView)
  boardView:HideHandEffect()
end

BoardPromptTapSpreadCrucible = setmetatable({}, BoardPrompt)
BoardPromptTapSpreadCrucible.__index = BoardPromptTapSpreadCrucible

function BoardPromptTapSpreadCrucible.Create()
  local prompt = setmetatable({}, BoardPromptTapSpreadCrucible)
  prompt:Init(BoardPromptType.TapSpreadCrucible)
  return prompt
end

function BoardPromptTapSpreadCrucible:CanStart(boardView)
  if boardView:GetModel():IsBoardFull() then
    return false
  end
  
  local function filter(itemModel)
    local itemSpread = itemModel:GetComponent(ItemSpread)
    local itemTransform = itemModel:GetComponent(ItemTransform)
    if not (itemSpread == nil or itemSpread:IsLockedBySwallow()) and itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() ~= 0 or itemTransform and itemTransform:CanTap() then
      local chainId = GM.ItemDataModel:GetChainId(itemModel:GetType())
      return chainId == ItemChain.Crucible1 or chainId == ItemChain.Crucible2 or chainId == ItemChain.Crucible3
    end
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptTapSpreadCrucible:Start(boardView)
  self.m_itemModel = Table.ListRandomSelectOne(self.m_itemModels)
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptTapSpreadCrucible:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

function BoardPromptTapSpreadCrucible:Stop(boardView)
  boardView:HideHandEffect()
end

BoardPromptSunshineOrderBoost = setmetatable({}, BoardPrompt)
BoardPromptSunshineOrderBoost.__index = BoardPromptSunshineOrderBoost

function BoardPromptSunshineOrderBoost.Create()
  local prompt = setmetatable({}, BoardPromptSunshineOrderBoost)
  prompt:Init(BoardPromptType.SunshineOrderBoost)
  return prompt
end

function BoardPromptSunshineOrderBoost:CanStart(boardView)
  local sunshineOrderBoostModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
  if sunshineOrderBoostModel and sunshineOrderBoostModel:CanBoardPromptShow() then
    local sunshineButton = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.SunshineOrderBoost)
    if sunshineButton then
      self.m_sunshineOrderBoostButton = sunshineButton
      return true
    end
  end
  return false
end

function BoardPromptSunshineOrderBoost:AutoDo(boardView)
  if not UIUtil.IsEmptyComponent(self.m_sunshineOrderBoostButton) then
    self.m_sunshineOrderBoostButton:OnClickButton()
  end
end

function BoardPromptSunshineOrderBoost:Start(boardView)
  if not UIUtil.IsEmptyComponent(self.m_sunshineOrderBoostButton) then
    self.m_gesture = TutorialHelper.TapOnCustomRectTrans(self.m_sunshineOrderBoostButton.transform, true)
    self:_LogStart()
  end
end

function BoardPromptSunshineOrderBoost:Stop(boardView)
  if not UIUtil.IsEmptyComponent(self.m_gesture) then
    TutorialHelper.HideGesture(self.m_gesture)
    self.m_gesture = nil
  end
end
