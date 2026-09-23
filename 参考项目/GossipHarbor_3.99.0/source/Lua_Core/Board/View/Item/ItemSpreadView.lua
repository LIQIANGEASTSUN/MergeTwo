ItemSpreadView = setmetatable({}, BaseItemViewComponent)
ItemSpreadView.__index = ItemSpreadView

function ItemSpreadView:Init(itemSpreadModel)
  self.m_model = itemSpreadModel
  self.m_mapTagPrefab = self.m_mapTagPrefab or {}
  self.m_mapEffectPrefab = self.m_mapEffectPrefab or {}
  self.m_mapBottomEffectPrefab = self.m_mapBottomEffectPrefab or {}
  AddHandlerAndRecordMap(self.m_model.event, ItemSpreadEventType.StateChanged, {
    obj = self,
    method = self._OnStateChanged
  })
  AddHandlerAndRecordMap(self.m_model.event, ItemSpreadEventType.SpeedUp, {
    obj = self,
    method = self._OnSpeedUp
  })
  EventDispatcher.AddListener(EEventType.TestPlayerpreStateChange, self, self._UpdateView)
  EventDispatcher.AddListener(EEventType.EnergyBoostModeChanged, self, self._UpdateHintEffect)
  EventDispatcher.AddListener(EEventType.BuffNoZeroCDPlayAct, self, self._OnBuffConsume)
  EventDispatcher.AddListener(EEventType.BuffPropertyOutTime, self, self._UpdateView)
  EventDispatcher.AddListener(EEventType.GeneratorBoostBuffActivePlayed, self, self._OnGeneratorBoostBuffActive)
  EventDispatcher.AddListener(EEventType.GeneratorBoostBuffCleared, self, self._UpdateView)
  EventDispatcher.AddListener(EEventType.TriggerBoostDiscoFinished, self, self._UpdateView)
  EventDispatcher.AddListener(EEventType.TriggerBoostDiscoActStarted, self, self._OnTriggerBoostDiscoActStarted)
  EventDispatcher.AddListener(EEventType.TriggerBoostDiscoPlayItemSpreadTagHide, self, self._DiscoHideTagAnimation)
  EventDispatcher.AddListener(EEventType.SmartBuffItemSpreadAct, self, self.OnSmartBuffItemSpreadAct)
  self:_UpdateView(false)
end

function ItemSpreadView:OnDestroy()
  if self.m_model == nil then
    return
  end
  RemoveAllHandlers(self.m_model.event, self)
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  self:_StopCountDownAnim()
  self.m_model = nil
end

function ItemSpreadView:_OnStateChanged()
  self:_UpdateView(true)
end

function ItemSpreadView:SetFlying(flying)
  self.m_flying = flying
  self:_UpdateCountdown(false)
end

function ItemSpreadView:_UpdateView(withAnimation)
  self:_UpdateHintEffect()
  self:_UpdateCountdown(withAnimation)
  self:_UpdateTestInventoryDisplay()
end

function ItemSpreadView:_UpdateHintEffect()
  if self.m_model:GetItemRestNumber() == 0 or self.m_model:GetState() ~= ItemSpreadState.Opened then
    self:HideEffect()
    return
  end
  
  local function hideGroupEffect(hideKey, ListEffect)
    for key, v in pairs(ListEffect) do
      if key ~= hideKey then
        UIUtil.SetActive(v, false)
      end
    end
  end
  
  local hintEffectPrefab = self:_GetHintEffectPrefab()
  if hintEffectPrefab ~= nil then
    if self.m_mapEffectPrefab[hintEffectPrefab] == nil then
      self.m_mapEffectPrefab[hintEffectPrefab] = Object.Instantiate(hintEffectPrefab, self.transform)
    end
    UIUtil.SetActive(self.m_mapEffectPrefab[hintEffectPrefab], true)
  end
  hideGroupEffect(hintEffectPrefab, self.m_mapEffectPrefab)
  local tagPrefab = self:_GetTagEffectPrefab()
  self.m_tagPrefab = tagPrefab
  if tagPrefab ~= nil then
    if self.m_mapTagPrefab[tagPrefab] == nil then
      self.m_mapTagPrefab[tagPrefab] = Object.Instantiate(tagPrefab, self.transform)
    end
    UIUtil.SetActive(self.m_mapTagPrefab[tagPrefab], true)
  end
  hideGroupEffect(tagPrefab, self.m_mapTagPrefab)
  local bottomPrefab = self:_GetBottomEffectPrefab()
  if bottomPrefab ~= nil then
    if self.m_mapBottomEffectPrefab[bottomPrefab] == nil then
      self.m_mapBottomEffectPrefab[bottomPrefab] = Object.Instantiate(bottomPrefab, self.transform)
    end
    UIUtil.SetActive(self.m_mapBottomEffectPrefab[bottomPrefab], true)
    local localPos = self.m_mapBottomEffectPrefab[bottomPrefab].transform.localPosition
    self.m_mapBottomEffectPrefab[bottomPrefab].transform.localPosition = Vector3(localPos.x, localPos.y, self.transform.localPosition.z + 3)
  end
  hideGroupEffect(bottomPrefab, self.m_mapBottomEffectPrefab)
