--- 托管 目前未缓存任何数据  寻找方式为反复遍历
local SequenceAnimationLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
---@type PromptMergeLogic
local PromptMergeLogic = require "Game.TwoMerge.Logic.PromptMergeLogic"

local timer = nil
local isRunning = false

SequenceAnimationLogic.IsRunning = function() return isRunning end

SequenceAnimationLogic.StartUp = function()
    if timer == nil then
        timer = WaitExtension.InvokeRepeating(SequenceAnimationLogic.Run, 0, 10)
    end
    isRunning = true
end

SequenceAnimationLogic.Stop = function()
    if timer ~= nil then
        WaitExtension.CancelTimeout(timer)
        timer = nil
    end
    isRunning = false
end

SequenceAnimationLogic.Run = function()
    PromptMergeLogic:StopAni()
    local r = math.random(1, 100)
    if r <= 50 then
        SequenceAnimationLogic.DO_Common()
    else
        SequenceAnimationLogic.DO_Tornado()
    end
end

SequenceAnimationLogic.DO_Common = function()
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()

    local anilist = {}
    local type = nil
    local row, col = 0, 0
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() then
            type = v.itemArticle:GetCurrentStateType()
            if type == TwoMergeConfig.ArticleState.Unlock then
                row, col = TwoMergeConfig.Decode(v.position)
                table.insert(anilist, { row = row, col = col })
            end
        end
    end

    table.sort(anilist, function(a, b)
        if a.row ~= b.row then
            return a.row < b.row
        else
            return a.col < b.col
        end
    end)

    local i, delay = 0, 0
    for _, v in pairs(anilist) do
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(v.row, v.col)
        if article then
            i = i + 1
            delay = (v.row + v.col) * 0.1
            article:DOAni(TwoMergeConfig.TweenType.ClickAni, delay)
        end
    end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Good, TwoMergeConfig.TipType.Lianyi, "青翠漾涟漪")
end

SequenceAnimationLogic.DO_Tornado = function()
    local maxx, maxy = AppServices.TwoMergeManager:GetMaxRowCol(AppServices.TwoMergeMapGridManager:GetMapId())
    local centerx, centery = math.random(2, maxx - 1), math.random(2, maxy - 1)
    SequenceAnimationLogic.DO_Ripple(centerx, centery)
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Good, TwoMergeConfig.TipType.Bowen, "萍浮春水波")
end

SequenceAnimationLogic.DO_Ripple = function(x, y)
    local delay = 0
    local maxx, maxy = AppServices.TwoMergeManager:GetMaxRowCol(AppServices.TwoMergeMapGridManager:GetMapId())
    for i = 1, maxx, 1 do
        for j = 1, maxy, 1 do
            local article = AppServices.TwoMergeMapGridManager:FindItemArticle(i, j)
            if article then
                delay = (math.abs(x - i) + math.abs(y - j)) * 0.15
                article:DOAni(TwoMergeConfig.TweenType.ClickAni, delay)
            end
        end
    end
end

return SequenceAnimationLogic