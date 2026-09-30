---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type TwoMergeOrderItem
local TwoMergeOrderItem = require "UI.TwoMergePanel.View.UI.Order.TwoMergeOrderItem"

---@type TwoMergeSubOrderAnimation
local TwoMergeSubOrderAnimation = require "UI.TwoMergePanel.View.UI.Order.TwoMergeSubOrderAnimation"

---@type TwoMergeOrderItemPosition
local TwoMergeOrderItemPosition = require "UI.TwoMergePanel.View.UI.Order.TwoMergeOrderItemPosition"

---@class TwoMergeOrderInfo
local TwoMergeOrderInfo = {}

function TwoMergeOrderInfo:Init(root, mapId)
    self:AddListener()
    self.mapId = mapId
    self.root = root

    self.itemParent = find_component(self.root, "ScrollView/Viewport/Content")
    self.contentRect = find_component(self.itemParent, "", RectTransform)
    self.item_main = find_component(self.itemParent, "item_main")
    self.item_main:SetActive(false)
    self.item_sub = find_component(self.itemParent, "item_sub")
    self.item_sub:SetActive(false)

    self.empty = find_component(self.root, "empty")
    self.btn_go = find_component(self.root, "empty/btn_go")
    Util.UGUI_AddButtonListener(self.btn_go, function() self:OnClickGo() end)

    self.flyRect = find_component(self.root, "fly", RectTransform)
    self.fly_icon = find_component(self.root, "fly/fly_icon")
    -- 手指弱引导
    self.tutorialtip = find_component(self.root, "empty/tutorialtip")
    self.tutorialtip:SetActive(false)

    TwoMergeSubOrderAnimation:SetGo(self.flyRect, self.fly_icon)
    TwoMergeOrderItemPosition:Init(self, self.contentRect, self.item_main)

    self:CreateAllOrder()
end

function TwoMergeOrderInfo:CreateAllOrder()
    local orderList = AppServices.TwoMergeOrderManager:GetOrderList()
    self.itemList = {}
    for _, orderData in ipairs(orderList) do
        self:CreateOrder(orderData)
    end
end

