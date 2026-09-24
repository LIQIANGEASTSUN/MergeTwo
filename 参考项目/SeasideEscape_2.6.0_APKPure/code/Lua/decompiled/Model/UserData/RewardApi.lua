RewardApi = {}
RewardApi.DefaultViewData = {eventLock = true, noDelayTime = false}
ECommonPropertyType = {
  BPToken = "bpToken",
  DecorationToken = "decorationToken",
  AlbumPack = "albumPack_"
}
local RewardPriority = {
  Avatar = 1,
  BoxItem = 2,
  Other = 100
}

function RewardApi.SplitRewards(arrRewards)
  local properties = {}
  local items = {}
  local skins = {}
  local avatars = {}
  local boxItems = {}
  local albumPacks = {}
  local luckyStarItems = {}
  local propertyDataManager = GM.PropertyDataManager
  local reward
  for i = 1, #arrRewards do
    reward = arrRewards[i]
    if StringUtil.StartWith(reward[PROPERTY_TYPE], ItemCodePrefix.LuckyStar) then
      luckyStarItems[#luckyStarItems + 1] = reward
    elseif propertyDataManager:IsPropertyType(reward[PROPERTY_TYPE]) then
      properties[#properties + 1] = reward
    elseif StringUtil.StartWith(reward[PROPERTY_TYPE], "skin_") then
      skins[#skins + 1] = string.sub(reward[PROPERTY_TYPE], 6)
    elseif AlbumModel.IsAlbumPackType(reward[PROPERTY_TYPE]) then
      albumPacks[#albumPacks + 1] = reward
    elseif GM.UserProfileModel:IsAvatarTypeReward(reward[PROPERTY_TYPE]) then
      avatars[#avatars + 1] = reward
    elseif ItemBoxSimilarUtility.IsBoxSimilarItem(reward[PROPERTY_TYPE]) then
      boxItems[#boxItems + 1] = reward
    elseif GM.ItemDataModel:IsItemExist(reward[PROPERTY_TYPE]) then
      if GM.MainBoardModel:IsToolBoxCollect() and ItemUtility.IsToolItem(reward[PROPERTY_TYPE]) then
        properties[#properties + 1] = reward
      else
        items[#items + 1] = reward
      end
    else
      if GameConfig.IsTestMode() then
        Log.Error("[RewardApi] \228\184\141\229\173\152\229\156\168\231\154\132\229\165\150\229\138\177\231\177\187\229\158\139: " .. (reward[PROPERTY_TYPE] or "nil"))
      end
      GM.BIManager:LogProject(EBIProjectType.InValidRewardType, reward[PROPERTY_TYPE])
    end
  end
  return properties, items, skins, albumPacks, avatars, boxItems, luckyStarItems
end

function RewardApi.AcquireRewards(formattedRewards, source, scene, viewData, cacheItemType, map, acquireLogExt)
  if formattedRewards == nil then
    return
  end
  RewardApi.AcquireRewardsLogic(formattedRewards, source, scene, cacheItemType, nil, nil, map, nil, nil, acquireLogExt)
  RewardApi.AcquireRewardsInView(formattedRewards, viewData)
end

function RewardApi.AcquireRewardsLogic(formattedRewards, source, scene, cacheItemType, forcedGameMode, cost, map, totalEnergyToday, totalScore, acquireLogExt)
  if formattedRewards ~= nil and not formattedRewards[1] and formattedRewards[PROPERTY_TYPE] ~= nil and formattedRewards[PROPERTY_COUNT] ~= nil then
    formattedRewards = {formattedRewards}
  end
  formattedRewards = RewardApi.FilterInvalidReward(formattedRewards, nil, nil, map)
  if GameConfig.IsTestMode() then
    Log.Info("Scene: " .. (scene or "nil") .. ";  " .. table.concat(ConfigUtil.GetArrFromCurrency(formattedRewards), ";") .. ";  ext: " .. (Table.IsEmpty(acquireLogExt) and "nil" or json.encode(acquireLogExt)), "AcquireRewardsForTest", "FED42D")
  end
  local properties, items, skins, albumPacks, avatars, boxItems, luckyStarItems = RewardApi.SplitRewards(formattedRewards)
  RewardApi._AcquireRewardsLogic(properties, items, source, scene, cacheItemType, forcedGameMode, cost, map, acquireLogExt)
  for _, skinId in pairs(skins) do
    GM.MapDataModel:AcquireSkinLogic(skinId)
  end
  GM.UserProfileModel:AcquireAvatarRewards(avatars, scene, source == EPropertySource.Give)
  if not Table.IsEmpty(albumPacks) then
    local albumModel = AlbumModel.GetActiveModel(false, true)
    if albumModel then
      albumModel:AcquireAlbumPackRewards(albumPacks, source, scene, acquireLogExt, map)
    end
  end
  if not Table.IsEmpty(boxItems) then
    RewardApi._AcquireItemRewardsLogic(boxItems, source, scene, EGameMode.Main, cacheItemType, cost, nil, acquireLogExt)
  end
  if not Table.IsEmpty(luckyStarItems) then
    LuckyStarRewardItem.AcquireRewardsLogic(luckyStarItems, scene, source, map, totalEnergyToday, totalScore, acquireLogExt)
  end
end

function RewardApi._AcquireRewardsLogic(properties, arrItemRewards, source, scene, cacheItemType, forcedGameMode, cost, map, acquireLogExt)
  if 0 < #properties then
    GM.PropertyDataManager:Acquire(properties, source, scene, map, acquireLogExt)
  end
  local mapItemsByGameModes = RewardApi._SeparateItemRewardsByGameModes(arrItemRewards, forcedGameMode)
  for eGameMode, arrItems in pairs(mapItemsByGameModes) do
    RewardApi._AcquireItemRewardsLogic(arrItems, source, scene, eGameMode, cacheItemType, cost, map, acquireLogExt)
  end
end

function RewardApi._SeparateItemRewardsByGameModes(arrItemRewards, forcedGameMode)
  local mapItemsByGameModes = {}
  for _, itemReward in ipairs(arrItemRewards) do
    local gameMode = ItemUtility.GetModeByCode(itemReward[PROPERTY_TYPE], forcedGameMode)
    if gameMode then
      local arrItemsRewards = mapItemsByGameModes[gameMode]
      if not arrItemsRewards then
        arrItemsRewards = {}
        mapItemsByGameModes[gameMode] = arrItemsRewards
      end
      arrItemsRewards[#arrItemsRewards + 1] = itemReward
    end
  end
  return mapItemsByGameModes
end

function RewardApi._AcquireItemRewardsLogic(items, source, scene, targetGameMode, cacheItemType, cost, map, acquireLogExt)
  if 0 < #items then
    local arrItems = {}
    for _, itemData in ipairs(items) do
      for i = 1, itemData[PROPERTY_COUNT] do
        arrItems[#arrItems + 1] = itemData[PROPERTY_TYPE]
      end
    end
    local boardModel = BoardModelHelper.GetModelByGameMode(targetGameMode)
    boardModel:CacheItems(arrItems, cacheItemType, cost)
    for _, itemData in ipairs(items) do
      GM.BIManager:LogAcquire(itemData[PROPERTY_TYPE], itemData[PROPERTY_COUNT], scene, source == EPropertySource.Give, map, acquireLogExt)
    end
  end
end

function RewardApi.AcquireRewardsInView(arrRewards, viewData, bNotFilterRewards, bNewLayout, bIsOrderCollect)
  if not bNotFilterRewards then
    arrRewards = RewardApi.FilterInvalidReward(arrRewards, nil, true)
  end
  viewData = viewData or RewardApi.DefaultViewData
  if viewData.arrWorldPos == nil then
    local worldPositionArray = {}
    for i = 1, #arrRewards do
      local x = (i - #arrRewards / 2 - 0.5) * 180
      local position = Vector3(x, 0, 0)
      table.insert(worldPositionArray, position)
    end
    viewData.arrWorldPos = worldPositionArray
  end
  local baseSceneView = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.BaseSceneView)
  local itemFlyTarget, itemFlyEndPosition, itemToMainTarget
  if GM.SceneManager:GetGameMode() == EGameMode.Map then
    itemFlyTarget = baseSceneView:GetFlyCachedItemTarget()
  else
    local boardView = GM.ModeViewController:GetBoardView()
    local orderArea = boardView:GetOrderArea()
    if orderArea and orderArea.GetToMainHudButton then
      itemToMainTarget = orderArea:GetToMainHudButton()
    end
    itemFlyTarget = boardView:GetBoardCacheRoot()
  end
  itemFlyEndPosition = itemFlyTarget ~= nil and itemFlyTarget:GetOriginalPosition() or V3Zero
  GM.PropertyDataManager:SetRewardButtonInView(arrRewards)
  local bInEventMode = GM.SceneManager:InEventGameMode()
  for i, rewardData in ipairs(arrRewards) do
    local rewardType = rewardData[PROPERTY_TYPE]
    local flyDelay = viewData.noDelayTime and 0 or (viewData.delayTime or 0.3) * (i - 1) + (viewData.delayTime and 0 or 0.5)
    local uiWorldPosition = viewData.arrWorldPos[i] or V3Zero
    if StringUtil.StartWith(rewardType, "customInventory") then
      local FlyTargetButton, FlyEndPos
      if GM.SceneManager:GetGameMode() == EGameMode.Main then
        FlyTargetButton = baseSceneView:GetHudButton(ESceneViewHudButtonKey.Inventory)
      else
        FlyTargetButton = itemFlyTarget
        FlyEndPos = itemFlyEndPosition
      end
      local customData = {
        {
          targetButton = FlyTargetButton,
          flyCount = 1,
          spriteKey = rewardData.image,
          flyDelay = flyDelay,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale,
          endPos = FlyEndPos
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData, bNewLayout)
    elseif StringUtil.StartWith(rewardType, "skin_") then
      local customData = {
        {
          targetButton = baseSceneView:GetHudButton(ESceneViewHudButtonKey.Edit),
          flyCount = 1,
          spriteKey = GM.ItemDataModel:GetSpriteName(rewardType),
          flyDelay = flyDelay,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData, bNewLayout)
    elseif LuckyStarRewardItem.IsLuckyStarRewardType(rewardType) then
      local info = LuckyStarRewardItem.PopInfo()
      local targetButton = info.toBoard and MainBoardView.GetInstance():GetLuckyStarTargetButton(info.item:GetPosition()) or itemFlyTarget
      local customData = {
        {
          targetButton = targetButton,
          endPos = not info.toBoard and itemFlyEndPosition or nil,
          flyCount = 1,
          spriteKey = GM.ItemDataModel:GetSpriteName(rewardType),
          flyDelay = flyDelay,
          prompt = viewData.prompt,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale,
          twEffect = UIPrefabConfigName.effect_UI_shuijing_tw2,
          startEffect = UIPrefabConfigName.effect_UI_shuijing_tw_open,
          startEffectDt = 0,
          positionOffset = V3Zero
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData, bNewLayout)
    elseif not bIsOrderCollect and (GM.PropertyDataManager:IsPropertyType(rewardType) and HuntActivityModel.IsHuntTokenType(rewardType) or HuntActivityModel.GetActivityTypeByItemType(rewardType) ~= nil or StringUtil.StartWith(rewardType, ItemCodePrefix.CloudsDash)) then
      local customData = {
        {
          flyDelay = flyDelay,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale,
          floatFirst = viewData.floatFirst == nil and true or viewData.floatFirst,
          floatHeight = viewData.floatHeight or 100,
          floatDelay = viewData.floatDelay or 0.5,
          floatScale = viewData.floatScale or 1.2,
          endScale = viewData.endScale or 1,
          tempRewardSprite = viewData.tempRewardSprite,
          floatLabel = not viewData.hideLabel and setmetatable({
            text = "+" .. rewardData[PROPERTY_COUNT]
          }, EFlyElementLabelStyle.Hunt) or nil,
          prompt = viewData.prompt,
          specialFloat = viewData.specialFloat,
          dispersionRatio = viewData.dispersionRatio,
          positionOffset = viewData.positionOffset,
          flyCount = viewData.flyCount or 1,
          endPosZ = viewData.endPosZ,
          effectMsg = viewData.effectMsg,
          eleShowTime = viewData.eleShowTime,
          bNoBackAnim = viewData.bNoBackAnim,
          endPos = viewData.endPos
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData, bNewLayout)
    elseif GM.PropertyDataManager:IsPropertyType(rewardType) or rewardType == AlbumKingcard or rewardType == AlbumJokercard or HuntMapActivityModel.IsActivityItem(rewardType) then
      local uiTwEffect
      if rewardType == EPropertyType.SunshineOrderToken then
        uiTwEffect = UIPrefabConfigName.effect_taiyang_tw_1
      end
      local spriteKey, endPos
      if rewardType == AlbumKingcard or rewardType == AlbumJokercard then
        spriteKey = rewardType
      end
      if GM.PropertyDataManager:GetPropItemType(rewardType) == EPropItemType.BalloonBox then
        spriteKey = EPropertySprite[rewardType]
        if GM.SceneManager:GetGameMode() ~= EGameMode.Map then
          endPos = Vector3(1500, 1500, 0)
        end
      end
      local customData = {
        {
          targetButton = viewData.targetButton,
          flyDelay = flyDelay,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale,
          endScale = viewData.endScale,
          floatFirst = viewData.floatFirst,
          floatHeight = viewData.floatHeight or 100,
          floatDelay = viewData.floatDelay,
          tempRewardSprite = viewData.tempRewardSprite,
          floatLabel = viewData.floatLabel,
          prompt = viewData.prompt,
          specialFloat = viewData.specialFloat,
          dispersionRatio = viewData.dispersionRatio,
          spriteKey = spriteKey,
          positionOffset = viewData.positionOffset,
          twEffect = uiTwEffect,
          flyCount = viewData.flyCount,
          endPosZ = viewData.endPosZ,
          effectMsg = viewData.effectMsg,
          eleShowTime = viewData.eleShowTime,
          bNoBackAnim = viewData.bNoBackAnim,
          positionOffsetDelay = viewData.positionOffsetDelay,
          endPos = endPos
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData, bNewLayout)
    elseif GM.UserProfileModel:IsAvatarTypeReward(rewardType) then
      local FlyTargetButton
      if GM.SceneManager:GetGameMode() == EGameMode.Map then
        local eButtonKey = GLOBAL_APP and ESceneViewHudButtonKey.Setting or ESceneViewHudButtonKey.Folder
        FlyTargetButton = baseSceneView:GetHudButton(eButtonKey)
      else
        FlyTargetButton = baseSceneView:GetHudButton(ESceneViewHudButtonKey.Map)
      end
      local customData = {
        {
          targetButton = FlyTargetButton,
          flyCount = 1,
          spriteKey = rewardType,
          flyDelay = flyDelay,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData)
    else
      local isToCurrentMode = not bInEventMode or not AlbumModel.IsAlbumPackType(rewardType) and IsEventActivityType(ItemUtility.GetModeByCode(rewardType))
      if GM.MainBoardModel:IsToolBoxCollect() and ToolCodeToLevel[rewardType] then
        if GM.SceneManager:GetGameMode() == EGameMode.Map then
          itemFlyTarget = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Map)
        else
          itemFlyTarget = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory)
        end
        itemFlyEndPosition = itemFlyTarget:GetOriginalPosition()
      end
      local huntMapModel = HuntMapActivityModel.GetActiveModel()
      if huntMapModel ~= nil then
        local window = GM.UIManager:GetOpenedViewByName(HuntMapActivityDefinition[huntMapModel:GetType()].MainWindowPrefabName)
        if window ~= nil then
          itemFlyTarget = window:GetReturnButton()
          itemFlyEndPosition = itemFlyTarget:GetOriginalPosition()
        end
      end
      if viewData.targetRect then
        itemFlyTarget = viewData.targetRect
        itemFlyEndPosition = viewData.targetRect.position
      end
      if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.BPClaimAll) then
        local window = GM.UIManager:GetOpenedTopView()
        if window then
          for _, v in pairs(PassActivityDefinition) do
            if window.name == v.MainWindowPrefabName then
              itemFlyTarget = nil
              itemFlyEndPosition = nil
              itemToMainTarget = nil
            end
          end
        end
      end
      local customData = {
        {
          targetButton = isToCurrentMode and itemFlyTarget or itemToMainTarget,
          endPos = isToCurrentMode and itemFlyEndPosition or nil,
          flyCount = rewardData[PROPERTY_COUNT],
          spriteKey = GM.ItemDataModel:GetSpriteName(rewardType),
          flyDelay = flyDelay,
          prompt = viewData.prompt,
          eventLock = viewData.eventLock,
          startScale = viewData.startScale,
          midScale = viewData.midScale,
          effectMsg = viewData.effectMsg,
          bNoBackAnim = viewData.bNoBackAnim,
          positionOffsetDelay = viewData.positionOffsetDelay
        }
      }
      GM.PropertyDataManager:PlayCollectAnimation({rewardData}, uiWorldPosition, customData)
    end
  end
end

function RewardApi.MergeRewards(to, from)
  if Table.IsEmpty(from) then
    return
  end
  from = from or {}
  for _, vf in pairs(from) do
    local inserted
    for _, vt in pairs(to) do
      if vf[PROPERTY_TYPE] == vt[PROPERTY_TYPE] then
        vt[PROPERTY_COUNT] = vt[PROPERTY_COUNT] + vf[PROPERTY_COUNT]
        inserted = true
        break
      end
    end
    if not inserted then
      to[#to + 1] = Table.ShallowCopy(vf)
    end
  end
end

function RewardApi.MergeRewardsSeparatly(to, from)
  if Table.IsEmpty(from) then
    return
  end
  from = from or {}
  for _, vf in pairs(from) do
    to[#to + 1] = Table.ShallowCopy(vf)
  end
end

function RewardApi.MergeRewardsByHash(...)
  local args = {
    ...
  }
  local mapType2Count = {}
  local rewardType
  for _, arrRewards in pairs(args) do
    for _, reward in pairs(arrRewards or {}) do
      rewardType = reward[PROPERTY_TYPE]
      mapType2Count[rewardType] = (mapType2Count[rewardType] or 0) + reward[PROPERTY_COUNT]
    end
  end
  local result = {}
  for rType, rCount in pairs(mapType2Count) do
    table.insert(result, {
      [PROPERTY_TYPE] = rType,
      [PROPERTY_COUNT] = rCount
    })
  end
  return result
end

function RewardApi.IsReward(reward)
  return reward[PROPERTY_TYPE] ~= nil and reward[PROPERTY_COUNT] ~= nil
end

function RewardApi.IsRewardsEqual(r1, r2)
  local check = {}
  for _, reward in ipairs(r1) do
    check[reward[PROPERTY_TYPE]] = (check[reward[PROPERTY_TYPE]] or 0) + reward[PROPERTY_COUNT]
  end
  for _, reward in ipairs(r2) do
    check[reward[PROPERTY_TYPE]] = (check[reward[PROPERTY_TYPE]] or 0) - reward[PROPERTY_COUNT]
  end
  for _, v in pairs(check) do
    if v ~= 0 then
      return false
    end
  end
  return true
end

function RewardApi.FilterInvalidReward(rewards, bShowException, bUseScoreItemCacheId, map, filter)
  if Table.IsEmpty(rewards) then
    return rewards
  end
  rewards = GM.ScoreItemManager:GetRealReward(rewards, bUseScoreItemCacheId)
  local bReplaced = false
  local result = {}
  local replacedRewards, decorationReward, weeklyAQReward, specialReward
  for _, v in pairs(rewards) do
    replacedRewards = RewardApi.GetReplacedRewards(v)
    decorationReward = DecorationModel.ReplaceDecorationToken(v)
    weeklyAQReward = WeeklyActiveQuestModel.ReplaceWeeklyAQToken(v)
    if not Table.IsEmpty(decorationReward) then
      table.insert(result, decorationReward)
    elseif not Table.IsEmpty(weeklyAQReward) then
      table.insert(result, weeklyAQReward)
    elseif v[PROPERTY_TYPE] == nil and v.image ~= nil then
      table.insert(result, Table.ShallowCopy(v))
    elseif AlbumModel.TryGetReplacedAlbumPack(v[PROPERTY_TYPE]) ~= nil then
      specialReward = Table.ShallowCopy(v)
      specialReward[PROPERTY_TYPE] = AlbumModel.TryGetReplacedAlbumPack(v[PROPERTY_TYPE])
      table.insert(result, specialReward)
    elseif v[PROPERTY_TYPE] == EPropertyType.HuntToken and RewardApi.GetReplaceHttkRewards(v[PROPERTY_TYPE]) ~= nil then
      specialReward = Table.ShallowCopy(v)
      specialReward[PROPERTY_TYPE] = RewardApi.GetReplaceHttkRewards(v[PROPERTY_TYPE])
      table.insert(result, specialReward)
    elseif RewardApi.CheckRewardTypeValid(v[PROPERTY_TYPE], filter) then
      table.insert(result, Table.ShallowCopy(v))
    elseif not Table.IsEmpty(replacedRewards) then
      Table.ListAppend(result, replacedRewards)
      bReplaced = true
    end
  end
  if Table.IsEmpty(result) and bShowException then
    Log.Error("\229\165\150\229\138\177\228\184\186\231\169\186\239\188\140\232\175\183\230\163\128\230\159\165\233\133\141\231\189\174\239\188\129\239\188\129")
  end
  if bReplaced then
    local originRewards = {}
    local targetRewards = {}
    for _, reward in ipairs(rewards) do
      table.insert(originRewards, {
        [PROPERTY_TYPE] = reward[PROPERTY_TYPE],
        [PROPERTY_COUNT] = reward[PROPERTY_COUNT]
      })
    end
    for _, reward in ipairs(result) do
      table.insert(targetRewards, {
        [PROPERTY_TYPE] = reward[PROPERTY_TYPE],
        [PROPERTY_COUNT] = reward[PROPERTY_COUNT]
      })
    end
    GM.BIManager:LogAction(EBIType.RewardReplaced, {origin = originRewards, target = targetRewards}, map)
  end
  return result
end

function RewardApi.GetReplaceHttkRewards(rewardType)
  if rewardType ~= EPropertyType.HuntToken then
    return nil
  end
  for actType, actDefinition in pairs(HuntActivityDefinition) do
    if actDefinition.TokenType then
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:GetState() == ActivityState.Started then
        return actDefinition.TokenType
      end
    end
  end
  return nil
end

function RewardApi.AddFilterRewardEventListener(target, targetFunc)
  EventDispatcher.AddListener(EEventType.AlbumStateChanged, target, targetFunc)
  EventDispatcher.AddListener(EEventType.PoppedCacheAlbumPack, target, targetFunc)
  EventDispatcher.AddListener(EEventType.AlbumKingcardUseSuccess, target, targetFunc)
  EventDispatcher.AddListener(EEventType.AlbumBuffStateChanged, target, targetFunc)
  EventDispatcher.AddListener(EEventType.AvatarStateChanged, target, targetFunc)
  for _, v in pairs(HuntActivityDefinition) do
    EventDispatcher.AddListener(v.StateChangedEvent, target, targetFunc)
  end
  for _, v in pairs(PassActivityDefinition) do
    EventDispatcher.AddListener(v.StateChangedEvent, target, targetFunc)
  end
  for _, v in pairs(DecorationDefinition) do
    EventDispatcher.AddListener(v.StateChangedEvent, target, targetFunc)
    if v.IsTimeLimitExtraSeries then
      EventDispatcher.AddListener(v.ScoreChangedEvent, target, targetFunc)
    end
  end
  for _, v in pairs(LuckyStarDefinition) do
    EventDispatcher.AddListener(v.StateChangedEvent, target, targetFunc)
  end
  for _, v in pairs(SealDefinition) do
    EventDispatcher.AddListener(v.StateChangedEvent, target, targetFunc)
  end
  for _, v in pairs(DigActivityDefinition) do
    EventDispatcher.AddListener(v.StateChangedEvent, target, targetFunc)
    EventDispatcher.AddListener(v.DigItemStateChangedEvent, target, targetFunc)
  end
end

function RewardApi.CheckRewardTypeValid(rewardType, filter)
  if rewardType == EPropertyType.HuntToken then
    return RewardApi.GetReplaceHttkRewards(rewardType) ~= nil
  end
  if AlbumModel.IsAlbumPackType(rewardType) then
    local albumModel = AlbumModel.GetActiveModel(false, true)
    if AlbumModel.IsFirePack(rewardType) and (not albumModel or not albumModel:IsBuffOpenning(EAlbumBuffType.FireCard)) then
      return false
    end
    if albumModel == nil or not albumModel:IsValidPackId(rewardType) and rewardType ~= AlbumKingcard and rewardType ~= AlbumJokercard then
      return false
    end
  elseif GM.UserProfileModel:IsAvatar(rewardType) and not GM.UserProfileModel:IsAvatarOpen() then
    return false
  elseif StringUtil.StartWith(rewardType, ItemCodePrefix.CloudsDash) then
    return CloudsDashModel.GetActiveModel(true) ~= nil
  elseif rewardType == EPropertyType.DeGeneralToken or rewardType == EPropertyType.DeNewGeneralToken or rewardType == EPropertyType.DeExtraGeneralToken then
    return false
  elseif rewardType == EPropertyType.FreefallBossRewardToken or rewardType == EPropertyType.FreefallRoundRewardToken then
    for k, v in pairs(FreefallActivityDefinition) do
      local model = GM.ActivityManager:GetModel(k)
      if model and model:IsActivityOpen() then
        return true
      end
    end
    return false
  end
  if LuckyStarRewardItem.IsLuckyStarRewardType(rewardType) and not LuckyStarModel.IsAnyLuckyStarActivityOpen() then
    return false
  end
  if HuntMapActivityModel.IsActivityItem(rewardType) then
    return true
  end
  if rewardType == EPropertyType.HuntMapEnergyToken then
    for actType, actDef in pairs(HuntMapActivityDefinition) do
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:GetState() == ActivityState.Started then
        return true
      end
    end
    return false
  end
  if rewardType == EPropertyType.HuntMap1Key then
    local model = GM.ActivityManager:GetModel(ActivityType.HuntMap1)
    return model and model:GetState() == ActivityState.Started
  end
  if rewardType ~= nil then
    for actType, actDef in pairs(HuntMapActivityDefinition) do
      local model = GM.ActivityManager:GetModel(actType)
      if model and model:IsActivityProperty(rewardType) then
        return model:GetState() == ActivityState.Started
      elseif rewardType == actDef.TicketPropertyType then
        return model and model:GetState() == ActivityState.Started
      end
    end
  end
  if rewardType ~= nil then
    for actType, actDef in pairs(HuntAchiDefinition) do
      if rewardType == actDef.ActivityTokenPropertyType or rewardType == actDef.TrophyPropertyType then
        local model = GM.ActivityManager:GetModel(actType)
        return model and model:GetState() == ActivityState.Started
      end
    end
  end
  if rewardType ~= nil and StringUtil.StartWith(rewardType, "hunt") then
    return HuntActivityModel.GetActivityTypeByItemType(rewardType) ~= nil
  end
  local mapActDefCfg = {
    {
      definition = DigActivityDefinition,
      propertyKey = "ScorePropertyType"
    },
    {
      definition = DecorationDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = PassActivityDefinition,
      propertyKey = "ActivityTokenPropertyType",
      checkFunc = function(model)
        return model:GetState() == ActivityState.Started
      end
    },
    {
      definition = FlyingRaceActivityDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = ConveyorBeltDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = HuntActivityDefinition,
      propertyKey = "TokenType"
    },
    {
      definition = CloudsDashDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = WeeklyActiveQuestDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = DonutRaceDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = DonutRaceDefinition,
      propertyKey = "DashTokenPropertyType",
      checkFunc = function(model)
        if model:GetState() < ActivityState.Released then
          return true
        end
      end
    },
    {
      definition = FloatRaceDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = SealDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = HuntDashDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = RoadRankDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = DredgeActivityDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = FreefallActivityDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = CrackerRaceDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = CrackerRaceDefinition,
      propertyKey = "DashTokenPropertyType",
      checkFunc = function(model)
        if model:GetState() < ActivityState.Released then
          return true
        end
      end
    },
    {
      definition = KitchenRaceDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = KitchenRaceDefinition,
      propertyKey = "DashTokenPropertyType",
      checkFunc = function(model)
        if model:GetState() < ActivityState.Released then
          return true
        end
      end
    },
    {
      definition = OtterRankDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = DivingPkRaceDefinition,
      propertyKey = "ActivityTokenPropertyType"
    },
    {
      definition = DivingPkRaceDefinition,
      propertyKey = "DashTokenPropertyType",
      checkFunc = function(model)
        if model:GetState() < ActivityState.Released then
          return true
        end
      end
    },
    {
      definition = HuntAchiDefinition,
      propertyKey = "ActivityTokenPropertyType",
      checkFunc = function(model)
        return model:IsActivityOpen()
      end
    },
    {
      definition = HuntAchiDefinition,
      propertyKey = "TrophyPropertyType",
      checkFunc = function(model)
        return model:IsActivityOpen()
      end
    },
    {
      definition = EaterRankDefinition,
      propertyKey = "ActivityTokenPropertyType",
      checkFunc = function(model)
        return model:IsActivityOpen()
      end
    },
    {
      definition = EaterRankDefinition,
      propertyKey = "DashTokenPropertyType",
      checkFunc = function(model)
        if model:GetState() < ActivityState.Released then
          return true
        end
      end
    }
  }
  for _, actDefCfg in pairs(mapActDefCfg) do
    for actType, definition in pairs(actDefCfg.definition) do
      if definition[actDefCfg.propertyKey] == rewardType then
        local model = GM.ActivityManager:GetModel(actType)
        if not (model ~= nil and (not actDefCfg.checkFunc or actDefCfg.checkFunc(model))) or not actDefCfg.checkFunc and not model:CanAddScore() then
          return false
        end
      end
    end
  end
  if rewardType == EPropertyType.WAQStar or rewardType == EPropertyType.WAQDoubleStar then
    for k, _ in pairs(WeeklyActiveQuestDefinition) do
      local model = GM.ActivityManager:GetModel(k)
      if model and (model:GetState() == ActivityState.Started or model:GetState() == ActivityState.Ended) and model:HasStarReward() then
        return true
      end
    end
    return false
  end
  if filter and not filter(rewardType) then
    return false
  end
  return true
end

function RewardApi.GetReplacedRewards(reward)
  if Table.IsEmpty(reward) then
    return
  end
  local commonWeightKey = "Weight"
  local mapItem2ReplacedConfigs = GM.PropertyDataManager:GetItemReplacedConfig()
  
  local function matchFunc(rewardType, rewardNum, rewardWeight)
    if rewardType == nil or rewardNum == nil then
      return
    end
    local result = {}
    local arrConfig = mapItem2ReplacedConfigs[rewardType] or {}
    for _, config in ipairs(arrConfig) do
      if config.Num ~= nil and config.Num ~= 0 and not Table.IsEmpty(config.replace) then
        for _, reward in ipairs(config.replace) do
          table.insert(result, {
            [PROPERTY_TYPE] = reward[PROPERTY_TYPE],
            [PROPERTY_COUNT] = reward[PROPERTY_COUNT] * math.ceil(rewardNum / config.Num),
            [commonWeightKey] = rewardWeight
          })
        end
        return result
      end
    end
  end
  
  local replacedRewards = matchFunc(reward[PROPERTY_TYPE], reward[PROPERTY_COUNT], reward[commonWeightKey])
  if replacedRewards == nil then
    replacedRewards = matchFunc(RewardApi.GetPropertyCommonType(reward[PROPERTY_TYPE]), reward[PROPERTY_COUNT], reward[commonWeightKey])
  end
  for _, rd in ipairs(replacedRewards or {}) do
    if rd[PROPERTY_TYPE] == EPropertyType.Gold then
      rd[PROPERTY_COUNT] = rd[PROPERTY_COUNT] * GM.LevelModel:GetCurrentLevel()
    end
  end
  return replacedRewards
end

function RewardApi.GetPropertyCommonType(propertyType)
  if StringUtil.IsNilOrEmpty(propertyType) then
    return
  end
  for _, activityDefine in pairs(PassActivityDefinition) do
    if activityDefine.ActivityTokenPropertyType == propertyType then
      return ECommonPropertyType.BPToken
    end
  end
  for _, activityDefine in pairs(DecorationDefinition) do
    if activityDefine.ActivityTokenPropertyType == propertyType then
      return ECommonPropertyType.DecorationToken
    end
  end
  if AlbumModel.IsAlbumPackType(propertyType) then
    local level = 0
    local arrStr = StringUtil.Split(propertyType, "_")
    for i = #arrStr, 1, -1 do
      if tonumber(arrStr[i]) ~= nil then
        level = tonumber(arrStr[i])
        break
      end
    end
    return ECommonPropertyType.AlbumPack .. level
  end
end

function RewardApi.SortRewardsByPriority(rewards, bInverse)
  if Table.IsEmpty(rewards) then
    return
  end
  table.sort(rewards, function(a, b)
    if bInverse then
      return RewardApi.GetRewardPriority(a) > RewardApi.GetRewardPriority(b)
    else
      return RewardApi.GetRewardPriority(a) < RewardApi.GetRewardPriority(b)
    end
  end)
end

function RewardApi.GetRewardPriority(reward)
  if GM.UserProfileModel:IsAvatarTypeReward(reward[PROPERTY_TYPE]) then
    return RewardPriority.Avatar
  elseif ItemBoxSimilarUtility.IsBoxSimilarItem(reward[PROPERTY_TYPE]) then
    return RewardPriority.BoxItem
  end
  return RewardPriority.Other
end

function RewardApi.FormatRewardNumText(reward)
  if reward[PROPERTY_TYPE] == EPropertyType.LemonSealToken then
    return "x" .. tostring(reward[PROPERTY_COUNT])
  end
  if GM.PropertyDataManager:IsPropertyType(reward[PROPERTY_TYPE]) then
    return tostring(reward[PROPERTY_COUNT])
  elseif reward[PROPERTY_COUNT] == "" then
    return ""
  else
    return "x" .. tostring(reward[PROPERTY_COUNT])
  end
end

function RewardApi.GetCommonRewardSpriteName(rewardType)
  local bIsPropertyType = GM.PropertyDataManager:IsPropertyType(rewardType)
  local spriteName = bIsPropertyType and EPropertySprite[rewardType] or GM.ItemDataModel:GetSpriteName(rewardType)
  return spriteName
end

function RewardApi.GetTargetRewardCount(rewards, targetType)
  if Table.IsEmpty(rewards) then
    return 0
  end
  if targetType == nil then
    return 0
  end
  for _, reward in pairs(rewards) do
    if reward[PROPERTY_TYPE] == targetType then
      return reward[PROPERTY_COUNT]
    end
  end
  return 0
end
