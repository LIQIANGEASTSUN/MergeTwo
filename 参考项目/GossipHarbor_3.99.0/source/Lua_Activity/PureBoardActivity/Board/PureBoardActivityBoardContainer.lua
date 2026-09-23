PureBoardActivityBoardContainer = setmetatable({}, BaseUIBoardContainer)
PureBoardActivityBoardContainer.__index = PureBoardActivityBoardContainer

function PureBoardActivityBoardContainer.GetInstance()
  return PureBoardActivityBoardContainer.s_instance
end

function PureBoardActivityBoardContainer:Init()
  local boardView = GM.ModeViewController:GetPureBoardView()
  local boardCamera = GM.ModeViewController:GetPureBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  PureBoardActivityBoardContainer.s_instance = self
end

function PureBoardActivityBoardContainer:OnDestroy()
  PureBoardActivityBoardContainer.s_instance = nil
end
