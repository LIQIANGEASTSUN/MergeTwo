require "MainCity.Include"
require "MainCity.Character.CharacterManager"

require "ScreenPlays.Include"

require "MainCity.Manager.PopupManager"
require "MainCity.Manager.QueueLineManage"
require "MainCity.Manager.MapBubbleManager"

local Interaction = require("MainCity.Interaction.Interaction")
local Director = require "ScreenPlays.Director"
local MapManager = require("MainCity.Manager.MapManager")

local SuperCls = require "UI.Scene.SceneWithHomeUI"

---@class MainCity:SceneWithHomeUI @场景管理类
local MainCity = class(SuperCls, "MainCity")

function MainCity.create()
    local inst = MainCity.new()
    return inst
end

function MainCity:ctor()
    self.alive = true
    self.sceneMode = SceneMode.home
    App.popupQueue:Clear()
    self.sceneDatas = nil
    self.currentSceneData = nil

    self.director = Director.new()
    ---@type Interaction
    self.interaction = Interaction.new()

    self.fullyLoadedCounter = 0
    self.rightBtnLayout = {}
    self.sceneWillChange = nil

    Util.BlockAll(-1, "main_city_first_enter")

    self.showRightIconsCbs = {}

    --已过期, 请使用: SceneServices.ObjectManager
    self.objectManager = nil --@DEL

    --打点用
    self.addedItems = {}
    AppServices.PopWindowManager:Reset()
    MessageDispatcher:AddMessageListener(MessageType.Msg_SafeAreaPanel_Enabled, self.OnActive, self)
end

--0 启动全局功能模块（不需要解锁和无条件限定的功能）
--1 加载基础模块
--场景
--摄像机
--角色
--龙
--2 加载数据层和管理器
--3 绘制UI
--4 启动逻辑层
--5 初始化结束
function MainCity:init(params, extraParam)
    SuperCls.init(self)

    self.params = params
    self.extraParam = extraParam
    local ts = CS.System.DateTime.Now
    -- 注册观察者事件
    self:RegisterListener()
    AppServices.Connecting:SetPause(true)
    --1 加载基础模块（job 并行运行，需要加载更多模块通过job创建）
    local sequence = LoadCount:GetJob("InitBaseModule")
    sequence:AddJob(
            function(finishCallback)
                self:InitBaseModule(finishCallback)
            end,LoadCountDesc.BaseModule
    )
    sequence:AddJob(
            function(finishCallback)
                self:InitCharacterAndCamera(finishCallback)
            end,LoadCountDesc.CharacterAndCamera
    )
    sequence:AppendFinish(
            function()
                AppServices.Connecting:SetPause(false)
                if RuntimeContext.VERSION_DEVELOPMENT then
                    App.LoadingCheck = false
                end
                --2 加载数据层和管理器
                local delta = CS.System.DateTime.Now - ts
                console.lj("fetch InitBaseModule  cost:" .. delta.TotalSeconds) --@DEL
                return self:RequestServerData()
            end
    )
    sequence:DoJob()

    --打点 记录玩家进入场景时的时间点
    self.enterSceneTime = TimeUtil.ServerTime()
    SceneServices.PressSlider:Init()
end

function MainCity:InitBaseModule(finishCallback)
    --里面的初始化顺序不要乱动, 设计很精妙0^0
    local ts = CS.System.DateTime.Now
    --1.初始化地图
    self.mapManager = MapManager.new(self.params.sceneId)

    --2.初始化障碍物
    SceneServices.ObjectManager:Init(self.params.sceneId)

    --3. 根据服务器数据更新障碍物(或创建/或销毁)
    SceneServices.ObjectManager:CreateAgents(self.extraParam.serverMapData)

    --4. 根据服务器数据更新地图
    self.mapManager:InitServer()
    local delta = CS.System.DateTime.Now - ts
    DcDelegates:Log(
            SDK_EVENT.obstacles_load_cost,
            {
                sceneId = self:GetCurrentSceneId(),
                loadingtime = delta.TotalSeconds
            }
    )
    DcDelegates:TDLog(
            SDK_EVENT.obstacles_load_cost,
            {
                --sceneId = self:GetCurrentSceneId(),
                loading_time = delta.TotalMilliseconds
            }
    )
    console.lj("generate scene [" .. self:GetCurrentSceneId() .. "] cost:" .. delta.TotalSeconds) --@DEL

    --加载场景特效
    if self.params.snowEffect then
        local assetPath = "Prefab/UI/HomeScene/Effects/Snow.prefab"
        local function OnLoadFinished()
            BResource.InstantiateFromAssetName(assetPath)
        end
        App.uiAssetsManager:LoadAssets({assetPath}, OnLoadFinished)
    end

    Runtime.InvokeCbk(finishCallback)
