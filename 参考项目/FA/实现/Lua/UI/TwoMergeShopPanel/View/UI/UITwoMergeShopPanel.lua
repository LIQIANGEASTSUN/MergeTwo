--insertWidgetsBegin
--insertWidgetsEnd

--insertRequire
local _UITwoMergeShopPanelBase = require "UI.TwoMergeShopPanel.View.UI.Base._UITwoMergeShopPanelBase"
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"
local UITwoMergeShopCurrencyItem = require "UI.TwoMergeShopPanel.View.UI.UITwoMergeShopCurrencyItem"
local UITwoMergeShopInfoItem = require "UI.TwoMergeShopPanel.View.UI.UITwoMergeShopInfoItem"

---@class UITwoMergeShopPanel:_UITwoMergeShopPanelBase
local UITwoMergeShopPanel = class(_UITwoMergeShopPanelBase)

function UITwoMergeShopPanel:ctor()
    self.currencyList = AppServices.TwoMergeManager:GetShopCurrencyList()
    self.currencyItems = {}
    self.dailyItems = {}
    self.hotItems = {}
end

function UITwoMergeShopPanel:onAfterBindView()
    self:refreshUI()
    self:AddListener()
    DcDelegates:TDLog(SDK_EVENT.open_close_ui, {
        ui_name = "UITwoMergeShopPanel"
    })
    local twoMergeShop = AppServices.User.Default:GetKeyValue("twoMerge_tutorial_twoMergeShop"..tostring(self.arguments.mapId), 0)
end

function UITwoMergeShopPanel:refreshUI()
    self:GenerateShopCurrencyItem()
    self:SetLeftShop()
    self:SetRightShop()
end

function UITwoMergeShopPanel:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Global_After_UseItem, self.RefreshCurrencyItem, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_AddItem, self.RefreshCurrencyItem, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Buy_DailyShopItem, self.RefreshDailyItem, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Buy_HotShopItem, self.RefreshHotItem, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Refresh_BtnTimes, self.RefreshAllBtnTimes, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Refresh_HotItem, self.RefreshHotRoot, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_ShopInfo_Success, self.refreshUI, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_FlyShopItem, self.FlyItem, self)
end

function UITwoMergeShopPanel:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_UseItem, self.RefreshCurrencyItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_AddItem, self.RefreshCurrencyItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Buy_DailyShopItem, self.RefreshDailyItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Buy_HotShopItem, self.RefreshHotItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Refresh_BtnTimes, self.RefreshAllBtnTimes, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Refresh_HotItem, self.RefreshHotRoot, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ShopInfo_Success, self.refreshUI, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_FlyShopItem, self.FlyItem, self)
end

function UITwoMergeShopPanel:OnHide()
    self:StopDailyCD()
    self:StopHotCD()
    self:CancelFlyTimerId()
    self:RemoveListener()
end

-----------------------------**自定义方法**---------------------------------
--设置货币栏
function UITwoMergeShopPanel:GenerateShopCurrencyItem()
    local _count = table.len(self.currencyList)
    if #self.currencyItems < _count then
        for i = 1, _count - #self.currencyItems do
            local obj = GameObject.Instantiate(self.currencyItem, self.currencyRoot)
            local item = UITwoMergeShopCurrencyItem:CreateWithGameObject(obj, self)
            table.insert(self.currencyItems, item)
        end
    end

    for i = 1, #self.currencyItems do
        self.currencyItems[i]:SetData(self.currencyList[i].id)
    end
end

--刷新货币
function UITwoMergeShopPanel:RefreshCurrencyItem(id, count)
    for k, v in pairs(self.currencyItems) do
        v:RefreshCount(id)
    end
end

function UITwoMergeShopPanel:RefreshAllBtnTimes()
    self:SetRefreshBtn()
    self:SetRefreshAdsBtnTimes()
end

-----------------------**左侧信息（每日特卖）**-------------------------------------
function UITwoMergeShopPanel:SetLeftShop()
    self.leftTitleTxt.text = Runtime.Translate("merge_shop_01") -- 每日特价
    self.ltCountDownText.text = Runtime.Translate("merge_shop_05") -- 刷新倒计时：
    --生成itemInfo
    self:GenerateLeftShopItem()
    --设置刷新时间
    self:SetLeftShopCountDown()
