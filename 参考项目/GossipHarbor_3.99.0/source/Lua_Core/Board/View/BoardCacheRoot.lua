BoardCacheRoot = {}
BoardCacheRoot.__index = BoardCacheRoot

function BoardCacheRoot:Init(boardView)
  self.m_boardView = boardView
  self.m_iconRectTrans = self.m_iconImg.transform
  self.m_iconOriginScale = self.m_iconRectTrans.localScale
  self.m_arrowOriginY = self.m_arrowRectTrans.localPosition.y
  self.m_shownState = true
  self.m_originalState = self.gameObject.activeSelf
  self:UpdateContent()
  EventDispatcher.AddListener(EEventType.CacheItems, self, self.OnCachedItemsChanged)
  EventDispatcher.AddListener(EEventType.PopCachedItem, self, self.OnCachedItemsChanged)
  EventDispatcher.AddListener(EEventType.ChangeCachedItems, self, self.OnCachedItemsChanged)
  EventDispatcher.AddListener(EEventType.PopActivityCacheProperty, self, self.OnCachedItemsChanged)
  EventDispatcher.AddListener(EEventType.Exclamation, self, self.PlayAnimation)
end

function BoardCacheRoot:OnDestroy()
  EventDispatcher.RemoveTarget(self)
end

function BoardCacheRoot:OnCachedItemsChanged(msg)
  self:UpdateContent()
end

function BoardCacheRoot:GetCachedItemWorldPos()
  return self.m_iconImg.transform.position
end

BoardCacheRoot.ActivityCacheType = {Album = 1}

function BoardCacheRoot:UpdateActivityCacheData()
  self.m_arrActivityPropertyCacheData = {}
  if self.m_boardView ~= MainBoardView.GetInstance() then
    return 0
  end
  local AlbumModel = GM.ActivityManager:GetStartedAlbumActivity()
  if AlbumModel ~= nil then
    local topProperty, totalCount = AlbumModel:GetTopCachePropertyAndTotalNum()
    if topProperty ~= nil then
      table.insert(self.m_arrActivityPropertyCacheData, {
        type = BoardCacheRoot.ActivityCacheType.Album,
        topPropertyType = topProperty,
        totalCount = totalCount
      })
    end
  end
end

function BoardCacheRoot:UseActivityProperty()
  local topCacheData = self.m_arrActivityPropertyCacheData and self.m_arrActivityPropertyCacheData[1]
  if topCacheData == nil then
    return
  end
  if topCacheData.type == BoardCacheRoot.ActivityCacheType.Album then
    local AlbumModel = GM.ActivityManager:GetStartedAlbumActivity()
    if AlbumModel ~= nil then
      AlbumModel:ConsumeActivityCardPack(topCacheData.topPropertyType)
    end
  end
  self:UpdateContent()
  EventDispatcher.DispatchEvent(EEventType.PopActivityCacheProperty)
end

function BoardCacheRoot:_GetAcitivtyTotalCacheCount()
  local totalCount = 0
  for _, data in ipairs(self.m_arrActivityPropertyCacheData) do
    totalCount = totalCount + data.totalCount
  end
  return totalCount
end

function BoardCacheRoot:UpdateGameObjectActive()
  self.gameObject:SetActive(self.m_shownState and self.m_originalState)
end

function BoardCacheRoot:UpdateContent()
  local cachedItemsCount = self.m_boardView:GetModel():GetCachedItemCount()
  self:UpdateActivityCacheData()
  local activityItemsCount = self:_GetAcitivtyTotalCacheCount()
  if 0 < activityItemsCount then
    self.m_originalState = true
    self:UpdateGameObjectActive()
    local iconName = RewardApi.GetRewardIconNameAndIsSetNativeSize(self.m_arrActivityPropertyCacheData[1].topPropertyType)
    SpriteUtil.SetImage(self.m_iconImg, iconName, true)
    self.m_countText.text = activityItemsCount + cachedItemsCount
    self.m_countBg:SetActive(1 < activityItemsCount + cachedItemsCount)
    self.m_displayItemType = self.m_arrActivityPropertyCacheData[1].topPropertyType
  elseif 0 < cachedItemsCount then
    if self.m_displayItemType == nil then
      self.m_originalState = true
      self:UpdateGameObjectActive()
    end
    local frontCachedItem = self.m_boardView:GetModel():GetCachedItem(1)
    Log.Assert(frontCachedItem ~= nil, "frontCachedItem\228\184\141\232\131\189\228\184\186\231\169\186")
    local displayItemType = ItemModelFactory.GetInnerType(frontCachedItem)
    if self.m_displayItemType ~= displayItemType then
      self.m_displayItemType = displayItemType
      if self.m_displayItemType == EPropertyType.JokerCommonCard or self.m_displayItemType == EPropertyType.JokerGoldenCard then
        SpriteUtil.SetImage(self.m_iconImg, EPropertySpriteBig[self.m_displayItemType], true)
      else
        SpriteUtil.SetImage(self.m_iconImg, GM.ItemDataModel:GetSpriteName(displayItemType), true)
      end
    end
    self.m_countText.text = cachedItemsCount
    self.m_countBg:SetActive(1 < cachedItemsCount)
  elseif self.m_displayItemType ~= nil then
    self.m_displayItemType = nil
    if self.gameObject.activeSelf then
      EventDispatcher.DispatchEvent(EEventType.BoardCacheRootTurnToHide)
    end
    self.m_originalState = false
    self:UpdateGameObjectActive()
  end
end

function BoardCacheRoot:OnClicked()
  if not self.gameObject.activeSelf then
    return
  end
  EventDispatcher.DispatchEvent(EEventType.BoardCacheRootClicked)
  if #self.m_arrActivityPropertyCacheData > 0 then
    self:UseActivityProperty()
    return
  end
  if not self.m_boardView:GetModel():PopCachedItem() then
    self:_PromptFullBoard()
  end
end

function BoardCacheRoot:PlayAnimation()
  if not self.gameObject.activeSelf then
    return
  end
  self.m_iconRectTrans.localScale = self.m_iconOriginScale
  self.m_iconImg.transform:DOScale(0.95, 0.3):SetLoops(4, LoopType.Yoyo)
  UIUtil.SetLocalPosition(self.m_arrowRectTrans, nil, self.m_arrowOriginY)
  self.m_arrowRectTrans:DOAnchorPosY(self.m_arrowRectTrans.localPosition.y - 15, 1):SetLoops(2, LoopType.Yoyo):SetEase(Ease.Linear)
end

function BoardCacheRoot:_PromptFullBoard()
  GM.UIManager:ShowPromptWithKey("hint_board_full", self.m_boardView:ConvertWorldPositionToScreenPosition(self.transform.position + Vector3(0, 100, 0)))
end

function BoardCacheRoot:SetHandEffectActive(active)
  UIUtil.SetActive(self.m_handEffectGo, active)
end

function BoardCacheRoot:GetOriginalPosition()
  return self.transform.position
end

function BoardCacheRoot:Hide()
  self.m_shownState = false
  self:UpdateGameObjectActive()
end

function BoardCacheRoot:Show()
  self.m_shownState = true
  self:UpdateGameObjectActive()
end

function BoardCacheRoot:IsCacheInView()
  return MainBoardView.GetInstance() and MainBoardView.GetInstance():GetOrderArea() and MainBoardView.GetInstance():GetOrderArea():OrderIsInView(self.m_iconImg.transform)
end
