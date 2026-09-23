BoardPromptType = {
  GeneratorFactory = "GeneratorFactory",
  MergeItems = "MergeItems",
  OpenChest = "OpenChest",
  TapNonDisposableSpreadItem = "TapNonDisposableSpreadItem",
  TapDisposableSpreadItem = "TapDisposableSpreadItem",
  StoreItem = "StoreItem",
  FinishOrder = "FinishOrder",
  FinishTask = "FinishTask",
  SwallowItems = "SwallowItems",
  TapCacheItems = "TapCacheItems",
  SwallowItemsDisallowTap = "SwallowItemsDisallowTap",
  DigItem = "DigItem",
  DigCollectItem = "DigCollectItem",
  TapPortalItem = "TapPortalItem",
  TapRewardBubbleItem = "TapRewardBubbleItem",
  FarmboardTapBlockKeyItem = "FarmboardTapBlockKeyItem",
  FarmboardAnimalProduce = "FarmboardAnimalProduce",
  FarmboardActivateAnimal = "FarmboardActivateAnimal",
  FarmboardBlockProduce = "FarmboardBlockProduce",
  DigCollectLowLevelItem = "DigCollectLowLevelItem",
  TapStickerboardClearToolItem = "TapStickerboardClearToolItem",
  TapFogUnlockKeyItem = "TapFogUnlockKeyItem",
  MiniboardEnergyUseTap = "MiniboardEnergyUseTap"
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

function BoardPrompt:StartStep2(boardView)
  return false
end

function BoardPrompt:Stop(boardView)
end

BoardPromptGeneratorFactory = setmetatable({}, BoardPrompt)
BoardPromptGeneratorFactory.__index = BoardPromptGeneratorFactory

function BoardPromptGeneratorFactory.Create()
  local prompt = setmetatable({}, BoardPromptGeneratorFactory)
  prompt:Init(BoardPromptType.GeneratorFactory)
  return prompt
end

function BoardPromptGeneratorFactory:CanStart(boardView)
  if TutorialHelper.IsGesturePlaying() then
    return false
  end
  
  local function filter(itemModel)
    local itemGeneratorFactory = itemModel:GetComponent(ItemGeneratorFactory)
    return itemGeneratorFactory ~= nil and itemGeneratorFactory:IsGeneratorFactoryOpen()
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptGeneratorFactory:Start(boardView)
  local itemModel
  for _, item in ipairs(self.m_itemModels) do
    if boardView.lastTapItem == item then
      itemModel = item
    end
  end
  itemModel = itemModel or Table.ListRandomSelectOne(self.m_itemModels)
  local position = boardView:ConvertScreenPositionToWorldPosition(boardView:ConvertBoardPositionToScreenPosition(itemModel:GetPosition()))
  boardView:ShowHandTapEffect(position)
end

function BoardPromptGeneratorFactory:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptMergeItems = setmetatable({}, BoardPrompt)
BoardPromptMergeItems.__index = BoardPromptMergeItems

function BoardPromptMergeItems.Create()
  local prompt = setmetatable({}, BoardPromptMergeItems)
  prompt:Init(BoardPromptType.MergeItems)
  return prompt
end

function BoardPromptMergeItems:CanStart(boardView)
  if PlayerPrefs.GetInt(EPlayerPrefKey.OpenHint, 1) == 0 then
    return false
  end
  local boardModel = boardView:GetModel()
  local ignoreItemCount
  if boardModel.GetOrders then
    ignoreItemCount = {}
    local orders = boardModel:GetOrders()
    for _, order in pairs(orders) do
      for _, code in pairs(order:GetRequirements()) do
        ignoreItemCount[code] = ignoreItemCount[code] and ignoreItemCount[code] + 1 or 1
      end
    end
  end
  local lastTouchedItem = boardView.GetSelectedItemModel and boardView:GetSelectedItemModel()
  self.m_itemModels = boardModel:FindMergePair(nil, ignoreItemCount, lastTouchedItem)
  return self.m_itemModels ~= nil
end

function BoardPromptMergeItems:Start(boardView)
  local firstItemView = boardView:GetItemView(self.m_itemModels[1])
  local secondItemView = boardView:GetItemView(self.m_itemModels[2])
  if firstItemView ~= nil and secondItemView ~= nil then
    if boardView.ShowHandDragEffect and GM.LevelModel:GetCurrentLevel() == 1 then
      boardView:ShowHandDragEffect(firstItemView.transform.position, secondItemView.transform.position)
      self.m_bUseDragEffect = true
    else
      self.m_promptItemModels = {}
      self.m_promptItemModels[self.m_itemModels[1]] = true
      self.m_promptItemModels[self.m_itemModels[2]] = true
      firstItemView:PlayPromptAnimation(secondItemView.transform.position)
      secondItemView:PlayPromptAnimation(firstItemView.transform.position)
    end
  end
end

function BoardPromptMergeItems:Stop(boardView)
  if self.m_bUseDragEffect then
    boardView:HideHandDragEffect()
    self.m_bUseDragEffect = nil
  else
    if self.m_promptItemModels then
      for itemModel, _ in pairs(self.m_promptItemModels) do
        local itemView = boardView:GetItemView(itemModel)
        if itemView ~= nil then
          itemView:StopPromptAnimation()
        end
      end
    end
    self.m_promptItemModels = nil
  end
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
  if TutorialHelper.IsGesturePlaying() then
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
    boardView:ShowHandTapEffect(itemView.transform.position)
  end
end

function BoardPromptOpenChest:StartStep2(boardView)
  if boardView:GetSelectedItemModel() ~= self.m_itemModel then
    return false
  end
  boardView:HideHandTapEffect()
  boardView:GetInfoBar():GetInfoContent():SetHandEffectActive(true)
  return true
end

function BoardPromptOpenChest:Stop(boardView)
  boardView:HideHandTapEffect()
  boardView:GetInfoBar():GetInfoContent():SetHandEffectActive(false)
end

BoardPromptTapNonDisposableSpreadItem = setmetatable({}, BoardPrompt)
BoardPromptTapNonDisposableSpreadItem.__index = BoardPromptTapNonDisposableSpreadItem

function BoardPromptTapNonDisposableSpreadItem.Create()
  local prompt = setmetatable({}, BoardPromptTapNonDisposableSpreadItem)
  prompt:Init(BoardPromptType.TapNonDisposableSpreadItem)
  return prompt
end

function BoardPromptTapNonDisposableSpreadItem:CanStart(boardView)
  if boardView:GetModel():IsBoardFull() then
    return false
  end
  if TutorialHelper.IsGesturePlaying() then
    return false
  end
  if not boardView:GetModel().GetOrderCodeLackCountMap then
    return false
  end
  local lackCountMap = boardView:GetModel():GetOrderCodeLackCountMap()
  local mapLackGeneratorChainId = {}
  for lackItemType, _ in pairs(lackCountMap) do
    local lackChainId = GM.ItemDataModel:GetChainId(lackItemType)
    local lackGenerators = GM.ItemDataModel:GetChainGenerators(lackChainId, 1)
    if lackGenerators and lackGenerators[1] then
      local lackGeneratorChainId = GM.ItemDataModel:GetChainId(lackGenerators[1])
      mapLackGeneratorChainId[lackGeneratorChainId] = true
    end
  end
  if Table.IsEmpty(mapLackGeneratorChainId) then
    return false
  end
  
  local function filter(itemModel)
    local itemSpread = itemModel:GetComponent(ItemSpread)
    return itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() ~= 0 and not itemSpread:IsDisposable() and mapLackGeneratorChainId[GM.ItemDataModel:GetChainId(itemModel:GetType())]
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptTapNonDisposableSpreadItem:Start(boardView)
  local itemModel
  local generatorNum = 0
  local maxGeneratorChainId = "0"
  local mapGenerator = {}
  for _, generatorItemModel in ipairs(self.m_itemModels) do
    local generatorItemType = generatorItemModel:GetType()
    local generatorChainId = GM.ItemDataModel:GetChainId(generatorItemType)
    mapGenerator[generatorChainId] = mapGenerator[generatorChainId] or {}
    local generatorLevel = GM.ItemDataModel:GetChainLevel(generatorItemType)
    if mapGenerator[generatorChainId].maxLevel == nil or generatorLevel > mapGenerator[generatorChainId].maxLevel then
      if mapGenerator[generatorChainId].maxLevel == nil then
        generatorNum = generatorNum + 1
        if tonumber(generatorChainId) and tonumber(generatorChainId) > tonumber(maxGeneratorChainId) then
          maxGeneratorChainId = generatorChainId
        end
      end
      mapGenerator[generatorChainId].maxLevel = generatorLevel
      mapGenerator[generatorChainId].itemModel = generatorItemModel
    end
  end
  if 2 <= generatorNum then
    if boardView.LastTapNonDisposableGeneratorChainId then
      itemModel = mapGenerator[boardView.LastTapNonDisposableGeneratorChainId] and mapGenerator[boardView.LastTapNonDisposableGeneratorChainId].itemModel
    else
      itemModel = mapGenerator[maxGeneratorChainId] and mapGenerator[maxGeneratorChainId].itemModel
    end
  elseif generatorNum == 1 then
    itemModel = mapGenerator[maxGeneratorChainId] and mapGenerator[maxGeneratorChainId].itemModel
  end
  itemModel = itemModel or Table.ListRandomSelectOne(self.m_itemModels)
  local position = boardView:ConvertScreenPositionToWorldPosition(boardView:ConvertBoardPositionToScreenPosition(itemModel:GetPosition()))
  boardView:ShowHandTapEffect(position)
end

function BoardPromptTapNonDisposableSpreadItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptTapDisposableSpreadItem = setmetatable({}, BoardPrompt)
BoardPromptTapDisposableSpreadItem.__index = BoardPromptTapDisposableSpreadItem

function BoardPromptTapDisposableSpreadItem.Create()
  local prompt = setmetatable({}, BoardPromptTapDisposableSpreadItem)
  prompt:Init(BoardPromptType.TapDisposableSpreadItem)
  return prompt
end

function BoardPromptTapDisposableSpreadItem:CanStart(boardView)
  if boardView:GetModel():IsBoardFull() then
    return false
  end
  if TutorialHelper.IsGesturePlaying() then
    return false
  end
  
  local function filter(itemModel)
    local itemSpread = itemModel:GetComponent(ItemSpread)
    return itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:IsDisposable()
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptTapDisposableSpreadItem:Start(boardView)
  local itemModel
  for _, item in ipairs(self.m_itemModels) do
    if boardView.LastTapDisposableGeneratorItemModel == item then
      itemModel = item
    end
  end
  itemModel = itemModel or Table.ListRandomSelectOne(self.m_itemModels)
  local position = boardView:ConvertScreenPositionToWorldPosition(boardView:ConvertBoardPositionToScreenPosition(itemModel:GetPosition()))
  boardView:ShowHandTapEffect(position)
end

function BoardPromptTapDisposableSpreadItem:Stop(boardView)
  boardView:HideHandTapEffect()
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
  if TutorialHelper.IsGesturePlaying() then
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
  self.m_itemView = boardView:GetItemView(selectedItem)
  self.m_itemView:PlayPromptAnimation(nil)
  local baseSceneView = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.BaseSceneView)
  if baseSceneView ~= nil then
    local inventoryButton = baseSceneView:GetHudButton(ESceneViewHudButtonKey.Inventory)
    inventoryButton:PlayPromptAnimation()
  end
