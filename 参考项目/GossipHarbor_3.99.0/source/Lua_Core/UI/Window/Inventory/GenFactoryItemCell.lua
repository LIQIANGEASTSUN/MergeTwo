GenFactoryItemCell = {}
GenFactoryItemCell.__index = GenFactoryItemCell

function GenFactoryItemCell:Init(genContent, genType, pos, index, selectIndex)
  self.m_genContent = genContent
  self.m_genType = genType
  self.m_index = index
  UIUtil.SetActive(self.m_glowGo, self.m_index == selectIndex)
  local iconName = RewardApi.GetRewardIconNameAndIsSetNativeSize(genType)
  SpriteUtil.SetImage(self.m_iconImg, iconName, true)
  self.gameObject.transform.anchoredPosition = pos[1]
  self.m_arrowPos = pos[2]
  self:UpdateContent()
end

function GenFactoryItemCell:UpdateContent()
  local tb = GM.MainBoardModel:GetGenDataByType(self.m_genType)
  local tbData = tb.data
  local score = 0
  local itemScore = 0
  if not Table.IsEmpty(tbData) then
    score = tbData.score or 0
    if not Table.IsEmpty(tbData.items) then
      for k, ct in pairs(tbData.items) do
        local n = tonumber(k) % 100
        itemScore = itemScore + 2 ^ (n - 1) * ct
      end
    end
  end
  local bMerge = score + itemScore >= tb.maxScore
  UIUtil.SetActive(self.m_slider.gameObject, not bMerge)
  UIUtil.SetActive(self.m_descGo, bMerge)
  self.m_slider.value = score / tb.maxScore
  self.m_progressText.text = string.format("%d/%d", score, tb.maxScore)
  self.m_bMerge = bMerge
  UIUtil.SetActive(self.m_exclamationGo, bMerge or 0 < itemScore)
  UIUtil.SetActive(self.m_boardGo, bMerge)
  UIUtil.SetActive(self.m_boardNormalGo, not bMerge)
  UIUtil.SetActive(self.m_bgGo2, bMerge)
  UIUtil.SetActive(self.m_bgNormalGo2, not bMerge)
end

function GenFactoryItemCell:UpdateSlider()
  local tb = GM.MainBoardModel:GetGenDataByType(self.m_genType)
  local tbData = tb.data
  local score = 0
  if tbData ~= nil and tbData.score ~= nil then
    score = tbData.score
  end
  self.m_progressText.text = string.format("%d/%d", score, tb.maxScore)
  self.m_slider:DOValue(score / tb.maxScore, 0.2)
end

function GenFactoryItemCell:UpdateSelect(selectIndex)
  UIUtil.SetActive(self.m_glowGo, self.m_index == selectIndex)
end

function GenFactoryItemCell:IsRedPointTip()
  return self.m_bMerge
end

function GenFactoryItemCell:_OnClicked()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  self.m_genContent:UpdateDetailCell(self.m_genType, self.m_arrowPos, self.m_index)
end
