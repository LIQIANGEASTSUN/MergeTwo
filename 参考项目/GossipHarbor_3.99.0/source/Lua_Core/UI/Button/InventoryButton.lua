InventoryButton = setmetatable({}, HudGeneralButton)
InventoryButton.__index = InventoryButton

function InventoryButton:Awake()
  self.m_clickActive = true
  HudGeneralButton.Awake(self)
  EventDispatcher.AddListener(EEventType.OpenView, self, self.OnViewOpened)
  EventDispatcher.AddListener(EEventType.CloseView, self, self.OnViewClosed)
  
  function self._PlayContinueEffect()
    self.m_conEffect:SetActive(true)
  end
  
  local genFactoryModel = GM.MainBoardModel:GetItemGeneratorFactoryModel()
  if genFactoryModel ~= nil then
    local bRedTip = genFactoryModel:CanMerge()
    self:UpdateRedPoint(bRedTip)
  end
end

function InventoryButton:UpdateRedPoint(bRedTip)
  HudGeneralButton.UpdateRedPoint(self, EntryRedPointType.Exc, bRedTip and 1 or 0)
end

function InventoryButton:OnViewOpened(msg)
  if msg.name == UIPrefabConfigName.InventoryWindow then
    self:_UpdateIconState(true)
  end
end

function InventoryButton:OnViewClosed(msg)
  if msg.name == UIPrefabConfigName.InventoryWindow then
    self:_UpdateIconState(false)
  end
end

function InventoryButton:OnDestroy()
  self:StopPromptAnimation()
  HudGeneralButton.OnDestroy(self)
  Scheduler.Unschedule(self._PlayContinueEffect)
end

function InventoryButton:OnClick()
  if not self.m_clickActive then
    return
  end
  if GM.OpenFunctionModel:IsFunctionOpen(EFunction.Inventory) then
    GM.BIManager:LogAction(EBIType.InventoryClick)
    GM.UIManager:OpenView(UIPrefabConfigName.InventoryWindow)
  else
    self:ShowLockedPrompt()
  end
end

function InventoryButton:PlayItemInEffect()
  self.m_closeEffect:SetActive(false)
  self.transform:DOScale(1.2, 0.2)
  self.transform:DOScale(1, 0.1):SetDelay(0.2)
  self.m_inEffect:SetActive(true)
end

function InventoryButton:PlayDragStartEffect()
  self:_UpdateIconState(true)
  self.m_openEffect:SetActive(true)
  Scheduler.Schedule(self._PlayContinueEffect, self, nil, 1, 0.34)
end

function InventoryButton:PlayDragEndEffect()
  Scheduler.Unschedule(self._PlayContinueEffect)
  self:_UpdateIconState(false)
  self.m_openEffect:SetActive(false)
  self.m_closeEffect:SetActive(true)
  self.m_conEffect:SetActive(false)
end

function InventoryButton:ShowLockedPrompt()
  local enableLevel = GM.OpenFunctionModel:GetFunctionEnableLevel(EFunction.Inventory)
  local text = GM.GameTextModel:GetText("function_locked_hint", enableLevel)
  local targetPosition = self.transform.position + Vector3(0, 100, 0)
  local screenPosition = PositionUtil.UICameraWorld2Screen(targetPosition)
  GM.UIManager:ShowPrompt(text, screenPosition)
end

function InventoryButton:PlayPromptAnimation()
  self:StopPromptAnimation()
  self.m_promptAnimation = DOTween.Sequence()
  for i = 1, 3 do
    self.m_promptAnimation:Append(self.transform:DOScale(1.17, 0.25):SetEase(Ease.OutCubic))
    self.m_promptAnimation:AppendInterval(0.25)
    self.m_promptAnimation:Append(self.transform:DOScale(1, 0.25))
    self.m_promptAnimation:AppendInterval(0.25)
  end
  self.m_promptAnimation:AppendInterval(2)
  self.m_promptAnimation:SetLoops(-1)
end

function InventoryButton:StopPromptAnimation()
  if self.m_promptAnimation ~= nil then
    self.m_promptAnimation:Kill()
    self.m_promptAnimation = nil
    self.transform.localScale = V3One
  end
end

function InventoryButton:_UpdateIconState(isOpen)
  self.m_iconNormalGo:SetActive(not isOpen)
  self.m_iconOpenGo:SetActive(isOpen)
  self.m_openEffect2:SetActive(isOpen)
end

function InventoryButton:SetClickActive(enable)
  self.m_clickActive = enable
end
