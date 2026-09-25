--- @class BuildingRepairManager
local BuildingRepairManager = {
    ---@type dictionary<string, dictionary<string, dictionary<string, int>>>
    listenDatas = {},
    ---@type dictionary<string, dictionary<string, bool>>
    item2AgentIds = {},
    ---修复状态
    ---@type dictionary<string, dictionary<string, BuildingRepairData>>
    _reapirDatas = {},
    _fullLevelAgent = {},
    _shakingRequestAgentIds = {},
    _onShakeAgentIds25318 = {},
    _onShakeAgentIds29209 = {},
    registers_onsecond = {}
}
---@type BuildingRepairData
local BuildingRepairData = require("MainCity.Component.BuildingRepairData")

---获取建筑修复信息
---@return BuildingRepairData
function BuildingRepairManager:GetRepairDate(sceneId, agentId)
    local sceneDatas = self._reapirDatas[sceneId]
    if not sceneDatas then
        sceneDatas = {}
        self._reapirDatas[sceneId] = sceneDatas
    end
    ---@type BuildingRepairData
    local repairData = sceneDatas[agentId]
    if not repairData then
        return
    end
    return repairData
end

function BuildingRepairManager:GetRepairDateByTemplateId(sceneId, templateId)
    local sceneDatas = self._reapirDatas[sceneId]
    if not sceneDatas then
        sceneDatas = {}
        self._reapirDatas[sceneId] = sceneDatas
    end
    local infos = nil
    for _, v in pairs(sceneDatas) do
        if v.templateId == templateId then
            -- return v
            infos = infos or {}
            table.insert(infos, v)
        end
    end
    return infos
end

---删除建筑修复信息
function BuildingRepairManager:RemoveRepairData(sceneId, agentId)
    local sceneDatas = self._reapirDatas[sceneId]
    if not sceneDatas then
        return
    end
    ---@type BuildingRepairData
    local repairData = sceneDatas[agentId]
    if not repairData then
        return
    else
        local widget = App.scene:GetWidget(CONST.MAINUI.ICONS.BuldingRepairBtns)
        if widget then
            widget:RemoveRepairData(repairData)
        end
        repairData:Destroy()
        sceneDatas[agentId] = nil
    end
end

---Agent初始化的同时, 初始化BuildingRepairData
function BuildingRepairManager:InitRepairDataByBuildingMsg(
    sceneId,
    agentId,
    templateId,
    buildingMsg,
    otherSceneCheck,
    isLogin)
    local sceneDatas = self._reapirDatas[sceneId]
    if not sceneDatas then
        sceneDatas = {}
        self._reapirDatas[sceneId] = sceneDatas
    end
    ---@type BuildingRepairData
    local repairData = sceneDatas[agentId]
    if not repairData then
        BuildingRepairData = BuildingRepairData or require("MainCity.Component.BuildingRepairData")
        repairData = BuildingRepairData.new(sceneId, agentId, templateId, buildingMsg)
        sceneDatas[agentId] = repairData
    else
        repairData:UpdateBuildingMsg(buildingMsg)
    end
    if otherSceneCheck then
        repairData:CheckOtherScene(isLogin)
    end
end

function BuildingRepairManager:SetLevelFull(sceneId, agentId, levelmax)
    self._fullLevelAgent[sceneId] = self._fullLevelAgent[sceneId] or {}
    self._fullLevelAgent[sceneId][agentId] = levelmax
end

---获取agent的等级
function BuildingRepairManager:GetLevel(sceneId, agentId, noDefault)
    local repairData = self:GetRepairDate(sceneId, agentId)
    local level = repairData and repairData.level
    if not level then
        if self._fullLevelAgent[sceneId] and self._fullLevelAgent[sceneId][agentId] then
            return self._fullLevelAgent[sceneId][agentId]
        end
        if noDefault then
            return
        else
            return 1
        end
    end
    return level
end

function BuildingRepairManager:SetLevel(sceneId, agentId, level, templateId)
    local repairData = self:GetRepairDate(sceneId, agentId)
    if repairData then
        repairData:UpdateLevel(level)
    else
        if templateId then
            self:InitRepairDataByBuildingMsg(sceneId, agentId, templateId, { level = level, progress = 0 })
        end
    end
end

---设置agent的等级
function BuildingRepairManager:BuildingLevelUp(sceneId, agentId, templateId, newLevel, animaOverCallback, noMsg,
                                               repairDrawMsg, extParams)
    sendNotification(CONST.GLOBAL_NOFITY.BuildRepair_LevelUp_Done, {})
    local repairData = self:GetRepairDate(sceneId, agentId)
    if repairData then
        repairData:LevelUp(newLevel)
    end
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local levelMax = cfg.levelmax
    local levelFull = levelMax == newLevel
    ---@type BaseAgent
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    if not agent then
        Runtime.InvokeCbk(animaOverCallback)
        Util.BlockAll(0, "BuildingRepairManager")
        if not noMsg then
            self:LvupMessage(agentId, templateId, newLevel)
        end
        return
    end
    PanelManager.closePanel(GlobalPanelEnum.BuildingTaskPanel)
    local cleanDrama = cfg.CleanOnDramaBegin ~= "" and cfg.CleanOnDramaBegin
    if extParams and extParams.noDrama then
        cleanDrama = nil
    end
    local setClean = levelFull and not cleanDrama
    local noAnima = false
    if extParams and extParams.noAnima then
        noAnima = true
    end
    MessageDispatcher:SendMessage(
        MessageType.Global_Before_RepaireBuilding_Animation,
        sceneId,
        agentId,
        templateId,
        newLevel,
        levelFull
    )
    self:CheckBatchRequest(sceneId, agentId)
    --- drama控制动画
    if cfg.DramaControl and cfg.DramaControl[newLevel - 1] == 1 then
        noAnima = true
        ---需要先解锁, 要不然没法点击drama
        Util.BlockAll(0, "BuildingRepairManager")
    end
    if levelFull and cfg.CleanOnDramaOver and cfg.CleanOnDramaOver ~= "" then
        if setClean then
            setClean = false
        end
        repairData:SetCleanOnDramaOver(repairDrawMsg)
    end
    console.lzl("BuildingLevelUp_Log SetRepaireLevel", sceneId, agentId, templateId, newLevel) --@DEL
    agent:SetRepaireLevel(newLevel, setClean, animaOverCallback, noMsg, noAnima, repairDrawMsg)
    --满级了, 并且需要在drama开始播放的时候 清理掉这个障碍物
    if levelFull and cleanDrama then
        Util.BlockAll(0, "BuildingRepairManager")
        repairData:SetCleanOnDramaPlay(repairDrawMsg)
    end
end

function BuildingRepairManager:PushBatchRepair(sceneId, agentId, templateId, lvupAgengId)
    if not self._batchRepairRequest then
        self._batchRepairRequest = {}
    end
    self._batchRepairRequest[sceneId] = self._batchRepairRequest[sceneId] or {}
    local datas = self._batchRepairRequest[sceneId][lvupAgengId]
    if not datas then
        datas = {}
        self._batchRepairRequest[sceneId][lvupAgengId] = datas
    end
    table.insert(datas, { templateId = templateId, agentId = agentId })
end

---检查建筑升级触发的其他建筑升级的批量请求
function BuildingRepairManager:CheckBatchRequest(sceneId, agentId)
    if not self._batchRepairRequest or not self._batchRepairRequest[sceneId] then
        return
    end
    local batchRequest = self._batchRepairRequest[sceneId][agentId]
    if not batchRequest then
        return
    end
    self:BuildingLevelUpRequestBatch(sceneId, batchRequest, true)
    self._batchRepairRequest[sceneId][agentId] = nil
end

function BuildingRepairManager:BuildingLevelUpRequestBatch(sceneId, batchRequest, fastResponse, noDrama)
    local plantIds = {}
    for _, v in ipairs(batchRequest) do
        table.insert(plantIds, v.agentId)
    end
    if fastResponse then
        for _, v in ipairs(batchRequest) do
            local agentId, templateId = v.agentId, v.templateId
            local curLevel = self:GetLevel(sceneId, agentId)
            -- local cfg = AppServices.Meta:GetBuildingRepair(templateId)
            -- local levelMax = cfg.levelmax
            local repairKind = self:getRepairKind(templateId, curLevel)
            local extParams = self:getExtParamByRepairKind(repairKind, sceneId, agentId, templateId)
            if noDrama then
                extParams = extParams or {}
                extParams.noDrama = true
            end
            local lvupCallback = self:GetBuildingLevelUpCallback(repairKind)
            local response = {}
            Runtime.InvokeCbk(lvupCallback, self, sceneId, agentId, templateId, response, nil, extParams)
            -- lvupCallback = nil
        end
    end
    local funcSuccessCbk = function(res)
        if not fastResponse then
            local ress = {}
            for _, v in ipairs(res.results or {}) do
                local errrorCode = v.ret
                if errrorCode == 0 then
                    ress[v.plantId] = {
                        costEnergy = v.costEnergy,
                        repairDrawMsg = v.repairDrawMsg
                    }
                else
                    console.error("Scenemodulemsg_25338_AllBuildingLevelUp_Request", errrorCode) --@DEL
                    ErrorHandler.ShowErrorPanel(errrorCode)                                      --@DEL
                end
            end
            for _, v in ipairs(batchRequest) do
                local agentId, templateId = v.agentId, v.templateId
                local curLevel = self:GetLevel(sceneId, agentId)
                local repairKind = self:getRepairKind(templateId, curLevel)
                local extParams = self:getExtParamByRepairKind(repairKind, sceneId, agentId, templateId)
                local lvupCallback = self:GetBuildingLevelUpCallback(repairKind)
                local response = ress[agentId] or {}
                Runtime.InvokeCbk(lvupCallback, self, sceneId, agentId, templateId, response, nil, extParams)
                -- lvupCallback = nil
            end
        end
    end

    local funcFailedCbk = function(errorCode)
        console.error("Scenemodulemsg_25338_AllBuildingLevelUp_Request", errorCode) --@DEL
        ErrorHandler.ShowErrorPanel(errorCode)                                      --@DEL
    end

    local params = {
        sceneId = sceneId,
        plantIds = plantIds
    }
    console.lzl("---send Scenemodulemsg_25338_AllBuildingLevelUp_Request", sceneId, agentId, self) --@DEL
    Net.Scenemodulemsg_25338_AllBuildingLevelUp_Request(params, funcFailedCbk, funcSuccessCbk, nil, false)
