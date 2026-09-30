---@class DetailTip
local DetailTip = require "UI.Bag.BagPanel.View.UI.ItemDetailTip"

---@class BuildingTaskCostItem
local BuildingTaskCostItem = class(nil, "BuildingTaskCostItem")

---@param BuildingTaskPanel
function BuildingTaskCostItem:ctor(go, data, buildingTaskPanel)
    self.levelItem = data.levelItem
    self.agentId = data.agentId
    self.templateId = data.templateId
    self.sceneId = data.sceneId
    self.buildingTaskPanel = buildingTaskPanel
    self.go = go
end

function BuildingTaskCostItem:Refresh()
    local items = self.levelItem

    self.itemBigType, self.itemId, self.total = NormalItemBigType, tostring(items[1]), items[2]
    if items[1] == TwoMergeCfgType then
        self.itemBigType, self.itemId, self.total = TwoMergeItemBigType, tostring(items[2]), items[3]
    end

    local iconCom = find_component(self.go, 'img_taskIcon', Image)
    iconCom.sprite = ItemId:GetIconSprite(self.itemBigType, self.itemId)
    self.cur = ItemId:GetCount(self.itemBigType, self.itemId)
    self.exchangeNum = self.total - self.cur
    local img_done = find_component(self.go, 'img_done', Image)
    self.img_undone = find_component(self.go, 'img_undone', Image)
    local label_progress = find_component(self.go, 'label_progress', Text)
    local label_taskTitle = find_component(self.go, 'label_taskTitle', Text)
    img_done.gameObject:SetActive(self.exchangeNum <= 0)
    self.img_undone.gameObject:SetActive(self.exchangeNum > 0)
    self.btn = find_component(self.go, nil, Button)

    local nameKey = ItemId:GetItemName(self.itemBigType, self.itemId)
    Runtime.Localize(label_taskTitle, nameKey)
    local countStr = Runtime.formartCount(self.cur, self.total)
    label_progress.text = countStr

    local function onBtn()
        self:Jump()
    end
    Util.UGUI_AddButtonListener(self.btn, onBtn)

    self.btn_exchange = find_component(self.go, "btn_exchange", Button)
    self.btn_exchange:SetActive(false)

    self:BuyInfo()
end

function BuildingTaskCostItem:Jump()
    if self.exchangeNum <= 0 then
        return
    end
    if App.mapGuideManager:HasRunningGuide() then
        return
    end

    if self.itemBigType == NormalItemBigType then
        self:JumpNormalItem()
    else
        self:JumpTwoMergeItem()
    end
end

function BuildingTaskCostItem:JumpNormalItem()
    local getWaysCfgs = AppServices.Meta:GetItemMeta(self.itemId).getWays
    local validMap = {
        [GetWayType.activityScoreReward] = true,
        [GetWayType.itemToGift] = true,
        [GetWayType.itemToFactoryItemfuncParam] = true,
        [GetWayType.DolphinIsLand] = true,
        [GetWayType.DolphinIsLandAttach] = true,
    }
    if #getWaysCfgs > 1 then
        self:ShowGetWayTip(self.itemId, self.img_undone)
    elseif #getWaysCfgs == 1 and validMap[getWaysCfgs[1]] then
        local getWays = AppServices.GetWay.get(self.itemId)
        local handler = getWays[1].handle
        if handler then
            local state = handler(self.itemId)
            if state then
                PanelManager.closePanel(GlobalPanelEnum.BuildingTaskPanel)
            end
        end
    else
        AppServices.Jump.SetUseAgentTip()
        local ok = SceneServices.AutoFocusAgent:FocusAgentByItemIdOneByOne({
            itemId = self.itemId,
            needCount = self.total,
            triggerAgent = SceneServices.ObjectManager:GetAgent(self.agentId),
            agentCheckType = "CheckEnableCollect"
        })
        if not ok then
            PanelManager.closePanel(GlobalPanelEnum.BuildingTaskPanel)
        end
    end
end

function BuildingTaskCostItem:JumpTwoMergeItem()
    local getWays = AppServices.GetWay.GetTwoMerge(self.itemId)
    if #getWays <= 0 then
        return
    end
    local handler = getWays[1].handle
    if handler then
        handler(self.itemId)
        PanelManager.closePanel(GlobalPanelEnum.BuildingTaskPanel)
    end
