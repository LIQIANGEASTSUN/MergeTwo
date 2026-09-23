AdventureActivityBoardContainer = setmetatable({}, BaseUIBoardContainer)
AdventureActivityBoardContainer.__index = AdventureActivityBoardContainer

function AdventureActivityBoardContainer.GetInstance()
  return AdventureActivityBoardContainer.s_instance
end

function AdventureActivityBoardContainer:Init()
  local boardView = GM.ModeViewController:GetAdventureActivityBoardView()
  local boardCamera = GM.ModeViewController:GetAdventureActivityBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  AdventureActivityBoardContainer.s_instance = self
end

function AdventureActivityBoardContainer:OnDestroy()
  AdventureActivityBoardContainer.s_instance = nil
end
