--local threecleareneryitem = require("UI.ThreeClearPackPanel.View.UI.ThreeClearEneryItem")

---@class GiftPayTool
local GiftPayTool = class(nil, "GiftPayTool")

function GiftPayTool:ctor(instance, panel)
    self.instance = instance
    self.giftInfo = self.instance:GetGiftInfo()
    self.config = self.instance.config
    self.panel = panel
end

function GiftPayTool:PaySuccess()
    self.panel:PaySuccess()
end

function GiftPayTool:RewardReceiveEnd()
    self:StopPayLock()
    self.panel:RewardReceiveEnd()
end

function GiftPayTool:RewardReceiveNoEnd()
    if self.panel.RewardReceiveNoEnd ~= nil then
        self.panel:RewardReceiveNoEnd()
    end
end

function GiftPayTool:Pay(itemData)
    local giftId = self.config.id

    if self.giftInfo.buyCount >= self.config.buyTimes then
        return
    end

    if self.payLock then
        return
    end

    local ext = {
        version = RuntimeContext.BUNDLE_VERSION,
        giftId = giftId,
        index = itemData.index, -- GiftTemplate 表 1：itemIds， 2：itemIds2，:3：itemIds3
        source = "PayTriggerGift",
    }

    self.productId = AppServices.ProductManager:GetProductId(tostring(itemData.shopId))
    local function NetSuc(info)
        self:StopPayLock()
        self:Reward(itemData)
        AppServices.GiftManager:RecordBuyGift(self.instance)
        self:PaySuccess()
    end

    local function onFail(failReason)
        self:StopPayLock()
        ErrorHandler.ShowErrorMessage(Runtime.Translate("purchase.fail.text", { reason = failReason or "" }))
    end

    self:PayLock()
    require("Game.Processors.RequestIAPProcessor").Start(function()
        AppServices.ProductManager:StartPay(self.productId, ext, onFail, NetSuc, true)
    end)
end

function GiftPayTool:PayLock()
    self:StopPayLock()
    self.payLock = true
    self.payLockTimer = WaitExtension.SetTimeout(function()
        self.payLock = false
    end, 3)
end

function GiftPayTool:StopPayLock()
    if self.payLockTimer then
        WaitExtension.CancelTimeout(self.payLockTimer)
        self.payLockTimer = nil
    end
    self.payLock = false
end

function GiftPayTool:Reward(itemData)
    local rewards = {}
    for _, data in pairs(itemData.rewards) do
        local reward = { ItemId = data.ItemId, Amount = data.Amount }
        table.insert(rewards, reward)
        if ItemId.IsDragon(reward.ItemId) then
            self:RewardDragon(reward.ItemId, reward.Amount)
        else
            AppServices.User:AddItem(reward.ItemId, reward.Amount)
        end
    end

    local pcb = PanelCallbacks:Create(function()
        if self.giftInfo.buyCount >= self.config.buyTimes then
            self:RewardReceiveEnd()
        else
            self:RewardReceiveNoEnd()
        end
    end)
    PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, { rewards = rewards }, pcb)
end

function GiftPayTool:RewardDragon(itemId, count)
    for _ = 1, count do
        AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
    end
end

return GiftPayTool