end

------------------------------------------

---显示界面
---@param agentId string 实例ID
---@param templateId string 模板ID
function BuildingRepairManager:ShowPanel(agentId)
    local sceneId = App.scene:GetCurrentSceneId()
    local curLevel = self:GetLevel(sceneId, agentId, true)
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    local templateId = agent:GetTemplateId()
    local levelMax = AppServices.Meta:GetBuildingRepair(templateId).levelmax
    if curLevel >= levelMax then
        return true
    else
        local repairKind = self:getRepairKind(templateId, curLevel)
        if repairKind == BuildingRepairKind.AgentClean then
            if repairKind == BuildingRepairKind.AgentClean then
                local lvupItems = self.GetLevelItems(templateId, curLevel)
                local targetAgentId = tostring(lvupItems[1][2])
                local agent = SceneServices.ObjectManager:GetAgent(targetAgentId)
                if agent then
                    agent:ProcessClick()
                    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
                    if not string.isEmpty(cfg.ClickTips) then
                        local str = Runtime.Translate(cfg.ClickTips)
                        AppServices.UITextTip:Show(str, 2)
                    end
                end
            end
        end
        local pos = agent:GetAnchorPosition()
        local startPosition = MoveCameraLogic.Instance():GetCameraFlatPosition()
        local dis = pos:FlatDistance(startPosition)
        if dis > 1.5 then
            Util.BlockAll(2, "BuildingRepairManager:ShowPanel")
            AppServices.Jump.FocusAgentNoTip(
                agent,
                function()
                    Util.BlockAll(0, "BuildingRepairManager:ShowPanel")
                    self:showPanelEx(agentId, templateId, curLevel)
                end
            )
        else
            self:showPanelEx(agentId, templateId, curLevel)
        end
    end
end

function BuildingRepairManager:showPanelEx(agentId, templateId, level)
    local sceneId = App.scene:GetCurrentSceneId()
    local repairData = self:GetRepairDate(sceneId, agentId)
    local buildEndTime = repairData:GetBuildEndTime()
    if buildEndTime > 0 then
        local now = TimeUtil.ServerTime()
        if (now + 1.5) >= buildEndTime then
            self:TakeBuildingBuildAwardRequest(sceneId, agentId)
            return
        else
            return
            -- TODO 提示还没修复完或者钻石加速
        end
    end
    local repairKind = self:getRepairKind(templateId, level)
    if
        repairKind == BuildingRepairKind.AgentClean
        or repairKind == BuildingRepairKind.BuildingRepaired
        or repairKind == BuildingRepairKind.MonopolyLvup
        or repairKind == BuildingRepairKind.TaskFinish
    then
        local cfg = AppServices.Meta:GetBuildingRepair(templateId)
        if not string.isEmpty(cfg.ClickTips) then
            local str = Runtime.Translate(cfg.ClickTips)
            AppServices.UITextTip:Show(str, 2)
        end
    else
        local arguments = { agentId = agentId, templateId = templateId }
        local panelVO = GlobalPanelEnum.BuildingTaskPanel
        if PanelManager.isPanelExist(panelVO) and not PanelManager.isPanelShowing(panelVO) then
            local delayTime = 0.5
            Util.BlockAll(delayTime, "ShowBuildingTaskPanelWhenClosingBuildingTaskPanel")
            WaitExtension.SetTimeout(
                function()
                    PanelManager.showPanel(panelVO, arguments)
                end,
                delayTime)
        else
            PanelManager.showPanel(panelVO, arguments)
        end
    end
end

function BuildingRepairManager:LevelUp(agentId, templateId, finishCbk)
    local sceneId = App.scene:GetCurrentSceneId()
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    if not agent then
        console.error("can not find agent", sceneId, agentId)
        Runtime.InvokeCbk(finishCbk, false)
        return
    end

    if templateId ~= agent:GetTemplateId() then
        console.error("can not find agent templateId", sceneId, agentId, templateId, agent:GetTemplateId())
        Runtime.InvokeCbk(finishCbk, false)
        return
    end
    local curLevel = self:GetLevel(sceneId, agentId)
    local metaMgr = AppServices.Meta
    local cfg = metaMgr:GetBuildingRepair(templateId)
    if curLevel >= cfg.levelmax then
        console.error("level max", agentId, templateId, curLevel) --@DEL
        Runtime.InvokeCbk(finishCbk, false)
        return
    end
    local levelItems = self.GetLevelItems(templateId, curLevel)
    local exchangeItems = {}
    local notEnough = false
    local cost = 0
    local twoMergeCostList = {}
    for _, v in ipairs(levelItems) do
        local itemBigType, itemId, need = NormalItemBigType, v[1], v[2]
        if v[1] == TwoMergeCfgType then
            itemBigType, itemId, need = TwoMergeItemBigType, v[2], v[3]
            table.insert(twoMergeCostList, { itemId = tostring(itemId), count = need })
        end

        local have = ItemId:GetCount(itemBigType, itemId)
        if have < need then
            local id = tostring(itemId)
            local canBuyType = ItemId.CanBuyByDiamond(id, itemBigType) --2,3,5表示可购买材料，策划配的
            local price = ItemId:GetOnePrice(itemBigType, id)
            local canBuy = canBuyType and price > 0
            if not canBuy then
                notEnough = true
            else
                local needNum = need - have
                cost = cost + needNum * price
                local rate = AppServices.DiamondCostBuff:GetOffPercent() or 1
                cost = math.max(1, math.floor(cost * rate))
                table.insert(exchangeItems, { itemId = id, count = needNum, itemType = itemBigType })
            end
        end
    end

    if #exchangeItems > 0 then
        local function buyCallback(ret)
            if not ret then
                Runtime.InvokeCbk(finishCbk, false)
                return
            end

            for _, v in pairs(exchangeItems) do
                if v.itemType == NormalItemBigType then
                    AppServices.User:AddItem(v.itemId, v.count, ItemGetMethod.supplementTask)
                elseif v.itemType == TwoMergeItemBigType then
                    AppServices.TwoMergeManager:QueueAdd(AppServices.TwoMergeManager:GetMapId(), v.itemId, v.count)
                end
            end

            DcDelegates:Log(
                SDK_EVENT.supplement_task,
                {
                    sceneId = sceneId,
                    buildingId = templateId,
                    diamondCost = tostring(cost),
                    diamondCount = AppServices.User:GetItemAmount(ItemId.DIAMOND),
                    item = CONST.RULES.ConvertLogItem(exchangeItems),
                    type = tostring(2)
                }
            )
            DcDelegates:TDLog(SDK_EVENT.supplement_task, {
                --sceneId = sceneId,
                building_id = templateId,
                consume_diamond = tostring(cost),
                --diamondCount = AppServices.User:GetItemAmount(ItemId.DIAMOND),
                buy_item = CONST.RULES.ConvertTDLogItem(exchangeItems),
                buy_type = tostring(2)
            })
            Runtime.InvokeCbk(finishCbk, true)
        end
        PanelManager.showPanel(
            GlobalPanelEnum.BuyItemPanel,
            {
                itemDatas = exchangeItems,
                buyCallback = buyCallback,
                source = BuyItemPanelSourceType.task,
                srcPanelArgs = { agentId = agentId, templateId = templateId },
                sourcePanel = GlobalPanelEnum.BuildingTaskPanel,
                method = ItemGetMethod.supplementTask
            }
        )
        App.mapGuideManager:OnGuideFinishEvent(GuideEvent.CustomEvent, "BuildingRepairNotEnough")
        return
    end

    if notEnough then
        Runtime.InvokeCbk(finishCbk, false)
        App.mapGuideManager:OnGuideFinishEvent(GuideEvent.CustomEvent, "BuildingRepairNotEnough")
        if #twoMergeCostList > 0 then
            local activityId = AppServices.TwoMergeManager:GetMapId()
            if not activityId then
                return
            end

            local params = {
                mapId = activityId,
            }
            PanelManager.closePanel(GlobalPanelEnum.BuildingTaskPanel)
            PanelManager.showPanel(GlobalPanelEnum.TwoMergePanel, params)
        else
            local description = Runtime.Translate("errorcode_2001")
            ErrorHandler.ShowErrorMessage(description)
        end
        return
    end
    Runtime.InvokeCbk(finishCbk, false)
    local data = {
        sceneId = sceneId,
        agentId = agentId,
        templateId = templateId,
        twoMergeCostList = twoMergeCostList,
    }
    self:BuildingLevelUpRequest(data)
end

