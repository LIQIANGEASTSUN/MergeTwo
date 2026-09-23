---@type FsmStateMachine
local FsmStateMachine = require "Game.FsmStateMachine.FsmStateMachine"

---@type TwoMergeConfig
local twoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

---@class MapGrid
local MapGrid = class(nil, "MapGrid")


function MapGrid:ctor(positionId,gridData)
    self.positionId = positionId
    self.gridData = gridData
    self.coverIcon = self.gridData.gridCoverIcon
    self.areaTask = self.gridData.areaTask
    self.areaIcon = self.gridData.areaIcon
    self.row = self.gridData._row
    self.col = self.gridData._col
    self.gameObject = self:GetGridObj(self.row,self.col)
    self:Init()
end

function MapGrid:GetGridObj(row, col)
    self.gridItem = AppServices.TwoMergeManager:GetGridCloneItem()
    self.gridRoot = AppServices.TwoMergeManager:GetGridParent()
    local obj = self:Clone(self.gridItem, self.gridRoot)
    local rect = find_component(obj, "", RectTransform)
    rect.localScale = twoMergeConfig.GetScale()
    self.style1 = find_component(obj, "style1")
    self.style2 = find_component(obj, "style2")
    self.deeplock1 = find_component(obj, "deeplock1")
    self.deepicon = find_component(obj, "deeplock1", Image)
    self.lock = find_component(obj, "lock")
    rect.anchoredPosition = twoMergeConfig.GridIdToPos(row, col)
    return obj
end

function MapGrid:Clone(child, parent)
    local go = GameObject.Instantiate(child)
    go:SetParent(parent.transform, false)
    go.transform:SetLocalPosition(Vector3.zero)
    go.transform:SetLocalEulerAngle(0, 0, 0)
    go.transform:SetLocalScale(Vector3.one)
    go.name = "GridItem_"..tostring(self.instanceId)
    go:SetActive(true)
    return go
end

function MapGrid:Init()
    self.state = self.gridData.state
    self.stateMachine = FsmStateMachine.new()
    for _, state in pairs(twoMergeConfig.GridState) do
        local alis = twoMergeConfig.GridStateCfg[state]
        local stateEntity = alis.new(self)
        self.stateMachine:Add(stateEntity)
    end

    self.stateMachine:ChangeState(self.state)
end

function MapGrid:GetState()
    return self.state
end

function MapGrid:GetRow()
    return self.row
end

function MapGrid:GetCol()
    return self.col
end

function MapGrid:ChangeState(state)
    self.state = state
    self.stateMachine:ChangeState(state)
end

function MapGrid:GetPositionId()
    return self.positionId
end

--根据格子状态获取格子的图标
function MapGrid:GetGridCoverIcon()
    if self.state == twoMergeConfig.GridState.DeepLock then
        return self.coverIcon
    end
    return ""
end

function MapGrid:DoUnlock(delay)
    local state = self.stateMachine:GetCurrentState()
    state:ChangeIcon()
    self.deeplock1.transform.localScale = Vector3.zero
    self.deeplock1.transform:DOScale(1, 0.3):SetDelay(delay)
    self.lock.transform.localScale = Vector3.zero
    self.lock.transform:DOScale(1, 0.3):SetDelay(delay)
end

function MapGrid:Release()
    self.stateMachine:OnExit()
    self.stateMachine = nil
    Runtime.CSDestroy(self.go)
end



return MapGrid