--insertRequire

---@class _UITwoMergeBpPanelBase:BasePanel
local _UITwoMergeBpPanelBase = class(BasePanel)

function _UITwoMergeBpPanelBase:ctor()
    self.gameObject = nil
    self.proxy = nil
    --insertCtor
end

function _UITwoMergeBpPanelBase:setProxy(proxy)
    self.proxy = proxy
    --setProxy
end

function _UITwoMergeBpPanelBase:bindView()
    if (self.gameObject ~= nil) then
        self.root = find_component(self.gameObject, "root")
        --top
        self.topContent = find_component(self.root, "TopContent")
        self.close = find_component(self.topContent, "close")
        self.tip = find_component(self.topContent, "tip")
        self.slider = find_component(self.topContent, "slider")
        self.currencyIcon = find_component(self.slider, "Image_currencyIcon")
        self.sliderFill = find_component(self.slider, "sliderFill", Image)
        self.Text_progress = find_component(self.slider, "Text_progress", Text)
        self.Text_level = find_component(self.slider, "Image_LevelBg/Text_level", Text)
        self.twoMergePic = find_component(self.slider, "Image_currencyIcon")
        self.match3dPic = find_component(self.slider, "Image_currencyMatch3D")
        --leftContent
        self.leftContent = find_component(self.root, "leftContent")
        self.bpShowTitle = find_component(self.leftContent, "bpShowBg/bpShowTitle", Text)
        self.countDown = find_component(self.leftContent, "clockBg/countDown", Text)
        self.btnBuyBp = find_component(self.leftContent, "BpPayRoot/btnBuyBp")
        self.text_btnBuyBp = find_component(self.leftContent, "BpPayRoot/btnBuyBp/text_btnBuyBp", Text)
        --rightContent
        self.rightContent = find_component(self.root, "rightContent")
        self.main = find_component(self.rightContent, "main")
        self.scrollRect = find_component(self.rightContent, "main", ScrollRect)
        self.twoMergeBpItem = find_component(self.gameObject, "twoMergeBpItem")
        self.viewport = find_component(self.main, "viewport")
        self.itemParent = find_component(self.main, "viewport/List")
        --FlyObj
        self.twoMergeBpFlyItem = find_component(self.gameObject, "twoMergeBpFlyItem")
        self.queueObj = find_component(self.root, "leftRoot/queueObj")
        self.uiObj = find_component(self.queueObj, "uiObj")
        self.flyIcon = find_component(self.uiObj, "icon", Image)
        --HelpUI
        self.helpUI = find_component(self.gameObject, "HelpUI")
        self.helpCloseBtn = find_component(self.helpUI, "BG")
        self.twoMergeBp = find_component(self.helpUI, "twoMergeBp")
        self.math3DBp = find_component(self.helpUI, "math3DBp")
        self.bpShowPic_merge = find_component(self.leftContent, "bpShowPic_merge")
        self.bpShowPic_match3D = find_component(self.leftContent, "bpShowPic_match3D")
        self.btnAllGet = find_component(self.leftContent, "btnAllGet")
        
    end

    Util.UGUI_AddButtonListener(self.close, function()
        self:closePanel()
    end)

    Util.UGUI_AddButtonListener(self.tip, function()
        self:ClickTip()
    end)

    Util.UGUI_AddButtonListener(self.btnBuyBp, function()
        self:BuyBp()
    end)

    Util.UGUI_AddButtonListener(self.helpCloseBtn, function()
        self:CloseHelpUI()
    end)
    
    Util.UGUI_AddButtonListener(self.btnAllGet, function()
        self:AllGet()
    end)
end

--insertSetTxt

return _UITwoMergeBpPanelBase
