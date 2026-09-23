MultiboardsActivityBoardCacheRoot = setmetatable({}, BoardCacheRoot)
MultiboardsActivityBoardCacheRoot.__index = MultiboardsActivityBoardCacheRoot

function MultiboardsActivityBoardCacheRoot:Init(boardView)
  BoardCacheRoot.Init(self, boardView)
  self:UpdateLockState()
end

function MultiboardsActivityBoardCacheRoot:UpdateLockState()
  local activityModel = GM.ActivityManager:GetStartedMultiboards()
  if not activityModel then
    return
  end
  if activityModel:IsReachLimitLevel() then
    self.m_cellBoardImg.color = CSColor(0.7, 0.7, 0.7, 1)
    self.m_countBackgroundImg.color = CSColor(0.7, 0.7, 0.7, 1)
    self.m_countText.color = CSColor(0.7, 0.7, 0.7, 1)
    self.m_lockGo:SetActive(true)
    if self.m_iconTween then
      self.m_iconTween:Kill()
    end
    if self.m_arrowTween then
      self.m_arrowTween:Kill()
    end
  else
    self.m_cellBoardImg.color = CSColor(1, 1, 1, 1)
    self.m_countBackgroundImg.color = CSColor(1, 1, 1, 1)
    self.m_countText.color = CSColor(1, 1, 1, 1)
    self.m_lockGo:SetActive(false)
  end
end

function MultiboardsActivityBoardCacheRoot:OnClicked()
  local activityModel = GM.ActivityManager:GetStartedMultiboards()
  if not activityModel then
    return
  end
  self.m_boardView:_StartPrompt()
  if activityModel:IsReachLimitLevel() then
    GM.UIManager:ShowPromptWithKey(activityModel:GetDefinition().TextKeyPrefix .. "_multiboards_linelock_hint")
    return
  end
  BoardCacheRoot.OnClicked(self)
end

function MultiboardsActivityBoardCacheRoot:PlayAnimation()
  if not self.gameObject.activeSelf then
    return
  end
  local activityModel = GM.ActivityManager:GetStartedMultiboards()
  if not activityModel then
    return
  end
  if activityModel:IsReachLimitLevel() then
    return
  end
  self.m_iconRectTrans.localScale = self.m_iconOriginScale
  self.m_iconTween = self.m_iconImg.transform:DOScale(0.95, 0.3):SetLoops(4, LoopType.Yoyo)
  UIUtil.SetLocalPosition(self.m_arrowRectTrans, nil, self.m_arrowOriginY)
  self.m_arrowTween = self.m_arrowRectTrans:DOAnchorPosY(self.m_arrowRectTrans.localPosition.y - 15, 1):SetLoops(2, LoopType.Yoyo):SetEase(Ease.Linear)
end
