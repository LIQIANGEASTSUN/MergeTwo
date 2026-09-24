HuntDoubleEnergyMultipleDefinition = {
  Eightfold = "EightfoldEnergy",
  Quadruple = "QuadrupleEnergy",
  Double = "DoubleEnergy",
  None = "None"
}
HuntDoubleEnergyMultipleArray = {
  HuntDoubleEnergyMultipleDefinition.Eightfold,
  HuntDoubleEnergyMultipleDefinition.Quadruple,
  HuntDoubleEnergyMultipleDefinition.Double
}
HuntDoubleEnergyUnclockType = {
  CloudUnlock = "cloud",
  Merge = "merge",
  TokenNum = "token"
}
HuntDoubleEnergyMultipleConfig = {
  [HuntDoubleEnergyMultipleDefinition.Eightfold] = {
    MultipleNum = 3,
    DBKeyOn = "eight_on",
    DBKeyUnlock = "eight_ulk",
    DBKeyInPeriod = "eight_ip",
    NxtMultipleType = nil,
    PreMultipleType = HuntDoubleEnergyMultipleDefinition.Quadruple,
    ButtonImageName = ImageFileConfigName.hunt_en_btn4,
    SpreadBtnImageName = ImageFileConfigName.huntEnergywindowbtn3
  },
  [HuntDoubleEnergyMultipleDefinition.Quadruple] = {
    MultipleNum = 2,
    DBKeyOn = "quad_on",
    DBKeyUnlock = "quad_ulk",
    DBKeyInPeriod = "quad_ip",
    NxtMultipleType = HuntDoubleEnergyMultipleDefinition.Eightfold,
    PreMultipleType = HuntDoubleEnergyMultipleDefinition.Double,
    ButtonImageName = ImageFileConfigName.hunt_en_btn3,
    SpreadBtnImageName = ImageFileConfigName.huntEnergywindowbtn2
  },
  [HuntDoubleEnergyMultipleDefinition.Double] = {
    MultipleNum = 1,
    DBKeyOn = "double_on",
    DBKeyUnlock = "double_ulk",
    DBKeyInPeriod = "double_ip",
    ButtonImageName = ImageFileConfigName.hunt_en_btn2,
    NxtMultipleType = HuntDoubleEnergyMultipleDefinition.Quadruple,
    PreMultipleType = HuntDoubleEnergyMultipleDefinition.None,
    SpreadBtnImageName = ImageFileConfigName.huntEnergywindowbtn1
  },
  [HuntDoubleEnergyMultipleDefinition.None] = {
    ButtonImageName = ImageFileConfigName.hunt_en_btn1,
    MultipleNum = 0,
    SpreadBtnImageName = ImageFileConfigName.huntEnergywindowbtn0
  }
}
HuntDoubleEnergyModel = {}
HuntDoubleEnergyModel.__index = HuntDoubleEnergyModel

function HuntDoubleEnergyModel.Create(activityType, virtualDBTable)
  local model = setmetatable({}, HuntDoubleEnergyModel)
  model:Init(activityType, virtualDBTable)
  return model
end

function HuntDoubleEnergyModel:Init(activityType, virtualDBTable)
  self.m_huntModel = GM.ActivityManager:GetModel(activityType)
  self.m_dbTable = virtualDBTable
  self:CreateMultipleEnergyComponent()
end

function HuntDoubleEnergyModel:CreateMultipleEnergyComponent()
  self.m_multipleEnergyComponents = {}
  local lastComponent
  for _, type in ipairs(HuntDoubleEnergyMultipleArray) do
    self.m_multipleEnergyComponents[type] = HuntDoubleEnergyMultipleComponent.Create(type, self, self.m_dbTable, lastComponent)
    lastComponent = self.m_multipleEnergyComponents[type]
  end
end

function HuntDoubleEnergyModel:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function HuntDoubleEnergyModel:_LogSwitchAction(bAuto, triggerMultipleEnergyType, triggerType)
  local t = 1
  local trigger_t = 1
  if triggerMultipleEnergyType ~= nil then
    local conf = HuntDoubleEnergyMultipleConfig[triggerMultipleEnergyType]
    trigger_t = conf and 2 ^ conf.MultipleNum or nil
  else
    local mulNum = self:GetMaxInPeriodEnergyMultiple()
    trigger_t = 2 ^ mulNum
  end
  if GM.CheckResourcesStageFinished then
    t = 2 ^ self:GetMaxOpenEnergyMultiple()
  else
    for _, type in ipairs(HuntDoubleEnergyMultipleArray) do
      local energyComponent = self.m_multipleEnergyComponents[type]
      if energyComponent:IsInPeriod() and energyComponent:IsOnInDBTable() then
        t = 2 ^ HuntDoubleEnergyMultipleConfig[type].MultipleNum
        break
      end
    end
  end
  local action = {
    t = t,
    type = bAuto and "auto" or "user",
    trigger_t = trigger_t,
    inventory = self.m_huntModel:GetActivityTokenNumber()
  }
  if triggerType then
    action.type = action.type .. "," .. triggerType
  end
  GM.BIManager:LogAction(EBIType.HuntDoubleEnergySwitch, action, EGameMode.Hunt)
end

