ItemCollectable = setmetatable({}, BaseItemComponent)
ItemCollectable.__index = ItemCollectable

function ItemCollectable.Create(rewardsConfig, itemMode)
  local itemCollectable = setmetatable({}, ItemCollectable)
  itemCollectable:Init(rewardsConfig, itemMode)
  return itemCollectable
end

function ItemCollectable:Init(rewardsConfig, itemMode)
  self.m_rewards = rewardsConfig
  self.m_bIsSuperRewards = itemMode == EItemMode.SuperRewards
end

function ItemCollectable:IsSuperRewards()
  return self.m_bIsSuperRewards
end

function ItemCollectable:OnTap()
  if GM.TutorialModel:GetOngoingDatas(ETutorialId.Inventory) == "1" then
    return
  end
  if self:IsSuperRewards() and self.m_itemModel:GetMergedType() ~= nil then
    if GM.UIManager:IsViewOpen(UIPrefabConfigName.ItemCollectConfirmWindow) then
      return
    end
    GM.UIManager:OpenView(UIPrefabConfigName.ItemCollectConfirmWindow, self.m_itemModel:GetType(), function()
      self:_OnTap()
    end, self:GetGameMode())
  else
    self:_OnTap()
  end
end

function ItemCollectable:_OnTap()
  local rewards = self:GetRewards()
  local boardModel = self.m_itemModel:GetBoardModel()
  local chainId = GM.ItemDataModel:GetChainId(self.m_itemModel:GetType())
  local model
  if string.match(chainId, "^hunt%d*_*score_") then
    for activityType, _ in pairs(HuntActivityDefinition) do
      local huntModel = GM.ActivityManager:GetModel(activityType)
      if huntModel:GetState() == ActivityState.Started then
        model = huntModel
        break
      end
    end
  end
  if model ~= nil then
    local curLevel, isFinish = model:GetProgressLevelByScore(model:GetDigScore())
    if isFinish then
      local function filter(itemModel)
        if boardModel:IsTileLock(itemModel:GetPosition()) then
          return false
        end
        local itemSwallow = itemModel:GetComponent(ItemSwallow)
        return itemSwallow and itemSwallow:CanSwallow(self.m_itemModel)
      end
      
      local itemModels = boardModel:FilterItems(filter)
      if not Table.IsEmpty(itemModels) then
        HuntActivityBoardView.GetInstance():_DoBatchSwallowItem({
          Sources = {
            self.m_itemModel
          },
          Target = itemModels[1]
        }, function()
          GM.UIManager:SetEventLock(true)
        end, function()
          GM.UIManager:SetEventLock(false)
        end)
        HuntActivityBoardView.GetInstance():ClearIndicator()
        return
      end
      GM.UIManager:ShowPromptWithKey("hunt_maxscore_notice")
      return
    end
  end
  local biType = self:IsSuperRewards() and EBIType.SuperItemCollect or EBIType.ItemCollect
  if rewards[1][PROPERTY_TYPE] == "skip" then
    boardModel:SkipItems(self.m_itemModel, rewards[1][PROPERTY_COUNT])
    GM.BIManager:LogAcquire(rewards[1][PROPERTY_TYPE], rewards[1][PROPERTY_COUNT], biType, true)
  elseif StringUtil.StartWith(rewards[1][PROPERTY_TYPE], "albumPack") then
    local rewardItems = {
      {
        [PROPERTY_TYPE] = rewards[1][PROPERTY_TYPE],
        [PROPERTY_COUNT] = 1
      }
    }
    RewardApi.AcquireRewardsLogic(rewardItems, EPropertySource.Give, biType, CacheItemType.Stack, nil, nil, self:GetGameMode())
    GM.UIManager:OpenView(UIPrefabConfigName.RewardWindow, rewardItems, nil, true)
    EventDispatcher.DispatchEvent(EEventType.HuntAlbumCollect, {
      item = self.m_itemModel
    })
  elseif self.m_rewards[1][PROPERTY_TYPE] ~= HuntActivityModel.MineScoreType then
    GM.PropertyDataManager:Acquire(rewards, EPropertySource.Give, biType, self:GetGameMode())
  else
    GM.BIManager:LogAcquire(self.m_rewards[1][PROPERTY_TYPE], self.m_rewards[1][PROPERTY_COUNT], biType, true, self:GetGameMode())
  end
  boardModel:RemoveItem(self.m_itemModel)
  boardModel.event:Call(BoardEventType.CollectItem, {
    Source = self.m_itemModel
  })
  EventDispatcher.DispatchEvent(EEventType.BoardCollect, {Rewards = rewards})
  local goldCount
  for _, v in pairs(rewards) do
    if v[PROPERTY_TYPE] == EPropertyType.Gold then
      goldCount = v[PROPERTY_COUNT]
      EventDispatcher.DispatchEvent(EEventType.CollectGold, {count = goldCount})
    end
  end
  if self.m_itemModel:GetType() == ItemType.Coin05 or self.m_itemModel:GetType() == ItemType.Energy05 then
    GM.OperBIManager:TrackEvent(EOperBIEventType.collect_item)
  end
end

function ItemCollectable:GetRewards()
  return self.m_rewards
end
