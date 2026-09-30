---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"
local GenerateLogic = require "Game.TwoMerge.Logic.GenerateLogic"
---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")

---@class AutoGeneratorFunction  : IFunction 被动生成器
local AutoGeneratorFunction = class(IFunction, "AutoGeneratorFunction")

function AutoGeneratorFunction:ctor() end

function AutoGeneratorFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Tick, self.Tick, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.GridChange, self.GridChange, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.OnInitComplete, self.OnInitComplete, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.OnGenerateComplete, self.OnGenerateComplete, self)
end

function AutoGeneratorFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Tick, self.Tick, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.GridChange, self.GridChange, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.OnInitComplete, self.OnInitComplete, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.OnGenerateComplete, self.OnGenerateComplete, self)
end

function AutoGeneratorFunction:OnInitComplete() self:AutoClick() end
function AutoGeneratorFunction:OnGenerateComplete() self:AutoClick() end
function AutoGeneratorFunction:GridChange(oldrow, oldcol, newrow, newcol) self:AutoClick() end
function AutoGeneratorFunction:Tick()
    local lefttime = GenerateLogic.GetCDLefttime(self.article) -- cd剩余时间

    if self.lastLefttime ~= nil and self.lastLefttime > 0 and lefttime <= 0 then
        self:AutoClick()
    end
    self.lastLefttime = lefttime
end

function AutoGeneratorFunction:Click()
    local row, col = AppServices.TwoMergeMapGridManager:SearchNextGrid(self.article:GetRowCol())
    if row == nil then
        -- UITool.ShowContentTipAni("t: No empty squares on the field!")
        return
    end
    local state = GenerateLogic.OnGenerate(self.article, row, col)
    if state == TwoMergeConfig.FunctionResult.Fail then
        return TwoMergeConfig.FunctionResult.Fail
    end
    return state
end

function AutoGeneratorFunction:AutoClick()
    local lefttime = GenerateLogic.GetCDLefttime(self.article) -- cd剩余时间
    -- local remainTime = GenerateLogic.GetRoundRemainTime(self.article) -- 本轮剩余次数

    local curCount = self.article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
    if lefttime > 0 and curCount == 0 then -- 不能生成
    else
        local row, col = MergeUtil.FindOneRoundGrid(self.article:GetRowCol())
        if row ~= nil then
            local state = GenerateLogic.OnGenerate(self.article, row, col)
            if state == TwoMergeConfig.FunctionResult.Fail then
                return
            end

            local delayTime = 0.1
            WaitExtension.SetTimeout(function()
                self:AutoClick()
            end, delayTime)
        else
            -- UITool.ShowContentTipAni("t: No empty squares on the field!")
        end
    end
end

return AutoGeneratorFunction