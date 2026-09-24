BaseMainActivityOrder = setmetatable({bIsActOrder = true}, BaseOrder)
BaseMainActivityOrder.__index = BaseMainActivityOrder

function BaseMainActivityOrder._Create(class, boardModel, id, requirements, rewards, startTime)
  local order = setmetatable({}, class)
  order:Init(boardModel, id, requirements, rewards, OrderType.Random, startTime)
  return order
end

function BaseMainActivityOrder:GetRewards(forStorage)
  if forStorage then
    return self.m_rewards
  end
  local rewards = {}
  Table.ListAppend(rewards, self.m_rewards)
  self:_AppendActivityRewards(GM.MainBoardModel:GetOrderModel(), rewards)
  return rewards
end

function BaseMainActivityOrder:GetAvatarName()
  return nil
end
