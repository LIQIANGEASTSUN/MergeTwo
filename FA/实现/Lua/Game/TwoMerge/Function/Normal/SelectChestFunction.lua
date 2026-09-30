
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")

local OperationLogic = require "Game.TwoMerge.Logic.OperationLogic"

---@class SelectChestFunction  : IFunction 自选宝箱
local SelectChestFunction = class(IFunction, "SelectChestFunction")

function SelectChestFunction:ctor()
    self.cfg = self.article:GetConfig()
end

function SelectChestFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function SelectChestFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function SelectChestFunction:Click()
    local itemId = self.article:GetItemId()
    local config = AppServices.Meta:Category("MergeTwoboxTemplate")[tostring(itemId)]
    local row, col = self.article:GetRowCol()

    local now = TimeUtil.ServerTime()
    --- 开启宝箱
    local endTimeStamp = self.article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    if endTimeStamp == 0 then
        endTimeStamp = now + config.time
        AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey["end"], endTimeStamp)
        self.article:RefreshShow()
        return TwoMergeConfig.FunctionResult.Success
    end

    --- 开启是否完成
    if now < endTimeStamp then
        -- UITool.ShowContentTipAni("T: 正在开启宝箱")
        return TwoMergeConfig.FunctionResult.Fail
    end

    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_OnOpenSelectChest)
    PanelManager.showPanel(GlobalPanelEnum.UITwoMergeSelectChestPanel,{id = itemId,callback = function(id)
        AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.GeneratorCountEnd)
        local itemData = DataPack.CreateItemData(tostring(id), row, col)
        local newArticle = AppServices.TwoMergeManager:CreateArticle(itemData)
        AppServices.TwoMergeMapGridManager:AddArticle(row, col, newArticle)
        OperationLogic:ClearSelect()
    end})

end

return SelectChestFunction