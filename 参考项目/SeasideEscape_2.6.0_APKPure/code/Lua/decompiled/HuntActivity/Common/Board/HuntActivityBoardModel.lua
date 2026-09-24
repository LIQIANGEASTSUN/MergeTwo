HuntActivityBoardModel = setmetatable({}, BaseUIBoardModel)
HuntActivityBoardModel.__index = HuntActivityBoardModel
HuntActivityBoardModel.DefaultHorizontalTiles = 6
HuntActivityBoardModel.DefaultVerticalTiles = 8
HuntActivityBoardModel.HorizontalTiles = 6
HuntActivityBoardModel.VerticalTiles = 8

function HuntActivityBoardModel.Create(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, width, height, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  local boardModel = setmetatable({}, HuntActivityBoardModel)
  HuntActivityBoardModel.HorizontalTiles = width or HuntActivityBoardModel.DefaultHorizontalTiles
  HuntActivityBoardModel.VerticalTiles = height or HuntActivityBoardModel.DefaultVerticalTiles
  boardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  return boardModel
end

function HuntActivityBoardModel:Init(itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  BaseUIBoardModel.Init(self, itemDataTable, itemLayerDataTable, itemCacheDataTable, initCodeMap, activityType, cloud, itemTransformLayerDataTable, transformLayerConfig, openMapConfig)
  self:_UpdateCurExtraRewardLayer(not HuntActivityDefinition[self.m_activityType].IsDigType)
end

function HuntActivityBoardModel:GetItemLayerModel()
  return HuntActivityItemLayerModel
end

function HuntActivityBoardModel.CreateMatrix()
  return BaseBoardModel._CreateMatrix(HuntActivityBoardModel)
end

function HuntActivityBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(HuntActivityBoardModel, x, y)
end

function HuntActivityBoardModel.CreatePositionFromLocalPosition(localPositionX, localPositionY)
  return BaseBoardModel._CreatePositionFromLocalPosition(HuntActivityBoardModel, localPositionX, localPositionY)
end

function HuntActivityBoardModel.GetValidPositionIterator()
  return HuntActivityBoardModel._GetValidPositionIterator(HuntActivityBoardModel)
end

function HuntActivityBoardModel._GetValidPositionIterator(boardClass, x, y)
  local pos
  if x ~= nil and y ~= nil then
    pos = BaseBoardModel._CreatePosition(boardClass, x, y)
  end
  return BaseBoardModel._ValidPositionIterator, boardClass, pos
end

function HuntActivityBoardModel:_LogMove(item, from, to)
  GM.BIManager:LogMoveItem(item:GetCode(), item:GetId(), from:ToString(), to:ToString(), EGameMode.Hunt)
end

function HuntActivityBoardModel:_LogSwapFailed(item, targetItem)
  GM.BIManager:LogAction(EBIType.ItemSwapFailed, {
    from = item:GetCode(),
    to = targetItem:GetCode()
  })
end

function HuntActivityBoardModel:_TryUnlockDoubleEnergy(item, targetPosition)
  if not item then
    return
  end
  if not self.m_activityModel then
    return
  end
  local bTrigger, cost = self.m_activityModel:GetDoubleEnergyCostByItem(item:GetCode())
  if not bTrigger then
    return
  end
  local maxUnlock = self.m_activityModel:GetDoubleEnergyModel():GetMaxUnlockEnergyMultiple() or 0
  if cost > 2 ^ maxUnlock then
    self.m_activityModel:TryUnlockMultipleEnergy(cost, HuntDoubleEnergyUnclockType.Merge)
    EventDispatcher.DispatchEvent(EEventType.HuntDoubleEnergyMergeUnlock, {Cost = cost, Position = targetPosition})
  end
end

function HuntActivityBoardModel:_TrySreadExtraItems(source)
  local code = self.m_activityModel:TrySpreadLastKey(source:GetCode())
  if not code then
    return
  end
  local newPos = self:FindEmptyPositionInSpreadOrder(source:GetPosition())
  self:SpreadItem(source, newPos, code, true)
end

function HuntActivityBoardModel:GetGameMode()
  return EGameMode.Hunt
end

function HuntActivityBoardModel:_InitExtraPdUp(config)
  self.m_extraItems = {}
  local index = 2
  local id = "hunt_pd_" .. index
  local item = self.m_itemManager:GetItem(id)
  if item == nil then
    if config.pdUp.initPd then
      item = ItemModelFactory.CreateWithCode(self, nil, config.pdUp.initPd)
      item:SetId(id)
      self:SaveItemProperty(item)
    else
      return
    end
  end
  item:GetComponent(ItemHuntAnim).Index = index
  local pdBoardPos = HuntActivityDefinition[self.m_activityType].HuntPdBoardPos
  Log.Assert(pdBoardPos ~= nil, "HuntActivityBoardModel:_InitExtraPdUp. HuntPdBoardPos is nil")
  local boardPosition = self.CreatePosition(pdBoardPos.x, pdBoardPos.y)
  item:SetPosition(boardPosition)
  self.m_extraItems[index] = item
end

function HuntActivityBoardModel:CanMoveRows(depth)
  local def = HuntActivityDefinition[self.m_activityType]
  if def.IsDigType then
    return self:CanMoveRows_Dig(depth)
  else
    return BaseUIBoardModel.CanMoveRows(self, depth)
  end
end

function HuntActivityBoardModel:CanMoveRows_Dig(depth)
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

function HuntActivityBoardModel:_GetItemInnerType(itemModel)
  local innerType
  local itemCobweb = itemModel:GetComponent(ItemCobweb)
  local itemPaperBox = itemModel:GetComponent(ItemPaperBox)
  local itemGray = itemModel:GetComponent(ItemGray)
  if itemCobweb ~= nil then
    innerType = itemCobweb:GetInnerItemCode()
  end
  if itemPaperBox ~= nil then
    innerType = itemPaperBox:GetInnerItemCode()
  end
  if itemGray ~= nil then
    innerType = itemGray:GetInnerItemCode()
  end
  if innerType ~= nil then
    local idx = StringUtil.rFind(innerType, "#")
    if idx ~= nil then
      innerType = string.sub(innerType, idx + 1)
    end
  end
  return innerType
end

function HuntActivityBoardModel:_TryUnlockMultipleEnergy(orginCost)
  local maxUnlock = self.m_activityModel:GetDoubleEnergyModel():GetMaxUnlockEnergyMultiple() or 0
  if orginCost and orginCost > 2 ^ maxUnlock then
    if self.m_activityModel.TryUnlockMultipleEnergy then
      self.m_activityModel:TryUnlockMultipleEnergy(orginCost, HuntDoubleEnergyUnclockType.CloudUnlock)
    end
    return orginCost
  end
  return
end

function HuntActivityBoardModel:GenerateItem(position, code, cost, bFromSpread, autoUpdateOrderState)
  local newItem = BaseUIBoardModel.GenerateItem(self, position, code, cost, bFromSpread, autoUpdateOrderState)
  self:_TryUnlockDoubleEnergy(newItem, position)
  return newItem
end

function HuntActivityBoardModel:CanSpreadFirstMerge(itemType)
  return self.m_activityModel and self.m_activityModel:CanSpreadFirstMerge(itemType)
end

function HuntActivityBoardModel:TrySpreadFirstMerge(itemType)
  return self.m_activityModel and self.m_activityModel:TrySpreadFirstMerge(itemType)
end

function HuntActivityBoardModel:MonsterSpreadItem(itemCodeList, sourceItem, flyItemRoot, offset, delay, bNotIndexDelay, style)
  if Table.IsEmpty(itemCodeList) then
    return
  end
  for index, code in ipairs(itemCodeList) do
    local pos = self:FindEmptyPositionInValidOrder(true)
    local debugInfo
    if pos == nil then
      self:CacheItems({code}, CacheItemType.Stack)
      if StringUtil.StartWith(code, ItemCodePrefix.PaperBox) then
        code = string.sub(code, 4, #code)
      end
      if StringUtil.StartWith(code, ItemCodePrefix.Cobweb) then
        code = string.sub(code, 3, #code)
      end
      self.event:Call(BoardEventType.AddMonsterSpreadItem, {
        Code = code,
        FlyItemRoot = flyItemRoot,
        SourceItem = sourceItem,
        Index = bNotIndexDelay and 1 or index,
        Offset = offset,
        Delay = delay,
        Style = style
      })
      GM.BIManager:LogSpread("unpop", code, nil, EGameMode.Hunt)
    else
      local newItem = self:GenerateItem(pos, code)
      self.event:Call(BoardEventType.AddMonsterSpreadItem, {
        New = newItem,
        FlyItemRoot = flyItemRoot,
        SourceItem = sourceItem,
        Index = bNotIndexDelay and 1 or index,
        Offset = offset,
        Delay = delay,
        Style = style
      })
      debugInfo = {
        id = newItem:GetId()
      }
    end
    GM.BIManager:LogSpread(sourceItem:GetCode(), code, 0, EGameMode.Hunt, nil, debugInfo)
  end
  DelayExecuteFunc(function()
    EventDispatcher.DispatchEvent(EEventType.ChangeCachedItems)
  end, math.min(#itemCodeList, 5) * 0.2, self)
end
