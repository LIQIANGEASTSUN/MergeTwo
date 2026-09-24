EActTokenAcquireType = {
  Merge = "merge",
  CostEnergy = "costenergy",
  FinishOrder = "order",
  ShopItem = "shopItem",
  Bubble = "bubble",
  Spread = "spread"
}
EFlyElementLabelStyle = {
  Default = {
    topColor = CSColor(1, 0.9411764705882353, 0, 1),
    bottomColor = CSColor(1, 0.5647058823529412, 0, 1),
    size = 60,
    outlineColor = CSColor(0.7058823529411765, 0.03529411764705882, 0.03529411764705882, 1),
    shadowColor = CSColor(0.8980392156862745, 0.3176470588235294, 0, 1),
    outlineDis = Vector2(2, 2),
    shadowDis = Vector2(0, -3)
  },
  Hunt = {
    topColor = CSColor(1, 0.9411764705882353, 0, 1),
    bottomColor = CSColor(1, 0.5647058823529412, 0, 1),
    size = 50,
    outlineColor = CSColor(0.7058823529411765, 0.03529411764705882, 0.03529411764705882, 1),
    shadowColor = CSColor(0.8980392156862745, 0.3176470588235294, 0, 1),
    outlineDis = Vector2(2, 2),
    shadowDis = Vector2(0, -3)
  },
  Single = {
    topColor = CSColor(1, 0.9294117647058824, 0.4470588235294118, 1),
    bottomColor = CSColor(1, 0.9294117647058824, 0.4470588235294118, 1),
    size = 60,
    outlineColor = CSColor(0.7176470588235294, 0.34901960784313724, 0.0784313725490196, 1),
    shadowColor = CSColor(0.7176470588235294, 0.34901960784313724, 0.0784313725490196, 1),
    outlineDis = Vector2(2, 2),
    shadowDis = Vector2(1, -1)
  },
  Double = {
    topColor = CSColor(0.48627450980392156, 1, 0.9686274509803922, 1),
    bottomColor = CSColor(0.48627450980392156, 1, 0.9686274509803922, 1),
    size = 60,
    outlineColor = CSColor(0.0392156862745098, 0.4823529411764706, 0.5607843137254902, 1),
    shadowColor = CSColor(0.0392156862745098, 0.4823529411764706, 0.5607843137254902, 1),
    outlineDis = Vector2(2, 2),
    shadowDis = Vector2(1, -1)
  },
  Quadruple = {
    topColor = CSColor(1, 0.48627450980392156, 0.788235294117647, 1),
    bottomColor = CSColor(1, 0.48627450980392156, 0.788235294117647, 1),
    size = 60,
    outlineColor = CSColor(0.6274509803921569, 0.16470588235294117, 0.6, 1),
    shadowColor = CSColor(0.6274509803921569, 0.16470588235294117, 0.6, 1),
    outlineDis = Vector2(2, 2),
    shadowDis = Vector2(1, -1)
  },
  EightFold = {
    topColor = CSColor(0.5843137254901961, 1, 0.47843137254901963, 1),
    bottomColor = CSColor(1, 0.3568627450980392, 0.9921568627450981, 1),
    size = 60,
    outlineColor = CSColor(0.7176470588235294, 0.0784313725490196, 0.5137254901960784, 1),
    shadowColor = CSColor(0.7176470588235294, 0.0784313725490196, 0.5137254901960784, 1),
    outlineDis = Vector2(2, 2),
    shadowDis = Vector2(1, -1)
  }
}
for k, v in pairs(EFlyElementLabelStyle) do
  v.__index = v
end
local DefaultViewData = {specialFloat = true, noDelayTime = true}
DefaultViewData.__index = DefaultViewData
ActivityTokenHelper = {}
ActivityTokenHelper.__index = ActivityTokenHelper
local DB_KEY_COST_ENERGY = "ath_ce"
local DB_KEY_RANDOM_ENERGY = "ath_re"
local DB_KEY_ORDER_SCORE_PREFIX = "ath_o_"

