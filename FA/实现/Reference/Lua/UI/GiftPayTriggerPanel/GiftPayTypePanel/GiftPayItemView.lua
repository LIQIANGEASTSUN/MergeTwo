
---@class GiftPayItemView
local GiftPayItemView = class(nil, "GiftPayItemView")

--- 使用固定图标的
local FixedIconMap = {
    --- 蓝体力
    [1003] = "energy_blue",
    [1006] = "energy_red",
}

function GiftPayItemView:ctor(instance, item, payClickCallBack)
    self.item = item
    self.go = item.go
    self.itemData = item.itemData
    self.config = instance.config
    self.giftInfo = instance:GetGiftInfo()

    self.txt_scale = find_component(self.go, "scale/txt_scale", Text)
    self.btn_pay = find_component(self.go, "btn_pay", Button)
    self.txt_pay = find_component(self.go, "btn_pay/txt_pay", Text)
    self.txt_pay_all = find_component(self.go, "btn_pay/txt_pay_all", Text)
    self.btn_uiGray = find_component(self.go, "btn_pay", UIGray)
    self.txt_pay_limit = find_component(self.go, "txt_pay_limit", Text)
    self.txt_free_bouns = find_component(self.go, "txt_free_bouns", Text)

    local function OnClick_btn_pay(go)
        Runtime.InvokeCbk(payClickCallBack, self.itemData)
    end
    Util.UGUI_AddButtonListener(self.btn_pay, OnClick_btn_pay)

    self:Refresh()
end

function GiftPayItemView:Refresh()
    local discount = self.itemData.discount
    discount = (1 / discount) * 100
    discount = math.floor(discount)

    local shopId = self.itemData.shopId
    local productId = AppServices.ProductManager:GetProductId(tostring(shopId))
    local priceData = AppServices.ProductManager:GetProductPrice(productId)
    self.txt_pay.text = priceData.currencyPrice
    if Runtime.CSValid(self.txt_pay_all) then
        self.txt_pay_all.text = Runtime.Translate("UI_button_purchase_all")..priceData.currencyPrice
    end

    if Runtime.CSValid(self.txt_free_bouns) then
        self.txt_free_bouns.text = Runtime.Translate("UI_free_bonus")
    end

    self.txt_scale.text = string.format("%d%s", discount, "%")
    self:RefreshPayTiems()

    local itemGoList = self.item.itemGoList
    for index, data in ipairs(self.itemData.rewards) do
        self:RefreshItem(data, itemGoList[index])
    end
end

--- 每一个道具信息
function GiftPayItemView:RefreshItem(data, itemGo)
    itemGo:SetActive(true)
    local icon = find_component(itemGo, "icon", Image)
    local txt_count = find_component(itemGo, "txt_count", Text)

    icon.sprite = AppServices.ItemIcons:GetSprite(data.ItemId)

    if data.unUseX then
        txt_count.text = string.format("%d", data.Amount)
    else
        txt_count.text = string.format("%s%d","x", data.Amount)
    end
    local m_date = self:ChangeTipDate(data.ItemId)
    local m_iconBtn = icon.gameObject
    if Runtime.CSValid(m_iconBtn) then
        Util.UGUI_AddButtonListener(m_iconBtn,function()
        MessageDispatcher:SendMessage(MessageType.GiftPayTriggerPanelShowTips, { itemData = m_date, pos = icon.transform.position })
        end)
    end

    if FixedIconMap[data.ItemId] then
        local fixed = find_component(itemGo, FixedIconMap[data.ItemId])
        if Runtime.CSValid(fixed) then
            fixed:SetActive(true)
        end
    end
end

function GiftPayItemView:RefreshPayTiems()
    local data = {
        num1 = tostring(self.giftInfo.buyCount),
        num2 = tostring(self.config.buyTimes),
    }
    self.txt_pay_limit.text = Runtime.Translate("gift_limit_times1", data)
    self.btn_uiGray.enabled = (self.giftInfo.buyCount >= self.config.buyTimes)
end

function GiftPayItemView:ChangeTipDate(itemId)
    local cfg = AppServices.Meta:GetItemMeta(itemId)
    if cfg then
        local items = {}
        items.count = AppServices.User:GetItemAmount(itemId)
        items.itemId = itemId
        local dt = {data = items, config = cfg}
        if cfg.paginationType == 5 then
            dt.partnerConfig = AppServices.Meta:GetMagicalCreateuresConfigById(tostring(cfg.funcParam[1]))
        end
        dt.hideBtn = true
        return dt
    end
    return {}
end

return GiftPayItemView