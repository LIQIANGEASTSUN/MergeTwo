ItemModelFactory = {}

function ItemModelFactory.CreateWithData(boardModel, data)
  local actTokenInfo = ItemToken.GetTokenFromItemData(data)
  local item = ItemModelFactory.CreateWithCode(boardModel, nil, data.code, false, true, actTokenInfo)
  item.m_id = data.id
  item:FromSerialization(data)
  item:DispatchComponentEvent("FromSerialization", data)
  return item
end

function ItemModelFactory.CreateWithCode(boardModel, position, code, needUnlockType, checkLv, actTokenInfo)
  local itemModel, unlock = ItemModelFactory._CreateWithCode(boardModel, position, code, needUnlockType, checkLv, actTokenInfo)
  if itemModel ~= nil and boardModel ~= nil and boardModel.Freefall then
    local itemFall = ItemFall.Create(boardModel)
    itemModel:AddComponent(itemFall)
  end
  return itemModel, unlock
end

function ItemModelFactory._CreateWithCode(boardModel, position, code, needUnlockType, checkLv, actTokenInfo)
  local itemType, extraCode = ItemUtility.GetItemTypeByCode(code, checkLv)
  if itemType == ItemType.PaperBox then
    local innerCode = string.sub(code, ItemInnerCodeStartIndex.PaperBox)
    return ItemModelFactory._CreatePaperBox(boardModel, position, innerCode, code)
  elseif itemType == ItemType.Cobweb then
    local innerCode = string.sub(code, ItemInnerCodeStartIndex.Cobweb)
    return ItemModelFactory._CreateCobweb(boardModel, position, innerCode, code, needUnlockType)
  elseif itemType == ItemType.Bubble then
    local innerCode = string.sub(code, ItemInnerCodeStartIndex.Bubble)
    boardModel:AddBubbleCount(innerCode)
    return ItemModelFactory._CreateBubble(boardModel, position, innerCode, code)
  elseif itemType == ItemType.Ice then
    local isTemp = StringUtil.StartWith(code, ItemCodePrefix.Temp)
    local innerCode = string.sub(code, isTemp and ItemInnerCodeStartIndex.Temp or ItemInnerCodeStartIndex.Ice)
    return ItemModelFactory.CreateIce(boardModel, position, innerCode, code, isTemp)
  elseif itemType == ItemType.MapBlocker then
    local innerCode = string.sub(code, string.len(extraCode) + 1)
    local unlockLevel = tonumber(string.sub(extraCode, 4, -2))
    if checkLv and unlockLevel <= GM.LevelModel:GetCurrentLevel() then
      return ItemModelFactory.CreateWithCode(boardModel, position, innerCode, needUnlockType)
    else
      return ItemModelFactory._CreateMapBloker(boardModel, position, innerCode, code, unlockLevel)
    end
  elseif itemType == ItemType.Rune then
    local innerCode = string.sub(code, string.len(extraCode) + 1)
    local type = tonumber(extraCode:sub(3, -2))
    return ItemModelFactory._CreateRune(boardModel, position, innerCode, code, type)
  elseif itemType == ItemType.Sand then
    local innerCode = string.sub(code, string.len(extraCode) + 1)
    local layer = tonumber(extraCode:sub(3, -2))
    return ItemModelFactory._CreateSand(boardModel, position, innerCode, code, layer)
  elseif itemType == ItemType.RefreshOrder then
    return ItemModelFactory._CreateRefreshOrder(boardModel, position, itemType, code)
  elseif itemType == ItemType.Portal then
    return ItemModelFactory._CreatePortal(boardModel, position, itemType, code)
  elseif itemType == ItemType.ScissorsSp then
    return ItemModelFactory._CreateScissorsSp(boardModel, position, code)
  elseif itemType == ItemType.Gray then
    local innerCode = string.sub(code, ItemInnerCodeStartIndex.Gray)
    return ItemModelFactory._CreateGray(boardModel, position, innerCode, code)
  end
  if itemType then
    return ItemModelFactory.CreateWithType(boardModel, position, itemType, needUnlockType, actTokenInfo)
  end
  return nil
end

function ItemModelFactory._CreatePaperBox(boardModel, position, innerCode, originalCode)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.PaperBox)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemPaperBox = ItemPaperBox.Create(innerCode)
  itemModel:AddComponent(itemPaperBox)
  local gameMode = boardModel:GetGameMode()
  if gameMode == EGameMode.Main or gameMode == EGameMode.Hunt then
    local itemSticker = ItemSticker.Create()
    itemModel:AddComponent(itemSticker)
  end
  return itemModel
end

