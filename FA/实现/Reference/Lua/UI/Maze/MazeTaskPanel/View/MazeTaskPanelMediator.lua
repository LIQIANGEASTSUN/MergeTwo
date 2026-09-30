require "UI.Maze.MazeTaskPanel.MazeTaskPanelNotificationEnum"
local MazeTaskPanelProxy = require "UI.Maze.MazeTaskPanel.Model.MazeTaskPanelProxy"

local MazeTaskPanelMediator = MVCClass("MazeTaskPanelMediator", BaseMediator)

---@type MazeTaskPanel
local panel
local proxy

function MazeTaskPanelMediator:ctor(...)
    MazeTaskPanelMediator.super.ctor(self, ...)
    proxy = MazeTaskPanelProxy.new()
end

function MazeTaskPanelMediator:onRegister()
end

function MazeTaskPanelMediator:onAfterSetViewComponent()
    panel = self:getViewComponent()
    panel:setProxy(proxy)
end

function MazeTaskPanelMediator:listNotificationInterests()
    return {
        MazeTaskPanelNotificationEnum.Click_btn_mask,
        MazeTaskPanelNotificationEnum.Click_btn_goBtn,
    }
end

function MazeTaskPanelMediator:handleNotification(notification)
    local name = notification:getName()
    -- local type = notification:getType() -- uncomment if need by yourself
    -- local body = notification:getBody() --message data  uncomment if need by yourself
    --insertHandleNotificationNames
    if name == MazeTaskPanelNotificationEnum.Click_btn_mask then
        PanelManager.closePanel(panel.panelVO)
    elseif name == MazeTaskPanelNotificationEnum.Click_btn_goBtn then
        if not AppServices.DragonMaze:IsOpen(AppServices.DragonMaze.lastEnterMazeType) then
            return
        end
        if panel.need > panel.has then
            UITool.ShowContentTipAni(Runtime.Translate("ui_dragonmaze_obstacle_error"))
        else
            local sceneId = App.scene:GetCurrentSceneId()
            local agent = SceneServices.ObjectManager:GetAgent(panel.arguments.agentId)
            local buildCfg = AppServices.Meta:GetBuildingRepair(agent:GetTemplateId())
            local successMaze = function()
                AppServices.Jump.changeSceneById("city")
                AppServices.DragonMaze:MazeSuccess(AppServices.DragonMaze.lastEnterMazeType)
            end
            local playDrama = function()
                ---@param mazeInfo DragonMazeInfoResponse
                --[[AppServices.DragonMaze:GetMazeInfo(function(mazeInfo)
                    if mazeInfo == nil then
                        successMaze()
                        return
                    end
                    local mazeCfg = AppServices.DragonMaze:GetMazeCfg(mazeInfo.lastEnterLevel)
                    if mazeCfg == nil or string.isEmpty(mazeCfg.dramaid) then
                        successMaze()
                        return
                    end

                end)--]]
                PlayDrama(buildCfg.CleanOnDramaBegin, "city", function()
                    successMaze()
                    App.mapGuideManager:DisableDragScreen(false)
                    App.mapGuideManager:DisableScaleScreen(false)
                    local size = 4 --是打开界面时的相机尺寸加1
                    local pos = AppServices.DragonMaze:GetExitAgentPos()
                    MoveCameraLogic.Instance():MoveCameraToLook2(Vector3(pos[0], 0.8, pos[2]),0.5, size)
                end)
            end
            local showReward = function()
                local rwds = {}
                local _, rewards = AppServices.BuildingRepair.GetLevelItemsWithCfg(buildCfg, 1)
                for _, reward in ipairs(rewards) do
                    table.insert(rwds, {ItemId = reward[1], Amount = reward[2]})
                end
                PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, {rewards = rwds, closeCallback = playDrama})
                --playDrama()
            end
            local tip = Runtime.Translate("ui_dragonmaze_obstacle_success_title")
            local des = Runtime.Translate("ui_dragonmaze_obstacle_success")
            UITool.ShowMessageBoxSingle(tip, des, nil, function()
                --[[local params = {
                    sceneId = sceneId,
                    plantId = panel.arguments.agentId
                }
                local funcSuccessCbk = function(response)
                    local agent = SceneServices.ObjectManager:GetAgent(panel.arguments.agentId)
                    local buildCfg = AppServices.Meta:GetBuildingRepair(agent:GetTemplateId())
                    for _, levelItem in ipairs(buildCfg.levelitem1) do
                        AppServices.User:UseItem(levelItem[1], levelItem[2])
                    end
                    AppServices.Jump.changeSceneById("city")

                end
                local funcFailedCbk = function(errorCode)
                    ErrorHandler.ShowErrorPanel(errorCode)
                end
                Net.Scenemodulemsg_25304_BuildingLevelUp_Request(params, funcFailedCbk, funcSuccessCbk)--]]
                if not AppServices.DragonMaze:IsFirstOpen(AppServices.DragonMaze.lastEnterMazeType) then
                    self:BuildingLevelUpRequest(sceneId, panel.arguments.agentId, agent:GetTemplateId(), function(res, lvUpCbk)
                        self.playingDrama = true
                        PanelManager.closePanel(GlobalPanelEnum.MazeTaskPanel)
                        playDrama()
                        Runtime.InvokeCbk(lvUpCbk)
                    end)
                else
                    local data = {
                        sceneId = sceneId,
                        agentId = panel.arguments.agentId,
                        templateId = agent:GetTemplateId(),
                    }
                    data.onResponse = function(res, lvUpCbk)
                        PanelManager.closePanel(GlobalPanelEnum.MazeTaskPanel)
                        showReward()
                        Runtime.InvokeCbk(lvUpCbk)
                    end
                    AppServices.BuildingRepair:BuildingLevelUpRequest(data )
                end
            end)
        end
    end
