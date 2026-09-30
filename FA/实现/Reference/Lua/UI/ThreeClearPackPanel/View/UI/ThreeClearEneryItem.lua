---@class ThreeClearEneryItem
local ThreeClearEneryItem = class(nil, "ThreeClearEneryItem")

function ThreeClearEneryItem:ctor(go)
    self.go = go
    self:Init()
end

function ThreeClearEneryItem:Init()
    self.buyBtn = find_component(self.go, "btnGroup/buyBtn")
    self.buyBtn_count = find_component(self.buyBtn, "count", Text)
    self.adsBtn = find_component(self.go, "btnGroup/adsBtn")
    self.txt_ads = find_component(self.adsBtn, "txt_ads", Text)
    self.txt_ads.text = Runtime.Translate("UI_ThreeClear_desc11")

    self.manager = ActivityServices.ThreeClearManager
    local config = self.manager:GetConfig()
    local price = config.energyConfig.PowerPrice
    self.buyBtn_count.text = price

    Util.UGUI_AddButtonListener(
        self.buyBtn,
        function()
            AppServices.DiamondConfirmUIManager:Click(self.buyBtn, function ()
				self:OnBuy()
			end)
        end
    )
    Util.UGUI_AddButtonListener(
        self.adsBtn,
        function()
            self:OnAds()
        end
    )

    local show = AppServices.AdsManager:CheckActiveById(AdsTypes.AdsthreeClearheart)
    self.adsBtn:SetActive(show)
end

function ThreeClearEneryItem:OnBuy()
    local hasCount = AppServices.User:GetItemAmount(ItemId.DIAMOND)
    local price = self.manager:GetConfig().energyConfig.PowerPrice
    local source = ItemGetMethod.ThreeClearBuyEnergy
    if hasCount >= price then
        local function Callback(result)
            if result then
                AppServices.DiamondLogic:UseDiamond(price, nil, source)
                local diamondItem = App.scene:GetWidget(CONST.MAINUI.ICONS.DiamondIcon)
                diamondItem:SetDiamondWithAnimation(hasCount - price)
            end
            PanelManager.closePanel(GlobalPanelEnum.ThreeClearPackPanel)
        end
        self.manager:ThreeClearEnergyBuyRequest(Callback)
    else
        require("Game.Processors.RequestIAPProcessor").Start(
            function()
                PanelManager.showPanel(GlobalPanelEnum.MoneyShopPanel, {source = source})
            end
        )
    end
end

function ThreeClearEneryItem:OnAds()
    if AppServices.AdsManager:CheckActiveById(AdsTypes.AdsthreeClearheart) then
        DcDelegates.Ads:LogEntryClick(AdsTypes.AdsthreeClearheart)
        AppServices.AdsManager:PlayAds(
            AdsTypes.AdsthreeClearheart,
            nil,
            function()
                local callback = function(result)
                    if result then
                        local config = AppServices.AdsManager:GetConfigByType(AdsTypes.AdsthreeClearheart)
                        local rewards = config.reward
                        for _, value in ipairs(rewards) do
                            AppServices.User:AddItem(tostring(value[1]),value[2])
                        end

                        PanelManager.closePanel(GlobalPanelEnum.ThreeClearPackPanel)
                    end
                end
                AppServices.AdsManager:RequsetReward({adsType = AdsTypes.AdsthreeClearheart, onSuc = callback})
            end
        )
    end
end

return ThreeClearEneryItem