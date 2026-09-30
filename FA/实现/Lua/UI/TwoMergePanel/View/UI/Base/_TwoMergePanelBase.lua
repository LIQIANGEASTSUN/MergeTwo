---@class _TwoMergePanelBase:BasePanel
local _TwoMergePanelBase = class(BasePanel)

function _TwoMergePanelBase:ctor()
    self.gameObject = nil
    self.proxy = nil

    self.onClick_btn_close = nil
    self.onClick_btn_help = nil
end

function _TwoMergePanelBase:setProxy(proxy)
    self.proxy = proxy
end

function _TwoMergePanelBase:bindView()
    if self.gameObject ~= nil then
        self.text_title = find_component(self.gameObject, "text_title", Text)
        self.text_title.text = "t: 二合"

        --- 棋盘root
        self.mergeroot = find_component(self.gameObject, "mergeroot", RectTransform)
        --- ele 的父物体 RectTransform
        self.eleRoot = find_component(self.gameObject, "mergeroot/eleRoot", RectTransform)
        self.eleItem = find_component(self.gameObject, "mergeroot/eleItem")
        --- 信息栏
        self.infoRoot = find_component(self.gameObject, "rightroot/infoRoot")
        self.Order = find_component(self.gameObject, "leftroot/Order")
        --- grid
        self.gridRoot = find_component(self.gameObject, "mergeroot/gridRoot", RectTransform)
        self.gridItem = find_component(self.gameObject, "mergeroot/gridItem")
        --- area
        self.areaRoot = find_component(self.gameObject, "mergeroot/areaRoot", RectTransform)
        self.areaItem = find_component(self.gameObject, "mergeroot/areaItem")
        --- drag
        self.dragRoot = find_component(self.gameObject, "mergeroot/dragRoot", RectTransform)
        --- 背包
        self.btn_bag = find_component(self.gameObject, "btn_bag", Button)
        --- 体力消耗条
        self.energyItem = find_component(self.gameObject, "energyItem")
        --- 钻石
        self.diamondItem = find_component(self.gameObject, "diamondItem")
        --- 金币
        self.coinItem = find_component(self.gameObject, "coinItem")
        --- 道具队列
        self.queueroot = find_component(self.gameObject, "leftroot/btn_queue")
        self.queueUiObj = find_component(self.gameObject, "leftroot/btn_queue/root/uiObj")
        self.text_queuecount = find_component(self.gameObject, "leftroot/btn_queue/root/uiObj/count", Text)
        self.icon_queue = find_component(self.gameObject, "leftroot/btn_queue/root/uiObj/icon", Image)
        self.queuetip = find_component(self.gameObject, "leftroot/btn_queue/root/queuetip")
        self.shopBtn = find_component(self.gameObject, "btn_shop")
        --- 棋盘背景
        self.gridbg = find_component(self.gameObject, "mergeroot/gridbg", RectTransform)
        --- 提示
        self.tipItem = find_component(self.gameObject, "tipItem")
        --- 棋盘引导
        self.tutorialroot = find_component(self.gameObject, "tutorialroot")
        self.tutorialrootcanvas = find_component(self.gameObject, "tutorialroot", Canvas)
        --- 无尽追逐礼包
        self.gift = find_component(self.gameObject, "btn_gift")


        local function OnClick_btn_bag(go)
            sendNotification(TwoMergePanelNotificationEnum.Click_btn_bag)
        end
        Util.UGUI_AddButtonListener(self.btn_bag, OnClick_btn_bag)

        self.btn_close = find_component(self.gameObject, "btn_close", Button)
        local function OnClick_btn_close(go)
            sendNotification(TwoMergePanelNotificationEnum.Click_btn_close)
        end
        Util.UGUI_AddButtonListener(self.btn_close, OnClick_btn_close)

        self.btn_help = find_component(self.gameObject, "btn_help", Button)
        local function OnClick_btn_help(go)
            sendNotification(TwoMergePanelNotificationEnum.Click_btn_help)
        end
        Util.UGUI_AddButtonListener(self.btn_help, OnClick_btn_help)

        self.btn_queue = find_component(self.gameObject, "leftroot/btn_queue", Button)
        self.TwoMergeBpEntrance = find_component(self.gameObject, "bpEntrance")
        Util.UGUI_AddButtonListener(self.btn_queue, function() self:OnClickQueue() end)
        Util.UGUI_AddButtonListener(self.shopBtn, function() self:OnClickShop() end)
    end
end

return _TwoMergePanelBase
