ItemSplit = setmetatable({}, BaseItemComponent)
ItemSplit.__index = ItemSplit

function ItemSplit.Create(itemConfig, count)
  local ItemSplit = setmetatable({}, ItemSplit)
  ItemSplit:Init(itemConfig, count)
  return ItemSplit
end

function ItemSplit:Init(itemConfig, count)
  self.m_nextType = itemConfig.Transform_Item
  local type = itemConfig.Type
  if type == ItemType.ScissorsSp then
    self.m_leftCount = count
  else
    self.m_leftCount = GM.ItemDataModel:GetChainLevel(type)
  end
end

function ItemSplit:GetNextType()
  if self.m_itemModel:GetType() == ItemType.ScissorsSp and self.m_leftCount > 1 then
    return "scissorssp_" .. self.m_leftCount - 1
  else
    return self.m_nextType
  end
end

function ItemSplit:SetLeftCount(leftCount)
  self.m_leftCount = leftCount
end

function ItemSplit:GetLeftCount()
  return self.m_leftCount
end

function ItemSplit:GetMergedType()
  return ItemType.ScissorsSp
end

function ItemSplit:CanMergeByJoker()
  return false
end

function ItemSplit:FromSerialization(dbTable)
  self.m_leftCount = dbTable.leftCount or self.m_leftCount
end

function ItemSplit:ToSerialization(dbTable)
  dbTable.leftCount = self:GetLeftCount() or -1
end

function ItemSplit:CanSplitItem(targetItem)
  local boardModel = self.m_itemModel:GetBoardModel()
  if boardModel:IsBoardFull() then
    return false
  end
  if self:GetLeftCount() < 1 then
    return false
  end
  if not targetItem:CanSplit() then
    return false
  end
  return true
end

function ItemSplit:_GetPrevType(toBeSplitItem)
  local prevType = toBeSplitItem:GetMergedFromType()
  if not prevType then
    Log.Error(tostring(type) .. " \229\143\175\232\162\171\232\163\129\229\137\170\229\177\158\230\128\167\233\148\153\232\175\175")
    return nil
  end
  return prevType
end

function ItemSplit:StartSplitItem(toBeSplitItem, targetPosition)
  local prevType = self:_GetPrevType(toBeSplitItem)
  if not prevType then
    return
  end
  local type = toBeSplitItem:GetType()
  GM.UIManager:OpenView(UIPrefabConfigName.ItemSplitConfirmWindow, type, prevType, function(window)
    if self:_CheckItem(toBeSplitItem) then
      local message = {
        Split = self.m_itemModel,
        ToBeSplit = toBeSplitItem,
        TargetPosition = targetPosition
      }
      self.m_itemModel:GetBoardModel().event:Call(BoardEventType.SplitItem, message)
    end
    window:Close()
  end)
end

function ItemSplit:_CheckItem(toBeSplitItem)
  local boardModel = self.m_itemModel:GetBoardModel()
  if not boardModel:CheckItemStillInPosition(self.m_itemModel) then
    return false
  end
  if not boardModel:CheckItemStillInPosition(toBeSplitItem) then
    return false
  end
  return true
end

function ItemSplit:DoSplitItem(toBeSplitItem, targetPosition)
  if not self:_CheckItem(toBeSplitItem) then
    return
  end
  local boardModel = self.m_itemModel:GetBoardModel()
  local nextScissorsType = self:GetNextType()
  boardModel:RemoveItem(self.m_itemModel, false)
  boardModel:RemoveItem(toBeSplitItem, false)
  local newScissorsItem
  if nextScissorsType then
    newScissorsItem = boardModel:GenerateItem(targetPosition, nextScissorsType, nil, nil, false)
  end
  local prevType = self:_GetPrevType(toBeSplitItem)
  local otherPosition1 = boardModel:FindEmptyPositionInSpreadOrder(targetPosition)
  local newItem1 = boardModel:GenerateItem(otherPosition1, prevType, nil, nil, false)
  local otherPosition2 = boardModel:FindEmptyPositionInSpreadOrder(otherPosition1)
  local newItem2 = boardModel:GenerateItem(otherPosition2, prevType, nil, nil, false)
  if toBeSplitItem.itemScore ~= nil then
    local newScore = toBeSplitItem.itemScore / 2
    newItem1.itemScore = newScore
    newItem2.itemScore = newScore
    newItem1.costEnergy = toBeSplitItem.costEnergy / 2
    newItem2.costEnergy = toBeSplitItem.costEnergy / 2
    newItem1.shopGemCost = toBeSplitItem.shopGemCost / 2
    newItem2.shopGemCost = toBeSplitItem.shopGemCost / 2
    newItem1.freeScore = toBeSplitItem.freeScore / 2
    newItem2.freeScore = toBeSplitItem.freeScore / 2
    newItem1.bubbleGemCost = toBeSplitItem.bubbleGemCost / 2
    newItem2.bubbleGemCost = toBeSplitItem.bubbleGemCost / 2
    newItem1.energyToday = toBeSplitItem.energyToday / 2
    newItem2.energyToday = toBeSplitItem.energyToday / 2
    newItem1.energyStarToday = toBeSplitItem.energyStarToday / 2
    newItem2.energyStarToday = toBeSplitItem.energyStarToday / 2
  end
  GM.MainBoardModel:UpdateOrderState()
  GM.BIManager:LogUseItem(self.m_itemModel:GetType() .. "_" .. self:GetLeftCount(), 1, EBIType.ScissorsUse, toBeSplitItem:GetType())
  GM.BIManager:LogSplit(toBeSplitItem:GetType(), newItem1:GetType(), {
    code = self.m_itemModel:GetType(),
    from_id = toBeSplitItem:GetId(),
    it1_id = newItem1:GetId(),
    it2_id = newItem2:GetId(),
    sc_id = self.m_itemModel:GetId()
  }, string.format("scissors:%d", self:GetLeftCount() or 0))
  return newItem1, newItem2, newScissorsItem
end
