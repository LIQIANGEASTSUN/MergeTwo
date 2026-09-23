TestShowBoardItemInnerTypeWindow = {}
TestShowBoardItemInnerTypeWindow.__index = TestShowBoardItemInnerTypeWindow
TestShowBoardItemInnerTypeWindow = setmetatable({}, BaseWindow)
TestShowBoardItemInnerTypeWindow.__index = TestShowBoardItemInnerTypeWindow

function TestShowBoardItemInnerTypeWindow:Init()
  self.m_boardModel, self.m_boardView = BoardModelHelper.GetActiveModel()
  if self.m_boardModel == nil or self.m_boardView == nil then
    GM.UIManager:ShowPrompt("\230\178\161\230\137\190\229\136\176\229\175\185\229\186\148\231\154\132\230\163\139\231\155\152")
    return
  end
  local baseScale = self.m_boardModel.TileSize / 145
  local tileSize = 200 * baseScale
  local boardWidth = tileSize * self.m_boardModel.HorizontalTiles
  local canvasRoot = GM.UIManager:GetCanvasRoot()
  local lossyX = self.m_scrollViewRectTrans.lossyScale.x
  if canvasRoot and 0 < lossyX and 0 < boardWidth then
    local availableWidth = canvasRoot.rect.width
    local fit = availableWidth / (boardWidth * lossyX)
    baseScale = baseScale * fit
    tileSize = tileSize * fit
    boardWidth = boardWidth * fit
  end
  UIUtil.SetSizeDelta(self.m_scrollViewRectTrans, boardWidth)
  local cellOrigin = self.m_originGo:GetLuaTable()
  local bgSize = cellOrigin.m_tileImg.rectTransform.sizeDelta
  local cellHeight = tileSize
  if bgSize.x > 0 then
    cellHeight = tileSize * bgSize.y / bgSize.x
  end
  self.m_contentLayoutGroup.cellSize = Vector2(tileSize, cellHeight)
  cellOrigin:SetTileScale(Vector3(baseScale, baseScale, 1))
  self.m_cells = {}
  self.showCode = self.m_showNameToggle.isOn
  self.showInnerCode = self.m_showInnerTypeToggle.isOn
  self.showFogColor = self.m_fogWithColorToggle.isOn
  if self.m_textOriginSize == nil then
    self.m_textOriginSize = cellOrigin:GetTextSize()
  else
    cellOrigin:SetTextSize(self.m_textOriginSize)
  end
  self.m_isBigText = false
  self.m_cells = {}
  self:UpdatePanel()
end

function TestShowBoardItemInnerTypeWindow:OnTabChanged()
  self:UpdatePanel()
end

function TestShowBoardItemInnerTypeWindow:UpdatePanel()
  for _, cell in ipairs(self.m_cells) do
    GameObject.Destroy(cell.gameObject)
  end
  self.m_cells = {}
  if self.m_initBoardBtnToggle.isOn then
    local itemModel, cellObj, cell
    local initCodeMap = self.m_boardModel:GetInitCodeMapAndMaxDepth()
    local idx = 0
    for y, codes in ipairs(initCodeMap) do
      for x, code in ipairs(codes) do
        cellObj = GameObject.Instantiate(self.m_originGo, self.m_contentLayoutGroup.gameObject.transform)
        cellObj:SetActive(true)
        cell = cellObj:GetLuaTable()
        cell:Init(code, BoardPosition.Create(x, y), self)
        table.insert(self.m_cells, cell)
      end
    end
  elseif self.m_curBoardBtnToggle.isOn then
    local itemModel, cellObj, cell
    for position in self.m_boardModel:GetValidPositionIterator() do
      cellObj = GameObject.Instantiate(self.m_originGo, self.m_contentLayoutGroup.gameObject.transform)
      cellObj:SetActive(true)
      cell = cellObj:GetLuaTable()
      itemModel = self.m_boardModel:GetItem(position)
      cell:Init(itemModel and itemModel:GetCode() or "0", position, self)
      table.insert(self.m_cells, cell)
    end
  end
end

function TestShowBoardItemInnerTypeWindow:GetBoardView()
  return self.m_boardView
end

function TestShowBoardItemInnerTypeWindow:GetBoardModel()
  return self.m_boardModel
end

function TestShowBoardItemInnerTypeWindow:OnShowCodeChanged()
  self.showCode = self.m_showNameToggle.isOn
  for _, cell in ipairs(self.m_cells) do
    cell:ShowName(self.showCode)
  end
end

function TestShowBoardItemInnerTypeWindow:OnShowInnerCodeChanged()
  self.showInnerCode = self.m_showInnerTypeToggle.isOn
  self:UpdatePanel()
end

function TestShowBoardItemInnerTypeWindow:OnShowFogColorChanged()
  self.showFogColor = self.m_fogWithColorToggle.isOn
  self:UpdatePanel()
end