function ItemModelFactory._CreateGray(boardModel, position, innerCode, originalCode)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.Gray)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemGray = ItemGray.Create(innerCode, boardModel)
  itemModel:AddComponent(itemGray)
  return itemModel
end

function ItemModelFactory._CreateCobweb(boardModel, position, innerCode, originalCode, needUnlockType)
  if needUnlockType then
    GM.ItemDataModel:SetLocked(innerCode)
  end
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.Cobweb)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemCobweb = ItemCobweb.Create(innerCode)
  itemModel:AddComponent(itemCobweb)
  return itemModel
end

function ItemModelFactory._CreateBubble(boardModel, position, innerCode, originalCode)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.Bubble)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemBubble = ItemBubble.Create(innerCode)
  itemModel:AddComponent(itemBubble)
  if boardModel:GetGameMode() == EGameMode.Main then
    local itemToken = ItemToken.Create(true)
    itemModel:AddComponent(itemToken)
  end
  return itemModel
end

function ItemModelFactory.CreateIce(boardModel, position, innerCode, originalCode, isTempIce)
  local timer, duration
  timer, duration = GM.ActivityManager:GetIceItemInfo(isTempIce)
  if timer == nil then
    return ItemModelFactory.CreateWithCode(boardModel, position, ItemType.Coin01)
  end
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.Ice)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemIce = ItemIce.Create(innerCode, timer, duration, isTempIce)
  itemModel:AddComponent(itemIce)
  return itemModel
end

function ItemModelFactory._CreateMapBloker(boardModel, position, innerCode, originalCode, unlockLevel)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.MapBlocker)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemMapBlocker = ItemMapBlocker.Create(innerCode, unlockLevel)
  itemModel:AddComponent(itemMapBlocker)
  return itemModel
end

function ItemModelFactory._CreateRune(boardModel, position, innerCode, originalCode, type)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.Rune)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemRune = ItemRune.Create(innerCode, type)
  itemModel:AddComponent(itemRune)
  return itemModel
end

function ItemModelFactory._CreateSand(boardModel, position, innerCode, originalCode, layer)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.Sand)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemSand = ItemSand.Create(innerCode, layer)
  itemModel:AddComponent(itemSand)
  return itemModel
end

function ItemModelFactory._CreateRefreshOrder(boardModel, position, innerCode, originalCode)
  GM.ItemDataModel:SetUnlocked(innerCode)
  local itemConfig = GM.ItemDataModel:GetModelConfig(ItemType.RefreshOrder)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemRefreshOrder = ItemRefreshOrder.Create()
  itemModel:AddComponent(itemRefreshOrder)
  return itemModel
end

function ItemModelFactory._CreatePortal(boardModel, position, innerCode, originalCode)
  local itemConfig = GM.ItemDataModel:GetModelConfig(originalCode)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, originalCode)
  local itemPortal = ItemPortal.Create(itemModel)
  itemModel:AddComponent(itemPortal)
  return itemModel
end

function ItemModelFactory._CreateBattery(boardModel, position, code, needUnlockType, actTokenInfo)
  local itemModel = ItemModelFactory.CreateWithType(boardModel, position, code, needUnlockType, actTokenInfo)
  local itemBattery = ItemBattery.Create(itemModel)
  itemModel:AddComponent(itemBattery)
  return itemModel
end

