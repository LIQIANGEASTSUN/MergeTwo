BreakBoardView = setmetatable({}, BaseUIBoardView)
BreakBoardView.__index = BreakBoardView

function BreakBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityDefinition = BreakDefinition[activityType]
  self.m_itemViewSpriteMappings = {
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebName,
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames
  }
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.transform.localPosition = Vector3(boardModel.HorizontalTiles * boardModel.TileSize * -0.5, self.transform.position.y, self.transform.position.z)
  BaseUIBoardView.Init(self, boardModel)
  REGISTER_BOARD_EVENT_HANDLER(self, "DigFailed")
end

function BreakBoardView:ConvertWorldPositionToScreenPosition(position)
  return BreakBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function BreakBoardView:_UpdateTile(tile1Sprite, tile2Sprite)
  for _, tileSprite in pairs(self.m_tileMap) do
    SpriteUtil.SetSpriteRenderer(tileSprite, self.m_activityDefinition.TileImageName)
  end
end

function BreakBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function BreakBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function BreakBoardView:_OnCollectItem(message)
  local rewards = message.Source:GetComponent(ItemCollectable):GetRewards()
  if rewards[1][PROPERTY_TYPE] ~= self.m_activityDefinition.ScoreType then
    BaseUIBoardView._OnCollectItem(self, message)
    GM.AudioModel:PlayEffect(AudioFileConfigName.sfxRewardCollect)
    return
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.sfxRewardCollect)
  local itemView = self:GetItemView(message.Source)
  itemView.toBeRemoved = true
  self:_RemoveItemView(itemView)
  self:_UpdateIndicator()
end

function BreakBoardView:GetItemPos(itemModel)
  local pos = self.transform:TransformPoint(itemModel:GetLocalPosition())
  return BreakBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(pos)
end

function BreakBoardView:GetCacheRootPos()
  local pos = self.m_cacheRoot.transform.position
  return BreakBoardContainer.GetInstance():ConvertWorldPositionToUIWorldPosition(pos)
end

function BreakBoardView:_StartPrompt()
  self:_CancelPrompt()
  if self.m_promptSchedulerOrigin == nil then
    function self.m_promptSchedulerOrigin()
      if GM.TutorialModel:HasAnyStrongTutorialOngoing() or self.m_activityModel:HasViewController() then
        return
      end
      if self.m_promptScheduler then
        Scheduler.Unschedule(self.m_promptScheduler, self)
        self.m_promptScheduler = nil
      end
      
      local function filter(itemModel)
        local itemConfig = GM.ItemDataModel:GetModelConfig(itemModel:GetType())
        if itemConfig ~= nil and itemConfig.CollectRewards ~= nil then
          local CollectRewards = ConfigUtil.GetCurrencyFromArrStr(itemConfig.CollectRewards)
          if CollectRewards[1][PROPERTY_TYPE] == self.m_activityDefinition.ScoreType then
            return true
          end
        end
      end
      
      local itemModels = self.m_model:FilterItems(filter)
      if not Table.IsEmpty(itemModels) then
        local selectedModel = Table.ListRandomSelectOne(itemModels)
        local itemView = self:GetItemView(selectedModel)
        self:ShowHandTapEffect(itemView.transform.position)
      else
        local moneyItem = self.m_model:FindMoneyItem()
        local machineItem = self.m_model:FindMachineItem()
        if moneyItem ~= nil and machineItem ~= nil then
          local moneyView = self:GetItemView(moneyItem)
          local machineView = self:GetItemView(machineItem)
          self:ShowHandDragEffect(moneyView.transform.position, machineView.transform.position)
        else
          self.m_prompt = self:_SelectPrompt()
          if self.m_prompt ~= nil then
            self.m_prompt:Start(self)
          else
            local shoppingItemPrompt = BoardPromptDigItem.Create()
            if shoppingItemPrompt:CanStart(self) then
              self.m_prompt = shoppingItemPrompt
              self.m_prompt:Start(self)
            end
          end
        end
      end
    end
  end
  self.m_promptScheduler = self.m_promptSchedulerOrigin
  Scheduler.Schedule(self.m_promptScheduler, self, 0, 1, 3)
end

function BreakBoardView:_CancelPrompt()
  self:HideHandTapEffect()
  self:HideHandDragEffect()
  BaseUIBoardView._CancelPrompt(self)
end

function BreakBoardView:_OnSpreadItem(message)
  local item = message.Source
  if (StringUtil.StartWith(item:GetCode(), self.m_activityDefinition.MachineItemCodePrefix1) or StringUtil.StartWith(item:GetCode(), self.m_activityDefinition.MachineItemCodePrefix2)) and self.m_activityModel:HasViewController() then
    local sourceItemView = self:GetItemView(message.Source)
    local fromPos = sourceItemView.transform.localPosition
    DelayExecuteFuncInView(function()
      EventDispatcher.DispatchEvent(EEventType.VibrationLight)
      local sfx = self:_GetSpreadAudio(message)
      GM.AudioModel:PlayEffect(sfx)
      local newItemView = self:_AddItemView(message.New)
      if newItemView ~= nil then
        self:_PlayJumpAnimation(newItemView, fromPos, newItemView.transform.localPosition, message.EnergyBoostRatio, message.BoardSpreadType)
      end
    end, 1.08, self)
  else
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    BaseUIBoardView._OnSpreadItem(self, message)
  end