end

function BuildingTaskCostItem:BuyInfo()
    local isGuiding = App.mapGuideManager:HasRunningGuide()
    if isGuiding or (self.exchangeNum <= 0) then
        return
    end

    local canBuyType = ItemId.CanBuyByDiamond(self.itemId, self.itemBigType)  --2,3,5表示可购买材料，策划配的
    local price = ItemId:GetOnePrice(self.itemBigType, self.itemId)
    local canBuy = canBuyType and price > 0
    if canBuy then
        self.btn_exchange:SetActive(true)
        local txt_price = find_component(self.btn_exchange, "content/num", Text)
        local exchangeItem = { { itemId = self.itemId, count = self.exchangeNum, itemType = self.itemBigType } }

        --检查buff
        local rate = AppServices.DiamondCostBuff:GetOffPercent() or 1
        if rate < 1 then
            local buffItem = find_component(self.btn_exchange, "buffBg")
            buffItem:SetActive(true)
            local buffText = find_component(buffItem, "num", Text)
            buffText.text = self.exchangeNum * price
        end
        self.diamondCost = math.max(1, math.floor(self.exchangeNum * price * rate))
        txt_price.text = self.diamondCost
        Util.UGUI_AddButtonListener(self.btn_exchange, function()
            self:ExchangeOnClick(exchangeItem)
        end)
    end
end

function BuildingTaskCostItem:ExchangeOnClick(exchangeItem)
    local function buyCallback()
        for _, value in ipairs(exchangeItem) do
            if value.itemType == NormalItemBigType then
                AppServices.User:AddItem(value.itemId, value.count, ItemGetMethod.supplementTask)
            elseif value.itemType == TwoMergeItemBigType then
                AppServices.TwoMergeManager:QueueAdd(AppServices.TwoMergeManager:GetMapId(), value.itemId, value.count)
            end
        end
        self:BI()
        if Runtime.CSValid(self.go) then
            self.buildingTaskPanel:showTask(self.agentId, self.templateId)
        end
    end

    local arguments = {
        itemDatas = exchangeItem,
        buyCallback = buyCallback,
        source = BuyItemPanelSourceType.task,
        sourcePanel = GlobalPanelEnum.BuildingTaskPanel,
        srcPanelArgs = { agentId = self.agentId, templateId = self.templateId },
        method = ItemGetMethod.supplementTask
    }
    PanelManager.showPanel(GlobalPanelEnum.BuyItemPanel, arguments)
end

function BuildingTaskCostItem:ShowGetWayTip(itemId, itemTrans)
    local getWays = AppServices.GetWay.get(itemId)
    local getWayNum = getWays and #getWays
    if getWayNum == 1 then
        local handler = getWays[1].handle
        if handler then
            local state = handler(itemId, false)
            if state then
                return
            end
        end
    end
    if not self.getWayTip then
        self.getWayTip = DetailTip.Create(self.buildingTaskPanel.gameObject)
    end
    self.getWayTip:ShowTip(itemId, itemTrans, nil, nil, Vector3(-15, 15, 0))
    -- self.getWayTip:ShowMask(true)
end

function BuildingTaskCostItem:BI()
    DcDelegates:Log(SDK_EVENT.supplement_task, {
        sceneId = self.sceneId,
        buildingId = self.templateId,
        diamondCost = tostring(self.diamondCost),
        diamondCount = AppServices.User:GetItemAmount(ItemId.DIAMOND),
        item = CONST.RULES.ConvertLogItem({ { itemId = tostring(self.itemId), count = tostring(self.exchangeNum) } }),
        type = tostring(1)
    })
    DcDelegates:TDLog(SDK_EVENT.supplement_task, {
        building_id = self.templateId,
        consume_diamond = tostring(self.diamondCost),
        --diamondCount = AppServices.User:GetItemAmount(ItemId.DIAMOND),
        buy_item = CONST.RULES.ConvertTDLogItem({ { itemId = tostring(self.itemId), count = self.exchangeNum } }),
        buy_type = tostring(1)
    })
end

function BuildingTaskCostItem:GetBtn() return self.btn end

return BuildingTaskCostItem