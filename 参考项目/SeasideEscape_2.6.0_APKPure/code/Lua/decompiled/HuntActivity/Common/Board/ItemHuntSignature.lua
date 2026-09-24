ItemHuntSignature = {}
ItemHuntSignature.__index = ItemHuntSignature

function ItemHuntSignature:Init(item, itemView, bUpgrade, activtyType, defaultSprite)
  self.m_itemView = itemView
  self.m_itemModel = item
  if activtyType ~= nil then
    self.m_activityType = activtyType
    self.m_activityDefinition = HuntActivityDefinition[activtyType]
  end
  self.m_cdMask.fillAmount = 0
  if item then
    if item:GetComponent(ItemSwallow) then
    else
      local spread = item:GetComponent(ItemSpread)
      self.m_cdMask.fillAmount = spread:GetTimerAmount()
      self:_UpdateCountDown()
    end
    if not UIUtil.IsEmptyComponent(self.m_itemSkel) then
      self.m_itemModel:SetLocked(true)
    end
  end
  if bUpgrade then
    local function callback()
      if UIUtil.IsEmptyComponent(self) then
        return
      end
      self:PlayUpgradeAnim()
      EventDispatcher.DispatchEvent(EEventType.CacheItems)
    end
    
    if self.m_activityDefinition and self.m_activityDefinition.PdUpgradeWindowName then
      GM.UIManager:OpenView(self.m_activityDefinition.PdUpgradeWindowName, self.m_activityType, callback)
    else
      callback()
    end
  end
  if item then
    local actModel = GM.ActivityManager:GetModel(self.m_activityType)
    if actModel == nil then
      Log.Error("ItemHuntSignature:Init actModel is nil, activityType:" .. tostring(self.m_activityType))
      return
    end
    local boardModel = self.m_itemModel:GetBoardModel()
    local cloudConfig = boardModel:GetCloudInfo()
    local pdConfig = cloudConfig.pdUp[actModel:GetSigLevel()]
    local chainId = GM.ItemDataModel:GetChainId(item:GetType())
    if pdConfig and pdConfig.image then
      self:SetSignatureItem(pdConfig.image, actModel:GetSigLevel())
    elseif item:GetCode() == cloudConfig.pdUp.initPd then
      self:SetSignatureItem(self.m_activityType .. "_pd0", 0)
    else
      self:SetSignatureItem(chainId, actModel:GetSigLevel())
    end
  elseif defaultSprite and not UIUtil.IsEmptyComponent(self.m_itemImg) then
    self.m_itemImg.sprite = defaultSprite
    SpriteUtil.SetNativeSize(self.m_itemImg)
  end
  self.gameObject:SetActive(true)
  EventDispatcher.AddListener(EEventType.HuntCowShowHandEffect, self, self._ShowHandEffect)
end

function ItemHuntSignature:SetSignatureItem(itemCode, itemLevel)
  if not UIUtil.IsEmptyComponent(self.m_itemSkel) then
    if 0 < itemLevel then
      if not self.m_skelInited then
        self.m_itemSkel:Initialize(false)
        self.m_skelInited = true
      end
      self.m_itemSkel.gameObject:SetActive(true)
      self.m_itemSkel.AnimationState:SetAnimation(0, "idle" .. itemLevel, true)
    else
      self.m_itemSkel.gameObject:SetActive(false)
    end
  elseif not UIUtil.IsEmptyComponent(self.m_itemImg) then
    SpriteUtil.SetImage(self.m_itemImg, itemCode, true)
  end
end