function TestShowBoardItemInnerTypeWindow:OnBiggerTextSizeChanged()
  self.m_isBigText = not self.m_isBigText
  local curTextSize = self.m_isBigText and math.floor(self.m_textOriginSize * 1.5) or self.m_textOriginSize
  self.m_originGo:GetLuaTable():SetTextSize(curTextSize)
  for _, cell in ipairs(self.m_cells) do
    cell:SetTextSize(curTextSize)
  end
end

TestShowBoardItemInnerTypeCell = {}
TestShowBoardItemInnerTypeCell.__index = TestShowBoardItemInnerTypeCell

function TestShowBoardItemInnerTypeCell:ParseCoverChain(code)
  if type(code) ~= "string" then
    return {}, tostring(code), ""
  end
  ItemModelFactory.GetCodePrefixTargetType(code)
  local typeMap = ItemModelFactory.s_codePrefixItemTypeMap
  local covers, rest, prefixLen = {}, code, 0
  while true do
    local matched = false
    if StringUtil.StartWith(rest, ItemCodePrefix.ObstacleClear) then
      local n = string.len(ItemCodePrefix.ObstacleClear)
      prefixLen, rest, matched = prefixLen + n, string.sub(rest, n + 1), true
    else
      for prefix, itemType in pairs(typeMap) do
        if StringUtil.StartWith(rest, prefix) then
          table.insert(covers, itemType)
          local n = string.len(prefix)
          prefixLen, rest = prefixLen + n, string.sub(rest, n + 1)
          if prefix == ItemCodePrefix.Fog then
            local h = string.find(rest, "#")
            if h then
              prefixLen, rest = prefixLen + h, string.sub(rest, h + 1)
            end
          end
          matched = true
          break
        end
      end
    end
    if not matched then
      break
    end
  end
  return covers, rest, string.sub(code, 1, prefixLen)
end

function TestShowBoardItemInnerTypeCell:Init(code, position, window)
  local boardView = window:GetBoardView()
  self.m_code = code
  self:ShowName(window.showCode)
  if code == "0" then
    self.m_iconImg.gameObject:SetActive(false)
    self.m_nameText.text = ""
    self:ShowCoverLayer(nil, "")
  else
    local itemModel = ItemModelFactory.CreateWithCode(window:GetBoardModel(), position, code)
    local itemView = boardView.m_itemViewFactory:Create(boardView, itemModel)
    local covers, innerName, prefix = self:ParseCoverChain(code)
    self.m_nameText.text = innerName
    self:ShowCoverLayer(covers, prefix, itemView, position)
    local itemType = itemModel:GetType()
    if itemType == ItemType.Bubble then
      local itemBubble = itemModel:GetComponent(ItemBubble)
      SpriteUtil.SetImage(self.m_iconImg, itemBubble:GetSpriteName(), true)
      self.m_iconImg2.gameObject:SetActive(true)
      self:SetInnerIcon(self.m_iconImg2, itemView:GetSpriteName(itemBubble:GetInnerItemCode()))
    elseif itemType == ItemType.RewardBubble then
      self:SetInnerIcon(self.m_iconImg, itemView:GetSpriteName(ItemType.RewardBubble))
      local itemCollectable = itemModel:GetComponent(ItemCollectable)
      local reward = itemCollectable:GetRewards()[1]
      local data = RewardApi.ConvertDynamicReward(reward)
      local image, setNativeSize = RewardApi.GetRewardIconNameAndIsSetNativeSize(data[PROPERTY_TYPE])
      self.m_iconImg2.gameObject:SetActive(true)
      SpriteUtil.SetImage(self.m_iconImg2, image)
      self.m_iconImg2.preserveAspect = true
    elseif itemType == ItemType.Locked then
      local itemLocked = itemModel:GetComponent(ItemLocked)
      if itemLocked:GetInnerItemCode() == "0" then
        self.m_iconImg.gameObject:SetActive(false)
      elseif window.showInnerCode then
        local innerType = ItemModelFactory.GetInnerTypeRecursive(itemModel:GetCode()) or itemModel:GetType()
        self:SetInnerIcon(self.m_iconImg, itemView:GetSpriteName(innerType))
      end
    else
      local itemType = itemModel:GetType()
      itemType = window.showInnerCode and ItemModelFactory.GetInnerTypeRecursive(itemModel:GetCode()) or itemType
      self:SetInnerIcon(self.m_iconImg, itemView:GetSpriteName(itemType))
    end
    if itemView:GetComponent(ItemFog) and not window.showInnerCode and window.showFogColor then
      local fogView = itemView:GetComponent(ItemFog)
      local fogId = fogView.m_model:GetFogId()
      local config = window:GetBoardModel():GetFogModel():GetFogConfigById(fogId)
      self.m_iconImg.color = self:GetColor(config.index)
    end
    boardView.m_itemViewFactory:RecycleItem(itemView)
  end
  if (position:GetX() + position:GetY()) % 2 == 0 then
    SpriteUtil.SetImage(self.m_tileImg, boardView.Tile1Sprite)
  else
    SpriteUtil.SetImage(self.m_tileImg, boardView.Tile2Sprite)
  end
end

