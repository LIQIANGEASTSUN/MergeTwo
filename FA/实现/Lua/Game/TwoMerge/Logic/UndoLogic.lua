--- 撤消
local UndoLogic = {}

local stack = {}

--- 撤消内容入栈
UndoLogic.Push = function(row, col, data)
    table.insert(stack, 1, {
        row = row,
        col = col,
        data = data,
    })
end

--- 撤消操作
UndoLogic.Pop = function()
    if #stack > 0 then
        local info = stack[1]
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(info.row, info.col)
        if article == nil then
            local newArticle = AppServices.TwoMergeManager:CreateArticle(info.data)
            AppServices.TwoMergeMapGridManager:AddArticle(info.row, info.col, newArticle)
            UndoLogic.Clear()
        end
    end
end

--- 可以撤消
UndoLogic.HasNext = function()
    return #stack > 0
end

UndoLogic.CanPop = function()
    if #stack > 0 then
        local info = stack[1]
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(info.row, info.col)
        if article == nil then
            return true
        end
    end
    return false
end

UndoLogic.NextRowCol = function()
    if #stack > 0 then
        local info = stack[1]
        return info.row, info.col
    end
    return nil, nil
end

--- 清空栈
UndoLogic.Clear = function()
    stack = {}
end

return UndoLogic