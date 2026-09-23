MultiboardsActivityBoardContainer = setmetatable({}, BaseUIBoardContainer)
MultiboardsActivityBoardContainer.__index = MultiboardsActivityBoardContainer

function MultiboardsActivityBoardContainer.GetInstance()
  return MultiboardsActivityBoardContainer.s_instance
end

function MultiboardsActivityBoardContainer:Init()
  local boardView = GM.ModeViewController:GetMultiboardsActivityBoardView()
  local boardCamera = GM.ModeViewController:GetMultiboardsActivityBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  MultiboardsActivityBoardContainer.s_instance = self
end

function MultiboardsActivityBoardContainer:OnDestroy()
  MultiboardsActivityBoardContainer.s_instance = nil
end
