HuntActivityDefinition = {}
HuntTokenMap = {}

local function CreateActivityDefinition(activityType, prefix, overrideTable)
  local BaseTable = {
    EntryButtonKey = ESceneViewHudButtonKey[prefix],
    ActivityDataTableName = VirtualDBTableName[prefix .. "Activity"],
    ItemDataTableName = VirtualDBTableName[prefix .. "Item"],
    ItemLayerDataTableName = VirtualDBTableName[prefix .. "ItemLayer"],
    ItemCacheDataTableName = VirtualDBTableName[prefix .. "ItemCache"],
    StateChangedEvent = EEventType[prefix .. "StateChanged"],
    RewardBIType = EBIType[prefix .. "Reward"],
    BreakBubbleBIType = EBIType[prefix .. "BreakBubble"],
    BIProgressReward = EBIType[prefix .. "ProgressReward"],
    HorizontalTiles = 7,
    VerticalTiles = 8,
    EntryPrefabName = UIPrefabConfigName[prefix .. "Entry"],
    BoardEntryPrefabName = UIPrefabConfigName[prefix .. "BoardEntry"],
    NoticeWindowPrefabName = UIPrefabConfigName.HasConfig(prefix .. "NoticeWindow") and UIPrefabConfigName[prefix .. "NoticeWindow"] or nil,
    ReadyWindowPrefabName = UIPrefabConfigName[prefix .. "ReadyWindow"],
    MainWindowPrefabName = UIPrefabConfigName[prefix .. "MainWindow"],
    CompleteWindowPrefabName = UIPrefabConfigName[prefix .. "CompleteWindow"],
    EndWindowPrefabName = UIPrefabConfigName[prefix .. "EndWindow"],
    RewardRecoverWindowPrefabName = UIPrefabConfigName[prefix .. "RewardRecoverWindow"],
    TwoButtonWindowPrefabName = UIPrefabConfigName.HasConfig(prefix .. "TwoButtonWindow") and UIPrefabConfigName[prefix .. "TwoButtonWindow"] or nil,
    RewardWindowName = UIPrefabConfigName[prefix .. "RewardWindow"],
    ItemCollectFlyScorePrefabName = UIPrefabConfigName[prefix .. "DigFlyScore"],
    ResourceLabels = {
      AddressableLabel.HuntCommon,
      AddressableLabel[prefix],
      AddressableLabel["Event" .. prefix]
    },
    TextKeyPrefix = activityType,
    BaseItemTextKey = activityType .. "_1_1",
    MapEntryImageName = ImageFileConfigName[activityType .. "_icon_map"],
    BoardEntryImageName = ImageFileConfigName[activityType .. "_icon_board"],
    TileImageName1 = ImageFileConfigName.HasConfig(activityType .. "_tile_bg1") and ImageFileConfigName[activityType .. "_tile_bg1"] or nil,
    TileImageName2 = ImageFileConfigName.HasConfig(activityType .. "_tile_bg2") and ImageFileConfigName[activityType .. "_tile_bg2"] or nil,
    TokenType = EPropertyType[prefix .. "Token"],
    TokenImage = ImageFileConfigName[activityType .. "_token"],
    TokenImageBig = ImageFileConfigName.HasConfig(activityType .. "_tokenbig") and ImageFileConfigName[activityType .. "_tokenbig"] or ImageFileConfigName[activityType .. "_token"],
    BoardBg = UIPrefabConfigName[prefix .. "BoardBg"],
    TutorialStartCondition = ETutorialStartCondition.HuntActivityStart,
    TutorialRolePrefabName = UIPrefabConfigName.Rowan,
    StartTutorialId = ETutorialId.HuntStartWithDialog,
    StoryId = "story_" .. activityType .. "_0",
    HasSpreadEnergy = true,
    HideSwallowItemBg = true,
    IsUseNewBoardIcon = true,
    UseNewRewardRecoverWindow = true,
    NeedPlayTransformEffectItemCodes = nil,
    UseEfficientScroll = true
  }
  BaseTable.__index = BaseTable
  HuntTokenMap[BaseTable.TokenType] = true
  HuntActivityDefinition[activityType] = setmetatable(overrideTable, BaseTable)
  HuntActivityDefinition[activityType].__index = HuntActivityDefinition[activityType]
end

