

---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")
---@class ShearsFunction : IFunction 剪刀 万能合成
local ShearsFunction = class(IFunction, "ShearsFunction")

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type DropProcessLogic
local DropProcessLogic = require "Game.TwoMerge.Logic.DropProcessLogic"
---@type MergeSpawnLogic
local MergeSpawnLogic = require("Game.TwoMerge.Logic.MergeSpawnLogic")

function ShearsFunction:ctor() end

function ShearsFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Draging, self.Draging, self)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.DragEnd, self.DragEnd, self)
end

function ShearsFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.DropProcess, self.DropProcess, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Draging, self.Draging, self)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.DragEnd, self.DragEnd, self)
end

--- 可合成特效
function ShearsFunction:Draging(eventData)
    local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
    local row, col = TwoMergeConfig.PosToGridId(anchoredPosition)
    local positionId = TwoMergeConfig.Encode(row, col)
    local isInBag, bagRect = AppServices.TwoMergeManager:IsInBagButton(eventData)

    --- 可放入背包特效
    if self.lastInBag ~= isInBag then
        self.lastInBag = isInBag

        if self.lastInBag then
            local succ, position = AppServices.TwoMergeManager:GetOneBagGrid(AppServices.TwoMergeMapGridManager:GetMapId())
            if succ then
                self.mergeEff = AppServices.TwoMergeManager:PlayEffect("effect_erhe_dijia", nil, Vector2.zero, bagRect)
                self.mergeEff.transform:SetAsFirstSibling()
            else
                self:ClearEff()
            end
        else
            self:ClearEff()
        end
    end

    if not self.lastInBag then
        if self.positionId ~= positionId then
            self.positionId = positionId

            local result, otherArticle = self:EnableMerge(eventData)
            local canMerge = result == TwoMergeConfig.FunctionResult.Success

            if canMerge then
                self:ClearEff()
                local position = TwoMergeConfig.GridIdToPos(row, col)
                local root = AppServices.TwoMergeManager:GetGridParent()
                self.mergeEff = AppServices.TwoMergeManager:PlayEffect("effect_erhe_dijia", nil, position, root)
            else
                self:ClearEff()
            end
        end
    end
    return TwoMergeConfig.FunctionResult.Success
end
function ShearsFunction:DragEnd(eventData)
    self:ClearEff()
    return TwoMergeConfig.FunctionResult.Success
end

function ShearsFunction:DropProcess(eventData)
    local result, otherArticle = self:EnableMerge(eventData)
    if result == TwoMergeConfig.FunctionResult.Fail then
        return TwoMergeConfig.FunctionResult.Fail
    end

    local spawnConfig = otherArticle:GetConfig()
    if otherArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Lock then
        local content = Runtime.Translate("merge_system_07") -- t: 太棒了
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Good, TwoMergeConfig.TipType.Great, content)
    end

    self:StopTween(self.article)
    self:StopTween(otherArticle)

    MergeSpawnLogic:MergeSuccess(self.article, otherArticle, spawnConfig)
    return TwoMergeConfig.FunctionResult.SuccessAndAbort
end

function ShearsFunction:EnableMerge(eventData)
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

    return TwoMergeConfig.FunctionResult.Success, otherArticle
end

function ShearsFunction:ClearEff()
    if not Runtime.CSNull(self.mergeEff) then
        GameObject.Destroy(self.mergeEff)
        self.mergeEff = nil
    end
end

function ShearsFunction:StopTween(article)
    local articleAnimation = article:GetArticleAnimation()
    articleAnimation:ClearTween()
end

return ShearsFunction