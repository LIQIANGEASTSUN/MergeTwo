ItemSpreadPrompt = {}
ItemSpreadPrompt.__index = ItemSpreadPrompt

function ItemSpreadPrompt:OnPromptFinished()
  AddressableLoader.Destroy(self.gameObject)
end

function ItemSpreadPrompt:Init(args)
  if self.m_text and args then
    self.m_text.text = GM.GameTextModel:GetText(args.textKey)
    local textColor = args.textColor or "FF0000"
    local outlineColor = args.UIoutlineColor or "FFFFFF"
    self.m_text.color = UIUtil.ConvertHexColor2CSColor(textColor)
    self.m_textUIOutline.outlineColor = UIUtil.ConvertHexColor2CSColor(outlineColor)
  end
end
