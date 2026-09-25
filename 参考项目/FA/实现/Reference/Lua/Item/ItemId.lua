local TYPE_GIFT_PACK = 3
local TYPE_ENERGY_BUFF = 19999 --- 精力buff(限时无限精力)


ItemId = {
    ---@class ItemType
    EType = {
        MONEY = 1,
        AGENT = 2,
        FACTORY = 3,
        TASK = 4,
        DRAGON = 5,
        EGG = 6,
        DRAGON_ENTITY = 14,
        FARM_ITEM = 18,
        BUFF = 20,
        AvatarFrame = 24,
        BuildingRepairReward = 21,
        Skin = 27,
        Avatar = 28,
        Gene = 30,
        MoveAgent = 53,
        ActivtyMapScore = 38, --活动地图积分
        PartnerParty = 58, --伙伴宴会
        BookPack = 62, ---卡包
        TwoMerge = 72,   --- 道具表中类型是二合
        TwoMergeBP = 74, --- 二合bp积分
    },
    EXP = "1000",
    COIN = "1002",
    DIAMOND = "1001",
    ENERGY = "1003",
    CHIP = "1004", -- 万能碎片
    Prosperity = "1005", --繁荣度
    RED_ENERGY = "1006", --(红体力)
    AdsTicket = "1007", -- 广告券
    BESOM = "1012",      -- 扫把
    DragonCrystal = "1014", -- 龙晶石
    Egg_fly = "1015", --龙蛋fly(消耗体力手动添加)
    EnergyPurple = "1017", --紫体力
    EnergyPurple_fly = "1018", --紫体力fly(消耗体力手动添加)
    BOMB = "11001",
    TOPLEVEL = "100067",
    DRAGONBREED = "2100", -- 龙源石  繁育用的
    TimeOrderTicket = "25000", ---航海订单的票
    PhysicalStrengthRecovery = "30000",    ---龙之力加速恢复道具
    MapReopen = "33000",             --支线地图重启券
    ExploitScore = "37001",
    ParkourScore = "39001",
    Buff2Drop = "20004",
    Buff2Collect = "20003",
    BuffDoubleParkourScore = "20005",
    FactorySpeedUp = "42000",   --工厂加速道具
    DawnGem = "44001", --曙光宝石，买帽子
    GoldPanningShovel = "6000", --淘金活动挖掘道具-铲子
    Star = "6002", --星星(Warn:假道具哦, 不要用这个获取数量, 仅显示图片和获得途径用)
    PhysicalStrength = "6003", --童话之力(Warn:假道具哦, 不要用这个获取数量, 仅显示图片和获得途径用)
    EnergyBall = "6005", --荒岛营救, 能量小球道具
    MowScore = "39003",
    BuffDoubleMowScore = "20009",   --割草双倍buff
    MowTime = "39006", --割草加时道具。
    SmallBPScore = "50001",
    LuckyCardCoin = "6302", -- 翻翻乐代币
    WishCoin = "6200", -- 许愿币
    ContinuousGiftCoin = "10000001", --无尽礼包代币
    ContinuousGiftCoinTwoMerge = "10000003", --二合无尽礼包代币
    exchangeCard = "60001", --兑换卡
    cardCoin = "60000", --卡牌积分
    ThreeClearRiffleProp = "6400", --- 羊了个羊洗牌
    ThreeClearHintProp = "6401", --- 羊了个羊提示
    ThreeClearReturnProp = "6402", --- 羊了个羊撤销
    ThreeClearEnergy = "6403", --- 羊了个羊体力
    --- jam洗牌
    JamClearRiffleProp = "6406",
    --- jam暂存
    JamClearHintProp = "6405",
    --- jam撤销
    JamClearReturnProp = "6404",
    --- jam体力
    JamClearEnergy = "6407",
    BlockEnergy = "6413", --- Block体力
    DailyScore = "59001", --- 每日任务积分
    Videomirror = "38058", --- 短剧能量
}

local itemFlags = {}

function ItemId.GetWidgetType(itemId)
    local item = AppServices.Meta:GetItemMeta(itemId)
    if item then
        -- 无尽礼包为组装ID，特殊处理一下
        if itemId == ItemId.ContinuousGiftCoin then
            local cfg = App.scene:GetCurrentMeta() or {}
            local sceneId = CONST.MAINUI.ICONS[cfg.id]
            if sceneId then
                return CONST.MAINUI.ICONS.ContinuousGift1Button + sceneId
            end
        end
        return item.widgetType
    end
end

