InventoryButton = setmetatable({}, HudGeneralButton)
InventoryButton.__index = InventoryButton

function InventoryButton:Awake()
  self.m_bEnabled = true
  HudGeneralButton.Awake(self)
  EventDispatcher.AddListener(EEventType.FunctionOpen, self, self._CheckOpen)
  EventDispatcher.AddListener(EEventType.OpenView, self, self.OnViewOpened)
  EventDispatcher.AddListener(EEventType.CloseView, self, self.OnViewClosed)
  EventDispatcher.AddListener(EEventType.InventroyBubbleShow, self, self.OnBubbleShow)
  EventDispatcher.AddListener(EEventType.InventoryEntryCountUpdate, self, self.OnButtonLabelUpdate)
  EventDispatcher.AddListener(EEventType.LevelUp, self, self._OnLevelUp)
  
  function self._PlayContinueEffect()
    self.m_conEffect:SetActive(true)
  end
  
  if GM.MainBoardModel:IsToolBoxCollect() then
    EventDispatcher.AddListener(EEventType.OnFlyElementArrived, self, self.OnPropertyAcquired)
    EventDispatcher.AddListener(EEventType.PropertyConsumed, self, self.OnPropertyConsumed)
    self.m_toolNumMap = {}
    for toolType, _ in pairs(ToolCode) do
      self.m_toolNumMap[toolType] = math.floor(GM.PropertyDataManager:GetPropertyNum(toolType))
    end
    self.m_flyingCount = 0
  end
  self:_CheckOpen()
  local itemStoreModel = GM.MainBoardModel:GetItemStoreModel()
  self.m_itemCount = itemStoreModel:GetItemCountWithoutProducer()
  self.m_slotCount = itemStoreModel:GetSlotCountWithoutProducer()
  self:_SetLabel()
  self:SetLayoutData()
end

function InventoryButton:SetLayoutData()
  local inventoryCenter = self.m_iconNormalGo.transform.position
  local inventorySize = self.m_iconNormalGo.transform.rect
  self.m_centerPosX = inventoryCenter.x
  self.m_centerPosY = inventoryCenter.y
  self.m_width = inventorySize.width
  self.m_height = inventorySize.height
  self.m_lossyScale = self.m_iconOpenGo.transform.lossyScale
end

function InventoryButton:_CheckOpen()
  local open = GM.OpenFunctionModel:IsFunctionOpen(EFunction.Inventory)
  self.gameObject:SetActive(open)
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
  self:StopItemInAnimation()
  HudGeneralButton.OnDestroy(self)
  Scheduler.Unschedule(self._PlayContinueEffect)
  Scheduler.UnscheduleTarget(self)
end

function InventoryButton:OnClick()
  if not self.m_bEnabled then
    return
  end
  if GM.OpenFunctionModel:IsFunctionOpen(EFunction.Inventory) then
    GM.UIManager:OpenView(UIPrefabConfigName.InventoryWindow)
  else
    self:ShowLockedPrompt()
  end
end

function InventoryButton:PlayItemInEffect()
  self.m_closeEffect:SetActive(false)
  self:StopItemInAnimation()
  self.m_itemInAnimation = DOTween.Sequence()
  self.m_itemInAnimation:Append(self.m_contentTransf:DOScale(self.m_scale * 1.2, 0.2))
  self.m_itemInAnimation:Append(self.m_contentTransf:DOScale(self.m_scale, 0.1))
  self.m_itemInAnimation:OnComplete(function()
    self.m_itemInAnimation = nil
  end)
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
    self.m_promptAnimation:Append(self.m_contentTransf:DOScale(self.m_scale * 1.17, 0.25):SetEase(Ease.OutCubic))
    self.m_promptAnimation:AppendInterval(0.25)
    self.m_promptAnimation:Append(self.m_contentTransf:DOScale(self.m_scale, 0.25))
    self.m_promptAnimation:AppendInterval(0.25)
  end
  self.m_promptAnimation:AppendInterval(2)
  self.m_promptAnimation:SetLoops(-1)
end

function InventoryButton:StopPromptAnimation()
  if self.m_promptAnimation ~= nil then
    self.m_promptAnimation:Kill()
    self.m_promptAnimation = nil
    self.m_contentTransf.localScale = self.m_scale
  end
end

function InventoryButton:StopItemInAnimation()
  if self.m_itemInAnimation ~= nil then
    self.m_itemInAnimation:Kill()
    self.m_itemInAnimation = nil
    self.m_contentTransf.localScale = self.m_scale
  end
end

function InventoryButton:_UpdateIconState(isOpen)
  self.m_bIsOpen = isOpen
  self.m_iconNormalGo:SetActive(not isOpen)
  self.m_iconOpenGo:SetActive(isOpen)
  self.m_openEffect2:SetActive(isOpen)
