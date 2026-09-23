SwallowInfoCell = {}
SwallowInfoCell.__index = SwallowInfoCell

function SwallowInfoCell:UpdateContent(info)
  local spriteName = GM.ItemDataModel:GetSpriteName(info.Code)
  self.m_iconImage.enabled = false
  SpriteUtil.SetImage(self.m_iconImage, spriteName, true)
  self.m_tipButton:UpdateItemType(info.Code, ItemDetailWindowMode.Normal)
  if info.Swallowed < info.Count then
    self.m_checkGo:SetActive(false)
    self.m_progressText.gameObject:SetActive(true)
    self.m_progressText.text = info.Swallowed .. "/" .. info.Count
  else
    self.m_progressText.gameObject:SetActive(false)
    self.m_checkGo:SetActive(true)
  end
end

function SwallowInfoCell:SetTipButtonEnabled(enabled)
  self.m_tipButton:SetEnabled(enabled)
end
