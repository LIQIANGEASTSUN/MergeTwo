--- 行为队列
local TwoMergeActionQueue = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

local _queue = {}
local _maxCount = 20
local _clickGenerateContinue = 0

TwoMergeActionQueue.Add = function(ActionType)
    table.insert(_queue, 1, ActionType)
    TwoMergeActionQueue.CheckTrigger(ActionType)
    TwoMergeActionQueue.CheckRemove()
end

TwoMergeActionQueue.CheckRemove = function()
    if #_queue > _maxCount then
        table.remove(_queue, #_queue)
    end
end

TwoMergeActionQueue.CheckTrigger = function(ActionType)
    TwoMergeActionQueue.CheckClickGenerateContinue(ActionType)
end

TwoMergeActionQueue.CheckClickGenerateContinue = function(ActionType)
    if ActionType == TwoMergeConfig.ActionType.ClickGenerateSucc then
        _clickGenerateContinue = _clickGenerateContinue + 1
        if _clickGenerateContinue >= 5 then
            _clickGenerateContinue = 0
            local content = Runtime.Translate("merge_system_06") -- t: 干得好!
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Good, TwoMergeConfig.TipType.Great, content)
        end
    else
        _clickGenerateContinue = 0
    end
end

return TwoMergeActionQueue