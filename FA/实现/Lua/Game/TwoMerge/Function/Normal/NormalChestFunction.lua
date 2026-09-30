---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")
---@class NormalChestFunction : IFunction 宝箱生成器
local NormalChestFunction = class(IFunction, "NormalChestFunction")

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type DataPack
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
---@type GenerateLogic
local GenerateLogic = require("Game.TwoMerge.Logic.GenerateLogic")
---@type NormalChestLogic
local NormalChestLogic = require("Game.TwoMerge.Logic.NormalChestLogic")

function NormalChestFunction:ctor() end

function NormalChestFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function NormalChestFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function NormalChestFunction:Click()

    local itemId = self.article:GetItemId()
    local config = AppServices.Meta:Category("MergeTwoboxTemplate")[itemId]
    local row, col = self.article:GetRowCol()

    local now = TimeUtil.ServerTime()

    --- 需要开宝箱
    if config.time > 0 then

        --- 开启宝箱
        local endTimeStamp = self.article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
        if endTimeStamp == 0 then

            --- 有其他正在开启的宝箱
            local isOpening, isBagOpening = NormalChestLogic.IsOpengingOther(self.article:GetPositionId())
            if isOpening then
                if isBagOpening then
                    local content = Runtime.Translate("merge_system_20") -- t: 背包里有正在开启的宝箱
                    UITool.ShowContentTipAni(content)
                else
                    local content = Runtime.Translate("merge_system_18") -- t: 有正在开启的宝箱
                    UITool.ShowContentTipAni(content)
                end
                return TwoMergeConfig.FunctionResult.Fail
            end

            --- 触发开启宝箱
            endTimeStamp = now + config.time
            AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey["end"], endTimeStamp)
            self.article:RefreshShow()
            return TwoMergeConfig.FunctionResult.Success
        end

        --- 开启是否完成
        if now < endTimeStamp then
            local content = Runtime.Translate("merge_system_12") -- t: 请先开启宝箱
            UITool.ShowContentTipAni(content)
            return TwoMergeConfig.FunctionResult.Fail
        end
    end

    -- 当前次数
    local curCount = self.article:GetSpecData(TwoMergeConfig.ItemDataKey.count)
    local generateItem = GenerateLogic:BoxGenerateItem(itemId, curCount + 1)

    local newRow, newCol = AppServices.TwoMergeMapGridManager:FindDropGrid(row, col) -- 目标位置
    if newRow ~= nil then
        --- 生成
        local itemData = DataPack.CreateItemData(generateItem, newRow, newCol)
        local newArticle = AppServices.TwoMergeManager:CreateArticle(itemData)
        AppServices.TwoMergeMapGridManager:AddArticle(newRow, newCol, newArticle)
        local time, efftime = newArticle:FlyFromToGrid(row, col, newRow, newCol, TwoMergeConfig.FlyMoveType.CreateMove)
        newArticle:DOAni(TwoMergeConfig.TweenType.GenerateCreate)
        -- AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_shengcheng", 2, TwoMergeConfig.GridIdToPos(newRow, newCol), nil, efftime)


        --- 次数增加
        AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey.count, curCount + 1)

        --- 次数达到 删除
        if curCount + 1 >= config.num then
            AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.GeneratorCountEnd)
        end
        return TwoMergeConfig.FunctionResult.Success
    end

    return TwoMergeConfig.FunctionResult.Success
end

--- 是否正在开启
NormalChestFunction.IsOpening = function(article)
    if article:GetItemArticleType() ~= TwoMergeConfig.ArticleType.NormalChest then return false end

    local config = AppServices.Meta:Category("MergeTwoboxTemplate")[article:GetItemId()]
    --- 不需要开启宝箱
    if config.time <= 0 then return false end

    --- 还未开启宝箱
    local endTimeStamp = article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    if endTimeStamp == 0 then return false end

    local now = TimeUtil.ServerTime()
    --- 正在开启
    return now < endTimeStamp
end

return NormalChestFunction