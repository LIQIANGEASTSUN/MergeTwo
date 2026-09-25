---@class MetaManager
local MetaManager = {}

local ProcessMeta = {
    ["MagicalCreaturesTemplate"] = function(meta)
        for key, value in pairs(meta) do
            setmetatable(
                value,
                {
                    __index = function(t, k)
                        if k == "name" then
                            return "partner_name_" .. t.type
                        elseif k == "desc" then
                            return "partner_desc_" .. t.type
                        end
                    end
                }
            )
        end
    end
}

function MetaManager:Ctor_V11()
    self.caches = {}
    self.metas = {}
    setmetatable(
        self.metas,
        {
            --__mode = "v",
            __index = function(t, k)
                --local name = AppServices.ABTestManager:Translate(k)
                local data = include("Configs.Meta." .. k)
                if ProcessMeta[k] then
                    ProcessMeta[k](data)
                end
                rawset(t, k, data)
                return data
            end
        }
    )
end

function MetaManager:Category(catagory)
    return self.metas[catagory]
end

function MetaManager:LoadConfig(model_name)
    return include(model_name)
end

function MetaManager:LoadConfigAndSortById(model_name)
    return self:SortConfigById(self:Category(model_name))
end

function MetaManager:GetItemName(itemId)
    local meta = self:GetItemMeta(itemId)
    local name = meta and meta.name
    return Runtime.Translate(name)
end

function MetaManager:GetItemMeta(itemId)
    local cof = self:Category("ItemTemplate")
    local meta = cof[tostring(itemId)]
    console.assert(meta, "ItemTemplate表未配置: ID:" .. tostring(itemId) .. " => Type:" .. type(itemId)) --@DEL
    return meta
end

function MetaManager:GetAllItemMeta()
    local cof = self:Category("ItemTemplate")
    return cof
end

function MetaManager:GetItemType(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.type or 0
end

function MetaManager:GetItemIdByType(type)
    local metas = self:Category("ItemTemplate")
    local ids = {}
    for id, cfg in pairs(metas) do
        if cfg.type == type then
            table.insert(ids, id)
        end
    end
    return ids
end

function MetaManager:GetItemDesc(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.desc
end

function MetaManager:GetItemFuncType(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.funcType
end

function MetaManager:GetItemFuncParam(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.funcParam[1] or 0
end

function MetaManager:GetItemFuncParamById(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.funcParam
end

function MetaManager:GetItemLimit(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.itemLimit or 0
end

function MetaManager:GetItemIcon(itemId)
    itemId = tostring(itemId)
    local cfgs = self:Category("ItemTemplate")
    if not cfgs[itemId] then
        console.error("物品:", itemId, "图标不存在, 使用钻石图标") --@DEL
        itemId = "1001"
    end

    return cfgs[itemId].icon
end

function MetaManager:GetItemPrice(itemId)
    local meta = self:GetItemMeta(itemId)
    return meta and meta.price
end

function MetaManager:GetBuffMeta(buffId)
    local cfgs = self:Category("BuffTemplate")
    return cfgs[buffId]
end

function MetaManager:GetConfigMetaValue(key)
    local cfgs = self:Category("ConfigTemplate")
    console.assert(cfgs[key], "no " .. (key or "empty_key") .. " found in ConfigTemplate")
    local info = cfgs[key]
    if info then
        return info.value
    end
end

function MetaManager:GetConfigMetaValueNumber(key, default)
    local value = self:GetConfigMetaValue(key)
    if value then
        return tonumber(value) or default
    end
    return default
end

---@return ObjectMeta
function MetaManager:GetBindingMeta(tid)
    local cfgs = self:Category("ObstacleTemplate")
    return cfgs[tostring(tid)]
end

---@return ObjectMeta
function MetaManager:GetBindingMetaByType(t)
    local cfgs = self:Category("ObstacleTemplate")
    for _, cfg in pairs(cfgs) do
        if cfg.type == t then
            return cfg
        end
    end
end

function MetaManager:GetItemsByFuncType(funcType)
    local items = {}
    if funcType == 0 then
        return items
    end

    local cfgs = self:Category("ItemTemplate")
    for _, value in pairs(cfgs) do
        if value.funcType == funcType then
            table.insert(items, value)
        end
    end
    return items
end

function MetaManager:GetItemsWithSameFuncType(itemId)
    local funcType = self:GetItemFuncType(itemId)
    return self:GetItemsByFuncType(funcType)
end

--摇一摇触发阈值
function MetaManager:GetShakeThreshold()
    local cfgs = self:Category("ConfigTemplate")
    local value = cfgs.shakethreshold.value
    return tonumber(value)
end
--手动点击领取多少个触发提示
function MetaManager:GetShakeCollectStartNum()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.shakeCollectStartNum.value)
end

function MetaManager:GetHighEcpmValue()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.ecpmNumber.value)
end

function MetaManager:GetPriceOfBlocks()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.priceOfBlocks.value)
end

--神秘商店开启等级
function MetaManager:GetMysicalShopLevel()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.MysicalShopLevel.value)
end

function MetaManager:GetCumulationRewardUnlockLevel()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.CumulationRewardUnlockLevel.value)
end

function MetaManager:GetFavoritesRewardUnlockLevel()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.ConfigTemplate.FavoritesReward.value)
end

