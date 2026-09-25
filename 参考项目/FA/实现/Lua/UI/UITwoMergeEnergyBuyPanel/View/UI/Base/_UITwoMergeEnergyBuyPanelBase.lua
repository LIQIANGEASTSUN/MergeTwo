--insertRequire

---@class _UITwoMergeEnergyBuyPanelBase:BasePanel
local _UITwoMergeEnergyBuyPanelBase = class(BasePanel)

function _UITwoMergeEnergyBuyPanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
	--insertCtor
    self.onClick_btn_close = nil
    self.onClick_btn_complete = nil
end

function _UITwoMergeEnergyBuyPanelBase:setProxy(proxy)
	self.proxy = proxy
	--setProxy
end

function _UITwoMergeEnergyBuyPanelBase:bindView()

	if(self.gameObject ~= nil) then

        self.icon = find_component(self.gameObject, "icon", Image) -- icon图片
        self.countlabel = find_component(self.gameObject, "icon/text_count", Text) -- 数量
        self.complete = find_component(self.gameObject, "complete") -- 没有购买次数状态
        self.text_desc = find_component(self.gameObject, "desroot/text_desc", Text)
        self.text_time = find_component(self.gameObject, "desroot/count2", Text)

        self.btn_close = find_component(self.gameObject, "btn_close", Button)
        self.btn_buy = find_component(self.gameObject, "btn_buy", Button)
        self.text_buy = find_component(self.gameObject, "btn_buy/text_count", Text)
        Util.UGUI_AddButtonListener(self.btn_close, function() self:OnClickClose() end)
        Util.UGUI_AddButtonListener(self.btn_buy, function() self:OnClickBuy() end)
	end

end

return _UITwoMergeEnergyBuyPanelBase
