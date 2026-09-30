---@class _UITwoMergeClonItemPanelBase:BasePanel
local _UITwoMergeClonItemPanelBase = class(BasePanel)

function _UITwoMergeClonItemPanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
    self.onClick_btn_close = nil
end

function _UITwoMergeClonItemPanelBase:setProxy(proxy)
	self.proxy = proxy
end

function _UITwoMergeClonItemPanelBase:bindView()

	if self.gameObject ~= nil then

		self.icon = find_component(self.gameObject, "icon", Image)
		self.text_price = find_component(self.gameObject, "btn_buy/costNum", Text)
		self.icon_price = find_component(self.gameObject, "btn_buy/costIcon", Image)

        self.text_title = find_component(self.gameObject, "text_title", Text)
        self.text_desc = find_component(self.gameObject, "text_desc", Text)

        self.btn_close = find_component(self.gameObject, "btn_close", Button)
        Util.UGUI_AddButtonListener(self.btn_close, function()
			self:OnClickClose()
		end)
        self.btn_buy = find_component(self.gameObject, "btn_buy", Button)
        Util.UGUI_AddButtonListener(self.btn_buy, function()
			self:OnClickBuy()
		end)
	end

end

return _UITwoMergeClonItemPanelBase
