WheelItemModel = {}
WheelItemModel.__index = WheelItemModel
local CACHEDBKEY = "reward_cache"

function WheelItemModel:Init()
  self.m_dbTable = GM.DBTableManager:GetTable(EDBTableConfigs.WheelItem)
end

function WheelItemModel:LoadFileConfig()
  local arrBoxItemConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.WheelItemConfig) or {}
  self.m_mapId2WheelItemData = {}
  for _, config in ipairs(arrBoxItemConfig) do
    self.m_mapId2WheelItemData[config.itemId] = self:_CreateWheelItemData(config)
  end
end

function WheelItemModel:_CreateWheelItemData(config)
  return WheelItemData.Create(config)
end

function WheelItemModel:CacheRewards(reward)
  local arrRewards = self:GetCachedReward()
  RewardApi.MergeRewards(arrRewards, {reward})
  local value = table.concat(ConfigUtil.GetArrFromCurrency(arrRewards), ";")
  self.m_dbTable:Set(CACHEDBKEY, "value", value)
end

function WheelItemModel:UnCacheRewards(reward)
  local arrRewards = self:GetCachedReward()
  for index, value in ipairs(arrRewards) do
    if value[PROPERTY_TYPE] == reward[PROPERTY_TYPE] then
      value[PROPERTY_COUNT] = value[PROPERTY_COUNT] - reward[PROPERTY_COUNT]
      if value[PROPERTY_COUNT] <= 0 then
        table.remove(arrRewards, index)
      end
      break
    end
  end
  local value = table.concat(ConfigUtil.GetArrFromCurrency(arrRewards), ";")
  self.m_dbTable:Set(CACHEDBKEY, "value", value)
end

function WheelItemModel:ClearAllCache()
  self.m_dbTable:Remove(CACHEDBKEY)
end

function WheelItemModel:GetCachedReward()
  local strRewards = self.m_dbTable:GetValue(CACHEDBKEY, "value")
  return ConfigUtil.GetCurrencyFromArrStr(StringUtil.Split(strRewards, ";"), true)
end

function WheelItemModel:GetWheelItemData(itemId)
  return itemId and self.m_mapId2WheelItemData and self.m_mapId2WheelItemData[itemId]
end

function WheelItemModel:IsWheelItem(itemId)
  return self:GetWheelItemData(itemId) ~= nil
end

function WheelItemModel:GetWheelItemIcon(itemId)
  local itemData = self:GetWheelItemData(itemId)
  return ImageFileConfigName.HasConfig(itemData.ui_code) and ImageFileConfigName[itemData.ui_code] or ImageFileConfigName.energyWheel1
end

function WheelItemModel:GetWheelItemWindowName(itemId)
  local name = "WheelItemWindow" .. "_" .. self:GetWheelItemData(itemId).ui_code
  return UIPrefabConfigName.HasConfig(name) and UIPrefabConfigName[name] or UIPrefabConfigName.WheelItemWindow_energyWheel1
end

function WheelItemModel:GetWheelItemDetailWindow(itemId)
  local name = "WheelItemDetailWindow" .. "_" .. self:GetWheelItemData(itemId).ui_code
  return UIPrefabConfigName.HasConfig(name) and UIPrefabConfigName[name] or UIPrefabConfigName.WheelItemDetailWindow_energyWheel1
end

function WheelItemModel:AcquireWheelItemRewards(itemId, map)
  local itemData = self:GetWheelItemData(itemId)
  local reward, index = itemData:GenerateRandomRewards()
  GM.BIManager:LogUseItem(itemId, 1, EBIType.WheelItemUsed, "cache", map)
  RewardApi.AcquireRewardsLogic({reward}, EPropertySource.Give, EBIType.WheelItemReward, CacheItemType.Stack)
  self:CacheRewards(reward)
  GM.UIManager:OpenView(self:GetWheelItemWindowName(itemId), itemId, reward, index)
end
