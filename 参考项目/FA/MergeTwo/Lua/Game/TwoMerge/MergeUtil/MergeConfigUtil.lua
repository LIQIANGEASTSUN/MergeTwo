local MergeConfigUtil = {}
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

--- 是否开启多倍
MergeConfigUtil.IsOpenRate = function()
    local mapId = AppServices.TwoMergeManager:MapId()
    local canRate2 = MergeConfigUtil.CanRate2(mapId)
    local canRate4 = MergeConfigUtil.CanRate4(mapId)
    return canRate2, canRate4
end

MergeConfigUtil.CanRate2 = function(mapId)
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    return MergeConfigUtil.IsFinishCondition(mapId, config["2x_start_conditions"][1], { [1] = config["2x_start_conditions"][2]})
end
MergeConfigUtil.CanRate4 = function(mapId)
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    return MergeConfigUtil.IsFinishCondition(mapId, config["4x_start_conditions"][1], { [1] = config["4x_start_conditions"][2]})
end

MergeConfigUtil.IsFinishCondition = function(mapId, type, args)
    if type == 1 then
        return string.isEmpty(args[1]) or AppServices.Task:IsTaskFinish(args[1])
    elseif type == 2 then
        return AppServices.TwoMergeManager:GetCurrentStage() >= tonumber(args[1])
    end
end

MergeConfigUtil.GetOpenTwoMergeShop = function()
    local mapId = AppServices.TwoMergeManager:MapId()
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    if #config.shop_start_conditions == 0 then return true end

    local isSuccess = MergeConfigUtil.IsFinishCondition(mapId, config.shop_start_conditions[1], { [1] = config.shop_start_conditions[2] })
    return isSuccess
end

--- 加速价格
MergeConfigUtil.GetLeftTimePrice = function(lefttime)
    local mapId = AppServices.TwoMergeManager:MapId()
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]

    local itemId = config.clearcd_currency_types
    local count = config.clearcd_price
    local price = math.ceil(lefttime / count)
    return itemId, price
end
--- 自定义订单奖励
MergeConfigUtil.GetDefineOrderRewards = function(itemNeedList)
    local mapId = AppServices.TwoMergeManager:MapId()
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    local rewardId = config.order_award_itemId
    local rewardCount = 0
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    for _, v in pairs(itemNeedList) do
        if itemConfig[v.itemId] then
            rewardCount = rewardCount + itemConfig[v.itemId].orderPrice
        end
    end
    return { [1] = { itemId = rewardId, count = rewardCount } }
end

--- 二合入口开启条件  任务Id
MergeConfigUtil.GetOpenButtonTask = function(mapId)
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    if string.isEmpty(config.merge_start_conditions) then
        return nil
    end
    return config.merge_start_conditions
end

--- 需要引导的任务列表
MergeConfigUtil.GetTutorialTask = function(mapId)
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    if #config.guide_start_conditions == 0 then
        return {}
    end
    return config.guide_start_conditions
end

--- 获取深度锁定图片
local deepicons = {}
MergeConfigUtil.GetDeepIcon = function(row, col)
    local mapId = AppServices.TwoMergeManager:MapId()
    if deepicons[mapId] == nil then
        deepicons[mapId] = AppServices.TwoMergeManager:GetOriginGrid(mapId)
    end
    local gridInfo = deepicons[mapId][TwoMergeConfig.Encode(row, col)]
    if gridInfo ~= nil and not string.isEmpty(gridInfo.gridCoverIcon) then
        return gridInfo.gridCoverIcon
    else
        return "twomerge_deep1"
    end
end

--- 物品是否是生成器链
local generatorCaches = nil
MergeConfigUtil.IsGeneratorLink = function(itemId)
    local config = AppServices.Meta:Category("MergeTwoItemTemplate")
    if generatorCaches == nil then
        generatorCaches = {}
        for _, v in pairs(config) do
            if v.type == TwoMergeConfig.ArticleType.Generator and generatorCaches[v.groupId] == nil then
                generatorCaches[v.groupId] = true
            end
        end
    end
    if config[itemId] ~= nil then
        local linkId = config[itemId].groupId
        return generatorCaches[linkId] or false
    end
    return false
end

--- 需要引导的生成器链
MergeConfigUtil.GetTutorialGeneratorLink = function()
    local mapId = AppServices.TwoMergeManager:MapId()
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]

    return config.tutorial_link or { "110201", "110202", "110203", "110205" }
end
MergeConfigUtil.IsTutorialGeneratorLink = function(itemId)
    local links = MergeConfigUtil.GetTutorialGeneratorLink()
    local config = AppServices.Meta:Category("MergeTwoItemTemplate")[itemId]
    for _, linkId in pairs(links) do
        if config.groupId == linkId then
            return true
        end
    end
    return false
end
MergeConfigUtil.IsSelectChest = function(itemId)
    local config = AppServices.TwoMergeManager:GetItemConfig()[itemId]
    if config ~= nil then
        return config.type == TwoMergeConfig.ArticleType.SelectChest
    end
    return false
end

MergeConfigUtil.GetUnlockCondition_RandomOrder = function(mapId)
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    return config.condition_random_order
end

return MergeConfigUtil