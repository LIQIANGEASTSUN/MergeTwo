local _TwoMergePanelBase = require "UI.TwoMergePanel.View.UI.Base._TwoMergePanelBase"
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local TwoMergeTipItem = require "UI.TwoMergePanel.View.UI.TwoMergeTipItem"
local TwoMergeJumpLogic = require "Game.TwoMerge.Logic.TwoMergeJumpLogic"
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

--- 选中格子信息
local SelectArticleInfo = require "UI.TwoMergePanel.View.UI.ArticleInfo.SelectArticleInfo"
local TwoMergeOrderInfo = require "UI.TwoMergePanel.View.UI.Order.TwoMergeOrderInfo"
--- 二合消耗的货币(体力...)
local TwoMergeCurrencyItem = require "UI.TwoMergePanel.View.UI.TwoMergeCurrencyItem"
local TwoMergeCurrencyItem_Alpha = require "UI.TwoMergePanel.View.UI.TwoMergeCurrencyItem_Alpha"
local TwoMergeCurrencyItemEnergy = require "UI.TwoMergePanel.View.UI.TwoMergeCurrencyItemEnergy"
local TwoMergeTutorialItem = require "UI.TwoMergePanel.View.UI.TwoMergeTutorialItem"
local TwoMergePanelContinuousItem = require "UI.TwoMergePanel.View.UI.TwoMergePanelContinuousItem" -- 无尽礼包按钮
local TwoMergeBpEntrance = require "UI.TwoMergePanel.View.UI.TwoMergeBpEntrance"

---@type PromptMergeLogic
local PromptMergeLogic = require "Game.TwoMerge.Logic.PromptMergeLogic"

---@class TwoMergePanel:_TwoMergePanelBase
local TwoMergePanel = class(_TwoMergePanelBase)

function TwoMergePanel:ctor()
    self:AddListener()
    DcDelegates:TDLog(SDK_EVENT.open_close_ui, { uiname = "TwoMergePanel" })
end

function TwoMergePanel:onAfterBindView()
    AppServices.TwoMergeManager:SetArticleObj(self.eleItem, self.eleRoot, self.dragRoot) -- 设置item预制 父物体
    AppServices.TwoMergeManager:SetGridObj(self.gridItem, self.gridRoot)                 -- 设置grid预制 父物体
    AppServices.TwoMergeManager:SetAreaObj(self.areaItem, self.areaRoot)                 -- 设置area预制 父物体

    self.eleItem:SetActive(false)
    self.gridItem:SetActive(false)
    self.areaItem:SetActive(false)
    self.queuetip:SetActive(false)
    --- 引导物体Canvas层级
    self.tutorialrootcanvas.overrideSorting = true
    self.tutorialrootcanvas.sortingLayerName = CONST.MAINUI.LAYERS.BASIC_UI
    self.tutorialrootcanvas.sortingOrder = 100

    SelectArticleInfo:Init(self.infoRoot)
    self.TwoMergeTipItem = TwoMergeTipItem.new(self.tipItem)                                                  -- 飘字提示
    self.currencyItemEnergy = TwoMergeCurrencyItemEnergy.new(self.energyItem,
        ActivityServices.TwoMergeActivityManager:GetEnergyId())                                               -- 体力
    self.currencyItemDiamond = TwoMergeCurrencyItem.new(self.diamondItem, ItemId.DIAMOND)                     -- 钻石
    self.currencyItemCoin = TwoMergeCurrencyItem_Alpha.new(self.coinItem, ItemId.COIN)                        -- 金币
    self.TwoMergeTutorialItem = TwoMergeTutorialItem.new(self.tutorialroot)                                   -- 引导
    self.TwoMergePanelContinuousItem = TwoMergePanelContinuousItem.new(self.gift, self, self.arguments.mapId) -- 无尽礼包按钮
    self.TwoMergeBpEntranceItem = TwoMergeBpEntrance:Create(self.TwoMergeBpEntrance, self, self.arguments.mapId)

    self:Init()
    self:AddFingerGesture()
    self:CheckOpen()
    self:CheckBpGuideLevel()
    local btn_gm = find_component(self.gameObject, "btn_gm")
    btn_gm:SetActive(false)
end

