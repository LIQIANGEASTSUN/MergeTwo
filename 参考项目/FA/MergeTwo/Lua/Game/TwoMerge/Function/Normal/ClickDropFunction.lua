---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")
---@class ClickDropFunction : IFunction 点击掉落功能：点击掉落 二合道具
local ClickDropFunction = class(IFunction, "ClickDropFunction")

---@type GenerateLogic
local GenerateLogic = require("Game.TwoMerge.Logic.GenerateLogic")
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type TwoMergeActionQueue
local TwoMergeActionQueue = require("Game.TwoMerge.Logic.TwoMergeActionQueue")
---@type TutorialLogic
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")

function ClickDropFunction:ctor()
end

function ClickDropFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function ClickDropFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function ClickDropFunction:Click()
    local oldRow, oldCol = self.article:GetRowCol()
    local row, col = AppServices.TwoMergeMapGridManager:FindDropGrid(oldRow, oldCol) -- 目标位置
    if row ~= nil then
        local result, failType = GenerateLogic.OnGenerate(self.article, row, col)
        if result == TwoMergeConfig.FunctionResult.Success or result == TwoMergeConfig.FunctionResult.Success then
            TwoMergeActionQueue.Add(TwoMergeConfig.ActionType.ClickGenerateSucc)
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_ClickSucc)
        else
            TwoMergeActionQueue.Add(TwoMergeConfig.ActionType.ClickGenerateFail)
            if failType == TwoMergeConfig.ClickFailType.EnergyNotEnough then
                -- local list = {}
                -- table.insert(list, { id = ItemId.ENERGY })
                -- MessageDispatcher:SendMessage(MessageType.UseItemNotEnough, list)
                PanelManager.showPanel(GlobalPanelEnum.UITwoMergeEnergyBuyPanel, { mapId = AppServices.TwoMergeManager:MapId() })

                --- 引导点击 体力不足 关掉引导
                if TutorialLogic.IsRunning() then
                    TutorialLogic.StopForce()
                end
            end
        end
    else
        TwoMergeActionQueue.Add(TwoMergeConfig.ActionType.ClickGenerateFail)
        UITool.ShowContentTipAni(Runtime.Translate("merge_system_11")) -- 棋盘没有空的格子
    end
    return TwoMergeConfig.FunctionResult.Fail
end

return ClickDropFunction