BaseUIBoardEnergyInfoView = {}
BaseUIBoardEnergyInfoView.__index = BaseUIBoardEnergyInfoView

function BaseUIBoardEnergyInfoView:OnDestroy()
  Scheduler.UnscheduleTarget(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function BaseUIBoardEnergyInfoView:Init(uiBoardView)
  self.m_uiBoardView = uiBoardView
  self.m_uiBoardModel = self.m_uiBoardView:GetModel()
  self.m_uiBoardEnergyModel = self.m_uiBoardModel:GetEnergyModel()
  self.m_defaultScale = self.m_energyBoostImg.transform.localScale
  if self.m_uiBoardModel:IsEnergyModuleOpen() then
    UIUtil.SetActive(self.gameObject, true)
    self:InitUI()
    self:UpdateSwitchButton()
    self:UpdateEnergy()
    AddHandlerAndRecordMap(self.m_uiBoardEnergyModel:GetEvent(), BaseUIBoardEnergyModel.EventKey.ConsumeEnergy, {
      obj = self,
      method = self.OnConsumeEnergy
    })
    AddHandlerAndRecordMap(self.m_uiBoardEnergyModel:GetEvent(), BaseUIBoardEnergyModel.EventKey.ExponentUnlockChanged, {
      obj = self,
      method = self.OnExponentUnlockChanged
    })
    self:OnExponentUnlockChanged()
  else
    UIUtil.SetActive(self.gameObject, false)
  end
  self:ChangeEnergyGestureActive(false)
  UIUtil.SetActive(self.m_adaptiveTipBubbleLuaTable.gameObject, false)
  if self.m_uiBoardModel:IsEnergyModuleOpen() and #self.m_uiBoardEnergyModel:GetListUnlockExponent() > 1 then
    EventDispatcher.DispatchEvent(EEventType.UIBoardTryPlayEnergyBoostTutorial, {
      activityType = self.m_uiBoardModel:GetActivityModel():GetType()
    })
  end
end

function BaseUIBoardEnergyInfoView:InitUI()
  local codeOne = self.m_uiBoardModel:GetMainItemCodeByLevel(1)
  SpriteUtil.SetImage(self.m_energyImg, GM.ItemDataModel:GetSpriteName(codeOne))
end

function BaseUIBoardEnergyInfoView:UpdateSwitchButton()
  local curExponent = self.m_uiBoardEnergyModel:GetCurExponent()
  local SwitchImage = self["m_switchImage" .. curExponent]
  self.m_switchBtnImg.sprite = SwitchImage
  self.m_multiText.text = "X" .. MathUtil.IntPow(2, curExponent)
  self.m_multiTextUIOu:SetColor(UIUtil.ConvertHexColor2CSColor(self["m_outlineColor" .. tostring(curExponent)]))
  UIUtil.SetActive(self.m_switchRectTrans.gameObject, #self.m_uiBoardEnergyModel:GetListUnlockExponent() > 1)
  if curExponent == 0 then
  elseif curExponent == 1 then
    self.m_switchAnimator:Play("Ani_switch_pink", 0, 0)
  elseif curExponent == 2 then
    self.m_switchAnimator:Play("Ani_switch_red", 0, 0)
  elseif curExponent == 3 then
    self.m_switchAnimator:Play("Ani_switch_yellow", 0, 0)
  else
    self.m_switchAnimator:Play("Ani_switch_blue", 0, 0)
  end
end

function BaseUIBoardEnergyInfoView:UpdateEnergy(energyNum)
  local curExponent = self.m_uiBoardEnergyModel:GetCurExponent()
  local curEnergyNum = energyNum or self.m_uiBoardEnergyModel:GetCurEnergy()
  for i = 1, 3 do
    UIUtil.SetActive(self["m_effectglow_" .. i].gameObject, false)
  end
  local MultiImage = self["m_clickImage" .. curExponent]
  if self["m_effectglow_" .. curExponent] ~= nil then
    UIUtil.SetActive(self["m_effectglow_" .. curExponent].gameObject, true)
  end
  self.m_energyBoostImg.sprite = MultiImage
  self.m_numText.text = curEnergyNum
  self.m_curShowEnergyNum = curEnergyNum
end

function BaseUIBoardEnergyInfoView:OnConsumeEnergy()
  local curEnergyNum = self.m_uiBoardEnergyModel:GetCurEnergy()
  if curEnergyNum < self.m_curShowEnergyNum then
    self:UpdateEnergy()
  end
end

function BaseUIBoardEnergyInfoView:IconScaleAnimation()
  self.m_effect_daoju_shouquParticle1:Play()
  self.m_energyBoostImg.transform.localScale = self.m_defaultScale
  if self.m_scaleTween ~= nil then
    self.m_scaleTween:Kill()
    self.m_scaleTween = nil
  end
  self.m_scaleTween = self.m_energyBoostImg.transform:DOScale(1.1, 0.3):SetLoops(2, LoopType.Yoyo)
  GM.AudioModel:PlayEffect(AudioFileConfigName.sfxRewardCollect)
end

function BaseUIBoardEnergyInfoView:UpdateTextAnimation(checkType, valueChange, isMiddleStep)
  local energyNum = self.m_curShowEnergyNum
  energyNum = math.min(math.ceil(energyNum + valueChange), self.m_uiBoardEnergyModel:GetCurEnergy())
  self:UpdateEnergy(energyNum)
end

function BaseUIBoardEnergyInfoView:GetEnergyIconTrans()
  return self.m_energyBoostImg.transform
end

function BaseUIBoardEnergyInfoView:OnSwitchBtn()
  local curExponent = self.m_uiBoardEnergyModel:GetCurExponent()
  local nextExponent = self.m_uiBoardEnergyModel:SwitchExponent()
  if nextExponent == nil then
    return
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
  if nextExponent ~= curExponent then
    self.m_switchAnimator:Play("Ani_switch_anniu", 0, 0)
    GM.UIManager:SetEventLock(true, self)
    DelayExecuteFuncInView(function()
      self:UpdateEnergy()
      local SwitchImage = self["m_switchImage" .. nextExponent]
      self.m_switchBtnImg.sprite = SwitchImage
      self.m_multiText.text = "X" .. MathUtil.IntPow(2, nextExponent)
      self.m_multiTextUIOu:SetColor(UIUtil.ConvertHexColor2CSColor(self["m_outlineColor" .. tostring(nextExponent)]))
    end, 0.11666666666666667, self)
    DelayExecuteFuncInView(function()
      self:UpdateSwitchButton()
      GM.UIManager:SetEventLock(false, self)
    end, 0.3333333333333333, self)
    GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.effect_uiboard_energy_button_hit), GM.UIManager:GetCanvasRoot(), Vector3.zero, function(go)
      UIUtil.UpdateSortingOrder(go, 100)
      local uiPos = self.m_uiBoardView:ConvertWorldPositionToUIWorldPosition(self.m_energyBoostImg.transform.position)
      go.transform.position = Vector3(uiPos.x, uiPos.y, 11)
      DelayExecuteFuncInView(function()
        AddressableLoader.Destroy(go)
      end, 1, self)
    end)
    GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.BaseUIBoardMultiBoostPrompt), GM.UIManager:GetCanvasRoot(), Vector3.zero, function(go)
      if not go:IsNull() then
        local prompt = go:GetLuaTable()
        prompt:Show(nextExponent)
      end
    end)
  end
