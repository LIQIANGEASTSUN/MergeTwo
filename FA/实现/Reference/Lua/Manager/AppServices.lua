local _register = {
    --PaymentManager = "System.Buy.LuaPaymentManager",
    EventDispatcher = "System.Core.EventDispatcher",
    User = "User.UserManager",
    Connecting = "System.Core.Network.ConnectingPanelLogic",
    Connecting_Pay = "System.Buy.ConnectPayPanelLogic",
    PackageDefault = "User.PackageDefault",
    Notification = "Game.System.Notification.Notification",
    FarmManager = "MainCity.Manager.FarmManager",
    GuideArrowManager = "MainCity.Manager.GuideArrowManager",
    ItemIcons = "Item.ItemIcons",
    DynamicUpdateManager = "MainCity.Manager.DynamicUpdateManager",
    -- Task = "ScreenPlays.Mission.TaskManager",
    Task = "Task.TaskManager",
    TaskDescConverter = "Task.TaskDescConverter",
    TaskIconButtonLogic = "User.TaskIconButtonLogic",
    FoodContainer = "MagicalCreatures.Manager.DragonFoodContainer",
    Clean = "MainCity.Manager.CleanManager",
    Jump = "Jump.AutoJump",
    JumpTask = "Jump.JumpTask",
    UITextTip = "MainCity.UI.UITextTip",
    SceneTextTip = "MainCity.UI.SceneTextTip",
    ClickEffectTool = "MainCity.UI.ClickEffectTool",
    CollectAllPrompt = "MagicalCreatures.Manager.CollectAllPrompt",
    FiveStarManager = "MainCity.Manager.FiveStarManager",
    BuildingRepair = "User.BuildingRepairManager",
    ShakeCollectHangUp = "User.ShakeCollectHangUp",
    FactoryManager = "MainCity.Manager.FactoryManager",
    FactoryCenterManager = "MainCity.Manager.FactoryCenterManager",
    MagicalCreatures = "MagicalCreatures.Manager.MagicalCreaturesManager",
    DiamondLogic = "User.DiamondLogic",
    UserCoinLogic = "User.UserCoinLogic",
    ExpLogic = "MainCity.Logic.ExpLogic",
    -- Animation
    FlyAnimation = "Game.Common.FlyAnimation",
    RewardAnimation = "Game.Common.RewardAnimation",
    OrderTask = "Order.OrderTaskManager",
    TimeOrder = "Order.TimeOrderManager",
    AgentAppear = "MainCity.Component.AgentAppear",
    --TaskData = "Data.TaskData",
    --data
    AccountData = "Data.AccountData",
    --Energy discount activity
    EnergyDisCountBuff = "MainCity.Manager.EnergyDiscountBuffManager",
    DragonBuff = "MainCity.Manager.DragonBuffManager",
    DiamondCostBuff = "MainCity.Manager.DiamondCostBuffManager",
    ActivityScoreBuff = "MainCity.Manager.ActivityScoreBuffManager",
    --ads
    AdsManager = "Game.Sdk.Ads.AdsManager",
    RedDotManage = "User.RedDotManage",
    DayRewardManager = "User.DayRewardManager",
    MailManager = "Game.System.Mail.MailManager",
    AdsEnergyManager = "MainCity.Manager.AdsEnergyManager",
    MapGiftManager = "MainCity.Manager.MapGiftManager",
    WeeklyGiftManager = "MainCity.Manager.WeeklyDragonGiftManager",
    FashionLimitedGiftManager = "MainCity.Manager.FashionLimitedGiftManager",
    GiftFrameManager = "MainCity.Manager.GiftFrameManager",
    PoolManage = "objectPool.PoolManage",
    ProductManager = "System.Buy.ProductManager_" .. RuntimeContext.PAY_PLATE,
    ShopGroupManager = "System.Buy.ShopGroupManager",
    GiftManager = "Game.System.Gift.GiftManager",
    CommissionManager = "MainCity.Manager.CommissionManager",
    CollectionItem = "User.CollectionItem",
    GoldOrder = "Game.System.goldOrder.GoldOrder2Manager",
    SkinLogic = "Manager.SkinLogic",
    GetWay = "Manager.GetWay",
    ButtonsForSceneManager = "Manager.ButtonsForSceneManager",
    DiamondConfirmUIManager = "UI.Components.DiamondConfirmUIManager",
    LuckyTurntable = "MainCity.Logic.LuckyTurntableLogic",
    AdsBombManager = "Game.System.AdsBomb.AdsBombManager",
    AvatarFrame = "Manager.AvatarFrameLogic",
    Avatar = "Manager.AvatarLogic",
    ActiveEggManager = "Game.System.ActiveEgg.ActiveEggManager",
    MapStarManager = "MapStar.MapStarManager",
    MonCard = "MainCity.Manager.MonCardManager",
    GrowthFundManager = "MainCity.Manager.GrowthFundManager",
    MapCursor = "Game.System.MapCursor.MapCursor",
    SceneCloseInfo = "MainCity.Manager.SceneCloseInfoManager",
    SaveAnimal = "SaveAnimal.SaveAnimalManager",
    ChapterStar = "MapStar.SceneChapterStarManager",
    AdsRepeatBrushBox = "MainCity.Manager.AdsRepeatBrushBoxManager",
    DragonDropManager = "MainCity.Manager.DragonDropManager",
    SkinEquipManager = "MainCity.Manager.SkinEquipManager",
    DragonRecoverPower = "UI.Maze.DragonRecoverPower",
    SevenDaysManager = "MainCity.Manager.SevenDaysManager",
    --测试
    --TimerManager = "Utils.Timer.TimerManager",
    DragonMaze = "Game.System.DragonMaze.DragonMazeManager",
    TeamManager = "Team.TeamManager",
    PiggyBank = "Game.System.PiggyBank.PiggyBankManager",
    ActivityCalendar = "MainCity.Manager.ActivityCalendarLogic",
    DragonDraw = "Game.System.DragonDraw.DragonDrawManager",
    BagDot = "MainCity.Manager.BagDotManager",
    PartnerRedot = "MainCity.Manager.PartnerRedotManager",
    DragonNestManager = "MagicalCreatures.Manager.DragonNestManager",
    PersonCardManager = "MainCity.Manager.PersonCardManager",
    PipeManager = "MainCity.Manager.PipeManager",
    HangUpRewardManager = "MainCity.Manager.HangUpRewardManager",
    ShutDownServerLogic = "Game.System.ShutDownServer.ShutDownServerLogic",
    ReflowRewardManager = "MainCity.Manager.ReflowRewardManager",
    VipSystemManager = "MainCity.Manager.VipSystemManager",
    LuckyCardManager = "MainCity.Manager.LuckyCardManager",
    PrivilegeManager = "MainCity.Manager.PrivilegeManager",
    PartnerManager = "MainCity.Manager.PartnerManager",
    BuildingModifyManager = "Cleaner.Manager.BuildingModifyManager",
    DailyLuckyCardManager = "MainCity.Manager.DailyLuckyCardManager",
    ContinuousGiftManager = "MainCity.Manager.ContinuousGiftManager",
    CardCollectManager = "MainCity.Manager.CardCollectManager",
    CommonWayManager = "MainCity.Manager.CommonWayManager",
    --fa 新管理器
    MagicalCreaturesBubbles = "MagicalCreatures.Manager.MagicalCreaturesBubbles",
    PartnerOrderManager = "MainCity.Manager.PartnerOrderManager",
    PartnerParty = "MainCity.Manager.PartnerPartyManager",
    --分帧处理
    FrameQueueExcutor = "Manager.FrameQueueExcutor",
    CutVegetables = "MainCity.CutVegetables.CutVegetablesSystem",
    WelcomPartnerManager = "MagicalCreatures.Manager.WelcomPartnerManager",
    BuildingSkinManager = "MainCity.Manager.BuildingSkinManager",
    PartnerMapEventManager = "MainCity.Manager.PartnerMapEventManager",
    LowVersionManager = "MainCity.Manager.LowVersionManager",
    RemainsFishingManager = "MainCity.Manager.RemainsFishingManager",
    BuffTimePauseManager = "MainCity.Manager.BuffTimePauseManager",
    PopWindowManager = "Manager.PopWindowManager",

    NewerGiftManager = "Game.System.NewerGift.NewerGiftManager",
    PveManager = "MainCity.Manager.PveManager",
    ThreeClearGameManager = "Game.Activities.ThreeClear.ThreeClearGame.ThreeClearGameManager",
    ThreeClearGameArchive = "Game.Activities.ThreeClear.ThreeClearGameArchive",
    JamClearGameLogicManager = "Game.Activities.Jam.JamClearGameLogicManager",
    EnergyGiftRecommendManager = "Manager.EnergyGiftRecommendManager",
    ABTestManager = "Manager.ABTestManager",
    WelfareManager = "Game.System.Welfare.WelfareManager",
    CmpManager = "Game.Sdk.CmpManager",
    TreasureMapManager = "Game.Activities.TreasureMap.TreasureMapManager",
    HelpManager = "Manager.HelpManager",
    ObstacleTransform = "MainCity.Manager.ObstacleTransformManager",
    CatAdsManager = "MainCity.Manager.CatAdsManager",
    BuildCommissionManager = "MainCity.Manager.BuildCommissionManager",
    TreasureDailyRefreshManager = "MainCity.Manager.TreasureDailyRefreshManager",
    AdsAccumulatedManager = "MainCity.Manager.AdsAccumulatedManager",
    TwoMergeManager = "Manager.TwoMergeManager",
    TwoMergeMapGridManager = "Manager.TwoMergeMapGridManager",
    TwoMergeOrderManager = "Game.TwoMerge.Order.TwoMergeOrderManager",
    RecoveryItemManager = "User.RecoveryItemManager"
}

