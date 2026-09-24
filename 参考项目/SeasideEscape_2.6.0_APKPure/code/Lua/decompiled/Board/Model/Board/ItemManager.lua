ItemManager = {}
ItemManager.__index = ItemManager
local ItemRowTable = {}
local ItemColumnTable = {}

function ItemManager.Create(dbTable, boardModel, idGenerator)
  local itemManager = setmetatable({}, ItemManager)
  itemManager:Init(dbTable, boardModel, idGenerator)
  return itemManager
end

function ItemManager:Init(dbTable, boardModel, idGenerator)
  self.m_dbTable = dbTable
  self.m_boardModel = boardModel
  self.m_idGenerator = idGenerator or DBIdGenerator.Create()
  self.m_itemTable = {}
end

function ItemManager:Destroy()
  if not Table.IsEmpty(self.m_itemTable) then
    for _, itemModel in pairs(self.m_itemTable) do
      itemModel:Destroy()
    end
  end
end

function ItemManager:ResetData()
  self.m_itemTable = {}
end

function ItemManager:OnSyncDataFinished()
  self:ResetData()
  for id, data in pairs(self.m_dbTable:GetValues()) do
    data.id = id
    local code = ItemUtility.CheckData(data.code, EItemUnlockState.Unlocked)
    if code == nil then
      self.m_itemTable[id] = ItemModelFactory.CreateWithData(self.m_boardModel, data)
    else
      self.m_itemTable[id] = ItemModelFactory.CreateWithCode(self.m_boardModel, nil, code, false, true)
      self.m_itemTable[id].m_id = id
      self:SetItem(self.m_itemTable[id])
    end
    local spread = self.m_itemTable[id]:GetComponent(ItemSpread)
    if spread and spread:IsErrorItem() then
      self.m_itemTable[id] = nil
    end
  end
end

function ItemManager:GetAllPdItemsFromDB()
  local count = 0
  local arrPdItems = {}
  for _, data in pairs(self.m_dbTable:GetValues()) do
    if StringUtil.StartWith(data.code, ItemCodePrefix.MainGenerator) then
      count = count + 1
      arrPdItems[count] = data.code
    end
  end
  return arrPdItems
end

function ItemManager:GetItem(id)
  return self.m_itemTable[id]
end

function ItemManager:GetAllItems()
  return self.m_itemTable
end

function ItemManager:SetItem(item)
  local id = item:GetId()
  if id == nil then
    id = self.m_idGenerator:Generate()
    item:SetId(id)
  end
  if self.m_itemTable[id] == nil then
    self.m_itemTable[id] = item
  end
  self:_FillDBTable(item, ItemColumnTable)
  ItemRowTable[id] = ItemColumnTable
  self.m_dbTable:BatchSet(ItemRowTable)
  ItemRowTable[id] = nil
  for k, _ in pairs(ItemColumnTable) do
    ItemColumnTable[k] = nil
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
  item:ToSerialization(DBTable)
  item:DispatchComponentEvent("ToSerialization", DBTable)
end