end

function BaseUIBoardEnergyInfoView:OnExponentUnlockChanged()
  local listNewUnlock = self.m_uiBoardEnergyModel:GetListUnlockExponent()
  local seq = DOTween.Sequence()
  local maxUnlock = 0
  for _, exponent in ipairs(listNewUnlock) do
    if exponent > maxUnlock then
      maxUnlock = exponent
    end
  end
  local exponent = maxUnlock
  if self.m_uiBoardEnergyModel:CanShowExponent(exponent) then
    self.m_uiBoardEnergyModel:SaveShowExponent(exponent)
  else
    return
  end
  seq:AppendInterval(0.1)
  seq:AppendCallback(function()
    local ePos = self.m_uiBoardView:ConvertWorldPositionToUIWorldPosition(self.m_switchBtnImg.transform.position)
    GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.BaseUIBoardMultiBoostUnlockHint), GM.UIManager:GetCanvasRoot(), Vector3.zero, function(go)
      if not go:IsNull() then
        local prompt = go:GetLuaTable()
        prompt:Init(exponent, ePos, self.m_uiBoardModel:GetActivityModel():GetType(), function()
          GM.AudioModel:PlayEffect(AudioFileConfigName.sfxBuffReward)
          EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
          GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.effect_wupin_glow02), GM.UIManager:GetCanvasRoot(), Vector3.zero, function(go)
            UIUtil.UpdateSortingOrder(go, 100)
            local uiPos = self.m_uiBoardView:ConvertWorldPositionToUIWorldPosition(self.m_switchBtnImg.transform.position)
            go.transform.position = Vector3(uiPos.x, uiPos.y, 11)
            go.transform.localScale = Vector3(1.5, 1.5, 1)
            DelayExecuteFuncInView(function()
              AddressableLoader.Destroy(go)
            end, 1, self)
          end)
          self.m_switchAnimator:Play("Ani_switch", 0, 0)
          self:UpdateSwitchButton()
          self.m_adaptiveTipBubbleLuaTable:Show(GM.GameTextModel:GetText("miniboard_boost_bubble_x" .. MathUtil.IntPow(2, exponent)), self.transform)
          if not self.gameObject:IsNull() then
            DelayExecuteFuncInView(function()
              self.m_adaptiveTipBubbleLuaTable:Hide()
            end, 2, self)
          end
        end)
      end
    end)
  end)
