BreakBoardContainer = setmetatable({}, BaseUIBoardContainer)
BreakBoardContainer.__index = BreakBoardContainer

function BreakBoardContainer.GetInstance()
  return BreakBoardContainer.s_instance
end

function BreakBoardContainer:Init()
  local boardView = GM.ModeViewController:GetBreakBoardView()
  local boardCamera = GM.ModeViewController:GetBreakBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  BreakBoardContainer.s_instance = self
end

function BreakBoardContainer:OnDestroy()
  BreakBoardContainer.s_instance = nil
end
