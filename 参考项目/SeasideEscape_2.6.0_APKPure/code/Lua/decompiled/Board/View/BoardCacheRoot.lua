BoardCacheRoot = {}
BoardCacheRoot.__index = BoardCacheRoot

function BoardCacheRoot:Awake()
  EventDispatcher.AddListener(EEventType.CacheBubbleShow, self, self.OnBubbleShow)
end

function BoardCacheRoot:Init(boardView)
  self.m_boardView = boardView
  self:_Hide()
  self:UpdateContent()
end

function BoardCacheRoot:OnDestroy()
  self:_ClearTweens()
  if self.m_hideAni then
    self.m_hideAni:Kill()
    self.m_hideAni = nil
  end
  EventDispatcher.RemoveTarget(self)
end

function BoardCacheRoot:TryUpdateCache()
  if PropertyAnimationManager.uiLockFlyingCount <= 0 and not GM.UIManager:IsEventLock() and not GM.UIManager:IsViewOpen(UIPrefabConfigName.BoxItemRewardWindow) then
    self:UpdateContent()
  end
end

function BoardCacheRoot:OnCacheItems(msg)
  local topView = GM.UIManager:GetOpenedTopView()
  local bNotUpdateCache = msg and msg.NotUpdateCache
  if (GM.UIManager.allWindowClosed or topView and topView.CanUpdateCache) and PropertyAnimationManager.uiLockFlyingCount <= 0 and not GM.UIManager:IsEventLock() and not bNotUpdateCache then
    self:UpdateContent()
  end
end

function BoardCacheRoot:OnCachedItemsChanged()
  self:UpdateContent()
end

function BoardCacheRoot:GetCachedItemWorldPos()
  return self.m_itemIconTrans.position
end

function BoardCacheRoot:GetCachedItemTransform()
  return self.m_itemIconTrans
end

function BoardCacheRoot:SetShowCacheItemFirst(bShow)
  self.m_bShowCacheItemFirst = bShow
end

function BoardCacheRoot:UpdateContent()
  if not self.m_boardView then
    return
  end
  local cachedItemsCount = self.m_boardView:GetModel():GetCachedItemCount()
  local albumModel = AlbumModel.GetActiveModel(false, true)
  local cachedAlbumPackCount = self.m_boardView:IsMainBoard() and albumModel and albumModel:GetCachedAlbumPackCount(true) or 0
  local totalCount = cachedItemsCount + cachedAlbumPackCount
  if 0 < totalCount then
    if self.m_displayItemType == nil then
      self:_Show()
    end
    local frontCachedItem
    if self.m_bShowCacheItemFirst and 0 < cachedItemsCount or cachedAlbumPackCount <= 0 then
      frontCachedItem = self.m_boardView:GetModel():GetCachedItem(1)
      Log.Assert(frontCachedItem ~= nil, "frontCachedItem\228\184\141\232\131\189\228\184\186\231\169\186")
    else
      frontCachedItem = albumModel and albumModel:GetCachedAlbumPack(1, true)
      Log.Assert(frontCachedItem ~= nil, "frontCachedAlbumPack\228\184\141\232\131\189\228\184\186\231\169\186")
    end
    if frontCachedItem == nil then
      self.m_displayItemType = nil
      self:_Hide()
    end
    local displayItemType = ItemModelFactory.GetInnerType(frontCachedItem)
    if self.m_displayItemType ~= displayItemType then
      self.m_displayItemType = displayItemType
      self:_UpdateItemIcon()
    end
    self.m_countText.text = totalCount
    self.m_countBg:SetActive(1 < totalCount)
  elseif self.m_displayItemType ~= nil then
    self.m_displayItemType = nil
    self:_Hide()
  end
  self:UpdateAlbumFireEffect(self.m_displayItemType)
end

function BoardCacheRoot:_UpdateItemIcon()
  local spriteName = GM.ItemDataModel:GetSpriteName(self.m_displayItemType)
  SpriteUtil.SetImage(self.m_iconImg, spriteName, true)
  self.m_iconImg.transform.anchoredPosition = V2Zero
end

