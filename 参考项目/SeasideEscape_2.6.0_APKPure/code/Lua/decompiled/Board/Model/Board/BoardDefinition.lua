local nStart = 0

local function autoIncrease()
  nStart = nStart + 1
  return nStart
end

BoardEventType = {
  MergeItem = autoIncrease(),
  SpreadItem = autoIncrease(),
  CollectItem = autoIncrease(),
  CollapseItem = autoIncrease(),
  PopCachedItem = autoIncrease(),
  CostItem = autoIncrease(),
  SellItem = autoIncrease(),
  UndoSellItem = autoIncrease(),
  LackSpreadEnergy = autoIncrease(),
  StoreItem = autoIncrease(),
  RetrieveStoredItem = autoIncrease(),
  LackGem = autoIncrease(),
  BubbleBreak = autoIncrease(),
  BubbleDisappear = autoIncrease(),
  FinishOrder = autoIncrease(),
  SpreadFailed = autoIncrease(),
  StoreFailed = autoIncrease(),
  PlayAccelerationAnimation = autoIncrease(),
  ChooseItem = autoIncrease(),
  TransformItem = autoIncrease(),
  SwallowItem = autoIncrease(),
  ItemUnlocked = autoIncrease(),
  ShakeItem = autoIncrease(),
  BatchRemoveItems = autoIncrease(),
  ChargeItem = autoIncrease(),
  BatchSwallowItem = autoIncrease(),
  SplitItem = autoIncrease(),
  TimeSkip = autoIncrease(),
  SpreadIntoCache = autoIncrease(),
  DoubleConfirmedCollect = autoIncrease(),
  RefreshOrder = autoIncrease(),
  OrderPrompt = autoIncrease(),
  DissolveItem = autoIncrease(),
  SweepItem = autoIncrease(),
  AddNewItem = autoIncrease(),
  AddLuckyStarItem = autoIncrease(),
  FinishTrainOrder = autoIncrease(),
  IceDisappear = autoIncrease(),
  AddIceItem = autoIncrease(),
  UnlockCloud = autoIncrease(),
  ItemFindEffect = autoIncrease(),
  ItemFindNewEffect = autoIncrease(),
  ActivityItemFindEffect = autoIncrease(),
  HuntPdTransformItem = autoIncrease(),
  AddMagicCrucibleItem = autoIncrease(),
  DigFailed = autoIncrease(),
  AddSunshineItem = autoIncrease(),
  AddSunshineRaceItem = autoIncrease(),
  ShowSunshineRaceItem = autoIncrease(),
  FocusOnItem = autoIncrease(),
  ItemScaled = autoIncrease(),
  HuntKeyCollect = autoIncrease(),
  AddPdItem = autoIncrease(),
  SignatureUpgrade = autoIncrease(),
  AddFireworksGalaItem = autoIncrease(),
  ItemFall = autoIncrease(),
  ItemStable = autoIncrease(),
  SpawnItem = autoIncrease(),
  FreefallHitTarget = autoIncrease(),
  HandleItemFailed = autoIncrease(),
  ChainLevelUp = autoIncrease(),
  RandomLevelUp = autoIncrease(),
  AddTriggerPlaneItem = autoIncrease(),
  AddChestCustomerItem = autoIncrease(),
  CollectFromItem = autoIncrease(),
  CollectFromCache = autoIncrease(),
  AddMonsterSpreadItem = autoIncrease(),
  ItemStickRewardClaim = autoIncrease()
}
BoardSpreadType = {
  Normal = nil,
  Lucky = 1,
  SuperLucky = 2,
  ExtraLucky = 11,
  ExtraSuperLucky = 12,
  DoubleLucky = 21,
  TripleLucky1 = 31,
  TripleLucky2 = 32,
  HuntSignature = 3,
  HuntKitchen = 4
}
BoardSpreadTypeName = {}
for name, id in pairs(BoardSpreadType) do
  BoardSpreadTypeName[id] = name
end

function BoardSpreadType.IsLuckySpread(spreadType)
  return spreadType == BoardSpreadType.Lucky or spreadType == BoardSpreadType.SuperLucky or spreadType == BoardSpreadType.ExtraLucky or spreadType == BoardSpreadType.ExtraSuperLucky or spreadType == BoardSpreadType.DoubleLucky or spreadType == BoardSpreadType.TripleLucky1 or spreadType == BoardSpreadType.TripleLucky2
end

BoardState = {
  Stable = "stable",
  Falling = "falling",
  AutoMerge = "autoMerge",
  Settlement = "settlement"
}