end

function BoardPromptStoreItem:Stop(boardView)
  if self.m_itemView and not self.m_itemView.gameObject:IsNull() then
    self.m_itemView:StopPromptAnimation()
  end
  self.m_itemView = nil
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
  if TutorialHelper.IsGesturePlaying() then
    return false
  end
  self.m_cells = {}
  local cells = boardView:GetOrderArea():GetCells(OrderModelType.Slot)
  for _, cell in pairs(cells) do
    if cell:GetOrder():GetState() == OrderState.CanDeliver then
      table.insert(self.m_cells, cell)
    end
  end
  return #self.m_cells ~= 0
end

function BoardPromptFinishOrder:Start(boardView)
  self.m_cell = Table.ListRandomSelectOne(self.m_cells)
  self.m_cell:SetHandEffectActive(true)
end

function BoardPromptFinishOrder:Stop(boardView)
  self.m_cell:SetHandEffectActive(false)
end

BoardPromptFinishTask = setmetatable({}, BoardPrompt)
BoardPromptFinishTask.__index = BoardPromptFinishTask

function BoardPromptFinishTask.Create()
  local prompt = setmetatable({}, BoardPromptFinishTask)
  prompt:Init(BoardPromptType.FinishTask)
  return prompt
end

function BoardPromptFinishTask:CanStart(boardView)
  if TutorialHelper.IsGesturePlaying() then
    return false
  end
  return GM.LevelModel:GetCurrentLevel() < 3 and GM.MainTaskModel:CanFinishCurTask() or GM.MainTaskModel:CanFinishThreeTask()
