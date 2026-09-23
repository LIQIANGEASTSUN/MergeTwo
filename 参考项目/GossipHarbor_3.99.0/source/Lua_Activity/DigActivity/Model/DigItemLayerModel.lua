DigItemLayerModel = setmetatable({}, BaseUIItemLayerModel)
DigItemLayerModel.__index = DigItemLayerModel

function DigItemLayerModel.Create(boardModel, dbTable, itemManager)
  local itemLayerModel = setmetatable({}, DigItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager)
  return itemLayerModel
end
