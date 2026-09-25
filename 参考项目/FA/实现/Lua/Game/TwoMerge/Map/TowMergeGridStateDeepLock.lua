---@type MapGridStateBase
local MapGridStateBase = require "Game.TwoMerge.Map.MapGridStateBase"
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
local MergeConfigUtil = require "Game.TwoMerge.MergeUtil.MergeConfigUtil"

---@class TowMergeGridStateDeepUnLock
local TowMergeGridStateDeepLock = class(MapGridStateBase, "TowMergeGridStateDeepLock")

function TowMergeGridStateDeepLock:ctor()
    self.stateType = TwoMergeConfig.GridState.DeepLock
end

function TowMergeGridStateDeepLock:OnEnter()
    MapGridStateBase.OnEnter(self)
    self:ChangeIcon()
end

function TowMergeGridStateDeepLock:OnExit()

end

function TowMergeGridStateDeepLock:ChangeIcon()
    local row = self.grid:GetRow()
    local col = self.grid:GetCol()
    self.grid.style1:SetActive((row + col) % 2 == 0)
    self.grid.style2:SetActive((row + col) % 2 == 1)
    self.grid.deeplock1:SetActive(true) -- ((row + col) % 2 == 0)
    self.grid.deepicon.sprite = AppServices.ItemIcons:GetSpriteByName(MergeConfigUtil.GetDeepIcon(row, col))
    self.grid.lock:SetActive(false)
    MapGridStateBase.ChangeIcon(self)
end

return TowMergeGridStateDeepLock