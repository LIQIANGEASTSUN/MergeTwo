--- 棋盘内引导
local TutorialLogic = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

local TutorialItemGenerator = require "Game.TwoMerge.Logic.TutorialItemGenerator"
local TutorialItemOrder = require "Game.TwoMerge.Logic.TutorialItemOrder"

local isInit = false
local _mapId = nil

TutorialLogic.TutorialType = {
    Order = 1, -- 订单流程引导
    Generator = 2, -- 生成器可合成引导
}
local _tutorialType = nil
local _isSendMessage = false
--- 
TutorialLogic.StartUp = function(mapId, tutorialType, isSendMessage)
    _mapId = mapId; _tutorialType = tutorialType; _isSendMessage = isSendMessage
    if not isInit then
        isInit = true
        MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_MergeSucc, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_ClickSucc, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_OnMove, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_OnOpenSelectChest, TutorialLogic.CheckNext, TutorialLogic)
    end
    return TutorialLogic.CheckNext()
end

TutorialLogic.Stop = function()
    if isInit then
        isInit = false
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_MergeSucc, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ClickSucc, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_OnMove, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_OnOpenSelectChest, TutorialLogic.CheckNext, TutorialLogic)
        if _isSendMessage then
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_TutorialStep)
        end
    end
end

TutorialLogic.StopForce = function()
    if isInit then
        isInit = false
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_MergeSucc, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ClickSucc, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_OnMove, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_OnOpenSelectChest, TutorialLogic.CheckNext, TutorialLogic)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tutorial, TwoMergeConfig.TutorialType.End)
    end
end

TutorialLogic.IsRunning = function()
    return isInit
end

TutorialLogic.CheckNext = function()
    local result = false
    if _tutorialType == TutorialLogic.TutorialType.Order then
        result = TutorialItemOrder.CheckNext(_mapId)
    elseif _tutorialType == TutorialLogic.TutorialType.Generator then
        result = TutorialItemGenerator.CheckNext(_mapId)
    end
    if not result then TutorialLogic.Stop() end
    return result
end

return TutorialLogic