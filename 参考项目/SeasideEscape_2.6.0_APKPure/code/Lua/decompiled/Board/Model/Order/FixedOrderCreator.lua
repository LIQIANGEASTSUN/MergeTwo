OrderCondition = {
  Level = 1,
  Item = 2,
  Order = 3
}
FixedOrderCreator = {}
FixedOrderCreator.__index = FixedOrderCreator

function FixedOrderCreator.CanCreate(orderModel, config, level)
  for _, v in ipairs(config.condition) do
    if v.type == OrderCondition.Level and level < v.val then
      return false
    elseif v.type == OrderCondition.Item and not GM.ItemDataModel:IsUnlocked(v.val) then
      return false
    elseif v.type == OrderCondition.Order and not orderModel:IsFixedOrderFinished(v.val) then
      return false
    end
  end
  return true
end

MainFixedOrderCreator = setmetatable({}, FixedOrderCreator)

function MainFixedOrderCreator.Create(orderModel, config)
  local id = config.id
  local avatarId
  if config.avatar then
    avatarId = config.avatar
  else
    avatarId = orderModel:GetAvatarId()
  end
  for _, v in pairs(config.requirements) do
    GM.ItemDataModel:SetLocked(v)
  end
  return MainOrder.Create(orderModel:GetBoardModel(), id, config.requirements, config.rewards, nil, OrderType.Fixed, avatarId, GM.GameModel:GetServerTime())
end
