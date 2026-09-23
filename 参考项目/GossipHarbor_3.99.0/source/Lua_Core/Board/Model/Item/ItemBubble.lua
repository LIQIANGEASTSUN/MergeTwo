ItemBubble = setmetatable({}, BaseItemComponent)
ItemBubble.__index = ItemBubble
ItemBubble.Countdown = 60

function ItemBubble.Create(innerItemCode, instant)
  local itemBubble = setmetatable({}, ItemBubble)
  itemBubble:Init(innerItemCode, instant)
  return itemBubble
end

function ItemBubble:Init(innerItemCode, instant)
  self.m_innerItemCode = innerItemCode
  self.m_instant = instant
  self.m_startTimer = GM.GameModel:GetServerTime()
  self.m_breakCost = 0
  local config = GM.ConfigModel:GetLocalConfig(LocalConfigKey.ItemProperty)
  for _, data in ipairs(config) do
    if data.Type == innerItemCode then
      self.m_breakCost = data.BubblePrice or data.Price
      self.m_breakCostSale = data.BubblePriceSale
      break
    end
  end
end

function ItemBubble:UpdatePerSecond()
  if not self.m_lockBreak and self:GetTimerAmount() == 1 then
    self:_Disappear()
    GM.BIManager:LogAction(EBIType.BubbleDisappear, self.m_innerItemCode)
  end
end

function ItemBubble:OnBreak(isFree)
  local cost, bSale, oriCost = self:GetBreakCost()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BubbleConfirm, true) and not isFree and 0 < cost then
    local initFun = bSale and function(window)
      window:SetDecVisible(bSale)
      window:SetDiscountSale(oriCost)
    end
    local img = self.m_itemModel:GetSpriteName()
    local outImg = self:GetSpriteName()
    GM.UIManager:OpenView(UIPrefabConfigName.GeneralGemConfirmWindow, img, outImg, "bubble_confirm_title", "bubble_confirm_desc", cost, function(window)
      self:_Break(isFree, window:GetCost())
    end, initFun)
  else
    self:_Break(isFree, cost)
  end
end

function ItemBubble:_Break(isFree, cost)
  local boardModel = self.m_itemModel:GetBoardModel()
  local bubbleModel = boardModel:GetItem(self.m_itemModel:GetPosition())
  if bubbleModel:GetComponent(ItemBubble) == nil then
    GM.UIManager:OpenView(UIPrefabConfigName.GeneralMsgWindow, GM.GameTextModel:GetText("bubble_purchase_failed_title"), GM.GameTextModel:GetText("bubble_purchase_failed_desc"), GM.GameTextModel:GetText("common_button_ok"))
    return
  end
  if not isFree then
    local gemNumber = GM.PropertyDataManager:GetPropertyNum(EPropertyType.Gem)
    if cost > gemNumber then
      boardModel.event:Call(BoardEventType.LackGem, {
        LackNumber = cost - gemNumber,
        Scene = EGemCostScene.Bubble
      })
      return
    end
    if self.m_instant then
      GM.PropertyDataManager:Consume(EPropertyType.Gem, cost, EBIType.BreakInstantBubble, self.m_innerItemCode)
    else
      GM.PropertyDataManager:Consume(EPropertyType.Gem, cost, EBIType.BreakBubble, self.m_innerItemCode)
    end
  end
  local newItem = boardModel:ReplaceItem(self.m_itemModel, self.m_innerItemCode)
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem,
    IsFree = isFree,
    Cost = cost
  }
  boardModel.event:Call(BoardEventType.BubbleBreak, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.BubbleBroken, eventInfo)
  if self.m_instant then
    boardModel:TapItem(newItem)
  end
  local realCost = isFree and 0 or cost
  GM.BIManager:LogStore(EPropertyType.Gem, realCost, self.m_innerItemCode, 1, EShopType.BreakBubble)
  local model = GM.ActivityManager:GetModel(ActivityType.BubbleSale)
  if model and model:IsActivityOpen() then
    local discountNum = self.m_breakCostSale or self.m_breakCost
    GM.BIManager:LogAction(EBIType.BubbleSaleBuy, {
      bubble = self.m_innerItemCode,
      bubbleSalePrice = discountNum,
      bubblePrice = self.m_breakCost,
      gemCost = realCost
    })
  end
end

function ItemBubble:OnSpeedUp()
  self:_Disappear()
  GM.BIManager:LogAction(EBIType.RemoveBubble, self.m_innerItemCode)
end

function ItemBubble:ForceTransform()
  self:_Disappear()
  GM.BIManager:LogAction(EBIType.RemoveBubble, self.m_innerItemCode)
end

function ItemBubble:GetInnerItemCode()
  return self.m_innerItemCode
end

function ItemBubble:IsInstant()
  return self.m_instant
end

function ItemBubble:GetStartTimer()
  return self.m_startTimer
end

function ItemBubble:GetBreakCost()
  local breakCost = GM.TutorialModel:GetForceUnlockBubbleCost()
  if breakCost ~= nil then
    return breakCost
  end
  if self.m_breakCostSale and self.m_breakCostSale < self.m_breakCost then
    local model = GM.ActivityManager:GetModel(ActivityType.BubbleSale)
    if model and model:IsActivityOpen() then
      return self.m_breakCostSale, true, self.m_breakCost
    end
  end
  return self.m_breakCost
end

function ItemBubble:GetTimerAmount()
  local elapsedTime = GM.GameModel:GetServerTime() - self.m_startTimer
  local result = elapsedTime / self:_GetCountdown()
  return math.min(result, 1)
end

function ItemBubble:_GetCountdown()
  local customCountdown = GM.ConfigModel:GetCustomItemBubbleCountdown()
  return customCountdown ~= nil and 0 < customCountdown and customCountdown or ItemBubble.Countdown
end

function ItemBubble:GetSpriteName()
  return self.m_instant and ImageFileConfigName.BubbleInstant or ImageFileConfigName.Bubble
end

function ItemBubble:_Disappear()
  local boardModel = self.m_itemModel:GetBoardModel()
  local newItem = boardModel:ReplaceItem(self.m_itemModel, ItemType.Coin01)
  local eventInfo = {
    Source = self.m_itemModel,
    New = newItem
  }
  boardModel.event:Call(BoardEventType.BubbleDisappear, eventInfo)
  EventDispatcher.DispatchEvent(EEventType.BubbleDisappear, eventInfo)
end

function ItemBubble:SetLockBreak(lockBreak)
  self.m_lockBreak = lockBreak
end