function ItemId.GetWidget(itemId, eVal)
    if ItemId.IsDragon(itemId) and not AppServices.DragonNestManager:IsNestHasSpace() then
        return App.scene:GetWidget(CONST.MAINUI.ICONS.DragonBagBtn, eVal)
    else
        return App.scene:GetWidget(ItemId.GetWidgetType(itemId), eVal)
    end
end

function ItemId.isItem(itemId)
    local cfg = AppServices.Meta:GetAllItemMeta()[tostring(itemId)]
    return not not cfg
end

function ItemId.IsExp(value)
    return tostring(value) == ItemId.EXP
end

function ItemId.IsCoin(value)
    return tostring(value) == ItemId.COIN
end

function ItemId.IsDiamond(value)
    return tostring(value) == ItemId.DIAMOND
end

function ItemId.IsChip(value)
    return tostring(value) == ItemId.CHIP
end

function ItemId.IsEnergy(value)
    return tostring(value) == ItemId.ENERGY
end

function ItemId.IsRedEnergy(value)
    return tostring(value) == ItemId.RED_ENERGY
end

function ItemId.IsDailyScore(value)
    return tostring(value) == ItemId.DailyScore
end

function ItemId.IsEnergyBuff(itemId)
    return AppServices.Meta:GetItemType(itemId) == TYPE_ENERGY_BUFF
end

