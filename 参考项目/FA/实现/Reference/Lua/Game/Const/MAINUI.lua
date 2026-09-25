---@class MAINUI 用于控制飞道具时需要显示的icon
local MAINUI = {
    LAYERS = {
        SCENE_UI = "SCENE_UI",
        BASIC_UI = "BASIC_UI"
    },
    LAYOUTS = {
        LEFT = "LEFT",
        RIGHT = "RIGHT",
        TOP = "TOP",
        BOTTOM = "BOTTOM",
        CENTER = "CENTER",
        LEFT_TOP = "LEFT_TOP",
        RIGHT_TOP = "RIGHT_TOP",
        LEFT_BOTTOM = "LEFT_BOTTOM",
        RIGHT_BOTTOM = "RIGHT_BOTTOM",
        CENTER_TOP = "CENTER_TOP",
        CENTER_BOTTOM = "CENTER_BOTTOM"
    },

    ICONS = {
        EnergyIcon = 1,                 -- 精力
        DiamondIcon = 2,                -- 钻石
        CoinIcon = 3,                   -- 金币
        RedEnergyIcon = 4,              -- 红体力
        BuildingIcon = 6,               -- 建筑
        BackHomeIcon = 7,               -- 回家
        Experience = 9,                 -- 经验
        MailButton = 10,                -- 邮件
        WorldMapBtn = 11,               -- 地图
        DragonAssistBtn = 12,           --主界面的神龙协助按钮
        BagBtn = 13,                    -- 背包
        FactoryBtn = 14,                -- 工厂
        BreedBtn = 15,                  -- 培育
        DragonShopBtn = 16,             -- 龙商店
        TaskBtn = 17,                   -- 任务
        -- AchievementButton = 18, -- 采集成就
        Bomb = 19,                      -- 炸弹包裹
        AutoBomb = 19.1,                -- 超级炸弹包裹
        Head = 20,                      -- 头像
        SettingButton = 21,             -- 设置按钮
        DayRewardButton = 22,           -- 签到按钮
        DragonInfo = 23,                -- 龙信息
        DragonBag = 24,                 -- 龙背包(已废弃)
        DragonBagBtn = 25,              -- 龙背包按钮
        BuldingRepairBtns = 26,         -- 建筑修复按钮
        GoldPassButton = 27,            --黄金通行证按钮
        RemainsBackBtn = 28,            -- 从遗迹返回按钮
        RemainsDragonBtn = 29,          --遗迹场景龙选择按钮
        ActiveEggsButton = 31,          --彩蛋活动按钮
        BreedButton = 33,               --可召唤提示按钮
        HeadInfoView = 34,              --顶部全部UI
        HRWidgetsMenu = 35,             --右侧伸缩菜单
        EnergyDiscount = 36,            -- 清除障碍打折,按时间使用，显示剩余时间
        Prune = 37,                     -- 场景裁剪
        Christmas = 38,                 --圣诞活动入口
        DragonFlyTarget = 40,           --野外获得龙飞入的目标
        ActivityTaskBtn = 41,           ---活动任务按钮
        Valentine = 42,                 ---情人节活动按钮
        UpdatingButton = 43,
        SceneStarButton = 44,           --地图三星按钮
        EnergyDiscountItemIcon = 45,    -- 清除折扣道具icon,按次数使用的,显示剩余个数
        ScarecrowButton = 46,           -- 稻草人按钮
        SaveAnimalButton = 47,          -- 拯救小动物按钮
        DragonExploitButton = 48,       --神龙探索活动按钮
        MazeShopButton = 49,            -- 迷宫商店
        MazeTimeButton = 50,            -- 迷宫倒计时
        MazeBackBtn = 51,               -- 从迷宫返回按钮
        TeamBtn = 52,                   -- 队伍按钮
        TeamMapInfo = 54,               -- 队伍按钮
        ActivityCalendarButton = 53,    --活动预热按钮
        ActivityCalendarTipButton = 55, --活动预热提示按钮(界面底部小铃铛)
        DressingHut = 56,               --装扮小屋提示小按钮
        ShakeButton = 57,               --摇一摇按钮
        LuckyCard = 58,                 --翻翻乐
        VipItemButton = 59,             --vip
        MazeDoubleButton = 60,          --云端冒险双倍提示按钮
        RemainsButton = 61,             --遗迹左上角提示按钮
        GoldOrderIcon = 62,             --炼金炉左上角提示按钮
        CardCollectButton = 63,         --卡牌收集按钮
        DiamondCostBuff = 64,           --钻石消耗buff
        ActivityScoreBuff = 65,         --活动积分buff
        VideoMirrorButton = 66,         --视频镜像按钮
        AdsAccumulated = 67,            --广告累计奖励
        aBtn = 68,
        DragonUpButton = 69,
        -- 活动类的分下段，从100开始吧
        ParkourButton = 100,          --跑酷场景小游戏
        ["22AdvIsland"] = 102,        ---冒险岛
        TeamMapActivity = 103,        ---公会秘境寻宝
        ["2204CallGodBall"] = 104,    ---唤神舞会
        DragonTradeButton = 105,      --神龙贸易季
        LevelMapActivityButton = 106, ---等级地图任务按钮(等级活动)
        ["2205DragonMuseum"] = 107,   ---神龙博物馆按钮
        ["2206SeaCarnival"] = 108,    ---海底祭典
        GoldPanning = 109,            --淘金大赛
        TeamDragonEntrance = 110,     ---公会龙入口按钮
        TeamDragonButton = 111,       ---公会龙活动场景中选择龙界面按钮
        DragonEnergyDiscount = 112,   -- 龙清除障碍打折,按时间使用，显示剩余时间
        TeamDragonInfo = 113,         --公会龙活动左侧面板
        MowButton = 114,              --割草小游戏
        ["2207SakuraManor"] = 115,    -- 樱花庄园
        InviteButton = 116,           ---邀请按钮
        ["2208DesertPark"] = 117,     ---甜蜜丰饶节
        ["2209GhostMansion"] = 118,   ---幽灵宅邸
        ["2210GrandmasFarm"] = 119,   ---幽灵宅邸
        MiniGamesButton = 120,        ---小游戏按钮
        SmallBPButton = 121,          ---小BP按钮
        ["2211MagicChristmas"] = 122, ---魔力圣诞岛按钮

        BuildingShopButton = 123,     ---建筑商店按钮
        ["2303Loverway"] = 124,       ---爱神指路
        ["2301DragonZoo"] = 125,      ---神龙岛动物园
        ["2306FunSportsDay"] = 126,   --- 奇趣运动会
        ActivityCoin = 127,           --- 活动货币栏
        ["2305FactoryCity"] = 128,    ---兔子先生的工厂
        ---伙伴宴会顶部信息显示
        PartnerPartyInfo = 129,
        ---伙伴宴会退出按钮
        PartnerPartySkipButton = 130,
        ["2307CardKingdom"] = 131,        ---纸牌王国
        ["2308MagicBox"] = 135,           ---魔盒历险记(需要和龙那边一致)
        MonopolyDice = 133,               --- 大富翁骰子按钮
        DailyLuckyCard = 136,             --翻翻乐

        ["2309FairyJourney"] = 137,       --仙女之森
        ["2310CubeWaterWorld"] = 138,     --魔方水上世界
        ["2311FruitTown"] = 139,          --水果小镇
        ["2312HeartbeatJourney"] = 140,   --倾心之旅
        ["2313MermaidCity"] = 141,        --人鱼城大冒险
        ["2315ColorfulLand"] = 145,       ---缤纷之境
        ["2316DragonCircus"] = 146,       --神龙马戏团
        ["2317Wineestate"] = 147,         --葡萄庄园
        ["2321Weirdonight"] = 148,        --万圣节的科学怪人
        ["2322ThiefMagic"] = 149,         --怪盗与魔术嘉年华
        ["2320StarPark"] = 150,           --星辰闪耀之时
        ["2325RacingCompetition"] = 151,  --竞速大赛

        ["2318MusicCampus"] = 152,        --拾光音乐节
        ["2319MagicalKitchen"] = 153,     --神奇厨具博览会
        ExpendEnergyRewardButton = 154,   -- 消耗体力返奖活动按钮

        ["134EventFairyLake"] = 155,      --新手活动场景
        ["2323TurkeyLegendB"] = 156,      --火鸡传奇
        ["2324ToyCityA"] = 157,           --玩具城历险记
        ["2326NoBeardPirates"] = 158,     --没胡子海盗团
        ["2329LanternShowB"] = 159,       --没胡子海盗团
        ["2327WeatherIslands"] = 160,     --天气群岛
        ["2328ChristmasVillages"] = 161,  --圣诞村
        ["Guide2SakuraManor"] = 162,      --新手活动场景2
        ["2401MianMianParadise"] = 163,   --绵绵岛乐园
        ["2402SkyCityA"] = 165,           --天空之城
        ["2403WonderAgent"] = 166,        --猫咪特工

        ["2404EmotionCrisis"] = 168,      --情绪危机
        ["2405SurvivalPioneers"] = 169,   --荒野求生
        ["2406SwanManor"] = 170,          --天鹅庄园

        ["Guide3StarPark"] = 171,         --新手活动场景3
        ["Guide4NoBeardPirates"] = 172,   --新手活动场景4
        ["2407PiscesCity"] = 173,         --双鱼星城
        ["2408StarPrince"] = 174,         --小王子
        BlockBtn = 175,                   -- Block 入口

        ["ActivityTurntable1"] = 176,     ---转盘活动1
        ["ActivityTurntable2"] = 177,     ---转盘活动2
        ["Drawing1FortuneIsland"] = 178,  ---抽奖1-好运岛
        ["2409GoldenTown"] = 179,         ---黄金岛
        ["2410LeprechaunGoldIsle"] = 180, ---2410矮人金币岛
        ["2411EastereggParty"] = 181,     ---2411彩蛋派对
        ["2412SorubekForest"] = 182,      ---索鲁贝克
        TreasureMapButton = 183,          ---藏宝图按钮
        ClueMapButton = 184,              ---找狐狸按钮
        ThrowingDartsButton = 185,        ---扔飞镖按钮
        PersonalTurntableButton = 186,    ---个人转盘按钮
        FindPrincessButton = 187,         ---找公主按钮
        ["2413timelesslove"] = 188,       ---永恒的爱
        ["2414ZombieBrideB"] = 189,       ---僵尸新娘
        NewHomeActivityButton = 190,      ---新家园活动入口
        ["DolphinIsland"] = 191,          ---海豚岛
        TreasureDice = 192,               --- 宝藏 - 骰子
        ShipwreckTreasureButton = 193,    --沉船宝藏
        --- 新的礼包合集入口
        GiftIntersection = 194,
        TwoMergeButton = 195,        --- 二合
        SeaTreasureMainButton = 196, --深海寻宝
        HalloweenButton = 198,       --万圣节挖宝活动入口
        FishButton = 199,            --钓鱼活动入口
        ["2415WinterStarAndEternalLight"] = 200,

        --个人副本
        AltarIsland1 = 300,          --金矿岛
        AltarIsland2 = 301,          --星空岛
        AltarIsland3 = 302,          --幸运岛
        AltarIsland4 = 303,          --金矿岛换皮
        AltarIsland5 = 304,          --星空岛换皮-樱花岛
        AltarIsland6 = 305,          --幸运岛换皮-浮空岛
        AltarIsland7 = 306,          --星空岛换皮-竞速岛
        AltarIsland8 = 307,          --星空岛换皮-棉花糖岛
        AltarIsland9 = 308,          --星空岛换皮-贝壳岛
        AltarIsland10 = 309,         --金矿岛换皮-熊猫
        ---占位用
        Activity_Button = 500,       -- 活动入口基类

        Anonymous = 1001,            -- 匿名区(动态)会占用1001和1002
        --龙pve活动相关：2000
        ExploitQuitButton = 2001,
        ExploitScoreItem = 2002,
        ExploitProgress = 2003,
        ExploitDragons = 2004,
        ExploitBuffs_2Drop = 2010,
        ExploitBuffs_2Collect = 2011,
        --龙跑酷活动相关：3000
        ParkourScoreItem = 3001,
        BuffDoubleParkourScore = 3002,
        ParkourJump = 3003,
        --龙钓鱼活动
        DragonFishingButton = 3004,
        --回流活动
        ReflowButton = 3005,
        --新手7日活动
        SevenDaysButton = 3006,
        --每日活动
        DayTaskButton = 3007,

        --割草活动相关：4000
        MowScoreItem = 4001,
        BuffDoubleMowScore = 4002,
        MowHandleButton = 4003,
        MowTimeProcess = 4004,
        --连续礼包1相关：5000+场景地图对于的id
        --连续礼包2相关：6000+场景地图对于的id
        ContinuousGift1Button = 5000,
        ContinuousGift2Button = 6000,

        ---三消小游戏入口
        ThreeClearButton = 6001,
        JamClearButton = 6002,
        DecorateIslandButton = 6003,
        Match3DButton = 6004,

        --7001 福利
        WelfareButton = 7001,
        --7002 首充
        NewerGiftButton = 7002,


        PiggyBankButton = 7005, --小猪存钱罐

        --- 7006 到 7018 在 gift 表使用了

        --- 小猪存钱罐 红体力按钮
        PiggyBankRedButton = 7020,
    }
}
return MAINUI