end

function UITwoMergeShopPanel:GenerateLeftShopItem()
    --生成item
    local _dailyItems = AppServices.TwoMergeManager:GetShopItemInfo()
    for i = 1, self.leftShopRoot.childCount do
        local obj = self.leftShopRoot:GetChild(i - 1)
        obj.gameObject:SetActive(i <= #_dailyItems)
        if i <= #_dailyItems then
            local item = UITwoMergeShopInfoItem:CreateWithGameObject(obj, self)
            item:SetData(_dailyItems[i], 1)
            table.insert(self.dailyItems, item)
        end
    end
end

--开始每日特卖倒计时
function UITwoMergeShopPanel:SetLeftShopCountDown()
    --设置刷新时间
    self:StopDailyCD()
    local function onTick()
        self:RefreshDailyCD()
    end
    self.timerDailyId = WaitExtension.InvokeRepeating(onTick, 0, 1)
    onTick()
end

--设置每日特卖倒计时文本
function UITwoMergeShopPanel:RefreshDailyCD()
    local leftTime = AppServices.TwoMergeManager:GetNextDailyRefreshTime()
    local s = TimeUtil.SecToOver48H(leftTime)
    self.ltCountDownTxt.text = s
end

--停止每日特卖倒计时
function UITwoMergeShopPanel:StopDailyCD()
    if self.timerDailyId then
        WaitExtension.CancelTimeout(self.timerDailyId)
        self.timerDailyId = nil
    end
end

--刷新每日特卖
function UITwoMergeShopPanel:RefreshDailyItem(mergeId)
    local _dailyItems = AppServices.TwoMergeManager:GetShopItemInfo()
    for i = 1, #self.dailyItems do
        if i <= #_dailyItems then
            local item = self.dailyItems[i]
            item:SetData(_dailyItems[i], 1)
        end
    end
end

-----------------------**右侧信息（热卖商品）**-------------------------------------
---设置热卖商品
function UITwoMergeShopPanel:SetRightShop()
    self.rightTitleTxt.text = Runtime.Translate("merge_shop_02") -- 热卖中
    self.rtCountDownText.text = Runtime.Translate("merge_shop_05") -- 刷新倒计时：
    self:AddBtnClick()
    self:GenerateRightShopItem()
    --设置刷新时间
    self:SetRightShopCountDown()

    self:SetRefreshBtn()

    self:SetRefreshAdsBtnTimes()
end

function UITwoMergeShopPanel:AddBtnClick()
    Util.UGUI_AddButtonListener(self.btnRtRefreshAds, function()
        AppServices.AdsManager:PlayAds(AdsTypes.MergeTwoShopAdsBox, nil, function(success)
            if success then
                DcDelegates.Ads:LogEntryClick(AdsTypes.MergeTwoShopAdsBox)
                self:ClickBtn(2)
            end
        end)
    end)

    Util.UGUI_AddButtonListener(self.btnRtRefreshCost, function()
        self:ClickBtn(1)
    end)
end

function UITwoMergeShopPanel:ClickBtn(refreshType)
    local cost = 0
    if refreshType == 1 then
        local diamondNum = AppServices.User:GetItemAmount(ItemId.DIAMOND)
        if diamondNum < self.curRefreshCost then
            AppServices.UITextTip:Show(Runtime.Translate("ui_dragonmaze_shop_error_des"))
            return
        end
        cost = self.curRefreshCost
    end
    AppServices.TwoMergeManager:TwoMergeShopRefreshHotItemRequest(refreshType, cost)
end

--开始热卖商品倒计时
function UITwoMergeShopPanel:SetRightShopCountDown()
    --设置刷新时间
    self:StopHotCD()
    local function onTick()
        self:RefreshHotCD()
    end
    self.timerHotItemId = WaitExtension.InvokeRepeating(onTick, 0, 1)
    onTick()

end

--设置热卖商品倒计时文本
function UITwoMergeShopPanel:RefreshHotCD()
    local leftTime = AppServices.TwoMergeManager:GetNextHotRefreshTime()
    local s = TimeUtil.SecToOver48H(leftTime)
    self.rtCountDownTxt.text = s
end

--停止热卖商品倒计时
function UITwoMergeShopPanel:StopHotCD()
    if self.timerHotItemId then
        WaitExtension.CancelTimeout(self.timerHotItemId)
        self.timerHotItemId = nil
    end
end

function UITwoMergeShopPanel:GenerateRightShopItem()
    --生成item
    local _hotItems = AppServices.TwoMergeManager:GetHotShopItemInfo()
    local _count = table.len(_hotItems)
    if #self.hotItems < _count then
        for i = 1, _count - #self.hotItems do
            local obj = GameObject.Instantiate(self.twoMergeShopItem, self.rightShopRoot)
            local item = UITwoMergeShopInfoItem:CreateWithGameObject(obj, self)
            table.insert(self.hotItems, item)
        end
    end
    for i = 1, #_hotItems do
        self.hotItems[i]:SetData(_hotItems[i], 2)
    end
end

function UITwoMergeShopPanel:RefreshHotItem(mergeId)
    local _hotItems = AppServices.TwoMergeManager:GetHotShopItemInfo()
    for i = 1, #self.hotItems do
        if i <= #_hotItems then
            local item = self.hotItems[i]
            item:SetData(_hotItems[i], 2)
        end
    end
end

function UITwoMergeShopPanel:SetRefreshBtn()
    local _curRefreshTime = AppServices.TwoMergeManager:GetHotDiamondCount()
    self.curRefreshCost = AppServices.TwoMergeManager:GetCurDiamondRefreshCost(_curRefreshTime)
    self.btnRtRefreshCostTxt.text = self.curRefreshCost
    self.refreshCostIcon.sprite = AppServices.ItemIcons:GetSprite(ItemId.DIAMOND)
end

function UITwoMergeShopPanel:SetRefreshAdsBtnTimes()
    local _curAdsRefreshTime = AppServices.TwoMergeManager:GetHotAdsCount()
    local _maxAdsRefreshTime = AppServices.TwoMergeManager:GetAdsRefreshMaxTimes()
    self.btnRtRefreshAds.gameObject:SetActive(_curAdsRefreshTime < tonumber(_maxAdsRefreshTime))
    if _curAdsRefreshTime < tonumber(_maxAdsRefreshTime) then
        DcDelegates.Ads:LogEntryShow(AdsTypes.MergeTwoShopAdsBox)
    end
end

function UITwoMergeShopPanel:RefreshHotRoot()
    self:RefreshHotItem()
    self:RefreshAllBtnTimes()
end

----------------新增飞item--------------
function UITwoMergeShopPanel:FlyItem(id, index, type)
    if id == nil then
        return
    end
    local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
    local btn = panel:Tutorial_GetQueueButton()
    if btn ~= nil then
        local cloneObj = GameObject.Instantiate(self.twoMergeShopFlyItem.gameObject,self.root) 
        cloneObj.name = "flyObj"
        if type == 1 then
            cloneObj.transform.position = self.dailyItems[index].gameObject.transform.position
        else
            cloneObj.transform.position = self.hotItems[index].gameObject.transform.position
        end
        cloneObj.transform.localScale = Vector3.one
        local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(id)]
        local itemIcon = find_component(cloneObj.gameObject, "icon", Image)
        itemIcon.sprite = AppServices.ItemIcons:GetSpriteByName(_cfg.icon)
        cloneObj.gameObject:SetActive(true)
        self:CancelFlyTimerId()
        self.queueObj.gameObject:SetActive(true)
        self.uiObj.gameObject:SetActive(false)
        local offsetX = -cloneObj.gameObject:GetLocalPosition()[0] * 0.5
        local offsetY = 200
        AppServices.FlyAnimation.FlyEffectOffset(cloneObj.gameObject, self.queueObj.gameObject, function()
            
        end, 0.6,Ease.InOutSine,offsetX,offsetY)
        self.itemShowTimerId = WaitExtension.SetTimeout(function()
            self.queueObj.gameObject:SetActive(false)
        end, 1.5)
    end
end

function UITwoMergeShopPanel:CancelFlyTimerId()
    if self.itemShowTimerId then
        WaitExtension.CancelTimeout(self.itemShowTimerId)
        self.itemShowTimerId = nil
    end
end

function UITwoMergeShopPanel:Tutorial_GetShopFreeButton()
    local obj = self.dailyItems[1]:GetBtn()
    return obj
end

return UITwoMergeShopPanel
