ItemDigState = {Spread = 0, Dig = 1}
DigFailedReason = {NoToken = 1, BoardFull = 2}
ItemDigEventType = {ProgressChanged = 1}
ItemDig = setmetatable({canMove = false}, BaseItemComponent)
ItemDig.__index = ItemDig

function ItemDig.Create(itemConfig)
  local itemDig = setmetatable({}, ItemDig)
  itemDig:Init(itemConfig)
  return itemDig
end

function ItemDig:Init(itemConfig)
  self.event = PairEvent.Create(self)
  local arrStr = StringUtil.Split(itemConfig.Type, "_")
  local level = arrStr[#arrStr]
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
    local model = HuntActivityModel.GetActiveModel()
    if model and model:OnLackHuntDigToken() then
      return
    end
    local mainWindow = GM.UIManager:GetOpenedViewByName(HuntActivityDefinition[model:GetType()].MainWindowPrefabName)
    if not (mainWindow and mainWindow.OnPropClicked) or mainWindow:OnPropClicked() then
    end
    return
  end
  local position = boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
  if position == nil then
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
  boardModel:ConsumeProp(1, self.m_itemModel:GetType())
  local itemTransform = self.m_itemModel:GetComponent(ItemTransform)
  itemTransform:Transform(true)
  EventDispatcher.DispatchEvent(EEventType.ItemDig)
end

function ItemDig:OnRemoved()
  local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
  if itemSpread ~= nil and itemSpread:GetItemRestNumber() == 0 and itemSpread:GetTransformNumber() == nil then
    self.m_itemModel:GetBoardModel():ShockNearby(self.m_itemModel)
  end
end

function ItemDig:_NotifyDigFailed(reason)
  local boardModel = self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.DigFailed, {
    Item = self.m_itemModel,
    Reason = reason
  })
  EventDispatcher.DispatchEvent(EEventType.VibrationHeavy)
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
