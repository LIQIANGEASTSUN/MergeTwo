---@type MapGridStateBase
local MapGridStateBase = require "Game.TwoMerge.Map.MapGridStateBase"
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

---@class TowMergeGridStateLock
local TowMergeGridStateLock = class(MapGridStateBase, "TowMergeGridStateLock")


function TowMergeGridStateLock:ctor()
    self.stateType = TwoMergeConfig.GridState.Lock
end

function TowMergeGridStateLock:OnEnter()
    MapGridStateBase.OnEnter(self)
    self:ChangeIcon()
end

function TowMergeGridStateLock:OnExit()
end

function TowMergeGridStateLock:ChangeIcon()
    local row = self.grid:GetRow()
    local col = self.grid:GetCol()
    self.grid.style1:SetActive((row + col) % 2 == 0)
    self.grid.style2:SetActive((row + col) % 2 == 1)
    self.grid.deeplock1:SetActive(false)
    self.grid.lock:SetActive(true)
    MapGridStateBase.ChangeIcon(self)
end

return TowMergeGridStateLock