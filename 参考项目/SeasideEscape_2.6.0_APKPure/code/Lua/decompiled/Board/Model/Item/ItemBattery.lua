ItemBattery = setmetatable({}, BaseItemComponent)
ItemBattery.__index = ItemBattery
ItemBatteryEventType = {ItemRemove = 1, ItemOpened = 2}

function ItemBattery.Create(itemConfig)
  local itemBattery = setmetatable({}, ItemBattery)
  itemBattery:Init(itemConfig)
  return itemBattery
end

function ItemBattery:Init(itemConfig)
  local type = itemConfig.Type
  self.m_isFull = false
  self.m_duration = itemConfig.Spread_InitDuration
  self.event = PairEvent.Create(self)
  local pos = StringUtil.rFindChar(type, "_") - 1 or 1
  self.m_batteryLevel = tonumber(string.sub(type, pos, pos)) or 0
  local config = itemConfig.Spread_Weight[1]
  self.m_rewards = {
    {
      [PROPERTY_TYPE] = config.Code,
      [PROPERTY_COUNT] = config.Weight
    }
  }
end

function ItemBattery:OnSpread()
  if not Table.IsEmpty(self.m_rewards) then
    RewardApi.AcquireRewardsLogic(self.m_rewards, EPropertySource.Give, EBIType.BatterySpread)
    GM.UIManager:OpenView(UIPrefabConfigName.BatteryWindow, self.m_rewards)
  end
end

function ItemBattery:GetBatteryItemLevel()
  return self.m_batteryLevel
end

function ItemBattery:OnRemoved()
  self.event:Call(ItemBatteryEventType.ItemRemove)
end

function ItemBattery:GetItemSpriteName()
  return ImageFileConfigName.battery_empty
end

function ItemBattery:GetBatteryItemIsFull()
  return self.m_isFull
end

function ItemBattery:SetBatteryItemIsFull(isFull)
  self.m_isFull = isFull
end

function ItemBattery:GetBatteyItemDuration()
  return self.m_duration
end

function ItemBattery:GetBatteryItemStartTime()
  local com = self.m_itemModel:GetComponent(ItemSpread)
  if com then
    return com:GetStartTimer()
  end
  return nil
end

function ItemBattery:DoItemOpened()
  self:SetBatteryItemIsFull(true)
  self.event:Call(ItemBatteryEventType.ItemOpened)
end