function BuildingRepairManager:CreateDragonInfoForDrama(_, agentId, templateId, newLevel)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local dramaName = cfg.dragonWatiDrama
    local dragonDatas = {}
    for _, v in ipairs(cfg.collectrewards) do
        local itemId, _ = v[1], v[2]
        local itemType = AppServices.Meta:GetItemType(itemId)
        if itemType == ItemId.EType.DRAGON_ENTITY then
            table.insert(dragonDatas, { itemId = tostring(itemId) })
        end
    end
    local cbkCount = 0
    for _, v in ipairs(dragonDatas) do
        local addDragnCbk = function(_, dragonData)
            cbkCount = cbkCount + 1
            if not dragonData then
                if cbkCount == #dragonDatas then
                    --所有的龙都创建完成的时候, 触发升级
                    self:LvupMessage(agentId, templateId, newLevel)
                end
                return
            end
            AppServices.MagicalCreatures:AddWaitCreateDragon(dragonData, dramaName)
            self:AddWaitResetDragon(dragonData.creatureId, dramaName)
            if cbkCount == #dragonDatas then
                --所有的龙都创建完成的时候, 触发升级
                self:LvupMessage(agentId, templateId, newLevel)
            end
        end
        AppServices.MagicalCreatures:AddDragonByItem(
            v.itemId,
            EntityState.select,
            addDragnCbk,
            true
        )
    end
end

function BuildingRepairManager:LvupMessage(agentId, templateId, newLevel)
    local _, rewardItems = self.GetLevelItems(templateId, newLevel - 1)
    if not table.isEmpty(rewardItems) then
        local showUpItems
        for _, item in ipairs(rewardItems) do
            local itemId, num = tostring(item[1]), item[2]
            if ItemId.isItem(itemId) and not ItemId.IsDragon(itemId) then
                local itemCfg = AppServices.Meta:GetItemMeta(itemId)
                if itemCfg.showUp == 1 then
                    showUpItems = showUpItems or {}
                    table.insert(showUpItems, { ItemId = itemId, Amount = num })
                end
            end
        end
        if showUpItems then
            PanelManager.showPanel(GlobalPanelEnum.SingleRewardPanel, { showUpItems = showUpItems },
                PanelCallbacks:Create(function()
                    self:LvupMessageEx(agentId, templateId, newLevel)
                end))
        else
            self:LvupMessageEx(agentId, templateId, newLevel)
        end
    else
        self:LvupMessageEx(agentId, templateId, newLevel)
    end
end

function BuildingRepairManager:LvupMessageEx(agentId, templateId, newLevel)
    MessageDispatcher:SendMessage(MessageType.Global_After_RepaireBuilding, agentId, templateId, newLevel)
    App.mapGuideManager:OnGuideFinishEvent(GuideEvent.CustomEvent, agentId)
    local _, rewardItems = self.GetLevelItems(templateId, newLevel - 1)
    if not table.isEmpty(rewardItems) then
        for _, v in ipairs(rewardItems) do
            local itemId, num = tostring(v[1]), v[2]
            if ItemId.IsExp(itemId) then
                AppServices.User:AddExp(num, "buidingRepaire")
            else
                if ItemId.IsDragon(itemId) then
                    ConnectionManager:block()
                    for _ = 1, num do
                        AppServices.MagicalCreatures:AddDragonByItem(itemId)
                    end
                    ConnectionManager:flush(false)
                else
                    AppServices.User:AddItem(itemId, num, ItemGetMethod.repairTaskBuilding)
                end
            end
            local eType = ItemId.GetWidgetType(itemId)
            App.scene:RefreshWidget(eType)
        end
    end
end

---增加drama播放完之后的监听
function BuildingRepairManager:AddWaitResetDragon(creatureId, dramaName)
    if not self.waitResetDragons then
        self.waitResetDragons = {}
    end
    self.waitResetDragons[dramaName] = self.waitResetDragons[dramaName] or {}
    table.insertIfNotExist(self.waitResetDragons[dramaName], creatureId)
    if not self._Global_Drama_Over then
        self._Global_Drama_Over = true
        MessageDispatcher:AddMessageListener(MessageType.Global_Drama_Over, self.OnDramaOverClearDragon, self)
    end
end

function BuildingRepairManager:OnDramaOverClearDragon(dramaName)
    if not self.waitResetDragons then
        self:removeDramaListen()
        return
    end
    if not self.waitResetDragons[dramaName] then
        if table.isEmpty(self.waitResetDragons) then
            self:removeDramaListen()
        end
        return
    end
    for _, creatureId in ipairs(self.waitResetDragons[dramaName]) do
        local dragon = AppServices.MagicalCreatures:GetEntity(creatureId)
        if dragon then
            dragon.retainPos = true
            dragon:ChangeAction(EntityState.idle)
        end
    end
    self.waitResetDragons[dramaName] = nil
    if table.isEmpty(self.waitResetDragons) then
        self:removeDramaListen()
    end
end

function BuildingRepairManager:removeDramaListen()
    if self._Global_Drama_Over then
        self._Global_Drama_Over = false
        MessageDispatcher:RemoveMessageListener(MessageType.Global_Drama_Over, self.OnDramaOverClearDragon, self)
    end
end

function BuildingRepairManager:GetBuildingLevelFromNet(sceneId, agentId, templateId, callback)
    local params = {
        sceneId = sceneId,
        plantIds = { agentId }
    }
    local level = 1
    local function funcFailedCbk(errorCode)
        console.error("Scenemodulemsg_25303_FindScenePlants_Request", errorCode) --@DEL
        self:SetLevel(sceneId, agentId, level)
        Runtime.InvokeCbk(callback)
        -- AppServices.TaskIconButtonLogic:ShowBuildingTaskTip(taskId, subIndex, key)
    end
    local function funcSuccessCbk(response)
        if response.buildings and #response.buildings > 0 then
            for _, v in ipairs(response.buildings) do
                self:SetLevel(sceneId, v.plantId, v.level)
                if v.plantId == agentId then
                    level = v.level
                end
            end
        end
        self:SetLevel(sceneId, agentId, level, templateId)
        Runtime.InvokeCbk(callback)
        -- AppServices.TaskIconButtonLogic:ShowBuildingTaskTip(taskId, subIndex, key)
    end
    Net.Scenemodulemsg_25303_FindScenePlants_Request(params, funcFailedCbk, funcSuccessCbk)
end

----EVENT---
---添加监听事件
function BuildingRepairManager:RegisterListener()
    if self._registered then
        return
    end
    self._registered = true
    MessageDispatcher:AddMessageListener(MessageType.PopupQueue_FINISHED, self.AfterChangeScene, self)
    MessageDispatcher:AddMessageListener(MessageType.Building_Repair_Done, self.RemoveRepairData, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_OnShake, self.OnShake, self)
end

---场景变化后数据初始化
function BuildingRepairManager:AfterChangeScene()
    local sceneId = App.scene:GetCurrentSceneId()
    local sceneDatas = self._reapirDatas[sceneId]
    if not sceneDatas then
        return
    end
    for agentId, repairData in pairs(sceneDatas) do
        local agent = SceneServices.ObjectManager:GetAgent(agentId)
        if agent then
            repairData:initTaskLock()
            repairData:CheckStateChange(true)
            repairData:CheckBuildEndTimeRegiestOnSecond()
        end
    end
end

function BuildingRepairManager:InitSceneBuildings(finishCallback)
    local sceneId = App.scene:GetCurrentSceneId()
    local sceneDatas = self._reapirDatas[sceneId]
    if not sceneDatas then
        Runtime.InvokeCbk(finishCallback)
        return
    end
    local batchRequestLvUp
    local batchRequestAppear
    for agentId, repairData in pairs(sceneDatas) do
        local agent = SceneServices.ObjectManager:GetAgent(agentId)
        if agent then
            local needAppear = repairData:CalState(agent, nil, true)
            if needAppear then
                batchRequestAppear = batchRequestAppear or {}
                table.insert(batchRequestAppear, agentId)
            end
            if repairData:CanAutoRepair() and repairData:CanRepaire() then
                local newState = repairData:CalNewState()
                if newState ~= repairData:GetState() then
                    repairData:SetState(newState)
                    batchRequestLvUp = batchRequestLvUp or {}
                    table.insert(batchRequestLvUp, {
                        agentId = repairData.agentId,
                        templateId = repairData.templateId
                    })
                end
            else
                repairData:CheckStateChange(true, true)
            end
        end
    end
    if batchRequestAppear then
        AppServices.AgentAppear:SetAgentAppearBatch(sceneId, batchRequestAppear)
    end
    if batchRequestLvUp then
        self:BuildingLevelUpRequestBatch(sceneId, batchRequestLvUp, nil, true)
    end
    Runtime.InvokeCbk(finishCallback)
end

function BuildingRepairManager:IsTaskUnlock(agentId)
    local sceneId = App.scene:GetCurrentSceneId()
    local repairData = self:GetRepairDate(sceneId, agentId, true)
    if not repairData or not repairData.taskListenId or AppServices.Task:IsTaskSubmit(repairData.taskListenId) then
        return true
    end
    return false
end

function BuildingRepairManager.getLockTaskId(templateId)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    if cfg.taskunlock and cfg.taskunlock ~= "" then
        return cfg.taskunlock
    end
end

function BuildingRepairManager.PlayBuildingRepaireAnima(templateId, level)
    local agent = SceneServices.ObjectManager:GetAgentByTemplateId(templateId)
    if agent then
        local cfg = AppServices.Meta:GetBuildingRepair(templateId)
        if not cfg then
            return
        end
        local anima = cfg.repairingspine[level - 1]
        local function callback()
            local idleAnima = cfg.levelspine[level - 1]
            agent:UpdateDefaultAnima(idleAnima)
        end
        agent:PlayAnimation(anima, false, callback)
    end