function HuntDoubleEnergyModel:TriggerMultipleEnergy(multipleType, triggerType)
  if multipleType == nil then
    return
  end
  local multipleComponent = self.m_multipleEnergyComponents[multipleType]
  if multipleComponent == nil then
    return
  end
  local component, type = multipleComponent, multipleType
  while multipleComponent ~= nil do
    multipleComponent:SetEnergyInPeriod(true)
    multipleComponent:SetUnlock(true)
    local multipleEnergyCof = HuntDoubleEnergyMultipleConfig[multipleType]
    multipleType = multipleEnergyCof.PreMultipleType or HuntDoubleEnergyMultipleDefinition.None
    multipleComponent = self.m_multipleEnergyComponents[multipleType]
  end
  component:SetEnergyDbTaleKeyOn(true, true, false, type, true, triggerType)
end

function HuntDoubleEnergyModel:UpdateEnergyPeriodState()
  if not self.m_huntModel then
    return
  end
  if self:GetMaxUnlockEnergyMultiple() <= 1 then
    return
  end
  local tokenNum = self.m_huntModel:GetActivityTokenNumber()
  local maxOpen = self:GetMaxOpenEnergyMultiple()
  if tokenNum < 15 then
    self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Eightfold]:SetEnergyInPeriod(false)
    self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Quadruple]:SetEnergyInPeriod(false)
    self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Eightfold]:SetEnergyDbTaleKeyOn(false, true)
    self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Quadruple]:SetEnergyDbTaleKeyOn(false, true)
    if 1 <= maxOpen then
      self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Double]:SetEnergyDbTaleKeyOn(true, true)
    end
  elseif tokenNum < 25 then
    self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Eightfold]:SetEnergyInPeriod(false)
    self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Eightfold]:SetEnergyDbTaleKeyOn(false, true)
    local com = self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Quadruple]
    if com:IsUnlock() and not com:IsInPeriod() then
      com:SetEnergyInPeriod(true)
    end
    if 2 <= maxOpen then
      com:SetEnergyDbTaleKeyOn(true, true)
    end
  elseif 25 <= tokenNum then
    local com = self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Eightfold]
    if com:IsUnlock() and not com:IsInPeriod() then
      com:SetEnergyInPeriod(true)
    end
    com = self.m_multipleEnergyComponents[HuntDoubleEnergyMultipleDefinition.Quadruple]
    if com:IsUnlock() and not com:IsInPeriod() then
      com:SetEnergyInPeriod(true)
    end
  end
end

function HuntDoubleEnergyModel:SetMultipleEnergyOnAndOff(multipleEnergyNum, maxMultipleNum)
  local arrMultipleType = {
    HuntDoubleEnergyMultipleDefinition.Double,
    HuntDoubleEnergyMultipleDefinition.Quadruple,
    HuntDoubleEnergyMultipleDefinition.Eightfold
  }
  maxMultipleNum = maxMultipleNum or #arrMultipleType
  local index = (multipleEnergyNum + 1) % (maxMultipleNum + 1)
  local type
  for i = 1, maxMultipleNum do
    type = arrMultipleType[i]
    if i <= index then
      self.m_multipleEnergyComponents[type]:SetEnergyDbTaleKeyOn(true, false, true)
    else
      self.m_multipleEnergyComponents[type]:SetEnergyDbTaleKeyOn(false, false, true)
    end
  end
  self:_LogSwitchAction(false)
end

function HuntDoubleEnergyModel:IsOpenMultipeEnergy(energyType)
  local energyComponent = self.m_multipleEnergyComponents[energyType]
  return energyComponent:IsOpen()
end

function HuntDoubleEnergyModel:IsMultipleEnergyInperiod(energyType)
  local energyComponent = self.m_multipleEnergyComponents[energyType]
  return energyComponent:IsInPeriod()
end

function HuntDoubleEnergyModel:SetMultipleEnergyDbTaleKeyOn(energyType, bOn, bAuto, bNoLog)
  local energyComponent = self.m_multipleEnergyComponents[energyType]
  energyComponent:SetEnergyDbTaleKeyOn(bOn, bAuto, bNoLog)
end

function HuntDoubleEnergyModel:GetMaxInPeriodEnergyMultiple()
  for _, multipleType in ipairs(HuntDoubleEnergyMultipleArray) do
    if self.m_multipleEnergyComponents[multipleType] and self.m_multipleEnergyComponents[multipleType]:IsInPeriod() then
      return HuntDoubleEnergyMultipleConfig[multipleType].MultipleNum, multipleType
    end
  end
  return 0
end

function HuntDoubleEnergyModel:GetMaxOpenEnergyMultiple()
  for _, multipleType in ipairs(HuntDoubleEnergyMultipleArray) do
    if self.m_multipleEnergyComponents[multipleType]:IsOpen() then
      return HuntDoubleEnergyMultipleConfig[multipleType].MultipleNum, multipleType
    end
  end
  return 0, HuntDoubleEnergyMultipleDefinition.None
end

function HuntDoubleEnergyModel:GetMaxUnlockEnergyMultiple()
  for _, multipleType in ipairs(HuntDoubleEnergyMultipleArray) do
    if self.m_multipleEnergyComponents[multipleType]:IsUnlock() then
      return HuntDoubleEnergyMultipleConfig[multipleType].MultipleNum, multipleType
    end
  end
  return 0, HuntDoubleEnergyMultipleDefinition.None
end

function HuntDoubleEnergyModel:GetSpreadBtnImage()
  local _, maxMultipleType = self:GetMaxOpenEnergyMultiple()
  return HuntDoubleEnergyMultipleConfig[maxMultipleType] and HuntDoubleEnergyMultipleConfig[maxMultipleType].SpreadBtnImageName
end
