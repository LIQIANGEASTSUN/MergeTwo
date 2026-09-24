LuckyProduceModel = {}
LuckyProduceModel.__index = LuckyProduceModel
local DBColumnNumberValue = "value"
local DBColumnStringValue = "stringValue"
local DBKEY = {
  SpreadCount = "SpreadCount_",
  LuckyCount = "LuckyCount_",
  ComboLuckyItemType = "cl_it",
  ComboLuckyMaxCount = "cl_mc",
  ComboLuckyProducedCount = "cl_pc",
  ComboLuckyExpiredTime = "cl_et"
}
local ComboLuckyValidDuration = 10
local ComboLuckyRandomValue = 10000
local Seperator = ";"
local mapCachedSpreadCountKey = {}
local mapCachedLuckyCountKey = {}

function LuckyProduceModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.LuckyProduce)
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self._OnLoginFinished)
end

function LuckyProduceModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function LuckyProduceModel:_OnLoginFinished()
  local configMD5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.LuckyProduceConfig)
  if self.m_confidMD5 == configMD5 then
    return
  end
  self.m_confidMD5 = configMD5
  self.m_arrLuckyProduceConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.LuckyProduceConfig)
  if self:_IsSpecialModeOn() then
    table.sort(self.m_arrLuckyProduceConfig, function(a, b)
      return a.energy_cost.Left < b.energy_cost.Left
    end)
  end
  if self.m_bDataSynced then
    self:OnConfigChange()
  end
end

function LuckyProduceModel:OnConfigChange()
  if not self.m_bDataSynced then
    return
  end
  if not self:_IsSpecialModeOn() then
    self:_ClearExtraProduceData()
  else
    if (tonumber(GM.MiscModel:Get(EMiscKey.EnergyCostResetTime)) or 0) == 0 then
      GM.MiscModel:Set(EMiscKey.EnergyCostResetTime, GM.GameModel:GetServerTime())
    end
    self:_UpdateSpecialModeData()
  end
end

function LuckyProduceModel:OnSyncDataFinished()
  self.m_bDataSynced = true
  self:OnConfigChange()
end

function LuckyProduceModel:OnEnergyConsumed(gameMode, count)
  if gameMode ~= EGameMode.Main then
    return
  end
  self:_AddEnergyCostCount(count)
end

function LuckyProduceModel:UpdatePerSecond()
  if not self:_IsSpecialModeOn() or not self.m_bDataSynced then
    return
  end
  self:_CheckIfConfigExpired()
  self:_CheckIfNeedResetEnergyCost()
end

function LuckyProduceModel:TryProduceLuckyItem(sourceItemType, gameMode)
  if gameMode ~= EGameMode.Main then
    return nil
  end
  if not GM.ConfigModel:IsLuckyProduceOpen() then
    self.m_dbTable:Clear()
    return nil
  end
  local config = GM.ItemDataModel:GetModelConfig(sourceItemType)
  if not (config ~= nil and config.Use_LuckyProduce) or Table.IsEmpty(config.Lucky_Items) then
    Log.Info("[LuckyProduceModel:TryProduceLuckyItem] \230\178\161\230\156\137\233\133\141\231\189\174, \228\184\141\228\188\154\229\185\184\232\191\144\229\150\183\229\143\145, ItemType=" .. sourceItemType)
    self:_ClearComboLuckyProduceData()
    return nil
  end
  if self:_CanComboLuckyProduce(sourceItemType) then
    local spreadType = self:_PostProcessOnComboLuckyProduce()
    local code = self:_GenerateLuckyItem(sourceItemType)
    return code, spreadType
  end
  local spreadCount = self:_GetSpreadCountByPd(sourceItemType)
  local luckyCount
  if spreadCount <= 0 then
    spreadCount = config.Lucky_Chance
    luckyCount = 1
    self:_SetSpreadCountByPd(sourceItemType, spreadCount)
    self:_SetLuckyCountByPd(sourceItemType, luckyCount)
  else
    luckyCount = self:_GetLuckyCountByPd(sourceItemType)
  end
  local code, spreadType
  local random = math.random(1, spreadCount)
  local bLuckyProduce = luckyCount >= random
  self:_ShowRandomInfo(spreadCount, luckyCount, random, bLuckyProduce)
  if bLuckyProduce then
    self:_TryTriggerComboLuckyProduce(sourceItemType)
    code = self:_GenerateLuckyItem(sourceItemType)
    spreadType = Table.ListContain(config.Super_Items or {}, code) and BoardSpreadType.SuperLucky or BoardSpreadType.Lucky
    spreadCount = spreadCount - 1
    luckyCount = luckyCount - 1
    self:_SetSpreadCountByPd(sourceItemType, spreadCount)
    self:_SetLuckyCountByPd(sourceItemType, luckyCount)
  elseif self:_CanExtraProduce() then
    self:_PostProcessOnExtraProduce()
    self:_TryTriggerComboLuckyProduce(sourceItemType)
    code = self:_GenerateLuckyItem(sourceItemType)
    spreadType = Table.ListContain(config.Super_Items or {}, code) and BoardSpreadType.ExtraSuperLucky or BoardSpreadType.ExtraLucky
    Log.Info("[LuckyProduceModel:TryProduceLuckyItem] \232\167\166\229\143\145\233\162\157\229\164\150\229\185\184\232\191\144")
  else
    spreadCount = spreadCount - 1
    self:_SetSpreadCountByPd(sourceItemType, spreadCount)
  end
  return code, spreadType
