SwallowItemIndicator = {}
SwallowItemIndicator.__index = SwallowItemIndicator
SwallowItemIndicator.LocalZ = -10

function SwallowItemIndicator:UpdateIndicator(selectedItemModel)
  local itemSwallow = selectedItemModel and selectedItemModel:GetComponent(ItemSwallow)
  if itemSwallow == nil then
    self.gameObject:SetActive(false)
    return
  end
  self.gameObject:SetActive(true)
  local boardPosition = selectedItemModel:GetPosition()
  self.transform.localPosition = selectedItemModel:GetLocalPositionOverrideZ(SwallowItemIndicator.LocalZ)
  local boardModel = selectedItemModel:GetBoardModel()
  self.transform.localScale = Vector3(boardPosition:GetX() == boardModel.HorizontalTiles and -1 or 1, 1, 1)
  self.m_groupTransform.localScale = Vector3(boardPosition:GetX() == boardModel.HorizontalTiles and -1 or 1, 1, 1)
  local displayItems = {}
  for _, info in ipairs(itemSwallow:GetSwallowInfo()) do
    if info.Swallowed < info.Count then
      table.insert(displayItems, info.Code)
    end
  end
  if #displayItems == 1 then
    self.m_board.sizeDelta = Vector2(350, 263)
    self.m_item2Image.gameObject:SetActive(false)
  else
    self.m_board.sizeDelta = Vector2(504, 263)
    self.m_item2Image.gameObject:SetActive(true)
  end
  for index, code in ipairs(displayItems) do
    local spriteName = GM.ItemDataModel:GetSpriteName(code)
    local imageName = "m_item" .. index .. "Image"
    self[imageName].enabled = false
    SpriteUtil.SetImage(self[imageName], spriteName, true)
  end
  self.m_board.transform.localScale = Vector3.zero
  local sequence = DOTween.Sequence()
  sequence:Append(self.m_board.transform:DOScale(0.45, 0.15))
  sequence:Append(self.m_board.transform:DOScale(0.4, 0.03))
end
