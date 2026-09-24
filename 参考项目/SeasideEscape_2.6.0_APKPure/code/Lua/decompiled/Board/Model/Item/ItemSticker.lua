ItemSticker = setmetatable({canMove = false}, BaseItemComponent)
ItemSticker.__index = ItemSticker
ItemStickerEventType = {ItemRewardClaim = 1, ItemChoose = 2}

function ItemSticker.Create()
  local ItemSticker = setmetatable({}, ItemSticker)
  ItemSticker:Init()
  return ItemSticker
end

function ItemSticker:Init()
  self.event = PairEvent.Create(self)
end

function ItemSticker:OnShock()
  self:TryAcquireReward(true)
end

function ItemSticker:IsReward()
  if not self.m_reward then
    self:RefreshReward()
  end
  if not Table.IsEmpty(self.m_reward) and #self.m_reward >= 1 then
    return true
  end
end

function ItemSticker:RefreshReward()
  local position = self.m_itemModel:GetPosition()
  if not position then
    return
  end
  self.m_reward = {}
  local boardModel = self.m_itemModel:GetBoardModel()
  local rewardLayer = boardModel.GetExtraRewardLayer and boardModel:GetExtraRewardLayer()
  if not rewardLayer then
    return
  end
  local rewardStr = rewardLayer and rewardLayer.Map and rewardLayer.Map[position:GetY()] and rewardLayer.Map[position:GetY()][position:GetX()] or ""
  self.m_boxType = rewardLayer and rewardLayer.BoxTypeMap and rewardLayer.BoxTypeMap[position:GetY()] and rewardLayer.BoxTypeMap[position:GetY()][position:GetX()]
  if 1 < #rewardStr then
    local result = {}
    string.gsub(rewardStr, "[^;]+", function(w)
      table.insert(result, w)
    end)
    local reward
    if #result == 0 then
      result[1] = rewardStr
    end
    for _, value in ipairs(result) do
      reward = {}
      if string.find(value, "-") then
        reward[PROPERTY_TYPE] = string.sub(value, 0, string.find(value, "-") - 1)
        reward[PROPERTY_COUNT] = tonumber(string.sub(value, string.find(value, "-") + 1, #value))
        if StringUtil.StartWith(reward[PROPERTY_TYPE], EPropertyType.Accelerator) then
          Log.Error("\229\188\128\229\155\190\229\165\150\229\138\177\228\184\141\232\166\129\233\133\141\231\189\174\230\151\160cd\233\129\147\229\133\183 \232\175\183\230\163\128\230\159\165\239\188\129")
        end
        table.insert(self.m_reward, reward)
      else
        local gameMode = boardModel:GetGameMode()
        Log.Error("\229\188\128\229\155\190\229\165\150\229\138\177\233\129\147\229\133\183\230\156\170\233\133\141\231\189\174\230\149\176\233\135\143 \232\175\183\230\163\128\230\159\165\239\188\129" .. " gamemode: " .. gameMode .. "\239\188\140\228\189\141\231\189\174 x: " .. position:GetX() .. "\239\188\140y: " .. position:GetY())
      end
    end
  end
  self.m_reward = RewardApi.FilterInvalidReward(self.m_reward)
  self.m_rewardPosLog = "pos : " .. position:GetX() .. "_" .. position:GetY()
end

function ItemSticker:GetReward()
  return self.m_reward
end

function ItemSticker:GetBoxType()
  return self.m_boxType
end

function ItemSticker:GetIconImage()
  local image
  local boardModel = self.m_itemModel and self.m_itemModel:GetBoardModel()
  local gameMode = boardModel and boardModel:GetGameMode()
  if #self.m_reward == 1 then
    local reward = self.m_reward[1]
    self.m_bIsPropertyType = GM.PropertyDataManager:IsPropertyType(reward[PROPERTY_TYPE])
    image = self.m_bIsPropertyType and EPropertySprite[reward[PROPERTY_TYPE]] or GM.ItemDataModel:GetSpriteName(reward[PROPERTY_TYPE], gameMode)
  elseif #self.m_reward > 1 then
    image = ImageFileConfigName.newuser_bx1
    if self.m_boxType then
      image = ImageFileConfigName["newuser_bx" .. self.m_boxType]
    end
  end
  return image
end

function ItemSticker:TryAcquireReward(normalAcquire)
  if self.m_hasAcquired or not self:IsReward() then
    return
  end
  self.m_hasAcquired = true
  local boardModel = self.m_itemModel and self.m_itemModel:GetBoardModel()
  local map = boardModel and boardModel.GetGameMode and boardModel:GetGameMode()
  if map == EGameMode.Hunt then
    RewardApi.AcquireRewardsLogic(self.m_reward, EPropertySource.Give, EBIType.HuntBoardExtraReward, CacheItemType.Stack, nil, nil, map, nil, nil, self.m_rewardPosLog)
  else
    RewardApi.AcquireRewardsLogic(self.m_reward, EPropertySource.Give, EBIType.BoardExtraReward, CacheItemType.Stack, nil, nil, nil, nil, nil, self.m_rewardPosLog)
  end
  if normalAcquire then
    self.event:Call(ItemStickerEventType.ItemRewardClaim, self.m_reward)
  end
end

function ItemSticker:OnTap()
  local rewardNum = #self.m_reward
  if 1 < rewardNum then
    GM.UIManager:OpenView(UIPrefabConfigName.ItemBoardRewardWindow, self.m_reward, self.m_boxType)
  elseif rewardNum == 1 then
    if RewardItem.CanShowRewardHelpBtn(self.m_reward[1][PROPERTY_TYPE]) then
      RewardItem.OpenRewardHelpWindow(self.m_reward[1][PROPERTY_TYPE], nil, {})
    elseif self.m_reward[1][PROPERTY_TYPE] == ItemType.Joker or StringUtil.StartWith(self.m_reward[1][PROPERTY_TYPE], ItemCodePrefix.Scissors) or self.m_reward[1][PROPERTY_TYPE] == ItemType.ScissorsSp then
      GM.UIManager:OpenView(UIPrefabConfigName.ItemDetailWindow, self.m_reward[1][PROPERTY_TYPE])
    elseif RewardItem.IsNewUserBoxItem(self.m_reward[1][PROPERTY_TYPE]) then
      RewardItem.ShowNewUserBoxHelpWindow(self.m_reward[1][PROPERTY_TYPE])
    end
  end
end

function ItemSticker:OnChoose()
  self.event:Call(ItemStickerEventType.ItemChoose)
end

function ItemSticker:SetNewItem(newItem)
  if not newItem then
    return
  end
  self.m_newItem = newItem
end

function ItemSticker:SetRewardPosition(pos)
  if not pos then
    return
  end
  self.m_newPostion = pos
end

function ItemSticker:OnRewardClaimed()
  local message = {
    Rewards = self:GetReward(),
    NewItemModel = self.m_newItem,
    NewPosition = self.m_newPostion
  }
  local boardModel = self.m_itemModel and self.m_itemModel:GetBoardModel()
  boardModel.event:Call(BoardEventType.ItemStickRewardClaim, message)
end
