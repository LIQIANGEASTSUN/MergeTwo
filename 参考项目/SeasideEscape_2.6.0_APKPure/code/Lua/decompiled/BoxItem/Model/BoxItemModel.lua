BoxItemModel = {}
BoxItemModel.__index = BoxItemModel

function BoxItemModel:LoadServerConfig(tbLoginResp)
end

function BoxItemModel:LoadFileConfig()
  self:_LoadBoxItemConfigDatas()
end

function BoxItemModel:_LoadBoxItemConfigDatas()
  local arrBoxItemConfig = GM.ConfigModel:GetLocalConfig(LocalConfigKey.BoxItemConfig) or {}
  self.m_mapId2BoxItemData = {}
  for _, config in ipairs(arrBoxItemConfig) do
    self.m_mapId2BoxItemData[config.itemId] = self:_CreateBoxItemData(config)
  end
end

function BoxItemModel:_CreateBoxItemData(config)
  if config and config.itemType == nil then
    Log.Error("[BoxItemConfig] \233\133\141\231\189\174\231\188\186\229\176\145itemType\232\175\183\230\163\128\230\159\165")
    return
  end
  config.openIcon = config.icon .. "_open"
  config.closeIcon = config.icon .. "_close"
  if config.itemType == EBoxItemType.Random then
    return RandomBoxData.Create(config)
  end
  return config
end

function BoxItemModel:GetBoxItemData(boxId)
  return boxId and self.m_mapId2BoxItemData and self.m_mapId2BoxItemData[boxId]
end

function BoxItemModel:IsBoxItem(itemName)
  return self:GetBoxItemData(itemName) ~= nil
end

function BoxItemModel:GetBoxItemIcon(boxId)
  local boxItemData = self:GetBoxItemData(boxId)
  return boxItemData and boxItemData.icon
end

function BoxItemModel:GetBoxItemStateIcon(boxId)
  local boxItemData = self:GetBoxItemData(boxId)
  if boxItemData ~= nil then
    return boxItemData.openIcon, boxItemData.closeIcon
  end
end

function BoxItemModel:GetBoxItemDetailWindow(boxId)
  local boxItemData = self:GetBoxItemData(boxId)
  return boxItemData and BoxItemDetailWindow[boxItemData.itemType]
end

function BoxItemModel:AcquireBoxItemRewards(boxId, startPos)
  local boxItemData = self:GetBoxItemData(boxId)
  if boxItemData == nil then
    Log.Error("[BoxItemModel] Error: boxItemId is not exist, id : " .. (boxId or ""))
    return
  end
  if boxItemData.itemType == EBoxItemType.Random then
    self:_AcquireRandomBoxItemRewards(boxItemData, startPos)
  end
end

function BoxItemModel:_AcquireRandomBoxItemRewards(randomBoxData, startPos)
  local rewards = randomBoxData:GenerateRandomRewards()
  if Table.IsEmpty(rewards) then
    return
  end
  local goldCount
  for _, v in pairs(rewards) do
    if v[PROPERTY_TYPE] == EPropertyType.Gold then
      goldCount = v[PROPERTY_COUNT]
      EventDispatcher.DispatchEvent(EEventType.CollectGold, {count = goldCount})
    end
  end
  GM.UIManager:OpenView(UIPrefabConfigName.BoxItemRewardWindow, randomBoxData.itemId, rewards, startPos)
  GM.BIManager:LogUseItem(randomBoxData.itemId, 1, EBIType.UseRandomBoxItem, "cache")
  RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, EBIType.RandomBoxItemReward .. randomBoxData.itemId, CacheItemType.Stack)
end
