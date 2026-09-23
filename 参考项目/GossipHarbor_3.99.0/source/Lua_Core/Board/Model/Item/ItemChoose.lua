ItemChoose = setmetatable({}, BaseItemComponent)
ItemChoose.__index = ItemChoose

function ItemChoose.Create(chooseConfig)
  local itemChoose = setmetatable({}, ItemChoose)
  itemChoose:Init(chooseConfig)
  return itemChoose
end

function ItemChoose:Init(chooseConfig)
  self.m_choices = chooseConfig
end

function ItemChoose:OnChoose(index)
  local boardModel = self.m_itemModel:GetBoardModel()
  local choices = self:GetChoices()
  local choice = choices[index]
  local newItem = boardModel:ReplaceItem(self.m_itemModel, choice)
  boardModel.event:Call(BoardEventType.ChooseItem, {
    Source = self.m_itemModel,
    New = newItem
  })
  GM.BIManager:LogSpread(self.m_itemModel:GetCode(), newItem:GetCode(), {st = 0})
end

function ItemChoose:GetChoices()
  local len = #self.m_choices
  Log.Assert(3 <= len, "ItemModelConfig \228\184\137\233\128\137\228\184\128\230\163\139\229\173\144\233\133\141\231\189\174\230\149\176\233\135\143\229\176\143\228\186\1423")
  if #self.m_choices == 3 then
    return self.m_choices
  else
    return self:GetChoicesByRule()
  end
end

local function PrintLog(msg, tb)
  if GameConfig.IsTestMode() then
    if not tb then
      Log.Info("[ItemChoose]" .. msg)
    else
      local log = {
        msg = "[ItemChoose]" .. msg,
        value = tb
      }
      Log.PrintTable(log)
    end
  end
end