function TwoMergePanel:onAfterShowPanel()
    MessageDispatcher:SendMessage(MessageType.Msg_MainCamera_Enabled, false)    -- 关闭世界相机
    MessageDispatcher:SendMessage(MessageType.Msg_SafeAreaPanel_Enabled, false) -- 关闭主界面
end

function TwoMergePanel:onBeforeHidePanel()
    MessageDispatcher:SendMessage(MessageType.Msg_MainCamera_Enabled, true)    -- 打开世界相机
    MessageDispatcher:SendMessage(MessageType.Msg_SafeAreaPanel_Enabled, true) -- 打开主界面
end

function TwoMergePanel:refreshUI() end

function TwoMergePanel:Init()
    self:InitWH()
    --- 请求服务器  等待监听:Msg_TwoMerge_ServerData_Success
    AppServices.TwoMergeManager:CheckMapData(self.arguments.mapId)
end

function TwoMergePanel:OnRequestSucc()
    AppServices.TwoMergeOrderManager:InitOrder()
    self:InitGrids()
    self:RefreshData()
    PromptMergeLogic:Init()
    self.TwoMergePanelContinuousItem:SetActivityId(self.arguments.mapId)
    --- isSendMessage = true 引导判断结束时发送消息进行引导下一步
    local hasOrderTutorial = TutorialLogic.StartUp(self.arguments.mapId, TutorialLogic.TutorialType.Order, true)
    -- 由消息跳转到:CheckTutorial()

    self:SetOrderInfo()
    self:RefreshGift()
end

function TwoMergePanel:CheckTutorialDelay()
    if self.timer ~= nil then
        WaitExtension.CancelTimeout(self.timer); self.timer = nil
    end
    GameUtil.BlockAll(0.1, "twomerge_automerge")
    self.timer = WaitExtension.SetTimeout(function() self:CheckTutorial() end, 0.1)
end

function TwoMergePanel:CheckTutorial()
    local isComplete, taskId = AppServices.TwoMergeOrderManager:IsCompleteOrderMain()
    if isComplete then
        local orderlist = MergeConfigUtil.GetTutorialTask(self.arguments.mapId)
        local exist = false
        for _, orderInfo in pairs(orderlist) do
            if orderInfo[1] == 1 and taskId == orderInfo[2] then
                exist = true; break
            end
        end
        if exist then
            App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeReceiveOrder)
            return
        end
    end

    local orderlist = MergeConfigUtil.GetTutorialTask(self.arguments.mapId)
    for _, orderInfo in pairs(orderlist) do
        if orderInfo[1] == 2 and AppServices.TwoMergeOrderManager:IsCompleteOrder(TwoMergeConfig.OrderType.Fix, orderInfo[2]) then
            App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeReceiveOrderFix)
            return
        end
    end
    local tworate = AppServices.User.Default:GetKeyValue("twomerge_tutorial_tworate" .. tostring(self.arguments.mapId), 0)
    local canRate2, canRate4 = MergeConfigUtil.IsOpenRate()
    if tworate == 0 and canRate2 then
        PanelManager.showPanel(GlobalPanelEnum.UITwoMergeTwoRatePanel, {
            callback = function()
                AppServices.TwoMergeManager:SetRate(1)
                App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeTwoRate)
                AppServices.User.Default:SetKeyValue("twomerge_tutorial_tworate" .. tostring(self.arguments.mapId), 1,
                    true)
            end
        })
        return
    end
    local fourrate = AppServices.User.Default:GetKeyValue("twomerge_tutorial_fourrate" .. tostring(self.arguments.mapId),
        0)
    if fourrate == 0 and canRate4 then
        App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeFourRate)
        AppServices.User.Default:SetKeyValue("twomerge_tutorial_fourrate" .. tostring(self.arguments.mapId), 1, true)
        return
    end
    local queue = AppServices.User.Default:GetKeyValue("twomerge_tutorial_queue" .. tostring(self.arguments.mapId), 0)
    local count, itemId = AppServices.TwoMergeManager:QueueGet(self.arguments.mapId)
    if queue == 0 and count > 0 then
        self.queuetip:SetActive(false)
        App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeQueue)
        AppServices.User.Default:SetKeyValue("twomerge_tutorial_queue" .. tostring(self.arguments.mapId), queue + 1, true)
        return
    end
    local isEnd = self:CheckGuideTwoMergeOpenShop()
    if isEnd then return end

    local giftstate = AppServices.User.Default:GetKeyValue("twomerge_tutorial_gift" .. tostring(self.arguments.mapId), 0)
    local giftType = 1 -- 固定免费
    local isShow = AppServices.ContinuousGiftManager:IsValid(self.arguments.mapId, giftType)
    if isShow and giftstate == 0 then
        App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeContinuousGift)
        AppServices.User.Default:SetKeyValue("twomerge_tutorial_gift" .. tostring(self.arguments.mapId), 1, true)
        return
    end
    -- 新增引导:

    -- 生成器链引导  一定是引导的最后一步
    TutorialLogic.StartUp(self.arguments.mapId, TutorialLogic.TutorialType.Generator, false)
