ItemGeneratorMergeTip = {}
ItemGeneratorMergeTip.__index = ItemGeneratorMergeTip

function ItemGeneratorMergeTip:Init(newType)
  self.m_newType = newType
end

function ItemGeneratorMergeTip:Play()
  GM.AudioModel:PlayEffect(AudioFileConfigName.sfxCardItemGenerate)
  self.m_effect_qipan_hc_glowParticle:Play()
  local seq = DOTween.Sequence()
  seq:Append(self.m_tipTextRectTrans:DOScale(2, 0.2))
  seq:Append(self.m_tipTextRectTrans:DOScale(1.45, 0.1))
  seq:Append(self.m_tipTextRectTrans:DOScale(2, 0.1))
  seq:Append(self.m_tipTextRectTrans:DOScale(1.6, 0.1))
  seq:AppendInterval(0.3)
  seq:AppendCallback(function()
    GM.UIManager:OpenViewWhenIdle(UIPrefabConfigName.NewGeneratorTipWindow, self.m_newType)
    GM.UIManager:SetEventLock(false)
  end)
  seq:AppendInterval(0.2)
  seq:Append(self.m_tipTextRectTrans:DOScale(0, 0.1))
  seq:OnComplete(function()
    self.gameObject:RemoveSelf()
  end)
end