end

function BoardPromptFinishTask:Start(boardView)
  boardView:GetOrderArea():GetTaskBubble():SetHandEffectActive(true)
end

function BoardPromptFinishTask:Stop(boardView)
  boardView:GetOrderArea():GetTaskBubble():SetHandEffectActive(false)
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
    boardView:ShowHandTapEffect(targetItemView.transform.position)
  end
end

function BoardPromptSwallowItems:Stop(boardView)
  local sourceItemView = boardView:GetItemView(self.m_itemModels.Source)
  if sourceItemView ~= nil then
    sourceItemView:StopPromptAnimation()
  end
  local targetItemView = boardView:GetItemView(self.m_itemModels.Target)
  if targetItemView ~= nil then
    targetItemView:StopPromptAnimation()
  end
  boardView:HideHandTapEffect()
end

function BoardPromptSwallowItems:_GetSwallowItemModels(boardView)
  local boardModel = boardView:GetModel()
  local selectedItemModel = boardView:GetSelectedItemModel()
  local preferredPairs = {}
  local pairs = {}
  local itemAllReachedMap = {}
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    local itemSwallow = itemModel and itemModel:GetComponent(ItemSwallow)
    if itemSwallow ~= nil and itemSwallow:AllowTap() then
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
    selectedPair.AllReached = false
  end
  return selectedPair
