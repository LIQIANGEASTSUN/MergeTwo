--insertRequire

---@class _UITwoMergeShopPanelBase:BasePanel
local _UITwoMergeShopPanelBase = class(BasePanel)

function _UITwoMergeShopPanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
	--insertCtor
end

function _UITwoMergeShopPanelBase:setProxy(proxy)
	self.proxy = proxy
	--setProxy
end

function _UITwoMergeShopPanelBase:bindView()

	if(self.gameObject ~= nil) then
	--insertInit
		self.root = find_component(self.gameObject, "root", Transform)
		self.closeBtn = find_component(self.root, "close")
		--货币ui
		self.currencyItem = find_component(self.root, "currencyItem")
		self.currencyRoot = find_component(self.root, "currencyRoot",Transform)
		--lfshop
		self.leftTitleTxt = find_component(self.root, "leftShop/Text_leftTitle", Text) 
		self.leftShopRoot = find_component(self.root, "leftShop/leftShopRoot",Transform)
		self.ltCountDownText = find_component(self.root, "leftShop/ltCountDown/Text_countDownTitle",Text)  
		self.ltCountDownTxt = find_component(self.root, "leftShop/ltCountDown/Text_ltCountDown", Text)
		--rtshop
		self.rightTitleTxt = find_component(self.root, "rightShop/Text_rightTitle", Text) 
		self.rightShopRoot = find_component(self.root, "rightShop/Scroll View/Viewport/Content",Transform)
		self.rtCountDownText = find_component(self.root, "rightShop/rtCountDown/Text_countDownTitle",Text)
		self.rtCountDownTxt = find_component(self.root, "rightShop/rtCountDown/Text_rtCountDown", Text)
		self.btnRtRefreshAds = find_component(self.root, "rightShop/rtCountDown/btnRtRefreshAds")
		self.btnRtRefreshCost = find_component(self.root, "rightShop/rtCountDown/btnRtRefreshCost")
		self.btnRtRefreshCostTxt = find_component(self.root, "rightShop/rtCountDown/btnRtRefreshCost/Text_refreshCost", Text)
		self.refreshCostIcon = find_component(self.root, "rightShop/rtCountDown/btnRtRefreshCost/Image_refreshCost", Image)
		--shopItem
		self.twoMergeShopItem = find_component(self.gameObject, "twoMergeShopItem")
		self.twoMergeShopFlyItem = find_component(self.gameObject, "twoMergeShopIFlyItem")
		self.queueObj = find_component(self.root, "leftroot/queueObj")
		self.uiObj = find_component(self.queueObj, "uiObj")
		self.flyIcon = find_component(self.uiObj, "icon", Image)
		--insertBind
		Util.UGUI_AddButtonListener(self.closeBtn, function()
			PanelManager.closePanel(GlobalPanelEnum.UITwoMergeShopPanel)
		end)
		--insertBindBtn
		--insertBindCmp
	--insertInitComp
	--insertOnClick
	--insertDeclareBtn
	end

end

--insertSetTxt

return _UITwoMergeShopPanelBase
