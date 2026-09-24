HuntMapActivityBoardModel = setmetatable({}, BaseUIBoardModel)
HuntMapActivityBoardModel.__index = HuntMapActivityBoardModel
HuntMapActivityBoardModel.DefaultHorizontalTiles = 7
HuntMapActivityBoardModel.DefaultVerticalTiles = 7
HuntMapActivityBoardModel.HorizontalTiles = 7
HuntMapActivityBoardModel.VerticalTiles = 7

function HuntMapActivityBoardModel.Create(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, width, height, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  local boardModel = setmetatable({}, HuntMapActivityBoardModel)
  HuntMapActivityBoardModel.HorizontalTiles = width or HuntMapActivityBoardModel.DefaultHorizontalTiles
  HuntMapActivityBoardModel.VerticalTiles = height or HuntMapActivityBoardModel.DefaultVerticalTiles
  boardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  return boardModel
end

function HuntMapActivityBoardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  BaseUIBoardModel.Init(self, itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  self:_InitHuntBook()
end

function HuntMapActivityBoardModel:GetItemLayerModel()
  return HuntMapActivityItemLayerModel
end

function HuntMapActivityBoardModel.CreateMatrix()
  return BaseBoardModel._CreateMatrix(HuntMapActivityBoardModel)
end

function HuntMapActivityBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(HuntMapActivityBoardModel, x, y)
end

function HuntMapActivityBoardModel.CreatePositionFromLocalPosition(localPositionX, localPositionY)
  return BaseBoardModel._CreatePositionFromLocalPosition(HuntMapActivityBoardModel, localPositionX, localPositionY)
end

function HuntMapActivityBoardModel.GetValidPositionIterator()
  return HuntMapActivityBoardModel._GetValidPositionIterator(HuntMapActivityBoardModel)
end

function HuntMapActivityBoardModel._GetValidPositionIterator(boardClass, x, y)
  local pos
  if x ~= nil and y ~= nil then
    pos = BaseBoardModel._CreatePosition(boardClass, x, y)
  end
  return BaseBoardModel._ValidPositionIterator, boardClass, pos
end

function HuntMapActivityBoardModel:CacheItems(cachedItemCodes, type, cost, itemIdList, notUpdateCache, isTutorialItem)
  BaseUIBoardModel.CacheItems(self, cachedItemCodes, type, cost, itemIdList, notUpdateCache, nil)
end

function HuntMapActivityBoardModel:ShockNearby(item, targetPosition)
  if targetPosition == nil then
    return
  end
  local testPosition, testItem
  for _, direction in ipairs(BaseItemLayerModel.Directions4Way) do
    testPosition = targetPosition + direction
    testItem = self:GetItem(testPosition)
    if testItem ~= nil then
      testItem:DispatchComponentEvent("OnShock")
    end
  end
end

function HuntMapActivityBoardModel:GetGameMode()
  return EGameMode.HuntMap
end

function HuntMapActivityBoardModel:CanMoveRows_Dig(depth)
  local m, n = self.m_activityModel:GetMineMoveRowConfig()
  if depth == #self.m_initCodeMap + 1 then
    return 0
  end
  local OreMinRow = self.VerticalTiles + 1
  for position in self.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      if item:GetComponent(ItemDig) ~= nil then
        OreMinRow = position:GetY()
        break
      else
        local itemCobweb = item:GetComponent(ItemCobweb)
        local itemPaperBox = item:GetComponent(ItemPaperBox)
        if itemCobweb ~= nil or itemPaperBox ~= nil then
          local itemCode = item:GetCode()
          local idx = StringUtil.rFind(itemCode, "#")
          if idx ~= nil then
            itemCode = string.sub(itemCode, idx + 1)
          end
          local config = GM.ItemDataModel:GetModelConfig(itemCode, true)
          if config ~= nil and config.Dig_MaxLevel ~= nil then
            OreMinRow = position:GetY()
            break
          end
        end
      end
    end
  end
  if m > OreMinRow then
    return 0
  else
    return math.min(OreMinRow - n, #self.m_initCodeMap - depth + 1)
  end
end

function HuntMapActivityBoardModel:CanSpreadFirstMerge(itemType)
  return self.m_activityModel and self.m_activityModel:CanSpreadFirstMerge(itemType)
end

function HuntMapActivityBoardModel:TrySpreadFirstMerge(itemType)
  return self.m_activityModel and self.m_activityModel:TrySpreadFirstMerge(itemType)
end

function HuntMapActivityBoardModel:MonsterSpreadItem(itemCodeList, sourceItem, flyItemRoot)
  if Table.IsEmpty(itemCodeList) then
    return
  end
  for index, code in ipairs(itemCodeList) do
    local pos = self:FindEmptyPositionInValidOrder(true)
    local debugInfo
    if pos == nil then
      self:CacheItems({code}, CacheItemType.Stack)
      self.event:Call(BoardEventType.AddMonsterSpreadItem, {
        Code = code,
        FlyItemRoot = flyItemRoot,
        SourceItem = sourceItem,
        Index = index
      })
      GM.BIManager:LogSpread("unpop", code, nil, self:GetGameMode())
    else
      local newItem = self:GenerateItem(pos, code)
      self.event:Call(BoardEventType.AddMonsterSpreadItem, {
        New = newItem,
        FlyItemRoot = flyItemRoot,
        SourceItem = sourceItem,
        Index = index
      })
      debugInfo = {
        id = newItem:GetId()
      }
    end
    GM.BIManager:LogSpread(sourceItem:GetCode(), code, 0, self:GetGameMode(), nil, debugInfo)
  end
  DelayExecuteFunc(function()
    EventDispatcher.DispatchEvent(EEventType.ChangeCachedItems)
  end, math.min(#itemCodeList, 5) * 0.2, self)
end
