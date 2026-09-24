BaseActionBoardView = setmetatable({}, BaseBoardView)
BaseActionBoardView.__index = BaseActionBoardView

function BaseActionBoardView:Init(boardModel)
  BaseBoardView.Init(self, boardModel)
  REGISTER_BOARD_EVENT_HANDLER(self, "CollectItem")
end

function BaseActionBoardView:_UpdateIndicator(item, playAnimation)
  self.m_selectedBoardPosition = item and item:GetPosition()
  self.m_indicator:UpdateIndicator(item, playAnimation)
  self:_ShowItemCollectableTipForSelected(item, playAnimation)
end

function BaseActionBoardView:ClearIndicator()
  BaseActionBoardView._UpdateIndicator(self)
end

function BaseActionBoardView:GetSelectedItemModel()
  return self.m_selectedBoardPosition and self.m_model:GetItem(self.m_selectedBoardPosition)
end

function BaseActionBoardView:_ShowItemCollectableTipForSelected(item, show)
  if self.m_itemCollectableTipItem == item then
    return
  end
  self:_TryHideItemCollectableTip()
  if not self:_CanShowItemCollectableTip(self:GetSelectedItemModel()) or not show then
    self.m_itemCollectableTipItem = nil
    return
  end
  self.m_itemCollectableTipItem = item
  self:_ShowItemCollectableTip(item, true)
end

function BaseActionBoardView:_ShowItemCollectableTipForNew(item)
  if self.m_cachedItemCollectableTip ~= nil or not self:_CanShowItemCollectableTip(item) then
    return
  end
  if self:_ShouldHideItemCollectableTip() then
    return
  end
  self:_ShowItemCollectableTip(item, false)
end

function BaseActionBoardView:_ShouldHideItemCollectableTip()
  if self.gameObject:IsNull() or GM.SceneManager:GetGameMode() ~= self.m_model:GetGameMode() then
    return true
  end
  if not GM.UIManager.allWindowClosed then
    return true
  end
  return false
end

function BaseActionBoardView:_GetItemCollectableTipSortingOrder()
  return ItemCollectableTipSortingOrder
end

function BaseActionBoardView:_ShowItemCollectableTip(item, isSelected)
  local prefabConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.ItemCollectableTip)
  self.m_cachedItemCollectableTip = true
  GM.ResourceLoader:LoadPrefab(prefabConfig, GM.UIManager:GetCanvasRoot(), Vector3.zero, function(go)
    if isSelected and item ~= self:GetSelectedItemModel() then
      go:RemoveSelf()
      return
    end
    if self:_ShouldHideItemCollectableTip() then
      go:RemoveSelf()
      return
    end
    local screenPos = self:ConvertBoardPositionToScreenPosition(item:GetPosition())
    local worldPos = PositionUtil.UICameraScreen2World(screenPos)
    go.transform.position = worldPos + Vector3(0, BaseBoardModel.TileSize / 2 - 20, 0)
    UIUtil.SetLocalPosition(go.transform, nil, nil, 0)
    local tip = go:GetLuaTable()
    tip.canvas.sortingOrder = self:_GetItemCollectableTipSortingOrder()
    self.m_cachedItemCollectableTip = tip
    tip:Show(item:GetType(), function()
      self.m_cachedItemCollectableTip = nil
    end, function()
      return self:_ShouldHideItemCollectableTip()
    end, self.m_model:GetGameMode())
  end)
end

function BaseActionBoardView:_TryHideItemCollectableTip()
  if self.m_cachedItemCollectableTip ~= nil and self.m_cachedItemCollectableTip ~= true and not UIUtil.IsEmptyComponent(self.m_cachedItemCollectableTip) then
    self.m_cachedItemCollectableTip:Hide()
    self.m_cachedItemCollectableTip = nil
  end
end

function BaseActionBoardView:_CanShowItemCollectableTip(item)
  if not item then
    return false
  end
  local itemCollectable = item:GetComponent(ItemCollectable)
  return itemCollectable and itemCollectable:IsSuperRewards()
end

function BaseActionBoardView:_OnJumpFinished(itemView)
  self:_ShowItemCollectableTipForNew(itemView:GetModel())
end

function BaseActionBoardView:_OnCollectItem(message, customData)
  local itemCollectable = message.Source:GetComponent(ItemCollectable)
  local rewards = itemCollectable:GetRewards()
  local sfxs = {
    [EPropertyType.Gold] = AudioFileConfigName.SfxMergeCollectCoins,
    [EPropertyType.Gem] = AudioFileConfigName.SfxMergeCollectDiamond,
    [EPropertyType.Experience] = AudioFileConfigName.SfxMergeCollectExperience,
    [EPropertyType.Energy] = AudioFileConfigName.SfxMergeCollectEnergy,
    [EPropertyType.EnergyInfiniteTime] = AudioFileConfigName.SfxMergeCollectEnergy
  }
  local sfx = sfxs[rewards[1][PROPERTY_TYPE]] or AudioFileConfigName.SfxMergeCollectEnergy
  GM.AudioModel:PlayEffect(sfx)
  local itemView = self:GetItemView(message.Source)
  if not itemView then
    return
  end
  local worldPosition = itemView.transform.position
  local screenPosition = self:ConvertWorldPositionToScreenPosition(worldPosition)
  local uiWorldPosition = PositionUtil.UICameraScreen2World(screenPosition)
  GM.PropertyDataManager:PlayCollectAnimation(rewards, uiWorldPosition, customData)
  itemView.toBeRemoved = true
  itemView.transform:DOScale(Vector3.zero, 0.2):OnComplete(function()
    self:_RemoveItemViewByView(itemView)
  end)
  if itemCollectable:IsSuperRewards() then
    self:_PlayCollectItemTextAnimation(itemCollectable, screenPosition)
    self:_UpdateIndicator(nil, false)
  end
end

function BaseActionBoardView:_PlayCollectItemTextAnimation(itemCollectableCmp, screenPosition)
  local reward = itemCollectableCmp:GetRewards()[1]
  local rewardType = reward[PROPERTY_TYPE]
  local rewardNum = reward[PROPERTY_COUNT]
  local promptStyle = rewardType == EPropertyType.Energy and EPromptStyle.CollectableEnergy or EPromptStyle.CollectableGem
  GM.UIManager:ShowPrompt("+" .. rewardNum, screenPosition, 0, promptStyle)
  local uiWorldPosition = PositionUtil.UICameraScreen2World(screenPosition)
  local prefabConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.effect_superRewards)
  GM.ResourceLoader:LoadPrefab(prefabConfig, GM.UIManager:GetCanvasRoot(), uiWorldPosition, function(go)
    UIUtil.SetLocalPosition(go.transform, nil, nil, 0)
    UIUtil.SetLocalScale(go.transform, 1.23, 1.23)
  end)
end

function BaseActionBoardView:OnDestroy()
  BaseBoardView.OnDestroy(self)
  self:_TryHideItemCollectableTip()
  local window = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.ItemCollectConfirmWindow)
  if window ~= nil then
    window:Close()
  end
end
