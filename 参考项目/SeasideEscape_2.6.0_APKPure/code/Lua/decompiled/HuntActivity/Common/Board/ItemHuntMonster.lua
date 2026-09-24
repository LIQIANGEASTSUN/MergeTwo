ItemHuntMonster = {}
ItemHuntMonster.__index = ItemHuntMonster
ItemHuntMonster.AnimType = {Attack = 1, Idle = 2}
ItemHuntMonster.StageState = {Half1 = 1, Half2 = 2}

function ItemHuntMonster:Init(item, itemView, bUpgrade, activtyType, defaultSprite)
  self.m_itemView = itemView
  self.m_itemModel = item
  if activtyType ~= nil then
    self.m_activityType = activtyType
    self.m_activityDefinition = HuntActivityDefinition[activtyType]
  end
  self.m_cdMask.fillAmount = 0
  if item and not UIUtil.IsEmptyComponent(self.m_itemSkel) then
    self.m_itemModel:SetLocked(true)
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
      Log.Error("ItemHuntMonster:Init actModel is nil, activityType:" .. tostring(self.m_activityType))
      return
    end
    local boardModel = self.m_itemModel:GetBoardModel()
    local cloudConfig = boardModel:GetCloudInfo()
    local sigLevel = actModel:GetSigLevel()
    local pdConfig
    if sigLevel > #cloudConfig.pdUp and cloudConfig.pdCircle then
      local count = (sigLevel - #cloudConfig.pdUp - 1) % #cloudConfig.pdCircle + 1
      pdConfig = cloudConfig.pdCircle[count]
    else
      pdConfig = cloudConfig.pdUp[sigLevel]
    end
    local chainId = GM.ItemDataModel:GetChainId(item:GetType())
    if pdConfig and pdConfig.image then
      self:SetSignatureItem(pdConfig.image, sigLevel)
    elseif item:GetCode() == cloudConfig.pdUp.initPd then
      self:SetSignatureItem(self.m_activityType .. "_pd0", 0)
    else
      self:SetSignatureItem(chainId, sigLevel)
    end
  elseif defaultSprite and not UIUtil.IsEmptyComponent(self.m_itemImg) then
    self.m_itemImg.sprite = defaultSprite
    SpriteUtil.SetNativeSize(self.m_itemImg)
  end
  self.gameObject:SetActive(true)
end

function ItemHuntMonster:SetSignatureItem(itemCode, itemLevel)
  if not UIUtil.IsEmptyComponent(self.m_itemSkel) then
    if 0 < itemLevel then
      local skelData, skinName
      if self.m_activityDefinition.IsSigSpineType then
        self.m_aniSuffix = itemCode
        self.m_isBoss = false
      else
        if itemCode ~= "4" then
          skinName = itemCode
          skelData = self.m_spineMonster1
        else
          skinName = "default"
          skelData = self.m_spineMonster2
        end
        self.m_itemSkel.skeletonDataAsset = skelData
        self.m_itemSkel.initialSkinName = skinName
        self.m_itemSkel:Initialize(true)
        self.m_itemSkel.gameObject:SetActive(true)
      end
      self:_UpdateIsBossState(itemCode)
      if self.m_bSpreading then
        Scheduler.UnscheduleTarget(self)
      end
      if self.m_bPassAppear then
        self.m_itemSkel.AnimationState:SetAnimation(0, "idle" .. self:GetAniNameSuffix(ItemHuntMonster.AnimType.Idle), true)
        self:PlaySubIdleAnim()
      else
        local appearAniName = "appear" .. self:GetAniNameSuffix()
        self.m_itemSkel.AnimationState:SetAnimation(0, appearAniName, false)
        self.m_itemSkel.AnimationState:AddAnimation(0, "idle" .. self:GetAniNameSuffix(ItemHuntMonster.AnimType.Idle), true, 0)
        self:PlaySubAppearAnim()
        GM.AudioModel:PlayEffect(AudioFileConfigName.sfxBeastIn)
        local effectGoKey = "m_" .. appearAniName .. "EffectGo"
        if not UIUtil.IsEmptyComponent(self[effectGoKey]) then
          UIUtil.SetActive(self[effectGoKey], true)
        end
      end
    else
      self.m_itemSkel.gameObject:SetActive(false)
    end
  elseif not UIUtil.IsEmptyComponent(self.m_itemImg) then
    SpriteUtil.SetImage(self.m_itemImg, itemCode, true)
  end
end

function ItemHuntMonster:_UpdateIsBossState(pdImageCode)
  if pdImageCode ~= "4" then
    self.m_isBoss = false
  else
    self.m_isBoss = true
  end
end

function ItemHuntMonster:TrySpreadItemWithAnimation(flyItemRoot)
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
      return 0
    end
    self.m_bSpreading = true
    local boardModel = self.m_itemModel:GetBoardModel()
    local config = GM.ItemDataModel:GetModelConfig(self.m_itemModel:GetType())
    local spreadList = {}
    for i = 1, config.Monster_ItemMaxNumber do
      spreadList[i] = GM.ItemFixedSpreadModel:GenerateItemCodeWithCfgKey(self.m_itemModel:GetType(), "Monster_Weigt")
    end
    local count = math.min(config.Monster_ItemMaxNumber, 5)
    boardModel:MonsterSpreadItem(spreadList, self.m_itemModel, flyItemRoot)
    actModel:TryUpdateMonsterSpreadFlag()
    if self.m_activityType == ActivityType.Hunt99 then
      local aniName = "disappear" .. self:GetAniNameSuffix()
      if not UIUtil.IsEmptyComponent(self.m_itemSkel) and self.m_itemSkel.AnimationState and self.m_itemSkel.SkeletonDataAsset then
        local skeletonData = self.m_itemSkel.SkeletonDataAsset:GetSkeletonData(false)
        if skeletonData and skeletonData:FindAnimation(aniName) then
          local trackEntry = self.m_itemSkel.AnimationState:SetAnimation(0, aniName, false)
        end
      end
      UIUtil.SetActive(self.m_effectGo, true)
      GM.AudioModel:PlayEffect(AudioFileConfigName.sfxBeastOut)
      self.m_bSpreading = false
    else
      Scheduler.Schedule(function()
        self:PlayHitAnimation()
      end, self, 0.2, count, 0)
      DelayExecuteFuncInView(function()
        local aniName = "disappear" .. self:GetAniNameSuffix()
        if not UIUtil.IsEmptyComponent(self.m_itemSkel) and self.m_itemSkel.AnimationState and self.m_itemSkel.SkeletonDataAsset then
          local skeletonData = self.m_itemSkel.SkeletonDataAsset:GetSkeletonData(false)
          if skeletonData and skeletonData:FindAnimation(aniName) then
            local trackEntry = self.m_itemSkel.AnimationState:SetAnimation(0, aniName, false)
          end
        end
        self:PlaySubDisappearAnim()
        GM.AudioModel:PlayEffect(AudioFileConfigName.sfxBeastOut)
        self.m_bSpreading = false
      end, count * 0.2 + 0.3, window)
    end
    return math.min(#spreadList, 5)
  end
end

function ItemHuntMonster:OnDestroy()
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
  if self.event_lock_count and self.event_lock_count > 0 then
    for i = 1, self.event_lock_count do
      GM.UIManager:SetEventLock(false)
    end
    self.event_lock_count = nil
  end
end

function ItemHuntMonster:UpdatePerSecond()
end

function ItemHuntMonster:PlayUpgradeAnim()
  self.m_upgradeEffect:Play()
  GM.AudioModel:PlayEffect(AudioFileConfigName.level_victory)
  EventDispatcher.DispatchEvent(EEventType.HuntShowSignatureDialog)
end

function ItemHuntMonster:PlayAppearAnim()
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

function ItemHuntMonster:PlayTransformAnim(origin, new)
end

function ItemHuntMonster:GetItemView()
  return self.m_itemView
end

function ItemHuntMonster:PlayTapAnimation()
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

function ItemHuntMonster:GetAnchor()
  return self.transform.position
end

function ItemHuntMonster:PlayHitAnimation()
  if self.m_activityType == ActivityType.Hunt99 then
    if not self.m_blockHit then
      self.m_blockHit = true
      DelayExecuteFuncInView(function()
        self.m_blockHit = false
      end, 1, self)
    else
      return
    end
  end
  local aniName = "attack" .. self:GetAniNameSuffix(ItemHuntMonster.AnimType.Attack)
  if not UIUtil.IsEmptyComponent(self.m_itemSkel) and self.m_itemSkel.AnimationState and self.m_itemSkel.SkeletonDataAsset then
    local skeletonData = self.m_itemSkel.SkeletonDataAsset:GetSkeletonData(false)
    if skeletonData and skeletonData:FindAnimation(aniName) then
      self.m_itemSkel.AnimationState:SetAnimation(0, aniName, false)
      self.m_itemSkel.AnimationState:AddAnimation(0, "idle" .. self:GetAniNameSuffix(ItemHuntMonster.AnimType.Idle), true, 0)
    end
  end
end

function ItemHuntMonster:IsBoss()
  return self.m_isBoss
end

function ItemHuntMonster:GetAniNameSuffix(animType)
  local suffix = ""
  if self.m_aniSuffix then
    suffix = suffix .. self.m_aniSuffix
  end
  return suffix
end

function ItemHuntMonster:UpdateItemSubSkel()
  if not UIUtil.IsEmptyComponent(self.m_itemSubSkel) then
    local actModel = GM.ActivityManager:GetModel(self.m_activityType)
    if not actModel then
      return
    end
    local boardModel = self.m_itemModel:GetBoardModel()
    local cloudConfig = boardModel:GetCloudInfo()
    local subConfig
    local nextSigLevel = actModel:GetSigLevel() + 1
    if nextSigLevel > #cloudConfig.pdUp and cloudConfig.pdCircle then
      local count = (nextSigLevel - #cloudConfig.pdUp - 1) % #cloudConfig.pdCircle + 1
      subConfig = cloudConfig.pdCircle[count]
    else
      subConfig = cloudConfig.pdUp[nextSigLevel]
    end
    local itemCode = subConfig.image
    if 0 < nextSigLevel then
      local skelData, skinName
      local suffix = ""
      if self.m_activityDefinition.IsSigSpineType then
        suffix = itemCode
      else
        if itemCode ~= "4" then
          skinName = itemCode
          skelData = self.m_spineMonster1
        else
          skinName = "default"
          skelData = self.m_spineMonster2
        end
        self.m_itemSubSkel.skeletonDataAsset = skelData
        self.m_itemSubSkel.initialSkinName = skinName
        self.m_itemSubSkel:Initialize(true)
        self.m_itemSubSkel.gameObject:SetActive(true)
      end
      self.m_itemSubSkel.AnimationState:SetAnimation(0, "appear" .. suffix, true)
    end
  end
end

function ItemHuntMonster:PlaySubIdleAnim()
  if not self.m_itemSubSkel then
    return
  end
  local trackEntry = self.m_itemSubSkel.AnimationState:SetAnimation(0, "idle" .. self:GetAniNameSuffix(), true)
  self:PlayDogEffect(nil, trackEntry)
end

function ItemHuntMonster:PlaySubAppearAnim()
  if not self.m_itemSubSkel then
    return
  end
  local trackEntry1 = self.m_itemSubSkel.AnimationState:SetAnimation(0, "appear" .. self:GetAniNameSuffix(), false)
  local trackEntry2 = self.m_itemSubSkel.AnimationState:AddAnimation(0, "idle" .. self:GetAniNameSuffix(), true, 0)
  self:PlayDogEffect(trackEntry1, trackEntry2)
end

function ItemHuntMonster:PlaySubHitAnim()
  if not self.m_itemSubSkel then
    return
  end
  local trackEntry1 = self.m_itemSubSkel.AnimationState:SetAnimation(0, "attack" .. self:GetAniNameSuffix(), false)
  local trackEntry2 = self.m_itemSubSkel.AnimationState:AddAnimation(0, "idle" .. self:GetAniNameSuffix(), true, 0)
  self:PlayDogEffect(trackEntry1, trackEntry2)
end

function ItemHuntMonster:PlaySubDisappearAnim()
  if not self.m_itemSubSkel then
    return
  end
  self.m_itemSubSkel.AnimationState:SetAnimation(0, "disappear" .. self:GetAniNameSuffix(), false)
end

function ItemHuntMonster:SetPassAppear(state)
  self.m_bPassAppear = state
end

function ItemHuntMonster:AcquireStageReward(rewards, flyItemRoot)
  local spreadList = {}
  for _, reward in ipairs(rewards) do
    for i = 1, reward[PROPERTY_COUNT] do
      spreadList[#spreadList + 1] = reward[PROPERTY_TYPE]
    end
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:MonsterSpreadItem(spreadList, self.m_itemModel, flyItemRoot, Vector3(-200, -322), 1.5, true, HuntActivityBoardView.MonsterSpreadItemStyle.Parabola)
end

function ItemHuntMonster:PlayChangeAnim()
  self:_SetEventLock(true)
  self.m_blockHit = true
  local trackEntry = self.m_itemSkel.AnimationState:SetAnimation(0, "change" .. self:GetAniNameSuffix(), false)
  trackEntry:End("+", function()
    self.m_blockHit = false
    self:_SetEventLock(false)
  end)
  self.m_itemSkel.AnimationState:AddAnimation(0, "idle" .. self:GetAniNameSuffix(ItemHuntMonster.AnimType.Idle), true, 0)
end

function ItemHuntMonster:ChangeStageState(state)
  if self.m_stageState == ItemHuntMonster.StageState.Half1 and state == ItemHuntMonster.StageState.Half2 then
    self.m_stageState = state
    self:PlayChangeAnim()
  else
    self.m_stageState = state
  end
end

function ItemHuntMonster:_SetEventLock(bLock)
  self.event_lock_count = (self.event_lock_count or 0) + (bLock and 1 or -1)
  GM.UIManager:SetEventLock(bLock, self)
end

function ItemHuntMonster:PlayDogEffect(preTrackEntry, idleTrackEntry)
  if self.m_activityType == ActivityType.Hunt95 then
    local function func()
      GM.AudioModel:PlayEffect(AudioFileConfigName.sfxDogBark1)
    end
    
    if not preTrackEntry then
      DelayExecuteFuncInView(func, 3, self)
      DelayExecuteFuncInView(func, 3.4, self)
      DelayExecuteFuncInView(func, 3.86, self)
    else
      preTrackEntry:Complete("+", function()
        DelayExecuteFuncInView(func, 3, self)
        DelayExecuteFuncInView(func, 3.4, self)
        DelayExecuteFuncInView(func, 3.86, self)
      end)
    end
    idleTrackEntry:Complete("+", function()
      DelayExecuteFuncInView(func, 3, self)
      DelayExecuteFuncInView(func, 3.4, self)
      DelayExecuteFuncInView(func, 3.86, self)
    end)
    idleTrackEntry:End("+", function()
      Scheduler.Unschedule(func, self)
      Scheduler.Unschedule(func, self)
      Scheduler.Unschedule(func, self)
    end)
  end
end
