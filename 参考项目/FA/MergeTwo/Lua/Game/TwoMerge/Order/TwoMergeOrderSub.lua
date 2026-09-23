local TwoMergeOrderSub = class(require("Game.TwoMerge.Order.TwoMergeOrderBase"), "TwoMergeOrderSub") 

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

function TwoMergeOrderSub:ctor(mapId, configs)
    self.mapId = mapId
    self.configs = configs
    self.opens = {}
end

function TwoMergeOrderSub:Refresh()
    self.opens = {}
    for _, cfg in pairs(self.configs) do
        local order = self:CheckOrder(cfg)
        if order ~= nil then
            table.insert(self.opens, order)
        end
    end
    self:SetDirty()
end

function TwoMergeOrderSub:CheckOrder(cfg)
    local isFinish = AppServices.Task:IsTaskFinish(cfg.condition)
    if not isFinish then return end
    if AppServices.TwoMergeManager:OrderGet(self.mapId, cfg.id, TwoMergeConfig.OrderType.Sub) then return end

    local orderData = {}
    orderData.id = cfg.id
    orderData.cfg = cfg
    orderData.orderType = TwoMergeConfig.OrderType.Sub
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

return TwoMergeOrderSub