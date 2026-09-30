---@class TwoMergeOrderManager 
local TwoMergeOrderManager = {}

local TwoMergeOrderMain = require "Game.TwoMerge.Order.TwoMergeOrderMain"
local TwoMergeOrderSub = require "Game.TwoMerge.Order.TwoMergeOrderSub"
local TwoMergeOrderPosition = require "Game.TwoMerge.Order.TwoMergeOrderPosition"
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
local TwoMergeOrderItemRandomSimple = require "Game.TwoMerge.Order.TwoMergeOrderItemRandomSimple"
local TwoMergeOrderItemRandomCommon = require "Game.TwoMerge.Order.TwoMergeOrderItemRandomCommon"
local TwoMergeOrderItemFix = require "Game.TwoMerge.Order.TwoMergeOrderItemFix"

local OrderType = {     -- 订单类型
    Main = 1,           -- 主线订单
    Sub = 2,            -- 支线订单
    Position = 3,       -- 固定位置订单
    RandomSimple = 4,   -- 简单随机
    RandomCommon = 5,   -- 正常随机
    Fix = 6,            -- 固定订单
}

function TwoMergeOrderManager:Init() end
function TwoMergeOrderManager:Destroy() end

function TwoMergeOrderManager:Enter()
    if self.timer == nil then
        self.timer = WaitExtension.InvokeRepeating(function() self:Tick() end, 1, 1)
    end
end
function TwoMergeOrderManager:Exit()
    if self.timer ~= nil then
        WaitExtension.CancelTimeout(self.timer); self.timer = nil
    end
    if self.orderbases ~= nil then
        for _, base in pairs(self.orderbases) do base:Destroy() end
            self.orderbases = nil
    end
end

function TwoMergeOrderManager:InitOrder()
    self.mapId = AppServices.TwoMergeManager:GetMapId()

    self.orderNeedMap = {} -- 订单需要的物品集合

    self.orderList = {} -- 所有订单
    self.mainConfigs, self.subConfigs, self.positionConfigs = {}, {}, {}
    self:GetOrderCfg()

    if self.orderbases == nil then
        self.orderbases = {}

        -- 主线订单
        self.order_main = TwoMergeOrderMain.new(self.mapId, self.mainConfigs); table.insert(self.orderbases, self.order_main)
        -- 支线订单
        self.order_sub = TwoMergeOrderSub.new(self.mapId, self.subConfigs); table.insert(self.orderbases, self.order_sub)
        -- 固定位置订单
        self.order_position = TwoMergeOrderPosition.new(self.mapId, self.positionConfigs); table.insert(self.orderbases, self.order_position)
        -- 简单随机订单
        self.random_simple = TwoMergeOrderItemRandomSimple.new(self.mapId); table.insert(self.orderbases, self.random_simple)
        -- 正常随机订单
        self.random_common = TwoMergeOrderItemRandomCommon.new(self.mapId); table.insert(self.orderbases, self.random_common)
        -- 固定订单
        self.order_fix = TwoMergeOrderItemFix.new(self.mapId); table.insert(self.orderbases, self.order_fix)
    end

    self:RefreshOrders()
    self:Tick()

    self:CalculateAllOrderComplete()
end

function TwoMergeOrderManager:RefreshOrders() for _, base in pairs(self.orderbases) do base:Refresh() end end

function TwoMergeOrderManager:Tick()
    if self.orderbases == nil then return end

    for _, base in pairs(self.orderbases) do base:Tick() end

    local addorders = {}
    for _, base in pairs(self.orderbases) do
        if base:IsDirty() then
            local orders = base:GetOrders()
            for _, v in pairs(orders) do
                if not self:HasOrder(v.id) then
                    table.insert(addorders, v)
                end
            end
            base:ClearDirty()
        end
    end
    if #addorders > 0 then
        self:AddOrders(addorders)
    end
end

function TwoMergeOrderManager:GetOrderCfg()
    local mapId = AppServices.TwoMergeManager:GetMapId()

    local cfgs = AppServices.Meta:Category("MergeTwoOrderTemplate")
    for _, cfg in pairs(cfgs) do
        if cfg.activityId == mapId then
            self:CheckOrderCfg(mapId, cfg)
        end
    end
end

function TwoMergeOrderManager:CheckOrderCfg(mapId, cfg)

    if cfg.type == OrderType.Main then
        table.insert(self.mainConfigs, cfg)
    elseif cfg.type == OrderType.Sub then
        if not AppServices.TwoMergeManager:OrderGet(mapId, cfg.id, TwoMergeConfig.OrderType.Sub) then
            table.insert(self.subConfigs, cfg)
        end
    elseif cfg.type == OrderType.Position then
        self.positionConfigs[cfg.id] = cfg
    end