function TestShowBoardItemInnerTypeCell:ShowCoverLayer(covers, prefix, itemView, position)
  if self.m_topLayerGo == nil then
    return
  end
  self.m_iconTemplateImg.gameObject:SetActive(false)
  local iconParent = self.m_iconTemplateImg.transform.parent
  for i = iconParent.childCount - 1, 0, -1 do
    local child = iconParent:GetChild(i)
    if child.gameObject ~= self.m_iconTemplateImg.gameObject then
      GameObject.Destroy(child.gameObject)
    end
  end
  if covers == nil or #covers == 0 then
    self.m_topLayerGo:SetActive(false)
    return
  end
  self.m_prefixText.text = prefix
  for _, coverType in ipairs(covers) do
    local go = GameObject.Instantiate(self.m_iconTemplateImg.gameObject, iconParent)
    go:SetActive(true)
    local img = go:GetComponent(typeof(Image))
    img.preserveAspect = true
    local spriteName = itemView and itemView:GetSpriteName(coverType) or GM.ItemDataModel:GetSpriteName(coverType)
    if coverType == ItemType.Locked then
      local boardMolel = BoardModelHelper.GetActiveModel()
      local obstacleLayerModel = boardMolel:GetObstacleLayerModel()
      local obstacleModels = obstacleLayerModel and obstacleLayerModel:GetObstacleModels()
      if not obstacleModels then
        Log.Error("[TestShowBoardItemInnerTypeCell:ShowCoverLayer] \230\178\161\230\156\137\230\137\190\229\136\176\233\154\156\231\162\141\231\137\169\230\168\161\229\158\139")
      end
      for _, obstacleModel in pairs(obstacleModels) do
        local leftTop, rightBottom = obstacleModel:GetPosition()
        if leftTop and rightBottom and position then
          local isInsideX = position:GetX() >= leftTop:GetX() and position:GetX() <= rightBottom:GetX()
          local isInsideY = position:GetY() >= leftTop:GetY() and position:GetY() <= rightBottom:GetY()
          if isInsideX and isInsideY then
            local toolIconName = obstacleModel:GetToolIconName()
            if toolIconName and toolIconName ~= "" then
              spriteName = toolIconName
            end
            break
          end
        end
      end
    end
    SpriteUtil.SetImage(img, spriteName, false)
  end
  self.m_topLayerGo:SetActive(true)
end

function TestShowBoardItemInnerTypeCell:SetInnerIcon(img, key)
  img.preserveAspect = true
  SpriteUtil.SetImage(img, key, false)
end

function TestShowBoardItemInnerTypeCell:ShowName(isShow)
  self.m_nameBgGo:SetActive(self.m_code ~= "0" and isShow)
  if self.m_prefixText ~= nil then
    self.m_prefixText.gameObject:SetActive(isShow)
  end
end

function TestShowBoardItemInnerTypeCell:SetTileScale(scale)
  self.transform.localScale = scale
end

function TestShowBoardItemInnerTypeCell:SetTextSize(size)
  self.m_nameText.fontSize = size
end

function TestShowBoardItemInnerTypeCell:GetTextSize()
  return self.m_nameText.fontSize
end

function TestShowBoardItemInnerTypeCell:OnCellBtnClicked()
  GM.UIManager:ShowPrompt(self.m_code)
end

function TestShowBoardItemInnerTypeCell:GetColor(index)
  local colors = {
    CSColor(1, 0, 0, 1),
    CSColor(0, 1, 0, 1),
    CSColor(0, 0, 1, 1),
    CSColor(1, 1, 0, 1),
    CSColor(0, 1, 1, 1),
    CSColor(1, 0, 1, 1),
    CSColor(0.753, 0.753, 0.753, 1),
    CSColor(0.502, 0.502, 0.502, 1),
    CSColor(0.251, 0.251, 0.251, 1),
    CSColor(1, 0.651, 0, 1),
    CSColor(0.5, 0, 0.5, 1),
    CSColor(1, 0.843, 0, 1),
    CSColor(1, 0.388, 0.278, 1),
    CSColor(0.341, 0.545, 0.455, 1),
    CSColor(1, 0.545, 0.376, 1),
    CSColor(0, 0, 0.545, 1),
    CSColor(0.529, 0.816, 1, 1),
    CSColor(1, 0.647, 0.745, 1),
    CSColor(0.271, 0.557, 0.459, 1),
    CSColor(1, 0.271, 0.075, 1),
    CSColor(1, 0.059, 0.498, 1),
    CSColor(0.545, 0, 0.545, 1),
    CSColor(1, 0.718, 0.749, 1),
    CSColor(1, 0.412, 0.341, 1),
    CSColor(1, 0.545, 0.412, 1),
    CSColor(1, 0.894, 0.71, 1),
    CSColor(1, 0.957, 0.765, 1),
    CSColor(1, 0.388, 0.278, 1),
    CSColor(0.941, 0.502, 0.502, 1),
    CSColor(0.545, 0.137, 0.137, 1),
    CSColor(1, 0.969, 0.561, 1),
    CSColor(1, 0.627, 0.478, 1)
  }
  return colors[index % #colors + 1]
end
