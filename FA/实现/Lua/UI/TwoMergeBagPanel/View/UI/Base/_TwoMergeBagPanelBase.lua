--insertRequire

---@class _TwoMergeBagPanelBase:BasePanel
local _TwoMergeBagPanelBase = class(BasePanel)

function _TwoMergeBagPanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
	--insertCtor
end

function _TwoMergeBagPanelBase:setProxy(proxy)
	self.proxy = proxy
	--setProxy
end

function _TwoMergeBagPanelBase:bindView()

	if(self.gameObject ~= nil) then
	--insertInit
		self.closeBtn = find_component(self.gameObject, "root/CloseBtn", Button)
		self.GridContent = find_component(self.gameObject, "root/Scroll View/Viewport/GridContent", GridLayoutGroup)
		self.ItemContent = find_component(self.gameObject, "root/Scroll View/Viewport/ItemContent", GridLayoutGroup)
		self.GridItem = find_component(self.gameObject, "root/GameObject_Grid")
		self.bagItem = find_component(self.gameObject, "root/GameObject_Item")
		self.scroll = find_component(self.gameObject, "root/Scroll View", ScrollRect)
		self.title = find_component(self.gameObject, "root/Text_title", Text)
		self.des = find_component(self.gameObject,"root/Text_des", Text)
	--insertInitComp
	--insertOnClick

		Util.UGUI_AddButtonListener(
			self.closeBtn,
			function()
				PanelManager.closePanel(self.panelVO)
			end
		)
	--insertDeclareBtn
	end

end

--insertSetTxt

return _TwoMergeBagPanelBase