end

function ItemSpreadView:HideEffect()
  for _, eleGO in pairs(self.m_mapEffectPrefab) do
    UIUtil.SetActive(eleGO, false)
  end
  for _, eleTagGO in pairs(self.m_mapTagPrefab) do
    UIUtil.SetActive(eleTagGO, false)
  end
  for _, eleBottomGo in pairs(self.m_mapBottomEffectPrefab) do
    UIUtil.SetActive(eleBottomGo, false)
  end
end

function ItemSpreadView:_UpdateCountdown(withAnimation)
  if self.m_model:ShowCountDown() then
    self.m_countDownGo:SetActive(not self.m_flying)
    if self.m_fillAmountTween ~= nil then
      self.m_fillAmountTween:Kill()
    end
    self.m_countDownMaskImage.fillAmount = self.m_model:GetTimerAmount()
    if withAnimation then
      local nextTimerAmount = self.m_model:GetNextTimerAmount()
      self.m_fillAmountTween = self.m_countDownMaskImage:DOFillAmount(nextTimerAmount, 1):SetEase(Ease.Linear)
    end
    if self.m_model:ShowCountdownAnimation() then
      if self.m_countDownAniTween == nil then
        local trans = self.m_countDownGo.transform
        local sequence = DOTween.Sequence():SetLoops(-1)
        sequence:Append(trans:DOScale(Vector3(0.9900000000000001, 0.81, 1), 0.25))
        sequence:Append(trans:DOScale(Vector3(0.81, 0.9900000000000001, 1), 0.5))
        sequence:Append(trans:DOScale(Vector3(0.9, 0.9, 1), 0.25))
        self.m_countDownAniTween = sequence
      end
    else
      self:_StopCountDownAnim()
    end
    self:SetSpineAni(true)
  else
    self.m_countDownGo:SetActive(false)
    self:_StopCountDownAnim()
    self:SetSpineAni(false)
  end
end

function ItemSpreadView:_StopCountDownAnim()
  if self.m_countDownAniTween ~= nil then
    self.m_countDownAniTween:Kill()
    self.m_countDownAniTween = nil
    self.m_countDownGo.transform.localScale = Vector3(0.9, 0.9, 1)
  end
end

function ItemSpreadView:_UpdateTestInventoryDisplay()
  if not GameConfig.IsTestMode() then
    return
  end
  self.m_testItemRestNumberText.text = self.m_model:GetItemRestNumber()
  self.m_testStorageRestNumberText.text = self.m_model:GetStorageRestNumber()
end

function ItemSpreadView:_OnSpeedUp()
  self:HideEffect()
  local gameObject = Object.Instantiate(self.m_speedUpEffectPrefab, self.transform)
  DOVirtual.DelayedCall(0.8, function()
    Object.Destroy(gameObject)
    self.m_itemView:PlayTapAnimation(0.4)
    self:_UpdateHintEffect()
  end)
end

function ItemSpreadView:SetItemSpriteShow(isShow)
  if not self.m_itemView then
    return
  end
  local rawSprite = self.m_itemView:GetSpriteRenderer()
  if rawSprite and not rawSprite:IsNull() and rawSprite.gameObject.activeSelf ~= isShow then
    rawSprite.gameObject:SetActive(isShow)
  end
end

