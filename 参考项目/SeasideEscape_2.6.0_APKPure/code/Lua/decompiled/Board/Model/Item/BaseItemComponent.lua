BaseItemComponent = {}
BaseItemComponent.__index = BaseItemComponent

function BaseItemComponent:FromSerialization(dbTable)
end

function BaseItemComponent:ToSerialization(dbTable)
end

function BaseItemComponent:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function BaseItemComponent:SetItemModel(itemModel)
  self.m_itemModel = itemModel
end

function BaseItemComponent:Update()
end

function BaseItemComponent:UpdatePerSecond()
end

function BaseItemComponent:OnTap()
end

function BaseItemComponent:OnShock()
end

function BaseItemComponent:OnOpen()
end

function BaseItemComponent:OnSpeedUp()
end

function BaseItemComponent:OnTimeSkip(duration)
end

function BaseItemComponent:OnBreak()
end

function BaseItemComponent:OnChoose(index)
end

function BaseItemComponent:OnRemoved()
end

function BaseItemComponent:RefreshChoice()
end

function BaseItemComponent:Accelerate()
end

function BaseItemComponent:GetEnergyPropertyType()
  return self.m_itemModel:GetEnergyPropertyType()
end

function BaseItemComponent:GetGameMode()
  return self.m_itemModel:GetGameMode()
end

function BaseItemComponent:GetItemModel()
  return self.m_itemModel
end
