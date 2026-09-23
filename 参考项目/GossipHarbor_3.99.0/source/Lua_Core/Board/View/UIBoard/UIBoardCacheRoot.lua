UIBoardCacheRoot = setmetatable({}, BoardCacheRoot)
UIBoardCacheRoot.__index = UIBoardCacheRoot

function UIBoardCacheRoot:Init(boardView)
  BoardCacheRoot.Init(self, boardView)
  self.m_activityType = boardView.m_activityType
  local activityModel = GM.ActivityManager:GetModel(self.m_activityType)
  self.m_activityId = activityModel:GetId()
end

function UIBoardCacheRoot:OnCachedItemsChanged()
  local activityModel = GM.ActivityManager:GetModel(self.m_activityType)
  if activityModel:GetState() ~= ActivityState.Started or activityModel:GetId() ~= self.m_activityId then
    return
  end
  BoardCacheRoot.OnCachedItemsChanged(self)
end
