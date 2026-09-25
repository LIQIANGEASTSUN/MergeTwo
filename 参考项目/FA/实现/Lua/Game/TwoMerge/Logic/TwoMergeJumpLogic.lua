local TwoMergeJumpLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

--- 根据sourceId  寻找来源  棋盘上已解锁的最大等级
TwoMergeJumpLogic.GetJumpItemId = function(jumpType, sourceId)

    local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[sourceId]
    if not table.isEmpty(cfg.getWays) then

        if jumpType == GetWayType.TwoMergeLink then
            local links = cfg.getWayParam
            local itemId, row, col = nil, nil, nil
            for _, linkId in pairs(links) do
                itemId, row, col = TwoMergeJumpLogic.FindMaxLinkId(tostring(linkId))
                if itemId ~= nil then break end
            end
            return itemId, row, col
        elseif jumpType == GetWayType.TwoMergeId then
            local ids = cfg.getWayParam
            local itemId, row, col = TwoMergeJumpLogic.FindIds(ids)
            return itemId, row, col
        end
    end
    return nil, nil, nil
end

TwoMergeJumpLogic.FindIds = function(ids)
    local idDic = {}
    for _, id in pairs(ids) do idDic[tostring(id)] = true end

    local itemId, row, col = nil, nil, nil
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:IsUnlockArea() and v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock then
            local id = v.itemArticle:GetItemId()
            if idDic[id] then
                itemId = id
                row, col = v.itemArticle:GetRowCol()
                break
            end
        end
    end
    return itemId, row, col
end

TwoMergeJumpLogic.FindMaxLinkId = function(linkId)
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    local currentLevel = -1
    local itemId = nil
    local row, col = nil, nil
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock then
            local config = v.itemArticle:GetConfig()
            if config.groupId == linkId and config.level > currentLevel then
                currentLevel = config.level
                itemId = config.id
                row, col = v.itemArticle:GetRowCol()
            end
        end
    end
    return itemId, row, col
end

return TwoMergeJumpLogic