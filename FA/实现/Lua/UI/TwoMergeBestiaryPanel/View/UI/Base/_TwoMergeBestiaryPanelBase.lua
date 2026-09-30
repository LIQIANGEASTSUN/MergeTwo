--insertRequire

---@class _TwoMergeBestiaryPanelBase:BasePanel
local _TwoMergeBestiaryPanelBase = class(BasePanel)

function _TwoMergeBestiaryPanelBase:ctor()
	self.gameObject = nil
	self.proxy = nil
	--insertCtor
end

function _TwoMergeBestiaryPanelBase:setProxy(proxy)
	self.proxy = proxy
	--setProxy
end

function _TwoMergeBestiaryPanelBase:bindView()

	if(self.gameObject ~= nil) then
	--insertInit
		self.root = find_component( self.gameObject, "root").transform
		self.Text_title = find_component( self.root, "infoRoot/Text_title", Text)
		
		self.content = find_component( self.root, "infoRoot/Scroll View/Viewport/Content", Transform)
		self.Text_LevelDes = find_component(self.content, "ShowMergeItem/Text_LevelDes", Text)
		self.mergeItemRoot = find_component(self.content, "ShowMergeItem/mergeItemRoot", Transform)
		self.ShowGeneratorRoot = find_component(self.content, "ShowGeneratorRoot", Transform)
		self.ShowMergeItem = find_component( self.content, "ShowMergeItem", Transform)
		self.Text_GeneratorDes = find_component(self.content, "ShowGeneratorRoot/Text_GeneratorDes", Text)
		self.ShowGeneratorScroll = find_component(self.content, "ShowGeneratorRoot/Scroll View", ScrollRect)
		self.ShowGeneratorItemRoot = find_component(self.content, "ShowGeneratorRoot/Scroll View/Viewport/ShowGeneratorItemRoot", Transform)
		self.ShowGenerateItemRoot = find_component(self.content, "ShowGenerateItemRoot", Transform)
		self.Text_GenerateDes = find_component(self.content, "ShowGenerateItemRoot/Text_GenerateDes", Text)
		self.ShowGenerateScroll = find_component(self.content, "ShowGenerateItemRoot/Scroll View", ScrollRect)
		self.ShowGenerateItemSuchRoot = find_component(self.content, "ShowGenerateItemRoot/Scroll View/Viewport/ShowGenerateItemSuchRoot", Transform)
		self.ShowNextGenerateItemRoot = find_component(self.content, "ShowNextGenerateItemRoot", Transform)
		self.Text_NextGenerateDes = find_component(self.content, "ShowNextGenerateItemRoot/Text_NextGenerateDes", Text)
		self.ShowNextGenerateScroll = find_component(self.content, "ShowNextGenerateItemRoot/Scroll View", ScrollRect)
		self.ShowNextGenerateItemSuchRoot = find_component(self.content, "ShowNextGenerateItemRoot/Scroll View/Viewport/ShowNextGenerateItemSuchRoot", Transform)
		self.GameObject_MergeItem = find_component(self.root, "GameObject_MergeItem")
		self.GameObject_GeneratorItem = find_component(self.root, "GameObject_GeneratorItem")
		self.GameObject_GenerateItem = find_component(self.root, "GameObject_GenerateItem")
	--insertInitComp
	--insertOnClick
		self.btn_close = find_component( self.root, "infoRoot/CloseBtn")
		self.btnFind = find_component( self.root, "infoRoot/btnFind")
	--insertDeclareBtn
	end

end

--insertSetTxt

return _TwoMergeBestiaryPanelBase