end

function BuildingRepairManager.PlayBuildingRepaireAnimaByAnimaName(templateId, animaName, finishIdle)
    -- console.lzl("PlayBuildingRepaireAnimaByAnimaName", templateId, animaName, finishIdle)
    local agent = SceneServices.ObjectManager:GetAgentByTemplateId(templateId)
    if agent then
        local cfg = AppServices.Meta:GetBuildingRepair(templateId)
        if not cfg then
            return
        end
        local function callback()
            -- console.lzl("PlayBuildingRepaireAnimaByAnimaName callback", templateId, animaName, finishIdle)
            if not string.isEmpty(finishIdle) then
                agent:PlayAnimation(finishIdle, true)
            else
                agent:PlayIdleAnimation()
            end
        end
        if agent:IsRenderValid() then
            agent:PlayAnimation(animaName, false, callback)
        else
            if agent.render then
                agent.render:SetObjLoadedCallback(
                    function()
                        agent:PlayAnimation(animaName, false, callback)
                    end
                )
            end
        end
    end
end

function BuildingRepairManager.GetShowLevelStr(level, maxLevel)
    local showLv = level - 1
    local showMax = maxLevel - 1
    return Runtime.Translate("ui_taskbuilding_level", { cur = tostring(showLv), total = tostring(showMax) })
end

---获取建筑升级的道具数组
---@param templateId string agent的模板id
---@param level int agent当前修复等级
---@return table,table 升级需要道具, 奖励道具
function BuildingRepairManager.GetLevelItems(templateId, level)
    local meta = AppServices.Meta:GetBuildingRepair(templateId)
    if not meta then
        console.error("障碍物模板id", tostring(templateId), "缺少在excel : TaskBuildingTemplate.xlsx中的配置") --@DEL
    end

    return BuildingRepairManager.GetLevelItemsWithCfg(meta, level)
end

-- AppServices.BuildingRepair.GetLevelItemsWithCfg(meta, level)
function BuildingRepairManager.GetLevelItemsWithCfg(meta, level)
    if not meta then
        console.error("障碍物模板数据为空") --@DEL
    end

    if level >= meta.levelmax then
        return
    end
    local itemsKey = "levelitem" .. level
    local rewardKey = "rewarditem" .. level
    local payLevelKey = "levelitem" .. level .. "PayLevelMap"

    local rewards = meta[rewardKey]
    local dropIds = {}

    local ispaylabel = meta["ispaylabel"]
    if ispaylabel == 1 then
        local payLabel = AppServices.User:GetPayCategory()
        if App.scene:GetSceneType() == SceneType.Activity then
            local sceneId = App.scene:GetCurrentSceneId()
            local activityInstance = ActivityServices.ActivityManager:GetInsBySceneId(sceneId)
            if activityInstance then
                payLabel = activityInstance:GetPayLabel()
            end
        end

        local tempRewards = nil
        for _, data in ipairs(rewards) do
            local labels = data[1]
            if (not tempRewards) and table.exists(labels, 0) then
                tempRewards = data
            end
            if table.exists(labels, tonumber(payLabel)) then
                tempRewards = data
                break
            end
        end

        if tempRewards then
            rewards = {}
            for i = 2, #tempRewards do
                table.insert(rewards, tempRewards[i])
            end
        end

        local obstacleCfg = AppServices.Meta:Category("ObstacleTemplate")[meta.id]
        if obstacleCfg and obstacleCfg.type == AgentType.ReturnRewardCompleteLevelAgent then
            if level == (meta.levelmax - 1) then
                dropIds = rewards
                rewards = nil
            end
        end
    end
    local _levelItemTemp = {}
    if meta[payLevelKey] ~= nil and meta[payLevelKey] ~= "" then
        local sceneId = meta.sceneid
        _levelItemTemp = ActivityServices.ActivityManager:GetPayLevelData(meta[payLevelKey], sceneId)
    else
        _levelItemTemp = meta[itemsKey]
    end
    return _levelItemTemp, rewards, dropIds
end

function BuildingRepairManager:IsEnergyLvUp(templateId, level)
    local lvupItems = self.GetLevelItems(templateId, level)
    if not lvupItems then
        return false
    end
    return #lvupItems == 1 and (ItemId.IsEnergy(lvupItems[1][1]) or ItemId.IsRedEnergy(lvupItems[1][1]))
end

---@return BuildingRepairKind
function BuildingRepairManager:getRepairKind(templateId, level)
    if self:IsMonopolyUpgradeBuilding(templateId) then
        return BuildingRepairKind.MonopolyLvup
    end
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local lvupItems = cfg["levelitem" .. level]
    local lvupItems1 = lvupItems and lvupItems[1]
    if not lvupItems1 then
        return
    end

    local itemId = lvupItems1[1]
    local rKind = BuildingRepairKind.Normal
    if ItemId.IsEnergy(itemId) or ItemId.IsRedEnergy(itemId) then
        rKind = BuildingRepairKind.Energy
    elseif itemId == -1 then
        rKind = BuildingRepairKind.AgentClean
    elseif itemId == -2 then
        rKind = BuildingRepairKind.BuildingRepaired
    elseif itemId == -3 then
        rKind = BuildingRepairKind.TaskFinish
    end
    return rKind
end

function BuildingRepairManager:NormalCallback(sceneId, agentId, templateId, response, onResponse, extParams)
    local repairDrawMsg = Net.Converter.ConvertBuildingRepairDrawMsg(response.repairDrawMsg)
    local curLevel = self:GetLevel(sceneId, agentId)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local newLevel = curLevel + 1
    local levelItems = self.GetLevelItems(templateId, curLevel)
    local noUseItem = extParams and extParams.noUseItem
    if not noUseItem then
        for _, v in ipairs(levelItems) do
            if v[1] ~= TwoMergeCfgType then
                local itemId, need = v[1], v[2]
                AppServices.User:UseItem(itemId, need, ItemUseMethod.repairTaskBuilding)
            end
        end
    end
    local levelMax = cfg.levelmax
    Util.BlockAll(8, "BuildingRepairManager")
    local levelFull = levelMax == newLevel
    ---弹出普通奖励面板
    if levelFull and not table.isEmpty(cfg.collectrewards) then
        -- 奖励龙
        if cfg.dragonWatiDrama and cfg.dragonWatiDrama ~= "" then
            local rewardCbk = function()
                Util.BlockAll(0, "BuildingRepairManager")
                self:CreateDragonInfoForDrama(sceneId, agentId, templateId, newLevel)
                Runtime.InvokeCbk(onResponse)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, rewardCbk, true, repairDrawMsg)
        else
            local rewardCbk = function()
                for _, v in ipairs(cfg.collectrewards) do
                    local itemId, Amount = v[1], v[2]
                    if ItemId.IsDragon(itemId) then
                        for _ = 1, Amount do
                            AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
                        end
                    end
                end
                self:LvupMessage(agentId, templateId, newLevel)
            end
            local animaOverCallback = function()
                Util.BlockAll(0, "BuildingRepairManager")
                if cfg.CollectInDrama == 1 then
                    Runtime.InvokeCbk(rewardCbk)
                else
                    self:ShowBuildingRepairReward(templateId, rewardCbk)
                end
                Runtime.InvokeCbk(onResponse)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, animaOverCallback, true, repairDrawMsg)
        end
    else
        self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, onResponse, nil, repairDrawMsg)
    end
end

function BuildingRepairManager:EnergyCallback(sceneId, agentId, templateId, response, onResponse, extParams)
    local isLvup, useEnergy = extParams.isLvup, extParams.useEnergy
    local curLevel = self:GetLevel(sceneId, agentId)
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    local levelItems = self.GetLevelItems(templateId, curLevel)
    local costEnergy = response.costEnergy
    if not agent then
        local repairDrawMsg = Net.Converter.ConvertBuildingRepairDrawMsg(response.repairDrawMsg)
        if isLvup then
            self:BuildingLevelUp(sceneId, agentId, templateId, curLevel + 1, nil, nil, repairDrawMsg)
        end
        return
    end
    local cp = agent:GetRepairProgress()
    local itemId = tostring(levelItems[1][1])
    local needCost = levelItems[1][2] - cp
    local oldLvup = isLvup
    if costEnergy >= needCost and not isLvup then
        isLvup = true
    end
    if costEnergy ~= useEnergy then
        console.error("修复建筑用的体力, 前后端不一致了", costEnergy, useEnergy, tostring(isLvup), tostring(oldLvup)) --@DEL
    end
    local _, rewards = self.GetLevelItems(templateId, curLevel)
    ---奖励
    local produced = nil
    if isLvup and rewards then
        for _, v in ipairs(rewards) do
            produced = produced or {}
            table.insert(produced, { itemTemplateId = tostring(v[1]), count = v[2] })
        end
    end
    local repairRes = {
        itemId = itemId,
        useEnergy = costEnergy,
        produced = produced
    }
    Runtime.InvokeCbk(
        onResponse,
        repairRes,
        function()
            self:AfterAgentClean(agentId, templateId, costEnergy, isLvup, response)
        end
    )
end

