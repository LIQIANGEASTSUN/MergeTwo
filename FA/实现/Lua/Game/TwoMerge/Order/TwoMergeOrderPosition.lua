---完成所有主线任务后 才会出现
local TwoMergeOrderPosition = class(require("Game.TwoMerge.Order.TwoMergeOrderBase"), "TwoMergeOrderPosition") 

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

function TwoMergeOrderPosition:ctor(mapId, configs)
    self.mapId = mapId
    self.configs = configs

    self.opens = {}
    self._openTask = nil
    self._nearestTimeStamp = 0 -- 最近一次cd冷却结束时间戳

    self._alllist = {} -- key: position    value: id, index, isFinish
    for _, v in pairs(self.configs) do
        self._alllist[v.condition] = self._alllist[v.condition] or {}
        table.insert(self._alllist[v.condition], {
            id = v.id,
            index = tonumber(v.id),
        })
    end
    -- 排序
    for _, list in pairs(self._alllist) do
        table.sort(list, function(a, b) return a.index < b.index end)
    end
end

--- Manager获取订单列表
function TwoMergeOrderPosition:Refresh()
    self.isOpen = self:IsOpen()
    if not self.isOpen then return end

    self.opens = self:GetNextOrders()
    if #self.opens > 0 then
        self:SetDirty()
    end
end

-- 获取需要展示的订单  cd到达
function TwoMergeOrderPosition:GetNextOrders()
    local mapId = AppServices.TwoMergeManager:GetMapId()

    local orders = {}
    local now = TimeUtil.ServerTime()
    self._nearestTimeStamp = -1
    for position, list in pairs(self._alllist) do
        local lastFinishId, cdEndTime = AppServices.TwoMergeManager:GetPositionOrderInfo(mapId, position)
        if now >= cdEndTime then
            local nextId = 0
            if lastFinishId == 0 then
                nextId = list[1].id
            else
                nextId = tostring( tonumber(lastFinishId) + 1 )
                local hasOrder = false
                for _, v in pairs(list) do
                    if v.id == nextId then
                        hasOrder = true
                        break
                    end
                end
                if not hasOrder then
                    nextId = list[1].id
                end
            end
            if not AppServices.TwoMergeOrderManager:HasOrder(nextId) then
                local orderData = self:CreateOrder(self.configs[nextId])
                table.insert(orders, orderData)
            end
        else
            if self._nearestTimeStamp == -1 or cdEndTime < self._nearestTimeStamp then
                self._nearestTimeStamp = cdEndTime
            end
        end
    end
    return orders
end


function TwoMergeOrderPosition:Tick()
    local now = TimeUtil.ServerTime()
    if self._nearestTimeStamp ~= -1 and now >= self._nearestTimeStamp then
        self:Refresh()
    end
end

--- 订单完成 设置本地数据缓存 lastFinishId cdEndTime
function TwoMergeOrderPosition:OnFinishOrder(orderData)
    if orderData.orderType == TwoMergeConfig.OrderType.Position then
        local mapId = AppServices.TwoMergeManager:GetMapId()
        local now = TimeUtil.ServerTime()
        AppServices.TwoMergeManager:SetPositionOrderInfo(mapId, orderData.cfg.condition, orderData.cfg.id, now + orderData.cfg.cd)
        self:Refresh()
    end
end

--- 创建订单数据
function TwoMergeOrderPosition:CreateOrder(cfg)

    local orderData = {}
    orderData.id = cfg.id
    orderData.cfg = cfg
    orderData.orderType = TwoMergeConfig.OrderType.Position
    orderData.itemNeedList = {}
    orderData.needMap = {}
    orderData.complete = false

    for _, item in ipairs(cfg.needMitem) do
        local itemData = {
            itemId = tostring(item[1]),
            count = item[2],
            complete = false,
        }
        orderData.needMap[itemData.itemId] = true
        table.insert(orderData.itemNeedList, itemData)
    end

    orderData.rewardList = {}
    for _, v in ipairs(cfg.reward) do
        local data = {
            itemId = tostring(v[1]),
            count = v[2]
        }
        table.insert(orderData.rewardList, data)
    end

    return orderData
end

-- 该类型订单是否可开启
function TwoMergeOrderPosition:IsOpen()
    local taskId = self:GetOpenTask()
    return AppServices.Task:IsTaskFinish(taskId)
end

-- 该类型订单开启任务
function TwoMergeOrderPosition:GetOpenTask()
    local mapId = AppServices.TwoMergeManager:GetMapId()
    if self._openTask == nil then self._openTask = {} end
    if self._openTask[mapId] == nil then
        local cfgs = AppServices.Meta:Category("MergeTwoOrderTemplate")
        local mainType = TwoMergeConfig.OrderType.Main
        local index, task = -1, ""
        local tempIndex = 0
        for _, v in pairs(cfgs) do
            if v.activityId == mapId and v.type == mainType then
                tempIndex = tonumber(v.id)
                if index == -1 or tempIndex > index then
                    index = tempIndex
                    task = v.condition
                end
            end
        end
        self._openTask[mapId] = task
    end
    return self._openTask[mapId]
end

return TwoMergeOrderPosition