local enclosuresagent = require("MainCity.Agent.EnclosuresAgent")
---@class GetWay
local GetWay = {}

local handleGetType = {
    [GetWayType.Text] = function(itemId)
        local meta = AppServices.Meta:GetItemMeta(itemId)
        local key = meta.getWayParam
        local str = Runtime.Translate(key)
        AppServices.UITextTip:Show(str)
    end,
    [GetWayType.diamondShop] = function(itemId)
        local isShowAll
        local horizontalNormalizedPosition
        if itemId == ItemId.DRAGONBREED then
            isShowAll = true
            horizontalNormalizedPosition = 1
        end
        AppServices.Jump.JumpShop(
            2,
            GlobalPanelEnum.BagPanel,
            function()
                PanelManager.showPanel(GlobalPanelEnum.BagPanel)
            end,
            isShowAll,
            horizontalNormalizedPosition
        )
    end,
    [GetWayType.factory] = function(itemId)
        itemId = tostring(itemId)
        ---@type FactoryRoomPanel
        local factoryRoomPanel = PanelManager.GetPanel(GlobalPanelEnum.FactoryRoomPanel.panelName)
        ---@type FactoryCenterPanel
        local factoryCenterPanel = PanelManager.GetPanel(GlobalPanelEnum.FactoryCenterPanel.panelName)
        if factoryRoomPanel and factoryCenterPanel then
            if PanelManager.isPanelShowing(GlobalPanelEnum.BuyItemPanel) then
                PanelManager.closePanel(GlobalPanelEnum.BuyItemPanel)
            end

            if not factoryRoomPanel:JumpInRoom(itemId) then
                -- local observer = {}
                -- local onPanelDestroyed
                -- onPanelDestroyed = function()
                --     factoryCenterPanel:JumpInFactory(itemId)
                --     AppServices.EventDispatcher:removeObserver(observer, GlobalEvents.PanelDestroyed, onPanelDestroyed)
                -- end
                -- AppServices.EventDispatcher:addObserver(observer, GlobalEvents.PanelDestroyed, onPanelDestroyed)
                ---@type BaseMediator
                local mediator = facade:retrieveMediator(factoryRoomPanel.panelVO.mediatorPath)
                local pcb = PanelCallbacks:Create(function()
                    if factoryCenterPanel then
                        factoryCenterPanel:JumpInFactory(itemId)
                    end
                end)
                mediator.callbacks = pcb
                PanelManager.closePanel(factoryRoomPanel.panelVO)
            end
        else
            PanelManager.closeAllPanels()
            local canProduct, needLevel = AppServices.FactoryManager:CanProduct(itemId)
            if canProduct then
                AppServices.Jump.FocusFactory(itemId)
            else
                AppServices.UITextTip:Show(Runtime.Translate("ui_system_unlock_level", {level = tostring(needLevel)}))
            end
        end
    end,
    [GetWayType.dragon] = function(itemId)
        AppServices.Jump.FocusDragonByItem(itemId)
    end,
    [GetWayType.clean] = function(itemId, showArrow)
        PanelManager.closeAllPanels()
        if showArrow == nil then
            showArrow = true
        end
        return AppServices.Jump.AutoByItemId(
            itemId,
            GlobalPanelEnum.BagPanel,
            AutoJumpType.ShowWorldMapOnly,
            nil,
            showArrow
        )
    end,
    [GetWayType.coinShop] = function(_, backPanel, param)
        AppServices.Jump.JumpShop(
            1,
            backPanel or GlobalPanelEnum.BagPanel,
            function()
                PanelManager.showPanel(backPanel or GlobalPanelEnum.BagPanel, param)
            end
        )
    end,
    [GetWayType.open] = function(itemId)
        local params = {
            itemTemplateId = itemId,
            count = 1
        }
        local function onFail(errorCode)
            PanelManager.closeAllPanels()
            ErrorHandler.ShowErrorPanel(errorCode)
        end

        local function onSuc(msg)
            AppServices.User:UseItem(params.itemTemplateId, params.count, ItemUseMethod)
            -- PanelManager.closeAllPanels()
            --PanelManager.hidePanel(GlobalPanelEnum.BagPanel)
            PanelManager.closePanel(GlobalPanelEnum.BagPanel)
            local response = Net.Converter.ConvertUseItemResponse(msg)
            local rwds = {}
            for _, item in pairs(response.items) do
                local amount = AppServices.User:GetItemAmount(item.itemTemplateId)
                local delta = {
                    ItemId = item.itemTemplateId,
                    Amount = item.count - amount
                }
                table.insert(rwds, delta)

                AppServices.User:SetPropNumber(item.itemTemplateId, item.count)
            end
            local function onClosecbk()
                -- PanelManager.showPanel(GlobalPanelEnum.BagPanel, {prePos = true})
                -- if bagItem then
                --     bagItem:Refresh()
                -- end
                PanelManager.showPanel(GlobalPanelEnum.BagPanel, {prePos = true})
                MessageDispatcher:SendMessage(MessageType.GetWay_Open_Closed, itemId)
            end
            PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, {rewards = rwds, closeCallback = onClosecbk})
        end
        Net.Itemmodulemsg_2002_UseItem_Request(params, onFail, onSuc, nil, true)
    end,
    [GetWayType.commission] = function(itemId)
        PanelManager.closeAllPanels()
        local meta = AppServices.Meta:Category("CommissionTemplate")
        local param = {
            state = 0,
            sceneId = nil
        }
        local function set(sceneId, state)
            param.sceneId = sceneId
            param.state = state
        end
        local validators = CONST.RULES.SceneUnlocked
        for _, v in pairs(meta) do
            for _, rd in ipairs(v.reward) do
                if tostring(rd[1]) == itemId then
                    local unlocked = validators(v.sceneID)
                    local stars = AppServices.SceneCloseInfo:GetSceneStarEx(v.sceneID)
                    local usable = #stars == 3
                    local state = usable and 3 or unlocked and 1 or 0
                    if param.sceneId then
                        if param.state < state then
                            set(v.sceneID, state)
                        elseif param.state == state then
                            local tId = tonumber(v.sceneID)
                            local sId = tonumber(param.sceneId)
                            if state == 0 then
                                if tId < sId then
                                    set(v.sceneID, state)
                                end
                            else
                                if tId > sId then
                                    set(v.sceneID, state)
                                end
                            end
                        end
                    else
                        set(v.sceneID, state)
                    end
                end
            end
        end
        AppServices.Jump.Command_ToCommission(param.sceneId)
    end,
    [GetWayType.farmland] = function(itemId)
        PanelManager.closeAllPanels()
        AppServices.Jump.FocusFarmLand(itemId)
    end,
    [GetWayType.map] = function(sceneId)
        if not sceneId then
            return
        end
        PanelManager.closeAllPanels()
        local mapProcessor = require "UI.HomeScene.WorldMapPanel.OpenWorldMapProcessor"
        mapProcessor.Start({targetSceneId = sceneId})
    end,
    [GetWayType.maze] = function(itemId)
        if App.scene:GetSceneType() == SceneType.Maze then
            if AppServices.Jump.FocusByItemId2AgentTemplate(itemId) then
                PanelManager.closeAllPanels()
            else
                AppServices.UITextTip:Show(Runtime.Translate("item_getway_2200"))
            end
        else
            PanelManager.closeAllPanels()
            AppServices.Jump.FocusMazeEntry(itemId)
        end
    end,
    [GetWayType.dress] = function(itemId)
        PanelManager.closeAllPanels()
        PanelManager.showPanel(GlobalPanelEnum.UserInfoPanel, {targetSkin = itemId})
    end,
    [GetWayType.dragonDress] = function(itemId)
        PanelManager.closeAllPanels()
        -- AppServices.Jump.FocusDragonInfoBuilding()
        local creature = AppServices.MagicalCreatures:GetCreatureByType(101) or {}
        PanelManager.showPanel(GlobalPanelEnum.PartnerMainPanel, {searchId = creature.creatureId, tabIndex = 4})
    end,
    [GetWayType.dressHouse] = function(itemId)
        -- local UnlockKey = "equipProduct"
        -- if AppServices.Unlock:IsUnlockOrShowTip(UnlockKey) then
        PanelManager.closeAllPanels()
        AppServices.Jump.Command_ToDressingHut({tplId = itemId})
        -- else
        --     local skinConfig = AppServices.Meta:Category("SkinTemplate")[itemId]
        --     if skinConfig then
        --         AppServices.UITextTip:Show(Runtime.Translate(skinConfig.drawingGetWayDesc))
        --     end
        -- end
    end,
    [GetWayType.marathon] = function()
        PanelManager.closeAllPanels()
        local params = {
            agentType = AgentType.obstacle,
            CanJumpNotClearing = true,
            MutiArrow = false,
            noCleard = true,
            lookupWay = LookUpWay.NearPlayer
        }
        return AppServices.Jump.FocusAgentByType(params)
    end,
    [GetWayType.breed] = function(itemId)
        PanelManager.closeAllPanels()
        local config = AppServices.Meta:GetItemMeta(itemId)
        local dragonId
        if config.type == ItemId.EType.Gene then
            dragonId = tostring(config.funcParam[1])
        elseif ItemId.IsDragon(itemId) then
            dragonId = itemId
        end
        return AppServices.Jump.FocusBreed(dragonId, AutoJumpType.ShowWorldMapOnly)
    end,
    [GetWayType.partnerObject] = function(itemId)
        PanelManager.closeAllPanels()
        local partnerType = AppServices.Meta:GetItemFuncParam(itemId)
        return AppServices.Jump.FoucsPartnerByType(partnerType, AutoJumpType.ShowWorldMapOnly)
    end,
    [GetWayType.star] = function(params)
        PanelManager.closeAllPanels()
        local mapProcessor = require "UI.HomeScene.WorldMapPanel.OpenWorldMapProcessor"
        mapProcessor.Start()
    end,
    [GetWayType.prosperity] = function()
        --弹出提示：修复小镇破损的建筑可提升环境值
        local tip = Runtime.Translate("item_desc2_1005")
        AppServices.UITextTip:Show(tip)
        --点击定位到已解锁且可修复的建筑上
        local mgr = AppServices.BuildingRepair
        local sceneId = App.scene:GetCurrentSceneId()
        local sceneDatas = mgr._reapirDatas[sceneId]
        if not sceneDatas then
            return
        end

        local ts = CS.System.DateTime.Now --@DEL
        --templateid 顺序
        -- rewards ={{"1000",80},{"4228",1}}
        local taskUnlockedAgents = {}
        local minLevel
        local minLvAgent
        for agentId, repairData in pairs(sceneDatas) do
            local agent = SceneServices.ObjectManager:GetAgent(agentId)
            if agent and agent.alive then
                local state = agent:GetState()
                if state > CleanState.prepare then
                    local buildCfg = AppServices.Meta:GetBuildingRepair(agent:GetTemplateId())
                    local produce = false
                    local _, rewards = AppServices.BuildingRepair.GetLevelItemsWithCfg(buildCfg, 1)
                    for _, reward in ipairs(rewards) do
                        if tostring(reward[1]) == ItemId.Prosperity then
                            produce = true
                            break
                        end
                    end
                    if produce then
                        --repairData:CanRepaire()
                        if AppServices.BuildingRepair:IsTaskUnlock(agentId) then
                            table.insert(taskUnlockedAgents, agent)
                        else
                            local roleLv = agent:GetMeta().roleLevel
                            if roleLv ~= 0 then
                                if not minLevel or minLevel > roleLv then
                                    minLevel = roleLv
                                    minLvAgent = agent
                                end
                            end
                        end
                    end
                end
            end
        end

        local dis
        local near
        local pos = MoveCameraLogic.Instance():GetCameraFlatPosition()
        for _, agent in pairs(taskUnlockedAgents) do
            local center = agent:GetCenterPostion()
            if center then
                local td = center:FlatDistance(pos)
                if not dis or td < dis then
                    dis = td
                    near = agent
                end
            end
        end
        if not near then
            near = minLvAgent
        end
        local delta = CS.System.DateTime.Now - ts --@DEL
        console.hjs("GetWayType.prosperity cost:" .. delta.TotalSeconds) --@DEL

        if near then
            PanelManager.closeAllPanels()
            AppServices.Jump.FocusAgent(near)
        end
    end,
    [GetWayType.star] = function(params)
        PanelManager.closeAllPanels()
        local mapProcessor = require "UI.HomeScene.WorldMapPanel.OpenWorldMapProcessor"
        mapProcessor.Start()
    end,
    [GetWayType.fairtyTales] = function()
        PanelManager.closeAllPanels()
        --弹出提示:升级或升星伙伴可提升童话之力
        local tip = Runtime.Translate("unlock_area_partner_less_dec")
        AppServices.UITextTip:Show(tip)
        AppServices.Jump.FocusPartnerBook()
    end,
    [GetWayType.diamondWish] = function()
        PanelManager.closeAllPanels()
        if AppServices.DragonDraw:IsUnlock() then
            PanelManager.showPanel(GlobalPanelEnum.DragonDrawPanel)
        else
            local agent = SceneServices.ObjectManager:GetAgentByType(AgentType.DragonDraw)
            if agent then
                AppServices.Jump.FocusAgent(agent)
            end
        end
    end,
    [GetWayType.activityScoreReward] = function(itemId)
        console.lzl("GetWay activityScoreReward") --@DEL
        local activityId, itemIndex
        --获取所有积分活动
        local inss = ActivityServices.ActivityManager:GetActivityInstancesByType(ActivityType.Map)
        if table.isEmpty(inss) then
            return
        end
        local mgr = AppServices.TreasureMapManager

        for _, activityIns in ipairs(inss) do
            local aid = activityIns:GetActivityId()
            if mgr:IsActivityHasTreasureMap(aid) then
                local activityCfg = activityIns:GetActivityConfig()
                local cfgRewards = activityCfg.reward
                --查找积分奖励 确定索引
                local curAwardIndex = activityIns:GetScoreAwardIndex()
                for index, reward in ipairs(cfgRewards) do
                    for i = 2, #reward - 1, 2 do
                        local rewardId = tostring(reward[i])
                        if itemId == rewardId then
                            local isDone = curAwardIndex >= index
                            if not isDone then
                                activityId = aid
                                itemIndex = index
                                break
                            end
                        end
                    end
                    if activityId then
                        break
                    end
                end
            end
        end
        if not activityId then
            return
    end
        --打开界面
        PanelManager.showPanel(GlobalPanelEnum.ActivityTaskRankPanel, {activityId = activityId, showScoreRewardIndex=itemIndex})
        return true
    end,
    [GetWayType.itemToGift] = function(itemId)
        AppServices.Jump.ItemToGift(itemId)
    end,
    [GetWayType.itemToFactoryItemfuncParam] = function (itemId)
        local agent = AppServices.Jump.GetItemToFactoryItemfuncParam(itemId)
        if agent then
            AppServices.Jump.FocusAgent(agent)
        else
            AppServices.Jump.ItemToGift(itemId)
        end
        return true
    end,
    [GetWayType.adsMonthCard] = function(itemId)
		require("Game.Processors.RequestIAPProcessor").Start(
                    function()
                        PanelManager.closeAllPanels()
                        PanelManager.showPanel(GlobalPanelEnum.MoneyShopPanel, {selectIndex = MoneyShopPage.adsMonth})
                    end
                )
    end,
    [GetWayType.TimeOrder] = function()
        if not AppServices.TimeOrder:IsUnlock() then
            local str = Runtime.Translate("UI_JamClear_desc58")
            UITool.ShowContentTipAniFromScreenPos(str)
        end

        local jumpFunction = function()
            PanelManager.closeAllPanels()
            local agent = SceneServices.ObjectManager:GetAgentByType(AgentType.timeOrderDock)
            if not agent then
                return
            end
            local callback = function()
                if agent:CanBeSeen() then
                    AppServices.TimeOrder:ShowPanel()
                end
            end
            AppServices.Jump.FocusAgent(agent, callback)
        end

        if not App.scene:IsMainCity() then
            AppServices.Jump.JumpScene(
                SceneMode.home.name,
                AutoJumpType.ShowWorldMapOnly,
                AppServices.Jump.addJumpSceneCallback(
                    function()
                        if not App.scene:IsMainCity() then
                            return
                        end
                        Runtime.InvokeCbk(jumpFunction)
                    end
                )
            )
        else
            Runtime.InvokeCbk(jumpFunction)
        end
    end,
    [GetWayType.MapActivity] = function()
        local ids = ActivityServices.ActivityManager:GetActivityIdsByType(ActivityType.Map)
        local isBeginnerRunning = ActivityServices.BeginnerSceneActivityManager:IsRunningActivity()
        if #ids > 0 and not isBeginnerRunning then
            PanelManager.closeAllPanels()

            local activityId = ids[1]
            PanelManager.showPanel(GlobalPanelEnum.ActivityTaskRankPanel, { activityId = activityId })
        else
            local str = Runtime.Translate("ui_getway_fb_nounlock")
            UITool.ShowContentTipAniFromScreenPos(str)
        end
    end,
    [GetWayType.DolphinIsLand] = function()
        PanelManager.closeAllPanels()
        local date = require("Game.Activities.ExpendEnergyRewards.ExpendEnergyRewardsData")
        if date:IsEnd() then
            AppServices.UITextTip:Show(Runtime.Translate("UI_no_open"))
            return
        end
        PanelManager.showPanel(GlobalPanelEnum.ExpendEnergyRewardsPanel)
    end,
    
    [GetWayType.DolphinIsLandAttach] = function(itemId)
        local cfg = AppServices.Meta:GetItemMeta(tostring(itemId))
        local buildList =  table.deserialize(cfg.getWayParam)
        if buildList == nil then
            console.error("item表的getWayParam字段有误 ： ID == ", itemId)
            return
        end

        local curAgentId = 0
        for k,v in pairs(buildList) do
            local agents = SceneServices.ObjectManager:GetAgentsByTemplateId(tostring(v))
            if agents then
                if #agents == 1 then
                    curAgentId = agents[1]
                else
                    local startPosition = MoveCameraLogic.Instance():GetCameraFlatPosition()
                    if startPosition then
                        local minDis
                        for _, a in ipairs(agents) do
                            local curPos = a:GetWorldPosition()
                            local dis = Vector3.Distance(curPos, startPosition)
                            if not minDis or minDis > dis then
                                minDis = dis
                                curAgentId = a
                            end
                        end
                    else
                        curAgentId = agents[1]
                    end
                end
                break
            end
        end
        if curAgentId == 0  then
            local str = Runtime.Translate("ui_DolphinIsland_find_1")
            UITool.ShowContentTipAniFromScreenPos(str)
            return
        end
        AppServices.Jump.FocusAgentById(curAgentId:GetId())
        PanelManager.closeAllPanels()
    end,
    [GetWayType.TwoMergeLink] = function(itemId)
        -- 32修改一下，直接按groupId找生成器高亮，这样就在一张表里了。
        -- 找到这个生成器玩家在棋盘上拥有的最高级
        -- 所以参数就是两位，活动ID+groupId
        local activityId = AppServices.TwoMergeManager:GetMapId()
        if not activityId then
            return
        end

        local params = {
            mapId = activityId,
            jumpType = GetWayType.TwoMergeLink,
            jumpItemId = itemId,
        }
        PanelManager.showPanel(GlobalPanelEnum.TwoMergePanel, params)
    end,
    [GetWayType.TwoMergeId] = function(itemId)
        local activityId = AppServices.TwoMergeManager:GetMapId()
        if not activityId then
            return
        end

        local params = {
            mapId = activityId,
            jumpType = GetWayType.TwoMergeId,
            jumpItemId = itemId,
        }
        PanelManager.showPanel(GlobalPanelEnum.TwoMergePanel, params)
    end,
}

