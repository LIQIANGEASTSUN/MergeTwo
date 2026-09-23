StickerboardActivityBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type2,
  BoardType = EBoardType.Stickerboard
}, BaseUIBoardModel)
StickerboardActivityBoardModel.__index = StickerboardActivityBoardModel
StickerboardActivityBoardModel.HorizontalTiles = 7
StickerboardActivityBoardModel.VerticalTiles = 7

function StickerboardActivityBoardModel.Create(args)
  local boardModel = setmetatable({}, StickerboardActivityBoardModel)
  boardModel:Init(args)
  return boardModel
end

function StickerboardActivityBoardModel:Init(args)
  BaseUIBoardModel.Init(self, args)
  self.m_obstacleMapModel = StickerboardActivityObstacleMapModel.Create(self.m_activityModel, self)
end

function StickerboardActivityBoardModel:DropData(bLateInit)
  BaseUIBoardModel.DropData(self, bLateInit)
  if self.m_obstacleMapModel ~= nil then
    self.m_obstacleMapModel:Drop()
    self.m_obstacleMapModel = nil
  end
end

function StickerboardActivityBoardModel:CanItemSell(item)
  local chainId = GM.ItemDataModel:GetChainId(item:GetType())
  return GM.ItemDataModel:GetChainProtectLevel(chainId) == nil
end

function StickerboardActivityBoardModel:CheckBoardFulled()
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item == nil then
      return false
    end
    if item:GetComponent(ItemCollectable) ~= nil then
      return false
    end
  end
  if self:FindMergePair() ~= nil then
    return false
  end
  return true
end

function StickerboardActivityBoardModel:IsPropEnoughToDig()
  if self.m_activityModel:GetTokenNum() <= 0 then
    return false
  end
  return true
end

function StickerboardActivityBoardModel:ConsumeProp(num, itemType)
  self.m_activityModel:AddTokenNum(num, itemType)
end

function StickerboardActivityBoardModel:CanItemMove(item)
  if item:GetComponent(ItemDig) ~= nil then
    return false
  end
  if item:GetComponent(ItemPortal) ~= nil then
    return false
  end
  if item:GetComponent(ItemLocked) ~= nil then
    return false
  end
  return BaseUIBoardModel.CanItemMove(self, item)
end

function StickerboardActivityBoardModel:GetObstacleMapModel()
  return self.m_obstacleMapModel
end

function StickerboardActivityBoardModel:ChangeBoard(fileName)
  self.m_initCodeMap = require("Data.Config." .. fileName)
  self.m_maxDepth = #self.m_initCodeMap + 1
  for position in self:GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      self:RemoveItem(item)
      self:_RemoveItemProperty(item)
    end
  end
  self.m_itemLayerModel:ReInitBoard()
  self:_LoadFile(1, 1)
  self:SetCurDepth(self.VerticalTiles + 1)
  self.m_obstacleMapModel:ReInitBoard()
end

function StickerboardActivityBoardModel:_LogCacheItems(info)
  info.boardid = self.m_activityModel:GetCurrentBoardIndex()
  GM.BIManager:LogAction(self.m_activityModel:GetDefinition().CacheItemBIType, info)
end

function StickerboardActivityBoardModel:_LogPopCacheItem(code, cacheitemId)
  GM.BIManager:LogAction(self.m_activityModel:GetDefinition().PopCacheItemBIType, {
    c = code,
    id = cacheitemId,
    boardid = self.m_activityModel:GetCurrentBoardIndex()
  })
end
