MainBoardButton = setmetatable({}, HudGeneralButton)
MainBoardButton.__index = MainBoardButton

function MainBoardButton:Awake()
  HudGeneralButton.Awake(self)
  local imageName = GM.DataResource:IsInseasonEnabled() and ImageFileConfigName.inseason_icon_transition_button or ImageFileConfigName.icon_transition_button
  SpriteUtil.SetImage(self.m_MainBoardButtonImg, imageName, true, function()
    self.m_originSizeDelta = self.m_MainBoardButtonImg.sprite.rect.size
  end)
end
