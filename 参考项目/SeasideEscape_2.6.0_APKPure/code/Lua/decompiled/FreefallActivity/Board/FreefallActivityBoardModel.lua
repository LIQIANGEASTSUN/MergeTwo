FreefallHandleItemFailedReason = {
  LackToken = "LackToken",
  CannotSwap = "CannotSwap",
  InvalidDragTargetItem = "InvalidDragTargetItem",
  NoValidTargetItem = "NoValidTargetItem",
  NoHitTokenTarget = "NoHitTokenTarget"
}
FreefallActivitySpecialItemType = {
  ChainlevelUp = ItemType.ff_chain_levelup_1,
  RandomlevelUp = ItemType.ff_random_levelup_1
}
local FreefallBoardType = "freefall"
FreefallActivityBoardModel = setmetatable({
  CacheItemType = CacheItemType.Type2,
  BoardType = FreefallBoardType,
  Freefall = true
}, BaseUIBoardModel)
FreefallActivityBoardModel.__index = FreefallActivityBoardModel
FreefallActivityBoardModel.DefaultHorizontalTiles = 6
FreefallActivityBoardModel.DefaultVerticalTiles = 7
FreefallActivityBoardModel.HorizontalTiles = 6
FreefallActivityBoardModel.VerticalTiles = 7

function FreefallActivityBoardModel.Create(args)
  local boardModel = setmetatable({}, FreefallActivityBoardModel)
  boardModel:Init(args)
  return boardModel
end

function FreefallActivityBoardModel:Init(args)
  FreefallActivityBoardModel.HorizontalTiles = not Table.IsEmpty(args.initCodeMap) and #args.initCodeMap[1] or FreefallActivityBoardModel.DefaultHorizontalTiles
  FreefallActivityBoardModel.VerticalTiles = not Table.IsEmpty(args.initCodeMap) and #args.initCodeMap or FreefallActivityBoardModel.DefaultVerticalTiles
  BaseUIBoardModel.Init(self, args.itemDataTable, args.itemLayerDataTable, args.initCodeMap, args.activityType, args.cloud)
  self:UpdateBossItem()
  self:_ChangeTapItemFunc()
  self:_InitFall(args)
end

function FreefallActivityBoardModel:_InitTransformLayer(itemTransformLayerDataTable, transformLayerConfig)
end

function FreefallActivityBoardModel:GetItemLayerModel()
  return FreefallActivityItemLayerModel
end

function FreefallActivityBoardModel:GetActivityModel()
  return self.m_activityModel
end

function FreefallActivityBoardModel:GetItemTransformModel(boardPosition)
  return nil
end

function FreefallActivityBoardModel:ReplaceToTransformLayerItem(sourceItem, targetItem)
end

function FreefallActivityBoardModel:Update(dt)
  if self.m_boardState == BoardState.Stable then
    for position in self.GetValidPositionIterator() do
      local item = self:GetItem(position)
      if item ~= nil then
        item:DispatchComponentEvent("Update")
      end
    end
    if not self.m_extraItems then
      return
    end
    for _, item in pairs(self.m_extraItems) do
      item:DispatchComponentEvent("Update")
    end
    return
  end
  if self.m_boardState == BoardState.Falling then
    self:_DoFall(dt)
  elseif self.m_boardState == BoardState.AutoMerge then
    self:_DoMerge(dt)
  elseif self.m_boardState == BoardState.Settlement then
    self:_DoSettlement(dt)
  end
end

function FreefallActivityBoardModel.CreateMatrix()
  return BaseBoardModel._CreateMatrix(FreefallActivityBoardModel)
end

function FreefallActivityBoardModel.CreatePosition(x, y)
  return BaseBoardModel._CreatePosition(FreefallActivityBoardModel, x, y)
end

function FreefallActivityBoardModel.CreatePositionFromLocalPosition(localPositionX, localPositionY)
  return BaseBoardModel._CreatePositionFromLocalPosition(FreefallActivityBoardModel, localPositionX, localPositionY)
end

function FreefallActivityBoardModel.GetValidPositionIterator()
  return FreefallActivityBoardModel._GetValidPositionIterator(FreefallActivityBoardModel)
end

function FreefallActivityBoardModel._GetValidPositionIterator(boardClass, x, y)
  local pos
  if x ~= nil and y ~= nil then
    pos = BaseBoardModel._CreatePosition(boardClass, x, y)
  end
  return BaseBoardModel._ValidPositionIterator, boardClass, pos
end

function FreefallActivityBoardModel:PopCachedItem(bLongPress)
  if self:IsBoardFull() then
    return false
  end
  local position
  local code = self.m_itemCacheModel:GetItem(1)
  position = self:FindEmptyPositionInAttach(code)
  position = position or self:FindEmptyPositionInValidOrder()
  if position == nil then
    return false
  end
  local cacheId = self.m_itemCacheModel.m_itemIdList[1]
  local code, cost, itemId = self.m_itemCacheModel:PopItem()
  if StringUtil.IsNilOrEmpty(code) then
    GM.BIManager:LogErrorInfo(EBIProjectType.HuntCacheCodeError, "Hunt cache code is nil")
    return false
  end
  local newItem
  if itemId ~= nil then
    newItem = self.m_itemManager:GetItem(itemId)
    if newItem ~= nil then
      self:_SetItem(position, newItem)
      newItem:SetBoardModel(self)
      newItem:SetPosition(position)
    end
  end
  if newItem == nil then
    newItem = self:GenerateItem(position, code)
  end
  local message = {New = newItem, CacheId = cacheId}
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  self.event:Call(BoardEventType.PopCachedItem, message)
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {itf = 0, m = 0}, self:GetGameMode())
  end
  GM.BIManager:LogSpread("pop", code, nil, EGameMode.Hunt, bLongPress and "lpr:1" or nil, {
    id = newItem:GetId()
  })
  return true
end

function FreefallActivityBoardModel:CachePdSpreadItem(bLongPress)
  if self:IsBoardFull() then
    return false
  end
  if self.m_activityModel:GetActivityTokenNumber() <= 0 then
    return
  end
  local position
  local code = self.m_activityModel:GetCachePdSpreadCode()
  position = self:FindEmptyPositionInAttach(code)
  position = position or self:FindEmptyPositionInValidOrder()
  if position == nil then
    return false
  end
  local newItem = self:GenerateItem(position, code)
  local message = {
    New = newItem,
    CacheId = newItem:GetId()
  }
  EventDispatcher.DispatchEvent(EEventType.PopCachedItem, message)
  self.event:Call(BoardEventType.PopCachedItem, message)
  if self:IsBoardFull() then
    GM.BIManager:LogAction(EBIType.BoardFull, {itf = 0, m = 0}, self:GetGameMode())
  end
  GM.BIManager:LogSpread(self.m_activityModel:GetType(), code, nil, EGameMode.Hunt, bLongPress and "lpr:1" or nil, {
    id = newItem:GetId()
  })
  return true