function BuildingRepairManager:AfterAgentClean(agentId, templateId, useEnergy, isLvup, response)
    MessageDispatcher:SendMessage(MessageType.Global_Repaired_UseEnergy, agentId, useEnergy)
    local repairDrawMsg = Net.Converter.ConvertBuildingRepairDrawMsg(response.repairDrawMsg)
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    if isLvup then
        agent:UpdateRepairProgress(0)
    else
        local curProgress = agent:GetRepairProgress()
        agent:UpdateRepairProgress(curProgress + useEnergy)
    end

    local sceneId = App.scene:GetCurrentSceneId()
    local curLevel = self:GetLevel(sceneId, agentId)
    if isLvup then
        local cfg = AppServices.Meta:GetBuildingRepair(templateId)
        local levelMax = cfg.levelmax
        local levelFull = levelMax == (curLevel + 1)
        local animaOverCallback = nil
        local noMsg = false
        ---弹出普通奖励面板
        if levelFull and not table.isEmpty(cfg.collectrewards) then
            local sendLvUpMsg = nil
            for _, v in ipairs(cfg.collectrewards) do
                if AppServices.Meta:GetItemType(v[1]) == ItemId.EType.Gene then
                    sendLvUpMsg = {
                        agentId = agentId,
                        newLevel = curLevel + 1
                    }
                    noMsg = true
                    break
                end
            end
            animaOverCallback = function()
                local rewardCbk = function()
                    -- console.lzl("给了修复奖励", tostring(cfg.CollectInDrama), cfg.collectrewards)
                    for _, v in ipairs(cfg.collectrewards) do
                        local itemId, Amount = v[1], v[2]
                        if ItemId.IsDragon(itemId) then
                            for _ = 1, Amount do
                                AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
                            end
                        else
                            AppServices.User:AddItem(itemId, Amount, ItemGetMethod.repairTaskBuilding)
                        end
                    end
                end
                if cfg.CollectInDrama == 1 then
                    Runtime.InvokeCbk(rewardCbk)
                else
                    self:ShowBuildingRepairReward(templateId, rewardCbk, sendLvUpMsg)
                end
            end
        end
        self:BuildingLevelUp(sceneId, agentId, templateId, curLevel + 1, animaOverCallback, noMsg, repairDrawMsg)
    end
end

function BuildingRepairManager:AgentCleanCallback(sceneId, agentId, templateId, response, onResponse, extParams)
    local repairDrawMsg = Net.Converter.ConvertBuildingRepairDrawMsg(response.repairDrawMsg)
    local curLevel = self:GetLevel(sceneId, agentId)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local newLevel = curLevel + 1
    local levelMax = cfg.levelmax
    Util.BlockAll(8, "BuildingRepairManager")
    local levelFull = levelMax == newLevel
    ---弹出普通奖励面板
    if levelFull and type(cfg.collectrewards) == 'table' and not table.isEmpty(cfg.collectrewards) then
        -- 奖励龙
        if cfg.dragonWatiDrama and cfg.dragonWatiDrama ~= "" then
            local rewardCbk = function()
                Util.BlockAll(0, "BuildingRepairManager")
                self:CreateDragonInfoForDrama(sceneId, agentId, templateId, newLevel)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, rewardCbk, true, repairDrawMsg)
        else
            local rewardCbk = function()
                for _, v in ipairs(cfg.collectrewards) do
                    local itemId, Amount = v[1], v[2]
                    if AppServices.Meta:GetItemType(itemId) == ItemId.EType.DRAGON_ENTITY then
                        for _ = 1, Amount do
                            AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
                        end
                    end
                end
                self:LvupMessage(agentId, templateId, newLevel)
            end
            local animaOverCallback = function()
                Util.BlockAll(0, "BuildingRepairManager")
                if cfg.CollectInDrama == 1 then
                    Runtime.InvokeCbk(rewardCbk)
                else
                    self:ShowBuildingRepairReward(templateId, rewardCbk)
                end
            end
            self:BuildingLevelUp(
                sceneId,
                agentId,
                templateId,
                newLevel,
                animaOverCallback,
                true,
                repairDrawMsg,
                extParams
            )
        end
    else
        self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, nil, nil, repairDrawMsg, extParams)
    end
end

BuildingRepairManager.BuildingRepairedCallback = BuildingRepairManager.AgentCleanCallback
BuildingRepairManager.TaskFinishCallback = BuildingRepairManager.AgentCleanCallback

function BuildingRepairManager:MonopolyLvupCallback(sceneId, agentId, templateId, tarLv)
    local curLevel = self:GetLevel(sceneId, agentId)
    if curLevel >= tarLv then
        return
    end
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local newLevel = curLevel + 1
    local levelMax = cfg.levelmax
    Util.BlockAll(8, "BuildingRepairManager")
    local levelFull = levelMax == newLevel
    ---弹出普通奖励面板
    if levelFull and not table.isEmpty(cfg.collectrewards) then
        -- 奖励龙
        if cfg.dragonWatiDrama and cfg.dragonWatiDrama ~= "" then
            local rewardCbk = function()
                Util.BlockAll(0, "BuildingRepairManager")
                self:CreateDragonInfoForDrama(sceneId, agentId, templateId, newLevel)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, rewardCbk, true)
        else
            local rewardCbk = function()
                for _, v in ipairs(cfg.collectrewards) do
                    local itemId, Amount = v[1], v[2]
                    if ItemId.IsDragon(itemId) then
                        for _ = 1, Amount do
                            AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
                        end
                    end
                end
                self:LvupMessage(agentId, templateId, newLevel)
            end
            local animaOverCallback = function()
                Util.BlockAll(0, "BuildingRepairManager")
                if cfg.CollectInDrama == 1 then
                    Runtime.InvokeCbk(rewardCbk)
                else
                    self:ShowBuildingRepairReward(templateId, rewardCbk)
                end
                Runtime.InvokeCbk(onResponse)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, animaOverCallback, true, repairDrawMsg)
        end
    else
        self:BuildingLevelUp(sceneId, agentId, templateId, newLevel)
    end
end

function BuildingRepairManager:getExtParamByRepairKind(repairKind, sceneId, agentId, templateId)
    if repairKind == BuildingRepairKind.Energy then
        local agent = SceneServices.ObjectManager:GetAgent(agentId)
        local curLevel = self:GetLevel(sceneId, agentId)
        local levelItems = self.GetLevelItems(templateId, curLevel)
        local itemId = tostring(levelItems[1][1])
        local curEnergy = AppServices.User:GetItemAmount(itemId)
        local curProgress = agent:GetRepairProgress()
        local cost = levelItems[1][2] - curProgress
        local useEnergy = cost > curEnergy and curEnergy or cost
        local extParam = {
            isLvup = false,
            itemId = itemId,
            useEnergy = useEnergy
        }
        return extParam
    end
end

---回调名字
local _levelUpRequestCallbackName = {
    [BuildingRepairKind.Normal] = "NormalCallback",
    [BuildingRepairKind.Energy] = "EnergyCallback",
    [BuildingRepairKind.AgentClean] = "AgentCleanCallback",
    [BuildingRepairKind.BuildingRepaired] = "BuildingRepairedCallback",
    [BuildingRepairKind.MonopolyLvup] = "MonopolyLvupCallback",
    [BuildingRepairKind.TaskFinish] = "TaskFinishCallback",
}
---根据修复类型 获取修复建筑请求的回调
function BuildingRepairManager:GetBuildingLevelUpCallback(repairKind)
    local kindName = BuildingRepairKindName[repairKind]
    if not kindName then
        return self.NormalCallback
    end
    local funcName = _levelUpRequestCallbackName[repairKind]
    return self[funcName]
end

