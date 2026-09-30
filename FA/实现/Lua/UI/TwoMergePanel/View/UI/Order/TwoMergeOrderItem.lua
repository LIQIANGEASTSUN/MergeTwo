
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type TwoMergeOrderNeedItem
local TwoMergeOrderNeedItem = require("UI.TwoMergePanel.View.UI.Order.TwoMergeOrderNeedItem")

---@type TwoMergeSubOrderAnimation
local TwoMergeSubOrderAnimation = require "UI.TwoMergePanel.View.UI.Order.TwoMergeSubOrderAnimation"

---@type TwoMergeOrderItemPosition
local TwoMergeOrderItemPosition = require "UI.TwoMergePanel.View.UI.Order.TwoMergeOrderItemPosition"

---@class TwoMergeOrderItem
local TwoMergeOrderItem = class(nil, "TwoMergeOrderItem")
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")

---@param twoMergeOrderInfo TwoMergeOrderInfo
function TwoMergeOrderItem:ctor(gameObject, orderData, twoMergeOrderInfo)
    self.gameObject = gameObject
    self.orderData = orderData
    self.twoMergeOrderInfo = twoMergeOrderInfo

    self.transform = gameObject.transform

    self.itemRect = find_component(self.gameObject, "", RectTransform)
    self.head = find_component(self.gameObject, "bg/head", Image)

    self.rewardParent = find_component(self.gameObject, "reward")
    self.rewardItem = find_component(self.gameObject, "reward/item")

    self.needParent = find_component(self.gameObject, "need")
    self.needItem = find_component(self.gameObject, "need/item")

    self.complete = find_component(self.gameObject, "complete")
    self.btn_complete = find_component(self.gameObject, "btn_complete")
    self.gmlabel = find_component(self.gameObject, "gmlabel", Text)
    Util.UGUI_AddButtonListener(self.btn_complete, function()
        self:CompleteOnClick()
    end)

    self.needList = {}
    self.rwwardMap = {}
end

function TwoMergeOrderItem:Init(index)
    self:SetAnchoredPosition(TwoMergeOrderItemPosition:CalculatePosition(index))
    for _, reward in ipairs(self.orderData.rewardList) do
        local item = self.twoMergeOrderInfo:Clone(self.rewardItem, self.rewardParent)
        local icon = find_component(item, "icon", Image)
        local text_count = find_component(item, "text_count", Text)

        icon.sprite = AppServices.ItemIcons:GetSprite(reward.itemId)
        -- icon.sprite = ItemId:GetIconSprite(TwoMergeItemBigType, reward.itemId)
        text_count.text = "x"..reward.count
        self.rwwardMap[reward.itemId] = item
    end

    for _, need in ipairs(self.orderData.itemNeedList) do
        local itemGo = self.twoMergeOrderInfo:Clone(self.needItem, self.needParent)
        local needItem = TwoMergeOrderNeedItem.new(itemGo, self, need, self:GetOrderId())
        table.insert(self.needList, needItem)
    end
    self:Refresh()
end

function TwoMergeOrderItem:SetAnchoredPosition(anchoredPosition)
    self.itemRect.anchoredPosition = anchoredPosition
end

function TwoMergeOrderItem:GetOrderId()
    return self.orderData.id
end

function TwoMergeOrderItem:GetOrderType()
    return self.orderData.orderType
end

function TwoMergeOrderItem:CompleteOnClick()
    if TutorialLogic.IsRunning() then return end
    TwoMergeOrderItemPosition:Lock()
    self.isDoingCompleteAni = true
    if self.orderData.orderType == TwoMergeConfig.OrderType.Main then
        self:FlyMainOrder(self.orderData)
    else
        self.twoMergeOrderInfo:SubOrderSub(self.orderData, self)
    end
end

function TwoMergeOrderItem:Refresh()
    for _, needItem in ipairs(self.needList) do
        needItem:Refresh()
    end

    self.btn_complete:SetActive(self.orderData.complete)
    if GlobalState.TwoMerge_Order_ShowInfo_Get() then
        self.gmlabel.text = self.orderData.id..","..tostring(self.orderData.difficult)
    end
end

function TwoMergeOrderItem:IsComplete() return self.orderData.complete or false end
function TwoMergeOrderItem:GetButtonComplete() return self.btn_complete end

