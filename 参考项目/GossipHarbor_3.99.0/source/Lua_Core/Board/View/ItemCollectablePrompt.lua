ItemCollectablePrompt = {}
ItemCollectablePrompt.__index = ItemCollectablePrompt

function ItemCollectablePrompt:Init(reward)
  local propertyType = reward[PROPERTY_TYPE]
  local colorData = ItemUtility.GetCollectableColor(propertyType)
  self.m_text.color = colorData.text
  self.m_textUIOutline.outlineColor = colorData.outline
  self.m_text.text = "+" .. tostring(reward[PROPERTY_COUNT])
end

function ItemCollectablePrompt:OnPromptFinished()
  AddressableLoader.Destroy(self.gameObject)
end
