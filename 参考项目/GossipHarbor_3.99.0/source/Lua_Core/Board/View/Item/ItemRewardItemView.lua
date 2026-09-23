ItemRewardItemView = setmetatable({}, BaseItemViewComponent)
ItemRewardItemView.__index = ItemRewardItemView

function ItemRewardItemView:Init(itemCollectable)
  self.m_rewardItem:Init(itemCollectable:GetRewards()[1])
  self.m_rewardItem:HideTipButton()
end
