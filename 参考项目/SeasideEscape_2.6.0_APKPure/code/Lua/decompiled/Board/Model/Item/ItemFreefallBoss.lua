ItemFreefallBossEventType = {OnBeat = 1, OnCharge = 2}
ItemFreefallBoss = setmetatable({}, BaseItemComponent)
ItemFreefallBoss.__index = ItemFreefallBoss

function ItemFreefallBoss.Create(itemConfig)
  local itemTransform = setmetatable({}, ItemFreefallBoss)
  itemTransform:Init(itemConfig)
  return itemTransform
end

function ItemFreefallBoss:Init(itemConfig)
  self.event = PairEvent.Create(self)
  self.m_itemType = itemConfig.Type
  self.m_activityModel = FreefallActivityModel.GetActiveModel()
end

function ItemFreefallBoss:GetSlotId()
  if self.m_slotId == nil then
    local id = self.m_itemModel:GetId()
    if self.m_mainItem then
      id = self.m_mainItem:GetId()
    end
    self.m_slotId = self.m_activityModel:GetTargetBossItemSlotId(id)
  end
  return self.m_slotId
end

function ItemFreefallBoss:GetDamagePoints(hitPos)
  local config = self.m_activityModel:GetTargetConfigBySlotId(self:GetSlotId())
  local weakDir = config:GetWeakDir()
  local points = config:GetHitPoint()
  if Table.IsEmpty(weakDir) then
    return points, false
  end
  if Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.All) then
    return points * 2, true
  end
  local itemPos = self.m_itemModel:GetPosition()
  local offsetX = hitPos:GetX() - itemPos:GetX()
  local offsetY = hitPos:GetY() - itemPos:GetY()
  if offsetX < 0 and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Left) then
    return points * 2, true
  elseif 0 < offsetX and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Right) then
    return points * 2, true
  elseif offsetY < 0 and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Up) then
    return points * 2, true
  elseif 0 < offsetY and Table.Contain(weakDir, FreefallActivityModel.BossWeakDir.Down) then
    return points * 2, true
  end
  return points, false
end

function ItemFreefallBoss:OnShock(srcPos)
  local damagePoints, bHitWeakPoints = self:GetDamagePoints(srcPos)
  if self.m_mainItem ~= nil then
    self.m_mainItem:GetComponent(ItemFreefallBoss):OnDamage(damagePoints, bHitWeakPoints)
  else
    self:OnDamage(damagePoints, bHitWeakPoints)
  end
end

function ItemFreefallBoss:SetMainItem(itemModel)
  self.m_mainItem = itemModel
end

function ItemFreefallBoss:AddSubItem(itemModel)
  if self.m_subItems == nil then
    self.m_subItems = {}
  end
  table.insert(self.m_subItems, itemModel)
end

function ItemFreefallBoss:IsMainItem()
  return not Table.IsEmpty(self.m_subItems)
end

function ItemFreefallBoss:IsBinded()
  return self:IsMainItem() or self.m_mainItem ~= nil
end

function ItemFreefallBoss:GetHpValue()
  if self:IsMainItem() then
    return self:GetCurHp(), self:GetMaxHp()
  else
    return self.m_mainItem:GetComponent(ItemFreefallBoss):GetHpValue()
  end
end

function ItemFreefallBoss:OnHpZero()
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  boardModel.event:Call(BoardEventType.BatchRemoveItems, {
    Removed = {
      self.m_itemModel
    }
  })
  if Table.IsEmpty(self.m_subItems) then
    return
  end
  for k, v in pairs(self.m_subItems) do
    boardModel:RemoveItem(v)
    boardModel.event:Call(BoardEventType.BatchRemoveItems, {
      Removed = {v}
    })
  end
end

function ItemFreefallBoss:GetCurHp()
  return self.m_activityModel:GetTargetRemainHealthBySlotId(self:GetSlotId())
end

function ItemFreefallBoss:GetMaxHp()
  local config = self.m_activityModel:GetTargetConfigBySlotId(self:GetSlotId())
  return config:GetMaxHealth()
end

function ItemFreefallBoss:OnDamage(hp, bHitWeakPoint)
  self.m_activityModel:_ConsumeTargetRemainHealthBySlotId(self:GetSlotId(), hp)
  if bHitWeakPoint then
    self:OnBeatWeakPoint()
  end
  self.event:Call(ItemFreefallBossEventType.OnBeat, {bHitWeakPoint = bHitWeakPoint, damage = hp})
end

function ItemFreefallBoss:ChargeBossSkill()
  if not self:IsMainItem() then
    return
  end
  self.m_activityModel:ChargeForBossSkill(self:GetSlotId())
  self.event:Call(ItemFreefallBossEventType.OnCharge)
end

function ItemFreefallBoss:CanCastBossSkill()
  return self.m_activityModel:CanCastBossSkill(self:GetSlotId())
end

function ItemFreefallBoss:CastBossSkill()
  if not self:IsMainItem() then
    return
  end
  self.m_activityModel:CastBossSkill(self:GetSlotId())
  self.m_activityModel:SetBossSkillChargeRound(self:GetSlotId(), 0)
  self.event:Call(ItemFreefallBossEventType.OnCharge)
end

function ItemFreefallBoss:OnBeatWeakPoint()
  if not self:IsMainItem() then
    return
  end
  self.m_activityModel:SetBossSkillChargeRound(self:GetSlotId(), 0)
  self.event:Call(ItemFreefallBossEventType.OnCharge)
end

function ItemFreefallBoss:GetChargeProgressText()
  return self.m_activityModel:GetBossSkillChargeRound(self:GetSlotId())
end

function ItemFreefallBoss:CanShowWarning()
  local config = self.m_activityModel:GetTargetConfigBySlotId(self:GetSlotId())
  if config and config:GetChargeRound() and config:GetChargeRound() - self.m_activityModel:GetBossSkillChargeRound(self:GetSlotId()) <= 3 then
    return true
  end
  return false
end
