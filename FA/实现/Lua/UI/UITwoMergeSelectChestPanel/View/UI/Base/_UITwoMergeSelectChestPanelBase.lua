--insertRequire

---@class _UITwoMergeSelectChestPanelBase:BasePanel
local _UITwoMergeSelectChestPanelBase = class(BasePanel)

function _UITwoMergeSelectChestPanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
	--insertCtor
end

function _UITwoMergeSelectChestPanelBase:setProxy(proxy)
	self.proxy = proxy
	--setProxy
end

function _UITwoMergeSelectChestPanelBase:bindView()

	if(self.gameObject ~= nil) then
		self.closeBtn = find_component(self.gameObject,"root/CloseBtn")
		self.title = find_component(self.gameObject,"root/title", Text)
		self.desc = find_component(self.gameObject,"root/desc", Text)
		self.btnOk = find_component(self.gameObject,"root/btnOk")
		self.btnTxt = find_component(self.gameObject,"root/btnOk/btnTxt", Text)
		self.GridContent = find_component(self.gameObject,"root/Scroll View/Viewport/GridContent", Transform)
		self.boxItem = find_component(self.gameObject,"root/GameObject_BoxItem")
		self.emptyItem = find_component(self.gameObject,"root/GameObject_empty")
	--insertInit
	--insertInitComp
	--insertOnClick
	--insertDeclareBtn
		Util.UGUI_AddButtonListener(self.closeBtn,function()
			PanelManager.closePanel(GlobalPanelEnum.UITwoMergeSelectChestPanel)
		end)
		
	end

end

--insertSetTxt

return _UITwoMergeSelectChestPanelBase
