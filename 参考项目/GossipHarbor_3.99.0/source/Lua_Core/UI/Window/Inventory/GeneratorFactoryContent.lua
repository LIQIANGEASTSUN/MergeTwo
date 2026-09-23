GeneratorFactoryContent = {}
GeneratorFactoryContent.__index = GeneratorFactoryContent

function GeneratorFactoryContent:Init()
  local arrGenFactoryPos = {
    {
      Vector2(-264, 247),
      Vector2(-262, 183)
    },
    {
      Vector2(-3, 247),
      Vector2(0, 183)
    },
    {
      Vector2(258, 247),
      Vector2(262, 183)
    },
    {
      Vector2(-264, -469),
      Vector2(-262, -183)
    },
    {
      Vector2(-3, -469),
      Vector2(0, -183)
    },
    {
      Vector2(258, -469),
      Vector2(262, -183)
    }
  }
  self.m_selectIndex = GM.MainBoardModel:GetGenFactoryDefaultIndex()
  local genType = ItemGeneratorFactoryType[self.m_selectIndex]
  self.m_items = {}
  for i, type in ipairs(ItemGeneratorFactoryType) do
    self.m_items[type] = Object.Instantiate(self.m_itemCellPrefab, self.m_itemCellsRectTrans):GetLuaTable()
    self.m_items[type]:Init(self, type, arrGenFactoryPos[i], i, self.m_selectIndex)
  end
  self.m_detailCellLuaTable:Init(genType, arrGenFactoryPos[self.m_selectIndex][2], self.m_items[genType])
  for _, tb in pairs(self.m_items) do
    tb:UpdateSelect(index)
  end
end

function GeneratorFactoryContent:UpdateItemCell(index, genType)
  self.m_items[index]:UpdateView(genType)
end

function GeneratorFactoryContent:UpdateDetailCell(genType, arrowPos, selectIndex)
  if self.m_selectIndex == selectIndex then
    return
  end
  self.m_selectIndex = selectIndex
  self.m_detailCellLuaTable:UpdateView(genType, arrowPos, self.m_items[genType])
  for _, tb in pairs(self.m_items) do
    tb:UpdateSelect(selectIndex)
  end
end

function GeneratorFactoryContent:RestartPrompt()
  self.m_detailCellLuaTable:RestartPrompt()
end

function GeneratorFactoryContent:CancelPrompt()
  self.m_detailCellLuaTable:CancelPrompt()
end

function GeneratorFactoryContent:IsRedPointTip()
  for _, tb in pairs(self.m_items) do
    if tb:IsRedPointTip() then
      return true
    end
  end
  return false
end
