BaseUIBoardFogModel = {}
BaseUIBoardFogModel.__index = BaseUIBoardFogModel
BaseUIBoardFogModel.FogUnlockedNum = "FogUnlockedNum_"

function BaseUIBoardFogModel.Create(boardModel, fileName, dbTable)
  local fogModel = setmetatable({}, BaseUIBoardFogModel)
  fogModel:Init(boardModel, fileName, dbTable)
  return fogModel
end

function BaseUIBoardFogModel:Init(boardModel, fileName, dbTable)
  self.m_boardModel = boardModel
  self.m_fileName = fileName
  self.m_dbTable = dbTable
  local fogConfig = require("Data.Config." .. fileName)
  self.m_config = {}
  for _, config in ipairs(fogConfig) do
    self.m_config[config.id] = config
  end
  self:_InitFogGroup()
  self:UpdateFogGroup()
end

function BaseUIBoardFogModel:_InitFogGroup()
  self.m_fogGroupMap = {}
  self.m_fogIds = {}
  self.m_fogMinMaxDepthMap = {}
  local isUnlockByLevel
  local initCodeMap, _ = self.m_boardModel:GetInitCodeMapAndMaxDepth()
  for row, codes in ipairs(initCodeMap) do
    for _, code in ipairs(codes) do
      if StringUtil.StartWith(code, ItemCodePrefix.Fog) then
        local fogId, _ = ItemFog.SplitCode(string.sub(code, string.len(ItemCodePrefix.Fog) + 1))
        if self.m_fogGroupMap[fogId] == nil then
          self.m_fogGroupMap[fogId] = {}
          table.insert(self.m_fogIds, fogId)
          if GameConfig.IsTestMode() then
            local config = self:GetFogConfigById(fogId)
            Log.Assert(config.unlockByItem == nil or config.unlockByLevel == nil, "[BaseUIBoardFogModel]fog\233\133\141\231\189\174\232\167\163\233\148\129\230\157\161\228\187\182\228\184\186\231\169\186\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174" .. self.m_fileName)
            Log.Assert(config.unlockByItem == nil or config.unlockByLevel == nil, "[BaseUIBoardFogModel]fog\233\133\141\231\189\174\232\167\163\233\148\129\230\157\161\228\187\182\228\184\141\229\148\175\228\184\128\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174" .. self.m_fileName)
            if isUnlockByLevel == nil then
              isUnlockByLevel = config.unlockByLevel ~= nil
            else
              Log.Assert(isUnlockByLevel == (config.unlockByLevel ~= nil), "[BaseUIBoardFogModel]fogId [" .. fogId .. "] \233\133\141\231\189\174\232\167\163\233\148\129\230\157\161\228\187\182\229\146\140\229\133\182\228\187\150fogId\228\184\141\228\184\128\232\135\180\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174" .. self.m_fileName)
            end
          end
        end
        if not self.m_fogMinMaxDepthMap[fogId] then
          self.m_fogMinMaxDepthMap[fogId] = {min = 9999999, max = -1}
        end
        if self.m_boardModel.ScrollDirection == EBoardScrollDirection.Up then
          Log.Error("BaseUIBoardFogModel:_InitFogGroup \232\142\183\229\143\150\228\186\145\229\177\130\230\156\128\229\176\143\229\146\140\230\156\128\229\164\167\230\137\128\229\164\132Depth\239\188\140\230\154\130\230\151\182\230\178\161\230\156\137\229\144\145\228\184\138\230\187\154\229\138\168\230\156\137\228\186\145\229\177\130\231\154\132\230\131\133\229\134\181\239\188\140\229\166\130\230\158\156\231\156\139\229\136\176\232\191\153\228\184\170\230\138\165\233\148\153\239\188\140\233\156\128\232\166\129\229\155\158\229\189\146\228\184\128\228\184\139\228\184\139\233\157\162\233\128\187\232\190\145\230\152\175\229\144\166\230\173\163\231\161\174")
          self.m_fogMinMaxDepthMap[fogId].min = math.min(self.m_fogMinMaxDepthMap[fogId].min, row + 1)
          self.m_fogMinMaxDepthMap[fogId].max = math.max(self.m_fogMinMaxDepthMap[fogId].max, row + 1)
        else
          self.m_fogMinMaxDepthMap[fogId].min = math.min(self.m_fogMinMaxDepthMap[fogId].min, #initCodeMap - row + 2)
          self.m_fogMinMaxDepthMap[fogId].max = math.max(self.m_fogMinMaxDepthMap[fogId].max, #initCodeMap - row + 2)
        end
      end
    end
  end
  table.sort(self.m_fogIds, function(fogIdA, fogIdB)
    local configA = self:GetFogConfigById(fogIdA)
    local configB = self:GetFogConfigById(fogIdB)
    return configA.index < configB.index
  end)
end

function BaseUIBoardFogModel:UpdateFogGroup()
  for position in self.m_boardModel:GetValidPositionIterator() do
    local item = self.m_boardModel:GetItem(position)
    if item ~= nil then
      local fogCmp = item:GetComponent(ItemFog)
      if fogCmp ~= nil then
        local fogId = fogCmp:GetFogId()
        if self.m_fogGroupMap[fogId] == nil then
          self.m_fogGroupMap[fogId] = {}
          Log.Error("[BaseUIBoardFogModel]fog\229\136\134\231\187\132[" .. fogId .. "]\228\184\141\229\173\152\229\156\168\239\188\140\229\142\159\229\155\160\239\188\154\229\143\175\232\131\189\229\188\128\230\180\187\229\138\168\229\144\142\229\135\186/\232\191\155\231\187\132\233\133\141\231\189\174\229\143\152\229\140\150\239\188\140\230\136\150\232\128\133\228\186\145\232\162\171\230\187\154\229\138\168\233\133\141\231\189\174\230\136\170\230\150\173")
        end
        table.insert(self.m_fogGroupMap[fogId], fogCmp)
      end
    end
  end
  local curDepth = self.m_boardModel:GetCurDepth()
  while #self.m_fogIds > 0 do
    local fogId = self.m_fogIds[1]
    if Table.IsEmpty(self.m_fogGroupMap[fogId]) and curDepth >= self.m_fogMinMaxDepthMap[fogId].max then
      table.remove(self.m_fogIds, 1)
      self.m_fogGroupMap[fogId] = nil
    else
      break
    end
  end
  self:_CalculateLockPos()
end

function BaseUIBoardFogModel:GetFogConfigById(fogId)
  Log.Assert(self.m_config[fogId] ~= nil, "[BaseUIBoardFogModel]\229\156\168\233\133\141\231\189\174\230\150\135\228\187\182\228\184\173\230\137\190\228\184\141\229\136\176fogId : " .. tostring(fogId))
  return self.m_config[fogId]
end

function BaseUIBoardFogModel:CheckIsMinLevel(fogId)
  return fogId == self.m_fogIds[1]
end

function BaseUIBoardFogModel:GetMinLevelFogId()
  return self.m_fogIds[1]
end

function BaseUIBoardFogModel:GetFogGroupById(fogId)
  return self.m_fogGroupMap[fogId]
end

function BaseUIBoardFogModel:IsFogUnlocked(fogId)
  if not self:GetFogConfigById(fogId) then
    return false
  end
  return self.m_fogGroupMap[fogId] == nil
end

function BaseUIBoardFogModel:GetUnlockItemAndNum(fogId)
  local config = self:GetFogConfigById(fogId)
  if config.unlockByItem ~= nil then
    local parts = StringUtil.Split(config.unlockByItem, "-")
    local itemType = parts[1]
    local needNum = tonumber(parts[2])
    return itemType, needNum
  elseif config.unlockByLevel ~= nil then
    local itemType = self.m_boardModel:GetActivityModel():GetItemCodeByLevel(config.unlockByLevel)
    return itemType, 1
  end
end

function BaseUIBoardFogModel:TryUnlockFogByLevel(level, itemModel, bViewDelay)
  local findIndex
  for idx, fogId in ipairs(self.m_fogIds) do
    local config = self:GetFogConfigById(fogId)
    if config.unlockByLevel == nil then
      return
    end
    if config.unlockByLevel == level then
      findIndex = idx
      break
    end
  end
  if findIndex == nil then
    return
  end
  if itemModel ~= nil then
    self.m_boardModel.event:Call(BoardEventType.FogItemFlyToLock, {
      Source = itemModel,
      IsUnlockByItem = false,
      ViewDelay = bViewDelay
    })
  end
  return self:UnlockFog(findIndex, bViewDelay)
end

function BaseUIBoardFogModel:UnlockViewUpdate()
  if self.m_messageUnlockFog ~= nil then
    self.m_boardModel.event:Call(BoardEventType.FogProgressUpdate)
    self.m_boardModel.event:Call(BoardEventType.FogUnlock, self.m_messageUnlockFog)
    self.m_messageUnlockFog = nil
    return true
  end
end

function BaseUIBoardFogModel:TryUnlockFogByItem(itemModel)
  local fogId = self.m_fogIds[1]
  if fogId == nil then
    return
  end
  local config = self:GetFogConfigById(fogId)
  if config.unlockByItem == nil then
    Log.Error("[BaseUIBoardFogModel]fogId [" .. fogId .. "] \233\133\141\231\189\174\232\167\163\233\148\129\230\157\161\228\187\182unlockByItem\228\184\186\231\169\186\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174" .. self.m_fileName)
    return
  end
  local parts = StringUtil.Split(config.unlockByItem, "-")
  local itemType = parts[1]
  local needNum = tonumber(parts[2])
  if itemType ~= itemModel:GetType() then
    return
  end
  local unlockedNum = self:GetFogUnlockedNum(fogId)
  if needNum <= unlockedNum then
    return
  end
  self.m_boardModel:RemoveItem(itemModel)
  self:SetFogUnlockedNum(fogId, unlockedNum + 1)
  if itemModel ~= nil then
    self.m_boardModel.event:Call(BoardEventType.FogItemFlyToLock, {
      Source = itemModel,
      IsUnlockByItem = true,
      ViewDelay = false
    })
  end
  if needNum > unlockedNum + 1 then
    return
  end
  self:CalculateTwoFogsBoundary(1, 2)
  return self:UnlockFog(1, false)
end

function BaseUIBoardFogModel:UnlockFog(findIndex, bViewDelay)
  local fogId = table.remove(self.m_fogIds, findIndex)
  local fogs = self.m_fogGroupMap[fogId]
  self.m_fogGroupMap[fogId] = nil
  local message = {
    ViewDelay = bViewDelay,
    Items = {}
  }
  for _, fogCmp in ipairs(fogs) do
    local oldItem = fogCmp:GetItemModel()
    local newItem = self.m_boardModel:ReplaceItem(oldItem, fogCmp:GetInnerItemCode(), false)
    table.insert(message.Items, {Source = oldItem, New = newItem})
  end
  if bViewDelay then
    self.m_messageUnlockFog = message
  else
    self.m_boardModel.event:Call(BoardEventType.FogUnlock, message)
  end
  GM.BIManager:LogAction(EBIType.BoardFogUnlocked, {
    b = self.m_boardModel.BoardType,
    f = fogId
  })
  return fogs
end

function BaseUIBoardFogModel:GetFogUnlockedNum(fogId)
  local config = self:GetFogConfigById(fogId)
  if config.unlockByLevel ~= nil then
    return self:IsFogUnlocked(fogId) and 1 or 0
  end
  return self.m_dbTable:GetValue(BaseUIBoardFogModel.FogUnlockedNum .. fogId, "value") or 0
end

function BaseUIBoardFogModel:SetFogUnlockedNum(fogId, num)
  return self.m_dbTable:Set(BaseUIBoardFogModel.FogUnlockedNum .. fogId, "value", num)
end

function BaseUIBoardFogModel:GetLockPosById(fogId, needUpdate)
  if needUpdate then
    self:_CalculateLockPos()
  end
  return self.m_lockPosMap[fogId]
end

function BaseUIBoardFogModel:_CalculateLockPos()
  self.m_lockPosMap = {}
  for id, group in pairs(self.m_fogGroupMap) do
    if not Table.IsEmpty(group) then
      local sumPos = Vector3.zero
      local idx = 0
      for _, fogCmp in ipairs(group) do
        local itemModel = fogCmp:GetItemModel()
        local pos = itemModel:GetLocalPosition()
        sumPos = sumPos + pos
        idx = idx + 1
      end
      local avgPos = sumPos / idx
      self.m_lockPosMap[id] = avgPos
      if not self:_IsLockInsideFog(id, avgPos) then
        self.m_lockPosMap[id] = self:_GetNearestFogTileById(id)
      end
    end
  end
end

local DirectionOffset = {
  {1, 1},
  {-1, 1},
  {1, -1},
  {-1, -1}
}

function BaseUIBoardFogModel:_IsLockInsideFog(fogId, localPos)
  if not self:_IsLocalPosInsideFog(fogId, localPos) then
    return false
  end
  local halfSize = self.m_boardModel.TileSize * 0.5
  for _, offset in ipairs(DirectionOffset) do
    local pos = Vector3(localPos.x + offset[1] * halfSize, localPos.y + offset[2] * halfSize)
    if not self:_IsLocalPosInsideFog(fogId, pos) then
      return false
    end
  end
  return true
end

function BaseUIBoardFogModel:_IsLocalPosInsideFog(fogId, localPos)
  local boardPosition = self.m_boardModel:CreatePositionFromLocalPosition(localPos.x, localPos.y)
  if boardPosition == nil then
    return false
  end
  local item = self.m_boardModel:GetItem(boardPosition)
  if item == nil then
    return false
  end
  local fogCmp = item:GetComponent(ItemFog)
  return fogCmp ~= nil and fogCmp:GetFogId() == fogId
end

function BaseUIBoardFogModel:_GetNearestFogTileById(fogId)
  local group = self.m_fogGroupMap and self.m_fogGroupMap[fogId]
  if Table.IsEmpty(group) then
    return nil
  end
  local centerLocalPos = self.m_lockPosMap[fogId]
  if centerLocalPos == nil then
    return nil
  end
  local minDistance, distance, position, pos
  for _, fogCmp in ipairs(group) do
    local itemModel = fogCmp:GetItemModel()
    if itemModel ~= nil then
      pos = itemModel:GetLocalPosition()
      distance = (centerLocalPos.x - pos.x) * (centerLocalPos.x - pos.x) + (centerLocalPos.y - pos.y) * (centerLocalPos.y - pos.y)
      if minDistance == nil or minDistance > distance then
        position = pos
        minDistance = distance
      end
    end
  end
  return position
end

function BaseUIBoardFogModel:CalculateTwoFogsBoundary(fogIndex1, fogIndex2)
  local fogId1 = self.m_fogIds[fogIndex1]
  local fogId2 = self.m_fogIds[fogIndex2]
  if fogId1 == nil or fogId2 == nil then
    return nil, nil
  end
  local group = {}
  if self.m_fogGroupMap and self.m_fogGroupMap[fogId1] then
    for _, fogCmp in ipairs(self.m_fogGroupMap[fogId1]) do
      table.insert(group, fogCmp)
    end
  end
  if self.m_fogGroupMap and self.m_fogGroupMap[fogId2] then
    for _, fogCmp in ipairs(self.m_fogGroupMap[fogId2]) do
      table.insert(group, fogCmp)
    end
  end
  if Table.IsEmpty(group) then
    return nil, nil
  end
  local firstCmp = group[1]
  local firstPos = firstCmp:GetItemModel():GetPosition()
  local minX, minY = firstPos:GetX(), firstPos:GetY()
  local maxX, maxY = minX, minY
  for i = 2, #group do
    local itemModel = group[i]:GetItemModel()
    local boardPos = itemModel:GetPosition()
    local x, y = boardPos:GetX(), boardPos:GetY()
    if minX > x then
      minX = x
    end
    if minY > y then
      minY = y
    end
    if maxX < x then
      maxX = x
    end
    if maxY < y then
      maxY = y
    end
  end
  self.m_minItemBoardPos = BoardPosition.Create(minX, minY)
  self.m_maxItemBoardPos = BoardPosition.Create(maxX, maxY)
end

function BaseUIBoardFogModel:GetTutorialFogsBoundaryBoardPosition()
  return self.m_minItemBoardPos, self.m_maxItemBoardPos
end
