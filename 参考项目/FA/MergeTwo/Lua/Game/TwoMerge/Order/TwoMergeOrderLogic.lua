local TwoMergeOrderLogic = {}
local gmcaches = {}

TwoMergeOrderLogic.GetDefaultNeedList = function(mapId)
    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
    local results = {}
    table.insert(results, { itemId = config.default_random_order, count = 1 })
    console.error(">>>  my  使用保底物品  "..tostring(config.default_random_order))
    return results
end

TwoMergeOrderLogic.DoRandom = function(mapId, difficult, islog) -- 配置列表

    local hasGM, result = TwoMergeOrderLogic.GetDefineCache()
    if hasGM then
        console.print(">>>  my  使用GM缓存物品  "..console.GetTableStr(result))
        return true, result
    end

    local checkDeleteRepeatDic = AppServices.TwoMergeOrderManager:GetAllNeedLinkDic()
    local str = ">>>  随机订单:  难度: "..tostring(difficult).."   初始去重列表"..console.GetTableStr(checkDeleteRepeatDic)

    -- 随机个数
    local orderItemRandomNumberConfig = AppServices.Meta:Category("OrderItemRandomNumberTemplate")
    local numlist, numweightlist = {}, {}
    local useId = ""
    for _, numberInfo in pairs(orderItemRandomNumberConfig) do
        if numberInfo.chessboard == mapId and numberInfo.difficultyType == difficult and TwoMergeOrderLogic.CheckCondition(numberInfo.Typeid, numberInfo.Taskid) then
            if useId == "" or tonumber(numberInfo.ID) > tonumber(useId) then
                useId = numberInfo.ID
            end
        end
    end
    if string.isEmpty(useId) then
        str = str.."  未找到匹配的 随机个数配置"
        console.error(str)
        return false
    end

    for _, v in pairs(orderItemRandomNumberConfig[useId].itemNumber) do
        table.insert(numlist, v[1])
        table.insert(numweightlist, v[2])
    end
    local countIndexs = LuaGameUtil.getRandomList(numlist, numweightlist, 1, false)
    local randomCount = numlist[countIndexs[1]] -- 个数
    if islog then str = str.." 个数: "..randomCount end

    -- 随机需要的链
    local succ, needlinks = TwoMergeOrderLogic.GetNeedLinks(mapId, difficult, randomCount, checkDeleteRepeatDic)
    if islog then str = str.." 链: "..tostring(succ).." "..console.GetTableStr(needlinks) end
    if not succ then
        str = str.."  随机合成链失败  "
        console.error(str)
        needlinks = {}
        return false, nil
    end


    -- 随机需要的物品
    local needitems = {}
    for i = 1, #needlinks, 1 do
        local id = TwoMergeOrderLogic.GetNeedItemId(mapId, needlinks[i], difficult, i)
        if id ~= nil then table.insert(needitems, { itemId = id, count = 1 })
        else console.error("error : 随机物品为空 "..tostring(needlinks[i]))
        end
    end

    if islog then str = str.." 最终物品: "..console.GetTableStr(needitems); console.print(str) end
    return true, needitems
end

--- checkDeleteRepeatDic 去重dic
TwoMergeOrderLogic.GetNeedLinks = function(mapId, difficult, randomCount, checkDeleteRepeatDic)
    local needlinks = {}
    for i = 1, randomCount, 1 do
        local succ, needLinkId = TwoMergeOrderLogic.GetNeedLinkId(mapId, difficult, checkDeleteRepeatDic)
        if succ then
            table.insert(needlinks, needLinkId)
            checkDeleteRepeatDic[needLinkId] = true -- 去重增加
        end
    end
    if #needlinks ~= randomCount then
        return false, needlinks
    end
    return true, needlinks
end