end

function MainCity:InitCharacterAndCamera(finishCallback)
    -- 主角发光特效开关
    XGE.EffectExtension.ActorSpotEffect(CONST.RULES.ActorEffectEanbled())

    local min, max = self.mapManager:GetCameraAnchor()
    MoveCameraLogic.Instance(true):Init(nil, min, max)
    local mgr = SceneServices.CharacterManager
    mgr:Init()
    local player = mgr:GetMainPlayer()
    player:SetBeginningPosition()

    Runtime.InvokeCbk(finishCallback)
end

function MainCity:RequestServerData()
    local sequence = LoadCount:GetJob("FetchServerDate")
    local ts = CS.System.DateTime.Now
    --任务
    sequence:AddJob(
            function(finishCallback)
                AppServices.Task:CheckTaskOnChangeScene(finishCallback)
            end,LoadCountDesc.Task
    )
    --场景关闭
    sequence:AddJob(
            function(finishCallback)
                AppServices.SceneCloseInfo:Request(1, finishCallback)
            end,LoadCountDesc.SceneCloseInfo
    )

    --新手通行证
    sequence:AddJob(function(finishCallback)
        ActivityServices.GoldPassBeginnerManager:RequestServerData(finishCallback, true)
    end, LoadCountDesc.GoldPassBeginner)

    sequence:AddJob(function(finishCallback)
        ActivityServices.BeginnerSceneActivityManager:ActivityInfoRequest(finishCallback)
    end,LoadCountDesc.BeginnerScene)

    --请求活动数据
    sequence:AddJob(
            function(finishCallback)
                ActivityServices.ActivityManager:RequestServerData(finishCallback)
            end,LoadCountDesc.Activity
    )

    --邮件
    sequence:AddJob(
            function(finishCallback)
                AppServices.MailManager:RequestMailList(finishCallback)
            end,LoadCountDesc.RequestMailList
    )
    --角色皮肤数据
    sequence:AddJob(
            function(finishCallback)
                AppServices.SkinEquipManager:SkinListRequest(finishCallback)
            end,LoadCountDesc.SkinEquip
    )
    --初始化伙伴
    sequence:AddJob(
            function(finishCallback)
                AppServices.Connecting:SetPause(true)
                AppServices.MagicalCreatures:EnterSceneCreateAndStartDriver(
                        function()
                            AppServices.Connecting:SetPause(false)
                            finishCallback()
                            if App.scene:IsScene(SceneMode.home) then
                                ---@type BreedButton
                                PopupManager:CallWhenIdle(
                                        function()
                                            local breedBtn = App.scene:GetWidget(CONST.MAINUI.ICONS.BreedButton)
                                            if breedBtn then
                                                breedBtn:CheckShowOrHide()
                                            end
                                        end
                                )
                                ---@type DragonBagButton
                                local dragonBagBtn = App.scene:GetWidget(CONST.MAINUI.ICONS.DragonBagBtn)
                                dragonBagBtn:CheckShowOrHide()
                            end
                            local dragonAssistBtn = App.scene:GetWidget(CONST.MAINUI.ICONS.DragonAssistBtn)
                            if dragonAssistBtn then
                                dragonAssistBtn:CheckShowOrHide()
                            end
                            if AppServices.Unlock:IsUnlock("RepairIcon") then
                                App.scene:RefreshWidget(CONST.MAINUI.ICONS.BuldingRepairBtns)
                            end
                        end
                )
            end,LoadCountDesc.MagicalCreatures
    )
    --初始化引导
    sequence:AddJob(
            function(finishCallback)
                App.mapGuideManager:InitFromRequest(finishCallback)
            end,LoadCountDesc.Guild
    )
    --建筑修复数据
    local curSceneId = App.scene:GetCurrentSceneId()
    local isQuest = self:CheckIsPayLevelMap(curSceneId)
    if not isQuest then
        sequence:AddJob(
                function(finishCallback)
                    AppServices.BuildingRepair:InitSceneBuildings(finishCallback)
                end,LoadCountDesc.BuildingRepair
        )
    end

    --拯救小动物活动
    sequence:AddJob(
            function(finishCallback)
                Runtime.InvokeCbk(finishCallback)
                AppServices.SaveAnimal:RequestServerData(finishCallback)
            end,LoadCountDesc.SaveAnimal
    )
    --建筑商店
    sequence:AddJob(
            function(finishCallback)
                AppServices.BuildingShop:RequestServerData(finishCallback)
            end,LoadCountDesc.BuildingShop
    )
    --伙伴宴会
    sequence:AddJob(
            function(finishCallback)
                AppServices.PartnerParty:RequestServerData(finishCallback)
            end,LoadCountDesc.PartnerParty
    )
    --建筑皮肤初始化
    sequence:AddJob(
            function(finishCallback)
                if not self:IsMainCity() then
                    Runtime.InvokeCbk(finishCallback)
                    return
                end
                AppServices.BuildingSkinManager:SkinInfoRequest(finishCallback)
            end,LoadCountDesc.BuildingSkin
    )
    --商城分组
    sequence:AddJob(
            function(finishCallback)
                if not AppServices.Unlock:IsUnlock("crownShop") then
                    Runtime.InvokeCbk(finishCallback)
                    return
                end
                AppServices.ShopGroupManager:RequestCrownGoods(function(result)
                    finishCallback()
                    if result then
                        MessageDispatcher:SendMessage(MessageType.Refresh_Crown_Icon)
                    end
                end)
            end,LoadCountDesc.ShopGroup
    )
    sequence:AddJob(function(finishCallback)
        ActivityServices.PersonalMapManager:ActivityInfoRequest(finishCallback)
    end,LoadCountDesc.PersonalMap)

    --卡牌
    sequence:AddJob(
            function(finishCallback)
                AppServices.CardCollectManager:RequestServerData(finishCallback)
            end,LoadCountDesc.CardCollect
    )

    local btnKey = CONST.MAINUI.ICONS.ReflowButton
    if AppServices.ButtonsForSceneManager.CheckScene(btnKey) then
        --回流活动
        sequence:AddJob(
                function(finishCallback)
                    AppServices.ReflowRewardManager:ReflowInfoRequest(finishCallback)
                end,LoadCountDesc.ReflowReward
        )
    end

    --初始化弹出队列
    sequence:AppendFinish(
            function()
                local delta = CS.System.DateTime.Now - ts
                console.lj("fetch serverdata  cost:" .. delta.TotalSeconds) --@DEL
                return self:InitManager()
            end
    )

    ConnectionManager:block()
    self:BindView()
    sequence:DoJob()
    ConnectionManager:flush(true)
