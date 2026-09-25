---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type DropProcessLogic
local DropProcessLogic = require("Game.TwoMerge.Config.DropProcessLogic")

---@type MergeSpawnLogic
local MergeSpawnLogic = require("Game.TwoMerge.Logic.MergeSpawnLogic")

---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")

---@class OmnipotentMergeFunction : IFunction 万能合成道具
local OmnipotentMergeFunction = class(IFunction, "OmnipotentMergeFunction")

function OmnipotentMergeFunction:ctor()
end

function OmnipotentMergeFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
end

function OmnipotentMergeFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
end

function OmnipotentMergeFunction:DropProcess(eventData)
    local result, otherArticle = self:EnableMerge(eventData)
    if result == TwoMergeConfig.FunctionResult.Fail then
        return TwoMergeConfig.FunctionResult.Fail
    end

    self:StopTween(self.article)
    self:StopTween(otherArticle)

    local spawnConfig = otherArticle:GetConfig()
    MergeSpawnLogic:MergeSuccess(self.article, otherArticle, spawnConfig)
    return TwoMergeConfig.FunctionResult.SuccessAndAbort
end

function OmnipotentMergeFunction:EnableMerge(eventData)
    local articleState = self.article:GetCurrentStateType()
    if articleState ~= TwoMergeConfig.ArticleState.Unlock then
        return TwoMergeConfig.FunctionResult.Fail
    end

    if not MergeSpawnLogic:EnableMerge(self.article) then
        return TwoMergeConfig.FunctionResult.Fail
    end

    local otherArticle = DropProcessLogic:GetDropArticle(self.article, eventData)
    if not MergeSpawnLogic:EnableMerge(otherArticle) then
        return TwoMergeConfig.FunctionResult.Fail
    end

    local omnipotentMerge = otherArticle:GetFunction(TwoMergeConfig.FunctionType.OmnipotentMerge)
    if omnipotentMerge then  -- 自己是万能合成，不能跟万能合成的道具合成
        return TwoMergeConfig.FunctionResult.Fail
    end

    return TwoMergeConfig.FunctionResult.Success, otherArticle
end

return OmnipotentMergeFunction