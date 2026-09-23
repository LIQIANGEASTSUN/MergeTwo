---@class UITwoMergeShopCurrencyItem
local UITwoMergeShopCurrencyItem = class(nil,"UITwoMergeShopCurrencyItem")
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"


function UITwoMergeShopCurrencyItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = UITwoMergeShopCurrencyItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function UITwoMergeShopCurrencyItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(true)
    -- 绑定组件
    self.Image_currencyIcon = find_component( self.gameObject, "Image_currencyIcon", Image)
    self.Text_currencyTxt = find_component( self.gameObject, "Text_currencyTxt", Text)
    self.event = find_component( self.gameObject, "event")
    Util.UGUI_AddButtonListener( self.event, function() self:OnClick() end)
end

function UITwoMergeShopCurrencyItem:SetData(id)
    self.id = tostring(id)
    UITool:GetItemUISprite(self.Image_currencyIcon, self.id)
    self.Text_currencyTxt.text = AppServices.User:GetItemAmount(self.id)
    self.page = ""
    self.source = ""
    if self.id == ItemId.DIAMOND then
        self.page = MoneyShopPage.Diamond
        self.source = "DiamondIcon"
    elseif self.id == ItemId.COIN then
        self.page = MoneyShopPage.Coin
        self.source = "GoldIcon"
    end
end

function UITwoMergeShopCurrencyItem:RefreshCount(id)
    if self.id == tostring(id) then
        self.Text_currencyTxt.text = AppServices.User:GetItemAmount(id)    
    end
end

function UITwoMergeShopCurrencyItem:OnClick()
    if self.page == MoneyShopPage.Diamond then
        MergeUtil.CurrencyNotEnough(ItemId.DIAMOND)
    else
        MergeUtil.CurrencyNotEnough(ItemId.COIN)
    end
end


return UITwoMergeShopCurrencyItem