end

BoardPromptTapCacheItems = setmetatable({}, BoardPrompt)
BoardPromptTapCacheItems.__index = BoardPromptTapCacheItems

function BoardPromptTapCacheItems.Create()
  local prompt = setmetatable({}, BoardPromptTapCacheItems)
  prompt:Init(BoardPromptType.TapCacheItems)
  return prompt
end

function BoardPromptTapCacheItems:CanStart(boardView)
  if TutorialHelper.IsGesturePlaying() then
    return false
  end
  return not boardView:GetModel():IsBoardFull() and boardView:GetModel():GetCachedItemCount() > 0
end

function BoardPromptTapCacheItems:Start(boardView)
  local orderArea = boardView:GetOrderArea()
  orderArea:GetBoardCacheRoot():SetHandEffectActive(true)
end

function BoardPromptTapCacheItems:Stop(boardView)
  boardView:GetOrderArea():GetBoardCacheRoot():SetHandEffectActive(false)
end

BoardPromptSwallowItemsDisallowTap = setmetatable({}, BoardPrompt)
BoardPromptSwallowItemsDisallowTap.__index = BoardPromptSwallowItemsDisallowTap

function BoardPromptSwallowItemsDisallowTap.Create()
  local prompt = setmetatable({}, BoardPromptSwallowItemsDisallowTap)
  prompt:Init(BoardPromptType.SwallowItemsDisallowTap)
  return prompt
end

function BoardPromptSwallowItemsDisallowTap:CanStart(boardView)
  self.m_itemModels = self:_GetSwallowItemModels(boardView)
  return self.m_itemModels ~= nil
end

function BoardPromptSwallowItemsDisallowTap:Start(boardView)
  local sourceItemView = boardView:GetItemView(self.m_itemModels.Source)
  local targetItemView = boardView:GetItemView(self.m_itemModels.Target)
  if targetItemView == nil then
    return
  end
  sourceItemView:PlayPromptAnimation(targetItemView.transform.position)
  boardView:UpdateSwallowIndicator(self.m_itemModels.Target)
end

function BoardPromptSwallowItemsDisallowTap:Stop(boardView)
  local sourceItemView = boardView:GetItemView(self.m_itemModels.Source)
  if sourceItemView ~= nil then
    sourceItemView:StopPromptAnimation()
  end
  local selectedItemModel = boardView:GetSelectedItemModel()
  boardView:UpdateSwallowIndicator(selectedItemModel)
end

