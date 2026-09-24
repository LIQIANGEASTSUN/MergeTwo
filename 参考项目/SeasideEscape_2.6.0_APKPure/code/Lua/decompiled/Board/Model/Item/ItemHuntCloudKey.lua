ItemHuntCloudKey = setmetatable({}, BaseItemComponent)
ItemHuntCloudKey.__index = ItemHuntCloudKey

function ItemHuntCloudKey.Create(rewardsConfig, boardModel, itemType)
  local ItemHuntCloudKey = setmetatable({}, ItemHuntCloudKey)
  ItemHuntCloudKey:Init(rewardsConfig, boardModel, itemType)
  return ItemHuntCloudKey
end

function ItemHuntCloudKey:Init(rewardsConfig, boardModel, itemType)
  self.m_rewards = rewardsConfig
  self.m_boardModel = boardModel
  self.m_itemType = itemType
end

function ItemHuntCloudKey:OnTap()
  if self.m_boardModel:IsAllCloudUnlocked() then
    local function filter(itemModel)
      if self.m_boardModel:IsTileLock(itemModel:GetPosition()) then
        return false
      end
      local itemSwallow = itemModel:GetComponent(ItemSwallow)
      return itemSwallow and itemSwallow:CanSwallow(self.m_itemModel)
    end
    
    local itemModels = self.m_boardModel:FilterItems(filter)
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
        self.m_swallowPos = nil
      end)
      HuntActivityBoardView.GetInstance():ClearIndicator()
    end
    return
  end
  if not self.m_boardModel:IsCurrentNeedKeyType(self.m_itemType) then
    return
  end
  self.m_boardModel:TryPushCloudKeyProgress(self.m_itemType, self.m_itemModel)
  self.m_boardModel:RemoveItem(self.m_itemModel)
  self.m_boardModel.event:Call(BoardEventType.HuntKeyCollect, {
    Source = self.m_itemModel
  })
  GM.BIManager:LogUseItem(self.m_itemModel:GetCode(), 1, EBIType.HuntSwallowKey, "cloud", EGameMode.Hunt, "click:item")
end
