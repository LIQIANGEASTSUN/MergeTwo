ItemPaperBoxView = setmetatable({}, BaseItemViewComponent)
ItemPaperBoxView.__index = ItemPaperBoxView

function ItemPaperBoxView:Init(itemPaperBox)
  self.m_model = itemPaperBox
end

function ItemPaperBoxView:PlayUnlockShockedAnimation()
  return 0
end