end

function BreakBoardView:GetActivityType()
  return self.m_activityType
end

function BreakBoardView:_OnDigFailed(message)
  local key
  if message.Reason == DigFailedReason.NoToken then
    key = "mineral_dig_hint"
  else
    key = "hint_board_full"
  end
  GM.UIManager:ShowPromptWithKey(key)
end

BreakBoardView.DigItemTransformLockTime = 0.25

function BreakBoardView:_DoTransformItem(message, delay)
  local item = message.Source
  local itemConfig = GM.ItemDataModel:GetModelConfig(item:GetType())
  if StringUtil.StartWith(item:GetCode(), self.m_activityDefinition.MachineItemCodePrefix1) or StringUtil.StartWith(item:GetCode(), self.m_activityDefinition.MachineItemCodePrefix2) then
    local sourceItemView = self:GetItemView(message.Source)
    sourceItemView.toBeRemoved = true
    self:_RemoveItemView(sourceItemView)
    local newItemView = self:_AddItemView(message.New)
    if itemConfig.Spread_Auto == 1 then
      if newItemView ~= nil then
        newItemView.transform.localScale = Vector3.one
        local curItem = newItemView.transform
        local sequence = DOTween.Sequence()
        sequence:AppendInterval(0.06)
        sequence:Append(curItem:DOScale(1.12, 0.13))
        sequence:Append(curItem:DOScale(1, 0.13))
        sequence:AppendInterval(0.63)
        sequence:Append(curItem:DOScale(1.6, 0.14))
        sequence:Append(curItem:DOScale(0.7, 0.12))
        sequence:Append(curItem:DOScale(1.0, 0.08))
      end
    elseif newItemView ~= nil then
      newItemView.transform.localScale = Vector3.one
      local curItem = newItemView.transform
      local sequence = DOTween.Sequence()
      sequence:AppendInterval(0.06)
      sequence:Append(curItem:DOScale(1.12, 0.13))
      sequence:Append(curItem:DOScale(1, 0.13))
      sequence:AppendInterval(0.63)
      sequence:Append(curItem:DOScale(1.6, 0.14))
      sequence:Append(curItem:DOScale(0.7, 0.12))
      sequence:Append(curItem:DOScale(1.0, 0.08))
    end
  elseif message.Source:GetComponent(ItemDig) ~= nil then
    local sourceItemView = self:GetItemView(message.Source)
    sourceItemView.toBeRemoved = true
    self:_RemoveItemView(sourceItemView)
    if sourceItemView == self.m_lastTouchedItem then
      self:_ClearPointerData()
    end
    local newItemView = self:_AddItemView(message.New)
    if newItemView ~= nil then
      newItemView.transform.localScale = Vector3.zero
      local sequence = DOTween.Sequence()
      sequence:InsertCallback(delay, function()
        newItemView.transform.localScale = 0.3 * V3One
      end)
      sequence:Insert(delay, newItemView.transform:DOScale(1.3, 0.2))
      sequence:Insert(delay + 0.2, newItemView.transform:DOScale(1, 0.1))
    end
    local prefabName
    local position = message.Source:GetLocalPositionOverrideZ(0)
    if message.New:GetComponent(ItemDig) == nil then
      GM.UIManager:SetEventLock(true, self)
      DelayExecuteFuncInView(function()
        GM.UIManager:SetEventLock(false, self)
      end, BreakBoardView.DigItemTransformLockTime, self)
      prefabName = self:GetCollapseEffectPrefabName()
    else
      prefabName = self.m_activityDefinition.DigEffectPrefabName
    end
    GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(prefabName), self.transform, position, function(go)
    end)
  else
    BaseUIBoardView._DoTransformItem(self, message, delay)
  end
end

function BreakBoardView:_OnSwallowItem(message)
  local itemCode = message.Source:GetCode()
  if itemCode == self.m_activityDefinition.TopMoneyItemCode then
    self.m_activityModel:SwallowAnim(self:GetItemPos(message.Target))
    GM.BIManager:LogAction(self.m_activityDefinition.ItemSwallowBIType, message.Target:GetType())
  end
  BaseUIBoardView._OnSwallowItem(self, message)
end

function BreakBoardView:OnPointerDown(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  local itemModel
  if self.m_model:IsPositionInteractable(boardPosition) then
    itemModel = self.m_model:GetItem(boardPosition)
  end
  if itemModel ~= nil then
    local forceSourceBoardPosition = GM.TutorialModel:GetForceSourceBoardPosition()
    if forceSourceBoardPosition ~= nil and forceSourceBoardPosition ~= boardPosition then
      return
    end
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  end
  BaseUIBoardView.OnPointerDown(self, worldPosition)
end

function BreakBoardView:CanItemDelete(itemModel)
  return self.m_model:CanDelete(itemModel)
end

function BreakBoardView:CantDeletePrompt()
  GM.UIManager:ShowPromptWithKey("break_cannotdelete_hint")
end
