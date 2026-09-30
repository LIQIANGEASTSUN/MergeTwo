--- 生成器合成引导
local TutorialItemGenerator = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

local _mapId = nil

--- 合成生成器链
TutorialItemGenerator.CheckNext = function(mapId)
    _mapId = mapId
    local row1, col1, row2, col2 = TutorialItemGenerator.CheckMergeGenetorLink()
    if row1 ~= nil then
        console.print(">>>  合成生成器物品: "..row1..","..col1.." -> "..row2..","..col2)
        local position1 = TwoMergeConfig.GridIdToPos(row1, col1)
        local position2 = TwoMergeConfig.GridIdToPos(row2, col2)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.Merge, {
            position1 = position1,
            position2 = position2,
        })
        return true
    end

    local selectRow, selectCol = TutorialItemGenerator.CheckSelectBox(mapId)
    if selectRow ~= nil then
        local position = TwoMergeConfig.GridIdToPos(selectRow, selectCol)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.Click, {
            position = position,
        })
        return true
    end

    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.End)
    return false
end

--- 寻找合成生成器链
TutorialItemGenerator.CheckMergeGenetorLink = function()
    local links = MergeConfigUtil.GetTutorialGeneratorLink()
    local linkDic = {}
    for _, linkId in pairs(links) do
        linkDic[linkId] = true
    end
    return TutorialItemGenerator.CheckMergeLinkId(linkDic)
end

TutorialItemGenerator.CheckMergeLinkId = function(links)
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    local mergeTarget = {}
    for _, v in pairs(itemConfig) do
        if links[v.groupId] then
            mergeTarget[v.groupId] = mergeTarget[v.groupId] or {}
            table.insert(mergeTarget[v.groupId], { id = v.id, level = v.level })
        end
    end

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local merges = {}
    local canDrags = {}
    local row, col = 0, 0
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() and links[v.itemArticle:GetConfig().groupId] == true and not string.isEmpty(v.itemArticle:GetConfig().nextId) then
            local itemId = v.itemArticle:GetItemId()
            row, col = v.itemArticle:GetRowCol()
            if v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock then
                if canDrags[itemId] == nil then
                    canDrags[itemId] = { row = row, col = col }
                else
                    merges[itemId] = merges[itemId] or {}
                    table.insert(merges[itemId], { row = row, col = col })
                end
            end
            if v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Lock then
                merges[itemId] = merges[itemId] or {}
                table.insert(merges[itemId], { row = row, col = col })
            end
        end
    end

    local row1, col1, row2, col2 = nil, nil, nil, nil
    local distance, mindistance = -1, -1
    local isFinal = false
    for groudId, mergelist in pairs(mergeTarget) do
        table.sort(mergelist, function(a, b) return a.level > b.level end)

        for _, v in pairs(mergelist) do
            if canDrags[v.id] ~= nil and merges[v.id] ~= nil and #merges[v.id] >= 1 then

                row1 = canDrags[v.id].row
                col1 = canDrags[v.id].col

                for i = 1, #merges[v.id], 1 do
                    distance = math.abs(row1 - merges[v.id][i].row) + math.abs(col1 - merges[v.id][i].col)
                    if mindistance == -1 or distance < mindistance then
                        mindistance = distance
                        row2 = merges[v.id][i].row
                        col2 = merges[v.id][i].col
                    end
                end
                isFinal = true
                break
            end
        end
        if isFinal then break end
    end
    return row1, col1, row2, col2
end

--- 自选箱子引导
TutorialItemGenerator.CheckSelectBox = function(mapId)
    local key = "twomerge_tutorial_select"..tostring(mapId)
    local state = AppServices.User.Default:GetKeyValue(key, 0)
    if state == 0 then

        local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
        for _, v in pairs(list) do
            if v.itemArticle and v.itemArticle:IsUnlockArea() and v.itemArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.SelectChest then
                local row, col = v.itemArticle:GetRowCol()
                AppServices.User.Default:SetKeyValue(key, 1, true)
                return row, col
            end
        end
        return
    end
    return nil
end

return TutorialItemGenerator