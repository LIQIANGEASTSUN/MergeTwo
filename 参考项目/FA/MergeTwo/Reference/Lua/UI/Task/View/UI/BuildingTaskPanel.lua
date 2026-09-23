---insertWidgetsBegin
--    go_layout    go_award_layout    btn_build
--insertWidgetsEnd

--insertRequire
local _BuildingTaskPanelBase = require "UI.Task.View.UI.Base._BuildingTaskPanelBase"

---@type BuildingTaskCostItem
local BuildingTaskCostItem = require "UI.Task.View.UI.BuildingTaskCostItem"

---@class BuildingTaskPanel:
local BuildingTaskPanel = class(_BuildingTaskPanelBase)
local ModelPreviewItem = require("UI.Components.ModelPreviewItem")

function BuildingTaskPanel:ctor()

end

function BuildingTaskPanel:onAfterBindView()
    self:refreshUI()
    self:CheckTutorial()
end

function BuildingTaskPanel:refreshUI()
    self:showTask()
    self:ShowExternalTip()
end

function BuildingTaskPanel:showTask()
    if Runtime.CSNull(self.gameObject) then
        return
    end
    local agentId = self.arguments.agentId
    self.buildingId = self.arguments.templateId
    local templateId = self.arguments.templateId
    local metaMgr = AppServices.Meta
    local BRMgr = AppServices.BuildingRepair
    local tbuildingCfg = metaMgr:GetBuildingRepair(templateId)
    self.buildCfg = tbuildingCfg
    -- "奖励"两个字的文字
    Runtime.Localize(self.label_award, 'ui_task_reward')
    -- 任务标题
    Runtime.Localize(self.lable_title, tbuildingCfg.name)
    -- 任务描述
    Runtime.Localize(self.label_description, tbuildingCfg.description)
    -- 任务图标
    -- AppServices.ItemIcons:PackMissionIcon(mission, self.img_head)
    -- self.img_head.sprite = AppServices.ItemIcons:GetBuildingIcon(tbuildingCfg.icon)
    AppServices.ItemIcons:PackBuildingIcon(tbuildingCfg.icon, self.img_head)
    local sceneId = App.scene:GetCurrentSceneId()
    local level = BRMgr:GetLevel(sceneId, agentId)
    local totalLevel = tbuildingCfg.levelmax
    self.label_progress.text = AppServices.BuildingRepair.GetShowLevelStr(level, totalLevel)
    local levelItems, rewardItems = AppServices.BuildingRepair.GetLevelItems(templateId, level)

    self.costItemList = {}
    if levelItems and #levelItems > 0 then
        local coms = self:CopyComponent(self.btn_subNode.gameObject, self.go_layout, #levelItems)
        for i, go in ipairs(coms) do
            local data = {
                levelItem = levelItems[i],
                agentId = agentId,
                templateId = templateId,
                sceneId = sceneId,
            }
            local costItem = BuildingTaskCostItem.new(go, data, self)
            costItem:Refresh()
            table.insert(self.costItemList, costItem)
        end
        self.taskItems = coms
    end

    -- 奖励
    if table.isEmpty(rewardItems) then
        -- 无奖励
        self.go_award_layout:SetActive(false)
        self.label_award:SetActive(false)
    else
        self.go_award_layout:SetActive(true)
        self.label_award:SetActive(true)
        local coms = self:CopyComponent(self.go_awardNode, self.go_award_layout, #rewardItems)
        for i, go in ipairs(coms) do
            local label_itemNum = find_component(go, 'label_itemNum', Text)
            local img_itemIcon = find_component(go, 'img_itemIcon', Image)
            local reward = rewardItems[i]
            local itemId, num = tostring(reward[1]), reward[2]
            label_itemNum.text = tostring(num)
            local m_isDragon = ItemId.IsDragon(itemId)
            if m_isDragon then
                local m_icon = AppServices.Meta:GetItemIcon(itemId)
                local path = string.format("Prefab/RuntimeIcons/Dragons/%s.png", m_icon)
                AppServices.ItemIcons:LoadSpriteAsync(path, function(spr)
                    UITool.AdaptImage(img_itemIcon, spr, 50)
                end)
            else
                AppServices.ItemIcons:SetItemIcon(img_itemIcon, itemId)
            end
        end
        self.rewardItemGos = coms
        -- self.label_itemNum.text = rewardItems
        -- AppServices.ItemIcons:SetItemIcon(self.img_itemIcon, ItemId.EXP)
    end
end

function BuildingTaskPanel:GetTaskItem(index)
    if self.taskItems then
        return self.taskItems[index]
    end
end

function BuildingTaskPanel:FlyLvupReward()

    local templateId = self.arguments.templateId
    local agentId = self.arguments.agentId
    local sceneId = App.scene:GetCurrentSceneId()
    local BRMgr = AppServices.BuildingRepair
    local level = BRMgr:GetLevel(sceneId, agentId)
    local _, rewardItems = AppServices.BuildingRepair.GetLevelItems(templateId, level)

    if not table.isEmpty(rewardItems) then
        local flyRewards = {}
        for _, v in ipairs(rewardItems) do
            local itemId, num = tostring(v[1]), v[2]
            if ItemId.IsActivityMapScore(itemId) then
                ---@type ScoreTaskActivityBase
                local ins = ActivityServices.ActivityManager:GetInsBySceneId(sceneId)
                if ins and ins:IsInActivityTime() then
                    table.insert(flyRewards, { ItemId = itemId, Amount = num })
                end
            else
                local itemCfg = AppServices.Meta:GetItemMeta(itemId)
                if itemCfg.showUp ~= 1 then
                    table.insert(flyRewards, { ItemId = itemId, Amount = num })
                end
            end
        end
        require("UI.Components.FastFlyRewards").Create(flyRewards, nil, nil, true)
    end
end

--新增建筑类型升级显示
function BuildingTaskPanel:ShowExternalTip()
    -- 是否显示装饰物和额外奖励 isShowExternalRewardObj 是否有升级建筑的奖励
    local m_remainTime = 0
    local m_cfg = AppServices.Meta:Category("ObstacleTemplate")
    local m_sceneId = App.scene:GetCurrentSceneId()
    --self.buildingId = 30060
    local m_isShowExternalRewardObj = m_cfg[tostring(self.buildingId)].type == AgentType.UpgradableBuildingsAgent
    local m_curObstacleCfg = m_cfg[tostring(self.buildingId)]
    self.go_decorateBg:SetActive(m_isShowExternalRewardObj)
    self.go_externalRewardObj:SetActive(m_isShowExternalRewardObj)
    self.lable_title.gameObject:SetActive(not m_isShowExternalRewardObj)
    self.helpTip.text = Runtime.Translate("castle_9story_02")
    local m_buildInfo = AppServices.BuildingRepair:GetRepairDate(m_sceneId, self.arguments.agentId)
    if m_buildInfo == nil and m_isShowExternalRewardObj then
        console.error("m_buildInfo == nil id == " .. self.arguments.agentId)

        --return
    end
    if m_isShowExternalRewardObj and (m_buildInfo == nil or m_buildInfo.tipTime == nil or m_buildInfo.tipTime == 0) then
        --发送请求
        m_remainTime = TimeUtil.ServerTime() + m_curObstacleCfg.FuncParam[1]
        --console.print("whz --- m_remainTime==" .. m_remainTime .. " , " .. m_curObstacleCfg.FuncParam[1])
        AppServices.BuildingRepair:SendBuildRewardCountDown(m_sceneId, self.arguments.agentId, m_remainTime)
    else
        m_remainTime = m_buildInfo.tipTime
    end
    --m_remainTime = TimeUtil.ServerTime() + m_curObstacleCfg.FuncParam[1]
    if m_isShowExternalRewardObj then
        --获取伙伴的配置信息
        local m_rewardId = m_curObstacleCfg.FuncParam[2]
        local m_config = AppServices.BuildingRepair:GetPartnerConfig(m_rewardId)
        self.modeView = ModelPreviewItem.Create(self.go_modelParent.transform, 512)
        self.modeView:SetRtSize(520)
        self.modeView:SetPosition(Vector2(0, 2))
        self.modeView:SetCameraPosition(Vector3(1, 16, -59.9))
        self.modeView:SetCameraFov(13)
        --模型名字
        self.modeView:SetDragonModel(m_config.model)
        --文本
        self.Text_decorateTitle.text = Runtime.Translate(self.buildCfg.name)
        self.Text_rewardName.text = Runtime.Translate(m_config.name)
        --新增提示
        Util.UGUI_AddButtonListener( self.btnExternalRewardTip, function()
            self:ShowTip(m_rewardId)
        end )
        --倒计时 文本
        self:StartTimer(m_remainTime)
    end
end

function BuildingTaskPanel:StartTimer(time)
    self.curEndTime = time
    if self.timer then
        WaitExtension.CancelTimeout(self.timer)
        self.timer = nil
    end
    self.timer = WaitExtension.InvokeRepeating(
            function()
                self:Timer()
            end,
            0,
            1
    )
end

function BuildingTaskPanel:Timer()
    if Runtime.CSNull(self.Text_rewardTimeCountDown) then
        return
    end
    local leftTime = self.curEndTime - TimeUtil.ServerTime()
    self.Text_rewardTimeCountDown.gameObject:SetActive(leftTime > 0)
    if leftTime <= 0 then
        if Runtime.CSValid(self.Text_rewardTimeCountDown) then
            self.Text_rewardTimeCountDown.text = TimeUtil.SecToOver48H(0)
        end
        return
    end

    local ret, time1, time2 = TimeUtil.SecToDayHour(leftTime, 24)
    if Runtime.CSNull(self.Text_rewardTimeCountDown) then
        return
    end
    local txtColor = "7C351E"
    local str_time
    if ret then
        str_time = Runtime.Translate("ui_goldpass_activitytime", { day = tostring(time1), hour = tostring(time2) })
    else
        str_time = time1
        txtColor = "f14333"
    end
    self.Text_rewardTimeCountDown.text = Runtime.formatStringColor(str_time, txtColor)
end

function BuildingTaskPanel:GetRewardItem(index)
    if self.rewardItemGos then
        return self.rewardItemGos[index]
    end
end
function BuildingTaskPanel:GetBuildBtn()
    return self.btn_build
end

function BuildingTaskPanel:ShowTip(itemId)
    if ItemId.IsDragon(itemId) then
        PanelManager.showPanel(GlobalPanelEnum.PartnerDetailPanel, {templateIds = {
            itemId},index = 1})
    elseif ItemId.IsDragonGene(itemId) then
        local dragonId = AppServices.Meta:GetItemFuncParam(itemId)
        PanelManager.showPanel(GlobalPanelEnum.PartnerDetailPanel, {templateIds = {
            dragonId},index = 1})
    end
end

function BuildingTaskPanel:CheckTutorial()
    -- 二合引导
    local curSceneId = App.scene:GetCurrentSceneId()
    local isTwoMerge, mapId = AppServices.TwoMergeManager:IsTwoMergeScene(curSceneId)
    if isTwoMerge then
        local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
        local agentId = self.arguments.agentId
        if agentId == config.guide_building then
            local towmerge_tutorial = AppServices.User.Default:GetKeyValue("twomerge_tutorial_enter"..tostring(mapId), 0)
            if towmerge_tutorial == 0 then
                App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeEnter)
                AppServices.User.Default:SetKeyValue("twomerge_tutorial_enter"..tostring(mapId), 1,true)
            end
        end
    end
end
function BuildingTaskPanel:GetTutorialFirstItemBtn()
    if self.costItemList ~= nil and #self.costItemList > 0 then
        return self.costItemList[1]:GetBtn() or nil
    end
    return nil
end

return BuildingTaskPanel