function BuildingRepairManager:BuildingLevelUpRequest(data)
    local sceneId = data.sceneId
    local agentId = data.agentId
    local templateId = data.templateId
    local onResponse = data.onResponse
    local noDrama = data.noDrama
    local fastResponse = data.fastResponse

    local curLevel = self:GetLevel(sceneId, agentId)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local levelMax = cfg.levelmax
    local repairKind = self:getRepairKind(templateId, curLevel)
    local extParams = self:getExtParamByRepairKind(repairKind, sceneId, agentId, templateId)
    if noDrama then
        extParams = extParams or {}
        extParams.noDrama = true
    end
    --- 二合棋盘相关
    local mapId, gridInfos, waitItems = AppServices.TwoMergeManager:GetMapId(), {}, {}
    local usePositions, useQueues = {}, {}
    if data.twoMergeCostList and #data.twoMergeCostList > 0 then
        usePositions, useQueues, gridInfos, waitItems = AppServices.TwoMergeManager:GetConsumeChangedInfo(
            AppServices.TwoMergeManager:GetMapId(), data.twoMergeCostList)
    end

    local lvupCallback = self:GetBuildingLevelUpCallback(repairKind)
    local funcSuccessCbk = function(response)
        console.lzl("Scenemodulemsg_25304_BuildingLevelUp_Request funcSuccessCbk", sceneId, agentId, templateId) --@DEL
        local finalRewards = Net.Converter.ConvertArray(response.finalRewards, Net.Converter.ConvertItemMsg)
        if finalRewards and (#finalRewards > 0) then
            local agent = SceneServices.ObjectManager:GetAgent(agentId)
            if agent then
                local agentData = agent.data
                local buildingMsg = agentData.buildingMsg
                buildingMsg.finalRewards = response.finalRewards
            end
        end
        --- 二合棋盘状态更改
        if mapId ~= nil and data.twoMergeCostList and #data.twoMergeCostList > 0 then
            AppServices.TwoMergeManager:NetGridsNull(mapId, usePositions)
            AppServices.TwoMergeManager:NetQueueNull(mapId, waitItems)
        end

        local needGiftBox = self:NeedShowGiftBox(agentId, templateId, curLevel + 1)
        if needGiftBox then
            local now = TimeUtil.ServerTime()
            local buildTime = cfg.BuildTime[curLevel] or 0
            local buildEndTime = now + buildTime
            local repairData = self:GetRepairDate(sceneId, agentId)
            if repairData then
                repairData:SetBuildEndTime(buildEndTime)
            else
                console.error("no repaire Data !", sceneId, agentId)
            end
            self:ShowConstructionModelCallback(sceneId, agentId, templateId, response, extParams)
        else
            Runtime.InvokeCbk(lvupCallback, self, sceneId, agentId, templateId, response, onResponse, extParams)
        end
    end

    local funcFailedCbk = function(errorCode)
        console.lzl("Scenemodulemsg_25304_BuildingLevelUp_Request funcFailedCbk", agentId, templateId, errorCode) --@DEL
        if errorCode == ErrorCodeEnums.BUIDING_TO_MAX_LEVEL then
            local lv = self:GetLevel(sceneId, agentId)
            if lv < levelMax then
                Runtime.InvokeCbk(funcSuccessCbk, {}) -- TODO
                return
            end
        else
            ErrorHandler.ShowErrorPanel(errorCode)
        end
    end
    local params = {
        sceneId = sceneId,
        plantId = agentId,
        gridInfos = gridInfos,
        waitItems = waitItems,
    }
    console.lzl("---send Scenemodulemsg_25304_BuildingLevelUp_Request", sceneId, agentId, templateId) --@DEL
    Net.Scenemodulemsg_25304_BuildingLevelUp_Request(params, funcFailedCbk, funcSuccessCbk)
    if fastResponse then
        local response = {}
        Runtime.InvokeCbk(lvupCallback, self, sceneId, agentId, templateId, response, onResponse, extParams)
        lvupCallback = nil
    end
end

function BuildingRepairManager:ShowConstructionModelCallback(sceneId, agentId, templateId, response, extParams)
    local curLevel = self:GetLevel(sceneId, agentId)
    local levelItems = self.GetLevelItems(templateId, curLevel)
    for _, v in ipairs(levelItems) do
        local itemId, need = v[1], v[2]
        AppServices.User:UseItem(itemId, need, ItemUseMethod.repairTaskBuilding)
    end
    ---@type BuildingAgent
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    if PanelManager.isPanelShowing(GlobalPanelEnum.BuildingTaskPanel) then
        PanelManager.closeAllPanels(GlobalPanelEnum.BuildingTaskPanel)
    end
    agent:ShowConstructionModel()
end

function BuildingRepairManager:TakeBuildingBuildAwardRequest(sceneId, agentId, callback)
    local params = {
        sceneId = sceneId,
        plantId = agentId,
    }
    local repairData = self:GetRepairDate(sceneId, agentId)
    local templateId = repairData.templateId
    if not self._reguestingTaskBuildingBuildAward then
        self._reguestingTaskBuildingBuildAward = {}
    end
    if self._reguestingTaskBuildingBuildAward[agentId] then
        return
    end
    self._reguestingTaskBuildingBuildAward[agentId] = true
    local funcSuccessCbk = function(response)
        self._reguestingTaskBuildingBuildAward[agentId] = nil
        local curLevel = self:GetLevel(sceneId, agentId)
        local agent = SceneServices.ObjectManager:GetAgent(agentId)
        local finalRewards = Net.Converter.ConvertArray(response.finalRewards, Net.Converter.ConvertItemMsg)
        if finalRewards and (#finalRewards > 0) then
            if agent then
                local agentData = agent.data
                local buildingMsg = agentData.buildingMsg
                buildingMsg.finalRewards = response.finalRewards
            end
        end
        if agent then
            agent:SwtShowingGiftPackAnimation(true)
        end
        repairData:SetBuildEndTime(0)
        if agent then
            agent:PlayGiftBoxOpenAnimation(
                function()
                    local param = { level = curLevel + 1 }
                    agent:ShowConstructionModel(param, function()
                        agent:SwtShowingGiftPackAnimation(false)
                        self:CommonCallback(sceneId, agentId, templateId, response)
                    end)
                end
            )
        else
            self:CommonCallback(sceneId, agentId, templateId, response)
        end
    end
    local funcFailedCbk = function(errorCode)
        self._reguestingTaskBuildingBuildAward[agentId] = nil
        console.error("TakeBuildingBuildAward_Request funcFailedCbk", errorCode) --@DEL
    end
    Net.Scenemodulemsg_25346_TakeBuildingBuildAward_Request(params, funcFailedCbk, funcSuccessCbk)
end

function BuildingRepairManager:CommonCallback(sceneId, agentId, templateId, response, onResponse)
    local repairDrawMsg = Net.Converter.ConvertBuildingRepairDrawMsg(response.repairDrawMsg)
    local curLevel = self:GetLevel(sceneId, agentId)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local newLevel = curLevel + 1
    local levelMax = cfg.levelmax

    local levelFull = levelMax == newLevel
    local rewards = {}
    local noMsg = false
    local extParams

    local BuildTime = cfg.BuildTime and cfg.BuildTime[curLevel]
    --- 如果有建造过程, 就不播放开礼包之后的升级动画了
    if BuildTime and BuildTime > 0 then
        extParams = extParams or {}
        extParams.noAnima = true
    end
    local collectrewards = cfg.collectrewards
    ---升满级奖励
    if levelFull and type(collectrewards) == 'table' and not table.isEmpty(collectrewards) then
        noMsg = true
        for _, v in ipairs(collectrewards) do
            local itemId, Amount = v[1], v[2]
            table.insert(rewards, { ItemId = itemId, Amount = Amount })
        end
    end
    local _, rewardItems = self.GetLevelItems(templateId, newLevel - 1)
    if not table.isEmpty(rewardItems) then
        for _, item in ipairs(rewardItems) do
            local itemId, num = tostring(item[1]), item[2]
            if ItemId.isItem(itemId) then
                table.insert(rewards, { ItemId = itemId, Amount = num })
            end
        end
    end

    local function animaOverCallback()
        if levelFull then
            if not string.isEmpty(cfg.dragonWatiDrama) then
                self:CreateDragonInfoForDrama(sceneId, agentId, templateId, newLevel)
            else
                if cfg.CollectInDrama == 1 then
                    for _, v in ipairs(collectrewards) do
                        local itemId, Amount = v[1], v[2]
                        if ItemId.IsDragon(itemId) then
                            for _ = 1, Amount do
                                AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
                            end
                        end
                    end
                    self:LvupMessage(agentId, templateId, newLevel)
                end
            end
        end
        Runtime.InvokeCbk(onResponse)
    end
    local cbk = function()
        self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, animaOverCallback, noMsg, repairDrawMsg, extParams)
    end
    if not table.isEmpty(rewards) then
        local pcb = PanelCallbacks:Create(cbk)
        PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel,
            { rewards = rewards, imgTitle = Runtime.Translate("UI_BulidGiftPack") }, pcb)
    else
        Util.BlockAll(8, "BuildingRepairManager")
        cbk()
    end
    --[==[
    ---弹出普通奖励面板
    if levelFull and not table.isEmpty(cfg.collectrewards) then
        -- 奖励龙
        if cfg.dragonWatiDrama and cfg.dragonWatiDrama ~= "" then
            local rewardCbk = function()
                Util.BlockAll(0, "BuildingRepairManager")
                self:CreateDragonInfoForDrama(sceneId, agentId, templateId, newLevel)
                Runtime.InvokeCbk(onResponse)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, rewardCbk, true, repairDrawMsg)
        else
            local rewardCbk = function()
                for _, v in ipairs(cfg.collectrewards) do
                    local itemId, Amount = v[1], v[2]
                    if ItemId.IsDragon(itemId) then
                        for _ = 1, Amount do
                            AppServices.MagicalCreatures:AddDragonByItem(tostring(itemId))
                        end
                    end
                end
                self:LvupMessage(agentId, templateId, newLevel)
            end
            local animaOverCallback = function()
                Util.BlockAll(0, "BuildingRepairManager")
                if cfg.CollectInDrama == 1 then
                    Runtime.InvokeCbk(rewardCbk)
                else
                    self:ShowBuildingRepairReward(templateId, rewardCbk)
                end
                Runtime.InvokeCbk(onResponse)
            end
            self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, animaOverCallback, true, repairDrawMsg)
        end
    else
        self:BuildingLevelUp(sceneId, agentId, templateId, newLevel, onResponse, nil, repairDrawMsg)
    end
    --]==]
end

---@return BuildingRepairData[]
function BuildingRepairManager:GetListenRepaires(onlyCheck)
    if not AppServices.Unlock:IsUnlock("RepairIcon") then
        return
    end
    ---@type TaskEntity[]
    local tasks = AppServices.Task:GetCurOpenTasks(nil, TaskKind.All)
    ---@type BuildingRepairData[]
    local repairDatas
    local usingRepairData = {}
    for _, taskEntity in ipairs(tasks) do
        if not taskEntity:IsFinish() then
            local fullCfg = taskEntity:GetCfg()
            for _, subCfg in ipairs(fullCfg.SubMissions) do
                if subCfg.MissionType == MissionType.Building then
                    --local templateId = subCfg.ObstacleTemplateId
                    local agentId = subCfg.BuildingId
                    local sceneId = subCfg.ZoneId
                    local repairData = self:GetRepairDate(sceneId, agentId, true)
                    if not repairData then
                        -- console.lzl("-----理论上不应该有这样的问题-------")
                    else
                        -- console.lzl('---repairData----', repairData:GetName(), repairData:CanRepaire())
                        if not repairData.levelFull and repairData:CanRepaire() then
                            local cfg = repairData:GetCfg()
                            if cfg.RepairableTips and cfg.RepairableTips ~= 0 then
                                usingRepairData[sceneId] = usingRepairData[sceneId] or {}
                                usingRepairData[sceneId][agentId] = true
                                repairDatas = repairDatas or {}
                                table.insert(repairDatas, repairData)
                            end
                        end
                    end
                end
            end
        end
    end
    for sceneId, rds in pairs(self._reapirDatas) do
        usingRepairData[sceneId] = usingRepairData[sceneId] or {}
        for agentId, repairData in pairs(rds) do
            if not usingRepairData[sceneId][agentId] then
                if not repairData.levelFull and repairData:CanRepaire() and not repairData.taskListenId then
                    local cfg = repairData:GetCfg()
                    if cfg.RepairableTips and cfg.RepairableTips ~= 0 then
                        usingRepairData[sceneId][agentId] = true
                        repairDatas = repairDatas or {}
                        table.insert(repairDatas, repairData)
                    end
                end
            end
        end
    end
    if not onlyCheck then
        self._curShowingRepairDatas = repairDatas
    end
    return repairDatas
