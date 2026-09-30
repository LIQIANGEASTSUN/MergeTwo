---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@class TwoMergeOrderItemPosition
local TwoMergeOrderItemPosition = {}

---@param twoMergeOrderInfo TwoMergeOrderInfo
function TwoMergeOrderItemPosition:Init(twoMergeOrderInfo, contentRect, item_main)
    self.twoMergeOrderInfo = twoMergeOrderInfo
    self.contentRect = contentRect

    local itemRect = find_component(item_main, "", RectTransform)
    local rect = itemRect.rect
    self.itemWidthHalf = rect.width * 0.5
    self.itemHeight = rect.height
    self.itemHeightHalf = rect.height * 0.5
    self.subOrderMaxCount = AppServices.Meta:Category("ConfigTemplate")["merge_order_limit"].value
    self.subOrderMaxCount = tonumber(self.subOrderMaxCount)
    self.space = 3 -- 间距

    self.delayReset = 0.1  -- 延迟 0.1秒 重新排序
    self.resetTime = 0.5   -- 重新排序 时间
    self:StartTimer()
end

--- 锁定，比如提交订单的时候，需要先播放动画，然后再排序
function TwoMergeOrderItemPosition:Lock()
    self.lock = true
end

function TwoMergeOrderItemPosition:UnLock()
    self.lock = false
end

function TwoMergeOrderItemPosition:ResetPosition(isInit)
    if self.lock then
        return
    end

    local itemList = self.twoMergeOrderInfo:GetOrderInfo()

    local acomplete, bcomplete = false, false
    table.sort(itemList, function(a, b)
        if a:GetOrderType() == TwoMergeConfig.OrderType.Main then
            return true
        elseif b:GetOrderType() == TwoMergeConfig.OrderType.Main then
            return false
        end

        acomplete = a:IsComplete()
        bcomplete = b:IsComplete()

        if acomplete and bcomplete  then
            return a.orderData.cfg.priority < b.orderData.cfg.priority
        end

        if acomplete then
            return true
        elseif bcomplete then
            return false
        end

        return a.orderData.cfg.priority < b.orderData.cfg.priority
    end)

    local count = 0
    local siblingIndex = 0
    for index, v in pairs(itemList) do
        v.gameObject.transform:SetSiblingIndex(siblingIndex)
        siblingIndex = siblingIndex + 1
        local show = (index <= self.subOrderMaxCount)
        v:SetActive(show)
        count = count + 1
    end

    WaitExtension.SetTimeout(function()
        self:DelayResetPosition(isInit)
    end, self.delayReset)
end

function TwoMergeOrderItemPosition:DelayResetPosition(isInit)
    if Runtime.CSNull(self.contentRect) then
        return
    end
    local childCount = self.contentRect.transform.childCount

    local showCount = 0
    for index = 1, childCount do
        local childTr = self.contentRect.transform:GetChild(index - 1)
        if childTr.gameObject.activeInHierarchy then
            showCount = showCount + 1
        end

        local childRect = find_component(childTr.gameObject, "", RectTransform)
        local anchoredPos = self:CalculatePosition(showCount - 1)
        if isInit then
            childRect.anchoredPosition = anchoredPos
            childRect.gameObject:SetLocalScale(0, 0, 0)
            GameUtil.DoScale(childRect.gameObject, Vector3(1, 1, 1), 1)
        else
            GameUtil.DoAnchorPos(childRect, anchoredPos, self.resetTime)
        end
    end
    self:ResetContentSize(showCount)
end

function TwoMergeOrderItemPosition:ReCalculateContentSize()
    local showCount = 0
    local childCount = self.contentRect.transform.childCount
    for index = 1, childCount do
        local childTr = self.contentRect.transform:GetChild(index - 1)
        if childTr.gameObject.activeInHierarchy then
            showCount = showCount + 1
        end
    end
    self:ResetContentSize(showCount)
end

function TwoMergeOrderItemPosition:ResetContentSize(showCount)
    local contentHeight = showCount * (self.itemHeight + self.space)
    local sizeDelta = self.contentRect.sizeDelta
    self.contentRect.sizeDelta = Vector2(sizeDelta.x, contentHeight)
end

function TwoMergeOrderItemPosition:CalculatePosition(showCount)
    local x = self.itemWidthHalf
    local y = -1 * self.itemHeightHalf - showCount * (self.itemHeight + self.space)
    return Vector2(x, y)
end

function TwoMergeOrderItemPosition:StartTimer()
    self:StopTimer()
end

function TwoMergeOrderItemPosition:StopTimer()
    if self.timerId then
        WaitExtension.CancelTimeout(self.timerId)
        self.timerId = nil
    end
end

function TwoMergeOrderItemPosition:Destroy()
    self:StopTimer()
    self:UnLock()
end

return TwoMergeOrderItemPosition