end

function MazeTaskPanelMediator:NormalCallback(sceneId, agentId, templateId, response, onResponse)
    local repairDrawMsg = Net.Converter.ConvertBuildingRepairDrawMsg(response.repairDrawMsg)
    local curLevel = AppServices.BuildingRepair:GetLevel(sceneId, agentId)
    local newLevel = curLevel + 1
    local levelItems = AppServices.BuildingRepair.GetLevelItems(templateId, curLevel)
    for _, v in ipairs(levelItems) do
        -- if v[1] == TwoMergeCfgType then
        --     local itemId, need = v[2], v[3]
        --     local activityId = AppServices.TwoMergeManager:GetMapId()
        --     AppServices.TwoMergeManager:RemoveItem(activityId, itemId, need)
        -- else
            local itemId, need = v[1], v[2]
            AppServices.User:UseItem(itemId, need, ItemUseMethod.repairTaskBuilding)
        -- end
    end
    Util.BlockAll(8, "BuildingRepairManager")
    ---弹出普通奖励面板
    AppServices.BuildingRepair:BuildingLevelUp(sceneId, agentId, templateId, newLevel, onResponse, true, repairDrawMsg)
end

function MazeTaskPanelMediator:BuildingLevelUpRequest(sceneId, agentId, templateId, onResponse, noDrama)
    local curLevel = AppServices.BuildingRepair:GetLevel(sceneId, agentId)
    local cfg = AppServices.Meta:GetBuildingRepair(templateId)
    local levelMax = cfg.levelmax
    local repairKind = AppServices.BuildingRepair:getRepairKind(templateId, curLevel)
    local extParams = AppServices.BuildingRepair:getExtParamByRepairKind(repairKind, sceneId, agentId, templateId)
    if noDrama then
        extParams = extParams or {}
        extParams.noDrama = true
    end
    local funcSuccessCbk = function(response)
        Runtime.InvokeCbk(MazeTaskPanelMediator.NormalCallback, self, sceneId, agentId, templateId, response, onResponse, extParams)
    end

    local funcFailedCbk = function(errorCode)
        if errorCode == ErrorCodeEnums.BUIDING_TO_MAX_LEVEL then
            local lv = AppServices.BuildingRepair:GetLevel(sceneId, agentId)
            if lv < levelMax then
                Runtime.InvokeCbk(funcSuccessCbk) -- TODO
                return
            end
        else
            ErrorHandler.ShowErrorPanel(errorCode)
        end
    end

    local params = {
        sceneId = sceneId,
        plantId = agentId
    }
    -- console.lzl("---send Scenemodulemsg_25304_BuildingLevelUp_Request", sceneId, agentId, self) --@DEL
    Net.Scenemodulemsg_25304_BuildingLevelUp_Request(params, funcFailedCbk, funcSuccessCbk)
end

-- function MazeTaskPanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

function MazeTaskPanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
end

 function MazeTaskPanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
     panel:refreshUI()
     App.mapGuideManager:DisableDragScreen(true)
     App.mapGuideManager:DisableScaleScreen(true)
     local size = 3 --是打开界面时的相机尺寸加1
     local pos = AppServices.DragonMaze:GetExitAgentPos()
     MoveCameraLogic.Instance():MoveCameraToLook2(Vector3(pos[0], 0.8, pos[2]), 0.5, size)
 end
function MazeTaskPanelMediator:onAfterShowPanel()
-- 	--在第一次显示之后，此时visible=true。

end

function MazeTaskPanelMediator:onBeforeHidePanel()
-- 	--在被隐藏之前(FadeOut开始前)，此时visible=true。

end
-- function MazeTaskPanelMediator:onAfterHidePanel()
-- 	--在被隐藏之后(FadeOut完成后)，此时visible=false。
-- end

-- function MazeTaskPanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function MazeTaskPanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

 function MazeTaskPanelMediator:onBeforeDestroyPanel()
-- 	--在被销毁之前，此时visible=false。
     if not self.playingDrama then
         App.mapGuideManager:DisableDragScreen(false)
         App.mapGuideManager:DisableScaleScreen(false)
         local size = 4 --是打开界面时的相机尺寸加1
         local pos = AppServices.DragonMaze:GetExitAgentPos()
         MoveCameraLogic.Instance():MoveCameraToLook2(Vector3(pos[0], 0.8, pos[2]),0.5, size)
     end
 end

-- function MazeTaskPanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function MazeTaskPanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

function MazeTaskPanelMediator:onUpdatePerSecond()
    if AppServices.DragonMaze:IsOpen(AppServices.DragonMaze.lastEnterMazeType) == false then
        PanelManager.closePanel(panel.panelVO)
    end
end

return MazeTaskPanelMediator
