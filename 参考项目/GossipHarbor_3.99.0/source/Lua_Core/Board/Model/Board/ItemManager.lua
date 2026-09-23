ItemManager = {}
ItemManager.__index = ItemManager
local ItemRowTable = {}
local ItemColumnTable = {}

function ItemManager.Create(dbTable, boardModel)
  local itemManager = setmetatable({}, ItemManager)
  itemManager:Init(dbTable, boardModel)
  return itemManager
end

function ItemManager:Init(dbTable, boardModel)
  self.m_dbTable = dbTable
  self.m_boardModel = boardModel
  self.m_idGenerator = DBIdGenerator.Create()
  self.m_itemTable = {}
end

function ItemManager:OnSyncDataFinished()
  for id, data in pairs(self.m_dbTable:GetValues()) do
    data.id = id
    local item = ItemModelFactory.CreateWithData(self.m_boardModel, data)
    local createSuccess = false
    if item ~= nil then
      local itemBubble = item:GetComponent(ItemBubble)
      if itemBubble == nil or GM.ItemDataModel:GetModelConfig(itemBubble:GetInnerItemCode(), true) ~= nil then
        self.m_itemTable[id] = item
        createSuccess = true
      end
    end
    if not createSuccess then
      GM.BIManager:LogAction(EBIType.ItemNotFound, "IM itemCode:" .. (IsString(data.codeStr) and data.codeStr or "nil"))
      self.m_dbTable:Remove(id)
    elseif self.m_boardModel == GM.MainBoardModel then
      GM.ItemDataModel:SetUnlocked(item:GetType())
    end
  end
end

function ItemManager:ResetVar()
  self.m_itemTable = {}
end

function ItemManager:GetItem(id)
  return self.m_itemTable[id]
end

function ItemManager:SetItem(item)
  local id = item:GetId()
  if id == nil then
    id = self.m_idGenerator:Generate()
    while self.m_itemTable[id] ~= nil do
      id = self.m_idGenerator:Generate()
    end
    item:SetId(id)
  end
  if self.m_itemTable[id] == nil then
    self.m_itemTable[id] = item
  end
  self:_FillDBTable(item, ItemColumnTable)
  ItemRowTable[id] = ItemColumnTable
  self.m_dbTable:BatchSet(ItemRowTable)
  ItemRowTable[id] = nil
  if ItemColumnTable.spreadStartTimer == nil then
    self.m_dbTable:Remove(id, "spreadStartTimer")
  end
end

function ItemManager:RemoveItem(id)
  self.m_itemTable[id] = nil
  self.m_dbTable:Remove(id)
end

function ItemManager:GetIdGenerator()
  return self.m_idGenerator
end

function ItemManager:_FillDBTable(item, DBTable)
  DBTable.codeStr = item:GetCode()
  DBTable.spreadState = -1
  DBTable.spreadStartTimer = -1
  DBTable.spreadItemRestNumber = -1
  DBTable.spreadStorageRestNumber = -1
  DBTable.spreadCount = -1
  DBTable.spreadCodeWeightPairs = ""
  DBTable.bubbleStartTimer = -1
  DBTable.transformStartTimer = -1
  DBTable.swallowInfo = ""
  DBTable.accelerateStartTimer = -1
  DBTable.accelerateTime = -1
  DBTable.accelerateLastUpdateTime = -1
  local itemSpread = item:GetComponent(ItemSpread)
  if itemSpread ~= nil then
    DBTable.spreadState = itemSpread:GetState()
    DBTable.spreadStartTimer = itemSpread:GetStartTimer()
    DBTable.spreadItemRestNumber = itemSpread:GetItemRestNumber()
    DBTable.spreadStorageRestNumber = itemSpread:GetStorageRestNumber()
    DBTable.spreadCount = itemSpread:GetSpreadCount()
    DBTable.spreadCodeWeightPairs = ItemUtility.CodeWeightPairsToString(itemSpread:GetCodeWeightPairs())
  end
  local itemTransform = item:GetComponent(ItemTransform)
  if itemTransform ~= nil then
    DBTable.transformStartTimer = itemTransform:GetStartTimer()
  end
  local itemSwallow = item:GetComponent(ItemSwallow)
  if itemSwallow ~= nil then
    DBTable.swallowInfo = ItemSwallow.SwallowInfoToString(itemSwallow:GetSwallowInfo())
  end
  local itemBubble = item:GetComponent(ItemBubble)
  if itemBubble ~= nil then
    DBTable.bubbleStartTimer = itemBubble:GetStartTimer()
  end
  local itemAccelerate = item:GetComponent(ItemAccelerate)
  if itemAccelerate ~= nil then
    DBTable.accelerateStartTimer = itemAccelerate:GetStartTimer()
  end
  local itemAccelerateTime = item:GetComponent(ItemAccelerateTime)
  if itemAccelerateTime ~= nil then
    DBTable.accelerateTime = itemAccelerateTime:GetTime()
    DBTable.accelerateLastUpdateTime = itemAccelerateTime:GetLastUpdateTime()
  end
  local itemSplit = item:GetComponent(ItemSplit)
  if itemSplit ~= nil then
    DBTable.splitUseCount = itemSplit:GetSplitUseCount()
  end
end

function ItemManager:IsEmpty()
  return Table.IsEmpty(self.m_itemTable)
end
