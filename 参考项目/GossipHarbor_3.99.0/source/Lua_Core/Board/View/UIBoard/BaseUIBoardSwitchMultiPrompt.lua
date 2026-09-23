BaseUIBoardSwitchMultiPrompt = {}
BaseUIBoardSwitchMultiPrompt.__index = BaseUIBoardSwitchMultiPrompt
BaseUIBoardSwitchMultiPrompt.ShowList = {}

function BaseUIBoardSwitchMultiPrompt:Show(ratio)
  table.insert(BaseUIBoardSwitchMultiPrompt.ShowList, self)
  if BaseUIBoardSwitchMultiPrompt.SortingOrder == nil then
    BaseUIBoardSwitchMultiPrompt.SortingOrder = ESpecialViewSortingOrder.Prompt
  end
  local curModeOn = 0 < ratio
  self.m_normalText.text = GM.GameTextModel:GetText("miniboard_boost_hint_x" .. tostring(MathUtil.IntPow(2, ratio)))
  self.m_bgImage.sprite = self["m_energyboost_" .. tostring(ratio)]
  self.m_canvas.sortingOrder = BaseUIBoardSwitchMultiPrompt.SortingOrder
  BaseUIBoardSwitchMultiPrompt.SortingOrder = BaseUIBoardSwitchMultiPrompt.SortingOrder + 1
  UIUtil.SetAlpha(self.m_normalText, 0)
  UIUtil.SetAlpha(self.m_bgImage, 0)
  local seq = DOTween.Sequence()
  seq:Append(self.m_normalText:DOFade(1, 0.2))
  seq:Join(self.m_bgImage:DOFade(1, 0.2))
  seq:Join(self.transform:DOAnchorPosY(75, 0.3))
  seq:Join(self.transform:DOScaleY(1.2, 0.3))
  seq:Append(self.transform:DOAnchorPosY(30, 0.1))
  seq:Join(self.transform:DOScaleY(1, 0.1))
  seq:Append(self.transform:DOAnchorPosY(45, 0.1))
  seq:AppendInterval(1)
  seq:Append(self.m_normalText:DOFade(0, 0.15))
  seq:Join(self.m_bgImage:DOFade(0, 0.15))
  seq:Join(self.transform:DOScale(curModeOn and 1.5 or 0.5, 0.15))
  
  function seq.onComplete()
    Table.ListRemove(BaseUIBoardSwitchMultiPrompt.ShowList, self)
    if #BaseUIBoardSwitchMultiPrompt.ShowList == 0 then
      BaseUIBoardSwitchMultiPrompt.SortingOrder = ESpecialViewSortingOrder.Prompt
    end
    AddressableLoader.Destroy(self.gameObject)
  end
end