function BoardPromptSwallowItemsDisallowTap:_GetSwallowItemModels(boardView)
  local boardModel = boardView:GetModel()
  local selectedItemModel = boardView:GetSelectedItemModel()
  local preferredPairs = {}
  local otherPairs = {}
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    local itemSwallow = itemModel and itemModel:GetComponent(ItemSwallow)
    if itemSwallow ~= nil and not itemSwallow:AllowTap() then
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
              if otherPairs[unreachCount] == nil then
                otherPairs[unreachCount] = {}
              end
              table.insert(otherPairs[unreachCount], pair)
            end
          end
        end
      end
    end
  end
  if #preferredPairs ~= 0 then
    return Table.ListRandomSelectOne(preferredPairs)
  end
  local leastUnreachCount = math.maxinteger
  local leastUnreachCountGroup = {}
  for unreachCount, group in pairs(otherPairs) do
    if unreachCount < leastUnreachCount then
      leastUnreachCount = unreachCount
      leastUnreachCountGroup = group
    end
  end
  return Table.ListRandomSelectOne(leastUnreachCountGroup)
end

BoardPromptDigItem = setmetatable({}, BoardPrompt)
BoardPromptDigItem.__index = BoardPromptDigItem

function BoardPromptDigItem.Create()
  local prompt = setmetatable({}, BoardPromptDigItem)
  prompt:Init(BoardPromptType.DigItem)
  return prompt
end

function BoardPromptDigItem:CanStart(boardView)
  self.m_itemModel = self:_GetDigItemModel(boardView)
  if self.m_itemModel == nil then
    return false
  end
  return self.m_itemModel:GetComponent(ItemDig):CanDig()
end

function BoardPromptDigItem:Start(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemDig) then
      local itemView = boardView:GetItemView(itemModel)
      if itemView ~= nil and not itemView.gameObject:IsNull() then
        local digCom = itemView:GetComponent(ItemDig)
        if digCom then
          digCom:SetBreatheEffectActive(true)
        end
      end
    end
  end
end

function BoardPromptDigItem:Stop(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemDig) then
      local itemView = boardView:GetItemView(itemModel)
      if itemView ~= nil and not itemView.gameObject:IsNull() then
        local digCom = itemView:GetComponent(ItemDig)
        if digCom then
          digCom:SetBreatheEffectActive(false)
        end
      end
    end
  end
end

function BoardPromptDigItem:_GetDigItemModel(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemDig) then
      return itemModel
    end
  end
  return nil
end

BoardPromptDigCollect = setmetatable({}, BoardPrompt)
BoardPromptDigCollect.__index = BoardPromptDigCollect

function BoardPromptDigCollect.Create()
  local prompt = setmetatable({}, BoardPromptDigCollect)
  prompt:Init(BoardPromptType.DigCollectItem)
  return prompt
end

function BoardPromptDigCollect:CanStart(boardView)
  self.m_itemModel = self:_GetItemModel(boardView)
  return self.m_itemModel ~= nil
end

function BoardPromptDigCollect:Start(boardView)
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandTapEffect(itemView.transform.position)
end

function BoardPromptDigCollect:Stop(boardView)
  boardView:HideHandTapEffect()
end

