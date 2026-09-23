BaseItemViewComponent = {}
BaseItemViewComponent.__index = BaseItemViewComponent

function BaseItemViewComponent:SetItemView(itemView)
  self.m_itemView = itemView
end

function BaseItemViewComponent:SetFlying(flying)
end

function BaseItemViewComponent:OnRecycle()
  self:OnDestroy()
end

function BaseItemViewComponent:OnDestroy()
end