function TwoMergeOrderInfo:CreateOrder(orderData)
    -- 目前所有支线订单都用 self.item_sub
    local cloneGo = (orderData.orderType == TwoMergeConfig.OrderType.Main) and self.item_main or self.item_sub
    local go = self:Clone(cloneGo, self.itemParent)

    local orderItem = TwoMergeOrderItem.new(go, orderData, self)

    table.insert(self.itemList, orderItem)
    orderItem:Init(#self.itemList - 1)
end

function TwoMergeOrderInfo:Refresh(isInit, isRemoveOrder)
    if not Runtime.CSValid(self.root) then
        return
    end
    AppServices.TwoMergeOrderManager:CalculateAllOrderComplete()
    self:RefreshEmpty()

    if isInit then
        self:ReCalculatePosition(isInit)
        return
    end

    for _, orderItem in pairs(self.itemList) do
        orderItem:Refresh()
    end

    local hasStateChange = AppServices.TwoMergeOrderManager:IsStateChange()
    if hasStateChange or isRemoveOrder then
        AppServices.TwoMergeOrderManager:SetStateChange(false)
        self:ReCalculatePosition(isInit)
    end
end

function TwoMergeOrderInfo:GetOrderInfo()
    return self.itemList
end

--- 提交主线订单
function TwoMergeOrderInfo:SubOrderMain(orderData)
    PanelManager.closePanel(GlobalPanelEnum.TwoMergePanel)
    local agent = SceneServices.ObjectManager:GetAgent(orderData.agentId)
    local mapId = AppServices.TwoMergeManager:MapId()
    local orderId = orderData.id
    local taskId = orderData.condition
    local rewardList = orderData.rewardList
    local callBack = function()
        self:SendOrderMain(orderData)
        DcDelegates:TDLog(SDK_EVENT.complete_merge_order, {
            activity_id = mapId,
            merge_order_id = orderId,
            task_id = taskId,
            merge_order_type = 1 -- 1 主线订单 2支线订单
        })
        for _, v in pairs(rewardList) do
            DcDelegates:TDLog(SDK_EVENT.report_item_merge, {
                activity_id = mapId,
                change_type = 1, -- 1增加  -1减少
                report_item_id = v.itemId,
                change_method = ItemGetMethod.TwoMergeOrderComplete,
                change_num = v.count,
            })
        end
    end
    AppServices.Jump.FocusAgent(agent, callBack)
end

function TwoMergeOrderInfo:SendOrderMain(orderData)
    local function onFinished(ret)
        if not ret then
            return
        end
        self:RemoveOrder(orderData)
        self:ReCalculatePosition(false)
    end
    AppServices.BuildingRepair:LevelUp(orderData.agentId, orderData.templateId, onFinished)
end

--- 提交支线订单
---@param twoMergeOrderItem TwoMergeOrderItem
function TwoMergeOrderInfo:SubOrderSub(orderData, twoMergeOrderItem)
    local mapId = AppServices.TwoMergeManager:MapId()

    local rewardList = orderData.rewardList
    local flyDataList = {}
    local animationDataCB = function(usePositions, useQueues, gridInfos, waitItems)
        for _, positionId in pairs(usePositions) do
            local row, col = TwoMergeConfig.Decode(positionId)
            local article =  AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
            if article then
                local rect = article:GetRect()
                local data = {
                    row = row,
                    col = col,
                    itemId = article:GetItemId(),
                    fromUIPosition = rect.position
                }
                table.insert(flyDataList, data)
            end
        end
    end

    --- grids: 用到的位置
    local callBack = function(result, grids, gridInfos, waitItems)
        self:OrderSubmitFinish(twoMergeOrderItem, orderData, result, grids, flyDataList, waitItems)

        for _, v in pairs(rewardList) do
            DcDelegates:TDLog(SDK_EVENT.report_item_merge, {
                activity_id = mapId,
                change_type = 1, -- 1增加  -1减少
                report_item_id = v.itemId,
                change_method = ItemGetMethod.TwoMergeOrderComplete,
                change_num = v.count,
            })
        end
    end

    local endtime = 0
    if orderData.orderType == TwoMergeConfig.OrderType.RandomCommon then
        local commonbase = AppServices.TwoMergeOrderManager.random_common
        endtime = commonbase:GetCDEndTime(commonbase:GetCurrentCountReduceOne()) -- 把下次添加订单的时间戳发送给服务器
    end
    -- GameUtil.BlockAll(2, "twomerge_orderani")
    AppServices.TwoMergeManager:OrderSubmit(mapId, orderData.id, orderData.orderType, endtime, orderData.itemNeedList, callBack, animationDataCB)
end

---@param twoMergeOrderItem TwoMergeOrderItem
function TwoMergeOrderInfo:OrderSubmitFinish(twoMergeOrderItem, orderData, result, grids, flyDataList, waitItems)
    if (not result) then
        return
    end
    local mapId = AppServices.TwoMergeManager:MapId()
    -- AppServices.TwoMergeOrderManager:RemoveOrder(orderData.id)

    local finishCB = function()
        local orderId = orderData.id
        self:RemoveOrder(orderData)
        DcDelegates:TDLog(SDK_EVENT.complete_merge_order, {
            activity_id = mapId,
            merge_order_id = orderId,
            task_id = "",
            merge_order_type = 2 -- 1 主线订单 2支线订单
        })
    end
    twoMergeOrderItem:DoAnimation(flyDataList, waitItems, finishCB)

    WaitExtension.SetTimeout(function()
        twoMergeOrderItem:FlyReward()
    end, 0.5)
end

--- grids: 用到的位置
function TwoMergeOrderInfo:RemoveOrder(orderData)
    for index, order in ipairs(self.itemList) do
        local orderId = order:GetOrderId()
        if orderId == orderData.id then
            order:DOComplete()
            table.remove(self.itemList, index)
            break
        end
    end
    AppServices.TwoMergeOrderManager:RemoveOrder(orderData.id)

    local isRemoveOrder = true
    self:Refresh(false, isRemoveOrder)
end

function TwoMergeOrderInfo:GetMainOrder()
    for _, order in ipairs(self.itemList) do
        local orderType = order:GetOrderType()
        if orderType == TwoMergeConfig.OrderType.Main then
            return order
        end
    end
    return nil
end

function TwoMergeOrderInfo:GetCompleteOrder_Fix()
    for _, order in ipairs(self.itemList) do
        local orderType = order:GetOrderType()
        if orderType == TwoMergeConfig.OrderType.Fix then
            return order
        end
    end
    return nil
end

function TwoMergeOrderInfo:GetOrderButtonComplete()
    local orderMain = self:GetMainOrder()
    return orderMain:GetButtonComplete()
end
function TwoMergeOrderInfo:Tutorial_GetOrderButtonCompleteFix()
    local order = self:GetCompleteOrder_Fix()
    return order:GetButtonComplete()
end

function TwoMergeOrderInfo:OnClickGo()
    PanelManager.closePanel(GlobalPanelEnum.TwoMergePanel)
    local taskIdList = AppServices.TaskIconButtonLogic:GetTaskList()
    for _, taskId in pairs(taskIdList) do
        local subMissionCfg = self:GetSubMission(taskId)
        if subMissionCfg then
            AppServices.Jump.AutoBySubMission(taskId, 1, {key = nil, noTip = nil})
            break
        end
    end
end

function TwoMergeOrderInfo:RefreshEmpty()
    local showEmpty = (#self.itemList <= 0)
    self.empty:SetActive(showEmpty)
    --- 弱引导
    -- if showEmpty then
    --     local key = "twomerge_tutorial_emptyorder"..tostring(self.mapId)
    --     local empty_tip = AppServices.User.Default:GetKeyValue(key, 0)
    --     if empty_tip == 0 then
    --         AppServices.User.Default:SetKeyValue(key, 1,true)
    --         self.tutorialtip:SetActive(true)
    --     end
    -- end
end

function TwoMergeOrderInfo:ReCalculatePosition(isInit)
    --console.error("TwoMergeOrderInfo:ReCalculatePosition()")
    TwoMergeOrderItemPosition:ResetPosition(isInit)
end

function TwoMergeOrderInfo:GetSubMission(taskId)
    local entity = AppServices.Task:GetTaskEntity(taskId)
    if not entity then
        return nil
    end

    if (entity.state == TaskState.locked) or (entity.state == TaskState.submit) then
        return nil
    end

    if AppServices.Task:IsBranch(taskId) then
        return nil
    end

    local sub = entity.subtasks[1]
    local subMissionCfg = sub:GetCfg()
    return subMissionCfg
end

function TwoMergeOrderInfo:GetFlyParent()
    return self.flyRect
end

function TwoMergeOrderInfo:OrderFindArticle(jumpItemId, jumpOrderId, articleGo)
    for _, orderItem in ipairs(self.itemList) do
        if orderItem:GetOrderId() == jumpOrderId then
            orderItem:OrderFindArticle(jumpItemId, articleGo)
            break
        end
    end
end

function TwoMergeOrderInfo:Clone(child, parent)
    local go = GameObject.Instantiate(child)
    go:SetParent(parent.transform, false)
    go.transform:SetLocalPosition(Vector3.zero)
    go.transform:SetLocalEulerAngle(0, 0, 0)
    go.transform:SetLocalScale(Vector3.one)
    go:SetActive(true)
    return go
end

function TwoMergeOrderInfo:Msg_TwoMerge_Article_Add()
    self:Refresh()
end

function TwoMergeOrderInfo:Msg_TwoMerge_Article_Delete()
    self:Refresh()
end

function TwoMergeOrderInfo:Msg_TwoMerge_Info_Refresh()
    self:Refresh()
end

function TwoMergeOrderInfo:Msg_TwoMerge_Article_StateChanged()
    self:Refresh()
end

function TwoMergeOrderInfo:Task_TaskList_Refresh()
    local result, orderMain = AppServices.TwoMergeOrderManager:HasMainOrder()
    if result then
        return
    end

    AppServices.TwoMergeOrderManager:InitOrder()
    result, orderMain = AppServices.TwoMergeOrderManager:HasMainOrder()
    if result then
        self:CreateOrder(orderMain)
        self:Refresh(true)
    end
end

function TwoMergeOrderInfo:OnOrderAdd(orders)
    for _, orderData in pairs(orders) do
        self:CreateOrder(orderData)
    end
    self:Refresh(false)
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_RefreshOrderMark)
end

function TwoMergeOrderInfo:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Add, self.Msg_TwoMerge_Article_Add, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Delete, self.Msg_TwoMerge_Article_Delete, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Info_Refresh, self.Msg_TwoMerge_Info_Refresh, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_StateChanged, self.Msg_TwoMerge_Article_StateChanged, self)
    MessageDispatcher:AddMessageListener(MessageType.Task_TaskList_Refresh, self.Task_TaskList_Refresh, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Order_Add, self.OnOrderAdd, self)
end

function TwoMergeOrderInfo:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Add, self.Msg_TwoMerge_Article_Add, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Delete, self.Msg_TwoMerge_Article_Delete, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Info_Refresh, self.Msg_TwoMerge_Info_Refresh, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_StateChanged, self.Msg_TwoMerge_Article_StateChanged, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Task_TaskList_Refresh, self.Task_TaskList_Refresh, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Order_Add, self.OnOrderAdd, self)
end

function TwoMergeOrderInfo:Destroy()
    self:RemoveListener()
    TwoMergeOrderItemPosition:Destroy()
end

return TwoMergeOrderInfo