end

function BaseUIBoardEnergyInfoView:OnClickGenerateButton()
  self.m_clickIConAnimator:Play("Ani_ClickICon", 0, 0)
  if self.m_uiBoardModel:IsBoardFull() then
    GM.UIManager:ShowPromptWithKey("hint_board_full", self.m_uiBoardView:ConvertWorldPositionToScreenPosition(self.transform.position + Vector3(0, 100, 0)))
    return
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
  if self.m_uiBoardEnergyModel:CanCostEnergyNum() then
    self.m_uiBoardModel:TryGenerateMainItem()
  else
    GM.UIManager:ShowPromptWithKey("miniboard_notenough_energy")
  end
end

function BaseUIBoardEnergyInfoView:GetEnergyBoostTrans()
  return self.m_energyBoostImg.transform
end

function BaseUIBoardEnergyInfoView:GetSwitchBtnTrans()
  return self.m_switchBtnImg.transform
end

function BaseUIBoardEnergyInfoView:OnTestAddEnergy()
  self.m_uiBoardEnergyModel:AddCurEnergy(50)
  self:UpdateEnergy()
end

function BaseUIBoardEnergyInfoView:ChangeEnergyGestureActive(bFlag)
  UIUtil.SetActive(self.m_effect_shouzhi_dianjiTrans1.gameObject, bFlag)
end

function BaseUIBoardEnergyInfoView:OnTestUnlockNextExponent()
  self.m_uiBoardEnergyModel:OnTestUnlockNextExponent()
end

function BaseUIBoardEnergyInfoView:ClearUnlockExponent()
  self.m_uiBoardEnergyModel:ClearUnlockExponent()
  self:UpdateSwitchButton()
end

function BaseUIBoardEnergyInfoView:TryActive(bFlag)
  if self.m_uiBoardModel:IsEnergyModuleOpen() then
    UIUtil.SetActive(self.gameObject, bFlag)
  else
    UIUtil.SetActive(self.gameObject, false)
  end
end

BaseUIBoardTextTip = {}
BaseUIBoardTextTip.__index = BaseUIBoardTextTip

function BaseUIBoardTextTip:Init()
end

function BaseUIBoardTextTip:Show(text, targetRectTrans)
  if self.m_bShow == true and self.m_targetRectTrans == targetRectTrans then
    self:Hide(true)
    return
  end
  if self.m_tween then
    self.m_tween:Kill()
  end
  self.m_textText.text = text
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  self.m_targetRectTrans = targetRectTrans
  self.m_bShow = true
  CS.UnityEngine.EventSystems.EventSystem.current:SetSelectedGameObject(self.m_targetRectTrans.gameObject)
  self.m_currentSelected = self.m_targetRectTrans.gameObject
  self.gameObject:SetActive(true)
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_boardRectTrans)
  local scaleSet = 1
  local originScale = Vector3(1, -1, 1)
  self.gameObject.transform:SetLocalScaleXY(0)
  self.m_tween = self.gameObject.transform:DOScale(originScale, 0.2):OnComplete(function()
    self.m_tween = nil
  end)
end

function BaseUIBoardTextTip:Hide(ignoreAni)
  if self.m_bShow == false then
    return
  end
  self.m_bShow = false
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  if self.m_tween then
    self.m_tween:Kill()
  end
  self.m_tween = self.gameObject.transform:DOScale(0, 0.2):OnComplete(function()
    self.m_tween = nil
    if not self.gameObject:IsNull() and self.m_bShow == false then
      self.gameObject:SetActive(false)
    end
  end)
end

function BaseUIBoardTextTip:Update()
  if CS.UnityEngine.EventSystems.EventSystem.current == nil then
    return
  end
  local rec = CS.UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject
  if self.m_currentSelected ~= rec and rec ~= self.m_boardRectTrans.gameObject and (rec == nil or rec:IsNull() or not rec.transform:IsChildOf(self.m_boardRectTrans)) then
    self:Hide(self.m_bIgnoreCloseAni)
    return
  end
end
