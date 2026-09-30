--- 托管 目前未缓存任何数据  寻找方式为反复遍历
local HostingLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
---@type MergeSpawnLogic
local MergeSpawnLogic = require("Game.TwoMerge.Logic.MergeSpawnLogic")
---@type GenerateLogic
local GenerateLogic = require("Game.TwoMerge.Logic.GenerateLogic")
---@type NormalChestLogic
local NormalChestLogic = require("Game.TwoMerge.Logic.NormalChestLogic")

local isRunning = false
local isbusy = false
local isRegister = false
local timer = nil

HostingLogic.StartUp = function()
    if not isRunning then
        UITool.ShowContentTipAni("启动托管")
    end
    HostingLogic.Register()
    isRunning = true
    isbusy = false
end

HostingLogic.Stop = function()
    if isRunning then
        UITool.ShowContentTipAni("取消托管")
    end
    HostingLogic.UnRegister()
    isRunning = false
    isbusy = false
end

HostingLogic.IsRunning = function() return isRunning end

HostingLogic.Register = function()
    if not isRegister then
        isRegister = true

        timer = WaitExtension.InvokeRepeating(HostingLogic.Tick, 1, 0.75)
    end
end

HostingLogic.UnRegister = function()
    if isRegister then
        isRegister = false

        WaitExtension.CancelTimeout(timer)
        timer = nil
    end
end

HostingLogic.Tick = function()
    if isbusy then return end

    --- 点击使用
    local canClickUse, useRow, useCol = HostingLogic.CanClickUse()
    if canClickUse then
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(useRow, useCol)
        article:NotifySelf(TwoMergeConfig.ArticleEventKey.Click)
    end

    --- 点击普通箱子
    local canClickNormalChest, row, col = HostingLogic.CanClickNormalChest()
    if canClickNormalChest then
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
        article:NotifySelf(TwoMergeConfig.ArticleEventKey.Click)
        return
    end

    --- 点击生成器
    local canClickGenerator, row, col = HostingLogic.CanClickGenerator()
    if canClickGenerator then
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
        article:NotifySelf(TwoMergeConfig.ArticleEventKey.Click)
        -- return
    end

    --- 合成
    local canMerge, mergeInfo = HostingLogic.CanMerge()
    if canMerge then
        local time = 0.5 -- 飞行动画时长
        isbusy = true
        local article1 = AppServices.TwoMergeMapGridManager:FindItemArticle(mergeInfo.row1, mergeInfo.col1)
        article1:FlyToGrid(mergeInfo.row2, mergeInfo.col2, TwoMergeConfig.FlyMoveType.AutoMergeMove)

        WaitExtension.SetTimeout(function()
            local article1 = AppServices.TwoMergeMapGridManager:FindItemArticle(mergeInfo.row1, mergeInfo.col1)
            local article2 = AppServices.TwoMergeMapGridManager:FindItemArticle(mergeInfo.row2, mergeInfo.col2)
            local spawnConfig = article1:GetConfig()
            MergeSpawnLogic:MergeSuccess(article1, article2, spawnConfig)
            isbusy = false
        end, time)
        return
    end

end

--- 可以合成
HostingLogic.CanMerge = function()

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local articles = {}

    local mergeItemId = ""
    local row, col = 0, 0
    local type = TwoMergeConfig.ArticleState.Lock
    local tempItemId = ""
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() and MergeSpawnLogic:EnableMerge(v.itemArticle) then
            type = v.itemArticle:GetCurrentStateType()
            tempItemId = v.itemArticle:GetItemId()
            row, col = TwoMergeConfig.Decode(v.position)
            if type == TwoMergeConfig.ArticleState.Unlock then
                table.insert(articles, v.itemArticle)
                articles[tempItemId] = articles[tempItemId] or {}
                table.insert(articles[tempItemId], { row = row, col = col })
                if #articles[tempItemId] >= 2 then
                    mergeItemId = tempItemId
                    break
                end
            end
        end
    end
    if not string.isEmpty(mergeItemId) then
        local mergeInfo = {
            row1 = articles[tempItemId][1].row,
            col1 = articles[tempItemId][1].col,
            row2 = articles[tempItemId][2].row,
            col2 = articles[tempItemId][2].col,
        }
        return true, mergeInfo
    else
        return false
    end
end

--- 可以点击生成器
HostingLogic.CanClickGenerator = function()
    if not HostingLogic.HasNullGrid() then return end

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local targetRow, targetCol = -1, -1

    local allGetor = {}
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() and GenerateLogic.CanGenerate(v.itemArticle) then
            targetRow, targetCol = TwoMergeConfig.Decode(v.position)
            table.insert(allGetor, { row = targetRow, col = targetCol })
        end
    end
    if #allGetor > 0 then
        local index = math.random(#allGetor)
        targetRow = allGetor[index].row
        targetCol = allGetor[index].col
        return true, targetRow, targetCol
    else
        return false
    end
end

--- 有空地
HostingLogic.HasNullGrid = function()
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local hasNull = false
    for _, v in pairs(list) do
        if v.itemArticle == nil then
            hasNull = true
            break
        end
    end
    return hasNull
end

--- 存在最高级的 可点击使用物品
HostingLogic.CanClickUse = function()
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local targetRow, targetCol = -1, -1
    local ItemConfig = AppServices.TwoMergeManager:GetItemConfig()
    local type, state, tempItemId
    for _, v in pairs(list) do
        if v.itemArticle then
            tempItemId = v.itemArticle:GetItemId()
            type = v.itemArticle:GetItemArticleType()
            state = v.itemArticle:GetCurrentStateType()
            if type == TwoMergeConfig.ArticleType.Use and state == TwoMergeConfig.ArticleState.Unlock and string.isEmpty(ItemConfig[tempItemId].nextId) then
                targetRow, targetCol = TwoMergeConfig.Decode(v.position)
                break
            end
        end
    end
    if targetRow ~= -1 then
        return true, targetRow, targetCol
    else
        return false
    end
end

--- 可以点击普通箱子
HostingLogic.CanClickNormalChest = function()
    if not HostingLogic.HasNullGrid() then return end

    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local targetRow, targetCol = -1, -1
    local BoxConfig = AppServices.Meta:Category("MergeTwoboxTemplate")
    local type, state, tempItemId
    local now = TimeUtil.ServerTime()
    for _, v in pairs(list) do
        if v.itemArticle then
            tempItemId = v.itemArticle:GetItemId()
            type = v.itemArticle:GetItemArticleType()
            state = v.itemArticle:GetCurrentStateType()
            if type == TwoMergeConfig.ArticleType.NormalChest and state == TwoMergeConfig.ArticleState.Unlock then
                if BoxConfig[tempItemId].time == -1 then -- 不需要开启时间 then -- 还未开启 并且没有其他正在开启的箱子
                    targetRow, targetCol = TwoMergeConfig.Decode(v.position)
                    break
                else
                    if v.itemArticle:GetSpecData(TwoMergeConfig.ItemDataKey["end"]) == 0 then
                        if not NormalChestLogic.IsOpengingOther(v.itemArticle:GetPositionId()) then
                            targetRow, targetCol = TwoMergeConfig.Decode(v.position)
                            break
                        end
                    else
                        if now >= v.itemArticle:GetSpecData(TwoMergeConfig.ItemDataKey["end"]) then
                            targetRow, targetCol = TwoMergeConfig.Decode(v.position)
                            break
                        end
                    end
                end
            end
        end
    end
    if targetRow ~= -1 then
        return true, targetRow, targetCol
    else
        return false
    end
end

return HostingLogic