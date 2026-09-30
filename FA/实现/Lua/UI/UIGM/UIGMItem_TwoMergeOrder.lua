local UIGMItem_TwoMergeOrder = class(nil, "UIGMItem_TwoMergeOrder")

local TwoMergeOrderLogic = require("Game.TwoMerge.Order.TwoMergeOrderLogic")

function UIGMItem_TwoMergeOrder:ctor(gameObject)
    self.gameObject = gameObject
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_RefreshOrderShow_GMCaches, self.RefreshCaches, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_RefreshOrder_GMInfo, self.RefreshDefineInfo, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.RefreshDefineInfo, self)
    self:Bind()
end

function UIGMItem_TwoMergeOrder:destroy()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_RefreshOrderShow_GMCaches, self.RefreshCaches, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_RefreshOrder_GMInfo, self.RefreshDefineInfo, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.RefreshDefineInfo, self)
end
function UIGMItem_TwoMergeOrder:OnShow()
    CS.UnityEngine.UI.LayoutRebuilder.ForceRebuildLayoutImmediate(self.cachesroot)
    self:RefreshOrderInfo()
end

function UIGMItem_TwoMergeOrder:Bind()
    self.gmroot = find_component(self.gameObject, "view/content")
    self.btn_gmlogorder = find_component(self.gmroot, "btn_gmlogorder")
    Util.UGUI_AddButtonListener(self.btn_gmlogorder, function() self:OnClick_btn_gmlogorder() end)
    self.btn_orderrandom = find_component(self.gmroot, "btn_orderrandom")
    Util.UGUI_AddButtonListener(self.btn_orderrandom, function() self:OnClick_btn_orderrandom() end)
    self.input_orderdifficult = find_component(self.gmroot, "input_orderdifficult", typeof(CS.UnityEngine.UI.InputField))
    self.btn_defineadd = find_component(self.gmroot, "btn_defineadd")
    Util.UGUI_AddButtonListener(self.btn_defineadd, function() self:OnClick_btn_defineadd() end)
    self.btn_defineclear = find_component(self.gmroot, "btn_defineclear")
    Util.UGUI_AddButtonListener(self.btn_defineclear, function() self:OnClick_btn_defineclear() end)
    self.input_defineorder = find_component(self.gmroot, "input_defineorder", typeof(CS.UnityEngine.UI.InputField))
    self.input_mapid = find_component(self.gmroot, "input_mapid", typeof(CS.UnityEngine.UI.InputField))
    self.cachesroot = find_component(self.gmroot, "cachesroot/view/content", RectTransform)
    self.cacheslabel = find_component(self.gmroot, "cachesroot/view/content/label", Text)
    -- 订单信息展示 默认关
    self.btn_orderinfo = find_component(self.gmroot, "btn_orderinfo")
    Util.UGUI_AddButtonListener(self.btn_orderinfo, function() self:OnClick_btn_orderinfo() end)

    self.defineinfolabel = find_component(self.gmroot, "text_orderinfo", Text)

    self.btn_clearcdsimple = find_component(self.gmroot, "btn_clearcdsimple")
    Util.UGUI_AddButtonListener(self.btn_clearcdsimple, function() self:OnClick_btn_clearcdsimple() end)
    self.btn_clearcommon = find_component(self.gmroot, "btn_clearcommon")
    Util.UGUI_AddButtonListener(self.btn_clearcommon, function() self:OnClick_btn_clearcommon() end)
end

function UIGMItem_TwoMergeOrder:OnClick_btn_gmlogorder()
    AppServices.TwoMergeOrderManager:LogOrder()
end

function UIGMItem_TwoMergeOrder:OnClick_btn_orderrandom()
    local mapId = AppServices.TwoMergeManager:MapId()
    if not string.isEmpty(self.input_mapid.text) then
        local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.input_mapid.text]
        if config ~= nil then mapId = self.input_mapid.text end
    end
    if not string.isEmpty(self.input_orderdifficult.text) then
        local difficult = tonumber(self.input_orderdifficult.text)
        local success, list = TwoMergeOrderLogic.DoRandom(mapId, difficult, true)
    end
end

function UIGMItem_TwoMergeOrder:OnClick_btn_defineadd()
    if not string.isEmpty(self.input_defineorder.text) then
        local caches = {}
        local success, errorid = true, ""
        local lists = LuaGameUtil.Split(self.input_defineorder.text, "|")
        for _, info in pairs(lists) do
            local results = LuaGameUtil.Split(info, ",")
            local ids = {}
            local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
            for _, id in pairs(results) do
                if not itemConfig[id] then
                    errorid = id; success = false; break
                else
                    table.insert(ids, id)
                end
            end
            if success then
                table.insert(caches, ids)
            else
                break
            end
        end
        if success then
            TwoMergeOrderLogic.SetDefineCaches(caches)
        else
            LuaGameUtil.ShowContent("存在错误 未找到二合ItemId配置: "..tostring(errorid))
        end
    end
end

function UIGMItem_TwoMergeOrder:OnClick_btn_defineclear()
    TwoMergeOrderLogic.ClearDefineCaches()
end

function UIGMItem_TwoMergeOrder:RefreshCaches()
    local str = "-- >> 自定义订单缓存 << --\n"
    local haveCaches, cachestr = TwoMergeOrderLogic.GetDefineCachesStr()
    if haveCaches then
        str = str..cachestr
    else
        str = str.."格式:\n11010701,1010702|11010703"
    end
    self.cacheslabel.text = str
    CS.UnityEngine.UI.LayoutRebuilder.ForceRebuildLayoutImmediate(self.cachesroot)
end
function UIGMItem_TwoMergeOrder:RefreshDefineInfo()
    local orderInfo = AppServices.TwoMergeManager:GetDefineOrderInfo(AppServices.TwoMergeManager:MapId())
    if orderInfo ~= nil then
        local str = ""
        str = str.."简单订单: endtime: "..orderInfo.simpleEnd.."\n"
        str = str.."简单订单: curnum: "..orderInfo.simpleNum.."\n"
        str = str.."普通订单: nexttime: "..orderInfo.difficultEnd
        self.defineinfolabel.text = str
    else
        self.defineinfolabel.text = "活动未开启  无数据"
    end
end
function UIGMItem_TwoMergeOrder:OnClick_btn_orderinfo()
    local isshow = GlobalState.TwoMerge_Order_ShowInfo_Get()
    local targetshow = not isshow
    GlobalState.TwoMerge_Order_ShowInfo_Set(targetshow)
    self:RefreshOrderInfo()
end
function UIGMItem_TwoMergeOrder:RefreshOrderInfo()
    local isshow = GlobalState.TwoMerge_Order_ShowInfo_Get()
    find_component(self.btn_orderinfo, "state1"):SetActive(isshow)
    find_component(self.btn_orderinfo, "state2"):SetActive(not isshow)
end

function UIGMItem_TwoMergeOrder:OnClick_btn_clearcdsimple()
    local netData = AppServices.TwoMergeManager:GetNetData(AppServices.TwoMergeManager:MapId())
    if netData ~= nil then
        netData.randomOrderCD.simpleEnd = 0
        AppServices.TwoMergeOrderManager:RefreshOrders()
    end
end
function UIGMItem_TwoMergeOrder:OnClick_btn_clearcommon()
    local netData = AppServices.TwoMergeManager:GetNetData(AppServices.TwoMergeManager:MapId())
    if netData ~= nil then
        netData.randomOrderCD.difficultEnd = 0
        AppServices.TwoMergeOrderManager:RefreshOrders()
    end
end

return UIGMItem_TwoMergeOrder