end

function TwoMergePanel:CheckGuideTwoMergeOpenShop()
    --AppServices.User.Default:SetKeyValue("twoMerge_tutorial_twoMergeShop"..tostring(self.arguments.mapId), 0)
    local twoMergeShop = AppServices.User.Default:GetKeyValue(
        "twoMerge_tutorial_twoMergeShop" .. tostring(self.arguments.mapId), 0)
    if twoMergeShop == 0 and MergeConfigUtil:GetOpenTwoMergeShop() then
        App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeOpenShop)
        AppServices.User.Default:SetKeyValue("twoMerge_tutorial_twoMergeShop" .. tostring(self.arguments.mapId), 1, true)
        return true
    end
end

function TwoMergePanel:InitWH()
    local row, col = AppServices.TwoMergeManager:GetMaxRowCol(self.arguments.mapId)
    local borderRate = 0.06
    local height = 720 * (1 - borderRate * 2) -- Screen.height * (1 - borderRate * 2)
    local itemHeight = height / row
    local itemWeight = itemHeight
    local weight = itemWeight * col
    TwoMergeConfig.SetItemWH(itemHeight, itemWeight) -- 设置宽高
    self.gridbg.sizeDelta = Vector2(weight + 20, height + 20)

    if Screen.width / Screen.height >= 1280 / 720 then
        local materialH = Screen.height * (1 - borderRate * 2)
        local materialW = materialH * col / row
        self.TwoMergeTutorialItem:SetWH(1280 / 2, 720 / 2 + self.mergeroot.localPosition.y, (materialW) / 2,
            (materialH) / 2)
    else
        local materialW = Screen.width * 0.6515
        local materialH = materialW * row / col
        self.TwoMergeTutorialItem:SetWH(1280 / 2, 720 / 2 + self.mergeroot.localPosition.y, (materialW) / 2,
            (materialH) / 2)
    end
end

function TwoMergePanel:InitGrids()
    AppServices.TwoMergeManager:Enter(self.arguments.mapId)
    if self.arguments.jumpItemId then
        self:CheckJumpId(self.arguments.jumpItemId)
    end
end

--新增图鉴跳转功能
function TwoMergePanel:JumpByBestiaryId(id, orderId)
    if id == nil then
        return
    end
    self.arguments.jumpItemId = id
    self.arguments.jumpOrderId = orderId
    local config = AppServices.TwoMergeManager:GetItemConfig()[id]
    self.arguments.jumpType = config.getWays[1]
    self:CheckJumpId()
end

function TwoMergePanel:CheckJumpId()
    local targetId = TwoMergeJumpLogic.GetJumpItemId(self.arguments.jumpType, self.arguments.jumpItemId)
    if targetId ~= nil then
        local article = AppServices.TwoMergeManager:FindItemAndMark(self.arguments.mapId, targetId)
        if article and self.arguments.jumpOrderId then
            TwoMergeOrderInfo:OrderFindArticle(self.arguments.jumpItemId, self.arguments.jumpOrderId, article:GetGo())
        end
        --else
        --    UITool.ShowContentTipAni("t: 未找到来源")
    end
end

function TwoMergePanel:OnQueueUseSucc(itemId)
    self:RefreshData()
    if MergeConfigUtil.IsTutorialGeneratorLink(itemId) or MergeConfigUtil.IsSelectChest(itemId) then
        TutorialLogic.StartUp(self.arguments.mapId, TutorialLogic.TutorialType.Generator)
    end
