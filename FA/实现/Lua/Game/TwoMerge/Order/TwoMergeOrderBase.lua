local TwoMergeOrderBase = class(nil, "TwoMergeOrderBase")

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

function TwoMergeOrderBase:ctor() -- 构造
    self:_AddListener()
end
function TwoMergeOrderBase:Destroy() -- 销毁
    self:_RemoveListener()
end

function TwoMergeOrderBase:_AddListener() self:AddListener() end
function TwoMergeOrderBase:AddListener() end
function TwoMergeOrderBase:_RemoveListener() self:RemoveListener() end
function TwoMergeOrderBase:RemoveListener() end

function TwoMergeOrderBase:Tick() end -- 每秒执行
function TwoMergeOrderBase:Refresh() end -- 刷新订单列表
function TwoMergeOrderBase:OnFinishOrder(orderData) end -- 有订单完成
function TwoMergeOrderBase:GetOrders() -- 获取该类型所有订单
    return self.opens or {}
end
function TwoMergeOrderBase:SetDirty() self.dirty = true end
function TwoMergeOrderBase:IsDirty() return self.dirty end
function TwoMergeOrderBase:ClearDirty() self.dirty = false end


return TwoMergeOrderBase