function ItemId.IsBuff(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.BUFF
end

function ItemId.IsGift(itemId)
    return AppServices.Meta:GetItemType(itemId) == TYPE_GIFT_PACK
end
function ItemId.IsBookPack(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.BookPack
end
function ItemId.IsSmallBPScore(itemId)
    return tostring(itemId) == ItemId.SmallBPScore
end

--是否是活动积分
function ItemId.IsActivityMapScore(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.ActivtyMapScore
end
--是否是使用后兑换成活动积分的道具
function ItemId.IsProductActivityMapScoreItem(itemId)
    local itemMeta = AppServices.Meta:GetItemMeta(itemId)
    local isUseGetItem = itemMeta.type == 19 or itemMeta.funcType == 9
    if isUseGetItem then
        local funcParamId = tostring(itemMeta.funcParam[1])
        return ItemId.IsActivityMapScore(funcParamId)
    end
    return false
end

function ItemId.IsTimeLimit(itemId)
    local itemMeta = AppServices.Meta:GetItemMeta(itemId)
    if itemMeta then
        return itemMeta.limittime > 0
    end
    return false
end

function ItemId.IsTimeLimit2(itemId)
    local itemMeta = AppServices.Meta:GetItemMeta(itemId)
    if itemMeta then
        return itemMeta.limittime > 0 and not ItemId.IsEnergy(itemId) and not ItemId.IsEnergyBuff(itemId)
    end
    return false
end

function ItemId.IsDragonSkinDesign(itemId)
    if not itemId then
        return false
    end
    local funcType = AppServices.Meta:GetItemFuncType(itemId)
    if funcType == 23 then
        return true
    end
    return false
end

function ItemId.IsDragonSkin(itemId)
    if not itemId then
        return false
    end
    return AppServices.SkinEquipManager:IsDragonSkin(itemId)
end

function ItemId.IsDragonKey(itemId)
    if not itemId then return false end
    local itmType = AppServices.Meta:GetItemType(itemId)
    if itmType == PropsType.dragonKey then
        return true
    end
    return false
end

function ItemId.IsFemaleOrPetSkin(itemId)
    local config = AppServices.SkinLogic:GetSkinMetaTable()
    if not config then
        return false
    end
    local skinMeta = config[tostring(itemId)]
    return skinMeta and (skinMeta.type == SkinType.FemalePlayer or skinMeta.type == SkinType.Pet)
end

function ItemId.IsPartnerChip(itemId)
    if not itemId then
        return false
    end
    local funcType = AppServices.Meta:GetItemFuncType(itemId)
    if funcType == PropsType.partnerChip then
        return true
    end
    return false
end

--大于1消失
function ItemId.IsTimeLimitOver60(itemId)
    local itemMeta = AppServices.Meta:GetItemMeta(itemId)
    if itemMeta then
        return itemMeta.limittime > 3600 and ItemId.IsEnergyBuff(itemId)
    end
    return false
end

function ItemId.IsMoveAgent(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.MoveAgent
end

function ItemId.SetNewFlag(itemId, value)
    if value == true then
        itemFlags[itemId] = value
    else
        itemFlags[itemId] = nil
    end
    AppServices.User.Default:SetKeyValue("item.new_items", itemFlags, true)
end

function ItemId.InitNewFlag(flag, flush)
    itemFlags = flag
    if flush then
        AppServices.User.Default:SetKeyValue("item.new_items", itemFlags, true)
    end
end

function ItemId.IsNewItem(itemId)
    return itemFlags[itemId] == true
end

function ItemId.GetEnergyBuffTimeText(itemId)
    local itemConfig = AppServices.Meta:GetItemMeta(itemId)
    local hour = TimeUtil.SecondsToHour(itemConfig.limittime)
    local text = tostring(hour) .. "h"
    return text
end

function ItemId.IsDragon(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.DRAGON_ENTITY
end

function ItemId.IsDragonGene(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.Gene
end

function ItemId.IsDragonEgg(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.EGG
end

function ItemId.IsDragonProduct(itemId)
    local cfg = AppServices.Meta:GetItemMeta(itemId)
    return not string.isEmpty(cfg.dragonId) and cfg.dragonId ~= '0'
end

function ItemId.IsSkin(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.Skin
end

---是否是头像
function ItemId.IsAvatar(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.Avatar
end

---是否是头像框
function ItemId.IsAvatarFrame(itemId)
    return AppServices.Meta:GetItemType(itemId) == ItemId.EType.AvatarFrame
end

---是否是折扣道具
function ItemId.IsDiscountProp(itemId)
    if itemId then
        local tp = AppServices.Meta:GetItemType(itemId)
        if tp == PropsType.energyBuff then
            return true
        end
    end
    return false
end

function ItemId.GetEffectiveCount(itemId, count)
    local funcType = AppServices.Meta:GetItemFuncType(itemId)
    -- 直接加体力/红体力
    if funcType == 1 or funcType == 36 then
        local funcParam = AppServices.Meta:GetItemFuncParam(itemId)
        return funcParam * count
    end
    return count
end

function ItemId.GetBuffType(itemId)
    local buffTemplateId = AppServices.Meta:GetItemFuncParam(itemId)
    if not buffTemplateId then
        return
    end
    local buffCfg = AppServices.Meta:GetBuffMeta(tostring(buffTemplateId))
    return buffCfg and buffCfg.type
end

---道具是否可以通过钻石购买
local CanBuyType = {
    [2] = true,
    [3] = true,
    [4] = true,
    [5] = true,
}
function ItemId.CanBuyByDiamond(itemId, itemBigType)
    if (not itemBigType) or (itemBigType == NormalItemBigType) then
        local meta = AppServices.Meta:GetItemMeta(itemId)
        local canbuy = CanBuyType[meta.type]
        return canbuy and meta.price > 0
    else
        local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(itemId)]
        if (not cfg.price) or (#cfg.price <= 0) then
            return false
        end

        return tostring(cfg.price[2]) == ItemId.DIAMOND
    end
end


function ItemId:GetIconName(itemBigType, itemId)
    if itemBigType == TwoMergeItemBigType then
        local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(itemId)]
        return cfg.icon
    end
    return AppServices.Meta:GetItemIcon(itemId)
end

function ItemId:GetIconSprite(itemBigType, itemId)
    local icon = self:GetIconName(itemBigType, itemId)
    if itemBigType == TwoMergeItemBigType then
        return AppServices.ItemIcons:GetTwoMergeSpriteByName(icon)
    end
    return AppServices.ItemIcons:GetSpriteByName(icon)
end

function ItemId:GetItemName(itemBigType, itemId)
    if itemBigType == NormalItemBigType then
        return AppServices.Meta:GetItemName(itemId)
    end
    local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(itemId)]
    return Runtime.Translate(cfg.name)
end

function ItemId:GetOnePrice(itemBigType, itemId)
    if itemBigType == TwoMergeItemBigType then
        local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(itemId)]
        if cfg.price and #cfg.price >  0 then
            return cfg.price[2]
        end
        return 0
    end

    local itemMeta = AppServices.Meta:GetItemMeta(itemId)
    return itemMeta.price
end

function ItemId:GetPrice(itemBigType, itemId, count)
    local onePrice = self:GetOnePrice(itemBigType, itemId)
    return onePrice * count
end

function ItemId:GetCount(itemBigType, itemId)
    if itemBigType == TwoMergeItemBigType then
        local mapId = AppServices.TwoMergeManager:GetMapId()
        return AppServices.TwoMergeManager:GetItemCount(mapId, itemId)
    end
    return AppServices.User:GetItemAmount(itemId)
end