CreateActivityDefinition(ActivityType.Hunt95, "Hunt95", {
  StartTutorialId = ETutorialId.HuntMonster,
  UseEfficientScroll = true,
  TutorialRolePrefabName = UIPrefabConfigName.Morgan,
  VerticalTiles = 7,
  BoardOffset = Vector3(-388, -643.7, 100),
  BoardScale = 0.78,
  ItemBoardSize = Vector2(1100, 1050),
  ItemBoardPos = Vector3(362.5, 225, 750),
  HuntPdViewPos = {
    hunt_pd_2 = Vector3(750, 1400, -100)
  },
  HuntPdBoardPos = {x = 4, y = -2},
  TutorialTextKeyPrefix = "simulate_cache3",
  SignatureSwallowSound = AudioFileConfigName.sfxWatering,
  HitFlyPrefabName = UIPrefabConfigName.Hunt95HitFly,
  HelpWindowPrefabName = UIPrefabConfigName.Hunt95MonsterHelpWindow,
  MonsterHunt = true,
  AttackItemFileName = ImageFileConfigName.hunt95_atk,
  NormalLevelTextColor = "883325",
  CircleLevelTextColor = "883325",
  IsPlusHPForHuntMonster = true,
  MOnsterHuntMaxHitFlyNum = 3,
  IsShowRewardType = false,
  PaperBoxSprite = {
    "hunt95_mb_1"
  },
  CobwebSprite = "hunt95_mb_2",
  CobwebSpriteOffset = Vector3(0, 25, -1),
  IgnoreProgressVibration = true,
  IgnoreMonsterPositionAdaptive = true,
  MonsterHuntHitPosEndOffsetMargin = 0
})
CreateActivityDefinition(ActivityType.Hunt96, "Hunt96", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt96_mb_1",
    "hunt96_mb_2",
    "hunt96_mb_3"
  },
  CobwebSprite = "hunt96_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Alexander
})
CreateActivityDefinition(ActivityType.Hunt97, "Hunt97", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt97_mb_1",
    "hunt97_mb_2",
    "hunt97_mb_3"
  },
  CobwebSprite = "hunt96_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Thalia
})
CreateActivityDefinition(ActivityType.Hunt98, "Hunt98", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt97_mb_1",
    "hunt97_mb_2",
    "hunt97_mb_3"
  },
  CobwebSprite = "hunt96_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Anastasia
})
CreateActivityDefinition(ActivityType.Hunt99, "Hunt99", {
  StartTutorialId = ETutorialId.HuntMonster,
  UseEfficientScroll = true,
  TutorialRolePrefabName = UIPrefabConfigName.Natassa,
  VerticalTiles = 7,
  BoardOffset = Vector3(-388, -643.7, 100),
  BoardScale = 0.78,
  ItemBoardSize = Vector2(1100, 1050),
  ItemBoardPos = Vector3(362.5, 225, 750),
  HuntPdViewPos = {
    hunt_pd_2 = Vector3(750, 1400, -100)
  },
  HuntPdBoardPos = {x = 4, y = -2},
  TutorialTextKeyPrefix = "simulate_cache3",
  SignatureSwallowSound = AudioFileConfigName.sfxWatering,
  HitFlyPrefabName = UIPrefabConfigName.Hunt99HitFly,
  HelpWindowPrefabName = UIPrefabConfigName.Hunt99MonsterHelpWindow,
  MonsterHunt = true,
  AttackItemFileName = ImageFileConfigName.hunt99_atk,
  NormalLevelTextColor = "883325",
  CircleLevelTextColor = "883325",
  IsPlusHPForHuntMonster = false,
  MOnsterHuntMaxHitFlyNum = 3,
  IsShowRewardType = false,
  PaperBoxSprite = {
    "hunt99_mb_2"
  },
  CobwebSprite = "hunt99_mb_1",
  CobwebSpriteOffset = Vector3(0, 25, -1),
  IgnoreProgressVibration = true,
  IgnoreMonsterPositionAdaptive = true,
  MonsterHuntHitPosEndOffsetMargin = 0
})
CreateActivityDefinition(ActivityType.Hunt100, "Hunt100", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt100_mb_1",
    "hunt100_mb_2",
    "hunt100_mb_3"
  },
  CobwebSprite = "hunt100_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Thalia
})
CreateActivityDefinition(ActivityType.Hunt101, "Hunt101", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt101_mb_1",
    "hunt101_mb_2",
    "hunt101_mb_3"
  },
  CobwebSprite = "hunt101_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Emilie
})
CreateActivityDefinition(ActivityType.Hunt102, "Hunt102", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt102_mb_1",
    "hunt102_mb_2",
    "hunt102_mb_3"
  },
  CobwebSprite = "hunt102_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Rowan
})
CreateActivityDefinition(ActivityType.Hunt103, "Hunt103", {
  VerticalTiles = 8,
  BoardOffset = Vector3(-454.6, -378.3, 100),
  BoardScale = 0.916,
  IsUseNewBoardIcon = true,
  HideSwallowItemBg = true,
  PaperBoxSprite = {
    "hunt103_mb_1",
    "hunt103_mb_2",
    "hunt103_mb_3"
  },
  CobwebSprite = "hunt103_mb_4",
  CobwebSpriteOffset = Vector3(0, 25, 0),
  PdMaskItemYOffset = 150,
  SliderIconSize = 100,
  TutorialRolePrefabName = UIPrefabConfigName.Navi
})
