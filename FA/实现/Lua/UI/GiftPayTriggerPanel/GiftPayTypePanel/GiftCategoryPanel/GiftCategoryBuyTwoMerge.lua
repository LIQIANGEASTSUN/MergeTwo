---@type GiftPayTool
local GiftPayTool = require "UI.GiftPayTriggerPanel.GiftPayTypePanel.GiftPayTool"

---@type GiftPayItemView
local GiftPayItemView = require "UI.GiftPayTriggerPanel.GiftPayTypePanel.GiftPayItemView"

---@type GiftPayTime
local GiftPayTime = require "UI.GiftPayTriggerPanel.GiftPayTypePanel.GiftPayTime.GiftPayTime"

---@type ItemDetailTip
local ItemDetailTip = require "UI.Bag.BagPanel.View.UI.ItemDetailTip"

---@class GiftCategoryBuyTwoMerge
local GiftCategoryBuyTwoMerge = class(nil, "GiftCategoryBuyTwoMerge")

function GiftCategoryBuyTwoMerge:ctor(instance, gameObject, eventMap)
    self.instance = instance
    self.gameObject = gameObject
    self.eventMap = eventMap

    self.config = self.instance.config
    self.itemDataList = self.instance:GetRewardData()
    self.giftPayTool = GiftPayTool.new(self.instance, self)
    self:Init()
end

function GiftCategoryBuyTwoMerge:Init()
    local count = #self.itemDataList
    local panelName = "PayTpye" .. count
    self.payTypeGo = find_component(self.gameObject, panelName)
    if not Runtime.CSValid(self.payTypeGo) then
        console.error("GiftPayTypePanel error:"..self.config.id.."    panelName:"..panelName)   --DEL
    end

    self.closePanel = find_component(self.gameObject, "closePanel")
    self.payTypeGo:SetActive(true)
    self.closePanel = find_component(self.gameObject, "closePanel")
    self.btn_close = find_component(self.payTypeGo, "btn_close", Button)
    self.txt_title = find_component(self.payTypeGo, "txt_title", Text)
    self.txt_time = find_component(self.payTypeGo, "timebg/txt_time", Text)
    self.txt_pay_limit = find_component(self.payTypeGo, "txt_pay_limit", Text)
    self.itemDetail = find_component(self.payTypeGo, "ItemDetail")

    ---@type GiftPayTime
    self.giftPayTime = GiftPayTime.new(self.config.id, self.txt_time, self)
    local function OnClick_btn_close(go)
        self:Close()
    end
    Util.UGUI_AddButtonListener(self.btn_close, OnClick_btn_close)

    local function OnClick_btn_closePanel(go)
        self:Close()
    end
    if Runtime.CSValid(self.closePanel) then
        Util.UGUI_AddButtonListener(self.closePanel, OnClick_btn_closePanel)
    end
    self:refreshUI()
end

function GiftCategoryBuyTwoMerge:refreshUI()
    self.giftInfo = self.instance:GetGiftInfo()
    self.txt_title.text = Runtime.Translate(self.config.title)

    self:RefreshPayTimes()
    self:RefreshItem()
end

function GiftCategoryBuyTwoMerge:RefreshItem()
    self.itemViewList = {}
    local itemParent = find_component(self.payTypeGo, "itemParent")
    for index, itemData in ipairs(self.itemDataList) do
        local name = "item"..index
        local itemGo = find_component(itemParent, name)

        local item = {}
        item.go = itemGo
        item.itemGoList = {}
        item.itemData = itemData

        for i, data in ipairs(itemData.rewards) do
            local rewardGoName = "layout/"..tostring(i)
            local rewardGo = find_component(itemGo, rewardGoName)
            table.insert(item.itemGoList, rewardGo)

            local btn_info = find_component(rewardGo, "btn_info")
            self:ListenerTwoMergeItem(btn_info,  data.ItemId)
        end

        local payClickCallBack = function(data)
            self.giftPayTool:Pay(data)
        end
        local itemView = GiftPayItemView.new(self.instance, item, payClickCallBack)
        table.insert(self.itemViewList, itemView)
    end
end

function GiftCategoryBuyTwoMerge:ListenerTwoMergeItem(btn_info, itemId)
    if not Runtime.CSValid(btn_info) then
        return
    end

    local function OnClick_btn_pay(go)
        self:ShowTip(itemId)
    end
    --insertDeclareBtn
    Util.UGUI_AddButtonListener(btn_info, OnClick_btn_pay)
end

function GiftCategoryBuyTwoMerge:ShowTip(itemId)
    local data = {
        config = AppServices.Meta:GetItemMeta(itemId)
    }
    MessageDispatcher:SendMessage(MessageType.GiftPayTriggerPanelShowTips, { itemData =data, pos = self.itemDetail.transform.position })
end

function GiftCategoryBuyTwoMerge:RefreshPayTimes()
    local data = {
        num1 = tostring(self.giftInfo.buyCount),
        num2 = tostring(self.config.buyTimes),
    }
    self.txt_pay_limit.text = Runtime.Translate("gift_limit_times1", data)
end

function GiftCategoryBuyTwoMerge:PaySuccess()
    self:RefreshPayTimes()
    for _, itemView in ipairs(self.itemViewList) do
        itemView:RefreshPayTiems()
    end
end

function GiftCategoryBuyTwoMerge:RewardReceiveEnd()
    self:Close()
end

function GiftCategoryBuyTwoMerge:SetCloseBtnShow(show)
    if Runtime.CSValid(self.btn_close) then
        self.btn_close.gameObject:SetActive(show)
    end
    if Runtime.CSValid(self.closePanel) then
        self.closePanel.gameObject:SetActive(show)
    end
end

function GiftCategoryBuyTwoMerge:TimeEnd()
    self:Close()
end

function GiftCategoryBuyTwoMerge:Close()
    self:Clear()
    Runtime.InvokeCbk(self.eventMap.Close)
end

function GiftCategoryBuyTwoMerge:Clear()
    self.giftPayTime:Clear()
end

return GiftCategoryBuyTwoMerge