end

function TwoMergePanel:RefreshData()
    --- 队列
    local count, itemId = AppServices.TwoMergeManager:QueueGet(self.arguments.mapId)
    local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[itemId]
    self.queueroot:SetActive(count > 0)
    if count > 0 then
        self.text_queuecount.text = tostring(count)
        self.icon_queue.sprite = AppServices.ItemIcons:GetSpriteByName(_cfg.icon)

        local curGuide = App.mapGuideManager:GetCurrentGuide()
        --- 正在引导队列点击时  关闭队列点击的弱引导
        if curGuide and curGuide.id == GuideIDs.GuideTwoMergeQueue then
            self.queuetip:SetActive(false)
        else
            local hasGenerator = AppServices.TwoMergeManager:QueueHasGenerator(self.arguments.mapId)
            self.queuetip:SetActive(hasGenerator)
        end
    else
        self.queuetip:SetActive(false)
    end

    self.currencyItemEnergy:RefreshData()
end

function TwoMergePanel:Msg_TwoMerge_OnInitComplete()
    TwoMergeOrderInfo:Init(self.Order, self.arguments.mapId)
    TwoMergeOrderInfo:Refresh(true)
end

function TwoMergePanel:OnClickHelp()
    console.print(">>>  my  点击帮助")
end

function TwoMergePanel:OnClickClose()
    if TutorialLogic.IsRunning() then return end
    PanelManager.closePanel(GlobalPanelEnum.TwoMergePanel)
end

function TwoMergePanel:OnClickQueue()
    self.queuetip:SetActive(false)
    if TutorialLogic.IsRunning() then return end
    local count, itemId = AppServices.TwoMergeManager:QueueGet(self.arguments.mapId)
    if count > 0 then
        local pos = GameUtil.UIToUISpaceAnchoredPosition(self.eleRoot, self.btn_queue.transform.position)
        AppServices.TwoMergeManager:QueueUse(self.arguments.mapId, { startPosition = pos })
    end
end

function TwoMergePanel:destroy()
    AppServices.TwoMergeManager:SynGridInfoRequest(self.arguments.mapId)

    if self.timer ~= nil then
        WaitExtension.CancelTimeout(self.timer); self.timer = nil
    end
    self.TwoMergeTipItem:destroy()
    self.currencyItemEnergy:destroy()
    self.currencyItemDiamond:destroy()
    self.currencyItemCoin:destroy()
    AppServices.TwoMergeManager:Exit()
    AppServices.TwoMergeMapGridManager:DisposeGridInfo()
    TwoMergeOrderInfo:Destroy()
    self.TwoMergePanelContinuousItem:destroy()

    AppServices.TwoMergeManager:SetArticleObj(nil, nil) -- 清空grid预制 父物体
    _TwoMergePanelBase.destroy(self)
    SelectArticleInfo:Destroy()
    self.TwoMergeTutorialItem:destroy()
    if self.TwoMergeBpEntranceItem then
        self.TwoMergeBpEntranceItem:Dispose()
    end
    PromptMergeLogic:Clear()
    self:RemoveListener()
end

function TwoMergePanel:OnClickBag()
    if TutorialLogic.IsRunning() then return end
    PanelManager.showPanel(GlobalPanelEnum.TwoMergeBagPanel, { mapId = self.arguments.mapId })
end

function TwoMergePanel:OnClickShop()
    if TutorialLogic.IsRunning() then return end
    AppServices.TwoMergeManager:TwoMergeShopInfoRequest(function()
        PanelManager.showPanel(GlobalPanelEnum.UITwoMergeShopPanel)
    end)
end

function TwoMergePanel:AddFingerGesture()
    self.onDown = function(_, position)
        SelectArticleInfo:OnDown(position)
        PromptMergeLogic:OnDown()
        AppServices.TwoMergeManager:ClearSpecialMark()
    end
    CS.FingerGestureSystem.Instance:AddFingerTouchDown(self.onDown)
end

