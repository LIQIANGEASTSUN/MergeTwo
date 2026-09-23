DigBoardContainer = setmetatable({}, BaseUIBoardContainer)
DigBoardContainer.__index = DigBoardContainer

function DigBoardContainer.GetInstance()
  return DigBoardContainer.s_instance
end

function DigBoardContainer:Init()
  local boardView = GM.ModeViewController:GetDigBoardView()
  local boardCamera = GM.ModeViewController:GetDigBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  DigBoardContainer.s_instance = self
end

function DigBoardContainer:OnDestroy()
  DigBoardContainer.s_instance = nil
end