end

function MainCity:InitManager()
    local function onTranslationAnimFinished(hasAnimation)
        if hasAnimation then
            Util.BlockAll(0, "main_city_first_enter")
        end
    end
    self:OnFullyLoaded()
    SceneServices.ObjectManager.allAgentLoaded = true
    MessageDispatcher:SendMessage(MessageType.Global_After_Scene_Loaded, self.params.sceneId, self.sceneMode)
    --???
    local isShow = AppServices.User.Default:GetKeyValue("ShowTaskListArrow", 0)
    local taskBtn = App.scene:GetWidget(CONST.MAINUI.ICONS.TaskBtn)
    if taskBtn and isShow == 1 then
        AppServices.User.Default:SetKeyValue("ShowTaskListArrow", 0, true)
        taskBtn:ShowListArrow()
    end
    --
    local ChangeSceneAnimation = require "Game.Common.ChangeSceneAnimation"
    ChangeSceneAnimation.Instance():PlayOut(onTranslationAnimFinished)
    App.popupQueue:Init()
end

function MainCity:OnStoryOver()
    MessageDispatcher:RemoveMessageListener(MessageType.Global_UIStoryChapterWindow_Destroy, self.OnStoryOver, self)
    App.popupQueue:Init()
end

function MainCity:EnableUI()
    Util.BlockAll(0, "main_city_first_enter")
    self.uiEnabled = true
end

