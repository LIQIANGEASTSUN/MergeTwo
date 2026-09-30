local TwoMergeOrderItemRandomCommon = class(require("Game.TwoMerge.Order.TwoMergeOrderBase"), "TwoMergeOrderItemRandomCommon")
local TwoMergeOrderLogic = require("Game.TwoMerge.Order.TwoMergeOrderLogic")
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")
function TwoMergeOrderItemRandomCommon:ctor(mapId)
    self.mapId = mapId
    self.isunlock = false
    self.unlockFixOrderId = MergeConfigUtil.GetUnlockCondition_RandomOrder(self.mapId)
    self.opens = {}
    local orderInfo = AppServices.TwoMergeManager:GetDefineOrderInfo(self.mapId)
    self.last_refresh_timestamp = orderInfo.difficultEnd

    self.maxcount = 4

    self.pos_dif = {}
    self.dif_pos = {}
    -- id 与 难度绑定 (下标1-4 难度2-5)
    for i = 1, self.maxcount, 1 do
        local difficult = i + 1
        local orderId = tostring(TwoMergeConfig.OrderRandomCommonStartId + i)
        self.pos_dif[orderId] = difficult
        self.dif_pos[difficult] = orderId
    end

end

function TwoMergeOrderItemRandomCommon:Refresh()
    if not self:IsUnlock() then return end

    local orderInfo = AppServices.TwoMergeManager:GetDefineOrderInfo(self.mapId)
    self.last_refresh_timestamp = orderInfo.difficultEnd

    local list = AppServices.TwoMergeManager:GetDefineOrder(self.mapId, TwoMergeConfig.OrderType.RandomCommon)
    self.opens = {}
    for _, v in pairs(list) do
        local itemNeedList, needMap = {}, {}
        for _, item in pairs(v.orderItems) do
            if item.itemId then
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
            orderType = TwoMergeConfig.OrderType.RandomCommon,
            needMap = needMap,
            rewardList = MergeConfigUtil.GetDefineOrderRewards(itemNeedList),
            cfg = { priority = tonumber(v.orderId), } -- 拼一个排序字段
        })
    end
    self:SetDirty()
end

function TwoMergeOrderItemRandomCommon:Tick()
    if not self:IsUnlock() then return end
    if self.last_refresh_timestamp == nil then return end

    self:CheckRefresh() -- 检测刷新
    --- 检查刷新时间  符合条件刷一个
    local now = TimeUtil.ServerTime()
    if now >= self.last_refresh_timestamp and #self.opens < self.maxcount then
        self:TryAddOrder()
    end
end
function TwoMergeOrderItemRandomCommon:TryAddOrder()
    local orderId, difficult = self:GetDifficultByCount()
    local endtime = self:GetCDEndTime(self:GetCurrentCount())
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
    self.last_refresh_timestamp = endtime -- 防止多次调用
    AppServices.TwoMergeManager:TwoMergeRandomOrderRequest(self.mapId, orderInfo, endtime, false, function(success)
        if success then
            self.refresh_dirty = true
            self.last_refresh_timestamp = endtime
        end
    end)
end

function TwoMergeOrderItemRandomCommon:GetCurrentCount() return #self.opens end
function TwoMergeOrderItemRandomCommon:GetCurrentCountReduceOne()
    local result = #self.opens - 1
    if result < 0 then result = 0 end
    return result
end
function TwoMergeOrderItemRandomCommon:GetCDEndTime(curcount)
    -- 对应Config表:  当前0个:order_normal_time1  1个:order_normal_time2  2个order_normal_time3  3个:order_normal_time4
    local result = AppServices.Meta:GetConfigMetaValue("order_normal_time"..tostring(curcount + 1)) -- 周期cd
    result = table.deserialize(result)
    local cd = LuaGameUtil.random(result[1], result[2])
    local endtime = TimeUtil.ServerTime() + cd
    endtime = math.floor(endtime)
    return endtime
end

--- 返回  orderId, 难度
function TwoMergeOrderItemRandomCommon:GetDifficultByCount()
    --- 没有2级难度的  必定刷新出2级难度的
    local difficult2_OrderId = self.dif_pos[2] -- 难度2的订单Id
    local hasDif2 = false
    for _, v in pairs(self.opens) do
        if v.id == difficult2_OrderId then
            hasDif2 = true; break
        end
    end

    if not hasDif2 then
        return difficult2_OrderId, 2
    else
        local hasDic = {}
        for _, v in pairs(self.opens) do
            hasDic[v.id] = true
        end
        local idlist, weightlist = {}, {}
        for orderId, difficult in pairs(self.pos_dif) do
            if not hasDic[orderId] then
                table.insert(idlist, orderId)
                table.insert(weightlist, 1)
            end
        end
        local ids = LuaGameUtil.getRandomList(idlist, weightlist, 1, false)
        local id = ids[1]
        return id, self.pos_dif[id]
    end
end

function TwoMergeOrderItemRandomCommon:OnFinishOrder(orderData)
    if orderData.orderType == TwoMergeConfig.OrderType.RandomCommon then
        self.refresh_dirty = true
    elseif orderData.orderType == TwoMergeConfig.OrderType.Fix then
        if self.unlockFixOrderId == orderData.id then
            self.refresh_dirty = true
        end
    end

    if self:IsUnlock() then
        local ordercount = AppServices.TwoMergeOrderManager:GetOrderCount()
        if ordercount == 0 then
            self:TryAddOrder()
        end
    end
end

function TwoMergeOrderItemRandomCommon:CheckRefresh()
    if self.refresh_dirty then
        self.refresh_dirty = false
        self:Refresh()
    end
end
--- 是否解锁
function TwoMergeOrderItemRandomCommon:IsUnlock()
    if not self.isunlock then
        self.isunlock = string.isEmpty(self.unlockFixOrderId) or AppServices.TwoMergeManager:OrderGet(self.mapId, self.unlockFixOrderId, TwoMergeConfig.OrderType.Fix)
    end
    return self.isunlock
end

return TwoMergeOrderItemRandomCommon