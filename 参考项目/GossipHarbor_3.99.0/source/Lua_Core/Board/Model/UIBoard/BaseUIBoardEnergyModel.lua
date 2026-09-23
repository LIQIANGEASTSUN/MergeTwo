BaseUIBoardEnergyModel = {}
BaseUIBoardEnergyModel.__index = BaseUIBoardEnergyModel
BaseUIBoardEnergyModel.EventKey = {
  ExponentUnlockChanged = 1,
  SwitchExponent = 2,
  ConsumeEnergy = 3
}
local strBaseUIBoardEnergyCacheKey = "BaseUIBoardEnergyCacheKey"

function BaseUIBoardEnergyModel.Create(params)
  local model = setmetatable({}, BaseUIBoardEnergyModel)
  model:Init(params)
  return model
end

function BaseUIBoardEnergyModel:Init(params)
  self.m_uiBoardModel = params.uiBoardModel
  self.m_dbTable = params.dbTable
  self.m_unLockConfig = params.listEnergyMultiUnlockConfig
  AddHandlerAndRecordMap(self.m_uiBoardModel.event, BoardEventType.FogUnlock, {
    obj = self,
    method = self.TryUnlockLevel
  })
  self.m_event = PairEvent.Create()
  self:LoadCacheData()
end

function BaseUIBoardEnergyModel:LoadCacheData()
  self.m_energyCache = json.decode(self.m_dbTable:GetValue(strBaseUIBoardEnergyCacheKey, "value") or "")
  if self.m_energyCache == nil then
    self:InitCacheData()
  end
end

function BaseUIBoardEnergyModel:InitCacheData()
  self.m_energyCache = {}
  self.m_energyCache.curEnergy = 0
  self.m_energyCache.listUnlockExponent = {0}
  self.m_energyCache.curExponent = 0
  self:TryUnlockLevel()
  self:SaveCacheData()
end

function BaseUIBoardEnergyModel:GetWillListUnlockLevel()
  local curExponentNum = #self.m_energyCache.listUnlockExponent
  local curMaxLevel = self.m_uiBoardModel:GetMergeLineLevel()
  local newListUnlockExponent = {}
  for _, unLockConfig in pairs(self.m_unLockConfig) do
    local curExponent = unLockConfig.exponent
    if not Table.Contain(self.m_energyCache.listUnlockExponent, curExponent) then
      local canUnlock = true
      if curMaxLevel < unLockConfig.unLockMainLevel then
        canUnlock = false
      end
      if unLockConfig.unLockFog ~= nil and not self.m_uiBoardModel:GetFogModel():IsFogUnlocked(unLockConfig.unLockFog) then
        canUnlock = false
      end
      if unLockConfig.unLockRemainEnergy ~= nil and self:GetCurEnergy() < unLockConfig.unLockRemainEnergy then
        canUnlock = false
      end
      if canUnlock then
        table.insert(newListUnlockExponent, curExponent)
      end
    end
  end
  if self.m_testUnlock then
    if #newListUnlockExponent < 4 then
      newListUnlockExponent = {curExponentNum}
    end
    self.m_testUnlock = nil
  end
  return newListUnlockExponent
end

function BaseUIBoardEnergyModel:TryUnlockLevel()
  local newListUnlockExponent = self:GetWillListUnlockLevel()
  if not Table.IsEmpty(newListUnlockExponent) then
    Table.ListAppend(self.m_energyCache.listUnlockExponent, newListUnlockExponent)
  end
  self:SaveCacheData()
  if not Table.IsEmpty(newListUnlockExponent) then
    self.m_event:Call(BaseUIBoardEnergyModel.EventKey.ExponentUnlockChanged, newListUnlockExponent)
    GM.BIManager:LogAction(EBIType.UIBoardUnlockExponent, newListUnlockExponent)
    EventDispatcher.DispatchEvent(EEventType.UIBoardExponentUnlock, {
      activityType = self.m_uiBoardModel:GetActivityModel():GetType()
    })
  end
end

function BaseUIBoardEnergyModel:SaveCacheData()
  if self.m_energyCache == nil then
    self.m_dbTable:Remove(strBaseUIBoardEnergyCacheKey, "value")
  else
    self.m_dbTable:Set(strBaseUIBoardEnergyCacheKey, "value", json.encode(self.m_energyCache))
  end
end

