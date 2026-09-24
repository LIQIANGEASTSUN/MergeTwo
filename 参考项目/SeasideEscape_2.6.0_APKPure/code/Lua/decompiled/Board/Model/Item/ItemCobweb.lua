ItemCobweb = setmetatable({canMove = false}, BaseItemComponent)
ItemCobweb.__index = ItemCobweb

function ItemCobweb.Create(innerItemCode)
  local itemCobweb = setmetatable({}, ItemCobweb)
  itemCobweb:Init(innerItemCode)
  return itemCobweb
end

function ItemCobweb:Init(innerItemCode)
  self.m_innerItemCode = innerItemCode
end

function ItemCobweb:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemCobweb:GetMergedType()
  local config = GM.ItemDataModel:GetModelConfig(self.m_innerItemCode)
  return config.MergedType
end

function ItemCobweb:CanMergeByJoker()
  local config = GM.ItemDataModel:GetModelConfig(self.m_innerItemCode)
  return config.Only_Same ~= 1
end

function ItemCobweb:OnBreak()
  local boardModel = self.m_itemModel:GetBoardModel()
  local cost = self:GetBreakCost()
  local gemNumber = GM.PropertyDataManager:GetPropertyNum(EPropertyType.Gem)
  if cost > gemNumber then
    boardModel.event:Call(BoardEventType.LackGem, {
      LackNumber = cost - gemNumber
    })
    return
  end
  GM.PropertyDataManager:Consume(EPropertyType.Gem, cost, EBIType.BreakCobweb, self.m_innerItemCode)
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode)
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem,
    Cost = cost
  }
  boardModel.event:Call(BoardEventType.BubbleBreak, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.BubbleBroken, eventInfo)
  GM.TutorialModel:FinishTutorial(ETutorialId.CobwebUnlock)
end

function ItemCobweb:GetBreakCost()
  if not GM.OpenFunctionModel:IsCobwebUnlockOpen() then
    return
  end
  if self.m_innerItemCode:find(ItemCodePrefix.MainGenerator) ~= nil then
    return
  end
  local model = GM.ItemDataModel
  local genChain = model:GetChainGenerator(model:GetChainId(self.m_innerItemCode))
  if genChain then
    local maxLevel = model:GetChainMaxLevel(genChain)
    local generator = ItemUtility.GetItemCode(genChain, maxLevel)
    local orderModel = self.m_itemModel:GetBoardModel():GetOrderModel()
    local scoreMap = orderModel:GetItemScoresByGenerator(generator)
    if scoreMap and scoreMap[self.m_innerItemCode] and scoreMap[self.m_innerItemCode] > 0 then
      local price = GM.SystemConfigModel:GetConfig(SystemConfigKey.LockItemPrice)
      local score = scoreMap[self.m_innerItemCode]
      return math.floor(score * price)
    else
      GM.BIManager:LogErrorInfo("cw_sc_nil", self.m_innerItemCode)
    end
  end
end