function ActivityTokenHelper.Create(model, dbTable, tokenType, flyLabelStyle, styleFunc, viewDataParam)
  local helper = setmetatable({}, ActivityTokenHelper)
  helper:Init(model, dbTable, tokenType, flyLabelStyle, styleFunc, viewDataParam)
  return helper
end

function ActivityTokenHelper:Init(model, dbTable, tokenType, flyLabelStyle, styleFunc, viewDataParam)
  self.m_tokenType = tokenType
  self.m_model = model
  self.m_dbTable = dbTable
  self:_AddEventListener()
  self.m_arrMergeCfgs = {}
  self.m_arrOrderCfgs = {}
  self.m_arrShopItemCfgs = {}
  self.m_arrBuyBubbleCfgs = {}
  self.m_bIsValid = false
  self.m_labelStyle = flyLabelStyle
  self.m_labelStyleFunc = styleFunc
  self.m_viewDataParam = setmetatable(viewDataParam or {}, DefaultViewData)
  self.m_viewDataParam.__index = self.m_viewDataParam
  if not self.m_model.CanAddOrderScore or self.m_model.CanAddOrderScore == BaseActivityModel.CanAddOrderScore then
    function self.m_model.CanAddOrderScore(model, orderType)
      return self:CanAddOrderScore(orderType)
    end
  end
  if not self.m_model.GetOrderRewardScore or self.m_model.GetOrderRewardScore == BaseActivityModel.GetOrderRewardScore then
    function self.m_model.GetOrderRewardScore(model, orderType, orderId)
      return self:GetOrderRewardScore(orderType, orderId)
    end
  end
end

