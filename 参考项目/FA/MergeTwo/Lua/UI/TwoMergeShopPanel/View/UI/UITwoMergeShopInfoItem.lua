---@class UITwoMergeShopInfoItem
local UITwoMergeShopInfoItem = class(nil,"UITwoMergeShopInfoItem")


function UITwoMergeShopInfoItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = UITwoMergeShopInfoItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function UITwoMergeShopInfoItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(true)
    -- 绑定组件
    self.itemIcon = find_component( self.gameObject, "icon", Image)
    self.btnBuy = find_component( self.gameObject, "btnBuy")
    self.itemPriceTxt = find_component(self.btnBuy, "Text_costNum", Text)
    self.costIcon = find_component( self.btnBuy, "costIcon", Image) --costIcon
    self.btnBuy_Ads = find_component( self.gameObject, "btnBuy_Ads")
    self.btnBuy_Free = find_component( self.gameObject, "btnBuy_Free")
    self.freeTxt = find_component( self.btnBuy_Free, "Text_costNum", Text)
    self.soldOutObj = find_component( self.gameObject, "soldOutObj")
    self.soldTxt = find_component( self.gameObject, "soldOutObj/Text_soldOut", Text)
    self.remainNum = find_component( self.gameObject, "Text_remainNum", Text) --Text_remainNum
    self.btnTip = find_component( self.gameObject, "btnTip", Button) 
    
    Util.UGUI_AddButtonListener(self.btnBuy_Ads, function() self:OnClick() end)
    Util.UGUI_AddButtonListener(self.btnBuy_Free, function() self:OnClick() end)
    Util.UGUI_AddButtonListener(self.btnBuy, function() self:OnClick() end)
    Util.UGUI_AddButtonListener(self.btnTip, function() self:OnClickTip() end)
end

function UITwoMergeShopInfoItem:SetData(data,shopType)
    self.data = data
    self.shopType = shopType
    if shopType == 1 then
        self:SetDailyShopItem()
    else
        self:SetHotShopItem()
    end
end

function UITwoMergeShopInfoItem:SetDailyShopItem ()
    self.shopItem = self.data.shopItem
    --随机商品的随机索引值 从0开始
    self.randomIndex = self.data.randomIndex + 1
    self.index = self.shopItem.position
    self.buyCount = self.shopItem.count
    local _cfg = ""
    local _tempCfg = AppServices.Meta:Category("MergeTwoShopTemplate")
    local mapId = AppServices.TwoMergeManager:MapId()
    for k,v in pairs(_tempCfg) do
        if v.activity == mapId and tostring(v.productPos) == tostring(self.index) then
            _cfg = v
            break 
        end
    end

    --商品id
    self.itemId = _cfg.commodityPool[self.randomIndex][1]
    local _mapId = AppServices.TwoMergeManager:MapId()
    AppServices.TwoMergeManager:CheckIllUnlock(_mapId, tostring(self.itemId))
    --商品货币
    self.itemCurrency = _cfg.commodityPool[self.randomIndex][2]
    --商品售价
    self.itemPrice = _cfg.commodityPool[self.randomIndex][3]
    --商品最大库存
    self.itemMaxCount = _cfg.commodityPool[self.randomIndex][4]

    self.freeTxt.text = Runtime.Translate("UI_JamAD_02")
    self.soldTxt.text = Runtime.Translate("ui_dailyBargain_text_2")
    --商品图标
    local _itemCfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(self.itemId)]
    self.itemIcon.sprite = AppServices.ItemIcons:GetSpriteByName(_itemCfg.icon)
    if self.itemCurrency > 0 then
        --商品货币图标
        UITool:GetItemUISprite(self.costIcon, self.itemCurrency)
        --商品价格
        self.itemPriceTxt.text = self.itemPrice
    else
        self.itemPrice = 0
    end
    
    --商品剩余库存
    self.remainNum.text = Runtime.Translate("merge_shop_03").. (self.itemMaxCount - self.buyCount)

    self.isNoBuyTime = self.itemMaxCount - self.buyCount <= 0
    
    self.soldTxt.text = Runtime.Translate("merge_shop_04")

    self.btnBuy.gameObject:SetActive(not self.isNoBuyTime and self.itemCurrency > 0)
    self.btnBuy_Ads.gameObject:SetActive(not self.isNoBuyTime and self.itemCurrency == -1)
    if not self.isNoBuyTime and self.itemCurrency == -1 then
        DcDelegates.Ads:LogEntryShow(AdsTypes.MergeTwoShopAdsBox)
    end
    self.btnBuy_Free.gameObject:SetActive(not self.isNoBuyTime and self.itemCurrency == -2)
    self.soldOutObj.gameObject:SetActive(self.isNoBuyTime)
