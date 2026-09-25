--- 整理
local TidyLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

TidyLogic.DO_Common = function()
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local articles = {}
    local grids = {}
    local row, col = 0, 0
    for _, v in pairs(list) do
        if v.state == TwoMergeConfig.GridState.UnLock then
            if v.itemArticle == nil or
                (v.itemArticle:GetCurrentStateType() ~= TwoMergeConfig.ArticleState.DeepLock and v.itemArticle:GetCurrentStateType() ~= TwoMergeConfig.ArticleState.Lock) then
                row, col = TwoMergeConfig.Decode(v.position)
                table.insert(grids, { row = row, col = col, })
            end
        end
        if v.itemArticle then
            local type = v.itemArticle:GetCurrentStateType()
            if type ~= TwoMergeConfig.ArticleState.DeepLock and type ~= TwoMergeConfig.ArticleState.Lock then
                table.insert(articles, v.itemArticle)
                AppServices.TwoMergeMapGridManager.ModifyMap[v.position] = true
                v.itemArticle = nil
            end
        end
    end

    table.sort(grids, function(a, b)
        if a.row ~= b.row then return a.row < b.row
        else return a.col < b.col end
    end)

    table.sort(articles, function(a, b)
        return a:GetItemId() < b:GetItemId()
    end)

    for index, article in pairs(articles) do
        row, col = grids[index].row, grids[index].col
        article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
        AppServices.TwoMergeMapGridManager:SetArticle(row, col, article)
    end

    -- GameUtil.BlockAll(totalTime, "twomerge_automerge")
end

return TidyLogic