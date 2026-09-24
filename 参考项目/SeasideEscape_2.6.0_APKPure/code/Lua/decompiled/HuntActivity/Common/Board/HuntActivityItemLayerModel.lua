HuntActivityItemLayerModel = setmetatable({}, BaseUIBoardItemLayerModel)
HuntActivityItemLayerModel.__index = HuntActivityItemLayerModel

function HuntActivityItemLayerModel.Create(boardModel, dbTable, itemManager, initCodeMap)
  local itemLayerModel = setmetatable({}, HuntActivityItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  return itemLayerModel
end

function HuntActivityItemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  BaseUIBoardItemLayerModel.Init(self, boardModel, dbTable, itemManager, initCodeMap)
  self.m_mapCobwebCount = {}
end

function HuntActivityItemLayerModel:GetBoardModelClass()
  return HuntActivityBoardModel
end

function HuntActivityItemLayerModel:SetItem(position, item, bLoading, noAnimation, bUpdateCobwebCount)
  if not position:IsValid() then
    if item then
      GM.BIManager:LogProject(EBIProjectType.HuntSetItemError, {
        pos = position:ToString(),
        id = item:GetId(),
        code = item:GetCode()
      })
    end
    return
  end
  local originalItem = self:GetItem(position)
  if originalItem then
    self:_OnItemChange(originalItem:GetType(), false)
  end
  local itemId = item and item:GetId()
  self.m_dbTable:Set(position:GetX() .. "_" .. position:GetY(), "itemId", itemId)
  self.m_items:SetValueOnPosition(position, itemId)
  if item then
    self:_OnItemChange(item:GetType(), true)
  end
  if bUpdateCobwebCount ~= false then
    self:_UpdateCobwebCountMap(originalItem, item)
  end
  if not bLoading then
    EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {pos = position, NoAnimation = noAnimation})
  end
end

function HuntActivityItemLayerModel:_UpdateCobwebCountMap(oldItem, newItem)
  local oldCobWeb = oldItem and oldItem:GetComponent(ItemCobweb)
  if oldCobWeb then
    local innerCode = oldCobWeb:GetInnerItemCode()
    self.m_mapCobwebCount[innerCode] = self.m_mapCobwebCount[innerCode] - 1
  end
  local newCobWeb = newItem and newItem:GetComponent(ItemCobweb)
  if newCobWeb then
    local innerCode = newCobWeb:GetInnerItemCode()
    self.m_mapCobwebCount[innerCode] = (self.m_mapCobwebCount[innerCode] or 0) + 1
  end
end

function HuntActivityItemLayerModel:IsCobwebNeed(code)
  return 0 < (self.m_mapCobwebCount[code] or 0) - (self.m_itemTypeCountMap[code] or 0)
end

function HuntActivityItemLayerModel:UpdateLockedEmptyPositionCount()
  self.m_lockedEmptyPositionCount = 0
  self.m_mapCobwebCount = {}
  for position in self.m_boardModel.GetValidPositionIterator() do
    if self.m_boardModel:IsTileLock(position) then
      if self.m_boardModel:GetItem(position, true) == nil then
        self.m_lockedEmptyPositionCount = self.m_lockedEmptyPositionCount + 1
      end
    else
      self:_UpdateCobwebCountMap(nil, self.m_boardModel:GetItem(position))
    end
  end
end