function ItemChoose:GetChoicesByRule()
  if GM.SceneManager:GetGameMode() ~= EGameMode.Main then
    if GameConfig.IsTestMode() then
      Log.Info("[ItemChoose]\230\179\168\230\132\143\239\188\154\233\157\158\228\184\187\230\163\139\231\155\152\239\188\140\231\155\180\230\142\165\232\191\148\229\155\158\229\137\141\228\184\137\228\184\170\239\188\140\228\184\141\229\129\154\231\173\155\233\128\137")
    end
    return {
      self.m_choices[1],
      self.m_choices[2],
      self.m_choices[3]
    }
  end
  local boardModel = GM.MainBoardModel
  local orderModel = boardModel:GetOrderModel(OrderModelType.Slot)
  local orders = orderModel:GetOrders()
  if Table.IsEmpty(orders) then
    if GameConfig.IsTestMode() then
      Log.Info("[ItemChoose]\230\179\168\230\132\143\239\188\154\229\189\147\229\137\141\230\178\161\230\156\137\232\174\162\229\141\149\239\188\140\231\155\180\230\142\165\232\191\148\229\155\158\229\137\141\228\184\137\228\184\170")
    end
    return {
      self.m_choices[1],
      self.m_choices[2],
      self.m_choices[3]
    }
  end
  local existItemMap = boardModel:GetCodeCountMap(true, true, true)
  if GameConfig.IsTestMode() then
    Log.PrintTable(existItemMap, "[ItemChoose]\230\173\165\233\170\1641\239\188\154\231\173\155\233\128\137\229\135\186\229\189\147\229\137\141\230\163\139\231\155\152\227\128\129\228\187\147\229\186\147\227\128\129\231\188\147\229\173\152\233\152\159\229\136\151\228\184\173\231\154\132\230\163\139\229\173\144")
  end
  local candidateItemMap = {}
  local itemDataModel = GM.ItemDataModel
  for _, order in pairs(orders) do
    for _, requirement in ipairs(order:GetRequirements()) do
      if existItemMap[requirement] then
        existItemMap[requirement] = existItemMap[requirement] - 1
      end
      if not existItemMap[requirement] or existItemMap[requirement] < 0 then
        local chainId = itemDataModel:GetChainId(requirement)
        if not candidateItemMap[chainId] then
          candidateItemMap[chainId] = {}
        end
        candidateItemMap[chainId][requirement] = true
      end
    end
  end
  if GameConfig.IsTestMode() then
    Log.PrintTable(candidateItemMap, "[ItemChoose]\230\173\165\233\170\1642\239\188\154\233\166\150\229\133\136\228\187\142\230\137\128\230\156\137\232\174\162\229\141\149\231\180\162\232\166\129\230\163\139\229\173\144\228\184\173\231\173\155\233\128\137\239\188\140\231\173\155\233\128\137\229\135\186\231\142\169\229\174\182\231\154\132\230\163\139\231\155\152\227\128\129\228\187\147\229\186\147\227\128\129\231\188\147\229\173\152\233\152\159\229\136\151\228\184\173\233\131\189\230\178\161\230\156\137\231\154\132\230\163\139\229\173\144\239\188\140\230\136\150\232\128\133\229\173\152\229\156\168\228\189\134\230\149\176\233\135\143\228\184\141\232\182\179\231\154\132\230\163\139\229\173\144")
  end
  if not next(candidateItemMap) then
    return {
      self.m_choices[1],
      self.m_choices[2],
      self.m_choices[3]
    }
  end
  local choices = {}
  for idx, code in ipairs(self.m_choices) do
    local chainId = itemDataModel:GetChainId(code)
    if candidateItemMap[chainId] then
      local curLevel = itemDataModel:GetChainLevel(code)
      local maxNonPositiveDiffValue = -9999999
      for candidateCode, _ in pairs(candidateItemMap[chainId]) do
        local candidateLevel = itemDataModel:GetChainLevel(candidateCode)
        local diff = curLevel - candidateLevel
        if diff <= 0 and maxNonPositiveDiffValue < diff then
          maxNonPositiveDiffValue = diff
        end
      end
      if maxNonPositiveDiffValue ~= -9999999 then
        table.insert(choices, {
          idx = idx,
          code = code,
          diff = maxNonPositiveDiffValue
        })
      end
    end
  end
  if next(choices) then
    table.sort(choices, function(a, b)
      if a.diff ~= b.diff then
        return a.diff > b.diff
      else
        return a.idx < b.idx
      end
    end)
  end
  if GameConfig.IsTestMode() then
    Log.PrintTable(choices, "[ItemChoose]\230\173\165\233\170\1643\239\188\154\229\156\168Choices\233\133\141\231\189\174\230\163\139\229\173\144\228\184\173\231\173\155\233\128\137\229\135\186\228\184\142\230\173\165\233\170\1642\229\128\153\233\128\137\230\163\139\229\173\144\229\144\140\229\144\136\230\136\144\231\186\191\231\154\132\230\163\139\229\173\144\239\188\140\229\185\182\230\160\185\230\141\174\229\144\136\230\136\144\231\186\191\231\173\137\231\186\167\229\183\174\229\128\188\233\153\141\229\186\143\230\142\146\229\186\143")
  end
  local len = #choices
  local lackNum = 3 - len
  if 0 < lackNum then
    for i = 1, #self.m_choices do
      local hasIdx = false
      for j = 1, len do
        if choices[j].idx == i then
          hasIdx = true
          break
        end
      end
      if not hasIdx then
        table.insert(choices, {
          code = self.m_choices[i]
        })
        lackNum = lackNum - 1
      end
      if lackNum == 0 then
        break
      end
    end
  end
  if GameConfig.IsTestMode() then
    Log.PrintTable(choices, "[ItemChoose]\230\173\165\233\170\1644\239\188\154\229\166\130\230\158\156Choices\233\133\141\231\189\174\230\163\139\229\173\144\230\149\176\233\135\143\228\184\141\232\182\179\228\184\137\228\184\170\239\188\140\229\136\153\229\176\134\231\173\155\233\128\137\229\135\186\231\154\132\229\128\153\233\128\137\230\163\139\229\173\144\232\161\165\233\189\144\229\136\176\228\184\137\228\184\170\239\188\140\230\156\128\229\144\142\229\143\150\229\137\141\228\184\137\228\184\170\230\163\139\229\173\144")
  end
  return {
    choices[1].code,
    choices[2].code,
    choices[3].code
  }
end
