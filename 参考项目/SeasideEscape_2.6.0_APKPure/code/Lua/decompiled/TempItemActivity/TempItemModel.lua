TempItemModel = setmetatable({}, BaseActivityModel)
TempItemModel.__index = TempItemModel
local orderItemScoreMin = 4
TempItemModel.ItemStartTimerKey = "ist"
TempItemModel.ItemCoolDownTimerKey = "icd"
TempItemModel.ItemDurationKey = "idu"
TempItemModel.ExtraItemDurationKey = "ex_idu"
TempItemModel.OrderItemLevelKey = "iod_lv"
TempItemModel.OrderItemChainKey = "iod_cha"
local NewRewardIndex2TriggerKey = {
  [51] = "trigger_main_item",
  [52] = "trigger_side_item",
  [61] = "trigger_main_item",
  [62] = "trigger_side_item",
  [63] = "trigger_rare_item",
  [122] = "trigger_side_item",
  [132] = "trigger_side_item"
}

function TempItemModel:Init(activityType, dbTable)
  BaseActivityModel.Init(self, activityType, dbTable)
  EventDispatcher.AddListener(EEventType.IceDisappear, self, self._OnIceDisappear)
  EventDispatcher.AddListener(EEventType.ItemMerged, self, self._OnItemMerged)
end

function TempItemModel:LoadLocalConfig()
  self.m_tempItemRuleConfig = require("Data.Config.IceitemRuleConfig", true)
  self.m_tempItemDuration = require("Data.Config.IceitemDuration", true)
end

