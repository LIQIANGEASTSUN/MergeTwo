--- 生成器相关
---@class GenerateLogic
local GenerateLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type DataPack
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
---@type MergeConfigUtil
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

local lastTipStamp = 0

function GenerateLogic.OnGenerate(article, targetRow, targetCol)
    local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[article:GetItemId()]

    -- 每个大轮次有几轮
    local totalRound = #config.num -- 总共轮数
    -- 当前轮数
    local historyCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
    local curRound = historyCount % totalRound + 1

    -- 当前次数
    local curCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
    -- 本轮总次数
    local configCount = config.num[curRound]
    -- 本轮cd结束时间
    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    -- 当前时间
    local now = TimeUtil.ServerTime()

    -- 当前 行 列
    local row, col = article:GetRowCol()

    -- 倒计时结束
    local finalRoundFinish = curRound == totalRound and curCount >= configCount and now >= endTimeStamp
    local commonRoundFinish = curRound ~= totalRound and now >= endTimeStamp
    -- 开启下一轮
    if config.cd[curRound] > 0 and (finalRoundFinish or commonRoundFinish) then

        -- 最后一小轮 次数点击完成之后 再开始下一轮
        -- 正场一小轮 直接开始计时
        historyCount = historyCount + 1 -- 历史轮数 +1
        AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey.historyCount, historyCount)
        curRound =  historyCount % totalRound + 1 -- 当前轮数更新
        configCount = config.num[curRound] -- 本轮总次数
        AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey.curCount, 0) -- 当前次数 清零
        curCount = 0
        if curRound ~= totalRound then -- +1之后的轮数
            -- 设置 cd结束时间
            local endTimeStamp = now + config.cd[curRound]
            AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey["end"], endTimeStamp)
        end
    end

    -- 倒计时过程中  次数达到
    if curCount >= configCount then
        local now = TimeUtil.ServerTime()
        if now - lastTipStamp >= 2 then
            local content = Runtime.Translate("merge_system_14") -- t: 生成器正在充能
            UITool.ShowContentTipAni(content)
            lastTipStamp = now
        end
        return TwoMergeConfig.FunctionResult.Fail
    end

    --- 花费(体力等)
    local costId, costCount = "", 0
    if #config.cost > 0 then
        costId, costCount = tostring(config.cost[1]), config.cost[2]
        local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
        if AppServices.TwoMergeManager:GetItemAmount(mapId, costId) < costCount then
            -- UITool.ShowContentTipAni("T: 体力不足")
            return TwoMergeConfig.FunctionResult.Fail, TwoMergeConfig.ClickFailType.EnergyNotEnough
        end
    end
    -- 生成物品Id
    local itemId = GenerateLogic.GenerateItem(article:GetItemId(), curCount + 1)

    --- 检测多倍状态
    local isDouble = false
    if article:CanDouble() then -- 该物品可多倍
        local canDouble, newItemId, newCostCount = GenerateLogic.CheckRateItemId(itemId, costId, costCount)
        if canDouble then
            isDouble = true
            itemId = newItemId
            costCount = newCostCount
        end
    end

    --- 生成
    local itemData = DataPack.CreateItemData(itemId, targetRow, targetCol)
    local newArticle = AppServices.TwoMergeManager:CreateArticle(itemData)
    AppServices.TwoMergeMapGridManager:AddArticle(targetRow, targetCol, newArticle)
    App.audioManager:PlayEffectAudio(CONST.AUDIO.audio_bubble) -- 生成音效
    -- 特效 动画
    local time, efftime = newArticle:FlyFromToGrid(row, col, targetRow, targetCol, TwoMergeConfig.FlyMoveType.CreateMove)
    -- newArticle:DOAni(TwoMergeConfig.TweenType.GenerateCreate)


    -- AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_shengcheng", 2, TwoMergeConfig.GridIdToPos(targetRow, targetCol), nil, efftime)
    -- local tuowei = "E_tuowei_lanse"; if isDouble then tuowei = "E_tuowei_fense" end
    -- AppServices.TwoMergeManager:PlayEffect(tuowei, time, Vector2.zero, newArticle:GetRect())
    -- newArticle:SetCanvasOrder(time + 0.5) -- 等拖尾结束后 在调回正常层级

    -- 当前次数 +1
    local targetCount = curCount + 1
    AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey.curCount, targetCount)

    -- 检测设置 endTimeStamp
    local isDelete = false
    local cd = config.cd[curRound]
    --- cd == -1 and 次数达到  删除
    if cd < 0 then
        if targetCount == configCount then
            isDelete = true
        end
    else
        if curRound == totalRound and targetCount == configCount then
            -- 最后一轮结束  开始计时
            local endTimeStamp = now + config.cd[curRound]
            AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey["end"], endTimeStamp)
        end
    end

    -- 本地缓存消耗货币
    if not string.isEmpty(costId) then
        AppServices.TwoMergeManager:RemoveItem(AppServices.TwoMergeMapGridManager:GetMapId(), costId, costCount, ItemUseMethod.TwoMergeGenerator)
    end

    -- 刷新显示
    article:RefreshShow()

    if isDelete then
        AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.GeneratorCountEnd)
        return TwoMergeConfig.FunctionResult.SuccessAndAbort
    end

    return TwoMergeConfig.FunctionResult.Success
