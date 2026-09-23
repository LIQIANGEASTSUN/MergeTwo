MergeEffectManager = {}
MergeEffectManager.__index = MergeEffectManager

function MergeEffectManager:GetPrefab(itemLevel)
  return self["m_effect_lv" .. math.min(itemLevel, 11)]
end
