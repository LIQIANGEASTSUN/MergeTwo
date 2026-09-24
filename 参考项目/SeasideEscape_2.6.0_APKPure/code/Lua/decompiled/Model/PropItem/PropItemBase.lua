PropItemBase = {}
PropItemBase.__index = PropItemBase

function PropItemBase.Create(class)
  local model = setmetatable({}, class)
  model._index = class
  model:Init()
  return model
end

function PropItemBase:Init()
end

function PropItemBase:LateInit()
end

function PropItemBase:LoadServerConfig(tbLoginResp)
end

function PropItemBase:UpdatePerSecond()
end

function PropItemBase:OnAcquired(durationInSeconds)
end

function PropItemBase:IsOn()
end

function PropItemBase:CanPopWindow()
end

function PropItemBase:HasWindowPopped()
end

function PropItemBase:SetWindowPopped(bool)
end

function PropItemBase:GetDuration()
end

function PropItemBase:GetEndTime()
end
