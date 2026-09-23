ItemFlyView = {}
ItemFlyView.__index = ItemFlyView
ItemFlyView.EFLYTYPE = {
  Default = "Default",
  AdventureActivity = "AdventureActivity",
  MultiboardsActivity = "MultiboardsActivity",
  OrderBoostActivity = "OrderBoostActivity",
  DigActivity = "DigActivity",
  BreakActivity = "BreakActivity",
  PureBoardActivity = "PureBoardActivity"
}

function ItemFlyView:Init(viewFactory, itemType, eFlyType)
  local spriteName = GM.ItemDataModel:GetSpriteName(itemType)
  SpriteUtil.SetSpriteRenderer(self.m_itemSprite, spriteName)
  self.m_eFlyType = eFlyType
  self.m_viewFactory = viewFactory
  self.m_itemType = itemType
  self:UpdateEffect(true)
  UIUtil.SetActive(self.m_numText.gameObject, true)
end

function ItemFlyView:FlyToTarget(targetPos, bEnergyBoost)
  local color = bEnergyBoost and "D760F4" or "1A5E9A"
  UIUtil.SetActive(self.m_numOutl.gameObject, true)
  self.m_numOutl.effectColor = UIUtil.ConvertHexColor2CSColor(color)
  local pos = self.transform.localPosition
  local seq = DOTween.Sequence()
  seq:Insert(0.1, self.transform:DOLocalMoveY(pos.y + 230, 1):SetEase(Ease.OutCirc))
  seq:Insert(1.1, self.m_numText:DOFade(0, 0.3))
  seq:Insert(1.4, self.transform:DOMove(targetPos, 0.5):SetEase(Ease.OutQuad))
  seq:Insert(1.7, self.transform:DOScale(0.8, 0.2))
  seq:InsertCallback(2, function()
    if GameConfig.IsTestMode() then
      EventDispatcher.DispatchEvent(EEventType.TestPropertyMonitorItemFlyTarget, {
        FlyType = self.m_eFlyType,
        ItemType = self.m_itemType,
        Num = self.m_numText.text
      })
    end
    EventDispatcher.DispatchEvent(EEventType.ItemFlyTarget, self.m_eFlyType)
    self:RecycleSelf()
  end)
end

function ItemFlyView:Jump2Target(targetPosition, energyBoost)
  UIUtil.SetActive(self.m_numOutl.gameObject, false)
  local sourcePosition = self.transform.position
  local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, 0)
  local targetPositionZero = Vector3(targetPosition.x, targetPosition.y, 0)
  local deltaPosition = targetPositionZero - sourcePositionZero
  local transform = self.transform
  transform.localScale = Vector3.zero
  local sequence = DOTween.Sequence()
  sequence:Insert(0.05, transform:DOJump(sourcePositionZero + deltaPosition * 0.9, 60, 1, 0.6))
  sequence:Insert(0.65, transform:DOMove(targetPosition, 0.25):SetEase(Ease.OutQuad))
  sequence:Insert(0.05, transform:DOScale(Vector3(0.8, 0.8, 1), 0.1))
  sequence:Insert(0.15, transform:DOScale(Vector3(1.5, 1.5, 1), 0.2))
  sequence:Insert(0.35, transform:DOScale(Vector3(1, 1, 1), 0.3))
  sequence:Insert(0.65, transform:DOScale(V3One, 0.2))
  sequence:InsertCallback(0.85, function()
    if GameConfig.IsTestMode() then
      EventDispatcher.DispatchEvent(EEventType.TestPropertyMonitorItemFlyTarget, {
        FlyType = self.m_eFlyType,
        ItemType = self.m_itemType,
        Num = self.m_numText.text
      })
    end
    EventDispatcher.DispatchEvent(EEventType.ItemFlyTarget, self.m_eFlyType)
    self:RecycleSelf()
  end)
end

function ItemFlyView:Move2Target(targetPosition)
  targetPosition = Vector3(targetPosition.x, targetPosition.y, 0)
  UIUtil.SetActive(self.m_numOutl.gameObject, false)
  local transform = self.transform
  transform.localScale = Vector3.one * 0.9
  local sequence = DOTween.Sequence()
  sequence:Insert(0.05, transform:DOMove(targetPosition, 0.8):SetEase(Ease.OutQuad))
  sequence:Insert(0.15, transform:DOScale(Vector3(1.5, 1.5, 1), 0.2))
  sequence:Insert(0.35, transform:DOScale(Vector3(1, 1, 1), 0.3))
  sequence:Insert(0.65, transform:DOScale(V3One, 0.2))
  sequence:InsertCallback(0.85, function()
    if GameConfig.IsTestMode() then
      EventDispatcher.DispatchEvent(EEventType.TestPropertyMonitorItemFlyTarget, {
        FlyType = self.m_eFlyType,
        ItemType = self.m_itemType,
        Num = self.m_numText.text
      })
    end
    EventDispatcher.DispatchEvent(EEventType.ItemFlyTarget, self.m_eFlyType)
  end)
  sequence:OnComplete(function()
    self:RecycleSelf()
  end)
  sequence:SetLink(self.gameObject)
end

function ItemFlyView:UpdateEffect(bShowEffect)
  UIUtil.SetActive(self.transform:GetChild(2).gameObject, bShowEffect)
end

function ItemFlyView:UpdateNumText(bShow)
  UIUtil.SetActive(self.m_numText.gameObject, bShow)
end

function ItemFlyView:SetNum(num)
  self.m_numText.text = num
end

function ItemFlyView:RecycleSelf()
  if not self.gameObject:IsNull() then
    self.transform.localScale = V3One
    UIUtil.SetAlpha(self.m_numText, 1)
    self.m_viewFactory:RecycleFlyItem(self)
  end
end