end

function FreefallActivityBoardModel:DragItem(item, targetPosition, index)
  if not targetPosition:IsValid() then
    item:SetPosition(item:GetPosition())
    return
  end
  local sourceItem = self:GetItem(item:GetPosition())
  if sourceItem ~= item then
    item:SetPosition(item:GetPosition())
    return
  end
  local targetItem = self:GetItem(targetPosition)
  if targetItem ~= nil and targetItem ~= item and self:CanItemMerge(item, targetItem) then
    if self.m_activityModel:ConsumeToken() then
      local bossItems = self:FilterItems(function(itemModel)
        return itemModel and itemModel:GetComponent(ItemFreefallBoss) and itemModel:GetComponent(ItemFreefallBoss):IsMainItem()
      end)
      if not Table.IsEmpty(bossItems) then
        for _, v in pairs(bossItems) do
          v:GetComponent(ItemFreefallBoss):ChargeBossSkill()
        end
      end
      EventDispatcher.DispatchEvent(EEventType.FreefallTokenUsed, {num = 1})
      self:_MergeItem(item, targetItem, targetPosition)
      GM.BIManager:LogAction(self.m_activityModel:GetDefinition().BIConsumeToken, {
        srcId = item:GetType(),
        srcPos = tostring(item:GetPosition()),
        dstId = targetItem:GetType(),
        dstPos = tostring(targetItem:GetPosition())
      })
      self:SetBoardState(BoardState.Falling)
    else
      item:SetPosition(item:GetPosition())
      self.event:Call(BoardEventType.HandleItemFailed, {
        Source = item,
        Target = targetItem,
        Reason = FreefallHandleItemFailedReason.LackToken
      })
    end
    return
  end
  local canItemChainLevelup, info = self:_CanItemChainLevelup(item, targetItem)
  if canItemChainLevelup then
    self:_ItemChainLevelup(item, targetItem, targetPosition, info)
    return
  elseif info ~= nil then
    self.event:Call(BoardEventType.HandleItemFailed, {
      Source = item,
      Target = targetItem,
      Reason = info
    })
    item:SetPosition(item:GetPosition())
    return
  end
  if item:GetPosition() ~= targetPosition then
    self.event:Call(BoardEventType.HandleItemFailed, {
      Source = item,
      Target = targetItem,
      Reason = FreefallHandleItemFailedReason.CannotSwap
    })
  end
  item:SetPosition(item:GetPosition())
end

function FreefallActivityBoardModel:_MergeItem(item, targetItem, targetPosition, excludeMergeRewards)
  local itemId = item:GetId()
  self:RemoveItem(item)
  local itemType = item:GetType()
  local mergedType = item:GetMergedType()
  if StringUtil.StartWith(itemType, ItemCodePrefix.Hunt) then
    local lv = GM.ItemDataModel:GetChainLevel(itemType)
    for activityType, _ in pairs(HuntActivityDefinition) do
      local huntModel = GM.ActivityManager:GetModel(activityType)
      if huntModel:GetState() == ActivityState.Started then
        mergedType = GM.ItemDataModel:GetMergedType(huntModel:GetItemCodeByLevel(lv))
      end
    end
  end
  local newItem = self:ReplaceItem(targetItem, mergedType)
  self:ShockNearby(newItem, targetPosition)
  local mergeMessage = {
    Source = item,
    Target = targetItem,
    New = newItem,
    IsHuntActivity = true,
    activityType = self.m_activityType
  }
  self.event:Call(BoardEventType.MergeItem, mergeMessage)
  EventDispatcher.DispatchEvent(EEventType.ItemMerged, mergeMessage)
  local ext = (item:GetComponent(ItemCobweb) ~= nil or targetItem:GetComponent(ItemCobweb) ~= nil) and "cw:1" or nil
  GM.BIManager:LogMerge(item:GetType(), newItem:GetCode(), 0, ext, EGameMode.Hunt, {
    from_id = itemId,
    to_id = targetItem:GetId(),
    new_id = newItem:GetId()
  })
  if not excludeMergeRewards then
    local itemModelConfig = GM.ItemDataModel:GetModelConfig(newItem:GetType())
    if itemModelConfig.MergeRewards ~= nil then
      self:_AcquireHitTargetTokens(itemModelConfig.MergeRewards, targetPosition, 0)
    end
  end
end

function FreefallActivityBoardModel:ShockNearby(item, targetPosition)
  if targetPosition == nil then
    return
  end
  local testPosition, testItem
  for _, direction in ipairs(BaseItemLayerModel.Directions4Way) do
    testPosition = targetPosition + direction
    testItem = self:GetItem(testPosition)
    if testItem ~= nil then
      testItem:DispatchComponentEvent("OnShock", targetPosition)
    end
  end
end

function FreefallActivityBoardModel:GetGameMode()
  return EGameMode.Freefall
end

function FreefallActivityBoardModel:_InitCloud(cloud)
  if not cloud then
    return
  end
  self.m_cloudConfig = cloud
  self.m_cloudState = self.m_activityModel:GetCloudState()
  self.m_cloudSwallowLockState = self.m_activityModel:GetCloudSwallowLockState()
  self.m_tileLock = {}
  self:UpdateTileLock()
end

function FreefallActivityBoardModel:_InitExtraPdItems(config)
end

function FreefallActivityBoardModel:LoadFile(y, depth, bInverse)
  self.m_itemLayerModel:LoadFile(self, self.m_initCodeMap, y, depth, bInverse)
  self:UpdateBossItem(true)
end

function FreefallActivityBoardModel:CanMoveRows_Dig(depth)
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

function FreefallActivityBoardModel:_OnTransformLayerItemScrollUp(rows, position)
end

function FreefallActivityBoardModel:_OnStickerScrolled(item, position)
  return position
end

function FreefallActivityBoardModel:_OnTransformLayerItemScrollDown(rows, position)
end

function FreefallActivityBoardModel:_TryClaimItemStickerReward(item)
end

function FreefallActivityBoardModel:TryPushCloudKeyProgress(itemType, sourceItem)
  BaseUIBoardModel.TryPushCloudKeyProgress(self, itemType, sourceItem, nil)
