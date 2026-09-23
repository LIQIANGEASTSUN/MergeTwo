AdventureActivityBoardView = setmetatable({}, BaseUIBoardView)
AdventureActivityBoardView.__index = AdventureActivityBoardView

function AdventureActivityBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityDefinition = AdventureActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames,
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames,
    [ItemType.ObstacleClear] = self.m_activityDefinition.ObstacleClearNames
  }
  BaseUIBoardView.Init(self, boardModel)
  self.m_paperBoxCollapseDelay = 0
  local cacheRoot = self:GetCacheRoot()
  local binTrans = self:GetBinGo().transform
  if self.m_model:IsEnergyModuleOpen() then
    cacheRoot.transform.anchoredPosition = Vector2(-276, 0)
    binTrans.anchoredPosition = Vector2(-449.18, 0)
    binTrans.localScale = Vector3(0.9, 0.9, 0.9)
    cacheRoot.transform.localScale = Vector3(0.9, 0.9, 0.9)
  else
    cacheRoot.transform.anchoredPosition = Vector2(0, 0)
    binTrans.anchoredPosition = Vector2(336, 0)
    binTrans.localScale = Vector3.one
    cacheRoot.transform.localScale = Vector3.one
  end
end

function AdventureActivityBoardView:Update()
  if self.m_paperBoxCollapseDelay ~= 0 then
    self.m_paperBoxCollapseDelay = 0
  end
  BaseUIBoardView.Update(self)
end

function AdventureActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function AdventureActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return AdventureActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function AdventureActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function AdventureActivityBoardView:_OnSwallowItem(message)
  BaseUIBoardView._OnSwallowItem(self, message)
  local toolItemChain = GM.ItemDataModel:GetChain(self.m_activityDefinition.ToolItemChain)
  if message.Source:GetType() ~= toolItemChain[#toolItemChain] then
    return
  end
  local swallowItemType = message.Target:GetType()
  local itemSwallow = message.Target:GetComponent(ItemSwallow)
  if itemSwallow:AllowTap() then
    local action = {
      itemType = swallowItemType,
      transformType = message.Target:GetComponent(ItemTransform):GetCodeWeightPairs()[1].Code
    }
    GM.BIManager:LogAction(self.m_activityDefinition.UseWshopBIType, action)
  else
    local action = {
      itemType = swallowItemType,
      finishedCount = itemSwallow:GetSwallowInfo()[1].Swallowed,
      targetCount = itemSwallow:GetSwallowInfo()[1].Count
    }
    GM.BIManager:LogAction(self.m_activityDefinition.UseTopToolBIType, action)
  end
end

function AdventureActivityBoardView:_OnCollapseItem(message)
  if message.Source:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:SetEventLock(true, self)
    DOVirtual.DelayedCall(self.m_paperBoxCollapseDelay, function()
      GM.UIManager:SetEventLock(false, self)
      BaseUIBoardView._OnCollapseItem(self, message)
    end)
  else
    BaseUIBoardView._OnCollapseItem(self, message)
  end
end

function AdventureActivityBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function AdventureActivityBoardView:_OnTransformItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
  end
  local delay = 0
  local itemSwallow = message.Source:GetComponent(ItemSwallow)
  if itemSwallow ~= nil and not itemSwallow:AllowTap() then
    delay = 1.5
  end
  self:_DoTransformItem(message, delay)
  self.m_paperBoxCollapseDelay = delay
end

function AdventureActivityBoardView:CanItemDelete(itemModel)
  return self.m_model:CanItemSell(itemModel)
end

function AdventureActivityBoardView:BinClickPrompt()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  mainWindow:ShowBinTextTip()
end

function AdventureActivityBoardView:CantDeletePrompt(itemModel)
  DOVirtual.DelayedCall(ItemView.MoveDuration, function()
    local itemView = self:GetItemView(itemModel)
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_cannot_delete", screenPosition)
  end)
end

function AdventureActivityBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.ActivateBinBIType)
end

function AdventureActivityBoardView:ConvertWorldPositionToUIWorldPosition(position)
  return AdventureActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(position)
end

function AdventureActivityBoardView:ConvertUIWorldPositionToWorldPosition(position)
  return AdventureActivityBoardContainer.GetInstance():ConvertUIWorldPositionToWorldPosition(position)
end

function AdventureActivityBoardView:GetFogLockPrefabName()
  if self.m_activityDefinition.FogLockPrefabName == nil then
    return BaseUIBoardView.GetFogLockPrefabName(self)
  end
  return self.m_activityDefinition.FogLockPrefabName
end
