--- 自动合成
local AutoMergeLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
---@type MergeSpawnLogic
local MergeSpawnLogic = require("Game.TwoMerge.Logic.MergeSpawnLogic")
local isRunning = false

AutoMergeLogic.DO_Common = function()
    if isRunning then return end

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local articles = {}

    --- 可合成列表筛选
    local row, col = 0, 0
    local type = TwoMergeConfig.ArticleState.Lock
    local itemId = ""
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() and MergeSpawnLogic:EnableMerge(v.itemArticle) then
            type = v.itemArticle:GetCurrentStateType()
            itemId = v.itemArticle:GetItemId()
            row, col = TwoMergeConfig.Decode(v.position)
            if type == TwoMergeConfig.ArticleState.Unlock then
                table.insert(articles, v.itemArticle)
                articles[itemId] = articles[itemId] or {}
                table.insert(articles[itemId], { row = row, col = col })
            end
        end
    end

    --- 配对合成组
    local mergelist = {}
    for itemId, list in pairs(articles) do
        table.sort(list, function(a, b)
            if a.row ~= b.row then
                return a.row < b.row
            else
                return a.col < b.col
            end
        end)
        if #list >= 2 then
            for i = 1, math.floor(#list / 2), 1 do
                table.insert(mergelist, {
                    row1 = list[i * 2 - 1].row,
                    col1 = list[i * 2 - 1].col,
                    row2 = list[i * 2].row,
                    col2 = list[i * 2].col,
                })
            end
        end
    end

    if #mergelist == 0 then return end

    --- 开始合成
    local totalCount = #mergelist -- 每一轮合成 roundCount 组
    local roundCount = 3
    local round = 0
    local index = 0
    local roundIndex = 0
    local time = 0.5 -- 飞行动画时长
    local totalTime = 0
    while index < totalCount do
        index = index + 1
        roundIndex = roundIndex + 1

        local mergeInfo = mergelist[round * roundCount + roundIndex]
        if mergelist[index] ~= nil then

            local starttime = round * time
            local endtime = starttime + time
            WaitExtension.SetTimeout(function()
                local article1 = AppServices.TwoMergeMapGridManager:FindItemArticle(mergeInfo.row1, mergeInfo.col1)
                article1:FlyToGrid(mergeInfo.row2, mergeInfo.col2, TwoMergeConfig.FlyMoveType.AutoMergeMove)
            end, starttime)

            WaitExtension.SetTimeout(function()
                local article1 = AppServices.TwoMergeMapGridManager:FindItemArticle(mergeInfo.row1, mergeInfo.col1)
                local article2 = AppServices.TwoMergeMapGridManager:FindItemArticle(mergeInfo.row2, mergeInfo.col2)
                local spawnConfig = article1:GetConfig()
                MergeSpawnLogic:MergeSuccess(article1, article2, spawnConfig)
            end, endtime)

            if totalTime < endtime then totalTime = endtime end
        end

        --- 每 roundCount 个数一轮
        if roundIndex == roundCount then
            roundIndex = 0
            round = round + 1
        end
    end

    WaitExtension.SetTimeout(function()
        UITool.ShowContentTipAni("t: Merge Complete")
        isRunning = false
    end, totalTime)

    GameUtil.BlockAll(totalTime, "twomerge_automerge")
end


return AutoMergeLogic