local GetWayTextKey = {
    [GetWayType.factory] = function(itemId)
        local factoryId, config = AppServices.FactoryManager:GetFactoryByItem(itemId)
        if factoryId then
            return config.name, "ui_common_get"
        end
    end,
    [GetWayType.dragon] = function(itemId)
        local configs = AppServices.MagicalCreatures:GetConfigsByProduct(itemId)
        return configs and configs[1] and configs[1].name, "ui_common_get"
    end,
    [GetWayType.open] = function()
        return "ui_dragonHelpBox_open"
    end,
    [GetWayType.clean] = function()
        return "UI_getway_tansuo"
    end,
    [GetWayType.commission] = function()
        return "UI_getway_commission"
    end,
    [GetWayType.useGene] = function()
        return "ui_gene_11"
    end,
    [GetWayType.dress] = function()
        return "UI_bagSkin_npc_button1"
    end,
    [GetWayType.dragonDress] = function()
        return "UI_bagSkin_npc_button1"
    end,
    [GetWayType.partnerObject] = function()
        return "ui_gene_11"
    end,
    [GetWayType.diamondWish] = function()
        return "UI_wish_diamond"
    end,
    [GetWayType.TimeOrder] = function()
        return "ui_timeOrder_title"
    end,
    [GetWayType.MapActivity] = function()
        return "ui_getway_fb"
    end,
}