function ItemModelFactory._CreateScissorsSp(boardModel, position, code)
  GM.ItemDataModel:SetUnlocked(ItemType.ScissorsSp)
  local type = ItemType.ScissorsSp
  local count = tonumber(string.sub(code, StringUtil.rFindChar(code, "_") + 1 or 0, #code))
  local itemConfig = GM.ItemDataModel:GetModelConfig(type)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, type)
  local itemSplit = ItemSplit.Create(itemConfig, count)
  itemModel:AddComponent(itemSplit)
  return itemModel
end

function ItemModelFactory.CreateWithType(boardModel, position, type, needUnlockType, actTokenInfo)
  local unlock
  if needUnlockType then
    unlock = GM.ItemDataModel:SetUnlocked(type)
  end
  local itemConfig = GM.ItemDataModel:GetModelConfig(type)
  local itemModel = ItemModel.Create(boardModel, position, itemConfig, type)
  if StringUtil.StartWith(type, ItemCodePrefix.Scissors) then
    local itemSplit = ItemSplit.Create(itemConfig)
    itemModel:AddComponent(itemSplit)
  end
  if StringUtil.StartWith(type, ItemCodePrefix.Battery) then
    local itemBattery = ItemBattery.Create(itemConfig)
    itemModel:AddComponent(itemBattery)
  end
  if itemConfig.SpreadFirstMergeNumber ~= nil then
    local itemExtraSpread = ItemExtraSpread.Create(itemConfig)
    itemModel:AddComponent(itemExtraSpread)
  end
  if itemConfig.Spread_Auto ~= nil then
    local itemSpread = ItemSpread.Create(itemConfig)
    itemModel:AddComponent(itemSpread)
  end
  if itemConfig.Transform_Item ~= nil or itemConfig.Transform_Weight then
    local itemTransform = ItemTransform.Create(itemConfig)
    itemModel:AddComponent(itemTransform)
  end
  if itemConfig.Swallow_Chain ~= nil then
    local itemSwallowChain = ItemSwallowChain.Create(itemConfig)
    itemModel:AddComponent(itemSwallowChain)
  elseif itemConfig.Swallow_Weight1 ~= nil or itemConfig.CostItem ~= nil then
    local itemSwallow = ItemSwallow.Create(itemConfig)
    itemModel:AddComponent(itemSwallow)
  elseif itemConfig.Swallow_Parents ~= nil then
    local itemParent = ItemSwallowed.Create(itemConfig)
    itemModel:AddComponent(itemParent)
  end
  if itemConfig.CollectRewards ~= nil then
    if boardModel and boardModel:GetGameMode() == EGameMode.Hunt then
      if itemConfig.CollectRewards[1][PROPERTY_TYPE] == HuntActivityModel.CloudKeyType then
        local itemCollectable = ItemHuntCloudKey.Create(itemConfig.CollectRewards, boardModel, type)
        itemModel:AddComponent(itemCollectable)
      else
        local itemCollectable = ItemCollectable.Create(itemConfig.CollectRewards, itemConfig.Mode)
        itemModel:AddComponent(itemCollectable)
      end
    else
      local itemCollectable = ItemCollectable.Create(itemConfig.CollectRewards, itemConfig.Mode)
      itemModel:AddComponent(itemCollectable)
    end
  end
  if itemConfig.Choices ~= nil then
    local itemChoose = ItemChoose.Create(itemConfig.Choices)
    itemModel:AddComponent(itemChoose)
  end
  if itemConfig.ChoicesNew ~= nil then
    local itemChoose = ItemChoose.Create(itemConfig.ChoicesNew)
    itemModel:AddComponent(itemChoose)
  end
  if itemConfig.Pick ~= nil then
    local itemPick = ItemPick.Create()
    itemModel:AddComponent(itemPick)
  end
  if itemConfig.Charge_Stage then
    local itemCharge = ItemCharge.Create(itemConfig)
    itemModel:AddComponent(itemCharge)
  end
  if itemConfig.Broom then
    local itemBroom = ItemBroom.Create(itemConfig)
    itemModel:AddComponent(itemBroom)
  end
  if itemConfig.HuntAnim then
    local itemHuntAnim = ItemHuntAnim.Create()
    itemModel:AddComponent(itemHuntAnim)
  end
  if itemConfig.Hunt_Spread then
    local ItemHuntSpread = ItemHuntSpread.Create(itemConfig, itemModel)
    itemModel:AddComponent(ItemHuntSpread)
  end
  if not Table.IsEmpty(actTokenInfo) then
    local itemToken = ItemToken.Create(false, actTokenInfo)
    itemModel:AddComponent(itemToken)
  end
  if itemConfig.Dig_MaxLevel ~= nil then
    local itemDig = ItemDig.Create(itemConfig)
    itemModel:AddComponent(itemDig)
  end
  if itemConfig.Mode ~= nil and GM.WheelItemModel:IsWheelItem(itemConfig.Mode) then
    local itemWheel = ItemWheel.Create(itemConfig)
    itemModel:AddComponent(itemWheel)
  end
  if StringUtil.StartWith(type, "ff_boss") then
    local itemFreefallBoss = ItemFreefallBoss.Create(itemConfig)
    itemModel:AddComponent(itemFreefallBoss)
  end
  if boardModel and boardModel:IsInAccelerating(itemModel) then
    itemModel:DispatchComponentEvent("Accelerate")
  end
  return itemModel, unlock
end

function ItemModelFactory.GetCodeAndWeightPairs(configArray)
  local ret = {}
  local pairs, tb
  local LogAssert = Log.Assert
  for _, str in ipairs(configArray) do
    pairs = StringUtil.Split(str, "-")
    tb = {
      Code = pairs[1],
      Weight = tonumber(pairs[2])
    }
    LogAssert(tb.Code and tb.Weight, "code, weight config error. " .. str)
    table.insert(ret, tb)
  end
  return ret
end

function ItemModelFactory.GetInnerType(code)
  local index = StringUtil.rFindChar(code, "#")
  if index then
    return string.sub(code, index + 1)
  else
    return code
  end
end