function BoardCacheRoot:OnClicked(bLongPress)
  EventDispatcher.DispatchEvent(EEventType.BoardCacheRootClicked)
  if AlbumModel.IsAlbumPackType(self.m_displayItemType) then
    local albumModel = AlbumModel.GetActiveModel(false, true)
    if albumModel then
      albumModel:PopCachedAlbumPack(self:GetCachedItemWorldPos())
    else
      Log.Assert(false, "No active albumModel !!!")
    end
  elseif ItemBoxSimilarUtility.IsBoxSimilarItem(self.m_displayItemType) then
    self.m_boardView:GetModel():PopCachedBoxItem(self:GetCachedItemWorldPos())
  elseif not self.m_boardView:GetModel():PopCachedItem(bLongPress) then
    self:_PromptFullBoard()
  end
end

function BoardCacheRoot:IsShowing()
  return self.gameObject.activeInHierarchy
end

function BoardCacheRoot:_Show()
  if self.m_hideAni and self.m_hideEffectGo then
    self.m_hideAni:Kill()
    self.m_hideAni = nil
    self:_HideAniSet(true)
  end
  self.gameObject:SetActive(true)
  if self.m_iconSequence == nil then
    local sequence = DOTween.Sequence():SetAutoKill(false):SetLoops(-1)
    sequence:AppendInterval(2)
    sequence:Append(self.m_itemIconTrans:DOScale(1.02, 0.3):SetLoops(4, LoopType.Yoyo))
    self.m_iconSequence = sequence
  else
    self.m_iconSequence:Restart()
  end
  if self.m_arrowSequence == nil then
    self.m_arrowSequence = self.m_arrowRectTrans:DOAnchorPosY(self.m_arrowRectTrans.localPosition.y - 15, 1):SetLoops(-1, LoopType.Yoyo):SetEase(Ease.Linear)
  else
    self.m_arrowSequence:Restart()
  end
end

function BoardCacheRoot:_ClearTweens()
  if self.m_iconSequence ~= nil then
    self.m_iconSequence:SafeKill()
    self.m_iconSequence = nil
  end
  if self.m_arrowSequence ~= nil then
    self.m_arrowSequence:Kill()
    self.m_arrowSequence = nil
  end
end

function BoardCacheRoot:_HideAniSet(bShow)
  self.m_cellBoardGo:SetActive(bShow)
  self.m_hideEffectGo:SetActive(not bShow)
  self.m_itemIconTrans.gameObject:SetActive(bShow)
  self.m_arrowRectTrans.gameObject:SetActive(bShow)
end

function BoardCacheRoot:_Hide()
  local timeConfig = GM.ConfigModel:ParseGeneralConf(EGeneralConfType.CacheLockTime)
  local time = not IsNil(timeConfig) and tonumber(timeConfig) or 0
  if 0 < time and self.m_hideEffectGo then
    self:_HideAniSet(false)
    local seq = DOTween.Sequence()
    seq:AppendInterval(time)
    seq:AppendCallback(function()
      self.gameObject:SetActive(false)
      self:_HideAniSet(true)
      self.m_hideAni = nil
    end)
    self.m_hideAni = seq
  else
    self.gameObject:SetActive(false)
  end
  if self.m_iconSequence then
    self.m_iconSequence:Pause()
  end
  if self.m_arrowSequence then
    self.m_arrowSequence:Pause()
  end
end

function BoardCacheRoot:_PromptFullBoard()
  GM.UIManager:ShowPromptWithKey("hint_board_full", self.m_boardView:ConvertWorldPositionToScreenPosition(self.gameObject.transform.position + Vector3(0, 100, 0)))
end

function BoardCacheRoot:GetOriginalPosition()
  local pos = self.m_boardView:ConvertWorldPositionToScreenPosition(self.m_itemIconTrans.position)
  pos.z = 0
  return PositionUtil.UICameraScreen2World(pos)
end

function BoardCacheRoot:ShowHandEffect(bShow)
  UIUtil.SetActive(self.m_handEffectGo, bShow)
end

function BoardCacheRoot:IconScaleAnimation(needEffect)
  if needEffect and self.m_scaleEffect and GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderGivePerformance) then
    self.m_scaleEffect:Play()
  end
end

function BoardCacheRoot:UpdateAlbumFireEffect(rewardType)
  AlbumModel.UpdateFireCardEffect(self, rewardType, self.m_iconImg.transform, V3Zero, 1)
end

function BoardCacheRoot:OnBubbleShow(reward)
  if self.m_adaptiveRewardBubble then
    self.m_adaptiveRewardBubble:Init(reward)
    self.m_adaptiveRewardBubble:Show(self.m_bubbleRootRect, nil, nil, nil, nil, true, 3)
    UIUtil.SetLocalPosition(self.m_adaptiveRewardBubble.transform, 0)
  end
end
