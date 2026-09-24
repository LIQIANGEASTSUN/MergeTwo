NoCDTrainRewardType = {
  Order = "single",
  Line = "straight",
  Extra = "extra",
  Stage = "stage",
  Final = "final"
}
NoCDTrainDefinition = {}

local function CreateActivityDefinition(activityType, prefix, overrideTable)
  local BaseTable = {
    StateChangedEvent = EEventType[prefix .. "StateChangedEvent"],
    OrderChangedEvent = EEventType[prefix .. "OrderChangedEvent"],
    RoundChangedEvent = EEventType[prefix .. "RoundStateChanged"],
    ResourceLabels = {
      AddressableLabel.NoCDTrainCommon,
      AddressableLabel[prefix]
    },
    MapEntryPrefabName = UIPrefabConfigName[prefix .. "Entry"],
    BoardEntryPrefabName = UIPrefabConfigName[prefix .. "BoardEntry"],
    MainWindowPrefabName = UIPrefabConfigName[prefix .. "MainWindow"],
    ReadyWindowPrefabName = UIPrefabConfigName[prefix .. "ReadyWindow"],
    TurnInWindowPrefabName = UIPrefabConfigName[prefix .. "TurnInWindow"],
    HelpWindowPrefabName = UIPrefabConfigName[prefix .. "HelpWindow"],
    NoticeWindowPrefabName = UIPrefabConfigName[prefix .. "NoticeWindow"],
    SuccessWindowPrefabName = UIPrefabConfigName[prefix .. "SuccessWindow"],
    FailWindowPrefabName = UIPrefabConfigName[prefix .. "FailWindow"],
    EntryButtonKey = ESceneViewHudButtonKey[prefix],
    ActivityDataTableName = VirtualDBTableName[prefix .. "Activity"],
    ItemDataTableName = VirtualDBTableName[prefix .. "Item"],
    ItemLayerDataTableName = VirtualDBTableName[prefix .. "ItemLayer"],
    ItemCacheDataTableName = VirtualDBTableName[prefix .. "ItemCache"],
    TileImageName1 = ImageFileConfigName[activityType .. "_item_bg2"],
    BoardEntryImageName = ImageFileConfigName[activityType .. "_icon"],
    OrderRewardBIType = EBIType.NoCDTrainOrderReward,
    LineRewardBIType = EBIType.NoCDTrainLineReward,
    ExtraRewardBIType = EBIType.NoCDTrainExtraReward,
    StageRewardBIType = EBIType.NoCDTrainStageReward,
    FinalRewardBIType = EBIType.NoCDTrainFinalReward,
    ClickEntryBIType = EBIType.NoCDTrainClickEntry,
    ProgressToken = EPropertyType[prefix .. "ProgressToken"],
    Role = UIPrefabConfigName.Emilie,
    ActivityTokenPropertyType = EPropertyType[prefix .. "ProgressToken"],
    ActivityTokenImage = ImageFileConfigName[prefix .. "_progress_token"]
  }
  BaseTable.__index = BaseTable
  NoCDTrainDefinition[activityType] = setmetatable(overrideTable, BaseTable)
  NoCDTrainDefinition[activityType].__index = NoCDTrainDefinition[activityType]
end

CreateActivityDefinition(ActivityType.NoCDTrain, "NoCDTrain", {})
CreateActivityDefinition(ActivityType.NoCDTrain2, "NoCDTrain2", {})
CreateActivityDefinition(ActivityType.NoCDTrain3, "NoCDTrain3", {})
CreateActivityDefinition(ActivityType.NoCDTrain4, "NoCDTrain4", {
  TutorialKeyPrefix = "trainOrder_Black5_tutorial_",
  TitleTextKey = "trainOrder_Black5_mian_desc"
})
CreateActivityDefinition(ActivityType.NoCDTrain5, "NoCDTrain5", {})