end

function UITwoMergeShopInfoItem:SetHotShopItem()
    self.index = self.data.position
    self.buyCount = self.data.count
    self.itemId = self.data.itemId
    local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.itemId]
    --商品货币
    self.itemCurrency = _cfg.price[1]
    --商品售价
    self.itemPrice = _cfg.price[2]
    --商品最大库存
    self.itemMaxCount = AppServices.TwoMergeManager:GetHotItemMaxCount()

    self.freeTxt.text = Runtime.Translate("UI_JamAD_02")
    self.soldTxt.text = Runtime.Translate("ui_dailyBargain_text_2")
    --商品图标
    self.itemIcon.sprite = AppServices.ItemIcons:GetSpriteByName(_cfg.icon)
    if self.itemCurrency > 0 then
        --商品货币图标
        UITool:GetItemUISprite(self.costIcon, self.itemCurrency)
        --商品价格
        self.itemPriceTxt.text = self.itemPrice
    else
        self.itemPrice = 0
    end

    --商品剩余库存
    self.remainNum.text = Runtime.Translate("UI_remaining").. tonumber(self.itemMaxCount) - self.buyCount

    self.isNoBuyTime = tonumber(self.itemMaxCount) - self.buyCount <= 0

    self.btnBuy.gameObject:SetActive(not self.isNoBuyTime and self.itemCurrency > 0)
    self.btnBuy_Ads.gameObject:SetActive(self.isNoBuyTime and self.itemCurrency == -1)
    self.btnBuy_Free.gameObject:SetActive(self.isNoBuyTime and self.itemCurrency == -2)
    self.soldOutObj.gameObject:SetActive(self.isNoBuyTime)
end

function UITwoMergeShopInfoItem:OnClick()
    if self.isNoBuyTime then
        AppServices.UITextTip:Show(Runtime.Translate("UI_JamClear_desc61"))
        return
    end
    
    local _curCount = AppServices.User:GetItemAmount(self.itemCurrency)
    if _curCount < self.itemPrice then
        AppServices.UITextTip:Show(Runtime.Translate("ui_dragonmaze_shop_error_des"))
        return
    end
    if self.itemCurrency == -1 then
        AppServices.AdsManager:PlayAds(AdsTypes.MergeTwoShopAdsBox, nil, function(success)
            if success then
                DcDelegates.Ads:LogEntryClick(AdsTypes.MergeTwoShopAdsBox)
                AppServices.TwoMergeManager:TwoMergeShopBuyItemRequest(self.shopType, self.index,self.itemCurrency, self.itemPrice,self.itemId)    
            end
        end)
    else
        AppServices.TwoMergeManager:TwoMergeShopBuyItemRequest(self.shopType, self.index,self.itemCurrency, self.itemPrice,self.itemId)
    end
end

function UITwoMergeShopInfoItem:OnClickTip()
    PanelManager.showPanel( GlobalPanelEnum.TwoMergeBestiaryPanel,{id = self.itemId})
end

function UITwoMergeShopInfoItem:GetBtn()
    return self.btnBuy_Free
end

return UITwoMergeShopInfoItem
