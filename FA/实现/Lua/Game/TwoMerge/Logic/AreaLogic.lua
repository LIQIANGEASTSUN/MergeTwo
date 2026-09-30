local AreaLogic = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

local _root = nil
local _item = nil
local _arealist = {}
local _rowcolArea = {}
local _finishTask = {}

-- areaList:
-- key = areaTask
-- value =
-- {
--    list = {
--       [1] = { row = ?, col = ? },
--       [2] = ..
--    },
--    icon = "",
--    areaType = 0,
-- }
AreaLogic.Init = function(areaList)
    -- 放到与article同一层级
    _root = AppServices.TwoMergeManager:GetArticleParent() -- AppServices.TwoMergeManager:GetAreaParent()
    _item = AppServices.TwoMergeManager:GetAreaCloneItem()
    _arealist = areaList
    local totalX, totalY, avgX, avgY = 0, 0, 0, 0
    local tempPosition = nil
    for areaTask, areaInfo in pairs(_arealist) do
        totalX, totalY = 0, 0
        for _, v in pairs(areaInfo.list) do
            _rowcolArea[TwoMergeConfig.Encode(v.row, v.col)] = areaTask
            tempPosition = TwoMergeConfig.GridIdToPos(v.row, v.col)
            totalX = totalX + tempPosition.x
            totalY = totalY + tempPosition.y
        end
        avgX = totalX / #areaInfo.list
        avgY = totalY / #areaInfo.list

        local isFinish = AppServices.Task:IsTaskFinish(areaTask)
        local waitUnlock = AreaLogic.IsWaitUnlock(areaTask) -- 等待点击解锁

        _finishTask[areaTask] = isFinish

        areaInfo.isunlock = isFinish and not waitUnlock

        if ((not isFinish) or waitUnlock) then
            areaInfo.gameObject = AreaLogic.CreateView(Vector2(avgX, avgY), areaInfo.areaType, waitUnlock)
            local btn = find_component(areaInfo.gameObject, "btn_unlock")
            btn:SetActive(isFinish and waitUnlock)
            Util.UGUI_AddButtonListener(btn, function() AreaLogic.OnUnlock(areaTask) end)
        end
    end
end

AreaLogic.CreateView = function(anchoredPosition, areaType, waitUnlock)
    local gameObject = LuaGameUtil.CloneItem(_item, _root)

    local spine = find_component(gameObject, "spine")
    GameUtil.PlaySpineAnimation(spine, "idle"..areaType, true)
    local rect = find_component(gameObject, "", RectTransform)
    rect.anchoredPosition = anchoredPosition
    -- local path = string.format("Prefab/RuntimeIcons/TwoMerge/%s.png", icon)
    --     AppServices.ItemIcons:LoadSpriteAsync(path, function(spr)
    --         if Runtime.CSValid(gameObject) then
    --             local sp = find_component(gameObject, "areaicon", Image)
    --             sp.sprite = spr
    --             sp:SetNativeSize()
    --             local rect = find_component(gameObject, "", RectTransform)
    --             rect.localScale = TwoMergeConfig.GetScale()
    --             -- rect.pivot = Vector2(0, 1)
    --             rect.anchoredPosition = anchoredPosition -- Vector2(-TwoMergeConfig.GridWeightOrigin * 0.5, TwoMergeConfig.GridHeightOrigin * 0.5)
    --         end
    --     end)
    return gameObject
end

--- 点击解锁
AreaLogic.OnUnlock = function(taskId)
    local areaInfo = _arealist[taskId]
    if areaInfo ~= nil then
        TwoMergeConfig.SetLocalArchive(TwoMergeConfig.LocalArchive.WaitUnlockArea..tostring(taskId), false)
        areaInfo.isunlock = true

        if not Runtime.CSNull(areaInfo.gameObject) then
            local time = 1
            local btn = find_component(areaInfo.gameObject, "btn_unlock")
            btn:SetActive(false)
            local spine = find_component(areaInfo.gameObject, "spine")
            GameUtil.PlaySpineAnimation(spine, "idle"..areaInfo.areaType.."_disappear", false, function()
                if not Runtime.CSNull(areaInfo.gameObject) then
                    areaInfo.gameObject:SetActive(false)
                    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_TutorialStep)
                end
            end)
            areaInfo.gameObject.transform:DOScale(areaInfo.gameObject.transform.localScale.x, time) -- 用作计时器

            for _, v in pairs(areaInfo.list) do
                local article = AppServices.TwoMergeMapGridManager:FindItemArticle(v.row, v.col)
                if article ~= nil then
                    article:DoUnlock(time)
                end
                local grid = AppServices.TwoMergeMapGridManager:GetSingleGrid(v.row, v.col)
                grid:DoUnlock(time)
            end
        end
    end
end

--- 完成任务
AreaLogic.OnFinishTask = function(taskId)
    _finishTask[taskId] = true
    if _arealist[taskId] ~= nil and not Runtime.CSNull(_arealist[taskId].gameObject) then
        _arealist[taskId].gameObject.transform:DOScale(0, 0.5):OnComplete(function()
            _arealist[taskId].gameObject:SetActive(false)
        end)
    else
        TwoMergeConfig.SetLocalArchive(TwoMergeConfig.LocalArchive.WaitUnlockArea..tostring(taskId), true)
    end
end

--- 本地是否有等待解锁状态
AreaLogic.IsWaitUnlock = function(taskId)
    local value = TwoMergeConfig.GetLocalArchive(TwoMergeConfig.LocalArchive.WaitUnlockArea..tostring(taskId), false)
    return value
end

--- 区域是否已解锁
AreaLogic.IsUnlockByPositionId = function(positionId)
    local areaTask = _rowcolArea[positionId]
    if areaTask ~= nil then
        -- return _finishTask[areaTask]
        return _arealist[areaTask].isunlock, areaTask
    end
    return true, areaTask
end

return AreaLogic