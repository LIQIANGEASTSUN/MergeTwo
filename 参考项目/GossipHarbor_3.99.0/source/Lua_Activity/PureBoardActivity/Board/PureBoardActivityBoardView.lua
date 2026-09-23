PureBoardActivityBoardView = setmetatable({}, BaseUIBoardView)
PureBoardActivityBoardView.__index = PureBoardActivityBoardView

function PureBoardActivityBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityDefinition = PureBoardActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames,
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames
  }
  BaseUIBoardView.Init(self, boardModel)
  self.m_paperBoxCollapseDelay = 0
  EventDispatcher.AddListener(EEventType.PureBoardFlyMergeLineReward, self, self._CreateFlyItemView)
end

function PureBoardActivityBoardView:Update()
  if self.m_paperBoxCollapseDelay ~= 0 then
    self.m_paperBoxCollapseDelay = 0
  end
  BaseUIBoardView.Update(self)
end

function PureBoardActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function PureBoardActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return PureBoardActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function PureBoardActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function PureBoardActivityBoardView:_OnSwallowItem(message)
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

function PureBoardActivityBoardView:_OnCollapseItem(message)
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

function PureBoardActivityBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function PureBoardActivityBoardView:_OnTransformItem(message)
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

function PureBoardActivityBoardView:CanItemDelete(itemModel)
  return self.m_model:CanItemSell(itemModel)
end

function PureBoardActivityBoardView:BinClickPrompt()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  mainWindow:ShowBinTextTip()
end

function PureBoardActivityBoardView:CantDeletePrompt(itemModel)
  DOVirtual.DelayedCall(ItemView.MoveDuration, function()
    local itemView = self:GetItemView(itemModel)
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_cannot_delete", screenPosition)
  end)
end

function PureBoardActivityBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.ActivateBinBIType)
end

function PureBoardActivityBoardView:ConvertWorldPositionToUIWorldPosition(position)
  return PureBoardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(position)
end

function PureBoardActivityBoardView:ConvertUIWorldPositionToWorldPosition(position)
  return PureBoardActivityBoardContainer.GetInstance():ConvertUIWorldPositionToWorldPosition(position)
end

function PureBoardActivityBoardView:_CreateFlyItemView(message)
  DelayExecuteFuncInView(function()
    if not message.ToCache then
      local itemView = self:_AddItemView(message.Source)
      itemView.gameObject:SetActive(false)
    end
  end, 0.2, self)
end

function PureBoardActivityBoardView:GetItemPos(itemModel)
  local pos = self.transform:TransformPoint(itemModel:GetLocalPosition())
  return PureBoardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(pos)
end

function PureBoardActivityBoardView:GetCacheRootPos()
  local pos = self.m_cacheRoot.transform.position
  return PureBoardActivityBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(pos)
end

function PureBoardActivityBoardView:OnDestroy()
  if self.m_arrWindowArgs ~= nil then
    for _, args in ipairs(self.m_arrWindowArgs) do
      GM.UIManager:OpenView(UIPrefabConfigName.RewardWindow, args)
    end
    self.m_arrWindowArgs = nil
  end
  BaseUIBoardView.OnDestroy(self)
end

function PureBoardActivityBoardView:GetFogLockPrefabName()
  if self.m_activityDefinition.FogLockPrefabName == nil then
    return BaseUIBoardView.GetFogLockPrefabName(self)
  end
  return self.m_activityDefinition.FogLockPrefabName
end