--- grids: 用到的位置
function TwoMergeOrderItem:DOComplete()
    -- if Runtime.CSValid(self.gameObject) then
    --     self.gameObject.transform:DOScale(0, 1):OnComplete(function()
    --         GameObject.Destroy(self.gameObject, 1.1)
    --     end)
    -- end
    self:Destroy()
end

function TwoMergeOrderItem:GetGameObject()
    return self.gameObject
end

function TwoMergeOrderItem:GetTransform()
    return self.transform
end

function TwoMergeOrderItem:GetComplete()
    return self.complete
end

function TwoMergeOrderItem:GetBtnComplete()
    return self.btn_complete
end

function TwoMergeOrderItem:GetNeedList()
    return self.needList
end

function TwoMergeOrderItem:IsDoingCompleteAni() return self.isDoingCompleteAni end

function TwoMergeOrderItem:FlyMainOrder(orderData)
    local usePositions, _, _, waitItems = TwoMergeSubOrderAnimation:GetMainOrderCost(orderData.agentId, orderData.templateId)

    local flyDataList = {}
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

    local finishCB = function()
        self.twoMergeOrderInfo:SubOrderMain(self.orderData)
    end
    self:DoAnimation(flyDataList, waitItems, finishCB)
end

function TwoMergeOrderItem:DoAnimation(flyDataList, waitItems, finishCB)
    self.btn_complete:SetActive(false)
    local finish = function()
        Runtime.InvokeCbk(finishCB)
        TwoMergeOrderItemPosition:UnLock()
        TwoMergeOrderItemPosition:ResetPosition()
    end
    TwoMergeSubOrderAnimation:DoAnimation(self, flyDataList, waitItems, finish)
end

function TwoMergeOrderItem:FlyReward()
    for _, reward in ipairs(self.orderData.rewardList) do
        self:FlyRewardItem(reward)
    end
end

function TwoMergeOrderItem:FlyRewardItem(reward)
    local destObject = self:GetFlyDest(reward.itemId)
    if not Runtime.CSValid(destObject) then
        return
    end

    local flyFromGo = self.rwwardMap[reward.itemId]
    local finish = function()
        AppServices.User:AddItem(tostring(reward.itemId), reward.count)
    end
    AppServices.FlyAnimation.FlyItemFromUiToUi(reward.itemId, flyFromGo, destObject, 0.5, nil, Vector2(45, 45), finish)
end

function TwoMergeOrderItem:GetFlyDest(itemId)
    local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
    if not panel then
        return nil
    end

    if itemId == ItemId.ENERGY then
        return panel.energyItem
    end
    if itemId == ItemId.ContinuousGiftCoinTwoMerge then
        return panel.gift
    end

    local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[AppServices.TwoMergeManager:MapId()]
    if config ~= nil and itemId == tostring(config.default_use_BP) then
        return panel.TwoMergeBpEntrance
    end
    return panel.btn_close
end

local effectPath = "Prefab/ScreenPlays/DragonEffect/E_tuowei_zhaowupin.prefab"
--- 图鉴查找飞特效
function TwoMergeOrderItem:OrderFindArticle(jumpItemId, articleGo)
    local fromGo
    for _, item in ipairs(self.needList) do
        local itemId, go = item:GetInfo()
        if itemId == jumpItemId then
            fromGo = go
            break
        end
    end

    if not Runtime.CSValid(fromGo) then
        return
    end

    local function playEffect()
        local go = BResource.InstantiateFromAssetName(effectPath)
        go:SetParent(App.scene.panelLayer, false)

        local goRect = find_component(go, "", RectTransform)
        local parentRect = find_component(App.scene.panelLayer, "", RectTransform)
        goRect.anchoredPosition = GameUtil.UIToUISpaceAnchoredPosition(parentRect, fromGo.transform.position)
        AppServices.FlyAnimation.FlyEffect(go, articleGo, nil, 0.6)
    end
    App.uiAssetsManager:LoadAssets({effectPath}, playEffect)
end

function TwoMergeOrderItem:SetActive(active)
    self.gameObject:SetActive(active)
end

function TwoMergeOrderItem:Destroy()
    if Runtime.CSValid(self.gameObject) then
        GameObject.Destroy(self.gameObject)
    end
end

return TwoMergeOrderItem