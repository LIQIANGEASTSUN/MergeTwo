EItemTokenTriggerType = {
  Produce = "produce",
  Bubble = "bubble",
  Order = "order"
}
ItemToken = setmetatable({}, BaseItemComponent)
ItemToken.__index = ItemToken

function ItemToken.GenerateTokenWhenSpreadItem(code, cost, gameMode)
  local tokens = {}
  for _, v in pairs(ActivityTokenDefinition) do
    tokens[v.DbKey] = _ENV[v.ModelName].TryGenerateItemToken(EItemTokenTriggerType.Produce, code, cost, gameMode)
  end
  return tokens
end

function ItemToken.GetTokenFromItemData(data)
  local tokens
  if not StringUtil.IsNilOrEmpty(data and data.tokens) then
    tokens = json.decode(StringUtil.Replace(data.tokens, "@", ","))
  end
  tokens = tokens or {}
  if not StringUtil.IsNilOrEmpty(data and data.bandToken) then
    tokens.bandToken = data.bandToken
  end
  return tokens
end

function ItemToken.Create(isBubble, tokens)
  local itemToken = setmetatable({}, ItemToken)
  itemToken:Init(isBubble, tokens)
  return itemToken
end

function ItemToken:Init(isBubble, tokens)
  self.m_isBubble = isBubble
  self.m_tokens = tokens
  self.m_isCollected = nil
  EventDispatcher.AddListener(EEventType.BandStateChanged, self, self._OnBandStateChanged)
  EventDispatcher.AddListener(EEventType.BandUpgraded, self, self._OnBandStateChanged)
  EventDispatcher.AddListener(EEventType.BandRewardStateChange, self, self._OnBandStateChanged)
  EventDispatcher.AddListener(EEventType.ActivityDataDropped, self, self._OnActivityDataDropped)
end

function ItemToken:_OnBandStateChanged()
  self:_OnStateChanged(ActivityType.Band)
end

function ItemToken:_OnStateChanged(activityType)
  for actType, _ in pairs(ActivityTokenDefinition) do
    if activityType == actType then
      local model = GM.ActivityManager:GetModel(activityType)
      if not model or not model:CanAddScore() then
        self:_DropToken(activityType)
      end
    end
  end
end

function ItemToken:_OnActivityDataDropped(msg)
  if not msg or not msg.type then
    return
  end
  self:_DropToken(msg.type)
end

function ItemToken:_DropToken(activityType)
  if not activityType or not ActivityTokenDefinition[activityType] then
    return
  end
  if Table.IsEmpty(self.m_tokens) then
    return
  end
  self.m_tokens[ActivityTokenDefinition[activityType].DbKey] = nil
  if self.m_itemModel ~= nil then
    self.m_itemModel:GetBoardModel():SaveItemProperty(self.m_itemModel)
  end
end

function ItemToken:ToSerialization(dbTable)
  dbTable.bandToken = ""
  local info = ""
  if not Table.IsEmpty(self.m_tokens) then
    info = StringUtil.Replace(json.encode(self.m_tokens), ",", "@")
  end
  dbTable.tokens = info
end

function ItemToken:HasAnyToken()
  if self:IsBubble() then
    return true
  end
  if Table.IsEmpty(self.m_tokens) then
    return false
  end
  for activityType, def in pairs(ActivityTokenDefinition) do
    local model = GM.ActivityManager:GetModel(activityType)
    if not StringUtil.IsNilOrEmpty(self.m_tokens[def.DbKey]) and model and model:CanAddScore() then
      return true
    end
  end
  return false
end

function ItemToken:OnRemoved()
  EventDispatcher.RemoveTarget(self)
  if self:IsBubble() or Table.IsEmpty(self.m_tokens) then
    return
  end
  for _, def in pairs(ActivityTokenDefinition) do
    if not StringUtil.IsNilOrEmpty(self.m_tokens[def.DbKey]) then
      _ENV[def.ModelName].AcquireCollectItemScoreLogic(self.m_tokens[def.DbKey])
    end
  end
  self.m_tokens = nil
  self.m_isCollected = true
end

function ItemToken:GetAllToken()
  return self.m_tokens
end

function ItemToken:IsBubble()
  return self.m_isBubble
end

function ItemToken:IsCollected()
  return self.m_isCollected
end
