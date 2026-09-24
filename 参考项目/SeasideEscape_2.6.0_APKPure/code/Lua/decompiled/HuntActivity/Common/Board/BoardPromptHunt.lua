local nStart = 0

local function autoIncrease()
  nStart = nStart + 1
  return nStart
end

BoardPromptHuntPriority = {
  Portal = autoIncrease(),
  CollectCloudKey = autoIncrease(),
  ClickCow = autoIncrease(),
  SwallowItems = autoIncrease(),
  MergeItems = autoIncrease(),
  CollectMaxLevelItem = autoIncrease(),
  Collect = autoIncrease(),
  PopCache = autoIncrease(),
  PopSpread = autoIncrease(),
  Bubble = autoIncrease(),
  DigItem = autoIncrease(),
  DigCollect = autoIncrease()
}
BoardPromptHuntMergeItems = setmetatable({}, BoardPromptMergeItems)
BoardPromptHuntMergeItems.__index = BoardPromptHuntMergeItems

function BoardPromptHuntMergeItems.Create()
  local prompt = setmetatable({}, BoardPromptHuntMergeItems)
  prompt:Init(BoardPromptHuntPriority.MergeItems)
  return prompt
end

function BoardPromptHuntMergeItems:CanStart(boardView)
  self.m_itemModels = self:GetPromptItemModels(boardView:GetModel())
  return self.m_itemModels ~= nil and #self.m_itemModels == 2
end