local mt = {
    __index = function(t, k)
        local path = _register[k] or "Manager." .. k .. "Manager"
        local inst = include(path)
        rawset(t, k, inst)
        Runtime.InvokeCbk(inst.Ctor_V11, inst)
        return inst
    end
}
---@class AppServices
AppServices = {
    ---@type LuaPaymentManager
    --PaymentManager = nil,
    ---@type EventDispatcher
    EventDispatcher = nil,
    ---@type UserManager
    User = nil,
    ---@type ConnectingPanelLogic
    Connecting = nil,
    ---@type MetaManager
    Meta = nil,
    ---@type UnlockManager
    Unlock = nil,
    ---@type FarmManager
    FarmManager = nil,
    ---@type ButtonsForSceneManager
    ButtonsForSceneManager = nil,
    ---@type TaskManager
    Task = nil,
    ---@type TaskDescConverter
    TaskDescConverter = nil,
    ---@type TaskIconButtonLogic
    TaskIconButtonLogic = nil,
    ---@type DragonFoodContainer
    FoodContainer = nil,
    ---@type ItemIcons
    ItemIcons = nil,
    ---@type CleanManager
    Clean = nil,
    ---@type AutoJump
    Jump = nil,
    ---@type JumpTask
    JumpTask = nil,
    ---@type UITextTip
    UITextTip = nil,
    ---@type SceneTextTip
    SceneTextTip = nil,
    ---@type ClickEffectTool
    ClickEffectTool = nil,
    ---@type CollectAllPrompt
    CollectAllPrompt = nil,
    ---@type Notification
    Notification = nil,
    ---@type PackageDefault
    PackageDefault = nil,
    ---@type FiveStarManager
    FiveStarManager = nil,
    ---@type BuildingRepairManager
    BuildingRepair = nil,
    ---@type ShakeCollectHangUp
    ShakeCollectHangUp = nil,
    ---@type FactoryManager
    FactoryManager = nil,
    ---@type FactoryCenterManager
    FactoryCenterManager = nil,
    ---@type MagicalCreaturesManager
    MagicalCreatures = nil,
    ---@type DiamondLogic
    DiamondLogic = nil,
    ---@type UserCoinLogic
    UserCoinLogic = nil,
    ---@type ExpLogic
    ExpLogic = nil,
    ---@type FlyAnimation
    FlyAnimation = nil,
    ---@type RewardAnimation
    RewardAnimation = nil,
    ---@type OrderTaskManager
    OrderTask = nil,
    ---@type TimeOrderManager
    TimeOrder = nil,
    ---@type AccountData
    AccountData = nil,
    ---@type AgentAppear
    AgentAppear = nil,
    ---@type EnergyDiscountBuffManager
    EnergyDisCountBuff = nil,
    ---@type DiamondCostBuffManager
    DiamondCostBuff = nil,
    ---@type ActivityScoreBuffManager
    ActivityScoreBuff = nil,
    ---@type AdsManager
    AdsManager = nil,
    ---@type RedDotManage
    RedDotManage = nil,
    ---@type DayRewardManager
    DayRewardManager = nil,
    ---@type MailManager
    MailManager = nil,
    ---@type AdsEnergyManager
    AdsEnergyManager = nil,
    ---@type MapGiftManager
    MapGiftManager = nil,
    ---@type WeeklyGiftManager
    WeeklyGiftManager = nil,
    ---@type PoolManage
    PoolManage = nil,
    ---@type ProductManager
    ProductManager = nil,
    ---@type ShopGroupManager
    ShopGroupManager = nil,
    ---@type GiftManager
    GiftManager = nil,
    ---@type CommissionManager
    CommissionManager = nil,
    ---@type CollectionItem
    CollectionItem = nil,
    ---@type GoldOrder2Manager
    GoldOrder = nil,
    ---@type SkinLogic
    SkinLogic = nil,
    ---@type GetWay
    GetWay = nil,
    ---@type DiamondConfirmUIManager
    DiamondConfirmUIManager = nil,
    ---@type LuckyTurntableLogic
    LuckyTurntable = nil,
    ---@type AdsBombManager
    AdsBombManager = nil,
    ---@type AvatarFrameLogic
    AvatarFrame = nil,
    ---@type AvatarLogic
    Avatar = nil,
    ---@type ActiveEggManager
    ActiveEggManager = nil,
    ---@type MapStarManager
    MapStarManager = nil,
    ---@type MonCardManager
    MonCard = nil,
    ---@type GrowthFundManager
    GrowthFundManager = nil,
    ---@type GuideArrowManager
    GuideArrowManager = nil,
    ---@type ScarecrowManager
    Scarecrow = nil,
    ---@type MapCursor
    MapCursor = nil,
    ---@type SceneCloseInfoManager
    SceneCloseInfo = nil,
    ---@type TimerManager
    --TimerManager = nil,
    ---@type SaveAnimalManager
    SaveAnimal = nil,
    ---@type SceneChapterStarManager
    ChapterStar = nil,
    ---@type AdsRepeatBrushBoxManager
    AdsRepeatBrushBox = nil,
    ---@type DragonDropManager
    DragonDropManager = nil,
    ---@type SkinEquipManager
    SkinEquipManager = nil,
    ---@type DragonRecoverPower
    DragonRecoverPower = nil,
    ---@type DragonMazeManager
    DragonMaze = nil,
    ---@type TeamManager
    TeamManager = nil,
    ---@type PiggyBankManager
    PiggyBank = nil,
    ---@type ActivityCalendarLogic
    ActivityCalendar = nil,
    ---@type DragonDrawManager
    DragonDraw = nil,
    ---@type BagDotManager
    BagDot = nil,
    ---@type PartnerRedotManager
    PartnerRedot = nil,
    ---@type GiftFrameManager
    GiftFrameManager = nil,
    ---@type DragonNestManager
    DragonNestManager = nil,
    ---@type PersonCardManager
    PersonCardManager = nil,
    ---@type PipeManager
    PipeManager = nil,
    ---@type DragonBuffManager
    DragonBuff = nil,
    ---@type InviteFriendsManager
    InviteFriends = nil,
    ---@type HangUpRewardManager
    HangUpRewardManager = nil,
    ---@type ReflowRewardManager
    ReflowRewardManager = nil,
    ---@type VipSystemManager
    VipSystemManager = nil,
    ---@type LuckyCardManager
    LuckyCardManager = nil,
    ---@type PrivilegeManager
    PrivilegeManager = nil,
    ---@type PartnerManager
    PartnerManager = nil,
    ---@type BuildingModifyManager
    BuildingModifyManager = nil,
    ---@type BuildingShopManager
    BuildingShop = nil,
    ---@type SevenDaysManager
    SevenDaysManager = nil,
    ---@type DailyLuckyCardManager
    DailyLuckyCardManager = nil,
    ---@type BuffTimePauseManager
    BuffTimePauseManager = nil,

    --fa 新管理器
    ---@type MagicalCreaturesBubbles
    MagicalCreaturesBubbles = nil,
    ---@type PartnerOrderManager
    PartnerOrderManager = nil,
    ---@type FrameQueueExcutor
    FrameQueueExcutor = nil,
    ---@type CutVegetablesSystem
    CutVegetables = nil,
    ---@type WelcomPartnerManager
    WelcomPartnerManager = nil,
    ---@type BuildingSkinManager
    BuildingSkinManager = nil,
    ---@type PartnerMapEventManager
    PartnerMapEventManager = nil,
    ---@type PartnerPartyManager
    PartnerParty = nil,
    ---@type LowVersionManager
    LowVersionManager = nil,
    ---@type RemainsFishingManager
    RemainsFishingManager = nil,
    ---@type PopWindowManager
    PopWindowManager = nil,
    ---@type ContinuousGiftManager
    ContinuousGiftManager = nil,
    ---@type NewerGiftManager
    NewerGiftManager = nil,
    ---@type CardCollectManager
    CardCollectManager = nil,
    ---@type CommonWayManager
    CommonWayManager = nil,
    ---@type PveManager
    PveManager = nil,
    ---@type ThreeClearGameManager
    ThreeClearGameManager = nil,
    ---@type ThreeClearGameArchive
    ThreeClearGameArchive = nil,
    ---@type JamClearGameLogicManager
    JamClearGameLogicManager = nil,
    ---@type EnergyGiftRecommendManager
    EnergyGiftRecommendManager = nil,
    ---@type ABTestManager
    ABTestManager = nil,
    ---@type WelfareManager
    WelfareManager = nil,
    ---@type CmpManager
    CmpManager = nil,
    ---@type TreasureMapManager
    TreasureMapManager = nil,
    ---@type HelpManager
    HelpManager = nil,
    ---@type ObstacleTransform
    ObstacleTransform = nil,
    ---@type CatAdsManager
    CatAdsManager = nil,
    ---@type BuildCommissionManager
    BuildCommissionManager = nil,
    ---@type TreasureDailyRefreshManager
    TreasureDailyRefreshManager = nil,
    ---@type AdsAccumulatedManager
    AdsAccumulatedManager = nil,
    ---@type TwoMergeManager
    TwoMergeManager = nil,
    ---@type TwoMergeMapGridManager
    TwoMergeMapGridManager = nil,
    ---@type TwoMergeOrderManager
    TwoMergeOrderManager = nil,
    ---@type RecoveryItemManager
    RecoveryItemManager = nil,
}
setmetatable(AppServices, mt)

return AppServices
