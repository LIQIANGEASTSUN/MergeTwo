SystemConfigKey = {
  SpreadCoinMinChainLevel = "SpreadCoinMinChainLevel",
  TaskSfxDelay = "TaskSfxDelay",
  StarterBundleOpenCd = "StarterBundleOpenCd",
  MainBoardBubbleNum = "BubbleMax",
  BubbleBroken = "BubbleBroken",
  BubbleDelete = "BubbleDelete",
  FreeBubbleNum = "FreeBubbleNum",
  BubbleBrokenEnergyLimit = "BubbleBrokenEnergyLimit",
  BubbleBrokenGemLimit = "BubbleBrokenGemLimit",
  DailyTaskGoldConstant = "dailyTaskGoldConstant",
  DailyTaskGoldMaxlevelConstant = "dailyTaskGoldMaxlevelConstant",
  WindowsPopMaxNum = "windowsPopMaxNum",
  StarterBundleLevel = "newUserGiftlevel",
  BundlePopMaxNum = "giftWindowPopMaxNum",
  ItemBoxMaxType = "itemBoxMaxType",
  BuildingConstructionGold = "BuildingConstructionGold",
  BuildingConstructionTool = "BuildingConstructionTool",
  LockItemPrice = "LockitemPrice",
  RecallOrderItemScoreRange = "RecallOrderItemScoreRange",
  ShopEnergyInitPrice = "ShopEnergyInitPrice",
  ShopEnergyPriceMultiple = "ShopEnergyPriceMultiple",
  ShopEnergyPriceMax = "ShopEnergyPriceMax",
  ShopEboxInitPrice = "ShopEboxInitPrice",
  ShopEboxPriceMultiple = "ShopEboxPriceMultiple",
  ShopEboxPriceMax = "ShopEboxPriceMax",
  ShopOffsetRange = "ShopOffsetRange",
  ShopItemPriceMultiplier = "ShopItemPriceMultiplier",
  ShopItemRefreshInitPrice = "shopItemRefreshInitPrice",
  ShopItemRefreshPriceMultiple = "shopItemRefreshPriceMulti",
  ShopItemRefreshMaxPrice = "shopItemRefreshMaxPrice",
  ShopEnergyFreeTimes = "ShopEnergyFreeTimes",
  LargeEnergyAmount = "LargeEnergyAmount",
  LargeEnergyDailyLimit = "LargeEnergyDailyLimit",
  LargeEnergyPrice = "LargeEnergyPrice",
  LargeEnergyOriginPrice = "LargeEnergyOriginPrice",
  ShopNormalDecorationTokenPrice = "shopNormalDecorationTokenPrice",
  ShopNormalDecorationTokenNum = "shopNormalDecorationTokenNum",
  ShopLimitDecorationTokenPrice = "shopLimitDecorationTokenPrice",
  ShopLimitDecorationTokenNum = "shopLimitDecorationTokenNum",
  ShopLimitDecorationTokenBuyTimes = "shopLimitDecorationTokenBuyTimes",
  TinyGameHideEntryLevel = "TinyGameHideEntryLevel",
  SunshineRandomOrder = "SunshineRandomOrder",
  SmallTboxToolHighLevelNum = "smallTboxToolHighLevelNum",
  BigTboxToolHighLevelNum = "bigTboxToolHighLevelNum",
  SmallTboxToolHighLevelWeight = "smallTboxToolHighLevelWeight",
  BigTboxToolHighLevelWeight = "bigTboxToolHighLevelWeight",
  SmallTboxToolHighLevel = "smallTboxToolHighLevel",
  BigTboxToolHighLevel = "bigTboxToolHighLevel",
  BubbleNoneedInvalid = "BubbleNoneedInvalid",
  DoubleEnergyChange = "doubleenergyChange",
  QuadrupleFixed = "quadrupleFixed"
}
SystemConfigModel = {}
SystemConfigModel.__index = SystemConfigModel

function SystemConfigModel:IsInitFinished()
  return self.m_systemConfig ~= nil
end

function SystemConfigModel:LoadFileConfig()
  self.m_systemConfig = {}
  for _, data in ipairs(require("Data.Config.SystemConfig", true)) do
    self.m_systemConfig[data.name] = data.value
  end
  self.m_systemConfig[SystemConfigKey.BubbleBroken] = ItemModelFactory.GetCodeAndWeightPairs(self:GetConfig(SystemConfigKey.BubbleBroken))
  if self:GetConfig(SystemConfigKey.SmallTboxToolHighLevelWeight) ~= nil then
    self.m_systemConfig[SystemConfigKey.SmallTboxToolHighLevelWeight] = ItemModelFactory.GetCodeAndWeightPairs(self:GetConfig(SystemConfigKey.SmallTboxToolHighLevelWeight))
  end
  if self:GetConfig(SystemConfigKey.BigTboxToolHighLevelWeight) ~= nil then
    self.m_systemConfig[SystemConfigKey.BigTboxToolHighLevelWeight] = ItemModelFactory.GetCodeAndWeightPairs(self:GetConfig(SystemConfigKey.BigTboxToolHighLevelWeight))
  end
  self:UpdateConfig()
end

function SystemConfigModel:GetConfig(key)
  return self.m_systemConfig[key]
end

function SystemConfigModel:UpdateConfig()
  if self.m_systemConfig == nil then
    return
  end
  local config = GM.ConfigModel:ParseGeneralConf(SystemConfigKey.BubbleBroken)
  if config then
    self.m_systemConfig[SystemConfigKey.BubbleBroken] = ItemModelFactory.GetCodeAndWeightPairs(StringUtil.Split(config, ";"))
  end
  config = GM.ConfigModel:ParseGeneralConf(SystemConfigKey.BubbleDelete)
  if config then
    self.m_systemConfig[SystemConfigKey.BubbleDelete] = config
  end
  config = GM.ConfigModel:ParseGeneralConf(SystemConfigKey.BubbleBrokenEnergyLimit)
  if config then
    self.m_systemConfig[SystemConfigKey.BubbleBrokenEnergyLimit] = tonumber(config)
  end
  config = GM.ConfigModel:ParseGeneralConf(SystemConfigKey.BubbleBrokenGemLimit)
  if config then
    self.m_systemConfig[SystemConfigKey.BubbleBrokenGemLimit] = tonumber(config)
  end
  config = GM.ConfigModel:ParseGeneralConf(SystemConfigKey.FreeBubbleNum)
  if config then
    self.m_systemConfig[SystemConfigKey.FreeBubbleNum] = tonumber(config)
  end
  config = GM.ConfigModel:ParseGeneralConf(SystemConfigKey.MainBoardBubbleNum)
  if config then
    self.m_systemConfig[SystemConfigKey.MainBoardBubbleNum] = tonumber(config)
  end
end