end

function BuildingRepairManager.IsInRepaireTask(repairData)
    ---@type TaskEntity[]
    local tasks = AppServices.Task:GetCurOpenTasks(nil, TaskKind.All)
    for _, taskEntity in ipairs(tasks) do
        if not taskEntity:IsFinish() then
            local fullCfg = taskEntity:GetCfg()
            for _, subCfg in ipairs(fullCfg.SubMissions) do
                if subCfg.MissionType == MissionType.Building then
                    if repairData.agentId == subCfg.BuildingId and repairData.sceneId == subCfg.ZoneId then
                        return true
                    end
                elseif subCfg.MissionType == MissionType.BuildingRepairCount then
                    local meta = AppServices.Meta:GetBindingMeta(repairData.templateId)
                    if meta.obstacleType == subCfg.Pickable.Type then
                        return true
                    end
                end
            end
        end
    end
    local sceneId = App.scene:GetCurrentSceneId()
    local sceneCfg = AppServices.Meta:GetSceneCfg(sceneId)
    if sceneCfg.type == SceneType.Activity and not repairData.taskListenId then
        local ins = ActivityServices.ActivityManager:GetInsBySceneId(sceneId)
        if ins then
            local tasks = ins.GetAllTaskEntities and ins:GetAllTaskEntities()
            if tasks then
                for _, taskEntity in pairs(tasks) do
                    local subCfg = taskEntity:GetCfg()
                    if subCfg.MissionType == MissionType.BuildingRepairCount then
                        local meta = AppServices.Meta:GetBindingMeta(repairData.templateId)
                        if meta.obstacleType == subCfg.Pickable.Type then
                            return true
                        end
                    end
                end
            end
        end
    end
end

function BuildingRepairManager:OnTaskStart(taskId, isInit)
    if isInit then
        return
    end
    local fullCfg = AppServices.Task:GetFullConfig(taskId)
    local needCheck = false
    for _, subCfg in ipairs(fullCfg.SubMissions) do
        if subCfg.MissionType == MissionType.Building then
            needCheck = true
            break
        end
    end
    if not needCheck then
        return
    end
    local oldCache = self._curShowingRepairDatas
    local newCache = self:GetListenRepaires(true)
    local needRefresh = false
    if not (not oldCache) == not (not newCache) then
        --都有或者都没有
        if oldCache then
            if #oldCache ~= #newCache then
                --数量不一样要刷新
                needRefresh = true
            else
                local tmpOld = {}
                for _, v in ipairs(oldCache) do
                    tmpOld[v] = true
                end
                for _, v in ipairs(newCache) do
                    if not tmpOld[v] then
                        needRefresh = true
                        break
                    end
                end
            end
        end
    else
        --一个有一个没有就要刷新了
        needRefresh = true
    end
    if needRefresh then
        App.scene:RefreshWidget(CONST.MAINUI.ICONS.BuldingRepairBtns)
    end
end

function BuildingRepairManager:getTidsCacheByItem(itemId)
    itemId = tostring(itemId)
    self._itemId2templateIds = self._itemId2templateIds or {}
    local tids = self._itemId2templateIds[itemId]
    if not tids then
        tids = {}
        local cfgs = AppServices.Meta:Category("TaskBuildingTemplate")
        for templateId, cfg in pairs(cfgs) do
            for level = 1, 3 do
                local _, rewards = AppServices.BuildingRepair.GetLevelItemsWithCfg(cfg, level) --cfg[keyName]
                local found = false
                if type(rewards) == "string" then
                    local keyName = "rewarditem" .. level
                    console.error("TaskBuildingTemplate 表的", templateId, "的字段", keyName, "配置错误") --@DEL
                end
                if not table.isEmpty(rewards) then
                    for _, v in ipairs(rewards) do
                        if tostring(v[1]) == itemId then
                            tids[templateId] = { level = level, sceneId = cfg.sceneid }
                            found = true
                            break
                        end
                    end
                end
                if found then
                    break
                end
            end
        end
        self._itemId2templateIds[itemId] = tids
    end
    return tids
end

function BuildingRepairManager:GetOptionWishById(wishTreeId)
    local cfgs = AppServices.Meta:Category("OptionwishTemplate")
    local wishTreeInfo = nil
    if cfgs then
        wishTreeInfo = cfgs[wishTreeId]
    end
    return wishTreeInfo
end

function BuildingRepairManager:GetTemplateIdsByReward(itemId)
    local tids = self:getTidsCacheByItem(itemId)
    local buildingInfos = nil
    for templateId, v in pairs(tids) do
        -- local cfg = AppServices.Meta:GetBuildingRepair(templateId)
        local tarLevel = v.level
        local sceneId = v.sceneId
        local repairDatas = self:GetRepairDateByTemplateId(sceneId, templateId)
        if repairDatas then
            for _, repairData in ipairs(repairDatas) do
                if repairData then
                    local curLevel = repairData.level
                    if curLevel <= tarLevel then
                        -- return repairData.agentId, templateId, sceneId
                        buildingInfos = buildingInfos or {}
                        table.insert(
                            buildingInfos,
                            { agentId = repairData.agentId, templateId = templateId, sceneId = sceneId }
                        )
                    end
                else
                    console.lzl("-no repairData--", templateId, sceneId) --@DEL
                end
            end
        end
    end
    return buildingInfos
end

function BuildingRepairManager:ShowBuildingRepairReward(templateId, finishCallback, sendLvUpMsg)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local rewards = cfg.collectrewards[1]
    local itemId, itemNum = rewards[1], rewards[2]
    local rwds = { { ItemId = itemId, Amount = itemNum } }
    local cbk = function()
        if sendLvUpMsg then
            -- MessageDispatcher:SendMessage(MessageType.Global_After_RepaireBuilding, sendLvUpMsg.agentId, templateId, sendLvUpMsg.newLevel)
            self:LvupMessage(sendLvUpMsg.agentId, templateId, sendLvUpMsg.newLevel)
        end
        Runtime.InvokeCbk(finishCallback)
    end
    if ItemId.IsDragon(itemId) then
        Runtime.InvokeCbk(cbk)
        return
    end
    PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, { rewards = rwds }, PanelCallbacks:Create(cbk))
end

function BuildingRepairManager:OnShake(partnerShakeResult)
    if not table.isEmpty(self._onShakeAgentIds25318) then
        self:onShake25318()
    end

    if not table.isEmpty(self._onShakeAgentIds29209) then
        self:onShake29209(partnerShakeResult)
    end
end

function BuildingRepairManager:onShake25318()
    local plantIds = nil
    local objMgr = SceneServices.ObjectManager
    for agentId in pairs(self._onShakeAgentIds25318) do
        local agent = objMgr:GetAgent(agentId)
        if agent and agent:HasProduct() and not self._shakingRequestAgentIds[agentId] then
            self._shakingRequestAgentIds[agentId] = true
            plantIds = plantIds or {}
            table.insert(plantIds, agentId)
        end
    end

    if not plantIds then
        return
    end

    local params = {
        sceneId = App.scene:GetCurrentSceneId(),
        plantIds = plantIds
    }

    local function funcSuccessCbk(response)
        local rets = Net.Converter.ConvertArray(response.rewards, Net.Converter.ConvertBuildingHangUpRewardMsg)
        local objMgr = SceneServices.ObjectManager
        for i, agentId in ipairs(plantIds) do
            self._shakingRequestAgentIds[agentId] = nil
            local agent = objMgr:GetAgent(agentId)
            if agent then
                agent:OnShakeReponse(rets[i])
            end
        end
    end

    local function funcFailedCbk(errorCode)
        for _, agentId in ipairs(plantIds) do
            self._shakingRequestAgentIds[agentId] = nil
        end
        console.error("HangUpAgent:RewardRequest", App.scene:GetCurrentSceneId(), table.serialize(plantIds), "errorCode",errorCode) --@DEL
    end
    Net.Scenemodulemsg_25318_BuildingHangUpReward_Request(params, funcFailedCbk, funcSuccessCbk)
end

function BuildingRepairManager:onShake29209(partnerShakeResult)
    local plantIds = nil
    local idx = 1
    local objMgr = SceneServices.ObjectManager
    local focusAgentId
    for agentId in pairs(self._onShakeAgentIds29209) do
        local agent = objMgr:GetAgent(agentId)
        if agent and agent:HasProduct() and not self._shakingRequestAgentIds[agentId] then
            if not focusAgentId then
                focusAgentId = agent:GetId()
            end
            self._shakingRequestAgentIds[agentId] = true
            plantIds = plantIds or {}
            plantIds[idx] = plantIds[idx] or {}
            table.insert(plantIds[idx], agentId)
            if #plantIds[idx] == 10 then
                idx = idx + 1
            end
        end
    end

    if not plantIds then
        return
    end
    AppServices.ShakeCollectHangUp:SetShaked()
    self:SetShaked(true)
    if focusAgentId and not (partnerShakeResult == 0 and App.ShakeNeedMoveCamera) then
        AppServices.Jump.FocusAgentById(focusAgentId)
    end
    ConnectionManager:block()
    for _, ids in ipairs(plantIds) do
        self:shakeRequest29209(ids)
    end
    ConnectionManager:flush(false)