end

--- 本轮剩余生成次数
function GenerateLogic.GetRoundRemainTime(article)
    local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[article:GetItemId()]

    -- 每个大轮次有几轮
    local totalRound = #config.num -- 总共轮数
    -- 当前轮数
    local historyCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
    local curRound = historyCount % totalRound + 1

    -- 当前次数
    local curCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
    -- 本轮总次数
    local configCount = config.num[curRound]
    local remainTime = configCount - curCount
    return remainTime
end

function GenerateLogic.GetCDLefttime(article)
    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    local now = TimeUtil.ServerTime()
    local type = article:GetItemArticleType()
    local totalTime = 1
    if type == TwoMergeConfig.ArticleType.Generator or type == TwoMergeConfig.ArticleType.AutoGenerator then
        local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[article:GetItemId()]
        local totalRound = #config.num -- 总共轮数
        local historyCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
        local curRound = historyCount % totalRound + 1 -- 当前轮数
        totalTime = config.cd[curRound]
    elseif type == TwoMergeConfig.ArticleType.NormalChest or type == TwoMergeConfig.ArticleType.SelectChest then
        local config = AppServices.Meta:Category("MergeTwoboxTemplate")[article:GetItemId()]
        totalTime = config.time
    end
    return endTimeStamp - now, totalTime
end

function GenerateLogic.GetCost(article)
    local lefttime = GenerateLogic.GetCDLefttime(article)
    local id, count = MergeConfigUtil.GetLeftTimePrice(lefttime)
    return id, count
end

function GenerateLogic.IsShowEndTimeStamp(article)
    local type = article:GetItemArticleType()
    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    local now = TimeUtil.ServerTime()
    if type == TwoMergeConfig.ArticleType.Generator or type == TwoMergeConfig.ArticleType.AutoGenerator then
        local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[article:GetItemId()]
        if config == nil then return false end
        -- 每个大轮次有几轮
        local totalRound = #config.num -- 总共轮数
        -- 当前轮数
        local historyCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
        local curRound = historyCount % totalRound + 1

        -- 当前次数
        local curCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
        -- 本轮总次数
        local configCount = config.num[curRound]

        if now < endTimeStamp and curCount == configCount then
            return true
        end
    elseif type == TwoMergeConfig.ArticleType.NormalChest or type == TwoMergeConfig.ArticleType.SelectChest then
        return now < endTimeStamp
    end
    return false
end