end

function LuckyProduceModel:_GetSpreadCountByPd(itemType)
  if mapCachedSpreadCountKey[itemType] == nil then
    mapCachedSpreadCountKey[itemType] = DBKEY.SpreadCount .. itemType
  end
  return tonumber(self.m_dbTable:GetValue(mapCachedSpreadCountKey[itemType], DBColumnNumberValue)) or 0
end

function LuckyProduceModel:_SetSpreadCountByPd(itemType, count)
  if mapCachedSpreadCountKey[itemType] == nil then
    mapCachedSpreadCountKey[itemType] = DBKEY.SpreadCount .. itemType
  end
  if count == nil then
    self.m_dbTable:Remove(mapCachedSpreadCountKey[itemType])
  else
    self.m_dbTable:Set(mapCachedSpreadCountKey[itemType], DBColumnNumberValue, count)
  end
end

function LuckyProduceModel:_GetLuckyCountByPd(itemType)
  if mapCachedLuckyCountKey[itemType] == nil then
    mapCachedLuckyCountKey[itemType] = DBKEY.LuckyCount .. itemType
  end
  return tonumber(self.m_dbTable:GetValue(mapCachedLuckyCountKey[itemType], DBColumnNumberValue)) or 0
end

function LuckyProduceModel:_SetLuckyCountByPd(itemType, count)
  if mapCachedLuckyCountKey[itemType] == nil then
    mapCachedLuckyCountKey[itemType] = DBKEY.LuckyCount .. itemType
  end
  if count == nil then
    self.m_dbTable:Remove(mapCachedLuckyCountKey[itemType])
  else
    self.m_dbTable:Set(mapCachedLuckyCountKey[itemType], DBColumnNumberValue, count)
  end
end

function LuckyProduceModel:_GenerateLuckyItem(itemType)
  local config = GM.ItemDataModel:GetModelConfig(itemType)
  if config == nil then
    return nil
  end
  local ratio = GM.ConfigModel:GetLuckyProduceParam()
  local adjustedWeightInfo = Table.DeepCopy(config.Lucky_Items)
  local levelSpan = 0
  if DoubleEnergyModel.IsDoubleEnergyItemByCode(itemType) then
    for strActivityType, v in pairs(DoubleEnergyDefinition) do
      local doubleEnergyModel = GM.ActivityManager:GetModel(strActivityType)
      if doubleEnergyModel ~= nil then
        levelSpan = doubleEnergyModel:GetMaxOpenEnergyMultiple()
      end
    end
  end
  local boardModel = GM.MainBoardModel
  local boardRequireMap = boardModel:GetOrderCodeUnfinishedCount()
  local upRatio = {}
  for requireItemType, _ in pairs(boardRequireMap) do
    local chainId = GM.ItemDataModel:GetChainId(requireItemType)
    local chainLevel = GM.ItemDataModel:GetChainLevel(requireItemType)
    local bHasUpRatio = false
    local minLevel, minLevelItem
    for _, item in ipairs(adjustedWeightInfo) do
      local scoreChainId = GM.ItemDataModel:GetChainId(item.Code)
      local scoreChainLevel = GM.ItemDataModel:GetChainLevel(item.Code)
      if scoreChainId == chainId then
        if 0 < levelSpan and chainLevel >= scoreChainLevel and (minLevel == nil or minLevel > scoreChainLevel) then
          minLevel = scoreChainLevel
          minLevelItem = item
        end
        if scoreChainLevel <= chainLevel - levelSpan then
          upRatio[item] = true
          bHasUpRatio = true
        end
      end
    end
    if not bHasUpRatio and minLevelItem ~= nil then
      upRatio[minLevelItem] = true
    end
  end
  for _, item in ipairs(adjustedWeightInfo) do
    if upRatio[item] then
      item.Weight = item.Weight * ratio
    end
  end
  local resultItem = Table.ListWeightSelectOne(adjustedWeightInfo).Code
  self:_ShowItemGenerateInfo(resultItem, adjustedWeightInfo, config.Lucky_Items)
  return resultItem