function MetaManager:GetDiamondShopTemplate(id)
    local cfgs = self:Category("DiamondShopTemplate")
    return cfgs[id]
end

function MetaManager:GetDiamondShopMetasByType(shopType)
    local ret = {}
    local shopMeta = self:Category("DiamondShopTemplate")
    for _, v in pairs(shopMeta) do
        if v.shopType == shopType then
            table.insert(ret, v)
        end
    end
    return ret
end

function MetaManager:SortConfigById(config)
    return self:SortConfig(config, "id")
end

function MetaManager:SortConfig(config, sortBy)
    local sortedConfig = {}
    for _, value in pairs(config) do
        table.insert(sortedConfig, value)
    end
    table.sort(
        sortedConfig,
        function(data1, data2)
            return tonumber(data1[sortBy]) < tonumber(data2[sortBy])
        end
    )
    return sortedConfig
end

function MetaManager:GetLevelConfig(level)
    level = tostring(level)
    local cfgs = self:Category("LevelTemplate")
    return cfgs[level]
end

function MetaManager:GetMaxLevel()
    if self.caches.max_level then
        return self.caches.max_level
    end

    local cfgs = self:Category("LevelTemplate")
    local maxLevel = 1
    for _, v in pairs(cfgs) do
        local num_k = tonumber(v.id)
        if maxLevel < num_k then
            maxLevel = num_k
        end
    end
    self.caches.max_level = maxLevel
    return maxLevel
end

---获取体力回复时间
function MetaManager:GetEnergyCdTime()
    local cfgs = self:Category("ConfigTemplate")
    return tonumber(cfgs.energyValueCdTime.value)
end

---获取红体力回复时间
function MetaManager:GetRedEnergyCdTime()
    if not self.valueofRedEnergy then
        local cfgs = self:Category("ConfigTemplate")
        self.valueofRedEnergy = table.deserialize(cfgs.valueofRedEnergy.value)
    end
    return self.valueofRedEnergy[2]
end

--按等级获得可带协助龙数量
function MetaManager:GetDragonHelpNum(level)
    level = tostring(level)
    local cfgs = self:Category("LevelTemplate")
    local cfg = cfgs[level]
    return cfg.dragonHelpNum
end

---获取龙的一条配置
---@param dragonId string 龙id
function MetaManager:GetMagicalCreateuresConfigById(dragonId)
    dragonId = tostring(dragonId)
    local cfgs = self:Category("MagicalCreaturesTemplate")
    local meta = cfgs[dragonId]
    if not meta then
        console.error("Not found item:", dragonId, " in MagicalCreaturesTemplate") --@DEL
    end
    return meta