function MainCity:OnFullyLoaded()
    local logicList = {}
    local function RegistOnFullyLoaded(func)
        table.insert(logicList, func)
    end

    if RuntimeContext.IS_NEW_USER then
        RuntimeContext.IS_NEW_USER = false
    end

    if RuntimeContext.FIRST_ENTER_GAME then
        -- 第一次登录游戏结束
        RuntimeContext.FIRST_ENTER_GAME = nil
    end
    RegistOnFullyLoaded(function ()
        local player = SceneServices.CharacterManager:GetMainPlayer()
        if player then
            MoveCameraLogic.Instance():SetFocusOnPoint(player:GetPosition(), false, 0, PredefinedCameraSize.Normal)
        end
    end)
    RegistOnFullyLoaded(function ()
        MapBubbleManager:Init()
    end)
    RegistOnFullyLoaded(function()
        AppServices.WelfareManager:Init()
    end)

    RegistOnFullyLoaded(function()
        SceneServices.GiftIntersectionManager:Init()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.CollectionItem:CheckBubble()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.FactoryManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.Notification:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.AdsEnergyManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.MapGiftManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.AdsRepeatBrushBox:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.LuckyCardManager:OnSceneLoaded()
    end)

    RegistOnFullyLoaded(function ()
        AppServices.User:CheckItemReplace()
    end)
    RegistOnFullyLoaded(function ()
        SceneServices.GiftIconManager:Init()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.GuideArrowManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.HangUpRewardManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(
            function()
                ActivityServices.ThreeClearManager:OnSceneLoaded()
            end
    )
    RegistOnFullyLoaded(
            function()
                ActivityServices.JamClearManager:OnSceneLoaded()
            end
    )
    RegistOnFullyLoaded(function ()
        AppServices.MonCard:OnSceneLoaded()
    end)

    RegistOnFullyLoaded(function ()
        SceneServices.RuinsSceneManager:Init()
    end)
    RegistOnFullyLoaded(function ()
        ActivityServices.DayTaskManager:OnSceneLoaded()
    end)

    RegistOnFullyLoaded(function ()
        AppServices.TeamManager.OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.DragonNestManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.BuildingSkinManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.PartnerMapEventManager:OnSceneLoaded(self.extraParam.serverMapData)
    end)

    RegistOnFullyLoaded(function ()
        SceneServices.MonopolyManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.RemainsFishingManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.DragonMaze:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.FactoryCenterManager:OnSceneLoaded()
    end)
    RegistOnFullyLoaded(function ()
        SceneServices.AutoFocusAgent:OnSceneLoaded()
    end)

    RegistOnFullyLoaded(function ()
        AppServices.PveManager:OnSceneLoaded()
    end)

    RegistOnFullyLoaded(function ()
        ---@type SceneStarButton
        local starButton = App.scene:GetWidget(CONST.MAINUI.ICONS.SceneStarButton)
        if starButton then
            starButton:CheckGuide()
        end
    end)
    RegistOnFullyLoaded(function ()
        AppServices.AdsAccumulated:Init()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.RecoveryItemManager.Init()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.TwoMergeManager:Init()
    end)
    RegistOnFullyLoaded(function ()
        AppServices.TwoMergeMapGridManager:Init()
    end)

    RegistOnFullyLoaded(
            function()
                AppServices.EventDispatcher:dispatchEvent(GlobalEvents.MAIN_CITY_FULLY_LOADED)
            end
    )

    RegistOnFullyLoaded(function ()
        AppServices.NewerGiftManager:Init()
    end)

    RegistOnFullyLoaded(function ()
        AppServices.PveManager:Init()
    end)

    RegistOnFullyLoaded(function ()
        AppServices.CatAdsManager:Init()
    end)

    RegistOnFullyLoaded(function ()
        AppServices.BuildCommissionManager:Init()
    end)

    RegistOnFullyLoaded(function()
        AppServices.BuildingShop:CreateAllBuyInSceneAgent()
    end)

    RegistOnFullyLoaded(function()
        SceneServices.IslandBuildingSkinManager:Init()
    end)

    --执行
    do
        for index, func in ipairs(logicList) do
            local result = Runtime.InvokeCbk(func)
            if not result then
                console.error("maincityOnFullyLoaded有错误"..index) --DEL
            end
        end
    end
    collectgarbage("setstepmul", 210)
end

function MainCity:AddTickerObserver(observer)
    if not self.ticker then
        self.ticker = require "Utils.SimpleTicker"()
        self.ticker:Start(0, 1)
    end
    self.ticker:AddObserver(observer)
end

function MainCity:RemoveTickerObserver(observer)
    if not self.ticker then
        return
    end
    self.ticker:RemoveObserver(observer)
end

function MainCity:StopTickerObserver(observer)
    if not self.ticker then
        return
    end
    self.ticker:Stop()
    self.ticker = nil
end

--@override
function MainCity:InitUI()
    local CoinItem = require "UI.Components.CoinItem"
    self.coinItem = CoinItem:Create()
    self.coinItem:SetParent(self.layout:Node())
    self:AddWidget(CONST.MAINUI.ICONS.CoinIcon, self.coinItem)
    AppServices.UserCoinLogic:BindView(self.coinItem)

    local HeartItemLite = require "MainCity.View.SubViews.Components.HeartItemLite"
    self.heartItem = HeartItemLite:Create()
    self.heartItem:SetParent(self.layout:Node(), false)
    self:AddWidget(CONST.MAINUI.ICONS.EnergyIcon, self.heartItem)

    local RedHeartItemLite = require "MainCity.View.SubViews.Components.RedHeartItemLite"
    self.redHeartItem = RedHeartItemLite:Create()
    self.redHeartItem:SetParent(self.layout:Node(), false)
    self:AddWidget(CONST.MAINUI.ICONS.RedEnergyIcon, self.redHeartItem)

    local DiamondItemLite = require "MainCity.View.SubViews.Components.DiamondItemLite"
    self.diamondItem = DiamondItemLite:Create()
    self.diamondItem:SetParent(self.layout:Node(), false)
    self:AddWidget(CONST.MAINUI.ICONS.DiamondIcon, self.diamondItem)
    AppServices.DiamondLogic:BindView(self.diamondItem)

    local ExpItemLite = require "MainCity.View.SubViews.Components.ExpItemLite"
    self.expItem = ExpItemLite:Create()
    self.expItem:SetParent(self.layout:Node(), false)
    self:AddWidget(CONST.MAINUI.ICONS.Experience, self.expItem)
end

function MainCity:BindView()
    local MainCityView = require("MainCity.View.MainCityView")
    self.view = MainCityView:Create(self)
end

function MainCity:Awake()
    SuperCls.Awake(self)

    BCore.SetTargetFrameRate(false)
    self.interaction:RegisterListeners()
    AppServices.TaskIconButtonLogic:BindView(self)
    SceneServices.CharacterManager:Awake()

    registerMediator("MainCity.Mediator.MainCityMediator", self)
    App.audioManager:PlayMusicAudio(CONST.AUDIO.Music_MainCity)

    AppServices.EventDispatcher:addObserver(
            self,
            GlobalEvents.SWITCH_SCENECAMERA,
            function(event)
                if Runtime.CSNull(self.SceneCamera) then
                    self:InitSceneCamera()
                end
                if event.data.switchOn == false and event.data.useCapture == true then
                    self:SceneCameraCapture()
                else
                    self.sceneCameraCapture.enabled = false
                end
                self.SceneCamera.enabled = event.data.switchOn
            end
    )
    MessageDispatcher:SendMessage(MessageType.Global_After_Scene_Awake, self.params.sceneId)
end

function MainCity:InitSceneCamera()
    self.renderTexture = CS.UnityEngine.RenderTexture(Screen.width, Screen.height, -1)
    self.SceneCamera = GameUtil.WorldCamera
    local one = Vector2.one
    local zero = Vector2.zero
    local go = GameObject("SceneCameraCapture")
    go:SetParent(self.panelLayer, false)
    go.transform:SetAsFirstSibling()
    local captureRectTransform = go:AddComponent(typeof(RectTransform))
    captureRectTransform.anchorMin = zero
    captureRectTransform.anchorMax = one
    captureRectTransform.sizeDelta = zero
    self.sceneCameraCapture = go:AddComponent(typeof(RawImage))
    self.sceneCameraCapture.raycastTarget = false
    self.sceneCameraCapture.enabled = false
end

function MainCity:SceneCameraCapture()
    self.sceneCameraCapture.enabled = true
    if Runtime.CSValid(self.SceneCamera) then
        self.SceneCamera.targetTexture = self.renderTexture
        self.SceneCamera:Render()
        self.SceneCamera.targetTexture = nil
    end

    self.sceneCameraCapture.texture = self.renderTexture
end

function MainCity:RegisterListener()
    MessageDispatcher:AddMessageListener(MessageType.Global_After_ChangeScene, self.RecordLastSceneName, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_AddItem, self.RecordAddedItems, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_GetDragonById, self.OnGetPartner, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_AddItem, self.OnAddItem, self)
    MessageDispatcher:AddMessageListener(MessageType.buildRepaired, self.BuildRepaired, self)
end

function MainCity:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_ChangeScene, self.RecordLastSceneName, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_AddItem, self.RecordAddedItems, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_GetDragonById, self.OnGetPartner, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_AddItem, self.OnAddItem, self)
    MessageDispatcher:RemoveMessageListener(MessageType.buildRepaired, self.BuildRepaired, self)
