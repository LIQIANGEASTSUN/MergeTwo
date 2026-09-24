EFunction = {
  Inventory = "inventory",
  Shop = "shop",
  Bubble = "bubble",
  SpreadExtra = "spreadExtra",
  ShopItem = "shopItem",
  Discoveries = "discoveries",
  DailyTask = "dailyTaskLevel",
  SellItem = "sellingProtectLevel",
  NoticePopup = "noticePopupLevel",
  Notice = "notice",
  ItemUnlock = "itemUnlock"
}
OpenFunctionModel = {}
OpenFunctionModel.__index = OpenFunctionModel

function OpenFunctionModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.OpenFunc)
  EventDispatcher.AddListener(EEventType.LevelUp, self, self._CheckOpen)
end

function OpenFunctionModel:LoadFileConfig()
  self.m_mapFunctionConfig = {}
  self.m_mapFunctionConfigParam = {}
  local config = GM.ConfigModel:GetLocalConfig(LocalConfigKey.FunctionEnable)
  for _, data in ipairs(config) do
    self.m_mapFunctionConfig[data.name] = tonumber(data.enable)
    self.m_mapFunctionConfigParam[data.name] = data.param
  end
end

function OpenFunctionModel:LateInit()
  self:_CheckOpen()
end

function OpenFunctionModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function OpenFunctionModel:_IsFunctionEnable(key)
  return self.m_mapFunctionConfig[key] == 1
end

function OpenFunctionModel:IsFunctionOpen(key)
  if not self:_IsFunctionEnable(key) then
    return false
  end
  return self.m_dbTable:GetValue(key, "state")
end

function OpenFunctionModel:_CheckOpen()
  local level = GM.LevelModel:GetCurrentLevel()
  for k, v in pairs(EFunction) do
    if self:_IsFunctionEnable(v) and not self.m_dbTable:GetValue(v, "state") and level >= self:GetFunctionEnableLevel(v) then
      self:SetFunctionEnable(v)
    end
  end
  if GM.TutorialModel:IsTutorialFinished(ETutorialId.Inventory) then
    self:SetFunctionEnable(EFunction.Inventory)
  end
  if GM.TutorialModel:IsTutorialFinished(ETutorialId.Shop) then
    self:SetFunctionEnable(EFunction.Shop)
  end
  if GM.TutorialModel:IsTutorialFinished(ETutorialId.Cache) then
    self:SetFunctionEnable(EFunction.Notice)
  end
  local num = 0
  local InventoryProducerInfo = GM.MainBoardModel:GetProducerInventoryConfig()
  for k, v in pairs(InventoryProducerInfo) do
    if level >= v.level then
      num = num + 1
    end
  end
  GM.MiscModel:SetInventoryProducerSize(num)
end

function OpenFunctionModel:SetFunctionEnable(func)
  self.m_dbTable:Set(func, "state", 1)
  EventDispatcher.DispatchEvent(EEventType.FunctionOpen, {openFunc = func})
end

function OpenFunctionModel:GetFunctionEnableLevel(key)
  if not self.m_uFunctionEnableLevel then
    self.m_uFunctionEnableLevel = {}
  end
  if self.m_uFunctionEnableLevel[key] then
    return self.m_uFunctionEnableLevel[key]
  end
  local param = self.m_mapFunctionConfigParam[key]
  if not param then
    self.m_uFunctionEnableLevel[key] = 0
    return 0
  end
  for k, v in ipairs(param) do
    local data = StringUtil.Split(v, "-")
    if #data == 2 and data[1] == "openLevel" then
      self.m_uFunctionEnableLevel[key] = tonumber(data[2])
      return self.m_uFunctionEnableLevel[key]
    end
  end
  self.m_uFunctionEnableLevel[key] = 0
  return 0
end

function OpenFunctionModel:IsProducerOpenByLevelLock()
  local nCurLevel = GM.LevelModel:GetCurrentLevel()
  local InventoryProducerInfo = GM.MainBoardModel:GetProducerInventoryConfig()
  for k, v in pairs(InventoryProducerInfo) do
    if nCurLevel >= v.level then
      return true
    end
  end
  return false
end

local orderList = {
  "newbie_60_1_8",
  "newbie_70_1_8",
  "newbie_70_2_4",
  "newbie_80_1_3"
}

function OpenFunctionModel:IsCobwebUnlockOpen()
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemUnlock) then
    return false
  end
  if not self:IsFunctionOpen(EFunction.ItemUnlock) then
    return false
  end
  local orderModel = GM.MainBoardModel:GetOrderModel()
  for _, order in pairs(orderList) do
    if not orderModel:IsFixedOrderFinished(order) then
      return false
    end
  end
  return true
end