--- Item生成器
function GenerateLogic.GenerateItem(itemId, time)
    local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[itemId]

    local generateNum = 1 -- 目前只要1 config.generateNum -- 需要生成的个数

    local fixCount = 0
    if #config.fixedOutput > 0 then
        fixCount = #config.fixedOutput -- 固定产出列表数量
    end

    -- 随机权重列表
    local idlist, weightlist = {}, {}
    if #config.proOutput > 0 then
        for _, v in pairs(config.proOutput) do
            table.insert(idlist, v[1])
            table.insert(weightlist, v[2])
        end
    end
    
    local itemIds, i, newItemId = {}, 1, -1
    while i <= generateNum do

        --- 第几次
        if time + i - 1 <= fixCount then -- 固定列表 依次生成
            newItemId = tostring(config.fixedOutput[time])
        elseif #config.proOutput == 0 then -- 固定列表生成一遍后  还有产出次数 没有配置概率产出  直接产出固定列表最后一个
            newItemId = tostring(config.fixedOutput[fixCount])
        else -- 权重随机
            local resultlist = GenerateLogic.getRandomList(idlist, weightlist, 1, false)
            newItemId = tostring(resultlist[1])
        end

        table.insert(itemIds, newItemId)
        i = i + 1
    end

    return itemIds[1]
end

--- 宝箱生成器
function GenerateLogic:BoxGenerateItem(itemId, time)
    local config = AppServices.Meta:Category("MergeTwoboxTemplate")[itemId]

    local fixCount = #config.fixedOutput -- 固定产出列表数量

    -- 随机权重列表
    local idlist, weightlist = {}, {}
    if #config.proOutput > 0 then
        for _, v in pairs(config.proOutput) do
            table.insert(idlist, v[1])
            table.insert(weightlist, v[2])
        end
    end

    local newItemId = 0
    --- 第几次
    if time - 1 < fixCount then -- 固定列表 依次生成
        newItemId = tostring(config.fixedOutput[time])
    elseif #config.proOutput == 0 then -- 固定列表生成一遍后  还有产出次数 没有配置概率产出  直接产出固定列表最后一个
        newItemId = tostring(config.fixedOutput[fixCount])
    else -- 权重随机
        local resultlist = GenerateLogic.getRandomList(idlist, weightlist, 1, false)
        newItemId = tostring(resultlist[1])
    end

    return newItemId
end

function GenerateLogic.CheckRateItemId(itemId, costId, costCount)
    --- 不花费货币的不能双倍
    if string.isEmpty(costId) then return false end

    local rate = AppServices.TwoMergeManager:GetRate()
    if rate == 2 then
        --- 四倍后 货币不足不能四倍
        local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
        if AppServices.TwoMergeManager:GetItemAmount(mapId, costId) < costCount * 4 then return false end

        local tempconfig = AppServices.TwoMergeManager:GetItemConfig()[itemId]
        if tempconfig ~= nil and not string.isEmpty(tempconfig.nextId) then
            local config = AppServices.TwoMergeManager:GetItemConfig()[tempconfig.nextId]
            if config ~= nil and not string.isEmpty(config.nextId) then
                return true, config.nextId, costCount * 4
            end
        end
    end
    if rate == 1 then
        --- 双倍后 货币不足不能双倍
        local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
        if AppServices.TwoMergeManager:GetItemAmount(mapId, costId) < costCount * 2 then return false end

        local config = AppServices.TwoMergeManager:GetItemConfig()[itemId]
        if config ~= nil and not string.isEmpty(config.nextId) then
            return true, config.nextId, costCount * 2
        end
    end
    return false
end

function GenerateLogic.IsGenerateCDComplete(article)
    if article:GetItemArticleType() ~= TwoMergeConfig.ArticleType.Generator and article:GetItemArticleType() ~= TwoMergeConfig.ArticleType.AutoGenerator then
        return false
    end
    
    local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[article:GetItemId()]

    -- 每个大轮次有几轮
    local totalRound = #config.num -- 总共轮数
    -- 当前轮数
    local historyCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
    local curRound = historyCount % totalRound + 1

    -- 当前次数
    local curCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
    -- 本轮总次数
    local configCount = config.num[curRound]

    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    local now = TimeUtil.ServerTime()
    if now < endTimeStamp and curCount == configCount then
        return false
    end
    return true
    -- local curCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
    -- local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    -- local now = TimeUtil.ServerTime()
    -- if now < endTimeStamp and curCount == 0 then
    --     return false
    -- end
    -- return true
end