function BoardPromptDigCollect:_GetItemModel(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and boardModel:IsTopCollectItem(itemModel:GetType()) then
      return itemModel
    end
  end
  return nil
end

BoardPromptDigCollectLowLevelItem = setmetatable({}, BoardPrompt)
BoardPromptDigCollectLowLevelItem.__index = BoardPromptDigCollectLowLevelItem

function BoardPromptDigCollectLowLevelItem.Create()
  local prompt = setmetatable({}, BoardPromptDigCollectLowLevelItem)
  prompt:Init(BoardPromptType.DigCollectLowLevelItem)
  return prompt
end

function BoardPromptDigCollectLowLevelItem:CanStart(boardView)
  self.m_itemModel = self:_GetItemModel(boardView)
  return self.m_itemModel ~= nil
end

function BoardPromptDigCollectLowLevelItem:Start(boardView)
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandTapEffect(itemView.transform.position)
end

function BoardPromptDigCollectLowLevelItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

function BoardPromptDigCollectLowLevelItem:_GetItemModel(boardView)
  local boardModel = boardView:GetModel()
  local activityDefinition = boardModel:GetActivityDefinition()
  local listUnMaxItems = {}
  for position in boardModel:GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil then
      local type = itemModel:GetType()
      local chainid = GM.ItemDataModel:GetChainId(type)
      if Table.Contain(activityDefinition.MainDigItemChainList, chainid) then
        return nil
      end
      local code = itemModel:GetCode()
      local split = StringUtil.rFindChar(code, "#")
      if split ~= nil then
        local innerCode = string.sub(code, split + 1)
        local chainid = GM.ItemDataModel:GetChainId(innerCode)
        if Table.Contain(activityDefinition.MainDigItemChainList, chainid) then
          return nil
        end
      end
      if string.find(type, activityDefinition.MainCollectItemChainPrefix) ~= nil and GM.ItemDataModel:GetChainLevel(type) < GM.ItemDataModel:GetChainMaxLevel(chainid) then
        table.insert(listUnMaxItems, itemModel)
      end
    end
  end
  local curDepth = boardModel:GetCurDepth()
  local initCodeMap, MaxDepth = boardModel:GetInitCodeMapAndMaxDepth()
  for x = 1, boardModel.HorizontalTiles do
    for y = curDepth, #initCodeMap do
      local type = initCodeMap[y][x]
      local innerCode = type
      local split = StringUtil.rFindChar(innerCode, "#")
      if split ~= nil then
        innerCode = string.sub(innerCode, split + 1)
      end
      local chainid = GM.ItemDataModel:GetChainId(innerCode)
      if Table.Contain(activityDefinition.MainDigItemChainList, chainid) then
        return nil
      end
    end
  end
  if 0 < #listUnMaxItems then
    return listUnMaxItems[1]
  end
  return nil
end

BoardPromptTapPortalItem = setmetatable({}, BoardPrompt)
BoardPromptTapPortalItem.__index = BoardPromptTapPortalItem

function BoardPromptTapPortalItem.Create()
  local prompt = setmetatable({}, BoardPromptTapPortalItem)
  prompt:Init(BoardPromptType.TapPortalItem)
  return prompt
end

function BoardPromptTapPortalItem:CanStart(boardView)
  local function filter(itemModel)
    local item = itemModel:GetComponent(ItemPortal)
    
    return itemModel ~= nil and itemModel:GetComponent(ItemPortal)
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels > 0
end

function BoardPromptTapPortalItem:Start(boardView)
  local itemModel = Table.ListRandomSelectOne(self.m_itemModels)
  local itemView = boardView:GetItemView(itemModel)
  boardView:ShowHandTapEffect(itemView.transform.position)
end

function BoardPromptTapPortalItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptTapRewardBubbleItem = setmetatable({}, BoardPrompt)
BoardPromptTapRewardBubbleItem.__index = BoardPromptTapRewardBubbleItem

function BoardPromptTapRewardBubbleItem.Create()
  local prompt = setmetatable({}, BoardPromptTapRewardBubbleItem)
  prompt:Init(BoardPromptType.TapRewardBubbleItem)
  return prompt
end

function BoardPromptTapRewardBubbleItem:CanStart(boardView)
  local function filter(itemModel)
    return itemModel:GetType() == ItemType.RewardBubble
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels > 0
end

function BoardPromptTapRewardBubbleItem:Start(boardView)
  local selectedModel
  if boardView:GetSelectedItemModel() and boardView:GetSelectedItemModel():GetType() == ItemType.RewardBubble then
    selectedModel = boardView:GetSelectedItemModel()
  else
    selectedModel = Table.ListRandomSelectOne(self.m_itemModels)
  end
  local itemView = boardView:GetItemView(selectedModel)
  boardView:ShowHandTapEffect(itemView.transform.position)
end

function BoardPromptTapRewardBubbleItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptFarmboardTapBlockKeyItem = setmetatable({}, BoardPrompt)
BoardPromptFarmboardTapBlockKeyItem.__index = BoardPromptFarmboardTapBlockKeyItem

function BoardPromptFarmboardTapBlockKeyItem.Create()
  local prompt = setmetatable({}, BoardPromptFarmboardTapBlockKeyItem)
  prompt:Init(BoardPromptType.FarmboardTapBlockKeyItem)
  return prompt
end

function BoardPromptFarmboardTapBlockKeyItem:CanStart(boardView)
  local boardModel = boardView:GetModel()
  local activityModel = GM.ActivityManager:GetStartedFarmboardActivity()
  if activityModel == nil then
    return false
  end
  local activityDefinition = FarmboardActivityDefinition[activityModel:GetType()]
  for position in boardModel:GetValidPositionIterator() do
    if boardModel:IsPositionInteractable(position) then
      local item = boardModel:GetItem(position)
      if item ~= nil and item:GetType() == activityDefinition.BlockKeyItem then
        self.m_blockKeyItemModel = item
        return true
      end
    end
  end
  return false
end

function BoardPromptFarmboardTapBlockKeyItem:Start(boardView)
  local itemView = boardView:GetItemView(self.m_blockKeyItemModel)
  boardView:ShowHandTapEffect(itemView.transform.position)
end

function BoardPromptFarmboardTapBlockKeyItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptFarmboardAnimalProduce = setmetatable({}, BoardPrompt)
BoardPromptFarmboardAnimalProduce.__index = BoardPromptFarmboardAnimalProduce

function BoardPromptFarmboardAnimalProduce.Create()
  local prompt = setmetatable({}, BoardPromptFarmboardAnimalProduce)
  prompt:Init(BoardPromptType.FarmboardAnimalProduce)
  return prompt
end

function BoardPromptFarmboardAnimalProduce:CanStart(boardView)
  local activityModel = GM.ActivityManager:GetStartedFarmboardActivity()
  if activityModel == nil then
    return false
  end
  if not activityModel:CanAnimalProduce() then
    return false
  end
  return not activityModel:GetBoardModel():IsBoardFull()
end

function BoardPromptFarmboardAnimalProduce:Start(boardView)
  local message = {
    Type = self.m_type
  }
  EventDispatcher.DispatchEvent(EEventType.FarmboardBoardPromptStarted, message)
end

function BoardPromptFarmboardAnimalProduce:Stop(boardView)
  local message = {
    Type = self.m_type
  }
  EventDispatcher.DispatchEvent(EEventType.FarmboardBoardPromptStopped, message)
end

BoardPromptFarmboardActivateAnimal = setmetatable({}, BoardPrompt)
BoardPromptFarmboardActivateAnimal.__index = BoardPromptFarmboardActivateAnimal

function BoardPromptFarmboardActivateAnimal.Create()
  local prompt = setmetatable({}, BoardPromptFarmboardActivateAnimal)
  prompt:Init(BoardPromptType.FarmboardActivateAnimal)
  return prompt
end

function BoardPromptFarmboardActivateAnimal:CanStart(boardView)
  local boardModel = boardView:GetModel()
  local activityModel = GM.ActivityManager:GetStartedFarmboardActivity()
  if activityModel == nil then
    return false
  end
  if activityModel:CanAnimalProduce() then
    return false
  end
  local activityDefinition = FarmboardActivityDefinition[activityModel:GetType()]
  for position in boardModel:GetValidPositionIterator() do
    local item = boardModel:GetItem(position)
    if item ~= nil and item:GetType() == activityDefinition.TopLevelToolChainItem then
      self.m_toolChainItem = item
      return true
    end
  end
  return false
end

function BoardPromptFarmboardActivateAnimal:Start(boardView)
  local message = {
    Type = self.m_type,
    ToolChainItem = self.m_toolChainItem
  }
  EventDispatcher.DispatchEvent(EEventType.FarmboardBoardPromptStarted, message)
end

function BoardPromptFarmboardActivateAnimal:Stop(boardView)
  local message = {
    Type = self.m_type
  }
  EventDispatcher.DispatchEvent(EEventType.FarmboardBoardPromptStopped, message)
end

BoardPromptFarmboardBlockProduce = setmetatable({}, BoardPrompt)
BoardPromptFarmboardBlockProduce.__index = BoardPromptFarmboardBlockProduce

function BoardPromptFarmboardBlockProduce.Create()
  local prompt = setmetatable({}, BoardPromptFarmboardBlockProduce)
  prompt:Init(BoardPromptType.FarmboardBlockProduce)
  return prompt
end

function BoardPromptFarmboardBlockProduce:CanStart(boardView)
  local activityModel = GM.ActivityManager:GetStartedFarmboardActivity()
  if activityModel == nil then
    return false
  end
  if activityModel:GetTokenNumber() < activityModel:GetBlockProduceTokenCount() then
    return false
  end
  return not activityModel:GetBoardModel():IsBoardFull()
end

function BoardPromptFarmboardBlockProduce:Start(boardView)
  local message = {
    Type = self.m_type
  }
  EventDispatcher.DispatchEvent(EEventType.FarmboardBoardPromptStarted, message)
end

function BoardPromptFarmboardBlockProduce:Stop(boardView)
  local message = {
    Type = self.m_type
  }
  EventDispatcher.DispatchEvent(EEventType.FarmboardBoardPromptStopped, message)
end

BoardPromptTapStickerboardClearToolItem = setmetatable({}, BoardPrompt)
BoardPromptTapStickerboardClearToolItem.__index = BoardPromptTapStickerboardClearToolItem

function BoardPromptTapStickerboardClearToolItem.Create()
  local prompt = setmetatable({}, BoardPromptTapStickerboardClearToolItem)
  prompt:Init(BoardPromptType.TapStickerboardClearToolItem)
  return prompt
end

function BoardPromptTapStickerboardClearToolItem:CanStart(boardView)
  local activityModel = GM.ActivityManager:GetStartedStickerboardActivity()
  if activityModel == nil or activityModel:HasRemovedAllObstacle() then
    return false
  end
  
  local function filter(itemModel)
    return itemModel ~= nil and itemModel:GetComponent(ItemClearTool)
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels > 0
end

function BoardPromptTapStickerboardClearToolItem:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    local aCom = a:GetComponent(ItemClearTool)
    local bCom = b:GetComponent(ItemClearTool)
    if aCom:IsSpecial() and not bCom:IsSpecial() then
      return true
    elseif not aCom:IsSpecial() and bCom:IsSpecial() then
      return false
    else
      return aCom:GetClearNum() > bCom:GetClearNum()
    end
  end)
  local itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(itemModel)
  if itemView ~= nil and not itemView.gameObject:IsNull() then
    boardView:ShowHandTapEffect(itemView.transform.position)
  end
