HuntMapActivityItemLayerModel = setmetatable({}, BaseUIBoardItemLayerModel)
HuntMapActivityItemLayerModel.__index = HuntMapActivityItemLayerModel

function HuntMapActivityItemLayerModel.Create(boardModel, dbTable, itemManager, initCodeMap)
  local itemLayerModel = setmetatable({}, HuntMapActivityItemLayerModel)
  itemLayerModel:Init(boardModel, dbTable, itemManager, initCodeMap)
  return itemLayerModel
end

function HuntMapActivityItemLayerModel:GetBoardModelClass()
  return HuntMapActivityBoardModel
end
