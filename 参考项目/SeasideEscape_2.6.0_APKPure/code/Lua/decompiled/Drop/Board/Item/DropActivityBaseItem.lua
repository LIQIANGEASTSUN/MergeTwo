DropActivityBaseItem = {}
DropActivityBaseItem.__index = DropActivityBaseItem
local velocityThreshold = 3000
local minVelocity = 20
local minAngleVelocity = 10

function DropActivityBaseItem:Init(itemCode, Board)
  self.m_itemCode = itemCode
  self.m_bIsStationary = false
  self.m_fStationaryTime = 0
  self.m_mapDelaPos = {}
  self.m_mapDelaFocre = {}
  self.m_bCanMerge = true
  self.m_board = Board
  if GM.UIManager:IsTestActivityButtonValid() then
    local model = DropModel.GetActiveModel()
    if model ~= nil then
      self.m_TestText.text = model:GetItemLevel(itemCode)
    end
  end
end

function DropActivityBaseItem:Update(dt)
  if self.m_fStationaryTime == nil then
    return
  end
  if self.m_Rigidbody.velocity.magnitude < velocityThreshold then
    self.m_fStationaryTime = self.m_fStationaryTime + dt
  else
    self.m_fStationaryTime = 0
  end
  self.m_bIsStationary = self.m_fStationaryTime > 0.5
end

function DropActivityBaseItem:CanMergeItem()
  return self.m_bCanMerge
end

function DropActivityBaseItem:SetCanMergeItem(bCanMerge)
  self.m_bCanMerge = bCanMerge
end

function DropActivityBaseItem:IsStationary()
  return self.m_bIsStationary
end

function DropActivityBaseItem:AddForce(force)
  self.m_Rigidbody:AddForce(force, CS.UnityEngine.ForceMode2D.Impulse)
end

function DropActivityBaseItem:SetInitVelocity(velocity)
  self.m_Rigidbody.velocity = velocity
end

function DropActivityBaseItem:GetItemCode()
  return self.m_itemCode
end

function DropActivityBaseItem:GetVelocity()
  return self.m_Rigidbody.velocity
end

function DropActivityBaseItem:PlayShowAct(callBack)
  self.m_bShow = true
  local oldScale = self.transform.localScale
  self.transform.localScale = Vector3(oldScale.x * 0.5, oldScale.y * 0.5, 1)
  local seq = DOTween.Sequence()
  seq:Append(self.transform:DOScale(Vector3(oldScale.x, oldScale.y, 1), 0.15))
  if callBack then
    seq:AppendCallback(function()
      callBack()
      self.m_bShow = false
    end)
  end
  seq:AppendCallback(function()
    self.m_seq = nil
  end)
  self.m_seq = seq
  local boombForce = Vector2(self.transform.position.x, self.transform.position.y)
  local radius = 300
  local colliders = CS.UnityEngine.Physics2D.OverlapCircleAll(boombForce, radius)
  for i = 0, colliders.Length - 1 do
    local collider = colliders[i]
    if not collider.gameObject:IsNull() and collider.gameObject:GetLuaTable() ~= self and collider ~= self.m_colider then
      local direction = collider.transform.position - self.transform.position
      local distance = direction.magnitude
      direction = direction.normalized
      local forceMagnitude = self.m_Rigidbody.mass * 500
      local forceMagnitude = (1 - distance / radius) * forceMagnitude
      local force = direction * forceMagnitude
      local luaTb = collider.gameObject:GetLuaTable()
      if luaTb ~= nil and luaTb.AddForce ~= nil then
        luaTb:AddForce(Vector2(force.x, force.y))
      end
    end
  end
end

function DropActivityBaseItem:OnCollisionEnter2D(collision)
  if self == nil then
    return
  end
  if self.gameObject:IsNull() then
    return
  end
  if self.m_bShow then
    local pushBackForce = self.m_Rigidbody.mass * 200
    local contact = collision.contacts[0]
    local normal = contact.normal
    local separationForce = CS.UnityEngine.Vector2(normal.x, normal.y) * pushBackForce
    if collision.transform and collision.transform.anchoredPosition then
      if collision.gameObject:GetLuaTable() ~= nil and collision.transform.anchoredPosition.y < self.transform.anchoredPosition.y then
        local OtherForce = collision.rigidbody.mass * 50 * CS.UnityEngine.Vector2(normal.x, normal.y)
        collision.gameObject:GetLuaTable():AddForce(-OtherForce)
      else
        self:AddForce(separationForce)
      end
    end
  elseif not self:IsStationary() then
  end
end

function DropActivityBaseItem:OnDestroy()
  if self.m_seq ~= nil then
    self.m_seq:Kill()
    self.m_seq = nil
  end
end
