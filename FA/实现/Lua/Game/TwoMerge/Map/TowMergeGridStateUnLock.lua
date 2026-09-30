---@type MapGridStateBase
local MapGridStateBase = require "Game.TwoMerge.Map.MapGridStateBase"
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@class TowMergeGridStateUnLock
local TowMergeGridStateUnLock = class(MapGridStateBase, "TowMergeGridStateUnLock")

function TowMergeGridStateUnLock:ctor()
    self.stateType = TwoMergeConfig.GridState.UnLock
end

function TowMergeGridStateUnLock:OnEnter()
    MapGridStateBase.OnEnter(self)
    self:ChangeIcon()
end

function TowMergeGridStateUnLock:OnExit()

end

function TowMergeGridStateUnLock:ChangeIcon()
    local row = self.grid:GetRow()
    local col = self.grid:GetCol()
    self.grid.style1:SetActive((row + col) % 2 == 0)
    self.grid.style2:SetActive((row + col) % 2 == 1)
    self.grid.deeplock1:SetActive(false)
    self.grid.lock:SetActive(false)
    MapGridStateBase.ChangeIcon(self)
end

return TowMergeGridStateUnLock