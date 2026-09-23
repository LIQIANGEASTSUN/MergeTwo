ItemCollectable = setmetatable({}, BaseItemComponent)
ItemCollectable.__index = ItemCollectable

function ItemCollectable.Create(rewardsConfig)
  local itemCollectable = setmetatable({}, ItemCollectable)
  itemCollectable:Init(rewardsConfig)
  return itemCollectable
end

function ItemCollectable:Init(rewardsConfig)
  self.m_rewards = ConfigUtil.GetCurrencyFromArrStr(rewardsConfig)
end

function ItemCollectable:OnTap()
  local cardItemModel = GM.ActivityManager:GetModel(ActivityType.CardItem)
  if cardItemModel:IsCardItemAndMaxLevel(self.m_itemModel:GetType()) then
    GM.UIManager:OpenView(UIPrefabConfigName.CardItemUseConfirmWindow, self, function()
      return self:_OnTap()
    end)
    return
  end
  local specialType = self.m_itemModel:GetSpecialType()
  if specialType == ItemSpecialType.TipCollectable then
    if self.m_bConfirmWindowOpened then
      return
    end
    self.m_bConfirmWindowOpened = true
    GM.UIManager:OpenView(UIPrefabConfigName.CollectItemConfirmWindow, self.m_itemModel, function(confirmed)
      self.m_bConfirmWindowOpened = nil
      if confirmed then
        self:_OnTap()
      end
    end)
  else
    self:_OnTap()
  end
end

function ItemCollectable:_OnTap()
  local checkListDefinition = {
    BreakDefinition,
    DigActivityDefinition
  }
  local boardModel = self.m_itemModel:GetBoardModel()
  local type = self.m_itemModel:GetType()
  local bLog = false
  local generateItemModel
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:RemoveItem(self.m_itemModel)
  if self.m_rewards[1][PROPERTY_TYPE] == "skip" then
    boardModel:SkipItems(self.m_itemModel, self.m_rewards[1][PROPERTY_COUNT])
    GM.BIManager:LogAcquire(self.m_rewards[1][PROPERTY_TYPE], self.m_rewards[1][PROPERTY_COUNT], EBIType.ItemCollect, true, boardModel.BoardType)
  else
    local function checkSpecialFunc(definition)
      for _, de in pairs(definition) do
        if self.m_rewards[1][PROPERTY_TYPE] == de.ScoreType then
          return true
        end
      end
      return false
    end
    
    local isSpecialScore = false
    for _, definition in pairs(checkListDefinition) do
      if checkSpecialFunc(definition) then
        isSpecialScore = true
        break
      end
    end
    if not isSpecialScore then
      if boardModel == GM.MainBoardModel and not boardModel:IsBoardFull() and RewardApi.GetRewardCategoryType(self.m_rewards[1][PROPERTY_TYPE]) == ERewardCategoryType.Item then
        local position = boardModel:FindEmptyPositionInSpreadOrderWithNum(self.m_itemModel:GetPosition(), nil, 1, true)[1]
        generateItemModel = boardModel:GenerateItem(position, self.m_rewards[1][PROPERTY_TYPE])
        GM.BIManager:LogAcquire(self.m_rewards[1][PROPERTY_TYPE], self.m_rewards[1][PROPERTY_COUNT], EBIType.ItemCollect, true, boardModel.BoardType)
      else
        RewardApi.AcquireRewardsLogic(self.m_rewards, EPropertySource.Give, EBIType.ItemCollect, EGameMode.Main, CacheItemType.Type2, boardModel.BoardType)
      end
    else
      GM.BIManager:LogAction(EBIType.RemoveItem, {t = type, s = "tap"})
      bLog = true
    end
  end
  if bLog then
    GM.BIManager:LogAction("CashDash", "remove")
  end
  EventDispatcher.DispatchEvent(EEventType.BoardCollect, {
    Source = type,
    Rewards = self.m_rewards,
    item = self.m_itemModel,
    generateItemModel = generateItemModel
  })
  if bLog then
    GM.BIManager:LogAction("CashDash", "reward")
  end
  boardModel.event:Call(BoardEventType.CollectItem, {
    Source = self.m_itemModel
  })
  if bLog then
    GM.BIManager:LogAction("CashDash", "animate")
  end
  if type == ItemType.Coin05 or type == ItemType.Energy05 then
    GM.OperBIManager:TrackEvent(EOperBIEventType.collect_item)
  end
  GM.ItemDataModel:OnTapCollectable(type)
  return {
    Source = type,
    Rewards = self.m_rewards,
    item = self.m_itemModel,
    generateItemModel = generateItemModel
  }
end

function ItemCollectable:GetRewards()
  return self.m_rewards
end