function ItemSpreadView:SetSpineAni(isShow)
  local key = "item_cd_" .. self.m_model:GetItemModel():GetType()
  if not ScenePrefabConfigName.HasConfig(key) then
    return
  end
  local prefab = ScenePrefabConfigName[key]
  if self.m_spine and self.m_spine.go then
    if self.m_spine.go.activeSelf ~= isShow then
      self.m_spine.go:SetActive(isShow)
      self:SetItemSpriteShow(not isShow)
    end
    return
  end
  if self.m_spine and self.m_spine.loading then
    self.m_spine.isShow = isShow
    return
  end
  self.m_spine = {isShow = isShow, loading = true}
  GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(prefab), self.transform, Vector3.zero, function(go)
    if go:IsNull() then
      self.m_spine = nil
      return
    end
    self.m_spine.loading = false
    self.m_spine.go = go
    self.m_spine.go:SetActive(self.m_spine.isShow)
    if self.m_itemView then
      self:SetItemSpriteShow(not self.m_spine.isShow)
    else
      DelayExecuteFuncInView(function()
        self:SetItemSpriteShow(not self.m_spine.isShow)
      end, 0.1, self)
    end
  end)
end

function ItemSpreadView:CanSupportBoostDiscoShow()
  if not self.m_model:CanSupportBoostDisco() then
    return false
  end
  local discoHandler = GM.BoostChargeManager:GetHandler(EBoostChargeType.BoostCharge_disco)
  return discoHandler:CanSupportItemShow(self.m_model:GetItemModel():GetType())
end

function ItemSpreadView:_GetHintEffectPrefab()
  local level = self:GetGeneratorBoostBuffEffectLevel()
  if level ~= nil then
    return self["m_generatorBoostEffectPrefab_" .. level]
  end
  if self.m_model:CanSupportSmart() then
    return self.m_generatorBoostEffectPrefab_3
  end
  if self:CanSupportBoostDiscoShow() then
    local _, discoLevel = GM.BoostChargeManager:GetHandler(EBoostChargeType.BoostCharge_disco):GetPropertyIcon()
    if discoLevel ~= nil then
      return self["m_generatorBoostEffectPrefab_" .. discoLevel]
    end
  end
  if self.m_model:CanSupportCDBuff() then
    return self.m_ZeroCDEffectPrefab
  end
  return self.m_energyFreeEffectPrefab
end

function ItemSpreadView:_GetTagEffectPrefab()
  if self.m_model:CostEnergy() then
    local discoHandler = GM.BoostChargeManager:GetHandler(EBoostChargeType.BoostCharge_disco)
    if self:CanSupportBoostDiscoShow() and discoHandler:IsTempProgressActive() then
      return nil
    elseif GM.EnergyBoostModel:CanEnergyBoost(self.m_model:GetItemModel():GetType()) then
      local num = GM.EnergyBoostModel:GetEnergyBoostCostNum()
      return self["m_energyEffectTagPrefab_" .. num]
    else
      return self.m_normalEffectTagPrefab
    end
  else
    return nil
  end
end

function ItemSpreadView:_GetBottomEffectPrefab()
  local level = self:GetGeneratorBoostBuffEffectLevel()
  if level ~= nil then
    return self["m_generatorBoostDownEffectPrefab_" .. level]
  end
  if self.m_model:CanSupportSmart() then
    return self.m_generatorBoostDownEffectPrefab_3
  end
  if self:CanSupportBoostDiscoShow() then
    local _, discoLevel = GM.BoostChargeManager:GetHandler(EBoostChargeType.BoostCharge_disco):GetPropertyIcon()
    if discoLevel ~= nil then
      return self["m_generatorBoostDownEffectPrefab_" .. discoLevel]
    end
  end
  if self.m_model:CanSupportCDBuff() then
    return self.m_downZeroCDEffectPrefab
  end
  return nil
end

function ItemSpreadView:_OnBuffConsume(message)
  if not self.m_model:CanSupportCDBuff() then
    return
  end
  if message[EBuffProperty.BuffItemcd] == nil then
    return
  end
  if self.m_showCDEffectGO == nil then
    self.m_showCDEffectGO = Object.Instantiate(self.m_showZeroCdItemEffectPrefab, self.transform)
  end
  UIUtil.SetActive(self.m_showCDEffectGO, true)
  self:_UpdateView(false)
  DelayExecuteFuncInView(function()
    UIUtil.SetActive(self.m_showCDEffectGO, false)
  end, 1.5, self)