end

---根据道具ID获取龙的ID
function MetaManager:GetDragonIdByItemId(itemId)
    itemId = tostring(itemId)
    local id, minLv

    local cfgs = self:Category("MagicalCreaturesTemplate")
    for dragonId, cfg in pairs(cfgs) do
        if tostring(cfg.productivity[1]) == itemId then
            -- return dragonId
            if not minLv or minLv > cfg.level then
                minLv = cfg.level
                id = dragonId
            end
        end
    end
    return id
end

---根据道具ID获取产出此道具的所有龙的ID
function MetaManager:GetAllDragonIdByItemId(itemId)
    itemId = tostring(itemId)
    local ids = nil

    local cfgs = self:Category("MagicalCreaturesTemplate")
    for dragonId, cfg in pairs(cfgs) do
        if tostring(cfg.productivity[1]) == itemId then
            ids = ids or {}
            table.insert(ids, dragonId)
        end
    end
    return ids
end

---获取建筑修复的配置
function MetaManager:GetBuildingRepair(templateId)
    local cfgs = self:Category("TaskBuildingTemplate")
    return cfgs[templateId]
end

function MetaManager:GetSceneCfg(sceneId)
    local cfgs = self:Category("SceneTemplate")
    if sceneId then
        return cfgs and cfgs[sceneId]
    else
        return cfgs
    end
end
---获取当前场景地图的名字
function MetaManager:GetCurSceneName()
    local cfg = self:Category("SceneTemplate")
    if cfg then
        local id = App.scene:GetCurrentSceneId()
        local mapName = Runtime.Translate(cfg[id].nameStr)
        return mapName
    end
end

---获取scene的icon
function MetaManager:GetSceneIcon(sceneId)
    local cfg = self:Category("SceneTemplate")[sceneId]
    if not cfg then
        console.error("场景:", sceneId, " 配置不存在, 使用city场景图标") --@DEL
        cfg = self:Category("SceneTemplate")["city"]
    end
    local icon = cfg.icon
    if not icon then
        console.error("场景图标:", sceneId, "图标不存在, 使用city场景图标") --@DEL
        icon = self:Category("SceneTemplate")["city"].icon
    end
    return icon
end

function MetaManager:GetTurntabaleEnergyMeta(id)
    local cfgs = self:Category("TurntableTemplate")
    return cfgs[id]
end

---获取商人配置
function MetaManager:GetTraderConfig(traderId)
    if not traderId then
        return
    end

    local cfgs = self:Category("ExchangeTemplate")
    if cfgs then
        return cfgs[tostring(traderId)]
    end
end
---获取商人普通兑换信息
function MetaManager:GetTraderNormalItems(traderId)
    local cof = self:GetTraderConfig(traderId)
    if cof then
        local info = cof.exchangeNormalNeed
        local normalNeed = {}
        for k, v in ipairs(info) do
            normalNeed[k] = {itemId = v[1], count = v[2]}
        end
        local normalReward = {}
        info = cof.exchangeNormalReward
        for k, v in ipairs(info) do
            normalReward[k] = {itemId = v[1], count = v[2]}
        end
        local result = {normalNeed = normalNeed, normalReward = normalReward}
        return result
    end
end
---获取商人特惠兑换信息
function MetaManager:GetTraderSpecialItems(traderId)
    local cof = self:GetTraderConfig(traderId)
    if cof then
        local info = cof.exchangeSpecialNeed
        local specialNeed = {itemId = info[1], count = info[2]}
        info = cof.exchangeSpecialReward
        local specialReward = {itemId = info[1], count = info[2]}
        info = cof.exchangeSpecialBox
        local specialBox = {}
        for k, v in ipairs(info) do
            specialBox[k] = {itemId = v[1], count = v[2]}
        end
        local result = {
            specialNeed = specialNeed,
            specialReward = specialReward,
            specialBox = specialBox,
            specialTime = cof.exchangeSpecialTime
        }
        return result
    end
