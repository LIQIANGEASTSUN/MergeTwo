ItemCommandOperation = {
  FarmboardUnlockBlock = "FarmboardUnlockBlock",
  FarmboardActivateAnimal = "FarmboardActivateAnimal",
  UnlockFog = "UnlockFog"
}
ItemCommand = setmetatable({}, BaseItemComponent)
ItemCommand.__index = ItemCommand

function ItemCommand.Create(command)
  local itemCommand = setmetatable({}, ItemCommand)
  itemCommand:Init(command)
  return itemCommand
end

function ItemCommand:Init(command)
  self.m_command = command
end

function ItemCommand:OnTap()
  if self.m_command == ItemCommandOperation.FarmboardUnlockBlock then
    local model = GM.ActivityManager:GetStartedFarmboardActivity()
    if model then
      model:UnlockBlock(self.m_itemModel)
    end
  elseif self.m_command == ItemCommandOperation.FarmboardActivateAnimal then
    local model = GM.ActivityManager:GetStartedFarmboardActivity()
    if model then
      model:ActivateAnimal(self.m_itemModel)
    end
  elseif self.m_command == ItemCommandOperation.UnlockFog then
    EventDispatcher.DispatchEvent(EEventType.FogKeyItemTap)
    local boardModel = self.m_itemModel:GetBoardModel()
    local fogModel = boardModel:GetFogModel()
    if fogModel then
      fogModel:TryUnlockFogByItem(self.m_itemModel)
    end
  end
end

function ItemCommand:GetCommand()
  return self.m_command
end