end

function ItemSpreadView:_OnGeneratorBoostBuffActive(buffType)
  local level = self:GetGeneratorBoostBuffEffectLevel()
  if level == nil then
    return
  end
  DelayExecuteFuncInView(function()
    if self.m_showGeneratorBoostEffectGO == nil then
      self.m_showGeneratorBoostEffectGO = Object.Instantiate(self["m_generatorBoostShowEffectPrefab_" .. level], self.transform)
    end
    UIUtil.SetActive(self.m_showGeneratorBoostEffectGO, true)
    self:_UpdateView(false)
  end, 0.56, self)
  DelayExecuteFuncInView(function()
    UIUtil.SetActive(self.m_showGeneratorBoostEffectGO, false)
  end, 0.86, self)
end

function ItemSpreadView:OnSmartBuffItemSpreadAct()
  DelayExecuteFuncInView(function()
    if self.m_showGeneratorBoostEffectGO == nil then
      self.m_showGeneratorBoostEffectGO = Object.Instantiate(self.m_generatorBoostShowEffectPrefab_3, self.transform)
    end
    UIUtil.SetActive(self.m_showGeneratorBoostEffectGO, true)
    self:_UpdateView(false)
  end, 0.56, self)
  DelayExecuteFuncInView(function()
    UIUtil.SetActive(self.m_showGeneratorBoostEffectGO, false)
  end, 0.86, self)
end

function ItemSpreadView:_DiscoHideTagAnimation()
  if self.m_tagPrefab ~= nil and self.m_mapTagPrefab[self.m_tagPrefab] ~= nil then
    local flyPrefab = GM.BoostChargeManager:GetHandler(EBoostChargeType.BoostCharge_disco):GetHideItemSpreadTagPrefab(self.m_model:GetItemModel())
    if flyPrefab ~= nil then
      local screenPos = MainBoardView.GetInstance():ConvertWorldPositionToScreenPosition(self.transform.position)
      local uiPos = PositionUtil.UICameraScreen2World(screenPos)
      local tgPrefab = self.m_tagPrefab
      GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(flyPrefab), GM.UIManager:GetCanvasRoot(), Vector3(uiPos.x, uiPos.y, 10), function(go)
        local seq = DOTween.Sequence()
        UIUtil.UpdateSortingOrder(go, 360)
        seq:AppendInterval(1)
        seq:AppendCallback(function()
          if self.m_mapTagPrefab[tgPrefab] ~= nil then
            UIUtil.SetActive(self.m_mapTagPrefab[tgPrefab], false)
          end
          local animator = go:GetComponentsInChildren(typeof(CS.UnityEngine.Animator))
          if animator and animator.Length > 0 then
            animator[0]:Play("Ani_tili", 0, 0)
          end
        end)
        seq:AppendInterval(1)
        seq:AppendCallback(function()
          AddressableLoader.Destroy(go)
        end)
      end)
    end
  end
  self:_UpdateView(false)
end

function ItemSpreadView:_OnTriggerBoostDiscoActStarted(message)
  if not self:CanSupportBoostDiscoShow() then
    return
  end
  local level = message.level
  local seq = DOTween.Sequence()
  seq:AppendInterval(0.56)
  seq:AppendCallback(function()
    if self.m_showGeneratorBoostEffectGO == nil then
      self.m_showGeneratorBoostEffectGO = Object.Instantiate(self["m_generatorBoostShowEffectPrefab_" .. level], self.transform)
    end
    UIUtil.SetActive(self.m_showGeneratorBoostEffectGO, true)
    self:_UpdateView(false)
  end)
  seq:AppendInterval(0.3)
  seq:AppendCallback(function()
    UIUtil.SetActive(self.m_showGeneratorBoostEffectGO, false)
  end)
end

function ItemSpreadView:GetGeneratorBoostBuffEffectLevel()
  if not self.m_model:CanSupportGeneratorBoost() then
    return
  end
  local model = GM.ActivityManager:GetStartedActivityByDefinition(GeneratorBoostActivityDefinition)
  local level = model:GetBuffLevel()
  return 0 < level and level or nil
end
