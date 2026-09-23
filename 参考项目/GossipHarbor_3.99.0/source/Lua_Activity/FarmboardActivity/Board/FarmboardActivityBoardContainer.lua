FarmboardActivityBoardContainer = setmetatable({}, BaseUIBoardContainer)
FarmboardActivityBoardContainer.__index = FarmboardActivityBoardContainer

function FarmboardActivityBoardContainer.GetInstance()
  return FarmboardActivityBoardContainer.s_instance
end

function FarmboardActivityBoardContainer:Init()
  local boardView = GM.ModeViewController:GetFarmboardActivityBoardView()
  local boardCamera = GM.ModeViewController:GetFarmboardActivityBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  FarmboardActivityBoardContainer.s_instance = self
end

function FarmboardActivityBoardContainer:OnDestroy()
  FarmboardActivityBoardContainer.s_instance = nil
end
