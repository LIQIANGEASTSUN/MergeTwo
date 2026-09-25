local TwoMergeOrderMain = class(require("Game.TwoMerge.Order.TwoMergeOrderBase"), "TwoMergeOrderMain") 

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

function TwoMergeOrderMain:ctor(mapId, configs)
    self.mapId = mapId
    self.configs = configs
    self.opens = {}

    self.taskMap = {}
    for _, cfg in ipairs(self.configs) do
        self.taskMap[cfg.condition] = true
    end
end

function TwoMergeOrderMain:Refresh()
    self.opens = {}
    local taskIdList = AppServices.TaskIconButtonLogic:GetTaskList()
    for _, taskId in pairs(taskIdList) do
        local orderData = self:CheckMissionBuilding(taskId)
        if orderData then
            table.insert(self.opens, orderData)
            break
        end
    end
    self:SetDirty()
end

function TwoMergeOrderMain:CheckMissionBuilding(taskId)
    local subMissionCfg = self:CheckTask(taskId)
    if not subMissionCfg then
        return nil
    end

    local agentId = subMissionCfg.BuildingId
    local templateId = subMissionCfg.ObstacleTemplateId
    local sceneId = App.scene:GetCurrentSceneId()
    local level = AppServices.BuildingRepair:GetLevel(sceneId, agentId)
    local levelItems, rewardItems = AppServices.BuildingRepair.GetLevelItems(templateId, level)

    local data = levelItems[1]
    local itemBigType = data[1]
    if itemBigType ~= TwoMergeCfgType then
        return nil
    end

    local orderData = {}
    orderData.id = "-1"
    orderData.orderType = TwoMergeConfig.OrderType.Main
    orderData.agentId = agentId
    orderData.templateId = templateId
    orderData.itemNeedList = {}
    orderData.needMap = {}
    orderData.complete = false
    orderData.taskId = taskId

    for _, item in ipairs(levelItems) do
        local itemData = {
            itemId = tostring(item[2]),
            count = item[3],
            complete = false,
        }
        orderData.needMap[itemData.itemId] = true
        table.insert(orderData.itemNeedList, itemData)
    end

    orderData.rewardList = {}
    for _, v in ipairs(rewardItems) do
        local itemId, num = tostring(v[1]), v[2]
        local data = {
            itemId = itemId,
            count = num
        }
        table.insert(orderData.rewardList, data)
    end

    return orderData
end

function TwoMergeOrderMain:CheckTask(taskId)
    if not self.taskMap[taskId] then
        return nil
    end
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

    local subIndex = 1
    local sub = entity.subtasks[subIndex]
    local subMissionCfg = sub:GetCfg()
    if subMissionCfg.MissionType ~= MissionType.Building then
        return nil
    end

    return subMissionCfg
end

return TwoMergeOrderMain