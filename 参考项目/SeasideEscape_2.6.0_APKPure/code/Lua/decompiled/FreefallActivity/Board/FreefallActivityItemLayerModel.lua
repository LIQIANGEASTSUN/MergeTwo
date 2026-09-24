FreefallActivityItemLayerModel = setmetatable({}, BaseUIBoardItemLayerModel)
FreefallActivityItemLayerModel.__index = FreefallActivityItemLayerModel

function FreefallActivityItemLayerModel.Create(boardModel, dbTable, itemManager, initCodeMap)
  local itemLayerModel = setmetatable({}, FreefallActivityItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  return itemLayerModel
end

function FreefallActivityItemLayerModel:GetBoardModelClass()
  return FreefallActivityBoardModel
end

function FreefallActivityItemLayerModel:SetItem(position, item, bLoading)
  if not position:IsValid() then
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
  if not bLoading then
    EventDispatcher.DispatchEvent(EEventType.HuntUpdateTileBG, {pos = position})
  end
end