end

function MainCity:ShowAllIcons(isFirstTime)
    self:ShowAllTopIcons(false)
    self:ShowBottomIcons(isFirstTime)
end
function MainCity:HideAllIcons(isFirstTime)
    self:HideAllTopIcons(false)
    self:HideBottomIcons(isFirstTime)
end

---监听界面右侧图标显示(触发后自动清空监听)
function MainCity:RegisterShowRightIconsListener(listener)
    table.insert(self.showRightIconsCbs, listener)
end

function MainCity:ShowAllRightIcons()
    self.layout:ShowRight(
            function()
                if self.showRightIconsCbs then
                    local cbs = self.showRightIconsCbs
                    self.showRightIconsCbs = {}

                    for _, listener in ipairs(cbs) do
                        listener:trigger()
                        if not listener:isOneShot() then
                            table.insert(self.showRightIconsCbs, listener)
                        end
                    end
                end
            end
    )
end

function MainCity:HideAllRightIcons()
    self.layout:HideRight()
end

function MainCity:ShowAllLeftIcons()
    self.layout:ShowLeftTop()
    self.layout:ShowLeft()
end

function MainCity:HideAllLeftIcons()
    self.layout:HideLeftTop()
    self.layout:HideLeft()
end

function MainCity:ShowAllTopIcons(instant, interactable)
    SuperCls.ShowAllTopIcons(self, instant, interactable)
    self.view:ShowAllTopIcons(instant, interactable)

    self:ShowAllRightIcons()
    self:ShowAllLeftIcons()
