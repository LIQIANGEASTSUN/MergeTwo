ItemAccelerateTimeView = setmetatable({}, BaseItemViewComponent)
ItemAccelerateTimeView.__index = ItemAccelerateTimeView

function ItemAccelerateTimeView:Init(model)
  self.m_model = model
  AddHandlerAndRecordMap(self.m_model.event, ItemAccelerateItemEventType.UpdateView, {
    obj = self,
    method = self._UpdateView
  })
  self:_UpdateView()
end

function ItemAccelerateTimeView:OnDestroy()
  if self.m_model == nil then
    return
  end
  RemoveAllHandlers(self.m_model.event, self)
  self.m_model = nil
end

function ItemAccelerateTimeView:SetFlying(flying)
  self.m_flying = flying
  self:_UpdateView()
end

function ItemAccelerateTimeView:_UpdateView()
  if self.m_model == nil then
    return
  end
  local itemModel = self.m_model:GetItemModel()
  local canAccelerate = itemModel:GetComponent(ItemSpread) ~= nil and itemModel:GetComponent(ItemSpread):CanAccelerate() and itemModel:GetComponent(ItemSpread):ShowCountDown() or itemModel:GetComponent(ItemTransform) ~= nil and itemModel:GetComponent(ItemTransform):CanAccelerate()
  local visible = canAccelerate and self.m_model:IsAccelerated() and not self.m_flying
  if visible ~= self.m_effectGo.activeSelf then
    self.m_effectGo:SetActive(visible)
  end
end