end
---获取商人完成奖励信息
function MetaManager:GetTraderCompleteItems(traderId)
    local cof = self:GetTraderConfig(traderId)
    if cof then
        local completeReward = {}
        for k, v in ipairs(cof.exchangeComplete) do
            completeReward[k] = {itemId = v[1], count = v[2]}
        end
        return completeReward
    end
end

---获取收藏系统的配置
function MetaManager:GetCollectionItem(id)
    id = tostring(id)
    local cfgs = self:Category("CollectionTemplate")
    return cfgs[id]
end

---获取采集成就奖励配置
function MetaManager:GetAchivementItem(achievementId)
    if not achievementId then
        return
    end

    local cfgs = self:Category("ObstacleAchievementTemplate")
    if cfgs then
        return cfgs[achievementId]
    end
end
---通过MapId 获取采集成就奖励配置
function MetaManager:GetAchievementItemsByMapId(mapId)
    if not mapId then
        return
    end

    local cof = self:Category("ObstacleAchievementTemplate")
    if cof then
        mapId = tostring(mapId)
        -- local res = {}
        for _, v in pairs(cof) do
            if v.mapId == mapId then
                -- res[#res+1] = v
                return true
            end
        end
    -- if #res>0 then
    --     return res
    -- end
    end
end

---获取采集目标ItemID列表
function MetaManager:GetAchievementItemsId(achievementId)
    if not achievementId then
        return
    end
    achievementId = tostring(achievementId)
    local cof = self:Category("ObstacleAchievementTemplate")
    local obstacleCfgs = self:Category("ObstacleTemplate")
    if cof then
        if not self.achievementItemsId then
            local lis = {}
            for k, v in pairs(obstacleCfgs) do
                if v.achievementType > 0 then
                    local tlis = lis[v.achievementType]
                    if tlis then
                        tlis[#tlis + 1] = k
                    else
                        tlis = {k}
                        lis[v.achievementType] = tlis
                    end
                end
            end
            self.achievementItemsId = lis
        end
        local inf = cof[achievementId]
        if inf then
            local tp = inf.obstacleType[1]
            return self.achievementItemsId[tp]
        end
    end
end

--体力兑换装置
function MetaManager:GetConvertFactoryConfig(id)
    if not id then
        return
    end

    local cfgs = self:Category("ConvertFactoryTemplate")
    if cfgs then
        return cfgs[tostring(id)]
    end
end

function MetaManager:IsExChangeDragon(cfg)
    if cfg == nil or cfg.unlockCondition == nil then
        return false
    end
    return cfg.unlockCondition == 4 or cfg.unlockCondition == 5 or cfg.unlockCondition == 6
end
---获取所有可购买和可培育的龙
function MetaManager:GetDragonShopConfig()
    if self.shopDragons then
        return self.shopDragons
    end

    local cof = self:Category("MagicalCreaturesTemplate")
    if cof then
        local costDragons = {}
        local costKeys = {}
        local breedDragons = {}
        local breedKeys = {}
        local exchangeDragons = {}
        local exchangeKeys = {}
        for _, v in pairs(cof) do
            local isbreed = v.parents and v.parents[1] and not self:IsExChangeDragon(v)
            -- local isbuy = v.cost and #v.cost > 0 and not self:IsExChangeDragon(v)
            local isExChange = self:IsExChangeDragon(v) and v.level == 1
            if isbreed or isExChange then
                local productInf = v.productivity
                -- local cost = v.cost
                local info = {
                    id = v.id,
                    type = v.type,
                    name = v.name,
                    sequence = v.sequence,
                    modelName = v.model,
                    attribute = v.attribute[1],
                    level = v.level,
                    iconName = v.icon,
                    quality = v.quality,
                    product = {
                        id = productInf[1],
                        time = productInf[2],
                        count = productInf[3]
                    },
                    unlockLevel = v.unlockConditionParam,
                    physicalStrength = v.physicalStrength
                }
                if isbreed then
                    info.parents = {v.parents[1], v.parents[2]}
                    breedDragons[v.sequence] = info
                    breedKeys[#breedKeys + 1] = v.sequence
                end
                -- if isbuy and cost then
                --     info.cost = {id = cost[1], count = cost[2], offset = cost[3], maxGrowth = cost[4]}
                --     costDragons[v.sequence] = info
                --     costKeys[#costKeys + 1] = v.sequence
                -- end
                if isExChange then
                    local inTime = tonumber(v.timeLimit[1])
                    local commingTime = tonumber(v.timeLimit[2])
                    local currentTime = TimeUtil.ServerTime()

                    if commingTime and currentTime > commingTime then
                        -- info.cost = {id = cost[1], count = cost[2], offset = cost[3]}
                        if v.parents and #v.parents > 0 then
                            info.parents = {v.parents[1], v.parents[2]}
                        end
                        info.unlockLevel = 1
                        info.unlockCondition = v.unlockCondition
                        info.actId = tostring(v.unlockConditionParam)
                        info.inTime = inTime
                        info.commingTime = commingTime

                        exchangeDragons[v.sequence] = info
                        exchangeKeys[#exchangeKeys + 1] = v.sequence
                    end
                end
            end
        end
        table.sort(costKeys)
        table.sort(breedKeys)
        table.sort(exchangeKeys)
        self.shopDragons = {
            costKeys = costKeys,
            costDragons = costDragons,
            breedKeys = breedKeys,
            breedDragons = breedDragons,
            exchangeDragons = exchangeDragons,
            exchangeKeys = exchangeKeys
        }
        return self.shopDragons
    end
end
--通过类型获取改类型伙伴的所有星级配置
function MetaManager:GetParterStarConfigsByType(type)
    local meta = self:Category("PartnerRisingStarTemplate")
    local tmp = {}
    for _, v in pairs(meta) do
        if v.type == type then
            table.insert(tmp, v)
        end
    end
    table.sort(tmp, function(a, b)
        if not a or not b then
            return false
        end
        if a.star < b.star then
            return true
        end
        return false
    end)
    return tmp
end
--通过类型将配置归类
function MetaManager:GetAllPartnersConfig()
    if self.partnerInGroups then
        return self.partnerInGroups
    end

    local meta = self:Category("MagicalCreaturesTemplate")
    local partnerInGroups = {}
    for _,v in pairs(meta) do
        local tmp = partnerInGroups[v.type] or {}
        table.insert(tmp, v)
        partnerInGroups[v.type] = tmp
    end
    for _, v in pairs(partnerInGroups) do
        table.sort(v, function(a, b)
            if a.level < b.level then
                return true
            end
            return false
        end)
    end
    self.partnerInGroups = partnerInGroups
    return partnerInGroups
end
---通过类型获取属于该类型所有龙配置
function MetaManager:GetDragonConfigsByType(dragonType)
    if not dragonType then
        return
    end

    local cof = self:Category("MagicalCreaturesTemplate")
    if cof then
        local configs = {}
        for _, v in pairs(cof) do
            if v.type == dragonType then
                configs[#configs + 1] = v
            end
        end
        table.sort(
            configs,
            function(a, b)
                return a.level < b.level
            end
        )
        return configs
    end
end

function MetaManager:GetDragonConfigByTypeAndLevel(dragonType, level)
    local cfgs = self:Category("MagicalCreaturesTemplate")
    for _, v in pairs(cfgs) do
        if v.type == dragonType and v.level == level then
            return v
        end
    end
end

---抚摸龙配置
function MetaManager:GetDragonCaressConf()
    local cof = self:Category("ConfigTemplate")
    local value = cof["dragonCaress"].value
    value = table.deserialize(value)
    return {CDTime = value[1], Times = value[2]}
end
---抚摸龙cd时间
function MetaManager:GetDragonCaressCDTime()
    local cof = self:Category("ConfigTemplate")
    local value = cof["dragonCaressCD"].value
    if value then
        return tonumber(value)
    end
end
---购买龙出生位置，朝向
function MetaManager:GetBuyDragonBirthInfo()
    local cof = self:Category("ConfigTemplate")
    local value = cof["dragonBirthPos"].value
    if value then
        value = table.deserialize(value)
        return Vector3(value[1], value[2], value[3]), value[4]
    end
end
---获取掉落表奖励信息
function MetaManager:GetDropRewardInfo(id)
    if not id then
        return
    end
    id = tostring(id)
    local cof = self:Category("DropTemplate")
    if cof then
        local info = cof[id]
        if info then
            local index = 1
            local res = {}
            local val = info["itemID1"]
            while val and val ~= "" and val ~= "0" and val ~= 0 do
                res[#res + 1] = {
                    itemId = val,
                    weight = info[string.format("weight%d", index)],
                    numMin = info[string.format("numMin%d", index)],
                    numMax = info[string.format("numMax%d", index)]
                }
                index = index + 1
                val = info[string.format("itemID%d", index)]
            end
            return res
        end
    end
end

function MetaManager.GetRewardAnimPriority()
    return {
        ["1000"] = 1,
        ["1003"] = 2,
        ["1002"] = 3,
        ["1001"] = 4
    }
end

function MetaManager:GetDropAniRadius()
    local cof = self:Category("ConfigTemplate")
    local value = cof.dropAnimationRadius.value
    value = table.deserialize(value)
    return Vector2(value[1], value[2])
end

function MetaManager:GetWorkDragonSpeed()
    if not self._workDragonSpeed then
        local cof = self:Category("ConfigTemplate")
        local value = cof.workDragonSpeed.value
        value = table.deserialize(value)
        self._workDragonSpeed = value
    end
    return self._workDragonSpeed
end

function MetaManager:GetMissionDragonProduct()
    if not self._missionDragonProduct then
        local cof = self:Category("ConfigTemplate")
        local value = cof.missionDragonProduct.value
        if not string.isEmpty(value) then
            self._missionDragonProduct = table.deserialize(value)
        else
            self._missionDragonProduct = {}
        end
    end
    return self._missionDragonProduct
end

function MetaManager:GetComicsSkipable()
    if not self._comicsSkippable then
        local cof = self:Category("ConfigTemplate")
        local value = cof.ComicsSkipMission.value
        if not string.isEmpty(value) then
            local finished = AppServices.Task:IsTaskFinish(value)
            self._comicsSkippable = finished
        else
            self._comicsSkippable = false
        end
    end
    return self._comicsSkippable
end

function MetaManager:GetWorkDragonShowNum()
    local cof = self:Category("ConfigTemplate")
    return tonumber(cof.workDragonShowNum.value)
end

function MetaManager:GetScoreRewards(activityType)
    return self:Category("ActivityScoreRewardTemplate.ActivityScoreRewardTemplate" .. tostring(activityType))
end

function MetaManager:GetSupportedLanguages()
    if not self.caches.supportedLangs then
        local config = self:GetConfigMetaValue("LocalizationLanguageConfig")
        local langs = string.split(config,',')
        self.caches.supportedLangs = langs
    end
    return self.caches.supportedLangs
end

local BUILDING_ANCHOR_TABLE
function MetaManager:GetOffset(metaId)
    if not BUILDING_ANCHOR_TABLE then
        BUILDING_ANCHOR_TABLE = CONST.RULES.UnsafeLoad("Configs.Maps.BuildingAnchor")
        BUILDING_ANCHOR_TABLE = BUILDING_ANCHOR_TABLE or {}
    end
    local meta = self:GetBindingMeta(tostring(metaId))
    return BUILDING_ANCHOR_TABLE[meta.model]
end

function MetaManager:GetSplitConfig(name)
    if not self.splitConfigMeta then
        self.splitConfigMeta = self:Category("groupFileSplitConfig")
    end
    return self.splitConfigMeta[name]
end

function MetaManager:Clear()
    self.metas = {}
end

return MetaManager