end
function MainCity:HideAllTopIcons(instant, hideType)
    self.view:HideAllTopIcons(instant, hideType)
    SuperCls.HideAllTopIcons(self, instant, hideType)

    self:HideAllRightIcons()
    self:HideAllLeftIcons()
end

function MainCity:ShowBottomIcons(isFirstTime)
    self.view:ShowBottomIcons(isFirstTime)
    self.AllBottomIconHideState = false
    self.layout:ShowBottomLeft()
    self.layout:ShowBottomRight()
end

function MainCity:HideBottomIcons(instant, hideType)
    self.view:HideBottomIcons(instant, hideType)
    self.layout:HideBottomLeft()
    self.layout:HideBottomRight()
end

function MainCity:Update(dt)
    if self.isDestroyed then
        return
    end
    self.director:Update(dt)
end

function MainCity:LateUpdate(dt)
    SuperCls.LateUpdate(self)

    if not App.screenPlayActive and self.interaction then
        self.interaction:Update()
    end
    SceneServices.CharacterManager:LateUpdate(dt)
end

function MainCity:AcceptMessage(msg)
    BeginAcceptMessage()
end

function MainCity:AddEndMessageToLastAction(msg)
    EndAcceptMessage()
end

function MainCity:AddFrameAction(act)
    self.director:AppendFrameAction(act)
end

function MainCity:BeforeUnload()
    local logicList = {}
    local function RegistBeforeUnload(func)
        table.insert(logicList, func)
    end

    RegistBeforeUnload(function ()
        App.audioManager:ClearAudio(CONST.AUDIO.Music_MainCity)
    end)
    RegistBeforeUnload(function ()
        SuperCls.BeforeUnload(self)
    end)

    RegistBeforeUnload(function ()
        self.view:BeforeUnload()
    end)
    RegistBeforeUnload(function ()
        -- 移除所有监听
        self:RemoveListener()
    end)
    RegistBeforeUnload(function ()
        AppServices.OrderTask:DestroySceneBoard()
    end)
    RegistBeforeUnload(function ()
        App.mapGuideManager:FinishCurrentGuide(true)
    end)
    RegistBeforeUnload(function ()
        PopupManager:Stop()
    end)
    RegistBeforeUnload(function ()
        AppServices.MagicalCreatures:LeaveScene()
    end)

    RegistBeforeUnload(function ()
        AppServices.FactoryManager:BeforeSceneUnload()
    end)
    RegistBeforeUnload(function ()
        AppServices.FactoryCenterManager:BeforeSceneUnload()
    end)
    RegistBeforeUnload(function ()
        AppServices.DragonNestManager:LeaveScene()
    end)
    RegistBeforeUnload(function ()
        AppServices.MapGiftManager:BeforeUnload()
    end)
    RegistBeforeUnload(function ()
        AppServices.AdsRepeatBrushBox:BeforeUnload()
    end)
    RegistBeforeUnload(function ()
        AppServices.GuideArrowManager:CloseAll()
    end)
    RegistBeforeUnload(function ()
        MessageDispatcher:SendMessage(MessageType.Global_Before_Scene_Unload, self.params.sceneId, self.sceneMode)
    end)

    RegistBeforeUnload(function ()
        self:StopTickerObserver()
    end)
    RegistBeforeUnload(function ()
        AppServices.TeamManager.Dispose()
    end)
    RegistBeforeUnload(function ()
        AppServices.MonCard:OnSceneBeforeUnload()
    end)
    RegistBeforeUnload(function ()
        AppServices.PartnerManager:OnSceneBeforeUnload()
    end)
    RegistBeforeUnload(function ()
        AppServices.HangUpRewardManager:OnSceneBeforeUnload()
    end)

    RegistBeforeUnload(
            function()
                AppServices.DailyLuckyCardManager:OnSceneBeforeUnload()
            end
    )

    RegistBeforeUnload(
            function()
                SceneServices.AutoFocusAgent:BeforeSceneUnload()
            end
    )

    RegistBeforeUnload(function ()
        AppServices.CatAdsManager:Release()
    end)

    RegistBeforeUnload(function ()
        AppServices.AdsAccumulated:Release()
    end)

    --执行
    do
        for index, func in ipairs(logicList) do
            local result = Runtime.InvokeCbk(func)
            if not result then
                console.error("maincity卸载前有错误"..index) --DEL
            end
        end
    end
