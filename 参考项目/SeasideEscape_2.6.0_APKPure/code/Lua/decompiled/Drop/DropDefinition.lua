DropDefinition = {
  [ActivityType.VendingDrop] = {
    EntryButtonKey = ESceneViewHudButtonKey.VendingDrop,
    ActivityDataTableName = VirtualDBTableName.VendingDrop,
    StateChangedEvent = EEventType.VendingDropStateChanged,
    ReadyWindowPrefabName = UIPrefabConfigName.VendingDropReadyWindow,
    EndWindowPrefabName = UIPrefabConfigName.VendingDropEndWindow,
    MainWindowPrefabName = UIPrefabConfigName.VendingDropMainWindow,
    BuyTokenPrefabName = UIPrefabConfigName.VendingDropBuyTokenWindow,
    LevelProgressPrefabName = UIPrefabConfigName.VendingDropLevelProgressWindow,
    HelpWindowPrefabName = UIPrefabConfigName.VendingDropHelpWindow,
    ActivityTokenPropertyType = EPropertyType.DropToken,
    ActivityTokenIconName = ImageFileConfigName.img_icon_daibi,
    BIRecoverToken = EBIType.DropRecoverToken,
    BIAcquireScore = "dp_score",
    ResourceLabels = {
      AddressableLabel.VendingDrop
    },
    TutorialStartCondition = ETutorialStartCondition.VendingDropStart
  }
}