end

function InventoryButton:UpdateTextAnimation()
end

function InventoryButton:SetClickEnabled(bEnable)
  self.m_bEnabled = bEnable
end

function InventoryButton:OnBubbleShow(reward)
  self.m_adaptiveRewardBubble:Init(reward)
  self.m_adaptiveRewardBubble:Show(self.m_bubbleRootRect, nil, nil, nil, nil, nil, 3)
end

function InventoryButton:OnPropertyAcquired(msg)
  local code = msg.type
  local propType
  if ToolCodeToLevel[code] then
    propType = GM.ItemDataModel:GetChainId(code)
  elseif ToolCode[code] then
    propType = code
  end
  if propType then
    local newNum = math.floor(GM.PropertyDataManager:GetPropertyNum(propType))
    local acquireNum = newNum - self.m_toolNumMap[propType]
    if 0 < acquireNum then
      self:_PlayPropAcquireAnim(propType, acquireNum)
    end
    self.m_toolNumMap[propType] = newNum
    self:_OnToolIn()
  end
end

function InventoryButton:_OnToolIn()
  self.m_flyingCount = self.m_flyingCount + 1
  self:_UpdateIconState(true)
  DelayExecuteFuncInView(function()
    self.m_flyingCount = self.m_flyingCount - 1
    if self.m_flyingCount <= 0 then
      self:_UpdateIconState(false)
    end
  end, 0.2, self)
end

function InventoryButton:OnPropertyConsumed(msg)
  local propType = msg.property[PROPERTY_TYPE]
  if ToolCode[propType] then
    self.m_toolNumMap[propType] = math.floor(GM.PropertyDataManager:GetPropertyNum(propType))
  end
end

function InventoryButton:_PlayPropAcquireAnim(propType, num)
  local go = Object.Instantiate(self.m_matGo, self.transform)
  go:GetLuaTable():Init(EPropertySprite[propType], num)
end

function InventoryButton:OnButtonLabelUpdate(msg)
  local labelNeedUpdate = false
  if msg.num and msg.num ~= self.m_itemCount then
    self.m_itemCount = msg.num
    labelNeedUpdate = true
  end
  if msg.cap and msg.cap ~= self.m_slotCount then
    self.m_slotCount = msg.cap
    labelNeedUpdate = true
  end
  if labelNeedUpdate then
    self:_SetLabel()
  end
end

function InventoryButton:_SetLabel()
  self.m_capacityText.text = self.m_itemCount .. "/" .. self.m_slotCount
end

function InventoryButton:_OnLevelUp(level)
  local itemStoreModel = GM.MainBoardModel:GetItemStoreModel()
  self.m_itemCount = itemStoreModel:GetItemCountWithoutProducer(true)
  self:_SetLabel()
end

function InventoryButton:IsItemAndButtonOverlap(itemCenterPos, itemSize)
  if not self.m_bDisplay then
    local needDisplay = self:_NeedDisplay()
    GM.BIManager:LogProject("inv_check", {
      mode = self.m_strDisplayGameMode,
      need = needDisplay
    })
    if needDisplay then
      self:OnGameModeChanged()
    end
    Log.Info("\228\187\147\229\186\147\230\140\137\233\146\174\228\184\141\230\152\190\231\164\186", "inv_check")
  end
  if not self.m_centerPosX then
    GM.BIManager:LogProject("inv_check", "pos_not_init")
    Log.Info("\228\187\147\229\186\147\230\140\137\233\146\174\228\189\141\231\189\174\229\188\130\229\184\184", "inv_check")
  end
  self:SetLayoutData()
  return self:_IsOverlap(self.m_centerPosX, itemCenterPos.x, self.m_lossyScale.x * (self.m_width + itemSize.x) / 2) and self:_IsOverlap(self.m_centerPosY, itemCenterPos.y, self.m_lossyScale.y * (self.m_height + itemSize.y) / 2)
end

function InventoryButton:_IsOverlap(pos1, pos2, dis)
  return dis > math.abs(pos1 - pos2)
end

InventoryBtnFlyItem = {}
InventoryBtnFlyItem.__index = InventoryBtnFlyItem

function InventoryBtnFlyItem:Init(spriteKey, num)
  SpriteUtil.SetImage(self.m_image, spriteKey, false, function()
    self.m_canvasGroup.alpha = 1
    self.m_numText.text = "+" .. num
    self.transform:DOLocalMoveY(300, 1):SetEase(Ease.Linear)
    self.m_canvasGroup:DOFade(0, 0.3):SetDelay(0.7)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxDiscoveriesGetReward)
    DelayExecuteFuncInView(function()
      Object.Destroy(self.gameObject)
    end, 1, self)
  end)
end
