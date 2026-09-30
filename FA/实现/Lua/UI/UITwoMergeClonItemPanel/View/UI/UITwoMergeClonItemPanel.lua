local _UITwoMergeClonItemPanelBase = require "UI.UITwoMergeClonItemPanel.View.UI.Base._UITwoMergeClonItemPanelBase"
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"
---@class UITwoMergeClonItemPanel:_UITwoMergeClonItemPanelBase
local UITwoMergeClonItemPanel = class(_UITwoMergeClonItemPanelBase)

function UITwoMergeClonItemPanel:ctor() end

function UITwoMergeClonItemPanel:onAfterBindView()
    self:Init()
end

function UITwoMergeClonItemPanel:refreshUI() end

function UITwoMergeClonItemPanel:Init()
    local config = AppServices.TwoMergeManager:GetItemConfig()[self.arguments.itemId]
    self.icon.sprite = AppServices.ItemIcons:GetSpriteByName(config.icon)

    UITool:GetItemUISprite(self.icon_price, self.arguments.costId)
    self.text_price.text = tostring(self.arguments.costCount)

    local params = { num1 = tostring(self.arguments.costCount) }
    local content = Runtime.Translate("merge_system_15", params)
    self.text_desc.text = content
    self.text_title.text = Runtime.Translate("UI_maintenance_button")
end

function UITwoMergeClonItemPanel:OnClickBuy()
    local curcount = AppServices.User:GetItemAmount(self.arguments.costId)
    if curcount >= self.arguments.costCount then
        Runtime.InvokeCbk(self.arguments.callback, true)
        self:OnClickClose()
    else
        --UITool.ShowContentTipAni("t: 货币不足")
        --UITool.ShowContentTipAni(Runtime.Translate("UI_team_flowtips1"))
        MergeUtil.CurrencyNotEnough(tostring(self.arguments.costId))
    end
end

function UITwoMergeClonItemPanel:OnClickClose()
    Runtime.InvokeCbk(self.arguments.callback, false)
    PanelManager.closePanel(GlobalPanelEnum.UITwoMergeClonItemPanel)
end

return UITwoMergeClonItemPanel
