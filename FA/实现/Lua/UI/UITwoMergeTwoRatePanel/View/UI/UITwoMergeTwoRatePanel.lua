local _UITwoMergeTwoRatePanelBase = require "UI.UITwoMergeTwoRatePanel.View.UI.Base._UITwoMergeTwoRatePanelBase"

---@class UITwoMergeTwoRatePanel:_UITwoMergeTwoRatePanelBase
local UITwoMergeTwoRatePanel = class(_UITwoMergeTwoRatePanelBase)

function UITwoMergeTwoRatePanel:ctor()

end

function UITwoMergeTwoRatePanel:onAfterBindView()

end

function UITwoMergeTwoRatePanel:refreshUI()

end

function UITwoMergeTwoRatePanel:OnClickClose()
    PanelManager.closePanel(GlobalPanelEnum.UITwoMergeTwoRatePanel)
end

function UITwoMergeTwoRatePanel:onBeforeDestroyPanel()
    Runtime.InvokeCbk(self.arguments.callback)
end

return UITwoMergeTwoRatePanel
