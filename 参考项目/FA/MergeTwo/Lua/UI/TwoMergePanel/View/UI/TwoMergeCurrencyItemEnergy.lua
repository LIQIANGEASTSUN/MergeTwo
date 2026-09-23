---@class TwoMergeCurrencyItemEnergy
local TwoMergeCurrencyItem = require "UI.TwoMergePanel.View.UI.TwoMergeCurrencyItem"
local TwoMergeCurrencyItemEnergy = class(TwoMergeCurrencyItem, "TwoMergeCurrencyItemEnergy")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

function TwoMergeCurrencyItemEnergy:ctor(gameObject, currencyId) end
function TwoMergeCurrencyItemEnergy:destroy() TwoMergeCurrencyItem.destroy(self); self = nil end
    
function TwoMergeCurrencyItemEnergy:AddListener()
    TwoMergeCurrencyItem.AddListener(self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Order_Submit_Success, self.OnOrderSubmit, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_EnergyRate_Refresh, self.RefreshData, self)
end
function TwoMergeCurrencyItemEnergy:RemoveListener()
    TwoMergeCurrencyItem.RemoveListener(self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Order_Submit_Success, self.OnOrderSubmit, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_EnergyRate_Refresh, self.RefreshData, self)
end

function TwoMergeCurrencyItemEnergy:Bind(gameObject)
    TwoMergeCurrencyItem.Bind(self, gameObject)
    self.gameObject = gameObject

    self.state_single = find_component(self.gameObject, "btn_double/state_single")
    self.state_double = find_component(self.gameObject, "btn_double/state_double")
    self.state_four = find_component(self.gameObject, "btn_double/state_four")
    self.btn_state = find_component(self.gameObject, "btn_double")
    Util.UGUI_AddButtonListener(self.btn_state, function() self:OnClickDouble() end)
end

--- 设置成功后  依靠消息刷新
function TwoMergeCurrencyItemEnergy:RefreshData()
    TwoMergeCurrencyItem.RefreshData(self)

    self.canRate2, self.canRate4 = MergeConfigUtil.IsOpenRate()
    local rate = AppServices.TwoMergeManager:GetRate()
    self.state_single:SetActive(rate == 0)
    self.state_double:SetActive(rate == 1)
    self.state_four:SetActive(rate == 2)
end

function TwoMergeCurrencyItemEnergy:OnOrderSubmit(orderId)
    if (not self.canRate2) or (not self.canRate4) then
        self:RefreshData()
    end
end

function TwoMergeCurrencyItemEnergy:OnClickDouble()
    --- 双倍是否可以开启
    local canRate2, canRate4 = MergeConfigUtil.IsOpenRate()
    local rate = AppServices.TwoMergeManager:GetRate()
    local changed = false

    local targetrate = rate + 1
    while true do
        if targetrate == 1 and canRate2 then -- 双倍
            changed = true
            AppServices.TwoMergeManager:SetRate(targetrate)
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Rate2_Open)
            break
        end
        if targetrate == 2 and canRate4 then -- 四倍
            changed = true
            AppServices.TwoMergeManager:SetRate(targetrate)
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Rate4_Open)
            break
        end
        if targetrate > 2 then
            if rate ~= 0 then -- 多倍关闭
                changed = true
                AppServices.TwoMergeManager:SetRate(0)
                MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Tip_Rate2_Close)
            end
            break
        end
        targetrate = targetrate + 1
    end
    if not changed then
        LuaGameUtil.ShowContent("merge_guide_16") -- 继续游玩解锁多倍
    end
end

--- 获取多倍按钮
function TwoMergeCurrencyItemEnergy:GetTwoRateButton() return self.btn_state end

return TwoMergeCurrencyItemEnergy