end

function FreefallActivityBoardModel:TryUnclockCloudByClick()
end

function FreefallActivityBoardModel:TryUnlockCloudByDrag(itemModel)
  return false
end

function FreefallActivityBoardModel:_UpdateSignatureUpgradeInfo()
  if not Table.IsEmpty(self.m_cloudConfig and self.m_cloudConfig.pdUp) then
    local pdUpConfig = self.m_cloudConfig.pdUp
    local sigItem = self:GetExtraItem(2)
    if sigItem == nil then
      self.m_signatureUpgradeLockKey = pdUpConfig[1].unlock
      self.m_signatureNextLevelCode = pdUpConfig[1].code
      self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
      return
    else
      local bFind = false
      local curItemType = sigItem:GetType()
      for _, v in ipairs(pdUpConfig) do
        if bFind then
          self.m_signatureUpgradeLockKey = v.unlock
          self.m_signatureNextLevelCode = v.code
          self.m_bSignatureCanNotUpgrade = self.m_signatureUpgradeLockKey == nil
          return
        end
        if v.code == curItemType then
          bFind = true
        end
      end
    end
  end
  self.m_signatureUpgradeLockKey = nil
  self.m_signatureNextLevelCode = nil
  self.m_bSignatureCanNotUpgrade = true
end

function FreefallActivityBoardModel:TryUpgradeSignature(itemType)
  if self.m_bSignatureCanNotUpgrade then
    return
  end
  if self.m_signatureUpgradeLockKey == nil then
    self:_UpdateSignatureUpgradeInfo()
    if self.m_signatureUpgradeLockKey == nil or self.m_bSignatureCanNotUpgrade then
      return
    end
  end
  if itemType == self.m_signatureUpgradeLockKey then
    local index = 2
    local origin = self.m_extraItems[index]
    local item
    if origin == nil then
      item = ItemModelFactory.CreateWithCode(self, nil, self.m_signatureNextLevelCode)
      item:GetComponent(ItemHuntAnim).Index = index
      item:SetId("hunt_pd_2")
      item:SetPosition(self.CreatePosition(7, 8))
      self:SaveItemProperty(item)
      self.m_extraItems[index] = item
    else
      item = self:ReplaceHuntPdItem(origin, self.m_signatureNextLevelCode, 2)
    end
    self:_UpdateSignatureUpgradeInfo()
    local originItemCode = origin and origin:GetType() or nil
    if originItemCode == nil then
      local newType = item:GetType()
      originItemCode = string.sub(newType, 1, string.find(newType, "_"))
      originItemCode = originItemCode .. "pd0_1"
    end
    GM.BIManager:LogTransform(originItemCode, item:GetType())
    local message = {Old = origin, New = item}
    return message
  end
end

function FreefallActivityBoardModel:_LogSignatureTransform(origin, newItem)
end

function FreefallActivityBoardModel:_InitExtraRewardLayer(openMapConfig)
end

function FreefallActivityBoardModel:_UpdateCurExtraRewardLayer(bInverse)
end

function FreefallActivityBoardModel:GetExtraRewardLayer()
end

function FreefallActivityBoardModel:_AcquireHitTargetTokens(rewards, boardPos, delay)
  RewardApi.AcquireRewardsLogic(rewards, EPropertySource.Give, EBIType.FreefallMergeItemReward, EGameMode.Main, CacheItemType.Type2, FreefallBoardType)
  self.event:Call(BoardEventType.FreefallHitTarget, {
    Rewards = rewards,
    TargetPos = boardPos,
    Delay = delay
  })
end

function FreefallActivityBoardModel:GetBoardState()
  return self.m_boardState
end

function FreefallActivityBoardModel:SetBoardState(state)
  if self.m_boardState ~= state then
    self.m_boardState = state
    EventDispatcher.DispatchEvent(EEventType.BoardStateChanged, self.BoardType)
    self:Update(0)
  end
end

function FreefallActivityBoardModel:Pause()
  if self.m_boardState == BoardState.Stable then
    return
  end
  if not GM.destroying then
    self:_RecordBoardStateRecoveryData()
  end
  if self.m_mapPauseCallbacks == nil then
    self.m_mapPauseCallbacks = {
      [BoardState.Falling] = self._OnPauseFalling,
      [BoardState.AutoMerge] = self._OnPauseAutoMerge
    }
  end
  if self.m_mapPauseCallbacks[self.m_boardState] ~= nil then
    self.m_mapPauseCallbacks[self.m_boardState](self)
  end
  self.m_boardState = BoardState.Stable
end

function FreefallActivityBoardModel:Try2RecoverBoardState()
  local recordDataStr = self.m_activityModel:GetBoardStateRecoveryState()
  if not StringUtil.IsNilOrEmpty(recordDataStr) then
    local recordData = json.decode(recordDataStr)
    self.m_activityModel:SetBoardStateRecoveryState()
    if recordData ~= nil and recordData.state ~= nil then
      self.m_boardState = recordData.state
      if self.m_mapRecoverCallbacks == nil then
        self.m_mapRecoverCallbacks = {
          [BoardState.AutoMerge] = self._RecoverBoardStateAutoMerge
        }
      end
      if self.m_mapRecoverCallbacks[self.m_boardState] ~= nil then
        self.m_mapRecoverCallbacks[self.m_boardState](self, recordData)
      end
      self:Update(0)
    end
  end
end

function FreefallActivityBoardModel:_RecordBoardStateRecoveryData()
  if self.m_boardState == BoardState.Stable then
    self.m_activityModel:SetBoardStateRecoveryState()
    return
  end
  if self.m_mapRecordCallbacks == nil then
    self.m_mapRecordCallbacks = {
      [BoardState.Falling] = self._RecordBoardStateFalling,
      [BoardState.AutoMerge] = self._RecordBoardStateAutoMerge,
      [BoardState.Settlement] = self._RecordBoardStateSettlement
    }
  end
  if self.m_mapRecordCallbacks[self.m_boardState] ~= nil then
    local preData = {
      state = self.m_boardState
    }
    self.m_mapRecordCallbacks[self.m_boardState](self, preData)
    self.m_activityModel:SetBoardStateRecoveryState(json.encode(preData))
  end
end

function FreefallActivityBoardModel:_PreRecordFallingStateRecoveryData()
  local preBoardState = self.m_boardState
  self.m_boardState = BoardState.Falling
  self:_RecordBoardStateRecoveryData()
  self.m_boardState = preBoardState
end

function FreefallActivityBoardModel:_RemoveBoardStateRecoveryData()
  self.m_activityModel:SetBoardStateRecoveryState()
