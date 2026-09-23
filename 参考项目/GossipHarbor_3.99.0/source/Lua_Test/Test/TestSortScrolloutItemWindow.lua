TestSortScrolloutItemWindow = {}
TestSortScrolloutItemWindow.__index = TestSortScrolloutItemWindow
TestSortScrolloutItemWindow = setmetatable({}, BaseWindow)
TestSortScrolloutItemWindow.__index = TestSortScrolloutItemWindow

function TestSortScrolloutItemWindow:Init()
  self.m_boardModel, self.m_boardView = BoardModelHelper.GetActiveModel()
  self.showCode = false
  self:UpdateShowCodeText()
  if self.m_boardModel == nil or self.m_boardView == nil then
    GM.UIManager:ShowPrompt("\230\178\161\230\137\190\229\136\176\229\175\185\229\186\148\231\154\132\230\163\139\231\155\152")
    return
  end
  self.m_cellMatrix = self.m_boardModel:CreateMatrix()
  self.m_cellSize = self.m_boardModel.TileSize
  UIUtil.SetSizeDelta(self.m_boardRectTrans, self.m_boardModel.TileSize * self.m_boardModel.HorizontalTiles, self.m_boardModel.TileSize * self.m_boardModel.VerticalTiles)
  self.m_contentLayoutGroup.cellSize = Vector2(self.m_boardModel.TileSize, self.m_boardModel.TileSize)
  local cellObj, cell
  self.m_cells = {}
  local items = self.m_boardModel:GetAllBoardItems()
  local waitScrollOutItems = {}
  for item, _ in pairs(items) do
    local innerCode = ItemModelFactory.GetInnerTypeRecursive(item:GetCode())
    local itemData = {item = item, innerCode = innerCode}
    table.insert(waitScrollOutItems, itemData)
  end
  self.m_boardModel:SortScrollToCacheItems(waitScrollOutItems)
  if self.m_boardModel.CacheItemType == CacheItemType.Type2 then
    local reverse = Table.Reverse(waitScrollOutItems)
    waitScrollOutItems = reverse
  end
  local index = 0
  for position in self.m_boardModel:GetValidPositionIterator() do
    index = index + 1
    cellObj = GameObject.Instantiate(self.m_originGo, self.m_contentLayoutGroup.gameObject.transform)
    cellObj:SetActive(true)
    cell = cellObj:GetLuaTable()
    self.m_cellMatrix:SetValueOnPosition(position, cell)
    cell:Init(waitScrollOutItems[index] and waitScrollOutItems[index].item or nil, position, self)
    table.insert(self.m_cells, cell)
  end
end

function TestSortScrolloutItemWindow:GetBoardView()
  return self.m_boardView
end

function TestSortScrolloutItemWindow:OnShowCodeClicked()
  self.showCode = not self.showCode
  for _, cell in ipairs(self.m_cells) do
    cell:ShowName(self.showCode)
  end
  self:UpdateShowCodeText()
end

function TestSortScrolloutItemWindow:UpdateShowCodeText()
  self.m_showCodeText.text = self.showCode and "\233\154\144\232\151\143\230\163\139\229\173\144Code" or "\230\152\190\231\164\186\230\163\139\229\173\144Code"
end

TestSortScrolloutItem = {}
TestSortScrolloutItem.__index = TestSortScrolloutItem

function TestSortScrolloutItem:Init(itemModel, boardPosition, window)
  local boardView = window:GetBoardView()
  self.m_itemModel = itemModel
  self:ShowName(window.showCode)
  if itemModel == nil then
    self.m_iconImg.gameObject:SetActive(false)
    self.m_nameText.text = ""
  else
    self.m_nameText.text = self.m_itemModel:GetCode()
    local itemView = boardView:GetItemView(self.m_itemModel)
    local itemType = self.m_itemModel:GetType()
    if itemType == ItemType.Bubble then
      local itemBubble = itemModel:GetComponent(ItemBubble)
      SpriteUtil.SetImage(self.m_iconImg, itemBubble:GetSpriteName(), true)
      self.m_iconImg2.gameObject:SetActive(true)
      SpriteUtil.SetImage(self.m_iconImg2, itemView:GetSpriteName(itemBubble:GetInnerItemCode()))
    elseif itemType == ItemType.RewardBubble then
      SpriteUtil.SetImage(self.m_iconImg, itemView:GetSpriteName(ItemType.RewardBubble), true)
      local itemCollectable = itemModel:GetComponent(ItemCollectable)
      local reward = itemCollectable:GetRewards()[1]
      local data = RewardApi.ConvertDynamicReward(reward)
      local image, setNativeSize = RewardApi.GetRewardIconNameAndIsSetNativeSize(data[PROPERTY_TYPE])
      self.m_iconImg2.gameObject:SetActive(true)
      SpriteUtil.SetImage(self.m_iconImg2, image)
      self.m_iconImg2.preserveAspect = true
    else
      local itemType = ItemModelFactory.GetInnerTypeRecursive(self.m_itemModel:GetCode()) or self.m_itemModel:GetType()
      SpriteUtil.SetImage(self.m_iconImg, itemView:GetSpriteName(itemType), true)
    end
  end
  for position, tileSprite in pairs(boardView.m_tileMap) do
    if position == boardPosition then
      self.m_tileImg.sprite = tileSprite.sprite
      break
    end
  end
end

function TestSortScrolloutItem:ShowName(isShow)
  self.m_nameBgGo:SetActive(self.m_itemModel and isShow)
end