TwoMergeOrderLogic.GetNeedLinkId = function(mapId, difficult, checkDeleteRepeatDic)
    local orderItemSyntheticChainRandomConfig = AppServices.Meta:Category("OrderItemChainTemplate")
    local generatorlink_list, generatorlink_weightlist = {}, {}
    local conditionlist = {}
    for _, v in pairs(orderItemSyntheticChainRandomConfig) do
        if v.chessboard == mapId and v.difficultyType == difficult and AppServices.TwoMergeManager:HasGeneratorLinkId(mapId, v.RequiredGenerator) then
            table.insert(conditionlist, { id = v.ID, chain = v.SyntheticChain })
        end
    end
    if #conditionlist == 0 then
        console.error("error : 没有符合条件的合成链  difficult: "..tostring(difficult))
        return false, nil
    end
    -- 去重
    for _, v in pairs(conditionlist) do
        if not checkDeleteRepeatDic[v.chain] then
            table.insert(generatorlink_list, v.id)
            table.insert(generatorlink_weightlist, 1)
        end
    end
    -- 去没了 全部随机
    if #generatorlink_list == 0 then
        for _, v in pairs(conditionlist) do
            table.insert(generatorlink_list, v.id)
            table.insert(generatorlink_weightlist, 1)
        end
    end

    local generatorIndexs = LuaGameUtil.getRandomList(generatorlink_list, generatorlink_weightlist, 1, false)
    local index = generatorIndexs[1]
    local linkId = orderItemSyntheticChainRandomConfig[index].SyntheticChain
    return true, linkId
end

TwoMergeOrderLogic.GetNeedItemId = function(mapId, linkId, difficult, index)
    local config = AppServices.Meta:Category("OrderItemRandomItemTemplate")
    local maxLevel = AppServices.TwoMergeManager:Ill_UnlockMax(mapId, linkId) -- 合成过的最高等级 图鉴解锁等级
    local idlist, weightlist = {}, {}

    local randomIndex = index -- 随机的第 ? 个物品
    for _, v in pairs(config) do
        if v.difficultyType == difficult and v.SyntheticChain == linkId and v.MaxLevel == maxLevel then

            local targetIndex = 1
            for index, arg in pairs(v.taskRange) do
                if TwoMergeOrderLogic.CheckCondition(2, { [1] = arg }) then
                    targetIndex = index
                end
            end

            -- 随机的第几个物品 就取第几列
            local randomitems = v["RandomItem"..randomIndex][targetIndex]
            local randomweights = v["RandomItemWeight"..randomIndex][targetIndex]
            for i = 1, #randomitems, 1 do
                table.insert(idlist, tostring(randomitems[i]))
                table.insert(weightlist, tostring(randomweights[i]))
            end
            break
        end
    end
    local ids = LuaGameUtil.getRandomList(idlist, weightlist, 1, false)
    return ids[1]
end

TwoMergeOrderLogic.CheckCondition = function(type, args)
    if type == 0 then return true end

    if type == 1 then
        return AppServices.Task:IsTaskFinish(args[1])
    elseif type == 2 then
        return AppServices.TwoMergeManager:GetCurrentStage() <= tonumber(args[1])
    end
    return false
end

TwoMergeOrderLogic.SetDefineCaches = function(lists)
    if #lists > 0 then
        for _, items in pairs(lists) do
            table.insert(gmcaches, items)
        end
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrderShow_GMCaches)
    end
end
TwoMergeOrderLogic.GetDefineCachesStr = function()
    local haveCaches, str = false, ""
    for index, v in pairs(gmcaches) do
        haveCaches = true
        str = str..index.." > "..console.GetTableStr(v).."\n"
    end
    return haveCaches, str
end
TwoMergeOrderLogic.ClearDefineCaches = function()
    gmcaches = {}
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrderShow_GMCaches)
end
TwoMergeOrderLogic.GetDefineCache = function()
    if #gmcaches > 0 then
        local info = gmcaches[1]
        table.remove(gmcaches, 1)
        local results = {}
        for _, itemId in pairs(info) do
            table.insert(results, { itemId = itemId, count = 1 })
        end
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrderShow_GMCaches)
        return true, results
    end
    return false, nil
end

return TwoMergeOrderLogic