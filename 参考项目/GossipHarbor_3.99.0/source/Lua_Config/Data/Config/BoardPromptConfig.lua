local priority = 0

local function autoIncreasePriority()
  priority = priority + 1
  return priority
end

return {
  {
    Priority = autoIncreasePriority(),
    Type = "TapRewardBubbleItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "TapFogUnlockKeyItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "FarmboardTapBlockKeyItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "FarmboardAnimalProduce"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "FarmboardActivateAnimal"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "TapStickerboardClearToolItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "TapPortalItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "FinishOrder",
    CloseCondition = "6"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "FinishTask",
    CloseCondition = "5"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "SwallowItemsDisallowTap"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "SwallowItems"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "TapCacheItems",
    CloseCondition = "5"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "DigCollectItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "GeneratorFactory"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "MergeItems"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "DigCollectLowLevelItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "FarmboardBlockProduce"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "OpenChest",
    CloseCondition = "7"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "StoreItem"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "MiniboardEnergyUseTap"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "TapDisposableSpreadItem",
    CloseCondition = "7"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "TapNonDisposableSpreadItem",
    CloseCondition = "7"
  },
  {
    Priority = autoIncreasePriority(),
    Type = "DigItem"
  }
}
