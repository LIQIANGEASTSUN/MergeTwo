MultiboardsActivityEnergyBoost = setmetatable({}, BaseUIBoardEnergyInfoView)
MultiboardsActivityEnergyBoost.__index = MultiboardsActivityEnergyBoost

function MultiboardsActivityEnergyBoost:Init(uiBoardView)
  BaseUIBoardEnergyInfoView.Init(self, uiBoardView)
  self:UpdateLockState()
end

function MultiboardsActivityEnergyBoost:UpdateLockState()
  local activityModel = GM.ActivityManager:GetStartedMultiboards()
  if not activityModel then
    return
  end
  if not self.m_uiBoardModel:IsEnergyModuleOpen() then
    return
  end
  if self.GrayCacheData == nil then
    self.GrayCacheData = {}
    self.GrayCacheData.isGray = false
  end
  if activityModel:IsReachLimitLevel() then
    UIUtil.SetActive(self.m_switchRectTrans.gameObject, false)
    UIUtil.SetGray(self.m_clickIConRectTrans, true, 0.7, {
      [self.m_lockImg.transform] = true
    }, self.GrayCacheData)
    UIUtil.SetActive(self.m_lockImg.gameObject, true)
  else
    self:UpdateSwitchButton()
    UIUtil.SetGray(self.m_clickIConRectTrans, false, 0.7, {
      [self.m_lockImg.transform] = true
    }, self.GrayCacheData)
    UIUtil.SetActive(self.m_lockImg.gameObject, false)
  end
end

function MultiboardsActivityEnergyBoost:ShowEnergyEffect()
  self.m_switchAnimator:Play("Ani_switch", 0, 0)
end

function MultiboardsActivityEnergyBoost:OnClickGenerateButton()
  local activityModel = GM.ActivityManager:GetStartedMultiboards()
  if not activityModel then
    return
  end
  if activityModel:IsReachLimitLevel() then
    GM.UIManager:ShowPromptWithKey(activityModel:GetDefinition().TextKeyPrefix .. "_multiboards_linelock_hint")
    return
  end
  BaseUIBoardEnergyInfoView.OnClickGenerateButton(self)
end
