ItemTempView = setmetatable({}, BaseItemViewComponent)
ItemTempView.__index = ItemTempView

function ItemTempView:Init(itemTempModel)
  self.m_model = itemTempModel
  self:UpdatePerSecond()
end

function ItemTempView:UpdatePerSecond()
  if self.m_itemView ~= nil and self.m_itemView.toBeRemoved then
    return
  end
  if self.m_model == nil then
    return
  end
  self.m_countdownImage.fillAmount = 1 - self.m_model:GetTimerAmount()
end
