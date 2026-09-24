PropItemManager = {}
PropItemManager.__index = PropItemManager
EPropItemType = {
  Energy4x = EPropertyType.Energy4x,
  Accelerator = EPropertyType.Accelerator,
  ExtraOrder = EPropertyType.ExtraOrder,
  TimedBuff = EPropertyType.TimedBuff,
  MoreCardBuff = EPropertyType.MoreCardBuff,
  BalloonBox = EPropertyType.BalloonBox
}

function PropItemManager:Init()
  self.m_mapModels = {}
  self.m_mapModels[EPropItemType.Energy4x] = PropItemBase.Create(PropItemEnergy4x)
  self.m_mapModels[EPropItemType.Accelerator] = PropItemBase.Create(PropItemAccelerator)
  self.m_mapModels[EPropItemType.ExtraOrder] = PropItemBase.Create(PropItemExtraOrder)
  self.m_mapModels[EPropItemType.TimedBuff] = PropItemBase.Create(PropItemTimedBuff)
  self.m_mapModels[EPropItemType.MoreCardBuff] = PropItemBase.Create(PropItemMoreCard)
  self.m_mapModels[EPropItemType.BalloonBox] = PropItemBase.Create(PropItemBalloon)
end

function PropItemManager:LoadServerConfig(tbLoginResp)
  for _, model in pairs(self.m_mapModels) do
    model:LoadServerConfig(tbLoginResp)
  end
end

function PropItemManager:LateInit()
  for _, model in pairs(self.m_mapModels) do
    model:LateInit()
  end
end

function PropItemManager:UpdatePerSecond()
  for _, model in pairs(self.m_mapModels) do
    model:UpdatePerSecond()
  end
end

function PropItemManager:GetModel(ePropItemType)
  return self.m_mapModels[ePropItemType]
end
