local _UITwoMergeEnergyBuyPanelBase = require "UI.UITwoMergeEnergyBuyPanel.View.UI.Base._UITwoMergeEnergyBuyPanelBase"

---@class UITwoMergeEnergyBuyPanel:_UITwoMergeEnergyBuyPanelBase
local UITwoMergeEnergyBuyPanel = class(_UITwoMergeEnergyBuyPanelBase)

function UITwoMergeEnergyBuyPanel:ctor()end
function UITwoMergeEnergyBuyPanel:onAfterBindView()
    -- self.arguments.mapId -- 地图Id
    self:AddListener()
    self:Init()
end
function UITwoMergeEnergyBuyPanel:destroy()
    self:RemoveListener()
    _UITwoMergeEnergyBuyPanelBase.destroy(self)
end

function UITwoMergeEnergyBuyPanel:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_BuyEnergySucc, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.DAY_SPAN, self.OnDaySpan, self)
end
function UITwoMergeEnergyBuyPanel:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_BuyEnergySucc, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.DAY_SPAN, self.OnDaySpan, self)
end

function UITwoMergeEnergyBuyPanel:refreshUI() end

function UITwoMergeEnergyBuyPanel:Init()
    local shopConfig = AppServices.Meta:Category("MergeTwoEnergyShopTemplate")
    for _, v in pairs(shopConfig) do
        if v.id == self.arguments.mapId then
            self.configItem = v; break
        end
    end
    if self.configItem == nil then
        console.error("error : 未找到体力购买配置  地图Id: "..tostring(self.arguments.mapId))
    end
    self:RefreshData()
end

function UITwoMergeEnergyBuyPanel:RefreshData()
    if self.configItem ~= nil then
        UITool:GetItemUISprite(self.icon, self.configItem.currency_shop_id)
        self.countlabel.text = "x"..self.configItem.currency_shop_num
        local curbuycount = AppServices.TwoMergeManager:GetEnergyBuyCount(self.arguments.mapId)
        local nextIndex = curbuycount + 1
        if nextIndex > #self.configItem.currency_shop_value then nextIndex = #self.configItem.currency_shop_value end
        local canbuy = self.configItem.currency_shop_value[nextIndex] ~= nil
        self.btn_buy:SetActive(canbuy) -- 购买按钮
        self.complete:SetActive(not canbuy) -- 购买完成状态
        if canbuy then
            local price = self.configItem.currency_shop_value[nextIndex]
            self.text_buy.text = price
        end

        local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[self.arguments.mapId]
        local cd = config.default_use_grown -- cd
        self.text_desc.text = Runtime.Translate("merge_system_32", { num = tostring(cd) })
        self.text_time.text = cd.."s"
    end
end

function UITwoMergeEnergyBuyPanel:OnClickBuy()
    if self.configItem ~= nil then
        local curbuycount = AppServices.TwoMergeManager:GetEnergyBuyCount(self.arguments.mapId) -- 已经购买的次数
        local nextIndex = curbuycount + 1
        if nextIndex > #self.configItem.currency_shop_value then nextIndex = #self.configItem.currency_shop_value end
        local price = tonumber(self.configItem.currency_shop_value[nextIndex]) -- 购买价格
        if price ~= nil then
            local curcount = AppServices.TwoMergeManager:GetItemAmount(self.arguments.mapId, ItemId.DIAMOND)
            if curcount >= price then
                local itemId = self.configItem.currency_shop_id
                local energycount = tonumber(self.configItem.currency_shop_num) -- 购买后增加体力的个数
                AppServices.TwoMergeManager:EnergyBuyRequest(self.arguments.mapId, itemId, energycount, price)
            else
                AppServices.UITextTip:Show(Runtime.Translate("ui_dragonmaze_shop_error_des"))
            end
        end
    end
end
function UITwoMergeEnergyBuyPanel:OnDaySpan()
    self:OnClickClose()
end
function UITwoMergeEnergyBuyPanel:OnClickClose()
    PanelManager.closePanel(GlobalPanelEnum.UITwoMergeEnergyBuyPanel)
end

return UITwoMergeEnergyBuyPanel
