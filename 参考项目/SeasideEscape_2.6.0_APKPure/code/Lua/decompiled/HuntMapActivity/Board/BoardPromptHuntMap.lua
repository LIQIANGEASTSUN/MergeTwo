local nStart = 0

local function autoIncrease()
  nStart = nStart + 1
  return nStart
end

BoardPromptHuntMapPriority = {
  MergeItems = autoIncrease(),
  CollectMaxLevelItem = autoIncrease(),
  Collect = autoIncrease(),
  PopCache = autoIncrease(),
  Bubble = autoIncrease()
}
BoardPromptHuntMapMergeItems = setmetatable({}, BoardPromptMergeItems)
BoardPromptHuntMapMergeItems.__index = BoardPromptHuntMapMergeItems

function BoardPromptHuntMapMergeItems.Create()
  local prompt = setmetatable({}, BoardPromptHuntMapMergeItems)
  prompt:Init(BoardPromptHuntMapPriority.MergeItems)
  return prompt
end

function BoardPromptHuntMapMergeItems:CanStart(boardView)
  self.m_itemModels = self:GetPromptItemModels(boardView:GetModel())
  return self.m_itemModels ~= nil and #self.m_itemModels == 2
end

function BoardPromptHuntMapMergeItems:GetPromptItemModels(boardModel, filter)
  local mapGroups = {}
  local itemModel, itemType, huntModel
  for k, _ in pairs(HuntMapActivityDefinition) do
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

BoardPormptHuntMapPopCache = setmetatable({}, BoardPrompt)
BoardPormptHuntMapPopCache.__index = BoardPormptHuntMapPopCache

function BoardPormptHuntMapPopCache.Create()
  local prompt = setmetatable({}, BoardPormptHuntMapPopCache)
  prompt:Init(BoardPromptHuntMapPriority.PopCache)
  return prompt
end

function BoardPormptHuntMapPopCache:CanStart(boardView)
  self.m_cacheRoot = boardView:GetCacheRoot()
  return self.m_cacheRoot:IsShowing() and not boardView:GetModel():IsBoardFull()
end

function BoardPormptHuntMapPopCache:AutoDo(boardView)
  self.m_cacheRoot:OnClicked()
end

function BoardPormptHuntMapPopCache:Start(boardView)
  boardView:GetCacheRoot():ShowHandEffect(true)
end

function BoardPormptHuntMapPopCache:Stop(boardView)
  boardView:GetCacheRoot():ShowHandEffect(false)
end

BoardPromptHuntMapCollect = setmetatable({}, BoardPrompt)
BoardPromptHuntMapCollect.__index = BoardPromptHuntMapCollect

function BoardPromptHuntMapCollect.Create()
  local prompt = setmetatable({}, BoardPromptHuntMapCollect)
  prompt:Init(BoardPromptHuntMapPriority.Collect)
  return prompt
end

function BoardPromptHuntMapCollect:CanStart(boardView)
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

function BoardPromptHuntMapCollect:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptHuntMapCollect:AutoDo(boardView)
  boardView:GetModel():TapItem(self.m_itemModel)
end

function BoardPromptHuntMapCollect:Stop(boardView)
  boardView:HideHandEffect()
end

BoardPromptHuntMapBubble = setmetatable({}, BoardPromptHuntMapCollect)
BoardPromptHuntMapBubble.__index = BoardPromptHuntMapBubble

function BoardPromptHuntMapBubble.Create()
  local prompt = setmetatable({}, BoardPromptHuntMapBubble)
  prompt:Init(BoardPromptHuntMapPriority.Bubble)
  return prompt
end

function BoardPromptHuntMapBubble:CanStart(boardView)
  local boardModel = boardView:GetModel()
  
  local function filter(itemModel)
    return itemModel:GetComponent(ItemBubble) ~= nil
  end
  
  self.m_itemModels = boardModel:FilterItems(filter)
  return #self.m_itemModels ~= 0
end

function BoardPromptHuntMapBubble:Start(boardView)
  table.sort(self.m_itemModels, function(a, b)
    return tonumber(a:GetId()) < tonumber(b:GetId())
  end)
  self.m_itemModel = self.m_itemModels[1]
  local itemView = boardView:GetItemView(self.m_itemModel)
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptHuntMapBubble:AutoDo(boardView)
  boardView:GetModel():BreakItem(self.m_itemModel)
end

BoardPromptHuntMapMaxLevelItem = setmetatable({}, BoardPromptHuntMapCollect)
BoardPromptHuntMapMaxLevelItem.__index = BoardPromptHuntMapMaxLevelItem

function BoardPromptHuntMapMaxLevelItem.Create(activityType)
  local prompt = setmetatable({}, BoardPromptHuntMapMaxLevelItem)
  prompt:Init(activityType, BoardPromptHuntMapPriority.CollectMaxLevelItem)
  return prompt
end

function BoardPromptHuntMapMaxLevelItem:Init(activityType, type)
  BoardPromptHuntMapCollect.Init(self, type)
  self.m_model = GM.ActivityManager:GetModel(activityType)
end

function BoardPromptHuntMapMaxLevelItem:CanStart(boardView)
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

function BoardPromptHuntMapMaxLevelItem:Start(boardView)
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
    GM.BIManager:LogErrorInfo(EBIProjectType.HuntPromptItemViewError, "BoardPromptHuntMapMaxLevelItem error, itemCode: " .. self.m_itemModel:GetCode())
  end
end