end

function BuildingRepairManager:SetShaked(isShaked)
    self._isShaked = isShaked
end

function BuildingRepairManager:IsShakeGetProduction()
    local ret = self._isShaked
    self._isShaked = nil
    return ret
end

function BuildingRepairManager:shakeRequest29209(plantIds)
    local params = {
        ids = plantIds
    }

    local function funcSuccessCbk(response)
        ---@type DragonBuildingMsg[]
        local msgs = Net.Converter.ConvertArray(response.hangups, Net.Converter.ConvertDragonBuildingMsg)
        local items = Net.Converter.ConvertArray(response.items, Net.Converter.ConvertItemMsg)
        for _, item in ipairs(items or {}) do
            AppServices.User:AddItem(item.itemTemplateId, item.count, ItemGetMethod.buildingHangUpReward)
        end
        local objMgr = SceneServices.ObjectManager
        for i, agentId in ipairs(plantIds) do
            self._shakingRequestAgentIds[agentId] = nil
        end
        for i, msg in ipairs(msgs) do
            ---@type MovableAgent
            local agent = objMgr:GetAgent(msg.id)
            if agent then
                agent:OnShakeReponse(msgs[i])
            end
        end
    end

    local function funcFailedCbk(errorCode)
        for _, agentId in ipairs(plantIds) do
            self._shakingRequestAgentIds[agentId] = nil
        end
        console.error("TakeAllHangUpAward_Reques", table.serialize(plantIds), "errorCode", errorCode) --@DEL
    end
    Net.Dragonbuildingmodulemsg_29209_TakeAllHangUpAward_Request(params, funcFailedCbk, funcSuccessCbk)
end

function BuildingRepairManager:RegistShakeAgent25318(agentId)
    self._onShakeAgentIds25318 = self._onShakeAgentIds25318 or {}
    if not agentId then
        return
    end
    self._onShakeAgentIds25318[agentId] = true
end

function BuildingRepairManager:UnRegistShakeAgent25318(agentId)
    if not self._onShakeAgentIds25318 then
        return
    end
    if not agentId then
        return
    end
    self._onShakeAgentIds25318[agentId] = nil
end

function BuildingRepairManager:RegistShakeAgent29209(agentId)
    if not agentId then
        return
    end
    self._onShakeAgentIds29209[agentId] = true
end

function BuildingRepairManager:UnRegistShakeAgent29209(agentId)
    if not self._onShakeAgentIds29209 then
        return
    end
    if not agentId then
        return
    end
    self._onShakeAgentIds29209[agentId] = nil
end

function BuildingRepairManager:ClearRegistShakeAgent()
    self._onShakeAgentIds25318 = {}
    self._onShakeAgentIds29209 = {}
end

---是否是大富翁地格触发的升级的建筑
function BuildingRepairManager:IsMonopolyUpgradeBuilding(templateId)
    local cfgs = self._monopolyUpgradeBuildingIds
    if not cfgs then
        cfgs = {}
        local monopolyCfgs = AppServices.Meta:Category("RichmanObstacleTemplate")
        for _, cfg in pairs(monopolyCfgs) do
            if cfg.obstacleType == 7 then
                local mapfunction = cfg.mapfunction
                if mapfunction and tostring(mapfunction[3]) == "1" then
                    cfgs[mapfunction[1]] = cfg.id
                end
            end
        end
        self._monopolyUpgradeBuildingIds = cfgs
    end
    return cfgs[templateId]
end

---建筑需要变成宝箱
function BuildingRepairManager:NeedShowGiftBox(agentId, templateId, lv)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local GiftPack = cfg.GiftPack
    if type(GiftPack) == "table" and not table.isEmpty(GiftPack) then
        local isIn = table.exists(GiftPack, lv)
        if not isIn then
            return
        end
        local sceneId = App.scene:GetCurrentSceneId()
        local repairData = self:GetRepairDate(sceneId, agentId)
        local buildEndTime = repairData:GetBuildEndTime()
        if not buildEndTime then
            return
        end
        if buildEndTime > 0 then
            return
        end
        return true
    end
end

function BuildingRepairManager:RegisterOnSecond(sceneId, agentId)
    local registers_onsecond = self.registers_onsecond
    if not registers_onsecond[sceneId] then
        registers_onsecond[sceneId] = {}
    end
    table.insertIfNotExist(registers_onsecond[sceneId], agentId)
    if not self._onSecondTimer then
        self._onSecondTimer = WaitExtension.InvokeRepeating(function()
            self:OnSecond()
        end, 0, 1)
        self:OnSecond()
    end
end

function BuildingRepairManager:IsRegistedOnSecon(sceneId, agentId)
    local registers_onsecond = self.registers_onsecond
    if not registers_onsecond[sceneId] then
        registers_onsecond[sceneId] = {}
    end
    return table.exists(registers_onsecond[sceneId], agentId)
end

-- function BuildingRepairManager:UnregisterOnSecond(sceneId, agentId)
--     local registers_onsecond = self.registers_onsecond
--     if not registers_onsecond[sceneId] then
--         return
--     end
--     table.removev(registers_onsecond[sceneId], agentId)
-- end

function BuildingRepairManager:OnSecond()
    local registers_onsecond = self.registers_onsecond
    local sceneId = App.scene:GetCurrentSceneId()
    local datas = registers_onsecond[sceneId]
    if table.isEmpty(datas) then
        return
    end
    local timeOuts
    for i, agentId in ipairs(datas) do
        local repairData = self:GetRepairDate(sceneId, agentId)
        if repairData then
            local timeOut = repairData:OnSecond()
            if timeOut then
                timeOuts = timeOuts or {}
                table.insert(timeOuts, i)
            end
        end
    end
    if timeOuts then
        for i = #timeOuts, 1, -1 do
            local idx = timeOuts[i]
            table.remove(datas, idx)
        end
    end
end

function BuildingRepairManager:GetShowRepairBubble()

end

function BuildingRepairManager:GetRepairBubbleMutexGroupConfig()
    if not self._repairBubbleMutexConfig then
        local sortedCfgs = {}
        local tmps = {}
        local cfgs = AppServices.Meta:Category("NewHomeBuildNumTemplate")
        for agentId, cfg in pairs(cfgs) do
            tmps[agentId] = cfg
            local GroupID = cfg.GroupID
            if not tmps[GroupID] then
                tmps[GroupID] = {}
            end
            table.insert(tmps[GroupID], cfg)
        end
        for groupId, cfgs in pairs(tmps) do
            table.sort(cfgs, function(a, b)
                return a.SerialNumber < b.SerialNumber
            end)
            sortedCfgs[groupId] = {}
            for i, cfg in ipairs(cfgs) do
                sortedCfgs[groupId][i] = cfg.id
            end
        end
        self._repairBubbleMutexConfig = sortedCfgs
    end
    return self._repairBubbleMutexConfig
end

function BuildingRepairManager:IsInBubbleMutexGroup(agentId)
    local cfgs = AppServices.Meta:Category("NewHomeBuildNumTemplate")
    return cfgs[agentId]
end

function BuildingRepairManager:GetBubbleMutextGroupNextAgent(groupId, sceneId)
    local cfgs = self:GetRepairBubbleMutexGroupConfig()
    local groups = cfgs[groupId]
    if not groups then
        return
    end
    local objectMgr = SceneServices.ObjectManager
    for i, agentId in ipairs(groups) do
        local agent = objectMgr:GetAgent(agentId)
        if agent then
            -- local curLv = agent:GetRepaireLevel()
            local curLv = self:GetLevel(sceneId, agentId)
            local cfg = AppServices.Meta:GetBuildingRepair(agent:GetTemplateId())
            if not cfg then
                return
            end
            local levelMax = cfg.levelmax
            if curLv < levelMax then
                return agentId
            end
        end
    end
end

--发送时间请求
function BuildingRepairManager:SendBuildRewardCountDown(sceneId, agentId, time)
    local onSuccess = function()
        console.print("Scenemodulemsg_25348_BuildingTipTime_Request Success sceneId" .. sceneId .. ",agentId" .. agentId .. ",time" .. time) --@DEL
        local date = self:GetRepairDate(sceneId, agentId)
        if date ~= nil then
            date.tipTime = time
        end
    end

    local onFailed = function(errorCode)
        console.error("Scenemodulemsg_25348_BuildingTipTime_Request", errorCode) --@DEL
        ErrorHandler.ShowErrorPanel(errorCode)                                   --@DEL
    end
    local params = {
        sceneId = sceneId,
        plantId = agentId,
        tipTime = time
    }
    console.print("Scenemodulemsg_25348_BuildingTipTime_Request sceneId" .. sceneId .. ",agentId" .. agentId .. ",time" .. time) --@DEL
    Net.Scenemodulemsg_25348_BuildingTipTime_Request(params, onFailed, onSuccess)
end

function BuildingRepairManager:GetPartnerConfig(partnerId)
    --获取id的配置
    return AppServices.Meta:GetMagicalCreateuresConfigById(partnerId)
end

return BuildingRepairManager