--- 是否可以生成
function GenerateLogic.CanGenerate(article)
    if article:GetItemArticleType() ~= TwoMergeConfig.ArticleType.Generator and article:GetItemArticleType() ~= TwoMergeConfig.ArticleType.AutoGenerator then
        return false
    end
    if article:GetCurrentStateType() ~= TwoMergeConfig.ArticleState.Unlock then
        return false
    end
    local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[article:GetItemId()]
    local totalRound = #config.num -- 总共轮数 每个大轮次有几轮
    -- 当前轮数
    local historyCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
    local curRound = historyCount % totalRound + 1

    local curCount = article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount) -- 当前次数
    local configCount = config.num[curRound] -- 本轮总次数
    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"]) -- 本轮cd结束时间
    local now = TimeUtil.ServerTime() -- 当前时间

    -- 倒计时结束
    local finalRoundFinish = curRound == totalRound and curCount >= configCount and now >= endTimeStamp
    local commonRoundFinish = curRound ~= totalRound and now >= endTimeStamp

    local canGen = false

    if config.cd[curRound] > 0 and (finalRoundFinish or commonRoundFinish) then canGen = true end -- 开启下一轮
    if curCount < configCount then canGen = true end -- 倒计时过程中  次数达到

    if canGen then
        if #config.cost > 0 then --- 花费(体力等)
            local costId, costCount = tostring(config.cost[1]), config.cost[2]
            local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
            if AppServices.TwoMergeManager:GetItemAmount(mapId, costId) >= costCount then
                return true
            end
        end
    end
end

-------------------------------------------------------------------------------------------------------------------- 随机相关

-- 随机列表  对应权重列表  随机取出的个数  是否可以重复取同一个
GenerateLogic.getRandomList = function(list, weightlist, getCount, isRepeat)
    local indexList = {}
    if isRepeat then
        indexList = GenerateLogic.private_randomWeightRepeat(weightlist, getCount)
    else
        indexList = GenerateLogic.private_randomWeightNotRepeat(weightlist, getCount)
    end
    local resultList = {}
    for _, index in pairs(indexList) do
        table.insert(resultList, list[index])
    end
    if #list ~= #weightlist then
        console.error("Random Error!  (list count) and (weightlist count) are not equal  list: " .. #list .. ' ,  weightlist: ' .. #weightlist)
    end
    return resultList
end
--重复随机
GenerateLogic.private_randomWeightRepeat = function(weightlist, getCount)
    local ranlist = {}
    local indexList = {}
    local totalWetght = 0
    for i = 1, #weightlist do
        totalWetght = totalWetght + weightlist[i]
    end
    local tempTotalW = 0
    for i = 1, getCount do
        local ran = GenerateLogic.random(0, totalWetght)
        tempTotalW = 0
        for j = 1, #weightlist do
            tempTotalW = tempTotalW + weightlist[j]
            if ran <= tempTotalW then
                table.insert(indexList, j)
                break
            end
        end
    end
    return indexList
end
--不重复随机
GenerateLogic.private_randomWeightNotRepeat = function(weightlist, getCount)
    local ranlist = {}
    if #weightlist <= getCount then
        for i = 1, #weightlist do
            table.insert(ranlist, i)
        end
        return ranlist
    end
    local totalWetght = 0
    for i = 1, #weightlist do
        totalWetght = totalWetght + weightlist[i]
    end
    local indexList = {}
    local excludeList = {}
    for c = 1, getCount do
        local ran = GenerateLogic.random(0, totalWetght)
        local temptotal = 0
        for i = 1, #weightlist do
            if not excludeList[i] then
                temptotal = temptotal + weightlist[i]
                if ran <= temptotal then
                    excludeList[i] = true
                    totalWetght = totalWetght - weightlist[i]
                    table.insert(indexList, i)
                    break
                end
            end
        end
    end
    return indexList
end

GenerateLogic.random = function(a, b)
	if not a then a, b = 0, 1 end
	if not b then b = 0 end
	return a + math.random() * (b - a)
end

-------------------------------------------------------------------------------------------------------------------- 结束: 随机相关

return GenerateLogic