function ActivityTokenHelper:LoadConfig(arrConfigs)
  self.m_costEnergyCfg = nil
  self.m_spreadCfg = nil
  for k, _ in pairs(self.m_arrMergeCfgs) do
    self.m_arrMergeCfgs[k] = nil
  end
  for k, _ in pairs(self.m_arrOrderCfgs) do
    self.m_arrOrderCfgs[k] = nil
  end
  for k, _ in pairs(self.m_arrShopItemCfgs) do
    self.m_arrShopItemCfgs[k] = nil
  end
  for k, _ in pairs(self.m_arrBuyBubbleCfgs) do
    self.m_arrBuyBubbleCfgs[k] = nil
  end
  if Table.IsEmpty(arrConfigs) then
    self.m_bIsValid = false
    return
  end
  for _, v in pairs(arrConfigs) do
    if v.type == EActTokenAcquireType.CostEnergy then
      self.m_costEnergyCfg = v
      if GameConfig.IsTestMode() and v.ratio then
        Log.Error("\228\184\141\230\148\175\230\140\129\231\154\132token\232\142\183\229\143\150\233\133\141\231\189\174\230\150\185\229\188\143:costEnergy+ratio, \230\180\187\229\138\168\231\177\187\229\158\139:" .. self.m_model:GetType())
      end
    elseif v.type == EActTokenAcquireType.Spread then
      self.m_spreadCfg = v
      if GameConfig.IsTestMode() and v.ratio then
        Log.Error("\228\184\141\230\148\175\230\140\129\231\154\132token\232\142\183\229\143\150\233\133\141\231\189\174\230\150\185\229\188\143:spread+ratio, \230\180\187\229\138\168\231\177\187\229\158\139:" .. self.m_model:GetType())
      end
    elseif v.type == EActTokenAcquireType.Merge then
      self.m_arrMergeCfgs[#self.m_arrMergeCfgs + 1] = v
    elseif v.type == EActTokenAcquireType.FinishOrder then
      self.m_arrOrderCfgs[#self.m_arrOrderCfgs + 1] = v
    elseif v.type == EActTokenAcquireType.ShopItem then
      self.m_arrShopItemCfgs[#self.m_arrShopItemCfgs + 1] = v
    elseif v.type == EActTokenAcquireType.Bubble then
      self.m_arrBuyBubbleCfgs[#self.m_arrBuyBubbleCfgs + 1] = v
    end
  end
  self.m_bIsValid = self.m_costEnergyCfg ~= nil or self.m_spreadCfg ~= nil or self.m_arrMergeCfgs[1] ~= nil or self.m_arrOrderCfgs[1] ~= nil or self.m_arrShopItemCfgs[1] ~= nil or self.m_arrBuyBubbleCfgs[1] ~= nil
end

function ActivityTokenHelper:IsValid()
  return self.m_bIsValid
end

function ActivityTokenHelper:_AddEventListener()
  EventDispatcher.AddListener(EEventType.ConsumeEnergy, self, self._OnEnergyCosumed)
  EventDispatcher.AddListener(EEventType.ItemMerged, self, self._OnItemMerge)
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
  EventDispatcher.AddListener(EEventType.ShopBuy, self, self._OnShopBuy)
  EventDispatcher.AddListener(EEventType.BuyBubble, self, self._OnBuyBubble)
  EventDispatcher.AddListener(EEventType.ItemSpread, self, self._OnItemSpread)
end

function ActivityTokenHelper:Destroy()
  EventDispatcher.RemoveTarget(self)
end

function ActivityTokenHelper:_OnItemSpread(msg)
  if self.m_spreadCfg == nil or not self.m_model:CanAddScore() then
    return
  end
  if not (msg and msg.Cost) or msg.Cost == 0 then
    return
  end
  if not msg.New then
    return
  end
  local level = GM.ItemDataModel:GetChainLevel(msg.New:GetType())
  local coefficient = self:_GetAddScore(self.m_spreadCfg)
  local add = math.floor(coefficient * 2 ^ (level - 1))
  if 0 < add then
    GM.BIManager:LogAcquire(self.m_tokenType, add, EBIType.ProduceItem, true, nil)
    self.m_model:AcquireActivityToken(add)
    local boardView = GM.ModeViewController:GetNoCDTrainBoardView() or MainBoardView.GetInstance()
    local uiWorldPosition = PositionUtil.UICameraScreen2World(boardView:ConvertBoardPositionToScreenPosition(msg.New:GetPosition()))
    self:PlayAcquireAnim(uiWorldPosition, add, EActTokenAcquireType.Spread, msg.num, not self.m_viewDataParam.followNewItem)
  end
end

function ActivityTokenHelper:_OnItemMerge(msg)
  if self.m_arrMergeCfgs[1] == nil or not self.m_model:CanAddScore() then
    return
  end
  local score = GM.MainBoardModel:GetItemScoreByUnlockGen(msg.New:GetCode())
  if score == nil then
    return
  end
  local add = 0
  for _, v in pairs(self.m_arrMergeCfgs) do
    if score >= v.param.min and score < v.param.max then
      add = self:_GetAddScore(v, score)
      break
    end
  end
  if 0 < add then
    GM.BIManager:LogAcquire(self.m_tokenType, add, EBIType.MergeItem, true, nil)
    self.m_model:AcquireActivityToken(add)
    local boardView = GM.ModeViewController:GetNoCDTrainBoardView() or MainBoardView.GetInstance()
    local uiWorldPosition = PositionUtil.UICameraScreen2World(boardView:ConvertBoardPositionToScreenPosition(msg.New:GetPosition()))
    self:PlayAcquireAnim(uiWorldPosition, add, nil, nil, true)
  end
end

function ActivityTokenHelper:_OnEnergyCosumed(msg)
  if self.m_costEnergyCfg == nil or not self.m_model:CanAddScore() then
    return
  end
  local num = msg.num
  local originCost = self.m_dbTable:GetValue(DB_KEY_COST_ENERGY, DB_VALUE_KEY)
  originCost = tonumber(originCost) or 0
  num = originCost + num
  local add = 0
  local min = self.m_costEnergyCfg.param.min
  local max = self.m_costEnergyCfg.param.max
  if not max or min == max then
    while num >= min do
      num = num - min
      add = add + self:_GetAddScore(self.m_costEnergyCfg)
    end
  else
    local rdVal = self.m_dbTable:GetValue(DB_KEY_RANDOM_ENERGY, DB_VALUE_KEY)
    rdVal = tonumber(rdVal) or 0
    if rdVal == 0 then
      rdVal = math.floor(math.random() * (max - min) + min)
    end
    while originCost < rdVal and num >= rdVal do
      num = num - max
      originCost = 0
      add = add + self:_GetAddScore(self.m_costEnergyCfg)
      rdVal = math.floor(math.random() * (max - min) + min)
    end
    if 0 < add then
      self.m_dbTable:Set(DB_KEY_RANDOM_ENERGY, DB_VALUE_KEY, rdVal)
    end
  end
  if getmetatable(self.m_dbTable) == DBTable then
    self.m_dbTable:Set(DB_KEY_COST_ENERGY, DB_VALUE_KEY, tostring(num))
  else
    self.m_dbTable:Set(DB_KEY_COST_ENERGY, DB_VALUE_KEY, num)
  end
  if 0 < add then
    GM.BIManager:LogAcquire(self.m_tokenType, add, EBIType.CostEnergy, true, nil)
    self.m_model:AcquireActivityToken(add)
    local boardView = GM.ModeViewController:GetNoCDTrainBoardView() or MainBoardView.GetInstance()
    local boardPos = self.m_viewDataParam.followNewItem and msg.newItemPos or msg.pos
    local uiWorldPosition = PositionUtil.UICameraScreen2World(boardView:ConvertBoardPositionToScreenPosition(boardPos))
    self:PlayAcquireAnim(uiWorldPosition, add, EActTokenAcquireType.CostEnergy, msg.num, not self.m_viewDataParam.followNewItem)
  end
end

function ActivityTokenHelper:_OnShopBuy(msg)
  if self.m_arrShopItemCfgs[1] == nil or not self.m_model:CanAddScore() then
    return
  end
  if msg.shopData.costType ~= EPropertyType.Gem or not string.match(msg.shopData.itemCode, ItemCodePrefix.MainItem) then
    return
  end
  local cost = msg.shopData.price
  local add = 0
  for _, v in pairs(self.m_arrShopItemCfgs) do
    if cost >= v.param.min and cost < v.param.max then
      add = self:_GetAddScore(v, cost)
      break
    end
  end
  if 0 < add then
    GM.BIManager:LogAcquire(self.m_tokenType, add, EBIType.ShopItem, true, nil)
    self.m_model:AcquireActivityToken(add)
    self:PlayAcquireAnim(msg.uiWorldPos or Vector3.zero, add)
  end
end

function ActivityTokenHelper:_OnBuyBubble(msg)
  if self.m_arrBuyBubbleCfgs[1] == nil or not self.m_model:CanAddScore() then
    return
  end
  local gem = msg.cost
  local itemModel = msg.source
  local add = 0
  for _, v in pairs(self.m_arrBuyBubbleCfgs) do
    if gem >= v.param.min and gem < v.param.max then
      add = self:_GetAddScore(v, gem)
      break
    end
  end
  if 0 < add then
    GM.BIManager:LogAcquire(self.m_tokenType, add, EBIType.BuyBuddle, true, nil)
    self.m_model:AcquireActivityToken(add)
    local boardView = GM.ModeViewController:GetNoCDTrainBoardView() or MainBoardView.GetInstance()
    local uiWorldPosition = PositionUtil.UICameraScreen2World(boardView:ConvertBoardPositionToScreenPosition(itemModel:GetPosition()))
    uiWorldPosition.z = 0
    self:PlayAcquireAnim(uiWorldPosition, add)
  end
end

function ActivityTokenHelper:PlayAcquireAnim(uiWorldPosition, add, type, num, bNewLayout)
  uiWorldPosition.z = 0
  local viewData = setmetatable({
    arrWorldPos = {uiWorldPosition}
  }, self.m_viewDataParam)
  if type and self.m_labelStyleFunc then
    viewData.floatLabel = setmetatable({
      text = "+" .. add
    }, self.m_labelStyleFunc(type, num))
  elseif self.m_labelStyle then
    viewData.flyCount = 1
    viewData.floatLabel = setmetatable({
      text = "+" .. add
    }, self.m_labelStyle)
  end
  if self.m_viewDataParam.showDelay then
    DelayExecuteFunc(function()
      RewardApi.AcquireRewardsInView({
        {
          [PROPERTY_TYPE] = self.m_tokenType,
          [PROPERTY_COUNT] = add
        }
      }, viewData, nil, bNewLayout)
    end, self.m_viewDataParam.showDelay)
  else
    RewardApi.AcquireRewardsInView({
      {
        [PROPERTY_TYPE] = self.m_tokenType,
        [PROPERTY_COUNT] = add
      }
    }, viewData, nil, bNewLayout)
  end
end

function ActivityTokenHelper:IsTargetOrderType(orderType)
  return orderType == OrderType.Random or orderType == OrderType.Lane or orderType == OrderType.Recall or orderType == OrderType.Insure
end

function ActivityTokenHelper:CanAddOrderScore(orderType)
  if self.m_arrOrderCfgs[1] == nil or not self.m_model:CanAddScore() then
    return false
  end
  if self.m_model.IsTargetOrderType == BaseActivityModel.IsTargetOrderType then
    return self:IsTargetOrderType(orderType)
  else
    return self.m_model:IsTargetOrderType(orderType)
  end
end

function ActivityTokenHelper:GetOrderRewardScore(orderScore, orderId)
  local dbID = DB_KEY_ORDER_SCORE_PREFIX .. orderId
  local token = tonumber(self.m_dbTable:GetValue(dbID, DB_VALUE_KEY)) or 0
  if 0 < token then
    return token
  end
  for _, v in pairs(self.m_arrOrderCfgs) do
    if orderScore >= v.param.min and orderScore < v.param.max then
      token = self:_GetAddScore(v, orderScore)
      self.m_dbTable:Set(dbID, DB_VALUE_KEY, token)
      return token
    end
  end
  return -1
end

function ActivityTokenHelper:_OnOrderFinished(msg)
  local id = msg.order:GetId()
  self.m_dbTable:Remove(DB_KEY_ORDER_SCORE_PREFIX .. id)
end

function ActivityTokenHelper:_GetAddScore(config, num)
  if config.ratio then
    if config.rounding then
      local num = math.floor(config.ratio * num / config.rounding) * config.rounding
      return num >= config.rounding and num or config.rounding
    else
      return math.floor(config.ratio * num)
    end
  elseif #config.points == 1 then
    return config.points[1].num
  else
    return Table.ListWeightSelectOne(config.points).num
  end
end

function ActivityTokenHelper:IsAcquireTypeValid(type)
  if type == EActTokenAcquireType.CostEnergy then
    return self.m_costEnergyCfg ~= nil
  elseif type == EActTokenAcquireType.FinishOrder then
    return self.m_arrOrderCfgs[1] ~= nil
  elseif type == EActTokenAcquireType.Merge then
    return self.m_arrMergeCfgs[1] ~= nil
  elseif type == EActTokenAcquireType.ShopItem then
    return self.m_arrShopItemCfgs[1] ~= nil
  elseif type == EActTokenAcquireType.Bubble then
    return self.m_arrBuyBubbleCfgs[1] ~= nil
  elseif type == EActTokenAcquireType.Spread then
    return self.m_spreadCfg ~= nil
  end
end
