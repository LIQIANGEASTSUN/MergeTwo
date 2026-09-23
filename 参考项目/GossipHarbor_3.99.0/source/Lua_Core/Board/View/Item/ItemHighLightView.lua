ItemHighLightView = {}
ItemHighLightView.__index = ItemHighLightView

function ItemHighLightView:Init(itemType, sourceItemView)
  local spriteName = GM.ItemDataModel:GetSpriteName(itemType)
  SpriteUtil.SetSpriteRenderer(self.m_itemSprite, spriteName)
  self.mpb = CS.UnityEngine.MaterialPropertyBlock()
  self.m_sourceItemView = sourceItemView
end

function ItemHighLightView:SetHighlight(renderer, value)
  renderer:GetPropertyBlock(self.mpb)
  self.mpb:SetFloat("_HighlightAmount", value)
  renderer:SetPropertyBlock(self.mpb)
end

function ItemHighLightView:Show(highDuration, normalDuration)
  local seq = DOTween.Sequence()
  self:SetHighlight(self.m_itemSprite, 1)
  seq:AppendInterval(0.15)
  seq:Append(DOVirtual.Float(1, 0, normalDuration or 0.2, function(value)
    self:SetHighlight(self.m_itemSprite, value)
  end))
  seq:AppendCallback(function()
    self.m_seq = nil
    if not self.gameObject:IsNull() then
      AddressableLoader.Destroy(self.gameObject)
    end
  end)
  self.m_seq = seq
end

function ItemHighLightView:OnDestroy()
  if self.m_seq then
    self.m_seq:Complete(true)
    self.m_seq = nil
  end
end
