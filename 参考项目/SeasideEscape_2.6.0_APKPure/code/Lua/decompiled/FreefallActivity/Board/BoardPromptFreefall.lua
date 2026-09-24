FreefallBoardPromptType = {CollectItems = 1, MergeItems = 2}
BoardPromptFreefallMergeItems = setmetatable({}, BoardPromptMergeItems)
BoardPromptFreefallMergeItems.__index = BoardPromptFreefallMergeItems

function BoardPromptFreefallMergeItems.Create()
  local prompt = setmetatable({}, BoardPromptFreefallMergeItems)
  prompt:Init(FreefallBoardPromptType.MergeItems)
  return prompt
end

BoardPromptFreefallCollectMaxLevelActivityItems = setmetatable({}, BoardPrompt)
BoardPromptFreefallCollectMaxLevelActivityItems.__index = BoardPromptFreefallCollectMaxLevelActivityItems

function BoardPromptFreefallCollectMaxLevelActivityItems.Create()
  local prompt = setmetatable({}, BoardPromptFreefallCollectMaxLevelActivityItems)
  prompt:Init(FreefallBoardPromptType.CollectItems)
  return prompt
end

function BoardPromptFreefallCollectMaxLevelActivityItems:CanStart(boardView)
  local boardModel = boardView:GetModel()
  local validItems = {}
  for position in FreefallActivityBoardModel.GetValidPositionIterator() do
    local item = boardModel:GetItem(position)
    if item ~= nil then
      local itemCollectable = item:GetComponent(ItemCollectable)
      if itemCollectable ~= nil then
        validItems[#validItems + 1] = item
      end
    end
  end
  if 0 < #validItems then
    self.m_validItem = Table.ListRandomSelectOne(validItems)
    return true
  end
  return false
end

function BoardPromptFreefallCollectMaxLevelActivityItems:Start(boardView)
  if self.m_validItem == nil then
    return
  end
  local itemView = boardView:GetItemView(self.m_validItem)
  if itemView == nil then
    return
  end
  boardView:ShowHandEffect(itemView.transform.position)
end

function BoardPromptFreefallCollectMaxLevelActivityItems:Stop(boardView)
  boardView:HideHandEffect()
  self.m_validItem = nil
end