end

function TwoMergeOrderManager:GetOrderList() return self.orderList end
function TwoMergeOrderManager:GetOrderCount()
    if self.orderList ~= nil then return #self.orderList end
    return 0
end

function TwoMergeOrderManager:RemoveOrder(id)
    for index, order in ipairs(self.orderList) do
        if order.id == id then
            table.remove(self.orderList, index)
            self:OnFinishOrder(order)
            break
        end
    end
end

function TwoMergeOrderManager:OnFinishOrder(orderData)
    for _, base in pairs(self.orderbases) do base:OnFinishOrder(orderData) end
end

function TwoMergeOrderManager:CalculateAllOrderComplete()
    if not self.orderList then
        return
    end

    self.orderNeedMap = {}
    for _, order in pairs(self.orderList) do
        self:CalculateOrderComplete(order)
    end
end

function TwoMergeOrderManager:CalculateOrderComplete(orderData)
    local complete = true
    local havecounts = {}
    for _, need in pairs(orderData.itemNeedList) do
        if not havecounts[need.itemId] then
            local mapId = AppServices.TwoMergeManager:GetMapId()
            local hasCount = AppServices.TwoMergeManager:GetItemCount(mapId, need.itemId)
            havecounts[need.itemId] = hasCount -- 拥有个数
        end

        self.orderNeedMap[need.itemId] = true
        need.complete = (havecounts[need.itemId] >= need.count)
        if need.complete then
            havecounts[need.itemId] = havecounts[need.itemId] - need.count
        else
            complete = false
        end
    end
    if (orderData.complete ~= complete) then
        self:SetStateChange(true)
    end
    orderData.complete = complete
end

function TwoMergeOrderManager:SetStateChange(value)
    self.stateChange = value
end

function TwoMergeOrderManager:IsStateChange()
    return self.stateChange
end

--- 道具是否订单需要的
function TwoMergeOrderManager:IsOrderNeedItem(itmeId)
    if self.orderList ~= nil then
        for _, order in pairs(self.orderList) do
            if order.needMap[itmeId] then
                return true
            end
        end
    end
    return false
end

function TwoMergeOrderManager:GetAllNeedLinkDic()
    local linkDic = {}
    local allneedmap = self:GetAllNeedItem()
    local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    for itemId, _ in pairs(allneedmap) do
        if itemConfig[itemId] then
            local linkId = itemConfig[itemId].groupId
            linkDic[linkId] = true
        end
    end
    return linkDic
end

function TwoMergeOrderManager:GetAllNeedItem()
    local map = {}
    if self.orderList ~= nil then
        return self.orderNeedMap
    end
    return map
end

function TwoMergeOrderManager:HasMainOrder()
    if not self.orderList then
        return false, nil
    end
    for _, order in pairs(self.orderList) do
        if order.orderType == TwoMergeConfig.OrderType.Main then
            return true, order
        end
    end
    return false, nil
end

function TwoMergeOrderManager:IsCompleteOrderMain()
    local result, order = self:HasMainOrder()
    if (not result) then
        return
    end

    return order.complete, order.taskId
end

function TwoMergeOrderManager:IsCompleteOrder(orderType, orderId)
    if orderType == TwoMergeConfig.OrderType.Fix then
        for _, order in pairs(self.orderList) do
            if order.complete and order.orderType == TwoMergeConfig.OrderType.Fix and order.id == orderId then
                return true, order
            end
        end
    end
end

function TwoMergeOrderManager:AddOrders(orders)
    for _, order in pairs(orders) do
        table.insert(self.orderList, order)
    end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Order_Add, orders)
end

--- 是否有订单
function TwoMergeOrderManager:HasOrder(orderId)
    for _, order in pairs(self.orderList) do
        if order.id == orderId then
            return true
        end
    end
    return false
end

function TwoMergeOrderManager:LogOrder()
    if self.orderList ~= nil then
        -- local str = "二合订单:  "..console.GetTableStr(self.orderList)
        -- console.print(">>>  my  "..str)
        local str2 = "列表  "
        for _, v in pairs(self.orderList) do
            str2 = str2..v.id..", difficult:"..tostring(v.difficult)..";   "
        end
        console.print(">>>  my  "..str2)
    else
        console.print(">>>  my  订单列表为空")
    end
end

return TwoMergeOrderManager