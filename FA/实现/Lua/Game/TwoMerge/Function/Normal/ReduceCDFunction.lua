---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")
---@class ReduceCDFunction : IFunction 减少CD 功能
local ReduceCDFunction = class(IFunction, "ReduceCDFunction")

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type DropProcessLogic
local DropProcessLogic = require("Game.TwoMerge.Logic.DropProcessLogic")
---@type GenerateLogic
local GenerateLogic = require("Game.TwoMerge.Logic.GenerateLogic")
---@type NormalChestFunction
local NormalChestFunction = require("Game.TwoMerge.Function.Normal.NormalChestFunction")
function ReduceCDFunction:ctor() end

function ReduceCDFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
end

function ReduceCDFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
end

function ReduceCDFunction:DropProcess(eventData)
    self.dropOtherArticle = DropProcessLogic:GetDropArticle(self.article, eventData)
    if not self.dropOtherArticle then
        return TwoMergeConfig.FunctionResult.Fail
    end

    --- 该道具  拥有的时间
    local totalUseTime = self.article:GetSpecData(TwoMergeConfig.ItemDataKey["end"]) -- 已经使用的时间
    local cdTime = self.article:GetConfig().type_par[1] - totalUseTime

    local isReduce = false

    if self.dropOtherArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.Generator or
        self.dropOtherArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.AutoGenerator then
        isReduce = GenerateLogic.IsShowEndTimeStamp(self.dropOtherArticle) --- 正在展示倒计时
    elseif self.dropOtherArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.NormalChest then
        isReduce = NormalChestFunction.IsOpening(self.dropOtherArticle) --- 正在计时打开
    elseif self.dropOtherArticle:GetItemArticleType() == TwoMergeConfig.ArticleType.SelectChest then
    else
    end

    if isReduce then
        local isDelete, useTime = ReduceCDFunction.TriggerReduceTime(self.dropOtherArticle, cdTime, TwoMergeConfig.ItemDataKey["end"])
        if isDelete then
            local row, col = self.article:GetRowCol()
            AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.UseItem)
        else
            local newUseTime = totalUseTime + useTime
            local row, col = self.article:GetRowCol()
            AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey["end"], newUseTime)
            self.article:RefreshShow()
            self.article:FlyToGrid(row, col, TwoMergeConfig.FlyMoveType.ReplaceMove)
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Info_Refresh)
        end
        return TwoMergeConfig.FunctionResult.SuccessAndAbort
    end
    return TwoMergeConfig.FunctionResult.Fail
end

--- article,  总共可以减少的时间,  Spec数据Key
ReduceCDFunction.TriggerReduceTime = function(article, cdTime, specKey)
    local now = TimeUtil.ServerTime()
    --- 另一个道具  倒计时剩余时间
    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey[specKey])
    local remainCDTime = endTimeStamp - now

    if cdTime > remainCDTime then
        local other_row, other_col = article:GetRowCol()
        AppServices.TwoMergeMapGridManager:SetItemSpecData(other_row, other_col, specKey, now)
        article:RefreshShow()

        return false, remainCDTime
    elseif cdTime == remainCDTime then
        local other_row, other_col = article:GetRowCol()
        AppServices.TwoMergeMapGridManager:SetItemSpecData(other_row, other_col, specKey, now)
        article:RefreshShow()

        return true
    else
        --- 道具拥有的时间 不够减清另一个道具的倒计时
        local resultTime = endTimeStamp - cdTime
        local other_row, other_col = article:GetRowCol()
        AppServices.TwoMergeMapGridManager:SetItemSpecData(other_row, other_col, specKey, resultTime)
        article:RefreshShow()

        return true
    end
end

return ReduceCDFunction