end

function FreefallActivityBoardModel:_InitFall(args)
  self.m_boardState = BoardState.Stable
  self.m_mapFallingItems = {}
  self:_InitSpawnConfig(args)
end

function FreefallActivityBoardModel:_InitSpawnConfig(args)
  self.m_arrSpawnConfig = require("Data.Config." .. args.boardSpawnFileName)
  self.m_mapRound2SpawnConfig = {}
end

function FreefallActivityBoardModel:_DoFall(dt)
  if StringUtil.IsNilOrEmpty(self.m_activityModel:GetBoardStateRecoveryState()) then
    self:_RecordBoardStateRecoveryData()
  end
  for position in self:_GetInverseYValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      item:DispatchComponentEvent("Update", dt)
    end
  end
  self:_CheckFreefallPosition()
  if next(self.m_mapFallingItems) == nil then
    self:_RemoveBoardStateRecoveryData()
    self:SetBoardState(BoardState.AutoMerge)
  end
end

function FreefallActivityBoardModel:SetFalling(item, position, duration)
  local srcPos = item:GetPosition()
  self:_SetItem(srcPos, nil, false)
  self:_SetItem(position, item, false)
  item:SetPositionWithoutAnim(position)
  self.m_mapFallingItems[item] = position
  self.event:Call(BoardEventType.ItemFall, {
    Item = item,
    SrcPos = srcPos,
    DestPos = position,
    Duration = duration
  })
end

function FreefallActivityBoardModel:SetStable(item)
  self.m_mapFallingItems[item] = nil
  self.event:Call(BoardEventType.ItemStable, {Item = item})
end

function FreefallActivityBoardModel:_CheckFreefallPosition()
  for i = 1, self.HorizontalTiles do
    local pos = self.CreatePosition(i, 1)
    local item = self:GetItem(pos)
    if item == nil then
      local type = self:_SelectSpawnItemCode(pos)
      local newItem = self:GenerateItem(self.CreatePosition(i, 0), type, nil, false)
      self.event:Call(BoardEventType.SpawnItem, {Item = newItem})
      newItem:DispatchComponentEvent("Update", 0)
    end
  end
end

