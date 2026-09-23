EnergyHudButton = setmetatable({
  HitAudio = AudioFileConfigName.SfxEnergyCrush
}, HudPropertyButton)
EnergyHudButton.__index = EnergyHudButton

function EnergyHudButton:Awake()
  HudPropertyButton.Awake(self)
  HudPropertyButton.Init(self, EPropertyType.Energy)
  EventDispatcher.AddListener(EEventType.EnergyRestored, self, self.OnEnergyRestored)
  EventDispatcher.AddListener(EEventType.ChangeGameMode, self, self.OnChangeGameMode)
  EventDispatcher.AddListener(EEventType.GameModeChangeFinished, self, self.OnGameModeChangeFinished)
  EventDispatcher.AddListener(EEventType.ItemClick, self, self.OnHideEnergyFullTip)
  self:_CheckInfiniteState()
  self:UpdatePerSecond()
end

function EnergyHudButton:UpdatePerSecond()
  local energyType = GM.EnergyModel:PropertyTypeToEnergyType(self.ePropertyType)
  if GM.EnergyModel:IsEnergyInfinite(energyType) then
    if self.m_isInfinite and self.m_infiniteTime ~= nil then
      self.m_countdownText.text = TimeUtil.ToMSOrHMS(math.max(0, self.m_infiniteTime - GM.GameModel:GetServerTime()))
    end
  else
    if self.m_isInfinite then
      self.m_isInfinite = false
      self.m_valueText.gameObject:SetActive(true)
      self.m_inifiteGo:SetActive(false)
      self.m_infiniteTime = nil
    end
    if GM.EnergyModel:IsEnergyFull(energyType) then
      if self.m_showCountdown then
        self.m_showCountdown = false
        self.m_countdownGo:SetActive(false)
      end
    else
      if not self.m_showCountdown then
        self.m_showCountdown = true
        self.m_countdownGo:SetActive(true)
      end
      self.m_countdownText.text = TimeUtil.ToMSOrHMS(GM.EnergyModel:GetRestoreOneRestDuration(energyType))
    end
  end
end

function EnergyHudButton:IconScaleAnimation(needEffect, checkType)
  HudPropertyButton.IconScaleAnimation(self, needEffect, checkType)
  self:_CheckInfiniteState()
  self:UpdatePerSecond()
end

function EnergyHudButton:OnEnergyRestored()
  self:UpdateTextAnimation(self.ePropertyType)
  self:UpdatePerSecond()
end

function EnergyHudButton:OnChangeGameMode()
  self:_UpdatePropertyType()
  self:_InitTip()
end

function EnergyHudButton:OnGameModeChangeFinished()
  if self.m_propertyTypeChanged then
    self.m_propertyChangeEffect:Play()
  end
  self.m_propertyTypeChanged = false
end

function EnergyHudButton:_CheckPropertyType(checkType)
  return HudPropertyButton._CheckPropertyType(self, checkType) or GM.EnergyModel:PropertyTypeToInfiniteEnergyType(checkType) ~= nil
end

function EnergyHudButton:_CheckInfiniteState()
  local energyType = GM.EnergyModel:PropertyTypeToEnergyType(self.ePropertyType)
  if GM.EnergyModel:IsEnergyInfinite(energyType) then
    if not self.m_isInfinite then
      self.m_isInfinite = true
      self.m_valueText.gameObject:SetActive(false)
      self.m_inifiteGo:SetActive(true)
      self.m_countdownGo:SetActive(true)
      if not self.m_showCountdown then
        self.m_showCountdown = true
        self.m_countdownGo:SetActive(true)
      end
    end
    self.m_infiniteTime = GM.EnergyModel:GetEnergyInfiniteTime(energyType)
  end
end

function EnergyHudButton:_UpdateContent()
  self:SyncToModelValue()
end

function EnergyHudButton:_UpdatePropertyType()
  local propertyType = EPropertyType.Energy
  local activeBoardModel = BoardModelHelper.GetActiveModel()
  if activeBoardModel ~= nil then
    propertyType = GM.EnergyModel:EnergyTypeToPropertyType(activeBoardModel:GetCostEnergyType())
  end
  if self.ePropertyType ~= propertyType then
    self.ePropertyType = propertyType
    self.m_propertyTypeChanged = true
    self:_UpdateContent()
    self:_CheckInfiniteState()
    self:UpdatePerSecond()
  end
end

function EnergyHudButton:OnClicked()
  if GM.SceneManager:GetGameMode() == EGameMode.Loading then
    return
  end
  GM.EnergyModel.popupBundleEnergyWindowForLackingEnergy = false
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  if not GM:IsNewUser() then
    GM.ShopModel:OpenEnergyWindow(GM.EnergyModel:PropertyTypeToEnergyType(self.ePropertyType))
  end
end

function EnergyHudButton:_InitTip()
  local energyType = GM.EnergyModel:PropertyTypeToEnergyType(self.ePropertyType)
  if not self.m_hasShowntip and GM.SceneManager:IsFromFeed() and GM.EnergyModel:IsEnergyFull(energyType) then
    self.m_hasShowntip = true
    GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.EnergyFullTip), self.transform, V3Zero, function(go)
      if go:IsNull() then
        return
      end
      if not self.gameObject.activeSelf then
        AddressableLoader.Destroy(go)
        return
      end
      self.m_tipGo = go
    end)
  end
end

function EnergyHudButton:Update()
  if self.m_tipGo and not self.m_tipGo:IsNull() and (CS.UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject or self.m_needHideTip) then
    self.m_tipGo:SetActive(false)
    AddressableLoader.Destroy(self.m_tipGo)
    self.m_tipGo = nil
  end
end

function EnergyHudButton:OnHideEnergyFullTip()
  self.m_needHideTip = true
end