function TempItemModel:GetMapTempItemRuleConfig()
  if not self.m_mapTempItemRuleConfig then
    self.m_mapTempItemRuleConfig = {}
    for _, config in ipairs(self.m_tempItemRuleConfig) do
      if not self.m_mapTempItemRuleConfig[config.item_index] then
        self.m_mapTempItemRuleConfig[config.item_index] = {}
      end
      self.m_mapTempItemRuleConfig[config.item_index][#self.m_mapTempItemRuleConfig[config.item_index] + 1] = config
    end
    for _, arrConfig in pairs(self.m_mapTempItemRuleConfig) do
      table.sort(arrConfig, function(a, b)
        return a.order_item < b.order_item
      end)
    end
  end
  return self.m_mapTempItemRuleConfig
end

function TempItemModel:_LoadOtherServerConfig(config)
  self.m_tempItemGeneralConfig = config.temp_item_general_config
end

function TempItemModel:_OnStateChanged()
  if not self:_HasActivityStarted() and self:GetState() == ActivityState.Started then
    self:LogActivity(EBIType.ActivityRankUp, 0)
    self:_SetActivityStarted()
  end
  BaseActivityModel._OnStateChanged(self)
  self:OnCheckResourcesFinished()
  EventDispatcher.DispatchEvent(EEventType.TempItemStateChanged, {
    state = self:GetState()
  })
  if self:GetState() > ActivityState.Ended then
    self.m_bNeedToTransformItems = true
    self:_TryTransformItems()
  end
end

function TempItemModel:_TryTransformItems()
  if self.m_bNeedToTransformItems then
    local arrItem = GM.MainBoardModel:FilterItemsWithType(ItemType.Ice) or {}
    for _, itemModel in ipairs(arrItem) do
      itemModel:OnTempItemStateChanged()
    end
    self.m_bNeedToTransformItems = nil
  end
end

function TempItemModel:IsActivityOpen()
  return self:GetState() == ActivityState.Started
end

function TempItemModel:OnCheckResourcesFinished()
  if self:IsActivityOpen() then
    self:LoadLocalConfig()
  end
end

function TempItemModel:_DropData()
  self.m_bNeedToTransformItems = true
  self:_TryTransformItems()
  BaseActivityModel._DropData(self)
end

function TempItemModel:_OnTempItemDisappear()
  self.m_dbTable:Remove(TempItemModel.ItemDurationKey)
  if self:GetExtraItemDuration() ~= nil then
    self:SetItemDuration(self:GetExtraItemDuration())
    self.m_dbTable:Remove(TempItemModel.ExtraItemDurationKey)
  end
end

function TempItemModel:_OnIceDisappear()
  self:_OnTempItemDisappear()
  self.m_dbTable:Remove(TempItemModel.OrderItemChainKey)
end

function TempItemModel:_OnItemMerged(message)
  if message.Source:GetType() == ItemType.Ice or message.Target:GetType() == ItemType.Ice then
    self:_OnTempItemDisappear()
  end
end

function TempItemModel:TryCreateExtraTempItem(code, isTemp)
  if not (code ~= nil and self:IsActivityOpen()) or GM.SceneManager:GetGameMode() ~= EGameMode.Main or GM.ItemDataModel:GetItemRewardIndex(code) == nil or GM.MainBoardModel:IsBoardFull() or self:IsInLockTime() then
    return
  end
  local bCreateNew, noInterval = self:_CanCreateTempItemNew(code, isTemp)
  if bCreateNew then
    return self:_CreateTempItemNew(code, noInterval)
  elseif self:_CanCreateTempItem(code, isTemp) then
    return self:_CreateTempItem(code, isTemp)
  end
end

function TempItemModel:_CanCreateTempItem(code, isTemp)
  if isTemp then
    return true
  end
  if not self:CanTriggerActivity() then
    return false
  end
  local startTime = self:GetItemStartTimer()
  if startTime and startTime ~= 0 then
    local nextTime = self.m_dbTable:GetValue(TempItemModel.ItemCoolDownTimerKey, DB_VALUE_KEY) or 0
    local curTime = GM.GameModel:GetServerTime()
    if nextTime > curTime then
      return false
    end
    local itemCD = self:GetFirstItemDuration()
    if itemCD then
      if itemCD + startTime < curTime - 18000 and next(GM.MainBoardModel:FilterItemsWithType(ItemType.Ice) or {}) == nil then
        self:_OnTempItemDisappear()
        return true
      end
      return false
    end
  end
  return true
end

function TempItemModel:_CanCreateTempItemNew(code, isTemp)
  local config = self:GetTempItemGeneralConfig()
  if not (config.trigger_main_item and config.trigger_side_item and config.trigger_rare_item) or not config.trigger_type then
    return
  end
  local index = GM.ItemDataModel:GetItemRewardIndex(code)
  if not NewRewardIndex2TriggerKey[index] then
    return false
  end
  if isTemp then
    return true, true
  end
  if not self:CanTriggerActivity() then
    return false
  end
  local noInterval
  local startTime = self:GetItemStartTimer()
  if startTime and startTime ~= 0 then
    local nextTime = self.m_dbTable:GetValue(TempItemModel.ItemCoolDownTimerKey, DB_VALUE_KEY) or 0
    local curTime = GM.GameModel:GetServerTime()
    if nextTime > curTime then
      if self:GetOrderItemChain() == ItemUtility.GetChainIdByCode(code) then
        noInterval = true
      else
        return false
      end
    end
    local itemCD = self:GetFirstItemDuration()
    if itemCD then
      if itemCD + startTime < curTime - 18000 and next(GM.MainBoardModel:FilterItemsWithType(ItemType.Ice) or {}) == nil then
        self:_OnTempItemDisappear()
        return true
      end
      return false
    end
  end
  return true, noInterval
end

function TempItemModel:_RandomSelectTempItem(mergedCode, isTemp)
  local itemIndex = GM.ItemDataModel:GetItemRewardIndex(mergedCode)
  local chainId = GM.ItemDataModel:GetChainId(mergedCode)
  local mergedLevel = GM.ItemDataModel:GetChainLevel(mergedCode)
  local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
  if mergedLevel >= GM.ItemDataModel:GetChainMaxLevel(chainId) then
    return
  end
  local monthPay = GM.InAppPurchaseModel:GetMonthRecharge() or 0
  local targetItemLevel = maxLevel
  local orderItem, orderItemLevel
  local mapTempItemRuleConfig = self:GetMapTempItemRuleConfig()
  for _, conf in ipairs(mapTempItemRuleConfig[itemIndex] or {}) do
    if monthPay <= conf.eMonthPay and monthPay >= conf.sMonthPay and maxLevel >= conf.order_item and (not isTemp or isTemp and conf.order_item == self:GetOrderItemLevel()) then
      orderItem = ItemUtility.GetItemCode(chainId, conf.order_item)
      local score = GM.MainBoardModel:GetItemScoreByUnlockGen(orderItem)
      if score ~= nil and score >= orderItemScoreMin and self:_IsSatisfiedOrderCondition(orderItem) then
        for level in string.gmatch(conf.temp_items, "%d+"), nil, nil do
          local lv = tonumber(level) or 0
          if mergedLevel < lv and targetItemLevel >= lv and maxLevel > lv then
            orderItemLevel = conf.order_item
            targetItemLevel = lv
          end
        end
        if targetItemLevel ~= maxLevel then
          break
        end
      end
    end
  end
  if targetItemLevel == maxLevel then
    return nil
  end
  self:SetOrderItemLevel(orderItemLevel)
  return ItemUtility.GetItemCode(chainId, targetItemLevel)
end

function TempItemModel:CanTriggerActivity()
  local conf = self:GetTempItemGeneralConfig()
  if GM.EnergyModel:GetEnergy() > conf.trigger_energy then
    return false
  end
  if GM.ShopModel:GetGemBuyEnergyNum() < conf.trigger_gem then
    return false
  end
  return true
end

function TempItemModel:_IsSatisfiedOrderCondition(orderItem)
  local orders = GM.MainBoardModel:GetOrders()
  local codeMap = GM.MainBoardModel:GetAllItemsCodeMap()
  for _, order in pairs(orders) do
    local orderType = order:GetType()
    if (orderType == OrderType.Lane or orderType == OrderType.Random or orderType == OrderType.Fixed or orderType == OrderType.Recall) and order:GetState() < OrderState.CanDeliver then
      local items = order:GetRequirements()
      for index, state in pairs(order:GetRequirementFillStates()) do
        if state == false and orderItem == items[index] then
          local chain = GM.ItemDataModel:GetChainId(items[index])
          local level = GM.ItemDataModel:GetChainLevel(items[index])
          if 1 < level and codeMap[ItemUtility.GetItemCode(chain, level - 1)] then
            return false
          end
          if 2 < level and codeMap[ItemUtility.GetItemCode(chain, level - 2)] then
            return false
          end
          if 3 < level then
            local code = ItemUtility.GetItemCode(chain, level - 3)
            local itemStoreCount = GM.MainBoardModel:GetItemLayerCount(code) + GM.MainBoardModel:GetStoredItemCountByCode(code)
            if 2 < itemStoreCount then
              return false
            end
          end
          return true
        end
      end
    end
  end
  return false
end

function TempItemModel:_GetMapOrderChain2MinLevel()
  local mapOrderChain2MinLevel = {}
  local orders = GM.MainBoardModel:GetOrders()
  local chain, level
  for _, order in pairs(orders) do
    local orderType = order:GetType()
    if (orderType == OrderType.Lane or orderType == OrderType.Random) and order:GetState() < OrderState.CanDeliver then
      local items = order:GetRequirements()
      for index, state in pairs(order:GetRequirementFillStates()) do
        local score = GM.MainBoardModel:GetItemScoreByUnlockGen(items[index])
        if state == false and score ~= nil and score >= orderItemScoreMin then
          chain = GM.ItemDataModel:GetChainId(items[index])
          level = GM.ItemDataModel:GetChainLevel(items[index])
          if not mapOrderChain2MinLevel[chain] then
            mapOrderChain2MinLevel[chain] = level
          else
            mapOrderChain2MinLevel[chain] = math.min(level, mapOrderChain2MinLevel[chain])
          end
        end
      end
    end
  end
  return mapOrderChain2MinLevel
end

function TempItemModel:_CreateTempItem(code, isTemp)
  return self:_RandomSelectTempItem(code, isTemp)
end

function TempItemModel:_CreateTempItemNew(mergedCode, noInterval)
  local itemIndex = GM.ItemDataModel:GetItemRewardIndex(mergedCode)
  local chainId = GM.ItemDataModel:GetChainId(mergedCode)
  local mergedLevel = GM.ItemDataModel:GetChainLevel(mergedCode)
  local maxLevel = GM.ItemDataModel:GetChainMaxLevel(chainId)
  local monthPay = GM.InAppPurchaseModel:GetMonthRecharge() or 0
  local targetItemLevel = maxLevel
  local orderItemLevel
  local mapTempItemRuleConfig = self:GetMapTempItemRuleConfig()
  local triggerNum = self:GetMinTriggerItemNumByIndex(itemIndex)
  local arrCurNum = {}
  local arrRecDiff, compFunc
  if self:GetTempItemGeneralConfig().trigger_type == 1 then
    function compFunc(a, b)
      if a.disLevel * b.disLevel <= 0 or a.disNum == b.disNum then
        return a.disLevel > b.disLevel
      end
      return a.disNum > b.disNum
    end
  else
    function compFunc(a, b)
      if a.disLevel * b.disLevel <= 0 or a.disNum == b.disNum then
        return a.disLevel > b.disLevel
      end
      return a.disNum < b.disNum
    end
  end
  local mapOrderChain2MinLevel = self:_GetMapOrderChain2MinLevel()
  for _, conf in ipairs(mapTempItemRuleConfig[itemIndex] or {}) do
    if monthPay <= conf.eMonthPay and monthPay >= conf.sMonthPay and maxLevel >= conf.order_item and (not noInterval or noInterval and conf.order_item == self:GetOrderItemLevel()) and mapOrderChain2MinLevel[chainId] == conf.order_item then
      local orderNum = 1 << conf.order_item - 1
      arrRecDiff = {}
      local code, itemStoreCount
      for level = 1, conf.order_item - 1 do
        code = ItemUtility.GetItemCode(chainId, level)
        itemStoreCount = GM.MainBoardModel:GetItemLayerCount(code) + GM.MainBoardModel:GetStoredItemCountByCode(code)
        local targetNum = 1 << level - 1
        arrCurNum[level] = (arrCurNum[level - 1] or 0) + (itemStoreCount << level - 1)
        local disNum = targetNum - arrCurNum[level]
        if triggerNum < disNum then
          arrRecDiff[#arrRecDiff + 1] = {
            disLevel = level - mergedLevel,
            disNum = disNum
          }
        end
      end
      code = ItemUtility.GetItemCode(chainId, conf.order_item)
      itemStoreCount = GM.MainBoardModel:GetItemLayerCount(code) + GM.MainBoardModel:GetStoredItemCountByCode(code)
      arrCurNum[conf.order_item] = (arrCurNum[conf.order_item - 1] or 0) + (itemStoreCount << conf.order_item - 1)
      if triggerNum < orderNum - arrCurNum[conf.order_item] and 0 < #arrRecDiff then
        table.sort(arrRecDiff, compFunc)
        targetItemLevel = arrRecDiff[1].disLevel + mergedLevel
        orderItemLevel = conf.order_item
        break
      end
    end
  end
  if targetItemLevel == maxLevel then
    return nil
  end
  self:SetOrderItemLevel(orderItemLevel)
  self:SetOrderItemChain(chainId)
  return ItemUtility.GetItemCode(chainId, targetItemLevel)
end

function TempItemModel:GetMinTriggerItemNumByIndex(index)
  if NewRewardIndex2TriggerKey[index] then
    local config = self:GetTempItemGeneralConfig()
    return config[NewRewardIndex2TriggerKey[index]]
  end
  return nil
end

function TempItemModel:GetIceTransformItem()
  local stime = self:GetItemStartTimer()
  if not stime or stime == 0 or self:GetItemStartTimer() < self:GetStartTime() then
    return nil
  end
  if GM.GameModel:GetServerTime() > self:GetRewardTime() then
    return nil
  end
  return self:GetTempItemGeneralConfig().transfer_item
end

function TempItemModel:GetTempItemGeneralConfig()
  if Table.IsEmpty(self.m_tempItemGeneralConfig) then
    Log.Error("temp_item_general_config \233\133\141\231\189\174\230\156\137\232\175\175")
  end
  for _, conf in pairs(self.m_tempItemGeneralConfig) do
    local recharge = GM.InAppPurchaseModel:GetRecentDayRecharge(conf.recentDays) or 0
    if recharge >= conf.sRecentPay and recharge <= conf.eRecentPay then
      return conf
    end
  end
  Log.Error("TEMPITEM : temp_item_general_config \233\133\141\231\189\174\230\156\137\232\175\175")
end

function TempItemModel:AddTempItem(code)
  local curTime = GM.GameModel:GetServerTime()
  self:SetItemStartTimer(curTime)
  local duration = -1
  local item_index = GM.ItemDataModel:GetItemRewardIndex(code)
  local level = GM.ItemDataModel:GetChainLevel(code)
  for _, conf in pairs(self.m_tempItemDuration) do
    if item_index == conf.item_index and level == conf.temp_items then
      duration = conf.duration
      break
    end
  end
  duration = math.min(duration * 60, (self:GetRewardTime() or self:GetEndTime()) - curTime)
  if duration < 0 then
    duration = 600
  end
  if self:GetFirstItemDuration() == nil then
    self:SetItemDuration(duration)
  elseif self:GetExtraItemDuration() == nil then
    self:SetExtraItemDuration(duration)
  else
    Log.Error("TEMPITEM : \229\156\186\228\184\138\231\171\159\231\132\182\229\183\178\231\187\143\230\156\1372\228\184\170\228\184\180\230\151\182\230\163\139\229\173\144\239\188\159")
  end
  local cdTime = self:GetTempItemGeneralConfig().interval * 60
  self.m_dbTable:Set(TempItemModel.ItemCoolDownTimerKey, DB_VALUE_KEY, curTime + cdTime)
end

function TempItemModel:GetItemStartTimer()
  return tonumber(self.m_dbTable:GetValue(TempItemModel.ItemStartTimerKey, DB_VALUE_KEY) or 0)
end

function TempItemModel:SetItemStartTimer(time)
  self.m_dbTable:Set(TempItemModel.ItemStartTimerKey, DB_VALUE_KEY, time)
end

function TempItemModel:GetFirstItemDuration()
  return tonumber(self.m_dbTable:GetValue(TempItemModel.ItemDurationKey, DB_VALUE_KEY))
end

function TempItemModel:GetItemDuration()
  return self:GetExtraItemDuration() or self:GetFirstItemDuration()
end

function TempItemModel:SetItemDuration(duration)
  self.m_dbTable:Set(TempItemModel.ItemDurationKey, DB_VALUE_KEY, duration)
end

function TempItemModel:GetExtraItemDuration()
  return tonumber(self.m_dbTable:GetValue(TempItemModel.ExtraItemDurationKey, DB_VALUE_KEY))
end

function TempItemModel:SetExtraItemDuration(duration)
  self.m_dbTable:Set(TempItemModel.ExtraItemDurationKey, DB_VALUE_KEY, duration)
end

function TempItemModel:GetOrderItemLevel()
  return tonumber(self.m_dbTable:GetValue(TempItemModel.OrderItemLevelKey, DB_VALUE_KEY))
end

function TempItemModel:SetOrderItemLevel(level)
  self.m_dbTable:Set(TempItemModel.OrderItemLevelKey, DB_VALUE_KEY, level)
end

function TempItemModel:GetOrderItemChain()
  return self.m_dbTable:GetValue(TempItemModel.OrderItemChainKey, DB_VALUE_KEY)
end

function TempItemModel:SetOrderItemChain(chain)
  self.m_dbTable:Set(TempItemModel.OrderItemChainKey, DB_VALUE_KEY, chain)
end

function TempItemModel:GetResourceLabels()
  return {}
end