function FreefallActivityBoardModel:_SelectSpawnItemCode(boardPos)
  if not self.m_activityModel:IsFirstItemDropped() then
    self.m_activityModel:SetFirstItemDropped()
    return "ff_1_1"
  end
  local curRound = self.m_activityModel:GetCurRound()
  if curRound == nil then
    return Table.ListWeightSelectOne(self.m_arrSpawnConfig).Code
  end
  if self.m_mapRound2SpawnConfig[curRound] == nil then
    self.m_mapRound2SpawnConfig[curRound] = {}
    for _, config in ipairs(self.m_arrSpawnConfig) do
      if curRound == (config.Round or 1) then
        self.m_mapRound2SpawnConfig[curRound][#self.m_mapRound2SpawnConfig[curRound] + 1] = config
      end
    end
  end
  return Table.ListWeightSelectOne(self.m_mapRound2SpawnConfig[curRound]).Code
end

function FreefallActivityBoardModel:GetCurRoundSpawnConfig()
  local curRound = self.m_activityModel:GetCurRound()
  local result = {}
  for _, config in ipairs(self.m_arrSpawnConfig) do
    if curRound == (config.Round or 1) then
      result[#result + 1] = config
    end
  end
  return result
end

function FreefallActivityBoardModel:_OnPauseFalling()
  for position in FreefallActivityBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil then
      local itemFall = item:GetComponent(ItemFall)
      if itemFall ~= nil then
        itemFall:PauseFall()
      end
    end
  end
  self.m_mapFallingItems = {}
end

function FreefallActivityBoardModel:_RecordBoardStateFalling(preData)
end

FreefallActivityBoardModel.AutoSingleMergeInterval = 0.25
FreefallActivityBoardModel.AutoMergeChainInterval = 0.15
FreefallActivityBoardModel.AutoMergeAcquireInViewDelay = 0.2

function FreefallActivityBoardModel:_DoMerge(dt)
  if self.m_bFirstCheckAutoMerge == nil then
    self.m_bFirstCheckAutoMerge = true
    self:_RecordBoardStateRecoveryData()
  end
  if self.m_mergeInterval ~= nil then
    self.m_mergeInterval = self.m_mergeInterval - dt
    if self.m_mergeInterval <= 0 then
      self.m_mergeInterval = nil
    end
    return
  end
  if self.m_arrMergeChainIndex == nil then
    self.m_arrMergeChainIndex = self:_FindLongestMergeChain()
    if self.m_arrMergeChainIndex == nil then
      self:_RemoveBoardStateRecoveryData()
      local firstCheckAutoMerge = self.m_bFirstCheckAutoMerge
      self.m_bFirstCheckAutoMerge = nil
      if firstCheckAutoMerge then
        self:SetBoardState(BoardState.Settlement)
      else
        self:SetBoardState(BoardState.Falling)
      end
      return
    else
      self.m_bFirstCheckAutoMerge = false
      self:_RecordBoardStateRecoveryData()
      self.m_mergeInterval = FreefallActivityBoardModel.AutoMergeChainInterval
      return
    end
  end
  local itemSrc = self:GetItem(self:_Index2BoardPos(self.m_arrMergeChainIndex[1]))
  local itemDst = self:GetItem(self:_Index2BoardPos(self.m_arrMergeChainIndex[2]))
  if not (itemSrc ~= nil and itemDst ~= nil and self:CanItemMove(itemSrc)) or not self:CanItemMerge(itemSrc, itemDst) then
    local str = tostring(self:_Index2BoardPos(self.m_arrMergeChainIndex[1])) .. tostring(itemSrc ~= nil and itemSrc:GetType() or "nil") .. "->" .. tostring(self:_Index2BoardPos(self.m_arrMergeChainIndex[2])) .. tostring(itemDst ~= nil and itemDst:GetType() or "nil")
    self:_AcquireAccumHitTargetTokens((self:_Index2BoardPos(self.m_arrMergeChainIndex[1])))
    self.m_arrMergeChainIndex = nil
    self:_RecordBoardStateRecoveryData()
    Log.Error("[freefall]invalid chain" .. str)
    return
  end
  local targetPos = itemDst:GetPosition()
  self:_MergeItemBase(itemSrc, itemDst, targetPos)
  self:_Try2AccumulateMergeRewards(itemSrc)
  self.m_mergeInterval = FreefallActivityBoardModel.AutoSingleMergeInterval
  table.remove(self.m_arrMergeChainIndex, 1)
  if #self.m_arrMergeChainIndex <= 1 then
    self:_AcquireAccumHitTargetTokens(self:_Index2BoardPos(self.m_arrMergeChainIndex[1]))
    self.m_arrMergeChainIndex = nil
  end
  self:_RecordBoardStateRecoveryData()
end

function FreefallActivityBoardModel:_Try2AccumulateMergeRewards(item)
  local itemModelConfig = GM.ItemDataModel:GetModelConfig(item:GetType())
  if itemModelConfig.MergeRewards ~= nil then
    if self.m_arrAccumHitTargetTokens == nil then
      self.m_arrAccumHitTargetTokens = {}
    end
    RewardApi.MergeRewards(self.m_arrAccumHitTargetTokens, itemModelConfig.MergeRewards)
  end
end

function FreefallActivityBoardModel:_AcquireAccumHitTargetTokens(boardPos)
  if self.m_arrAccumHitTargetTokens ~= nil then
    self:_AcquireHitTargetTokens(self.m_arrAccumHitTargetTokens, boardPos, FreefallActivityBoardModel.AutoMergeAcquireInViewDelay)
    self.m_arrAccumHitTargetTokens = nil
  end
end

function FreefallActivityBoardModel:_FindLongestMergeChain()
  local itemDataModel = GM.ItemDataModel
  local chainIdCount = 0
  local chainId2chainTypeOffsetMap = {}
  local mapMaxLevelChainTypes = {}
  local mapNoMoveIndex = {}
  local mapPaperboxItemIndex = {}
  local mapSubMergeChainNextIndex = {}
  local mapSubMergeChainSize = {}
  local arrChainTypeInBoard = {}
  for position in FreefallActivityBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item == nil then
      arrChainTypeInBoard[#arrChainTypeInBoard + 1] = 0
    else
      local type = item:GetCode()
      type = ItemModelFactory.GetInnerType(type) or type
      if StringUtil.IsNilOrEmpty(type) then
        local a = 1
      end
      local chainId = itemDataModel:GetChainId(type)
      if chainId2chainTypeOffsetMap[chainId] == nil then
        chainIdCount = chainIdCount + 1
        chainId2chainTypeOffsetMap[chainId] = chainIdCount * 100
        mapMaxLevelChainTypes[itemDataModel:GetChainMaxLevel(chainId) + chainId2chainTypeOffsetMap[chainId]] = true
      end
      arrChainTypeInBoard[#arrChainTypeInBoard + 1] = chainId2chainTypeOffsetMap[chainId] + itemDataModel:GetChainLevel(type)
      if not self:CanItemMove(item) then
        mapNoMoveIndex[self:_BoardPos2Index(position)] = true
      end
      if item:GetType() == ItemType.PaperBox or item:GetType() == ItemType.Gray then
        mapPaperboxItemIndex[self:_BoardPos2Index(position)] = true
      end
    end
  end
  local startIndex, nextIndex
  local longestMergeChainSize = 0
  for i = 1, self.HorizontalTiles * self.VerticalTiles do
    if arrChainTypeInBoard[i] ~= 0 and not mapNoMoveIndex[i] and not mapMaxLevelChainTypes[arrChainTypeInBoard[i]] then
      for _, indexOffset in ipairs(self:_GetDirectionIndexOffset()) do
        if self:_CheckNeighborPos(i, indexOffset) then
          local checkIndex = i + indexOffset
          if arrChainTypeInBoard[checkIndex] ~= nil and arrChainTypeInBoard[checkIndex] == arrChainTypeInBoard[i] and not mapPaperboxItemIndex[checkIndex] then
            local checkMergeChainSize = self:_FindLongestMergeChainInSingleStartPosition(checkIndex, arrChainTypeInBoard, mapMaxLevelChainTypes, mapSubMergeChainNextIndex, mapSubMergeChainSize) + 1
            if longestMergeChainSize < checkMergeChainSize then
              startIndex = i
              nextIndex = checkIndex
              longestMergeChainSize = checkMergeChainSize
            end
          end
        end
      end
    end
  end
  if longestMergeChainSize == 0 then
    return nil
  end
  local result = {startIndex, nextIndex}
  nextIndex = mapSubMergeChainNextIndex[nextIndex]
  while nextIndex ~= nil do
    result[#result + 1] = nextIndex
    nextIndex = mapSubMergeChainNextIndex[nextIndex]
  end
  return result
end

function FreefallActivityBoardModel:_FindLongestMergeChainInSingleStartPosition(curIndex, arrChainTypeInBoard, mapMaxLevelChainTypes, mapSubMergeChainNextIndex, mapSubMergeChainSize)
  if mapSubMergeChainSize[curIndex] then
    return mapSubMergeChainSize[curIndex]
  end
  local nextChainType = arrChainTypeInBoard[curIndex] + 1
  if mapMaxLevelChainTypes[nextChainType] then
    mapSubMergeChainSize[curIndex] = 1
    return 1
  end
  local subChainSize = 1
  for _, indexOffset in ipairs(self:_GetDirectionIndexOffset()) do
    local checkIndex = curIndex + indexOffset
    if self:_CheckNeighborPos(curIndex, indexOffset) and arrChainTypeInBoard[checkIndex] == nextChainType then
      local checkSubChainSize = self:_FindLongestMergeChainInSingleStartPosition(checkIndex, arrChainTypeInBoard, mapMaxLevelChainTypes, mapSubMergeChainNextIndex, mapSubMergeChainSize) + 1
      if subChainSize < checkSubChainSize then
        subChainSize = checkSubChainSize
        mapSubMergeChainNextIndex[curIndex] = checkIndex
      end
    end
  end
  mapSubMergeChainSize[curIndex] = subChainSize
  return subChainSize
end

function FreefallActivityBoardModel:_BoardPos2Index(boardPos)
  return boardPos:GetX() + (boardPos:GetY() - 1) * self.HorizontalTiles
end

function FreefallActivityBoardModel:_Index2BoardPos(index)
  if index == nil then
    return
  end
  return self.CreatePosition((index - 1) % self.HorizontalTiles + 1, (index - 1) // self.HorizontalTiles + 1)
end

function FreefallActivityBoardModel:_CheckNeighborPos(index, offset)
  return (index % self.HorizontalTiles ~= 1 or offset ~= -1) and (index % self.HorizontalTiles ~= 0 or offset ~= 1) and 0 < index + offset and index + offset <= self.HorizontalTiles * self.VerticalTiles
end

function FreefallActivityBoardModel:_GetDirectionIndexOffset()
  if self.m_directionIndexOffset == nil then
    self.m_directionIndexOffset = {
      -self.HorizontalTiles,
      self.HorizontalTiles,
      -1,
      1
    }
  end
  return self.m_directionIndexOffset
end

function FreefallActivityBoardModel:_OnPauseAutoMerge()
  self.m_mergeInterval = nil
  self.m_bFirstCheckAutoMerge = nil
  self.m_arrMergeChainIndex = nil
  self.m_arrAccumHitTargetTokens = nil
end

function FreefallActivityBoardModel:_RecordBoardStateAutoMerge(preData)
  preData.mergeChain = self.m_arrMergeChainIndex
  preData.firstCheckAutoMerge = self.m_bFirstCheckAutoMerge
  preData.mergedRewards = self.m_arrAccumHitTargetTokens
end

function FreefallActivityBoardModel:_RecoverBoardStateAutoMerge(data)
  self.m_arrMergeChainIndex = data.mergeChain
  self.m_bFirstCheckAutoMerge = data.firstCheckAutoMerge
  self.m_arrAccumHitTargetTokens = data.mergedRewards
end

function FreefallActivityBoardModel:_DoSettlement(dt)
  if PropertyAnimationManager.uiLockFlyingCount > 0 or GM.UIManager:IsEventLock() then
    return
  end
  local topView = GM.UIManager:GetOpenedTopView()
  if topView and topView.name ~= FreefallActivityDefinition[self.m_activityType].MainWindowPrefabName then
    return
  end
  local bSettleFinish, isNewRound = self.m_activityModel:OnSettlement()
  if isNewRound then
    self:_RemoveBoardStateRecoveryData()
    return
  end
  if bSettleFinish then
    self:SetBoardState(BoardState.Stable)
    self:_RecordBoardStateRecoveryData()
    self:CheckBoardStuck()
  end
end

function FreefallActivityBoardModel:CheckBoardStuck()
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    GM.TestAutoRunModel.mergeAll = false
  end
  local prompt = BoardPromptFreefallMergeItems.Create()
  local bStuck = prompt:GetPromptItemModels(self) == nil
  if bStuck then
    local collectableItems = self:FilterItems(function(itemModel)
      return itemModel and itemModel:GetComponent(ItemCollectable) ~= nil
    end)
    bStuck = Table.IsEmpty(collectableItems)
  end
  if bStuck then
    local itemPool = self:FilterItems(function(itemModel)
      return itemModel:GetPosition():GetY() == 1 and itemModel:GetComponent(ItemFreefallBoss) == nil
    end)
    if not Table.IsEmpty(itemPool) then
      local mainWindow = GM.UIManager:GetOpenedViewByName(FreefallActivityDefinition[self.m_activityType].MainWindowPrefabName)
      if not mainWindow then
        return
      end
      mainWindow:ShowBoardStuckTip()
      for _, item in pairs(itemPool) do
        self:RemoveItem(item)
        self.event:Call(BoardEventType.BatchRemoveItems, {
          Removed = {item}
        })
      end
    end
    DelayExecuteFunc(function()
      self:SetBoardState(BoardState.Falling)
    end, 1)
  end
end

function FreefallActivityBoardModel:_RecordBoardStateSettlement()
end

function FreefallActivityBoardModel:_CanItemChainLevelup(item, targetItem)
  if item == targetItem or item == nil or targetItem == nil then
    return false
  end
  local arrCheckList = {
    {item, targetItem},
    {targetItem, item}
  }
  for _, checkList in ipairs(arrCheckList) do
    local item1, item2 = checkList[1], checkList[2]
    if item1:GetType() == FreefallActivitySpecialItemType.ChainlevelUp and item2 ~= nil then
      local chainId = GM.ItemDataModel:GetChainId(item2:GetType())
      if Table.ListContain(self.m_activityModel:GetDefinition().ActivityItemChainIds, chainId) then
        local affectedItems = self:GetNonMaxLevelActivityItemsInBoard(chainId)
        if #affectedItems == 0 then
          return false, FreefallHandleItemFailedReason.InvalidDragTargetItem
        else
          return true, affectedItems
        end
      else
        return false, FreefallHandleItemFailedReason.InvalidDragTargetItem
      end
    end
  end
  return false
end

function FreefallActivityBoardModel:_ItemChainLevelup(item, targetItem, targetPos, affectedItems)
  local specialItem, chainItem
  if item:GetType() == FreefallActivitySpecialItemType.ChainlevelUp then
    specialItem = item
    chainItem = targetItem
  else
    specialItem = targetItem
    chainItem = item
  end
  local changeItemPos = false
  self:RemoveItem(specialItem, false)
  if specialItem == targetItem then
    self:_SetItem(chainItem:GetPosition(), nil, false)
    self:_SetItem(targetPos, chainItem, false)
    chainItem:SetPosition(targetPos)
  end
  local itemDataModel = GM.ItemDataModel
  local affectedItemInfos = {}
  for _, affectedItem in ipairs(affectedItems) do
    local boardPos = affectedItem:GetPosition()
    local newItem = self:ReplaceItem(affectedItem, affectedItem:GetMergedType(), false)
    local itemModelConfig = itemDataModel:GetModelConfig(affectedItem:GetType())
    if itemModelConfig.MergeRewards ~= nil then
      RewardApi.AcquireRewardsLogic(itemModelConfig.MergeRewards, EPropertySource.Give, EBIType.FreefallChainLevelUpReward, EGameMode.Main, CacheItemType.Type2, FreefallBoardType)
    end
    affectedItemInfos[#affectedItemInfos + 1] = {
      Old = affectedItem,
      New = newItem,
      Rewards = itemModelConfig.MergeRewards
    }
  end
  self:_PreRecordFallingStateRecoveryData()
  local msg = {
    Source = item,
    Target = targetItem,
    AffectedItems = affectedItemInfos
  }
  self.event:Call(BoardEventType.ChainLevelUp, msg)
  EventDispatcher.DispatchEvent(EEventType.FreefallChainLevelUp, msg)
end

function FreefallActivityBoardModel:GetNonMaxLevelActivityItemsInBoard(chainId)
  local result = {}
  local itemDataModel = GM.ItemDataModel
  local activityChainIds = self.m_activityModel:GetDefinition().ActivityItemChainIds
  for position in FreefallActivityBoardModel.GetValidPositionIterator() do
    local item = self:GetItem(position)
    if item ~= nil and not itemDataModel:IsMaxLevelItemType(item:GetType()) then
      if chainId == nil then
        if Table.ListContain(activityChainIds, itemDataModel:GetChainId(item:GetType())) then
          result[#result + 1] = item
        end
      elseif type(chainId) == "table" then
        if Table.ListContain(chainId, itemDataModel:GetChainId(item:GetType())) then
          result[#result + 1] = item
        end
      elseif itemDataModel:GetChainId(item:GetType()) == chainId then
        result[#result + 1] = item
      end
    end
  end
  return result
end

function FreefallActivityBoardModel:_ChangeTapItemFunc()
  self._TapItemOld = self.TapItem
  self.TapItem = self._TapItem
end

function FreefallActivityBoardModel:_TapItem(item, ...)
  if item:GetType() == FreefallActivitySpecialItemType.RandomlevelUp then
    self:_Try2ItemRandomLevelup(item)
    return
  end
  local itemCollectable = item:GetComponent(ItemCollectable)
  if itemCollectable ~= nil then
    local rewards = itemCollectable:GetRewards()
    local canCollect = false
    for _, reward in ipairs(rewards) do
      if FreefallActivityModel.IsHitTokenType(reward[PROPERTY_TYPE]) and self.m_activityModel:HasTargetWithHitTokenPropertyType(reward[PROPERTY_TYPE]) then
        canCollect = true
        break
      end
    end
    if not canCollect then
      self.event:Call(BoardEventType.HandleItemFailed, {
        Source = item,
        Target = item,
        Reason = FreefallHandleItemFailedReason.NoHitTokenTarget
      })
      return
    end
  end
  self:_TapItemOld(item, ...)
end

function FreefallActivityBoardModel:_Try2ItemRandomLevelup(item)
  local nonMaxLevelActivityItems = self:GetNonMaxLevelActivityItemsInBoard()
  if #nonMaxLevelActivityItems == 0 then
    self.event:Call(BoardEventType.HandleItemFailed, {
      Source = item,
      Target = item,
      Reason = FreefallHandleItemFailedReason.NoValidTargetItem
    })
  else
    local selectCount = self.m_activityModel:GetDefinition().RandomLevelUpItemCount
    local affectedItems = Table.ListRandomSelectN(nonMaxLevelActivityItems, selectCount)
    self:RemoveItem(item, false)
    local itemDataModel = GM.ItemDataModel
    local affectedItemInfos = {}
    for _, affectedItem in ipairs(affectedItems) do
      local boardPos = affectedItem:GetPosition()
      local newItem = self:ReplaceItem(affectedItem, affectedItem:GetMergedType(), false)
      local itemModelConfig = itemDataModel:GetModelConfig(affectedItem:GetType())
      if itemModelConfig.MergeRewards ~= nil then
        RewardApi.AcquireRewardsLogic(itemModelConfig.MergeRewards, EPropertySource.Give, EBIType.FreefallRandomLevelUpReward, EGameMode.Main, CacheItemType.Type2, FreefallBoardType)
      end
      affectedItemInfos[#affectedItemInfos + 1] = {
        Old = affectedItem,
        New = newItem,
        Rewards = itemModelConfig.MergeRewards
      }
    end
    self:_PreRecordFallingStateRecoveryData()
    local msg = {Source = item, AffectedItems = affectedItemInfos}
    self.event:Call(BoardEventType.RandomLevelUp, msg)
    EventDispatcher.DispatchEvent(EEventType.FreefallRandomLevelUp, msg)
  end
end

function FreefallActivityBoardModel:MergeAll()
  if self.m_boardState ~= BoardState.Stable then
    return
  end
  local boardView = GM.ModeViewController:GetFreefallActivityBoardView()
  if boardView == nil or boardView.m_bOnSettlement then
    return
  end
  self.m_mergeAllIgnoredItems = {}
  local ignoreCobweb = PlayerPrefs.GetInt(EPlayerPrefKey.TestMergeAllIgnoreCobweb, 0) == 1
  local ignoreCanSpread = PlayerPrefs.GetInt(EPlayerPrefKey.TestMergeAllIgnoreCanSpread, 0) == 1
  if GameConfig.IsTestMode() and (ignoreCobweb or ignoreCanSpread) then
    local find = false
    for position in self.GetValidPositionIterator() do
      local item = self:GetItem(position)
      if item ~= nil then
        if ignoreCobweb and item:GetComponent(ItemCobweb) then
          self.m_mergeAllIgnoredItems[item] = true
          find = true
        end
        if ignoreCanSpread and item:GetComponent(ItemSpread) then
          local itemSpread = item:GetComponent(ItemSpread)
          if 0 < itemSpread:GetSpreadMaxNum() - itemSpread:GetSpreadCount() then
            self.m_mergeAllIgnoredItems[item] = true
            find = true
          end
        end
      end
    end
    if find then
      GM.UIManager:ShowPrompt("\227\128\144\230\181\139\232\175\149\231\142\175\229\162\131\227\128\145\229\183\178\229\191\189\231\149\165" .. (ignoreCobweb and "\232\155\155\231\189\145\230\163\139\229\173\144" or "") .. (ignoreCobweb and ignoreCanSpread and "\227\128\129" or "") .. (ignoreCanSpread and "\229\143\175\229\150\183\229\143\145\230\163\139\229\173\144" or ""))
    end
  end
  local pair = self:FindMergePair(self.m_mergeAllIgnoredItems)
  if pair == nil and GameConfig.IsTestMode() then
    GM.UIManager:ShowPrompt("\230\137\190\228\184\141\229\136\176\229\143\175\229\144\136\229\185\182\231\154\132\230\163\139\229\173\144")
    return
  end
  while pair ~= nil do
    self:_MergeItem(pair[1], pair[2], pair[2]:GetPosition())
    pair = self:FindMergePair(self.m_mergeAllIgnoredItems)
  end
  self:SetBoardState(BoardState.Falling)
end

function FreefallActivityBoardModel._GetInverseYValidPositionIterator(boardClass)
  return FreefallActivityBoardModel._InverseYValidPositionIterator, boardClass, nil
end

function FreefallActivityBoardModel._InverseYValidPositionIterator(boardClass, position)
  if position == nil then
    return BaseBoardModel._CreatePosition(boardClass, 1, boardClass.VerticalTiles)
  end
  local x = position.m_x
  local y = position.m_y
  if x ~= boardClass.HorizontalTiles then
    x = x + 1
  else
    x = 1
    y = y - 1
  end
  if y < 1 then
    return nil
  else
    return BaseBoardModel._CreatePosition(boardClass, x, y)
  end
end

function FreefallActivityBoardModel:_MergeItemBase(item, targetItem, targetPosition)
  self:_MergeItem(item, targetItem, targetPosition, true)
end

function FreefallActivityBoardModel:CanItemFall(item)
  return item:CanMove()
end

function FreefallActivityBoardModel:UpdateBossItem(fromLoad)
  local bossItems = self:FilterItems(function(itemModel)
    return itemModel:GetComponent(ItemFreefallBoss) ~= nil
  end)
  if Table.IsEmpty(bossItems) then
    return
  end
  local offset = {
    {1, 0},
    {0, 1},
    {1, 1}
  }
  for k, bossItem in pairs(bossItems) do
    local comp = bossItem:GetComponent(ItemFreefallBoss)
    if not comp:IsBinded() then
      local itemPos = bossItem:GetPosition()
      for _, ofs in pairs(offset) do
        local position = FreefallActivityBoardModel.CreatePosition(itemPos:GetX() + ofs[1], itemPos:GetY() + ofs[2])
        local item = self:GetItem(position)
        if item and item:GetComponent(ItemFreefallBoss) then
          item:GetComponent(ItemFreefallBoss):SetMainItem(bossItem)
          comp:AddSubItem(item)
        else
          Log.Error("UpdateBossItem: bind fail. pos x : " .. itemPos:GetX() .. ", y:" .. itemPos:GetY())
        end
      end
    end
  end
  if fromLoad then
    local mainItems = self:FilterItems(function(itemModel)
      return itemModel:GetComponent(ItemFreefallBoss) ~= nil and itemModel:GetComponent(ItemFreefallBoss):IsMainItem()
    end)
    local slotId = 1
    for _, item in pairs(mainItems) do
      self.m_activityModel:SetTargetBossItemSlotId(slotId, item:GetId())
      self.m_activityModel:SetBossSkillChargeRound(slotId, 0)
      slotId = slotId + 1
    end
    self.m_activityModel:SetTargetBossMaxNum(#mainItems)
  end
end

function FreefallActivityBoardModel:MoveItem(from, to)
  local fromPos = FreefallActivityBoardModel.CreatePosition(from[1], from[2])
  local toPos = FreefallActivityBoardModel.CreatePosition(to[1], to[2])
  local item1 = self:GetItem(fromPos)
  local item2 = self:GetItem(toPos)
  Log.Assert(item2 == nil, "can not move item, because toPos is not null")
  if item1 == nil then
    return
  end
  self:_SetItem(toPos, item1, false)
  self:_SetItem(fromPos, nil, false)
  item1:SetPosition(toPos)
end

function FreefallActivityBoardModel:CreateNewBossItem(pos, slotId)
  local newItems = {}
  for _, v in pairs({
    {0, 0},
    {0, 1},
    {1, 0},
    {1, 1}
  }) do
    local pos = FreefallActivityBoardModel.CreatePosition(pos[1] + v[1], pos[2] + v[2])
    local item = ItemModelFactory.CreateWithCode(self, pos, ItemType.FreeFallBoss, true)
    if item ~= nil then
      self.m_itemManager:SetItem(item)
      self.m_itemLayerModel:SetItem(pos, item, true)
      table.insert(newItems, item)
    end
  end
  if not Table.IsEmpty(newItems) then
    local bossItem = newItems[1]
    local comp = bossItem:GetComponent(ItemFreefallBoss)
    for i = 2, #newItems do
      newItems[i]:GetComponent(ItemFreefallBoss):SetMainItem(bossItem)
      comp:AddSubItem(newItems[i])
    end
    self.m_activityModel:SetTargetBossItemSlotId(slotId, bossItem:GetId())
    self.m_activityModel:SetBossSkillChargeRound(slotId, 0)
  end
end

function FreefallActivityBoardModel:GetCanConvertedItemPool()
  local itemPool = self:FilterItems(function(itemModel)
    return itemModel:GetPosition():GetY() > 1 and itemModel:GetComponent(ItemFreefallBoss) == nil and itemModel:GetComponent(ItemCobweb) == nil and itemModel:GetComponent(ItemCollectable) == nil and itemModel:GetComponent(ItemPaperBox) == nil and itemModel:GetComponent(ItemGray) == nil
  end)
  return itemPool
end

function FreefallActivityBoardModel:ConvertItemToBlock(cobwebNum, pBoxNum)
  local aniDt = 2.5
  local convertItems = {}
  local boardView = GM.ModeViewController:GetFreefallActivityBoardView()
  if pBoxNum and 0 < pBoxNum then
    local itemPool = self:GetCanConvertedItemPool()
    local selectItems = Table.ListRandomSelectN(itemPool, math.min(#itemPool, pBoxNum))
    for _, item in pairs(selectItems) do
      local itemView = boardView:GetItemView(item)
      local originItemType = item:GetCode()
      local targetItemType = ItemCodePrefix.Gray .. item:GetCode()
      local newItem = self:ReplaceItem(item, targetItemType, nil)
      local eventInfo = {
        Source = item,
        New = newItem,
        worldPosition = itemView.transform.position
      }
      table.insert(convertItems, eventInfo)
      GM.UIManager:SetEventLock(true)
      DelayExecuteFunc(function()
        GM.UIManager:SetEventLock(false)
        self.event:Call(BoardEventType.TransformItem, eventInfo)
      end, aniDt)
      GM.BIManager:LogTransform(originItemType, targetItemType)
    end
  end
  if cobwebNum and 0 < cobwebNum then
    local itemPool = self:GetCanConvertedItemPool()
    local selectItems = Table.ListRandomSelectN(itemPool, math.min(#itemPool, cobwebNum))
    for _, item in pairs(selectItems) do
      local itemView = boardView:GetItemView(item)
      local originItemType = item:GetCode()
      local targetItemType = ItemCodePrefix.Cobweb .. item:GetCode()
      local newItem = self:ReplaceItem(item, targetItemType, nil)
      local eventInfo = {
        Source = item,
        New = newItem,
        worldPosition = itemView.transform.position
      }
      table.insert(convertItems, eventInfo)
      GM.UIManager:SetEventLock(true)
      DelayExecuteFunc(function()
        GM.UIManager:SetEventLock(false)
        self.event:Call(BoardEventType.TransformItem, eventInfo)
      end, aniDt)
      GM.BIManager:LogTransform(originItemType, targetItemType)
    end
  end
  EventDispatcher.DispatchEvent(EEventType.FreefallActivityBossSkill, {items = convertItems})
end