setmetatable(
    GetWayTextKey,
    {
        __index = function(t, k)
            return function()
                return "ui_common_get"
            end
        end
    }
)

local checkGetWayUnlock = {
    [GetWayType.commission] = function()
        local unlock = AppServices.Unlock:IsUnlock("commission")
        -- if not unlock then
        --     UITool.ShowContentTipAni(Runtime.Translate("UI_Partner_handbook_text_12"))
        -- end
        return unlock
    end
}

function GetWay.getWays(itemId)
    local cfg = AppServices.Meta:GetItemMeta(itemId)
    if not table.isEmpty(cfg.getWays) then
        return cfg.getWays
    else
        return {cfg.getWay}
    end
end

function GetWay.get(itemId, specifiedGetWays)
    local handles = {}
    local ways = specifiedGetWays and specifiedGetWays or GetWay.getWays(itemId)
    for _, w in ipairs(ways) do
        local h = handleGetType[w]
        if not checkGetWayUnlock[w] or checkGetWayUnlock[w]() then
            local strKey1, strKey2 = GetWayTextKey[w](itemId)
            table.insert(handles, {str = strKey1, str2 = strKey2, handle = h})
        end
    end
    return handles
end

function GetWay.GetWayByType(type)
    return { str = GetWayTextKey[type]() or "nil", handle = handleGetType[type] }
end

function GetWay.GetTwoMergeWays(itemId)
    local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[tostring(itemId)]
    if string.isEmpty(cfg.getWays) then return cfg.getWays end
    if not table.isEmpty(cfg.getWays) then
        return cfg.getWays
    else
        return {cfg.getWay}
    end
end

function GetWay.GetTwoMerge(itemId)
    local ways = GetWay.GetTwoMergeWays(itemId)
    local handles = {}
    for _, w in ipairs(ways) do
        local h = handleGetType[w]
        local strKey1, strKey2 = GetWayTextKey[w](itemId)
        table.insert(handles, {str = strKey1, str2 = strKey2, handle = h})
    end
    return handles
end

return GetWay
