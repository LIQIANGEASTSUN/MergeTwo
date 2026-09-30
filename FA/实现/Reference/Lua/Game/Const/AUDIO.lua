---@class AUDIO
local AUDIO = {
    --Music
    Music_MainCity = "Prefab/Audio/Music/MainCityMusic.mp3",
    -- 游戏加载bgm  欢快轻松,简短
    Music_Loading = "Prefab/Audio/Music/bgm_loading.wav",

    --Interface
    Interface_GetEnergy = "Prefab/Audio/Interface/getStar.wav",                                             --获取体力
    Interface_PayStar = "Prefab/Audio/Interface/payStar.wav",                                               --消耗星星
    Interface_GetCoin = "Prefab/Audio/Interface/getCoin.wav",                                               --获取金币
    Interface_PayCoin = "Prefab/Audio/Interface/payCoin.wav",                                               --消耗金币
    Interface_GetDiamond = "Prefab/Audio/Interface/getDiamond.wav",                                         --获取钻石
    Interface_PayDiamond = "Prefab/Audio/Interface/payDiamond.wav",                                         --消耗钻石
    Interface_Click = "Prefab/Audio/Interface/click.wav",                                                   --button点击
    Interface_OpenPanel = "Prefab/Audio/Interface/openPanel.wav",                                           --面板开启
    Interface_ClosePanel = "Prefab/Audio/Interface/closePanel.wav",                                         --面板关闭
    Interface_OpenBox = "Prefab/Audio/Interface/openBox.wav",                                               --宝箱及礼盒开启音效
    Interface_MagicWall = "Prefab/Audio/Interface/magicWall.wav",                                           --进关卡音效
    Interface_MagicWall_Open = "Prefab/Audio/Interface/magicWall_open.wav",                                 --进关卡开门
    Interface_MagicWall_Close = "Prefab/Audio/Interface/magicWall_close.wav",                               --进关卡关门
    Interface_Celebrate = "Prefab/Audio/Interface/celebrate.wav",                                           --烟花音效

    Interface_ClickObstacle = "Prefab/Audio/Interface/clickStatue.wav",                                     --选中障碍物
    Interface_PlaceBuilding = "Prefab/Audio/Interface/placeStatue.wav",                                     --放置建筑
    Interface_BuildingCompose = "Prefab/Audio/Interface/merge.wav",                                         --建筑合成
    Interface_BuildingUnlock = "Prefab/Audio/Interface/unlock.wav",                                         --建筑解锁

    Interface_NewTask = "Prefab/Audio/Interface/newTask.wav",                                               --新任务出现
    Interface_finishTask = "Prefab/Audio/Interface/finishTask.wav",                                         --完成任务

    Interface_sound_clear_stones = "Prefab/Audio/Interface/sound_clear_stones.wav",                         --挖石头  如挖石头时有石子碰撞的声音
    Interface_sound_clear_wood = "Prefab/Audio/Interface/sound_clear_wood.wav",                             --砍木头  砍木头需要砍木头声音
    Interface_sound_clear_grass = "Prefab/Audio/Interface/sound_clear_grass.wav",                           --挖草  有割草声效
    Interface_sound_clear_plants = "Prefab/Audio/Interface/sound_clear_plants.wav",                         --挖其它植物或障碍  统一种挖地声效
    Interface_sound_bomb = "Prefab/Audio/Interface/sound_bomb.wav",                                         --用炸弹清除  炸弹爆炸声效
    Interface_sound_acquire_Nino = "Prefab/Audio/Interface/sound_acquire_Nino.wav",                         --获得第一个龙-尼诺  尼诺从蛋里出来,有破壳生效
    Interface_sound_acquire_dragons = "Prefab/Audio/Interface/sound_acquire_dragons.wav",                   --获得其它龙  统一煽动翅膀声效
    Interface_sound_acquire_coins = "Prefab/Audio/Interface/sound_acquire_coins.wav",                       --获得金币  获得金币时有砸进钱袋的声音
    Interface_sound_acquire_gems = "Prefab/Audio/Interface/sound_acquire_gems.wav",                         --获得钻石  获得钻石时有钻石碰撞的声效
    Interface_sound_farm_harvest = "Prefab/Audio/Interface/sound_farm_harvest.wav",                         --收割浆果  收割声效
    Interface_sound_farm_plant = "Prefab/Audio/Interface/sound_farm_plant.wav",                             --种植浆果  播种声效
    Interface_sound_farm_feed = "Prefab/Audio/Interface/sound_farm_feed.wav",                               --给龙喂食  单个点击单次声效,连击时声音连贯
    Interface_sound_farm_holycart = "Prefab/Audio/Interface/sound_farm_holycart.wav",                       --圣水车  类似装水的声效,单个点击单次声效,连击时声音连贯(参考克朗代克视频)
    Interface_sound_farm_eat = "Prefab/Audio/Interface/sound_farm_eat.wav",                                 --龙吃食  有咬食生效
    Interface_sound_farm_shake = "Prefab/Audio/Interface/sound_farm_shake.wav",                             --摇一摇  龙产出摇一摇声效
    Interface_sound_factory_production_base = "Prefab/Audio/Interface/sound_factory_production_base.wav",   --木材加工台  往木材加工台拖动材料有锯木声效
    Interface_sound_factory_stone_station = "Prefab/Audio/Interface/sound_factory_stone_station.wav",       --石材加工  石材加工时有打磨石器声效
    Interface_sound_factory_smelt_station = "Prefab/Audio/Interface/sound_factory_smelt_station.wav",       --冶炼台  冶炼时有特定声效
    Interface_sound_factory_food_station = "Prefab/Audio/Interface/sound_factory_food_station.wav",         --食品加工  往食品加工台拖动材料时有烹饪声效
    Interface_sound_factory_metal_station = "Prefab/Audio/Interface/sound_factory_metal_station.wav",       --金属加工台  金属加工台有锻造金属声效
    Interface_sound_factory_bakery = "Prefab/Audio/Interface/sound_factory_bakery.wav",                     --面包店  烤面包声效
    Interface_sound_factory_textile_station = "Prefab/Audio/Interface/sound_factory_textile_station.wav",   --纺织加工店   织布声效
    Interface_sound_factory_textile_shop = "Prefab/Audio/Interface/sound_factory_textile_shop.wav",         --纺织店  缝纫机工作声效
    Interface_sound_factory_building_material_staion =
    "Prefab/Audio/Interface/sound_factory_building_material_staion.wav",                                    --建材加工  金属等加工声效
    Interface_sound_factory_furniture_shop = "Prefab/Audio/Interface/sound_factory_furniture_shop.wav",     --家具店  家具加工声效
    Interface_sound_factory_jewelry_shop = "Prefab/Audio/Interface/sound_factory_jewelry_shop.wav",         --珠宝店   珠宝加工声效
    -- Interface_sound_dragon_breed_interface = "Prefab/Audio/Interface/sound_dragon_breed_interface.wav", --繁育界面  向上走的爱心有扑通扑通声效
    Interface_sound_dragon_breed_reward = "Prefab/Audio/Interface/sound_dragon_breed_reward.wav",           --繁育后奖励界面  指针滑动声效
    Interface_sound_dragon_breed_dragon = "Prefab/Audio/Interface/sound_dragon_breed_dragon.wav",           --繁育获得龙  龙从蛋出来时,有破壳+煽动翅膀声效
    Interface_sound_dragon_collection = "Prefab/Audio/Interface/sound_dragon_collection.wav",               --龙采集  龙去采集中有飞的声效
    Interface_sound_ui_sail = "Prefab/Audio/Interface/sound_ui_sail.wav",                                   --航海订单  交付完所有订单开船时有船在海上航行声效
    Interface_sound_ui_furnace = "Prefab/Audio/Interface/sound_ui_furnace.wav",                             --炼金炉    向炼金炉投放材料有对应冶炼声效
    Interface_sound_ui_lucky_Gacha = "Prefab/Audio/Interface/sound_ui_lucky_Gacha.wav",                     --彩蛋  砸彩蛋时有砸蛋声效
    Interface_sound_ui_spin = "Prefab/Audio/Interface/sound_ui_spin.wav",                                   --转盘  转盘转动时有旋转声效,包括地图里的转盘
    Interface_sound_ui_interface = "Prefab/Audio/Interface/sound_ui_interface.wav",                         --各界面打开或者关闭  打开/关闭界面声效
    Interface_sound_story_restoring_building = "Prefab/Audio/Interface/sound_story_restoring_building.wav", --修复建筑  修好建筑后,buling一声的庆祝音(不需要很长)
    Interface_sound_story_drop_stuff = "Prefab/Audio/Interface/sound_story_drop_stuff.wav",                 --点击建筑-掉落物资  清脆的dingling一声,有东西获得的感觉
    Interface_sound_story_bounce_bubbles = "Prefab/Audio/Interface/sound_story_bounce_bubbles.wav",         --弹气泡  弹气泡时,冒泡的声音(类似于bulu/pu一声)
    Interface_sound_acquire_resource = "Prefab/Audio/Interface/sound_acquire_resource3.wav",
    Interface_sound_minigames_victory = "Prefab/Audio/Interface/victory.mp3",
    Jam_sound_click = "Prefab/Audio/Interface/jam_xuanze.mp3",                 -- 砖块消除，砖块点击音效
    Jam_sound_Move_In_Slot = "Prefab/Audio/Interface/jam_xiaochu.mp3",         -- 砖块移动到卡槽区
    Jam_sound_fail = "Prefab/Audio/Interface/shibai.mp3",                      -- 砖块消除失败界面弹出音效
    Jam_sound_victory = "Prefab/Audio/Interface/mahjong_survival_success.mp3", -- 砖块游戏成功界面弹出音效

    audio_bubble = "Prefab/Audio/Interface/audio_bubble.mp3",                  -- 气泡音效
    block_revoke = "Prefab/Audio/Interface/block_revoke.mp3",
    great = "Prefab/Audio/Interface/great.mp3",                                -- great
    good = "Prefab/Audio/Interface/good.mp3",                                  -- good
    unbelievable = "Prefab/Audio/Interface/unbelievable.mp3",                  -- unbelievable
    audio_merge = "Prefab/Audio/Interface/audio_merge.mp3",                    -- 合成

    --钓鱼音效
    Fishing_CostingRod = "Prefab/Audio/Interface/Fishing_CostingRod.mp3",
    Fishing_End = "Prefab/Audio/Interface/Fishing_End.mp3",
    Fishing_Fish = "Prefab/Audio/Interface/Fishing_Fish.mp3",
    Fishing_LinePull = "Prefab/Audio/Interface/Fishing_LinePull.mp3",

}
-- setmetatable(AUDIO, {
--     __index = function(t, k)
--         --获取其它物资  统一声效,物资进入背包的声音(可参考竞品,会提供视频)
--         if k == "Interface_sound_acquire_resource" then
--             -- local index = math.random(1, 3)
--             -- local path = string.format("Prefab/Audio/Interface/sound_acquire_resource_%s.wav", index)
--             return path
--         end
--     end
-- })
return AUDIO
