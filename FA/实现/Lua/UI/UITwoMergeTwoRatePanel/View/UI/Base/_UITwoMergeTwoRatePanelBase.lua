---@class _UITwoMergeTwoRatePanelBase:BasePanel
local _UITwoMergeTwoRatePanelBase = class(BasePanel)

function _UITwoMergeTwoRatePanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
    self.onClick_btn_close = nil
end

function _UITwoMergeTwoRatePanelBase:setProxy(proxy)
	self.proxy = proxy
end

function _UITwoMergeTwoRatePanelBase:bindView()

	if self.gameObject ~= nil then

        self.text_title = find_component(self.gameObject, "text_title", Text)
        self.text_desc = find_component(self.gameObject, "text_desc", Text)

        self.btn_close = find_component(self.gameObject, "btn_close", Button)
        Util.UGUI_AddButtonListener(self.btn_close, function() self:OnClickClose() end)
	end

end

return _UITwoMergeTwoRatePanelBase