function TwoMergePanel:OnOrderSubmit(orderId)
    if not self.isOpenShop then
        self:CheckOpen()
    end
    self:CheckGuideTwoMergeFirst()
    self:CheckGuideTwoMergeOpenShop()
end

--bp引导
function TwoMergePanel:CheckBpGuideLevel()
    local guideData = AppServices.TwoMergeManager:GetGuideData()
    for k, v in pairs(guideData) do
        if AppServices.TwoMergeManager:GetNormalRewardState(v) ~= 2
            and AppServices.TwoMergeManager:GetCurrentStage() >= v
        then
            App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeBpLevel)
            return
        end
    end
end

--初始化引导
function TwoMergePanel:CheckGuideTwoMergeFirst()
    local isClickBp = AppServices.User.Default:GetKeyValue("twoMergeBp" .. self.arguments.mapId .. 0, 0) == 0
    local isGetReward = AppServices.TwoMergeManager:GetNormalRewardState(0) == 2
    if isGetReward then
        if isClickBp then
            AppServices.User.Default:SetKeyValue("twoMergeBp" .. self.arguments.mapId .. 0, 1 ,true)
        end
        return
    end
    if isClickBp then
        App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeBp)
        return
    end
end

function TwoMergePanel:CheckOpen()
    self.isOpenShop = MergeConfigUtil:GetOpenTwoMergeShop()
    self.shopBtn.gameObject:SetActive(self.isOpenShop)
end

function TwoMergePanel:SetOrderInfo()
    local orderList = AppServices.TwoMergeOrderManager:GetOrderList()
    local _mapId = AppServices.TwoMergeManager:MapId()
    for k, v in pairs(orderList) do
        for index, value in pairs(v.itemNeedList) do
            AppServices.TwoMergeManager:CheckIllUnlock(_mapId, value.itemId)
        end
    end
end

function TwoMergePanel:RefreshGift()
    self.TwoMergePanelContinuousItem:RefreshGift()
end

function TwoMergePanel:OnAfterHide()
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Panel_Close)
end

function TwoMergePanel:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.OnRequestSucc, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_QueueUse_Succ, self.OnQueueUseSucc, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_QueueAdd, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.AddTwoMergeItem, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Add, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Delete, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_QueueRemove, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_TutorialStep, self.CheckTutorial, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Info_Refresh, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_StateChanged, self.RefreshData, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Bestiary_Jump, self.JumpByBestiaryId, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Order_Submit_Success, self.OnOrderSubmit, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_OnInitComplete, self.Msg_TwoMerge_OnInitComplete, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_AddBpScore, self.CheckBpGuideLevel, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.CheckOpen, self)
end

function TwoMergePanel:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_ServerData_Success, self.OnRequestSucc, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_QueueUse_Succ, self.OnQueueUseSucc, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_QueueAdd, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.AddTwoMergeItem, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Add, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Delete, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_QueueRemove, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_TutorialStep, self.CheckTutorial, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Info_Refresh, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_StateChanged, self.RefreshData, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Bestiary_Jump, self.JumpByBestiaryId, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Order_Submit_Success, self.OnOrderSubmit, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_OnInitComplete, self.Msg_TwoMerge_OnInitComplete, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_AddBpScore, self.CheckBpGuideLevel, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.CheckOpen, self)
    CS.FingerGestureSystem.Instance:RemoveFingerTouchDown(self.onDown)
end

------------------------- >>> 引导相关
function TwoMergePanel:Tutorial_GetTwoRateButton()
    return self.currencyItemEnergy:GetTwoRateButton()
end

function TwoMergePanel:Tutorial_GetContinuousGiftButton() return self.gift end

function TwoMergePanel:Tutorial_GetQueueButton()
    return self.btn_queue
end

function TwoMergePanel:Tutorial_GetOrderButtonComplete()
    return TwoMergeOrderInfo:GetOrderButtonComplete()
end

function TwoMergePanel:Tutorial_GetOrderButtonCompleteFix()
    return TwoMergeOrderInfo:Tutorial_GetOrderButtonCompleteFix()
end

function TwoMergePanel:Tutorial_GetShopButton()
    return self.shopBtn
end

function TwoMergePanel:Tutorial_GetBpButton()
    return self.TwoMergeBpEntrance.gameObject
end

return TwoMergePanel