end

function MainCity:OnPause()
    SuperCls.OnPause(self)
    self:RecordLastSceneName()
end

function MainCity:ShowMask(topIconHideType)
    self:HideAllTopIcons(false, topIconHideType)
    self:HideBottomIcons(false, topIconHideType)
end

function MainCity:HideMask(duration)
    if not App.screenPlayActive then
        self:ShowAllTopIcons()
        self:ShowBottomIcons()
    end
end

--city界面中的红点控制
function MainCity:RefreshRedDot(buttonName)
    if buttonName == "BuildingCollect" and self.skinButton then
        self.skinButton:RefreshRedDot()
    elseif buttonName == "DiamondItem" and self.diamondItem then
        self.diamondItem:HandleRedDot()
    elseif buttonName == "CoinItem" then
        local coinItem = App.scene:GetWidget(CONST.MAINUI.ICONS.CoinIcon)
        if coinItem then
            coinItem:ShowRedDot()
        end
    elseif buttonName == "UserInfo" then
        local headInfoView = App.scene:GetWidget(CONST.MAINUI.ICONS.HeadInfoView)
        if headInfoView then
            headInfoView:HandleRedDot()
        end
    elseif buttonName == "settingButton" then
        local settingButton = App.scene:GetWidget(CONST.MAINUI.ICONS.SettingButton)
        if settingButton then
            settingButton:ShowReddot()
        end
    elseif buttonName == "CardCollectButton" then
        local cardCollectButton = App.scene:GetWidget(CONST.MAINUI.ICONS.CardCollectButton)
        if cardCollectButton then
            cardCollectButton:ShowReddot()
        end
    elseif buttonName == "ThreeClear" then
        local threeClearButton = App.scene:GetWidget(CONST.MAINUI.ICONS.ThreeClearButton)
        if threeClearButton then
            threeClearButton:ShowRedDot()
        end
    elseif buttonName == "TreasureMap" then
        local btn = App.scene:GetWidget(CONST.MAINUI.ICONS.TreasureMapButton)
        if btn then
            btn:UpdateRedDot()
        end
        local btnClue =  App.scene:GetWidget(CONST.MAINUI.ICONS.ClueMapButton)
        if btnClue then
            btnClue:UpdateRedDot()
        end
    end
    self.view:RefreshRedDot(buttonName)
end

function MainCity:RefreshWidgetData(buttonName)
    local widgetButton = App.scene:GetWidget(buttonName)
    if widgetButton then
        widgetButton:RefreshData()
    end
end

function MainCity:RecordLastSceneName()
    local sceneId = self:GetCurrentSceneId()
    local cfg = AppServices.Meta:GetSceneCfg(sceneId)
    -- 遗迹场景不存这个
    -- 迷宫(6)也不存
    if cfg.type == SceneType.Remains or cfg.type == SceneType.Maze then
        return
    end
    if cfg.whetherRecordPos == 0 then
        return
    end
    AppServices.User.Default:SetKeyValue(UserDefaultKeys.KeyLastSceneName, sceneId, true)
end

function MainCity:RecordAddedItems(itemId, count)
    if not self.addedItems[itemId] then
        self.addedItems[itemId] = 0
    end
    self.addedItems[itemId] = self.addedItems[itemId] + count
end

function MainCity:OnGetPartner(templateId, count, creatureId)
    self:CheckScenePartnerTip(templateId)
end
function MainCity:OnAddItem(itemId, diffNum)
    self:CheckScenePartnerTip(itemId)
end

--- 场景内 获得过伙伴或者该伙伴的碎片 关卡选择界面就不再提示奖励图标了
function MainCity:CheckScenePartnerTip(itemId)
    -- console.warn(">>>  my    Check Scene  Parnter  Tip  "..tostring(itemId))
    if self.partnerId == nil then
        local sceneId = App.scene:GetCurrentSceneId()
        local config = AppServices.Meta:Category("SceneTemplate")[sceneId]
        if config ~= nil then

            local partnertips = table.deserialize(config.partnertips)
            if not table.isEmpty(partnertips) then
                self.partnerId = tostring(partnertips[1][1])
                local itemConfig = AppServices.Meta:Category("ItemTemplate")[self.partnerId]
                if itemConfig ~= nil then
                    self.parnterConvertId = tostring(itemConfig.itemConvert[1]) or -1
                end
            end
        end
        if self.partnerId == nil then self.partnerId = -1 end
        if self.parnterConvertId == nil then self.parnterConvertId = -1 end
    end
    -- console.warn(">>>  my   >>  "..tostring(self.partnerId).."   "..tostring(self.parnterConvertId).."  "..tostring(itemId).."  "..type(self.parnterConvertId)..": "..type(itemId))
    if self.partnerId == itemId or self.parnterConvertId == itemId then
        local sceneId = App.scene:GetCurrentSceneId()
        AppServices.User.Default:SetKeyValue("LevelRewardTip"..tostring(sceneId), true)
    end