function BoardPromptHuntMergeItems:GetPromptItemModels(boardModel, filter)
  local mapGroups = {}
  local itemModel, itemType, huntModel
  for k, _ in pairs(HuntActivityDefinition) do
    local model = GM.ActivityManager:GetModel(k)
    if model:GetState() == ActivityState.Started then
      huntModel = model
      break
    end
  end
  for position in boardModel.GetValidPositionIterator() do
    itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and boardModel:CanMergeAll(itemModel) and (filter == nil or filter(itemModel)) then
      local itemSpread = itemModel:GetComponent(ItemSpread)
      if itemSpread == nil or not itemSpread:IsChestUsedOnce() then
        local itemCobweb = itemModel:GetComponent(ItemCobweb)
        local itemCollectable = itemModel:GetComponent(ItemCollectable)
        itemType = itemCobweb ~= nil and itemCobweb:GetInnerItemCode() or itemModel:GetType()
        if itemModel:GetMergedType() ~= nil then
          if mapGroups[itemType] == nil then
            mapGroups[itemType] = {
              Cobweb = {},
              Normal = {},
              Collectable = {}
            }
          end
          if itemCobweb ~= nil then
            table.insert(mapGroups[itemType].Cobweb, itemModel)
          elseif itemCollectable ~= nil then
            table.insert(mapGroups[itemType].Collectable, itemModel)
            table.insert(mapGroups[itemType].Normal, itemModel)
          else
            table.insert(mapGroups[itemType].Normal, itemModel)
          end
        elseif huntModel and StringUtil.StartWith(itemType, ItemCodePrefix.Hunt) then
          itemType = huntModel:GetItemCodeByLevel(GM.ItemDataModel:GetChainLevel(itemType))
          if mapGroups[itemType] == nil then
            mapGroups[itemType] = {
              Cobweb = {},
              Normal = {},
              Collectable = {}
            }
          end
          if itemCobweb ~= nil then
            table.insert(mapGroups[itemType].Cobweb, itemModel)
          elseif itemCollectable ~= nil then
            table.insert(mapGroups[itemType].Collectable, itemModel)
            table.insert(mapGroups[itemType].Normal, itemModel)
          else
            table.insert(mapGroups[itemType].Normal, itemModel)
          end
        end
      end
    end
  end
  local arrWithCobweb = {}
  local arrWithoutCobweb = {}
  for type, group in pairs(mapGroups) do
    if #group.Collectable > 0 and #group.Cobweb > 0 and #group.Collectable + #group.Cobweb >= 2 then
      return {
        Table.ListRandomSelectOne(group.Cobweb),
        Table.ListRandomSelectOne(group.Collectable)
      }
    end
    if #group.Collectable >= 2 then
      return Table.ListRandomSelectN(group.Collectable, 2)
    end
    if #group.Normal > 0 and #group.Normal + #group.Cobweb >= 2 then
      if #group.Cobweb > 0 then
        arrWithCobweb[#arrWithCobweb + 1] = {
          Table.ListRandomSelectOne(group.Cobweb),
          Table.ListRandomSelectOne(group.Normal)
        }
      else
        arrWithoutCobweb[#arrWithoutCobweb + 1] = Table.ListRandomSelectN(group.Normal, 2)
      end
    end
  end
  if 0 < #arrWithCobweb then
    return Table.ListRandomSelectOne(arrWithCobweb)
  elseif 0 < #arrWithoutCobweb then
    return Table.ListRandomSelectOne(arrWithoutCobweb)
  end
  return nil
end

BoardPormptHuntPopCache = setmetatable({}, BoardPrompt)
BoardPormptHuntPopCache.__index = BoardPormptHuntPopCache

function BoardPormptHuntPopCache.Create()
  local prompt = setmetatable({}, BoardPormptHuntPopCache)
  prompt:Init(BoardPromptHuntPriority.PopCache)
  return prompt
end

function BoardPormptHuntPopCache:CanStart(boardView)
  self.m_cacheRoot = boardView:GetCacheRoot()
  return self.m_cacheRoot:IsShowing() and self.m_cacheRoot:CanPopItem() and not boardView:GetModel():IsBoardFull()
end

function BoardPormptHuntPopCache:AutoDo(boardView)
  self.m_cacheRoot:OnClicked()
end

function BoardPormptHuntPopCache:Start(boardView)
  boardView:GetCacheRoot():ShowHandEffect(true)
end

function BoardPormptHuntPopCache:Stop(boardView)
  boardView:GetCacheRoot():ShowHandEffect(false)
end

BoardPormptHuntPopSpread = setmetatable({}, BoardPrompt)
BoardPormptHuntPopSpread.__index = BoardPormptHuntPopSpread

function BoardPormptHuntPopSpread.Create(activityModel)
  local prompt = setmetatable({
    m_actModel = activityModel,
    m_actType = activityModel:GetType()
  }, BoardPormptHuntPopSpread)
  prompt:Init(BoardPromptHuntPriority.PopSpread)
  return prompt
end

function BoardPormptHuntPopSpread:CanStart(boardView)
  local doubleEnergyModel = self.m_actModel:GetDoubleEnergyModel()
  local cost, levelSpan = 1, 0
  if doubleEnergyModel ~= nil then
    levelSpan = doubleEnergyModel:GetMaxOpenEnergyMultiple()
    cost = 2 ^ levelSpan
  end
  return self.m_actModel:HasCachePd() and cost <= self.m_actModel:GetActivityTokenNumber() and not boardView:GetModel():IsBoardFull()
end

function BoardPormptHuntPopSpread:AutoDo(boardView)
  local view = GM.UIManager:GetOpenedViewByName(HuntActivityDefinition[self.m_actType].MainWindowPrefabName)
  view:OnSpreadButtonClicked()
end

function BoardPormptHuntPopSpread:Start(boardView)
  local view = GM.UIManager:GetOpenedViewByName(HuntActivityDefinition[self.m_actType].MainWindowPrefabName)
  if view and view.ShowSpreadHandEffect then
    view:ShowSpreadHandEffect(true)
  end
end

function BoardPormptHuntPopSpread:Stop(boardView)
  local view = GM.UIManager:GetOpenedViewByName(HuntActivityDefinition[self.m_actType].MainWindowPrefabName)
  if view and view.ShowSpreadHandEffect then
    view:ShowSpreadHandEffect(false)
  end
end

BoardPromptHuntCollect = setmetatable({}, BoardPrompt)
BoardPromptHuntCollect.__index = BoardPromptHuntCollect

function BoardPromptHuntCollect.Create()
  local prompt = setmetatable({}, BoardPromptHuntCollect)
  prompt:Init(BoardPromptHuntPriority.Collect)
  return prompt
end

function BoardPromptHuntCollect:CanStart(boardView)
  local boardModel = boardView:GetModel()
  
  local function filter(itemModel)
    if itemModel:GetComponent(ItemCollectable) ~= nil then
      return GM.ItemDataModel:IsItemMaxLevel(itemModel:GetCode())
    end
    return false
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptHuntCollect:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptHuntCollect:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

function BoardPromptHuntCollect:Stop(boardView)
  boardView:HideHandEffect()
end

BoardPromptHuntBubble = setmetatable({}, BoardPromptHuntCollect)
BoardPromptHuntBubble.__index = BoardPromptHuntBubble

function BoardPromptHuntBubble.Create()
  local prompt = setmetatable({}, BoardPromptHuntBubble)
  prompt:Init(BoardPromptHuntPriority.Bubble)
  return prompt
end

function BoardPromptHuntBubble:CanStart(boardView)
  local boardModel = boardView:GetModel()
  
  local function filter(itemModel)
    return itemModel:GetComponent(ItemBubble) ~= nil
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptHuntBubble:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptHuntBubble:AutoDo(boardView)
  boardView:GetModel():BreakItem(self.m_itemModel)
end

BoardPromptHuntMaxLevelItem = setmetatable({}, BoardPromptHuntCollect)
BoardPromptHuntMaxLevelItem.__index = BoardPromptHuntMaxLevelItem

function BoardPromptHuntMaxLevelItem.Create(activityType)
  local prompt = setmetatable({}, BoardPromptHuntMaxLevelItem)
  prompt:Init(activityType, BoardPromptHuntPriority.CollectMaxLevelItem)
  return prompt
end

function BoardPromptHuntMaxLevelItem:Init(activityType, type)
  BoardPromptHuntCollect.Init(self, type)
  self.m_model = GM.ActivityManager:GetModel(activityType)
end

function BoardPromptHuntMaxLevelItem:CanStart(boardView)
  local boardModel = boardView:GetModel()
  if boardModel:IsBoardFull() then
    return false
  end
  
  local function filter(itemModel)
    if not self.m_model then
      return false
    end
    if boardModel:IsTileLock(itemModel:GetPosition()) then
      return false
    end
    local itemType = itemModel:GetType()
    if itemType ~= ItemType.Bubble and (self.m_model:GetLevelByItemCode(itemType) == self.m_model:GetMergeLength(itemType) or GM.ItemDataModel:IsItemMaxLevel(itemType)) then
      local itemSpread = itemModel:GetComponent(ItemSpread)
      if itemSpread then
        local arrCw = itemSpread:GetCodeWeightPairs()
        for _, v in ipairs(arrCw) do
          if v.Weight > 0 then
            return true
          end
        end
      end
    end
    return false
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  local extraPdItems = boardModel:GetExtraPdItems() or {}
  local itemSpread
  for _, itemModel in ipairs(extraPdItems) do
    itemSpread = itemModel:GetComponent(ItemSpread)
    if itemSpread and not itemSpread:IsLockedBySwallow() and itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() ~= 0 then
      table.insert(self.m_itemModels, itemModel)
    end
    if itemModel:GetComponent(ItemHuntSpread) ~= nil and 0 < self.m_model:GetActivityTokenNumber() then
      local cacheRoot = boardView:GetCacheRoot()
      if not cacheRoot:IsShowing() or not cacheRoot:CanPopItem() then
        table.insert(self.m_itemModels, itemModel)
      end
    end
  end
  return #self.m_itemModels ~= 0
end

function BoardPromptHuntMaxLevelItem:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    local idA = tonumber(a:GetId())
    local idB = tonumber(b:GetId())
    if idA == nil and idB == nil then
      return a:GetId() < b:GetId()
    elseif idA == nil then
      return false
    elseif idB == nil then
      return true
    else
      return idA < idB
    end
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  if itemView ~= nil then
    boardView:ShowHandEffect(itemView.transform.position)
  else
    GM.BIManager:LogErrorInfo(EBIProjectType.HuntPromptItemViewError, "BoardPromptHuntMaxLevelItem error, itemCode: " .. self.m_itemModel:GetCode())
  end
end

BoardPromptHuntPortal = setmetatable({}, BoardPrompt)
BoardPromptHuntPortal.__index = BoardPromptHuntPortal

function BoardPromptHuntPortal.Create()
  local prompt = setmetatable({}, BoardPromptHuntPortal)
  prompt:Init(BoardPromptHuntPriority.Portal)
  return prompt
end

function BoardPromptHuntPortal:CanStart(boardView)
  local boardModel = boardView:GetModel()
  
  local function filter(itemModel)
    local itemPortal = itemModel:GetComponent(ItemPortal)
    return itemPortal ~= nil and itemPortal:GetState() == EItemPortalState.Open
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  return #self.m_itemModels ~= 0 and not GM.TutorialModel:HasAnyStrongTutorialOngoing() and GM.TutorialModel:IsTutorialFinished(ETutorialId.HuntPhase) and not TutorialHelper.IsMaskShow()
end

function BoardPromptHuntPortal:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptHuntPortal:Stop(boardView)
  boardView:HideHandEffect()
end

BoardPromptHuntSwallowItems = setmetatable({}, BoardPromptSwallowItems)
BoardPromptHuntSwallowItems.__index = BoardPromptHuntSwallowItems

function BoardPromptHuntSwallowItems.Create()
  local prompt = setmetatable({}, BoardPromptHuntSwallowItems)
  prompt:Init(BoardPromptHuntPriority.SwallowItems)
  return prompt
end

function BoardPromptHuntSwallowItems:Start(boardView)
  local sourceItemView = boardView:GetItemView(self.m_itemModels.Source)
  local targetItemView = boardView:GetItemView(self.m_itemModels.Target)
  if sourceItemView == nil or targetItemView == nil then
    return
  end
  local targetpos = targetItemView.transform.position
  sourceItemView:PlayPromptAnimation(targetpos)
  boardView:ShowHandEffect(targetpos)
end

function BoardPromptHuntSwallowItems:Stop(boardView)
  local itemView = boardView:GetItemView(self.m_itemModels.Source)
  if itemView ~= nil then
    itemView:StopPromptAnimation()
  end
  boardView:HideHandEffect()
end

function BoardPromptHuntSwallowItems:_GetSwallowItemModels(boardView)
  local boardModel = boardView:GetModel()
  if not boardModel or not boardModel.GetExtraPdItems then
    return
  end
  local selectedItemModel = boardView:GetSelectedItemModel()
  local itemAllReachedMap = {}
  local preferredPairs = {}
  local generalPairs = {}
  local itemSwallow, unreachCount
  local extraPdItems = boardModel:GetExtraPdItems() or {}
  if not Table.IsEmpty(extraPdItems) then
    for _, itemModel in pairs(extraPdItems) do
      itemSwallow = itemModel:GetComponent(ItemSwallow)
      if itemSwallow then
        local allReached = true
        for _, info in ipairs(itemSwallow:GetSwallowInfo()) do
          unreachCount = info.Count - info.Swallowed
          if unreachCount ~= 0 then
            local function filter(itemModel)
              return itemModel:GetCode() == info.Code and not boardModel:IsTileLock(itemModel:GetPosition())
            end
            
            local sourceItems = boardModel:FilterItems(filter)
            for _, sourceItem in ipairs(sourceItems) do
              local pair = {Source = sourceItem, Target = itemModel}
              if itemModel == selectedItemModel then
                table.insert(preferredPairs, pair)
              else
                table.insert(generalPairs, pair)
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
  else
    for position in boardModel.GetValidPositionIterator() do
      local itemModel = boardModel:GetItem(position)
      local itemSwallow = itemModel and itemModel:GetComponent(ItemSwallow)
      local itemSwallowChain = itemModel and itemModel:GetComponent(ItemSwallowChain)
      if itemSwallowChain ~= nil then
        local function filter(itemModel)
          return itemSwallowChain:CanSwallow(itemModel)
        end
        
        local sourceItems = boardModel:FilterItems(filter)
        for _, sourceItem in ipairs(sourceItems) do
          local pair = {Source = sourceItem, Target = itemModel}
          if itemModel == selectedItemModel then
            table.insert(preferredPairs, pair)
          else
            table.insert(generalPairs, pair)
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
                  table.insert(generalPairs, pair)
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
  end
  local preferredAllReachPairs = {}
  local allReachPairs = {}
  for i = 1, #preferredPairs do
    if itemAllReachedMap[preferredPairs[i].Target] then
      preferredAllReachPairs[#preferredAllReachPairs + 1] = preferredPairs[i]
    end
  end
  for i = 1, #generalPairs do
    if itemAllReachedMap[generalPairs[i].Target] then
      allReachPairs[#allReachPairs + 1] = generalPairs[i]
    end
  end
  if 0 < #preferredAllReachPairs or 0 < #allReachPairs then
    local selectedPair = Table.ListRandomSelectOne(preferredAllReachPairs) or Table.ListRandomSelectOne(allReachPairs)
    selectedPair.AllReached = true
    return selectedPair
  end
  local selectedPair = Table.ListRandomSelectOne(preferredPairs) or Table.ListRandomSelectOne(generalPairs)
  if selectedPair ~= nil then
    selectedPair.AllReached = itemAllReachedMap[selectedPair.Target]
  end
  return selectedPair
end

BoardPromptHuntDigItem = setmetatable({}, BoardPrompt)
BoardPromptHuntDigItem.__index = BoardPromptHuntDigItem

function BoardPromptHuntDigItem.Create()
  local prompt = setmetatable({}, BoardPromptHuntDigItem)
  prompt:Init(BoardPromptHuntPriority.DigItem)
  return prompt
end

function BoardPromptHuntDigItem:CanStart(boardView)
  self.m_itemModel = self:_GetDigItemModel(boardView)
  if self.m_itemModel == nil then
    return false
  end
  return self.m_itemModel:GetComponent(ItemDig):CanDig()
end

function BoardPromptHuntDigItem:Start(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel.GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemDig) then
      local itemView = boardView:GetItemView(itemModel)
      itemView:GetComponent(ItemDigView):SetBreatheEffectActive(true)
    end
  end
end

function BoardPromptHuntDigItem:Stop(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel.GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemDig) then
      local itemView = boardView:GetItemView(itemModel)
      itemView:GetComponent(ItemDigView):SetBreatheEffectActive(false)
    end
  end
end

function BoardPromptHuntDigItem:_GetDigItemModel(boardView)
  local boardModel = boardView:GetModel()
  for position in boardModel.GetValidPositionIterator() do
    local itemModel = boardModel:GetItem(position)
    if itemModel ~= nil and itemModel:GetComponent(ItemDig) then
      return itemModel
    end
  end
  return nil
end

function BoardPromptHuntDigItem:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

BoardPromptHuntDigCollect = setmetatable({}, BoardPrompt)
BoardPromptHuntDigCollect.__index = BoardPromptHuntDigCollect

function BoardPromptHuntDigCollect.Create()
  local prompt = setmetatable({}, BoardPromptHuntDigCollect)
  prompt:Init(BoardPromptHuntPriority.DigCollect)
  return prompt
end

function BoardPromptHuntDigCollect:CanStart(boardView)
  self.m_itemModel = self:_GetItemModel(boardView)
  return self.m_itemModel ~= nil
end

function BoardPromptHuntDigCollect:Start(boardView)
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptHuntDigCollect:Stop(boardView)
  boardView:HideHandTapEffect()
end

function BoardPromptHuntDigCollect:_GetItemModel(boardView)
  return nil
end

function BoardPromptHuntDigCollect:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

BoardPromptHuntCollectCloudKey = setmetatable({}, BoardPromptHuntCollect)
BoardPromptHuntCollectCloudKey.__index = BoardPromptHuntCollectCloudKey

function BoardPromptHuntCollectCloudKey.Create()
  local prompt = setmetatable({}, BoardPromptHuntCollectCloudKey)
  prompt:Init(BoardPromptHuntPriority.CollectCloudKey)
  return prompt
end

function BoardPromptHuntCollectCloudKey:Init(type)
  BoardPromptHuntCollect.Init(self, type)
end

function BoardPromptHuntCollectCloudKey:CanStart(boardView)
  local boardModel = boardView:GetModel()
  
  local function filter(itemModel)
    if boardModel:IsTileLock(itemModel:GetPosition()) then
      return false
    end
    return boardModel:IsCurrentNeedKeyType(itemModel:GetType())
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptHuntCollectCloudKey:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    local idA = tonumber(a:GetId())
    local idB = tonumber(b:GetId())
    if idA == nil and idB == nil then
      return a:GetId() < b:GetId()
    elseif idA == nil then
      return false
    elseif idB == nil then
      return true
    else
      return idA < idB
    end
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  if itemView ~= nil then
    boardView:ShowHandEffect(itemView.transform.position)
  else
    GM.BIManager:LogErrorInfo(EBIProjectType.HuntPromptItemViewError, "BoardPromptHuntCollectCloudKey error, itemCode: " .. self.m_itemModel:GetCode())
  end
end

BoardPromptHuntClickCow = setmetatable({}, BoardPromptHuntCollect)
BoardPromptHuntClickCow.__index = BoardPromptHuntClickCow

function BoardPromptHuntClickCow.Create()
  local prompt = setmetatable({}, BoardPromptHuntClickCow)
  prompt:Init(BoardPromptHuntPriority.ClickCow)
  return prompt
end

function BoardPromptHuntClickCow:Init(type)
  BoardPromptHuntCollect.Init(self, type)
end

function BoardPromptHuntClickCow:CanStart(boardView)
  local boardModel = boardView:GetModel()
  if boardModel:IsBoardFull() then
    return false
  end
  self.m_itemModels = {}
  local extraPdItems = boardModel:GetExtraPdItems() or {}
  local itemSpread
  for _, itemModel in ipairs(extraPdItems) do
    itemSpread = itemModel:GetComponent(ItemSpread)
    if itemSpread and not itemSpread:IsLockedBySwallow() and itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() ~= 0 then
      table.insert(self.m_itemModels, itemModel)
    end
  end
  return #self.m_itemModels ~= 0
end

function BoardPromptHuntClickCow:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    local idA = tonumber(a:GetId())
    local idB = tonumber(b:GetId())
    if idA == nil and idB == nil then
      return a:GetId() < b:GetId()
    elseif idA == nil then
      return false
    elseif idB == nil then
      return true
    else
      return idA < idB
    end
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  if itemView ~= nil then
    boardView:ShowHandEffect(itemView.transform.position)
  else
    GM.BIManager:LogErrorInfo(EBIProjectType.HuntPromptItemViewError, "BoardPromptHuntClickCow error, itemCode: " .. self.m_itemModel:GetCode())
  end
end
