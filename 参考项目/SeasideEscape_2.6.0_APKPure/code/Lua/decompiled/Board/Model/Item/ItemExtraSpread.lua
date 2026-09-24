ItemExtraSpread = setmetatable({}, BaseItemComponent)
ItemExtraSpread.__index = ItemExtraSpread

function ItemExtraSpread.Create(itemConfig)
  local itemSpread = setmetatable({}, ItemExtraSpread)
  itemSpread:Init(itemConfig)
  return itemSpread
end

function ItemExtraSpread:Init(itemConfig)
end

function ItemExtraSpread:SetItemModel(itemModel)
  self.m_itemModel = itemModel
  self.m_boardModel = itemModel:GetBoardModel()
end

function ItemExtraSpread:Update()
  if self:CanSpreadFirstMerge() then
    self:TrySpreadFirstMerge()
  end
end

function ItemExtraSpread:GetPositionWithCode(code)
  local position
  position = self.m_boardModel:FindEmptyPositionInAttach(code)
  position = position or self.m_boardModel:FindEmptyPositionInSpreadOrder(self.m_itemModel:GetPosition())
  return position
end

function ItemExtraSpread:CanSpreadFirstMerge()
  return self.m_boardModel and self.m_boardModel.CanSpreadFirstMerge and self.m_boardModel:CanSpreadFirstMerge(self.m_itemModel:GetType())
end

function ItemExtraSpread:TrySpreadFirstMerge()
  if self.m_boardModel:IsBoardFull() then
    return false
  end
  local itemType = self.m_itemModel:GetType()
  local code, originalCode, boardSpreadType = self.m_boardModel:TrySpreadFirstMerge(itemType)
  local position = self:GetPositionWithCode(code)
  if code ~= nil and position ~= nil then
    self.m_boardModel:SpreadItem(self.m_itemModel, position, code, true, originalCode, nil, nil, boardSpreadType)
  end
end

function ItemExtraSpread:GetNotSpreadRewards()
  local rewards = {}
  local itemType = self.m_itemModel:GetType()
  while self:CanSpreadFirstMerge() do
    local code = self.m_boardModel:TrySpreadFirstMerge(itemType)
    if StringUtil.StartWith(code, ItemCodePrefix.Bubble) then
      code = string.sub(code, 3)
      if not Table.IsEmpty(GM.ItemDataModel:GetModelConfig(code)) then
        table.insert(rewards, {
          [PROPERTY_TYPE] = code,
          [PROPERTY_COUNT] = 1
        })
      end
    else
      local itemConfig = GM.ItemDataModel:GetModelConfig(code)
      local arrRwds = itemConfig.CollectRewards
      if not Table.IsEmpty(arrRwds) then
        for _, v1 in ipairs(arrRwds) do
          table.insert(rewards, v1)
        end
      end
    end
  end
  return rewards
end