end

function LuckyProduceModel:_IsSpecialModeOn()
  return not Table.IsEmpty(self.m_arrLuckyProduceConfig)
end

function LuckyProduceModel:_UpdateSpecialModeData()
  self.m_curLuckyProduceConfigIndex = self:_CalculateLuckyProduceConfigIndex()
  local costCountStr = GM.MiscModel:Get(EMiscKey.ExtraProduceEnergyCostCount)
  self.m_arrExtraProduceEnergyCostCount = StringUtil.SplitToNum(costCountStr, Seperator)
  if self:_GetEnergyCostCount() == 0 and self.m_curLuckyProduceConfigIndex >= 1 and #self.m_arrExtraProduceEnergyCostCount == 0 then
    self:_AddExtraProduceEnergyCostCount(1, self.m_curLuckyProduceConfigIndex)
  end
end

function LuckyProduceModel:_CalculateLuckyProduceConfigIndex()
  local costEnergy = self:_GetEnergyCostCount()
  local index = 0
  for i, config in ipairs(self.m_arrLuckyProduceConfig) do
    if costEnergy >= config.energy_cost.Left and costEnergy <= config.energy_cost.Right then
      index = i
      break
    end
  end
  return index
end

function LuckyProduceModel:_CheckLuckyProduceConfigIndex()
  local curIndex = self:_CalculateLuckyProduceConfigIndex()
  if self.m_curLuckyProduceConfigIndex ~= curIndex then
    self:_AddExtraProduceEnergyCostCount(self.m_curLuckyProduceConfigIndex + 1, curIndex == 0 and #self.m_arrLuckyProduceConfig or curIndex)
    self.m_curLuckyProduceConfigIndex = curIndex
  end
end

function LuckyProduceModel:_AddExtraProduceEnergyCostCount(fromIndex, toIndex)
  local config, random
  for index = fromIndex, toIndex do
    config = self.m_arrLuckyProduceConfig[index]
    for i = 1, config.extra_lucky do
      random = math.random(config.energy_cost.Left, config.energy_cost.Right)
      self.m_arrExtraProduceEnergyCostCount[#self.m_arrExtraProduceEnergyCostCount + 1] = random
    end
  end
  table.sort(self.m_arrExtraProduceEnergyCostCount, function(a, b)
    return a < b
  end)
  GM.MiscModel:Set(EMiscKey.ExtraProduceEnergyCostCount, table.concat(self.m_arrExtraProduceEnergyCostCount, Seperator))
end

function LuckyProduceModel:_GetCurEffectConfig()
  return self.m_arrLuckyProduceConfig[self.m_curLuckyProduceConfigIndex]
end

function LuckyProduceModel:_CheckIfConfigExpired()
  if not self:_IsSpecialModeOn() then
    return
  end
  local config = self:_GetCurEffectConfig()
  if config and config.eTime and GM.GameModel:GetServerTime() > config.eTime then
    self.m_arrLuckyProduceConfig = nil
    self:_ClearExtraProduceData()
  end
end

function LuckyProduceModel:_CanExtraProduce()
  return self.m_arrExtraProduceEnergyCostCount ~= nil and self.m_arrExtraProduceEnergyCostCount[1] ~= nil and self:_GetEnergyCostCount() >= self.m_arrExtraProduceEnergyCostCount[1]
end

function LuckyProduceModel:_PostProcessOnExtraProduce()
  table.remove(self.m_arrExtraProduceEnergyCostCount, 1)
  GM.MiscModel:Set(EMiscKey.ExtraProduceEnergyCostCount, table.concat(self.m_arrExtraProduceEnergyCostCount, Seperator))
end

function LuckyProduceModel:_CheckIfNeedResetEnergyCost()
  if not self:_IsSpecialModeOn() then
    return
  end
  if GM.GameModel:GetServerTime() // Sec2Day ~= (tonumber(GM.MiscModel:Get(EMiscKey.EnergyCostResetTime)) or 0) // Sec2Day then
    self:_ResetEnergyCost()
  end
end

function LuckyProduceModel:_GetEnergyCostCount()
  return tonumber(GM.MiscModel:Get(EMiscKey.EnergyCostCount)) or 0
end

function LuckyProduceModel:_AddEnergyCostCount(count)
  if not self:_IsSpecialModeOn() or not self.m_bDataSynced then
    return
  end
  GM.MiscModel:Set(EMiscKey.EnergyCostCount, self:_GetEnergyCostCount() + count)
  self:_CheckLuckyProduceConfigIndex()
  self:_ShowExtraLuckyEnergyInfo()
end

function LuckyProduceModel:_ResetEnergyCost()
  GM.MiscModel:Clear(EMiscKey.EnergyCostCount)
  GM.MiscModel:Clear(EMiscKey.ExtraProduceEnergyCostCount)
  GM.MiscModel:Set(EMiscKey.EnergyCostResetTime, GM.GameModel:GetServerTime())
  self:_UpdateSpecialModeData()
end

function LuckyProduceModel:_ClearExtraProduceData()
  GM.MiscModel:Clear(EMiscKey.EnergyCostCount)
  GM.MiscModel:Clear(EMiscKey.ExtraProduceEnergyCostCount)
  GM.MiscModel:Clear(EMiscKey.EnergyCostResetTime)
  self.m_curLuckyProduceConfigIndex = nil
  self.m_arrExtraProduceEnergyCostCount = nil
end

function LuckyProduceModel:_TryTriggerComboLuckyProduce(sourceItemType)
  if not self:_IsSpecialModeOn() then
    return
  end
  local config = self:_GetCurEffectConfig()
  if config == nil then
    return
  end
  if config.triple_lucky_chance ~= nil and math.random(1, ComboLuckyRandomValue) <= config.triple_lucky_chance then
    self:_OnTriggerComboLuckyProduce(sourceItemType, 2)
  elseif config.double_lucky_chance ~= nil and math.random(1, ComboLuckyRandomValue) <= config.double_lucky_chance then
    self:_OnTriggerComboLuckyProduce(sourceItemType, 1)
  end
end

function LuckyProduceModel:_CanComboLuckyProduce(targetItemType)
  local storedItemType = self.m_dbTable:GetValue(DBKEY.ComboLuckyItemType, DBColumnStringValue)
  if StringUtil.IsNilOrEmpty(storedItemType) then
    return false
  end
  if targetItemType ~= storedItemType or self.m_dbTable:GetValue(DBKEY.ComboLuckyProducedCount, DBColumnNumberValue) >= self.m_dbTable:GetValue(DBKEY.ComboLuckyMaxCount, DBColumnNumberValue) or GM.GameModel:GetServerTime() > self.m_dbTable:GetValue(DBKEY.ComboLuckyExpiredTime, DBColumnNumberValue) then
    self:_ClearComboLuckyProduceData()
    return false
  end
  return true
end

function LuckyProduceModel:_PostProcessOnComboLuckyProduce()
  local producedCount = self.m_dbTable:GetValue(DBKEY.ComboLuckyProducedCount, DBColumnNumberValue)
  self.m_dbTable:Set(DBKEY.ComboLuckyProducedCount, DBColumnNumberValue, producedCount + 1)
  self.m_dbTable:Set(DBKEY.ComboLuckyExpiredTime, DBColumnNumberValue, GM.GameModel:GetServerTime() + ComboLuckyValidDuration)
  local boardSpreadType = BoardSpreadType.DoubleLucky
  if self.m_dbTable:GetValue(DBKEY.ComboLuckyMaxCount, DBColumnNumberValue) == 2 then
    boardSpreadType = producedCount == 0 and BoardSpreadType.TripleLucky1 or BoardSpreadType.TripleLucky2
  end
  return boardSpreadType
end

function LuckyProduceModel:_OnTriggerComboLuckyProduce(targetItemType, comboMaxNum)
  self.m_dbTable:Set(DBKEY.ComboLuckyItemType, DBColumnStringValue, targetItemType)
  self.m_dbTable:Set(DBKEY.ComboLuckyMaxCount, DBColumnNumberValue, comboMaxNum)
  self.m_dbTable:Set(DBKEY.ComboLuckyProducedCount, DBColumnNumberValue, 0)
  self.m_dbTable:Set(DBKEY.ComboLuckyExpiredTime, DBColumnNumberValue, GM.GameModel:GetServerTime() + ComboLuckyValidDuration)
end

function LuckyProduceModel:_ClearComboLuckyProduceData()
  self.m_dbTable:Remove(DBKEY.ComboLuckyItemType)
  self.m_dbTable:Remove(DBKEY.ComboLuckyMaxCount)
  self.m_dbTable:Remove(DBKEY.ComboLuckyProducedCount)
  self.m_dbTable:Remove(DBKEY.ComboLuckyExpiredTime)
end

function LuckyProduceModel:_ShowRandomInfo(spreadCount, luckyCount, random, bLuckyProduce)
end

function LuckyProduceModel:_ShowItemGenerateInfo(resultItem, adjustedWeightInfo, originWeightInfo)
end

function LuckyProduceModel:_ShowExtraLuckyEnergyInfo()
end

function LuckyProduceModel:TestSetNextLucky()
end
