MapExploreActivityBoardContainer = setmetatable({}, BaseUIBoardContainer)
MapExploreActivityBoardContainer.__index = MapExploreActivityBoardContainer

function MapExploreActivityBoardContainer.GetInstance()
  return MapExploreActivityBoardContainer.s_instance
end

function MapExploreActivityBoardContainer:Init()
  local boardView = GM.ModeViewController:GetMapExploreActivityBoardView()
  local boardCamera = GM.ModeViewController:GetMapExploreActivityBoardCamera()
  BaseUIBoardContainer.Init(self, boardView, boardCamera)
  MapExploreActivityBoardContainer.s_instance = self
end

function MapExploreActivityBoardContainer:OnDestroy()
  MapExploreActivityBoardContainer.s_instance = nil
end
