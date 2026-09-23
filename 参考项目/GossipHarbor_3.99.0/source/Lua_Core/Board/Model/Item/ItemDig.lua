ItemDigState = {Spread = 0, Dig = 1}
DigFailedReason = {NoToken = 1, BoardFull = 2}
ItemDigEventType = {ProgressChanged = 1}
ItemDig = setmetatable({}, BaseItemComponent)
ItemDig.__index = ItemDig

function ItemDig.Create(itemConfig)
  local itemDig = setmetatable({}, ItemDig)
  itemDig:Init(itemConfig)
  return itemDig
end

function ItemDig:Init(itemConfig)
  self.event = PairEvent.Create(self)
  local decodetemp = StringUtil.Split(itemConfig.Type, "_")
  local level = decodetemp[#decodetemp]
  self.m_state = math.floor(level % 2)
  self.m_curLevel = math.floor(level / 10 % 10)
  self.m_maxLevel = itemConfig.Dig_MaxLevel
  self.m_deleted = false
end

function ItemDig:OnTap()
  if self.m_state == ItemDigState.Spread then
    return
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  if not boardModel:IsPropEnoughToDig() then
    self:_NotifyDigFailed(DigFailedReason.NoToken)
    return
  end
  local position = boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
  if position == nil and not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.AutoSpreadToCache) then
    self:_NotifyDigFailed(DigFailedReason.BoardFull)
    return
  end
  self.m_deleted = true
  self.event:Call(ItemDigEventType.ProgressChanged)
  self.m_state = ItemDigState.Spread
  EventDispatcher.DispatchEvent(EEventType.ItemDigOnTap)
end

function ItemDig:OnDig()
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel:ConsumeProp(-1, self.m_itemModel:GetType())
  local itemTransform = self.m_itemModel:GetComponent(ItemTransform)
  itemTransform:Transform()
  EventDispatcher.DispatchEvent(EEventType.ItemDig)
end

function ItemDig:Update()
  local boardModel = self.m_itemModel:GetBoardModel()
  local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
  if itemSpread ~= nil then
    if itemSpread:GetTransformNumber() ~= nil and itemSpread:GetTransformNumber() == itemSpread:GetSpreadCount() then
      local newItem = self.m_itemModel:GetComponent(ItemTransform):Transform(false, true)
      if newItem:GetComponent(ItemDig) == nil then
        boardModel:ShockNeighborItems(self.m_itemModel:GetPosition())
      end
    end
    if itemSpread:GetItemRestNumber() == 0 and itemSpread:GetTransformNumber() == nil then
      boardModel:RemoveItem(self.m_itemModel)
      boardModel.event:Call(BoardEventType.CollapseItem, {
        Source = self.m_itemModel
      })
      boardModel:ShockNeighborItems(self.m_itemModel:GetPosition())
    end
  end
end

function ItemDig:_NotifyDigFailed(reason)
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.DigFailed, {
    Item = self.m_itemModel,
    Reason = reason
  })
  EventDispatcher.DispatchEvent(EEventType.VibrationHeavy)
  if reason == DigFailedReason.NoToken then
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
  end
end

function ItemDig:GetCurLevel()
  return self.m_curLevel
end

function ItemDig:GetMaxLevel()
  return self.m_maxLevel
end

function ItemDig:GetState()
  return self.m_state
end

function ItemDig:CanDig()
  local boardModel = self.m_itemModel:GetBoardModel()
  if not boardModel:IsPropEnoughToDig() then
    return false
  end
  local position = boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
  if position == nil then
    return false
  end
  return true
end

function ItemDig:IsDeleted()
  return self.m_deleted
end