end

function MainCity:GetAddedItems()
    local temp = self.addedItems
    self.addedItems = {}
    return temp
end

function MainCity:GetServerMapData()
    return self.extraParam.serverMapData
end

function MainCity:DrawGizmos()
    if not self.alive then
        return
    end
    if self.isDestroyed then
        return
    end
    if self.mapManager then
        self.mapManager:DrawGizmos()
    end
    SceneServices.ObjectManager:DrawGizmos()
    if self.interaction then
        self.interaction:DrawGizmos()
    end
end

function MainCity:BuildRepaired(id)
    local sceneId = App.scene:GetCurrentSceneId()
    local isListener = self:CheckIsPayLevelMap(sceneId)
    if not isListener then
        return
    end
    if self.buildMsg == nil then
        self.buildMsg = {}
    end

    if self.buildMsg[id] == nil then
        self.buildMsg[id] = true
    end

    local _count = 0
    for k,v in pairs(self.buildMsg) do
        _count = _count + 1
    end
    if _count == 2 then
        AppServices.BuildingRepair:InitSceneBuildings()
    end
end

function MainCity:CheckIsPayLevelMap(curSceneId)
    local _cfg = AppServices.Meta:Category("TaskBuildingTemplate")
    for k,v in pairs(_cfg) do
        if v.sceneid == curSceneId  and v.levelitem1PayLevelMap ~= nil and v.levelitem1PayLevelMap ~= "" then
            return true
        end
    end
    return false
end


function MainCity:OnActive(isActive)
    if self.layout ~= nil then
        self.layout:SetActive(isActive)
    end
end

function MainCity:Quit()
end

function MainCity:Destroy()
    self.alive = nil
    local logicList = {}
    local function RegistDestroy(func)
        table.insert(logicList, func)
    end

    RegistDestroy(function ()
        XGE.EffectExtension.ActorSpotEffect(false)
    end)

    RegistDestroy(function ()
        AppServices.TaskIconButtonLogic:UnbindView()
    end)
    RegistDestroy(function ()
        SuperCls.Destroy(self)
    end)

    RegistDestroy(function ()
        console.systrace("MainCity.Destroy") --@DEL
        removeMediator("MainCity.Mediator.MainCityMediator")
    end)

    RegistDestroy(function ()
        App.popupQueue:Clear()
        console.trace(nil, "clear app queue") --@DEL
    end)
    RegistDestroy(function ()
        if self.interaction then
            self.interaction:Destroy()
            self.interaction = nil
        end
    end)
    RegistDestroy(function ()
        MoveCameraLogic.Destroy()
    end)

    RegistDestroy(function ()
        self.view:Destroy()
    end)
    RegistDestroy(function ()
        if self.director then
            self.director:Clear(true)
        end
        self.director = nil
    end)

    RegistDestroy(function ()
        MapBubbleManager:Destroy()
    end)
    RegistDestroy(function ()
        AppServices.FoodContainer:OnDestroy()
    end)
    RegistDestroy(function ()
        AppServices.FarmManager:OnDestroy()
    end)
    RegistDestroy(function ()
        AppServices.EventDispatcher:removeObserver(self, GlobalEvents.SWITCH_SCENECAMERA)
    end)
    RegistDestroy(function ()
        SceneServices:OnDestroy()
    end)
    RegistDestroy(function ()
        self.showRightIconsCbs = {}
    end)
    RegistDestroy(function ()
        self.mapManager:OnDestroy()
    end)
    RegistDestroy(function ()
        AppServices.TwoMergeManager:OnDestroy()
    end)
    RegistDestroy(function ()
        AppServices.TwoMergeMapGridManager:OnDestroy()
    end)

    RegistDestroy(function()
        AppServices.NewerGiftManager:OnDestroy()
    end)


    MessageDispatcher:RemoveMessageListener(MessageType.Msg_SafeAreaPanel_Enabled, self.OnActive, self)

    do
        for index, func in ipairs(logicList) do
            local result = Runtime.InvokeCbk(func)
            if not result then
                console.error("maincity销毁有错误"..index) --DEL
            end
        end
    end
    self.SceneCamera = nil
end

return MainCity
