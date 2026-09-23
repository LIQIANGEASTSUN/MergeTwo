ItemCollectableTipShowStatus = {
  None = nil,
  SelectItem = 1,
  MergeItem = 2
}
ItemCollectableTip = {}
ItemCollectableTip.__index = ItemCollectableTip
ItemCollectableTip.AutoHideDelay = 3

function ItemCollectableTip:_Init()
  self.m_bInit = true
  EventDispatcher.AddActiveListener(EEventType.OpenView, self, self._OnOpenView)
end

function ItemCollectableTip:_OnOpenView()
  self:Hide()
end

function ItemCollectableTip:Show(screenPos, reward)
  if not self.m_bInit then
    self:_Init()
  end
  if self.m_bShow then
    self:Hide(true)
  end
  if GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.CollectItemConfirmWindow) ~= nil then
    return
  end
  self:_UpdatePosition(screenPos)
  self:_UpdateSortingOrder()
  self:_UpdateRewardContent(reward)
  self:_SetAutoHide()
  self:_PlayShowAnimation()
  self.m_bShow = true
end

function ItemCollectableTip:Hide(ignoreAni)
  if not self.m_bShow and not ignoreAni then
    return
  end
  if ignoreAni then
    if self.m_showTween ~= nil then
      self.m_showTween:Pause()
    end
    if self.m_hideTween ~= nil then
      self.m_hideTween:Pause()
    end
    UIUtil.SetActive(self.gameObject, false)
  else
    self:_PlayHideAnimation()
  end
  self.m_bShow = false
  self:_ClearAutoHide()
end

function ItemCollectableTip:Update(dt)
  if self.m_autoHideTimer ~= nil then
    self.m_autoHideTimer = self.m_autoHideTimer - dt
    if self.m_autoHideTimer <= 0 then
      self:_AutoHide()
    end
  end
  if self.m_bShow and Input.anyKeyDown then
    self:Hide()
  end
end

function ItemCollectableTip:_UpdatePosition(screenPos)
  self.transform.position = PositionUtil.UICameraScreen2World(screenPos)
  UIUtil.AddLocalPosition(self.transform, nil, BaseBoardModel.TileSize / 2, -self.transform.localPosition.z)
end

function ItemCollectableTip:_UpdateSortingOrder()
  local topView = GM.UIManager:GetOpenedTopViewByType(EViewType.Window)
  if topView then
    self.m_canvas.sortingOrder = topView:GetSortingOrder() + WINDOW_SORTING_ORDER_INTERVAL
  else
    self.m_canvas.sortingOrder = WINDOW_SORTING_ORDER_INTERVAL
  end
end

function ItemCollectableTip:_UpdateRewardContent(reward)
  self.m_rewardItem:Init(reward)
  self.m_rewardItem:HideTipButton()
  local propertyType = reward[PROPERTY_TYPE]
  local colorData = ItemUtility.GetCollectableColor(propertyType)
  self.m_amountText.color = colorData.text
  self.m_textUIOutline.outlineColor = colorData.outline
  self.m_textUIShadow.effectColor = colorData.outline
end

function ItemCollectableTip:_SetAutoHide()
  self.m_autoHideTimer = ItemCollectableTip.AutoHideDelay
end

function ItemCollectableTip:_ClearAutoHide()
  self.m_autoHideTimer = nil
end

function ItemCollectableTip:_AutoHide()
  if self.m_bShow then
    self:Hide()
  end
end

function ItemCollectableTip:_PlayShowAnimation()
  if self.m_bShow then
    return
  end
  if self.m_hideTween ~= nil then
    self.m_hideTween:Pause()
  end
  if self.m_showTween == nil then
    self.transform:SetLocalScaleXY(0)
    local seq = DOTween.Sequence()
    seq:AppendCallback(function()
      UIUtil.SetActive(self.gameObject, true)
    end)
    seq:Append(self.transform:DOScale(1, 0.2))
    seq:SetAutoKill(false)
    self.m_showTween = seq
  else
    self.m_showTween:Restart()
  end
end

function ItemCollectableTip:_PlayHideAnimation()
  if not self.m_bShow then
    return
  end
  if self.m_showTween ~= nil then
    self.m_showTween:Pause()
  end
  if self.m_hideTween == nil then
    local seq = DOTween.Sequence()
    seq:Append(self.transform:DOScale(0, 0.2))
    seq:AppendCallback(function()
      UIUtil.SetActive(self.gameObject, false)
    end)
    seq:SetAutoKill(false)
    self.m_hideTween = seq
  else
    self.m_hideTween:Restart()
  end
end

function ItemCollectableTip:OnDestroy()
  if self.m_showTween ~= nil then
    self.m_showTween:Kill()
  end
  if self.m_hideTween ~= nil then
    self.m_hideTween:Kill()
  end
  EventDispatcher.RemoveTarget(self)
end