function ItemHuntSignature:TrySpreadItemWithAnimation()
  if self.m_bSpreading then
    return
  end
  if not UIUtil.IsEmptyComponent(self.m_itemSkel) then
    local actModel = GM.ActivityManager:GetModel(self.m_activityType)
    if not actModel then
      return
    end
    local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    if not window then
      return
    end
    local sigLevel = actModel:GetSigLevel()
    self.m_itemSkel.AnimationState:SetAnimation(0, "open" .. sigLevel, false)
    self.m_itemSkel.AnimationState:AddAnimation(0, "idle" .. sigLevel, true, 0)
    self.m_bSpreading = true
    local delay = 0.2
    DelayExecuteFuncInView(function()
      self.m_itemModel:SetLocked(false)
      if not UIUtil.IsEmptyComponent(self.m_spreadEffect) then
        self.m_spreadEffect:Play()
      end
    end, delay, window)
    DelayExecuteFuncInView(function()
      self.m_itemModel:SetLocked(true)
    end, delay + 0.3, window)
    DelayExecuteFuncInView(function()
      self.m_bSpreading = false
    end, 1.7, window)
  end
end

function ItemHuntSignature:OnDestroy()
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  EventDispatcher.RemoveTarget(self)
end

function ItemHuntSignature:UpdatePerSecond()
  self:_UpdateCountDown()
end

function ItemHuntSignature:_UpdateCountDown()
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  if self.m_itemModel ~= nil and self.m_itemModel:GetComponent(ItemSpread) ~= nil then
    local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
    if itemSpread:GetState() == ItemSpreadState.Initializing then
      if itemSpread:GetTimerAmount() >= 1 then
        UIUtil.SetActive(self.m_countDownGo, false)
        return
      end
      UIUtil.SetActive(self.m_countDownGo, true)
      local nextTimerAmount = itemSpread:GetNextTimerAmount()
      self.m_fillAmountTween = self.m_cdMask:DOFillAmount(nextTimerAmount, 1):SetEase(Ease.Linear):OnComplete(function()
        if 1 <= nextTimerAmount then
          UIUtil.SetActive(self.m_countDownGo, false)
        end
      end)
      return
    end
  end
  UIUtil.SetActive(self.m_countDownGo, false)
end

function ItemHuntSignature:PlayUpgradeAnim()
  self.m_upgradeEffect:Play()
  GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
  EventDispatcher.DispatchEvent(EEventType.HuntShowSignatureDialog)
end

function ItemHuntSignature:PlayAppearAnim()
  local function callback()
    if UIUtil.IsEmptyComponent(self) then
      return
    end
    self:PlayUpgradeAnim()
    EventDispatcher.DispatchEvent(EEventType.CacheItems)
  end
  
  if self.m_activityDefinition and self.m_activityDefinition.PdUpgradeWindowName then
    GM.UIManager:OpenView(self.m_activityDefinition.PdUpgradeWindowName, self.m_activityType, callback)
  else
    callback()
  end
end

function ItemHuntSignature:PlayTransformAnim(origin, new)
end

function ItemHuntSignature:GetItemView()
  return self.m_itemView
end

function ItemHuntSignature:PlayTapAnimation()
  local screenPosition = HuntActivityBoardContainer.GetInstance():GetLastTouchedScreenPosition()
  if not screenPosition then
    return
  end
  self.m_touchParticleSystem:Stop()
  self.m_touchParticleSystem:Clear()
  local uiPos = PositionUtil.UICameraScreen2World(Vector3(screenPosition.x, screenPosition.y, 0))
  self.m_touchParticleSystem.transform.position = Vector3(uiPos.x, uiPos.y, self.m_touchParticleSystem.transform.position.z)
  self.m_touchParticleSystem:Play()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
end

function ItemHuntSignature:GetAnchor()
  return self.transform.position
end

function ItemHuntSignature:_ShowHandEffect()
  if self.m_handSeq ~= nil then
    self.m_handSeq:Kill()
    self.m_handSeq = nil
  end
  local boardview = GM.ModeViewController:GetHuntActivityBoardView()
  if not boardview then
    return
  end
  boardview:_CancelPrompt()
  self.m_handEffectGo:SetActive(true)
  local seq = DOTween.Sequence()
  seq:AppendInterval(2)
  seq:AppendCallback(function()
    self.m_handEffectGo:SetActive(false)
    boardview:_StartPrompt()
    self.m_handSeq = nil
  end)
  self.m_handSeq = seq
end
