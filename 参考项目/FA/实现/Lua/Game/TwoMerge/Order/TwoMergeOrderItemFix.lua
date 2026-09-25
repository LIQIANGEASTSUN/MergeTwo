local TwoMergeOrderItemFix = class(require("Game.TwoMerge.Order.TwoMergeOrderBase"), "TwoMergeOrderItemFix")
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")
-- 固定订单
function TwoMergeOrderItemFix:ctor(mapId)
    self.mapId = mapId

    -- 解锁条件用
    self.caches_ill = {}
    self.caches_order = {}

    self.opens = {}
    self._all_orders = {} -- 所有该地图 未完成的 订单配置

    self:Init()
end

function TwoMergeOrderItemFix:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_IllUnlock, self.OnIllUnlock, self)
end
function TwoMergeOrderItemFix:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_IllUnlock, self.OnIllUnlock, self)
end

function TwoMergeOrderItemFix:Init()
    local config = AppServices.Meta:Category("OrderItemSetTemplate")
    if config == nil then return end

    for _, v in pairs(config) do
        if v.chessboard == self.mapId and not AppServices.TwoMergeManager:OrderGet(self.mapId,v.id,TwoMergeConfig.OrderType.Fix) then
            table.insert(self._all_orders, v)
        end
    end
    for _, v in pairs(self._all_orders) do
        if (not AppServices.TwoMergeManager:OrderGet(self.mapId, v.id,TwoMergeConfig.OrderType.Fix)) and self:CheckPreCondition(v.requirement, v.requirementValue) then
            if self.opens[v.id] == nil then
                self.opens[v.id] = self:CreateOrderData(v)
                self:SetDirty()
            end
        end
    end
end

function TwoMergeOrderItemFix:Refresh() end

function TwoMergeOrderItemFix:OnFinishOrder(orderData)
    for _, v in pairs(self._all_orders) do
        if self.opens[v.id] == nil and v.requirement == 1 and v.requirementValue[1] == orderData.id and self:CheckPreCondition(v.requirement, v.requirementValue) then
            local orderData = self:CreateOrderData(v)
            self.opens[v.id] = orderData
            self:SetDirty()
        end
    end
    if orderData.orderType == TwoMergeConfig.OrderType.Fix then
        self.opens[orderData.id] = nil
        self:SetDirty()
    end
end

function TwoMergeOrderItemFix:OnIllUnlock(itemId)
    for _, v in pairs(self._all_orders) do
        if self.opens[v.id] == nil and v.requirement == 2 and v.requirementValue[1] == itemId and self:CheckPreCondition(v.requirement, v.requirementValue) then
            local orderData = self:CreateOrderData(v)
            self.opens[v.id] = orderData
            self:SetDirty()
        end
    end
end

function TwoMergeOrderItemFix:CreateOrderData(config)
    local itemNeedList, needMap = {}, {}
    for _, item in ipairs(config.itemNumber) do
        local itemData = {
            itemId = tostring(item),
            count = 1,
            complete = false,
        }
        needMap[itemData.itemId] = true
        table.insert(itemNeedList, itemData)
    end
    local orderData = {
        id = config.id,
        difficult = config.difficultyType,
        itemNeedList = itemNeedList,
        orderType = TwoMergeConfig.OrderType.Fix,
        needMap = needMap,
        rewardList = MergeConfigUtil.GetDefineOrderRewards(itemNeedList),
        cfg = { priority = 100, } -- 拼一个排序字段
    }
    return orderData
end

function TwoMergeOrderItemFix:CheckPreCondition(type, args)
    if type == 0 then return true end

    if type == 1 then -- 完成订单Id
        local isFinish = AppServices.TwoMergeManager:OrderGet(self.mapId, args[1],TwoMergeConfig.OrderType.Fix)
        return isFinish
    elseif type == 2 then -- 获得过Id
        local isUnlock = AppServices.TwoMergeManager:Ill_IsUnlock(self.mapId, args[1])
        return isUnlock
    end
    return true
end

return TwoMergeOrderItemFix