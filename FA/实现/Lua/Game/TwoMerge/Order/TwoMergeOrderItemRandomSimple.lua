local TwoMergeOrderItemRandomSimple = class(require("Game.TwoMerge.Order.TwoMergeOrderBase"), "TwoMergeOrderItemRandomSimple")
local TwoMergeOrderLogic = require("Game.TwoMerge.Order.TwoMergeOrderLogic")
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

--- cd内最多4次  同时开启的订单最多2个
function TwoMergeOrderItemRandomSimple:ctor(mapId)
    self.mapId = mapId
    self.isunlock = false -- 是否已解锁
    self.unlockFixOrderId = MergeConfigUtil.GetUnlockCondition_RandomOrder(self.mapId)
    self.refresh_dirty = false

    self.fixtime = AppServices.Meta:GetConfigMetaValueNumber("order_simple_limit") -- 每个周期最大订单数
    self.maxcount = AppServices.Meta:GetConfigMetaValueNumber("order_simple") -- 最多同时拥有的订单数
    self.refresh_cd = AppServices.Meta:GetConfigMetaValueNumber("order_simple_time") -- 周期cd
    self.fixdifficult = 1 -- 固定难度

    -- 固定Id { ["1001"] = true, ["1002"] = true, ... }
    self.posId = {}; for i = 1, self.maxcount, 1 do self.posId[tostring(TwoMergeConfig.OrderRandomSimpleStartId + i)] = true end
end

function TwoMergeOrderItemRandomSimple:Refresh()
    if not self:IsUnlock() then return end

    -- 刷新数据
    local orderInfo = AppServices.TwoMergeManager:GetDefineOrderInfo(self.mapId)
    self.curtime = orderInfo.simpleNum -- 该周期已经显示过的订单个数
    self.last_refresh_timestamp = orderInfo.simpleEnd -- 周期结束时间

    self:RefreshOrder() -- 订单列表
    self:CheckAddOrder() -- 检测添加订单
end
function TwoMergeOrderItemRandomSimple:Tick()
    if not self:IsUnlock() then return end
    self:CheckRefresh() -- 检测刷新

    if self.last_refresh_timestamp == nil then return end
    --- 检查刷新时间  符合条件清空数量
    local now = TimeUtil.ServerTime()
    if now >= self.last_refresh_timestamp then
        local usecount = #self.opens
        local endtime = now + self.refresh_cd
        self.last_refresh_timestamp = endtime -- 防止多次调用
        --- 设置周期结束时间
        AppServices.TwoMergeManager:TwoMergeRandomOrderCDRequest(self.mapId, endtime, function(success)
            if success then
                self.last_refresh_timestamp = endtime
                self.curtime = usecount
                self.refresh_dirty = true
            end
        end)
    end
end
function TwoMergeOrderItemRandomSimple:CheckAddOrder()
    if self.isRequesting then return end
    --- 检查数量 次数足够 & 不足maxcount个补足maxcount个
    if self.curtime < self.fixtime and #self.opens < self.maxcount then

        local remaincount = self.fixtime - self.curtime
        local remainposcount = self.maxcount - #self.opens
        local addcount = remaincount; if addcount > remainposcount then addcount = remainposcount end

        for i = 1, addcount, 1 do
            local difficult = self.fixdifficult
            local orderId = self:GetOrderId()
            if not string.isEmpty(orderId) then
                local success, itemNeedList = TwoMergeOrderLogic.DoRandom(self.mapId, difficult)
                if not success then
                    itemNeedList = TwoMergeOrderLogic.GetDefaultNeedList(self.mapId)
                end

                local orderItems = {}
                for _, v in pairs(itemNeedList) do
                    table.insert(orderItems, {
                        itemId = v.itemId,
                        count = v.count
                    })
                end
                local orderInfo = {
                    orderId = orderId,
                    difficult = difficult,
                    orderItems = orderItems,
                }
                self.isRequesting = true
                AppServices.TwoMergeManager:TwoMergeRandomOrderRequest(self.mapId, orderInfo, 0, true, function(success)
                    if success then
                        self.refresh_dirty = true
                    end
                    self.isRequesting = false
                end)
            end
        end
    end
end
--- 纯刷新当前数据
function TwoMergeOrderItemRandomSimple:RefreshOrder()
    --- 当前的订单
    local list = AppServices.TwoMergeManager:GetDefineOrder(self.mapId, TwoMergeConfig.OrderType.RandomSimple)
    self.opens = {}
    for _, v in pairs(list) do
        local itemNeedList, needMap = {}, {}
        for _, item in pairs(v.orderItems) do
            if item.itemId ~= nil then
                table.insert(itemNeedList, {
                    itemId = item.itemId,
                    count = item.count,
                    complete = false,
                })
                needMap[item.itemId] = true
            end
        end
        table.insert(self.opens, {
            id = v.orderId,
            difficult = v.difficult,
            itemNeedList = itemNeedList,
            orderType = TwoMergeConfig.OrderType.RandomSimple,
            needMap = needMap,
            rewardList = MergeConfigUtil.GetDefineOrderRewards(itemNeedList),
            cfg = { priority = tonumber(v.orderId), } -- 拼一个排序字段
        })
    end
    self:SetDirty()
end

--- 取一个未使用的Id
function TwoMergeOrderItemRandomSimple:GetOrderId()
    local orderId = ""
    local used = {}
    for _, v in pairs(self.opens) do
        used[v.id] = true
    end
    for orderId, _ in pairs(self.posId) do
        if not used[orderId] then
            return orderId
        end
    end
    console.error("error : 简单订单  获取未使用的订单Id失败")
    return orderId
end

--- 是否解锁
function TwoMergeOrderItemRandomSimple:IsUnlock()
    if not self.isunlock then
        self.isunlock = string.isEmpty(self.unlockFixOrderId) or AppServices.TwoMergeManager:OrderGet(self.mapId, self.unlockFixOrderId, TwoMergeConfig.OrderType.Fix)
    end
    return self.isunlock
end

function TwoMergeOrderItemRandomSimple:CheckRefresh()
    if self.refresh_dirty and not self.isRequesting then
        self.refresh_dirty = false
        self:Refresh()
    end
end

function TwoMergeOrderItemRandomSimple:OnFinishOrder(orderData)
    if orderData.orderType == TwoMergeConfig.OrderType.RandomSimple then
        self.refresh_dirty = true
        if self.opens ~= nil then
            local deleteIndex = nil
            for index, v in pairs(self.opens) do
                if v.id == orderData.id then
                    deleteIndex = index; break
                end
            end
            if deleteIndex ~= nil then
                table.remove(self.opens, deleteIndex)
            end
        end
    elseif orderData.orderType == TwoMergeConfig.OrderType.Fix then
        if self.unlockFixOrderId == orderData.id then
            self.refresh_dirty = true
        end
    end
end

return TwoMergeOrderItemRandomSimple