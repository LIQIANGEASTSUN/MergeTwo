FixedOrderConfig = {}
FixedOrderConfig.__index = FixedOrderConfig

function FixedOrderConfig.Create(config)
  local orderConfig = setmetatable({}, FixedOrderConfig)
  orderConfig:Init(config)
  return orderConfig
end

function FixedOrderConfig:Init(config)
  self.id = config.orderId
  self.rewards = ConfigUtil.GetCurrencyFromArrStr(config.reward)
  self.avatar = config.avatar
  self.chainId = config.chainId
  local conditions = Table.ShallowCopy(config.condition)
  for k, v in ipairs(conditions) do
    if StringUtil.StartWith(v, "lv-") then
      conditions[k] = {
        type = OrderCondition.Level,
        val = tonumber(string.sub(v, 4))
      }
    elseif StringUtil.StartWith(v, "item-") then
      conditions[k] = {
        type = OrderCondition.Item,
        val = string.sub(v, 6)
      }
    elseif StringUtil.StartWith(v, "order-") then
      conditions[k] = {
        type = OrderCondition.Order,
        val = string.sub(v, 7)
      }
    else
      Log.Assert(false, "\232\174\162\229\141\149\232\167\166\229\143\145\230\157\161\228\187\182\229\188\130\229\184\184 " .. config.condition)
    end
  end
  self.condition = conditions
  local requirements = Table.ShallowCopy(config.need) or {}
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.ItemChange) then
    for i, v in ipairs(requirements) do
      local change = ItemChangeHelper.ChangeItemCode(v, true)
      if change ~= nil then
        requirements[i] = change
      end
    end
  end
  self.requirements = requirements
end

MainClearOrderConfig = {}

function MainClearOrderConfig.Create(data)
  local config = {}
  for _, v in ipairs(data) do
    config[v.name] = tonumber(v.value)
  end
  return config
end

BaseRandomOrderConfig = {}
BaseRandomOrderConfig.__index = BaseRandomOrderConfig

function BaseRandomOrderConfig:Init(data)
  for _, v in ipairs(data) do
    self[v.name] = tonumber(v.value) or v.value
  end
  for i = 1, 3 do
    local rangeKey = "rewardRange" .. i
    local weightKey = "rewardWeight" .. i
    self[rangeKey] = StringUtil.SplitToNum(self[rangeKey], ",")
    self[weightKey] = ConfigUtil.GetRewardWeightFromStr(self[weightKey])
  end
  self.rewardWeight2MaxLevel = ConfigUtil.GetRewardWeightFromStr(self.rewardWeight2MaxLevel)
  self.rewardWeight3MaxLevel = ConfigUtil.GetRewardWeightFromStr(self.rewardWeight3MaxLevel)
end

RandomOrderConfig = setmetatable({}, BaseRandomOrderConfig)
RandomOrderConfig.__index = RandomOrderConfig

function RandomOrderConfig.Create(data)
  local config = setmetatable({}, RandomOrderConfig)
  config:Init(data)
  return config
end

function RandomOrderConfig:GetMaxNum()
  return self.totalNum
end
