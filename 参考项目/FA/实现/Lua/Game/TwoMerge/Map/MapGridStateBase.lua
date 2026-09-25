---@type FsmStateBase
local FsmStateBase = require "Game.FsmStateMachine.FsmStateBase"

---@class MapGridStateBase
local MapGridStateBase = class(FsmStateBase, "MapGridStateBase")

local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
local AreaLogic = require ("Game.TwoMerge.Logic.AreaLogic")

---@param grid MapGrid
function MapGridStateBase:ctor(grid)
    self.grid = grid
end

function MapGridStateBase:OnEnter()
    MessageDispatcher:SendMessage(MessageType.MergeGridStateChange,self.grid:GetRow(),self.grid:GetCol(),self.stateType)
end

function MapGridStateBase:OnExit() end

function MapGridStateBase:ChangeIcon()
    local positionId = TwoMergeConfig.Encode(self.grid:GetRow(), self.grid:GetCol())
    if not AppServices.TwoMergeManager:IsUnlockArea(positionId) then
        self.grid.deeplock1:SetActive(false)
        self.grid.lock:SetActive(false)
    end
end

return MapGridStateBase