end

function BoardPromptTapStickerboardClearToolItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptTapFogUnlockKeyItem = setmetatable({}, BoardPrompt)
BoardPromptTapFogUnlockKeyItem.__index = BoardPromptTapFogUnlockKeyItem

function BoardPromptTapFogUnlockKeyItem.Create()
  local prompt = setmetatable({}, BoardPromptTapFogUnlockKeyItem)
  prompt:Init(BoardPromptType.TapFogUnlockKeyItem)
  return prompt
end

function BoardPromptTapFogUnlockKeyItem:CanStart(boardView)
  local function filter(itemModel)
    if itemModel == nil then
      return false
    end
    local itemCommandCmp = itemModel:GetComponent(ItemCommand)
    if itemCommandCmp == nil then
      return false
    end
    return itemCommandCmp:GetCommand() == ItemCommandOperation.UnlockFog
  end
  
  self.m_itemModels = boardView:GetModel():FilterItems(filter)
  return #self.m_itemModels > 0
end

function BoardPromptTapFogUnlockKeyItem:Start(boardView)
  local itemModel = Table.ListRandomSelectOne(self.m_itemModels)
  local itemView = boardView:GetItemView(itemModel)
  if itemView ~= nil and not itemView.gameObject:IsNull() then
    boardView:ShowHandTapEffect(itemView.transform.position)
  end
end

function BoardPromptTapFogUnlockKeyItem:Stop(boardView)
  boardView:HideHandTapEffect()
end

BoardPromptEnergyBoostClickTip = setmetatable({}, BoardPrompt)
BoardPromptEnergyBoostClickTip.__index = BoardPromptEnergyBoostClickTip

function BoardPromptEnergyBoostClickTip.Create()
  local m = setmetatable({}, BoardPromptEnergyBoostClickTip)
  m:Init(BoardPromptType.MiniboardEnergyUseTap)
  return m
end

function BoardPromptEnergyBoostClickTip:CanStart(boardView)
  local boardModel = boardView:GetModel()
  if boardModel:GetEnergyModel() ~= nil and boardModel:GetEnergyModel():CanCostEnergyNum() and not boardModel:IsBoardFull() then
    return true
  end
  return false
end

function BoardPromptEnergyBoostClickTip:Start(boardView)
  boardView:ChangeEnergyGestureActive(true)
end

function BoardPromptEnergyBoostClickTip:Stop(boardView)
  boardView:ChangeEnergyGestureActive(false)
end