function BaseUIBoardEnergyModel:GetCurEnergy()
  return self.m_energyCache.curEnergy
end

function BaseUIBoardEnergyModel:AddCurEnergy(energyNum, biScene)
  self.m_energyCache.curEnergy = self.m_energyCache.curEnergy + energyNum
  self:SaveCacheData()
  EventDispatcher.DispatchEvent(EEventType.UIBoardEnergyChanged, {
    boardType = self.m_uiBoardModel.BoardType
  })
  self:TryUnlockLevel()
end

function BaseUIBoardEnergyModel:ConsumeEnergy(energyNum)
  self.m_energyCache.curEnergy = self.m_energyCache.curEnergy - energyNum
  if self.m_energyCache.curEnergy < 0 then
    Log.Error("\233\148\153\232\175\175\239\188\140\230\182\136\232\128\151\229\176\143\230\163\139\231\155\152\228\189\147\229\138\155\228\184\141\232\131\189\229\176\143\228\186\1420")
    self.m_energyCache.curEnergy = 0
  end
  self.m_event:Call(BaseUIBoardEnergyModel.EventKey.ConsumeEnergy)
  EventDispatcher.DispatchEvent(EEventType.UIBoardEnergyChanged, {
    boardType = self.m_uiBoardModel.BoardType
  })
  self:SaveCacheData()
  self:TryUnlockLevel()
end

function BaseUIBoardEnergyModel:SwitchExponent()
  if #self.m_energyCache.listUnlockExponent == 1 then
    return
  end
  local curExponent = self.m_energyCache.curExponent
  local nextIndex = 1
  for index, v in ipairs(self.m_energyCache.listUnlockExponent) do
    if v == curExponent then
      nextIndex = index % #self.m_energyCache.listUnlockExponent + 1
      break
    end
  end
  self.m_energyCache.curExponent = self.m_energyCache.listUnlockExponent[nextIndex]
  self:SaveCacheData()
  self.m_event:Call(BaseUIBoardEnergyModel.EventKey.SwitchExponent)
  EventDispatcher.DispatchEvent(EEventType.UIBoardSwitchExponent)
  return self.m_energyCache.curExponent
end

function BaseUIBoardEnergyModel:GetCurExponent()
  return self.m_energyCache.curExponent
end

function BaseUIBoardEnergyModel:GetCostEnergyNum()
  return MathUtil.IntPow(2, self.m_energyCache.curExponent)
end

function BaseUIBoardEnergyModel:CanShowExponent(exponent)
  local cacheExponent = self.m_energyCache.showExponent or 0
  if exponent > cacheExponent then
    return true
  end
  return false
end

function BaseUIBoardEnergyModel:SaveShowExponent(exponent)
  self.m_energyCache.showExponent = exponent
  self:SaveCacheData()
end

function BaseUIBoardEnergyModel:CanCostEnergyNumByTutorial()
  local costNum = self:GetCostEnergyNum() * 2
  if costNum <= self:GetCurEnergy() then
    return true
  end
  return false
end

function BaseUIBoardEnergyModel:CanCostEnergyNum()
  local costNum = self:GetCostEnergyNum()
  if costNum <= self:GetCurEnergy() then
    return true
  end
  return false
end

function BaseUIBoardEnergyModel:CostEnergyNum()
  if not self:CanCostEnergyNum() then
    return
  end
  self:ConsumeEnergy(self:GetCostEnergyNum())
  return self.m_energyCache.curExponent
end

function BaseUIBoardEnergyModel:GetEvent()
  return self.m_event
end

function BaseUIBoardEnergyModel:GetListUnlockExponent()
  return self.m_energyCache.listUnlockExponent
end

function BaseUIBoardEnergyModel:OnTestUnlockNextExponent()
  self.m_testUnlock = true
  self:TryUnlockLevel()
end

function BaseUIBoardEnergyModel:ClearUnlockExponent()
  self.m_energyCache.listUnlockExponent = {0}
  self.m_energyCache.curExponent = 0
  self.m_energyCache.showExponent = 0
  self.m_event:Call(BaseUIBoardEnergyModel.EventKey.SwitchExponent)
  EventDispatcher.DispatchEvent(EEventType.UIBoardSwitchExponent)
  self:SaveCacheData()
end

function BaseUIBoardEnergyModel:GetUnlockConfig()
  return self.m_unLockConfig
end
