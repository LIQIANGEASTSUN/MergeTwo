OrderRewardArea = {
  Normal = 1,
  Bottom = 2,
  RightSp = 3,
  Special = 4
}
OrderCell = setmetatable({}, BaseOrderCell)
OrderCell.__index = OrderCell

function OrderCell:Awake()
  self:_AddListeners()
end

function OrderCell:Init(order, orderArea)
  self.m_order = order
  self.m_bIsChest = order and order:IsChestCustomerOrder() or false
  self.m_orderArea = orderArea
  self.m_orderActType = {}
  if not order then
    self:_ShowEmpty()
    return
  end
  if self.m_orderRewardPos == nil then
    self.m_orderRewardPos = self.m_rewards.transform.anchoredPosition
    self.m_exRewardsPos = self.m_exRewardsRootTrans.anchoredPosition
  end
  self:UpdateLockState(true)
  self:_UpdateAvatar()
  self.m_icons = self.m_icons or {}
  if self.m_order:GetType() ~= OrderType.CurtainCall then
    local count = #order:GetRequirements()
    for i = 1, count do
      if self.m_icons[i] == nil then
        local iconObject = Object.Instantiate(self.m_iconPrefab, self.m_iconArea.transform)
        local orderIcon = iconObject:GetLuaTable()
        table.insert(self.m_icons, orderIcon)
      end
      self.m_icons[i].gameObject:SetActive(true)
      self.m_icons[i]:Init(order, i, self.m_orderArea)
    end
    for i = count + 1, #self.m_icons do
      self.m_icons[i].gameObject:SetActive(false)
    end
  end
  if #order:GetRequirements() == 2 then
    local rectOffset = CS.UnityEngine.RectOffset(25, 25, 0, 0)
    self.m_iconArea.padding = rectOffset
  end
  self:_UpdateRewardInfo()
  self.m_showDeliver = self.m_order:GetState() == OrderState.CanDeliver
  if not self.m_listenersAdded and self.gameObject.activeInHierarchy then
    self:_AddListeners()
  end
  self:_OnShowItemTestInfoChanged()
  self:UpdateSurpriseChestState()
  self:UpdateDecorationScoreState()
  self:UpdateSunflowerState(true)
  self:_UpdateVolcanoRaceState()
  self:_UpdateSingleJumpState()
  self:_UpdateRoadOrderState()
  self:_UpdateDartDashState()
  self:_UpdateFireworksGalaState(true)
end

function OrderCell:OnDisable()
  if self.m_deliverEffectTween ~= nil then
    self.m_deliverEffectTween:Pause()
  end
  if self.m_enterAnimSeq ~= nil then
    self.m_enterAnimSeq:Pause()
  end
  if self.m_buttonTween ~= nil then
    self.m_buttonTween:Pause()
  end
  if self.m_starEffectGo ~= nil then
    UIUtil.SetActive(self.m_starEffectGo, false)
  end
end

function OrderCell:OnEnable()
  if self.m_deliverEffectTween ~= nil then
    self.m_deliverEffectTween:Restart()
  end
  if self.m_enterAnimSeq ~= nil then
    self.m_enterAnimSeq:Restart()
  end
  if self.m_buttonTween ~= nil then
    self.m_buttonTween:Restart()
  end
end

function OrderCell:_UpdateAvatar(callback)
  if self.m_lockRewardShow or self.m_order:GetState() == OrderState.Finished then
    return
  end
  if self.m_AvatarGroupGo then
    self.m_AvatarGroupGo:SetActive(not self.m_lockState or not self.m_lockGroupGo)
  end
  if self.m_lockState and self.m_lockGroupGo then
    self.m_lockGroupGo:SetActive(true)
    UIUtil.SetActive(self.m_exRewardsRootTrans.gameObject, false)
    UIUtil.SetActive(self.m_bottomRewardsContentGo, false)
    UIUtil.SetActive(self.m_rewards.gameObject, false)
  end
  local avatarName = self.m_order:GetAvatarId() and self.m_order:GetAvatarName()
  if avatarName ~= self.m_avatarName then
    self.m_avatarName = avatarName
    if self.m_avatarGo ~= nil then
      self.m_avatarGo:RemoveSelf()
      self.m_avatarGo = nil
    end
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(avatarName), self.m_avatarTransf, Vector3.zero, function(gameObject)
      self.m_avatarGo = gameObject
      local luaTable = gameObject:GetLuaTable()
      luaTable:Init(AvatarScene.Order, nil, nil, avatarName, self.m_order, self)
      self:_OnAvatarLoadFinished(luaTable)
      if callback then
        callback()
      end
    end)
  end
end

function OrderCell:_ShowEmpty()
  if self.m_icons then
    for _, icon in ipairs(self.m_icons) do
      icon.gameObject:SetActive(false)
    end
  end
  self.m_rewards.gameObject:SetActive(false)
  self:_HideNewRewardsGo()
  self:_UpdateDeliverButton(false)
  self.m_radianceGo:SetActive(false)
  if self.m_radianceGo2 then
    self.m_radianceGo2:SetActive(false)
  end
end

function OrderCell:_HideNewRewardsGo()
  if self.m_bottomRewardsContentGo ~= nil then
    self.m_bottomRewardsContentGo:SetActive(false)
  end
  if self.m_bottomRewardsBgGo ~= nil then
    self.m_bottomRewardsBgGo:SetActive(false)
  end
  if self.m_specialRewardsContentGo ~= nil then
    self.m_specialRewardsContentGo:SetActive(false)
  end
  if self.m_rightSpRewardsRoot ~= nil then
    self.m_rightSpRewardsRoot.gameObject:SetActive(false)
  end
end

function OrderCell:_OnLoginFinished()
  local orderRewardConfigMd5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.OrderRewardDistribution)
  if orderRewardConfigMd5 ~= self.m_orderRewardConfigMd5 and self:_CanUseNewDistribution() then
    if not Table.IsEmpty(self.m_arrReward) then
      for _, reward in ipairs(self.m_arrReward) do
        GameObject.Destroy(reward.gameObject)
      end
    end
    self.m_arrReward = {}
    self:_UpdateRewardInfo()
  end
end

function OrderCell:_CanUseNewDistribution()
  return self.m_order and self.m_bottomRewardsContentGo and self.m_specialRewardsContentGo and self.m_rightSpRewardsRoot
end

function OrderCell:_ForceUpdateRewardInfo()
  self.m_forceUpdateSunshineReward = true
  self:_UpdateRewardInfo()
end

function OrderCell:_UpdateRewardInfo(displayRewards)
  if not self.m_order then
    return
  end
  if self.m_willBeFinished then
    return
  end
  if displayRewards == nil then
    displayRewards = Table.ShallowCopy(self.m_order:GetRewards())
  end
  self:_UpdateExReward(displayRewards)
  local orderRewardDistributionConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.OrderRewardDistribution)
  self.m_orderRewardConfigMd5 = GM.ConfigModel:GetServerConfigMD5(ServerConfigKey.OrderRewardDistribution)
  if not Table.IsEmpty(orderRewardDistributionConfig) and self:_CanUseNewDistribution() then
    self:_UpdateRewardInfoWithNewDistribution(displayRewards)
  else
    self:_UpdateRewardInfoWithOldDistribution(displayRewards)
  end
  self:_OnShowItemTestInfoChanged()
end

local AllExRewardPropertyName = {
  "m_timedBuffReward",
  "m_spokespersonReward",
  "m_photoReward",
  "m_sunReward"
}

function OrderCell:GetExRewardIndex(propertyName)
  local index = 0
  for _, name in ipairs(AllExRewardPropertyName) do
    if propertyName == name then
      return index
    end
    if self[name] ~= nil then
      index = index + 1
    end
  end
  Log.Error("[OrderCell:GetExRewardIndex] \230\178\161\230\156\137\229\174\154\228\185\137\229\156\168 AllExRewardPropertyName, name=" .. propertyName)
  return index
end

function OrderCell:_UpdateExReward(displayRewards)
  self.m_timedBuffRewardData = nil
  for i = #displayRewards, 1, -1 do
    if displayRewards[i].prefab then
      self.m_timedBuffRewardData = displayRewards[i]
      table.remove(displayRewards, i)
    end
  end
  self.m_showTimedBuffReward = self.m_timedBuffRewardData ~= nil
  if self.m_timedBuffReward ~= nil then
    if self.m_showTimedBuffReward then
      self.m_timedBuffReward:Init(self.m_timedBuffRewardData)
      self.m_timedBuffReward:PlayAppearEffect()
      self.m_timedBuffReward.transform:SetSiblingIndex(self:GetExRewardIndex("m_timedBuffReward"))
    else
      Object.Destroy(self.m_timedBuffReward.gameObject)
      self.m_timedBuffReward = nil
    end
  elseif self.m_showTimedBuffReward and not self.m_loadingTimedBuffReward then
    self.m_loadingTimedBuffReward = true
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(self.m_timedBuffRewardData.prefab), self.m_exRewardsRootTrans, Vector3.zero, function(go)
      self.m_loadingTimedBuffReward = nil
      if self.m_showTimedBuffReward == false then
        Object.Destroy(go)
        return
      end
      if go ~= nil and not go:IsNull() then
        self.m_timedBuffReward = go:GetLuaTable()
        self.m_timedBuffReward:Init(self.m_timedBuffRewardData)
        go.transform:SetSiblingIndex(self:GetExRewardIndex("m_timedBuffReward"))
        self.m_timedBuffReward:PlayAppearEffect()
      end
    end)
  end
  local spokespersonReward
  if self.m_order.GetSpokespersonOrderReward then
    spokespersonReward = self.m_order:GetSpokespersonOrderReward()
  end
  if spokespersonReward ~= nil then
    if self.m_spokespersonReward == nil then
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(SpokespersonModel.GetActiveModel():GetOrderRewardPrefabName()), self.m_exRewardsRootTrans, Vector3.zero, function(go)
        if self.m_spokespersonReward ~= nil then
          Object.Destroy(go)
          return
        end
        go.transform:SetSiblingIndex(self:GetExRewardIndex("m_spokespersonReward"))
        self.m_spokespersonReward = go:GetLuaTable()
        self.m_spokespersonReward:Init(spokespersonReward, nil, nil)
      end)
    else
      self.m_spokespersonReward:Init(spokespersonReward, nil, nil)
    end
  elseif not self.m_lockRewardShow and self.m_spokespersonReward then
    Object.Destroy(self.m_spokespersonReward.gameObject)
    self.m_spokespersonReward = nil
  end
  local photoReward
  if self.m_order.GetPhotoReward then
    photoReward = self.m_order:GetPhotoReward()
  end
  if photoReward ~= nil then
    if self.m_photoReward == nil then
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.PhotoOrderReward), self.m_exRewardsRootTrans, Vector3.zero, function(go)
        if self.m_photoReward ~= nil then
          Object.Destroy(go)
          return
        end
        go.transform:SetSiblingIndex(self:GetExRewardIndex("m_photoReward"))
        self.m_photoReward = go:GetLuaTable()
        self.m_photoReward:Init(photoReward, nil, nil)
      end)
    else
      self.m_photoReward:Init(photoReward, nil, nil)
    end
  elseif self.m_photoReward then
    Object.Destroy(self.m_photoReward.gameObject)
    self.m_photoReward = nil
  end
  local sunReward, bShow = nil, false
  if self.m_order.GetSunshineOrderReward then
    sunReward, bShow = self.m_order:GetSunshineOrderReward()
  end
  self.m_bShowSunReward = bShow and not Table.IsEmpty(sunReward)
  if self.m_forceUpdateSunshineReward == true and self.m_bShowSunReward and self.m_sunReward ~= nil then
    Object.Destroy(self.m_sunReward.gameObject)
    self.m_sunReward = nil
  end
  if self.m_sunReward ~= nil then
    if self.m_bShowSunReward then
      self.m_sunReward:Init(sunReward, nil, nil)
    else
      Object.Destroy(self.m_sunReward.gameObject)
      self.m_sunReward = nil
    end
  elseif self.m_bShowSunReward and not self.m_bLoadingSunReward then
    self.m_bLoadingSunReward = true
    local sunshinePrefabName = GM.ActivityManager:GetSunshineRewardPrefab()
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(sunshinePrefabName), self.m_exRewardsRootTrans, Vector3.zero, function(go)
      self.m_bLoadingSunReward = nil
      if self.m_bShowSunReward == false then
        Object.Destroy(go)
        return
      end
      if go ~= nil and not go:IsNull() then
        go.transform:SetSiblingIndex(self:GetExRewardIndex("m_sunReward"))
        self.m_sunReward = go:GetLuaTable()
        self.m_sunReward:Init(sunReward, nil, nil)
      end
      self.m_forceUpdateSunshineReward = nil
    end)
  end
  UIUtil.SetActive(self.m_exRewardsRootTrans.gameObject, not self.m_lockState)
end

function OrderCell:_UpdateRewardInfoWithNewDistribution(displayRewards)
  if not Table.IsEmpty(self.m_arrReward) then
    for _, reward in ipairs(self.m_arrReward) do
      GameObject.Destroy(reward.gameObject)
    end
  end
  self.m_arrReward = {}
  
  local function _IsSameType(rwdType, cfgType)
    return rwdType == cfgType
  end
  
  local function _IsSimilarType(rwdType, cfgType)
    if StringUtil.StartWith(rwdType, cfgType) then
      return true
    end
    rwdType = rwdType:gsub("%d", "")
    if rwdType == cfgType then
      return true
    end
    return false
  end
  
  local leftSpReward
  local normalRewards, bottomRewards, specialRewards, otherRewards = {}, {}, {}, {}
  local orderRewardDistributionConfig = GM.ConfigModel:GetServerConfig(ServerConfigKey.OrderRewardDistribution)
  for _, reward in pairs(displayRewards) do
    local bFindArea = false
    for _, v in pairs(orderRewardDistributionConfig) do
      if _IsSameType(reward[PROPERTY_TYPE], v.type) then
        if v.area == OrderRewardArea.Normal then
          normalRewards[#normalRewards + 1] = reward
        elseif v.area == OrderRewardArea.Bottom then
          bottomRewards[#bottomRewards + 1] = reward
        elseif v.area == OrderRewardArea.RightSp then
          specialRewards[#specialRewards + 1] = reward
        else
          break
        end
        bFindArea = true
        break
      end
    end
    if not bFindArea then
      for _, v in pairs(orderRewardDistributionConfig) do
        if _IsSimilarType(reward[PROPERTY_TYPE], v.type) then
          if v.area == OrderRewardArea.Normal then
            normalRewards[#normalRewards + 1] = reward
          elseif v.area == OrderRewardArea.Bottom then
            bottomRewards[#bottomRewards + 1] = reward
          elseif v.area == OrderRewardArea.RightSp then
            specialRewards[#specialRewards + 1] = reward
          else
            break
          end
          bFindArea = true
          break
        end
      end
    end
    if not bFindArea then
      otherRewards[#otherRewards + 1] = reward
    end
  end
  
  local function _GetRewardOrder(type)
    for _, v in pairs(orderRewardDistributionConfig) do
      if _IsSameType(type, v.type) then
        return v.order or math.maxinteger
      end
    end
    for _, v in pairs(orderRewardDistributionConfig) do
      if _IsSimilarType(type, v.type) then
        return v.order or math.maxinteger
      end
    end
  end
  
  table.sort(normalRewards, function(a, b)
    local priorityA = _GetRewardOrder(a[PROPERTY_TYPE])
    local priorityB = _GetRewardOrder(b[PROPERTY_TYPE])
    return priorityA < priorityB
  end)
  table.sort(bottomRewards, function(a, b)
    local priorityA = _GetRewardOrder(a[PROPERTY_TYPE])
    local priorityB = _GetRewardOrder(b[PROPERTY_TYPE])
    return priorityA < priorityB
  end)
  table.sort(specialRewards, function(a, b)
    local priorityA = _GetRewardOrder(a[PROPERTY_TYPE])
    local priorityB = _GetRewardOrder(b[PROPERTY_TYPE])
    return priorityA < priorityB
  end)
  table.sort(otherRewards, function(a, b)
    local priorityA = self:_GetRewardPriority(a[PROPERTY_TYPE])
    local priorityB = self:_GetRewardPriority(b[PROPERTY_TYPE])
    return priorityA < priorityB
  end)
  if 1 < #specialRewards then
    for i = 1, #specialRewards - 1 do
      bottomRewards[#bottomRewards + 1] = specialRewards[i]
    end
    specialRewards = {
      specialRewards[#specialRewards]
    }
  end
  if 0 < #bottomRewards then
    leftSpReward = bottomRewards[1]
    for i = 2, #bottomRewards do
      bottomRewards[i - 1] = bottomRewards[i]
    end
    bottomRewards[#bottomRewards] = nil
  end
  if not Table.IsEmpty(otherRewards) then
    for i = 1, #otherRewards do
      normalRewards[#normalRewards + 1] = otherRewards[i]
    end
  end
  local i = 1
  for j = #normalRewards, 1, -1 do
    local orderRewardGo = Object.Instantiate(self.m_rewardPrefab, self.m_rewards)
    table.insert(self.m_arrReward, orderRewardGo:GetLuaTable())
    self.m_arrReward[i].gameObject:SetActive(true)
    self.m_arrReward[i]:Init(normalRewards[j], self:IsIgnoreDouble(normalRewards[j]), nil, self.m_order, self)
    i = i + 1
  end
  for _, v in ipairs(bottomRewards) do
    local orderRewardGo = Object.Instantiate(self.m_bottomRewardPrefab, self.m_bottomRewardsRoot)
    table.insert(self.m_arrReward, orderRewardGo:GetLuaTable())
    self.m_arrReward[i].gameObject:SetActive(true)
    self.m_arrReward[i]:Init(v, self:IsIgnoreDouble(v), OrderRewardArea.Bottom, self.m_order, self)
    i = i + 1
  end
  if leftSpReward ~= nil then
    local orderRewardGo = Object.Instantiate(self.m_specialRewardPrefab, self.m_specialRewardsRoot)
    table.insert(self.m_arrReward, orderRewardGo:GetLuaTable())
    self.m_arrReward[i].gameObject:SetActive(true)
    self.m_arrReward[i]:Init(leftSpReward, self:IsIgnoreDouble(leftSpReward), OrderRewardArea.Special, self.m_order, self)
    i = i + 1
  end
  for _, v in pairs(specialRewards) do
    local orderRewardGo = Object.Instantiate(self.m_rightSpRewardsPrefab, self.m_rightSpRewardsRoot)
    table.insert(self.m_arrReward, orderRewardGo:GetLuaTable())
    self.m_arrReward[i].gameObject:SetActive(true)
    self.m_arrReward[i]:Init(v, self:IsIgnoreDouble(v), OrderRewardArea.RightSp, self.m_order, self)
    i = i + 1
  end
  if self:IsNeedMoveNomalRewardArea() then
    self.m_rewards.anchoredPosition = self.m_orderRewardPos + Vector2(-20, 0)
    self.m_exRewardsRootTrans.anchoredPosition = self.m_exRewardsPos + Vector2(-20, #normalRewards * 50)
  else
    self.m_rewards.anchoredPosition = self.m_orderRewardPos
    self.m_exRewardsRootTrans.anchoredPosition = self.m_exRewardsPos + Vector2(0, #normalRewards * 50)
  end
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_rewards)
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_bottomRewardsRoot)
  self.m_rewards.gameObject:SetActive(0 < #normalRewards and not self.m_lockState)
  self.m_bottomRewardsContentGo:SetActive(0 < #bottomRewards)
  self.m_bottomRewardsBgGo:SetActive(0 < #bottomRewards)
  self.m_specialRewardsContentGo:SetActive(leftSpReward ~= nil)
  self.m_rightSpRewardsRoot.gameObject:SetActive(0 < #specialRewards)
  if 0 < #bottomRewards then
    if not self.m_bottomRewardsLayout then
      self.m_bottomRewardsLayout = self.m_bottomRewardsRoot.gameObject:GetComponent(typeof(CS.UnityEngine.UI.HorizontalLayoutGroup))
    end
    if not UIUtil.IsEmptyComponent(self.m_bottomRewardsLayout) then
      self.m_bottomRewardsLayout.spacing = #bottomRewards == 3 and -3 or 10
    end
    if 3 < #bottomRewards then
      self.m_bottomRewardScrollRect.horizontal = true
    else
      self.m_bottomRewardScrollRect.horizontalNormalizedPosition = 0
      self.m_bottomRewardScrollRect.horizontal = false
    end
  end
end

function OrderCell:_UpdateRewardInfoWithOldDistribution(displayRewards)
  self.m_arrReward = self.m_arrReward or {}
  for _, reward in ipairs(self.m_arrReward) do
    reward.gameObject:SetActive(false)
  end
  table.sort(displayRewards, function(a, b)
    local priorityA = self:_GetRewardPriority(a[PROPERTY_TYPE])
    local priorityB = self:_GetRewardPriority(b[PROPERTY_TYPE])
    return priorityA < priorityB
  end)
  local i = 1
  for _, reward in ipairs(displayRewards) do
    if self.m_arrReward[i] == nil then
      local orderRewardGo = Object.Instantiate(self.m_rewardPrefab, self.m_rewards)
      table.insert(self.m_arrReward, orderRewardGo:GetLuaTable())
    end
    self.m_arrReward[i].gameObject:SetActive(true)
    self.m_arrReward[i]:Init(reward, self:IsIgnoreDouble(reward), nil, self.m_order, self)
    i = i + 1
  end
  if self:IsNeedMoveNomalRewardArea() then
    self.m_rewards.anchoredPosition = self.m_orderRewardPos + Vector2(-20, 0)
    self.m_exRewardsRootTrans.anchoredPosition = self.m_exRewardsPos + Vector2(-20, #displayRewards * 50)
  else
    self.m_rewards.anchoredPosition = self.m_orderRewardPos
    self.m_exRewardsRootTrans.anchoredPosition = self.m_exRewardsPos + Vector2(0, #displayRewards * 50)
  end
  self:_HideNewRewardsGo()
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_rewards)
  self.m_rewards.gameObject:SetActive(0 < #displayRewards and not self.m_lockState)
end

function OrderCell:_GetRewardPriority(rewardType)
  if self.m_mapDisplayRewardPriority == nil then
    self.m_mapDisplayRewardPriority = {
      [EPropertyType.Gold] = 1001,
      [ItemType.ToolBox01] = 1000,
      [ItemType.ToolBox02] = 1000,
      [ItemType.HugeToolBox01] = 1000,
      [ItemType.HugeToolBox02] = 1000,
      [EPropertyType.CoinRaceToken] = 4,
      [EPropertyType.CoinRaceMergeToken] = 4,
      [EPropertyType.CoinRace2Token] = 5,
      [EPropertyType.ArcadeToken2] = 6,
      [EPropertyType.TreasureDig2Token] = 7
    }
    for _, activityDefinition in pairs(DecorationDefinition) do
      if activityDefinition.ActivityTokenPropertyType ~= nil then
        self.m_mapDisplayRewardPriority[activityDefinition.ActivityTokenPropertyType] = 0
      end
    end
    for _, actDef in pairs(HuntActivityDefinition) do
      if actDef.TokenType ~= nil then
        self.m_mapDisplayRewardPriority[actDef.TokenType] = 11
      end
    end
  end
  return AlbumModel.IsAlbumPackType(rewardType) and 0 or self.m_mapDisplayRewardPriority[rewardType] or 1
end

function OrderCell:_AddListeners()
  EventDispatcher.AddListener(EEventType.ShowItemTestInfoChanged, self, self._OnShowItemTestInfoChanged)
  EventDispatcher.AddListener(EEventType.LoginFinished, self, self._OnLoginFinished)
  EventDispatcher.AddListener(EEventType.OrderFinished, self, self._OnOrderFinished)
  EventDispatcher.AddListener(EEventType.CloseView, self, self._OnViewClose)
  EventDispatcher.AddListener(EEventType.ChangeGameMode, self, self._OnStateChanged)
  EventDispatcher.AddListener(EEventType.OrderRewardsAnim, self, self._OrderRewardsAnim)
  for activityType, activityDefinition in pairs(DecorationDefinition) do
    if activityDefinition.DoubleTimeChangeEvent ~= nil then
      EventDispatcher.AddListener(activityDefinition.DoubleTimeChangeEvent, self, function()
        self:UpdateDecorationDoubleTimeState()
      end)
      self:UpdateDecorationDoubleTimeState()
    end
  end
  EventDispatcher.AddListener(EEventType.BandDoubleTimeStateChanged, self, function()
    self:UpdateDecorationDoubleTimeState()
  end)
  for _, activityDefinition in pairs(SurpriseChestActivityDefinition) do
    if activityDefinition.ChestDataStateChanged ~= nil then
      EventDispatcher.AddListener(activityDefinition.ChestDataStateChanged, self, self.OnSurpriseChestDataChanged)
    end
  end
  for _, activityDefinition in pairs(SunflowerDefinition) do
    EventDispatcher.AddListener(activityDefinition.StateChangedEvent, self, self.UpdateSunflowerState)
  end
  EventDispatcher.AddListener(EEventType.SunshineOrderStart, self, self._ForceUpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.SunshineProShowStateChanged, self, self._ForceUpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.SunshineRaceTimeOutEvent, self, self._ForceUpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.SunshineOrderStateChanged, self, self._UpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.SunshineOrderLogicStart, self, self._UpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.TimedBuffStateChanged, self, self._UpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.NoOrderPkRaceStateChanged, self, self._UpdateRewardInfo)
  for _, def in pairs(SpokespersonDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRewardInfo)
    EventDispatcher.AddListener(def.OrderRewardChangedEvent, self, self._UpdateRewardInfo)
  end
  for _, def in pairs(SingleJumpDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateSingleJumpState)
    EventDispatcher.AddListener(def.OrderStateChangedEvent, self, self._UpdateSingleJumpState)
  end
  for _, def in pairs(VolcanoRaceDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateVolcanoRaceState)
    EventDispatcher.AddListener(def.OrderStateChangedEvent, self, self._UpdateVolcanoRaceState)
  end
  for _, def in pairs(RoadOrderDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRoadOrderState)
    EventDispatcher.AddListener(def.OrderStateChangedEvent, self, self._UpdateRoadOrderState)
  end
  for _, def in pairs(DartDashDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateDartDashState)
    EventDispatcher.AddListener(def.OrderStateChangedEvent, self, self._UpdateDartDashState)
  end
  for _, def in pairs(DivingPkRaceDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRewardInfo)
    EventDispatcher.AddListener(def.RoundStateChangedEvent, self, self._UpdateRewardInfo)
  end
  for _, def in pairs(PenguinBattleDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRewardInfo)
  end
  for _, def in pairs(TopRaceDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRewardInfo)
    EventDispatcher.AddListener(def.RoundStateChangedEvent, self, self._UpdateRewardInfo)
  end
  for _, def in pairs(MoreRoundRaceDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRewardInfo)
    EventDispatcher.AddListener(def.UpdateOrderRewardsEvent, self, self._UpdateRewardInfo)
  end
  for _, def in pairs(EaterRankDefinition) do
    EventDispatcher.AddListener(def.StateChangedEvent, self, self._UpdateRewardInfo)
    EventDispatcher.AddListener(def.RoundStateChangedEvent, self, self._UpdateRewardInfo)
  end
  EventDispatcher.AddListener(EEventType.FireworksGalaStateChanged, self, self._UpdateFireworksGalaState)
  EventDispatcher.AddListener(EEventType.HuntDashStateChanged, self, self._UpdateRewardInfo)
  EventDispatcher.AddListener(EEventType.ChestCustomerStateChanged, self, self._UpdateAvatar)
  EventDispatcher.AddListener(EEventType.AmbienceStyleChange, self, self._UpdateAvatar)
  self.m_listenersAdded = true
end

function OrderCell:_OnAvatarLoadFinished(luaTable)
  self.m_tbAvatar = luaTable
end

function OrderCell:GetAvatarLuaTable()
  return self.m_tbAvatar
end

function OrderCell:PlayChestCustomerAnim()
  if self.m_tbAvatar and self.m_tbAvatar.PlayRewardAnim then
    self.m_tbAvatar:PlayRewardAnim()
  end
end

function OrderCell:StopChestCustomerAnim()
  if self.m_tbAvatar and self.m_tbAvatar.StopRewardAnim then
    self.m_tbAvatar:StopRewardAnim()
  end
end

function OrderCell:_OnOrderFinished(msg)
  local id = msg.order:GetId()
  if id == nil then
    return
  end
  if self.m_order and self.m_order:GetId() == id then
    self.m_willBeFinished = true
  end
end

function OrderCell:_OnShowItemTestInfoChanged()
  local testBtnValid = GameConfig.IsTestMode() and GM.UIManager:IsTestActivityButtonValid()
  self:SetRefreshButtonShow(testBtnValid and PlayerPrefs.GetInt(EPlayerPrefKey.TestOrderRefresh, 0) ~= 0)
  if not UIUtil.IsEmptyComponent(self.m_testAddItemsBtnGo) then
    self.m_testAddItemsBtnGo:SetActive(testBtnValid and PlayerPrefs.GetInt(EPlayerPrefKey.ShowOrderAddItemsButton, 0) ~= 0)
  end
  local showTestInfo = PlayerPrefs.GetInt(EPlayerPrefKey.ShowItemTestInfo, 0) == 1 or PlayerPrefs.GetInt(EPlayerPrefKey.ShowOrderShortInfo, 0) == 1
  if not testBtnValid or not showTestInfo then
    self.m_testText.gameObject:SetActive(false)
    return
  end
  self.m_testText.gameObject:SetActive(true)
  local str = self:_GetOrderTestInfo()
  self.m_testText.text = str
  return str
end

function OrderCell:_OrderRewardsAnim(msg)
  if not msg or self.m_rewardForcesSeq then
    return
  end
  local seq = DOTween.Sequence()
  self.m_rewardForcesSeq = seq
  for _, orderRewards in ipairs(self.m_arrReward) do
    if orderRewards:GetShowRewardType() == msg.type then
      seq:AppendInterval(0.4):Append(orderRewards.transform:DOScale(Vector3(1.1, 1.1, 1), 0.2)):Append(orderRewards.transform:DOScale(Vector3(1, 1, 1), 0.2)):Append(orderRewards.transform:DOScale(Vector3(1.1, 1.1, 1), 0.2)):Append(orderRewards.transform:DOScale(Vector3(1, 1, 1), 0.2))
    end
  end
  seq:AppendCallback(function()
    self.m_rewardForcesSeq = nil
  end)
end

function OrderCell:_GetOrderTestInfo()
  if not self.m_order then
    return
  end
  local orderType = self.m_order:GetType()
  local requires = self.m_order:GetRequirements()
  if PlayerPrefs.GetInt(EPlayerPrefKey.ShowOrderShortInfo, 0) == 1 then
    local str = "<color=#ff0000>"
    if self.m_order:GetCar() then
      str = str .. "car" .. self.m_order:GetCar()
    end
    if self.m_order.GetCustomerType then
      str = str .. string.format("\233\162\157\229\164\150\233\161\190\229\174\162:%s, \229\136\134\230\149\176%.3f", self.m_order:GetCustomerType(), self.m_order:GetTotalScore(GM.MainBoardModel.m_orderModel))
    end
    local sunshineOrderBoostModel = GM.ActivityManager:GetModel(ActivityType.SunshineOrderBoost)
    if sunshineOrderBoostModel then
      local sunRewardNum, finishedNum = sunshineOrderBoostModel:GetSunshineScoreBySlot(self.m_order)
      if 0 < sunRewardNum then
        str = str .. " - sun" .. finishedNum + 1
      end
    end
    if self.m_order.weightList then
      for i = 1, #requires do
        if self.m_order.weightList[i] % EOrderItemWeightValue.BreakCDDelta == EOrderItemWeightValue.ReduceStock then
          str = str .. "\n\229\142\187\229\186\147\229\173\152" .. i
        elseif self.m_order.weightList[i] % EOrderItemWeightValue.BreakCDDelta == EOrderItemWeightValue.BalanceBrother then
          str = str .. "\n\229\157\135\232\161\161\229\133\132\229\188\159" .. i
        elseif self.m_order.weightList[i] % EOrderItemWeightValue.BreakCDDelta == EOrderItemWeightValue.OverlapHigh then
          str = str .. "\n\229\133\132\229\188\159&\229\186\147\229\173\152\233\171\152\228\188\152" .. i
        elseif self.m_order.weightList[i] % EOrderItemWeightValue.BreakCDDelta == EOrderItemWeightValue.OverlapNormal then
          str = str .. "\n\229\144\140\229\156\168\229\133\132\229\188\159&\229\186\147\229\173\152" .. i
        end
      end
    end
    str = str .. "</color>"
    return str
  end
  local strItemScore = ""
  if orderType ~= OrderType.Fixed then
    for i = 1, #requires do
      local item = requires[i]
      local score = GM.MainBoardModel:GetOrderModel():GetNotInOrderScore(item)
      if string.match(item, ItemCodePrefix.MainItem) and score == nil then
        Log.Error("[\230\181\139\232\175\149\230\161\134\230\158\182]\230\163\139\229\173\144\231\188\186\229\176\145\229\136\134\230\149\176\233\133\141\231\189\174,\232\175\183\228\184\142\231\173\150\229\136\146\231\161\174\232\174\164:" .. tostring(item))
      end
      score = score or 0
      if self.m_order.weightList then
        strItemScore = strItemScore .. string.format("<color=#ffffff>%d,</color>", self.m_order.weightList[i])
      end
      strItemScore = strItemScore .. string.format("%s=%.4f\n", item, score)
    end
  else
    for i = 1, #requires do
      strItemScore = strItemScore .. string.format("%s\n", requires[i])
    end
  end
  local totalScore = self.m_order:GetTotalScore(GM.MainBoardModel.m_orderModel)
  local strOrderType = EBIType.Order[orderType]
  local str = string.format("<size=26>ID:%s</size>\n<color=#%s>Type:%s \229\136\155\229\187\186\229\136\134:%.4f\n", self.m_order:GetId(), EStandardColor[strOrderType] or "", strOrderType, totalScore)
  if orderType == OrderType.Lane or orderType == OrderType.Recall then
    if self.m_order:GetCar() then
      str = str .. string.format("\232\189\166\233\129\147:%d, %s, car:%d\n", self.m_order:GetLaneId(), self.m_order:GetLaneName(), self.m_order:GetCar())
    else
      str = str .. string.format("\232\189\166\233\129\147:%d, %s\n", self.m_order:GetLaneId(), self.m_order:GetLaneName())
    end
  elseif self.m_order.GetCustomerType then
    str = str .. "\233\161\190\229\174\162:" .. self.m_order:GetCustomerType() .. "\n"
  end
  local difficult = self.m_order:GetLaneSlot()
  if difficult ~= nil then
    str = str .. string.format("difficult: %d\n", difficult)
  end
  str = str .. strItemScore
  str = str .. "</color>"
  return str
end

function OrderCell:OnAddItemsButtonClicked()
  EventDispatcher.DispatchEvent(EEventType.TestAddOrderItems, {
    orders = {
      self.m_order
    }
  })
end

function OrderCell:OnDestroy()
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
  if self.m_buttonTween ~= nil then
    self.m_buttonTween:Kill()
    self.m_buttonTween = nil
  end
  if self.m_glassTween ~= nil then
    self.m_glassTween:Kill()
    self.m_glassTween = nil
  end
  if self.m_newUserOrderUnlockSeq ~= nil then
    self.m_newUserOrderUnlockSeq:Kill()
    self.m_newUserOrderUnlockSeq = nil
  end
end

function OrderCell:GetOrder()
  return self.m_order
end

function OrderCell:GetIconArea()
  return self.m_iconArea
end

function OrderCell:GetIcon(index)
  return self.m_icons[index]
end

function OrderCell:GetGoButton()
  return self.m_button
end

function OrderCell:GetTrayTransform()
  return self.m_tray
end

function OrderCell:OnGoButtonClicked()
  if GM.TutorialModel:GetOngoingDatas(ETutorialId.Order2) == "1" then
    return
  end
  if self:_TryPopPvPSignupNoticeWindow() then
    return
  end
  self:_OnGoBtnClickedCheckStore()
end

function OrderCell:_TryPopPvPSignupNoticeWindow()
  if not GM.ConfigModel:IsServerControlOpen(EGeneralConfType.EventJoinTips) then
    return false
  end
  local blockDuration = (tonumber(GM.ConfigModel:ParseGeneralConf(EGeneralConfType.EventJoinCD)) or 0) * 60 * 60 * 24
  local noticeClosedTimeStamp = PlayerPrefs.GetTimestamp(EPlayerPrefKey.PvPSignupNoticeClosedTimeStamp)
  local bCanPopNoticeByTime = noticeClosedTimeStamp == 0 or blockDuration ~= 0 and noticeClosedTimeStamp + blockDuration < GM.GameModel:GetServerTime()
  if bCanPopNoticeByTime then
    local canNoticeModelNames = {}
    local orderScore = self.m_order:GetTotalScore(GM.MainBoardModel:GetOrderModel()) or 0
    local canSignUpModels = GM.ActivityManager:GetCanSignUpActivityModels()
    for _, model in ipairs(canSignUpModels) do
      if model:IsTargetOrderType(self.m_order:GetType()) and 0 < model:GetOrderRewardScore(orderScore, self.m_order:GetId()) then
        canNoticeModelNames[#canNoticeModelNames + 1] = model:GetType()
      end
    end
    if not Table.IsEmpty(canNoticeModelNames) then
      local ext = {
        events = table.concat(canNoticeModelNames, ",")
      }
      GM.UIManager:OpenView(UIPrefabConfigName.PvPSignupNoticeWindow, ext, function()
        self:_OnGoBtnClickedCheckStore()
      end)
      return true
    end
  end
  return false
end

function OrderCell:_OnGoBtnClickedCheckStore()
  if self.m_order:CanDeliverUseStore() then
    GM.UIManager:OpenView(UIPrefabConfigName.UseInventoryItemConfirmWindow, self.m_order, function()
      self:_OnGoBtnClicked()
    end)
  else
    self:_OnGoBtnClicked()
  end
end

function OrderCell:_OnGoBtnClicked()
  self.m_lockRewardShow = true
  local boardModel = self.m_orderArea:GetBoardView():GetModel()
  boardModel:FinishOrder(self.m_order)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxOrderComplete)
  self:OnOrderStateChanged()
  self:ForceShowAvatar()
end

function OrderCell:ForceShowAvatar()
  if self.m_tbAvatar and self.m_tbAvatar.IsWaitingAppear and self.m_tbAvatar:IsWaitingAppear() then
    self.m_tbAvatar:PlayAvatarAppearAnim(self.m_order:GetId())
  end
end

function OrderCell:SetRefreshButtonShow(bShow)
  if not self.m_refreshBtnGo or self.m_refreshBtnGo:IsNull() then
    return
  end
  self.m_refreshBtnGo:SetActive(bShow)
  self:SetOrderIconClickEnabled(not bShow)
end

function OrderCell:OnRefreshButtonClicked()
  local boardModel = self.m_orderArea:GetBoardView():GetModel()
  boardModel:RefreshOrder(self.m_order, self)
  EventDispatcher.DispatchEvent(EEventType.OnOrderRefreshButtonClicked)
end

function OrderCell:IsRefreshing()
  return self.m_bIsRefreshing
end

function OrderCell:PlayRefreshOrderAnimation(newOrder)
  local oldOrder = self.m_order
  if not newOrder then
    self:PlayExitAnimation(function()
      EventDispatcher.DispatchEvent(EEventType.OrderRefreshed, {
        bSuccess = newOrder ~= nil,
        orderCell = self,
        oldOrder = oldOrder
      })
    end)
    return
  end
  self.m_order = newOrder
  self.m_playingAnimation = true
  self.m_bIsRefreshing = true
  local avatarTrans = self.m_avatarTransf
  local sequence = DOTween.Sequence()
  sequence:Append(avatarTrans:DOAnchorPosY(25, 0.2))
  sequence:Append(avatarTrans:DOAnchorPosY(-266, 0.3))
  sequence:AppendCallback(function()
    for i = 1, #self.m_icons do
      self.m_icons[i].gameObject:RemoveSelf()
    end
    self.m_icons = nil
    self:Init(newOrder, self.m_orderArea)
  end)
  sequence:Append(avatarTrans:DOAnchorPosY(25, 0.4))
  sequence:Append(avatarTrans:DOAnchorPosY(0, 0.3))
  sequence:AppendCallback(function()
    if self.gameObject:IsNull() then
      return
    end
    self.m_playingAnimation = false
    self.m_bIsRefreshing = nil
    self:OnOrderStateChanged()
    EventDispatcher.DispatchEvent(EEventType.OrderRefreshed, {
      bSuccess = newOrder ~= nil,
      orderCell = self,
      oldOrder = oldOrder
    })
    if self.m_orderArea.ScrollTargetOrderToView then
      Log.Debug("PlayRefreshOrderAnimation", "[\233\149\156\229\164\180\231\167\187\229\138\168]")
      self.m_orderArea:ScrollTargetOrderToView(self.m_order:GetId(), false, true)
    end
  end)
end

function OrderCell:SetOrderIconClickEnabled(enable)
  for _, icon in ipairs(self.m_icons) do
    icon:SetClickEnabled(enable)
  end
end

function OrderCell:SetGoButtonEnabled(enable)
  self.m_goBtn.enabled = enable
end

function OrderCell:SetHighlightMaskGoActive(active)
  if self.m_highlightMaskGo then
    UIUtil.SetActive(self.m_highlightMaskGo, active)
  end
end

function OrderCell:OnHighlightMaskClicked()
  EventDispatcher.DispatchEvent(EEventType.OrderMaskClicked)
end

function OrderCell:OnOrderStateChanged(bWithoutAvatarAnimation, isNewOrder, noScroll, noAudio)
  if not self.m_order then
    return
  end
  if self.m_playingAnimation then
    return
  end
  local canDeliverOrder = self.m_order:GetState() == OrderState.CanDeliver
  local playAudioEffect = false
  if canDeliverOrder then
    if self.m_buttonTween == nil and not GM.ConfigModel:IsOrderDeliverButtonOpen() then
      local seq = DOTween.Sequence():SetLoops(-1)
      seq:Append(self.m_buttonImage:DOColor(CSColor(0.64, 0.83, 0.72, 1), 0.4):SetLoops(2, LoopType.Yoyo))
      seq:AppendInterval(0.2)
      self.m_buttonTween = seq
    elseif not self.m_showDeliver and self.m_buttonTween then
      self.m_buttonTween:Restart()
    end
    if not GM.TutorialModel:IsTutorialFinished(ETutorialId.Map) and GM.TutorialModel:IsTutorialFinished(ETutorialId.Order1) and not GM.TutorialModel:HasAnyStrongTutorialOngoing() then
      self.m_forceTip = true
      self:SetHandEffectActive(true)
    else
      self.m_forceTip = false
      self:SetHandEffectActive(false)
    end
    if self.m_showDeliver == false and (not isNewOrder or self:_IsMainOrder()) and not noAudio then
      GM.AudioModel:PlayEffect(AudioFileConfigName.sfxOrderCanDeliver1)
      playAudioEffect = true
    end
  else
    if self.m_buttonTween ~= nil then
      self.m_buttonTween:Pause()
      self.m_buttonImage.color = CSColor(1, 1, 1, 1)
    end
    self.m_forceTip = false
    self:SetHandEffectActive(false)
  end
  if isNewOrder and not playAudioEffect then
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxNewOrder)
  end
  self:_UpdateDeliverButton(canDeliverOrder)
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.OrderScrollRule) then
    if not noScroll and not isNewOrder then
      self:_TryScrollWhenOrderStateChanged()
    end
  else
    self:_TryScrollWhenOrderStateChanged()
  end
  if self.m_starEffectGo ~= nil then
    if canDeliverOrder and not self.m_showDeliver then
      if self.m_deliverEffectTween then
        self.m_deliverEffectTween:Kill()
        self.m_deliverEffectTween = nil
      end
      local sequence = DOTween.Sequence()
      self.m_deliverEffectTween = sequence
      if not bWithoutAvatarAnimation then
        local avatarTrans = self.m_avatarTransf
        UIUtil.SetAnchoredPosition(avatarTrans, nil, -266)
        sequence:Append(avatarTrans:DOAnchorPosY(25, 0.4))
        sequence:Append(avatarTrans:DOAnchorPosY(0, 0.3))
      end
      sequence:InsertCallback(0.8, function()
        if self.m_starEffectGo2 and self.m_bIsChest then
          self.m_starEffectGo2:SetActive(false)
          self.m_starEffectGo2:SetActive(true)
        else
          self.m_starEffectGo:SetActive(false)
          self.m_starEffectGo:SetActive(true)
        end
      end)
      sequence:OnComplete(function()
        self.m_deliverEffectTween = nil
      end)
    end
    if self.m_starEffectGo2 and self.m_bIsChest then
      self.m_starEffectGo2:SetActive(canDeliverOrder)
    elseif self.m_starEffectGo.activeInHierarchy ~= canDeliverOrder then
      self.m_starEffectGo:SetActive(canDeliverOrder)
    end
  end
  self.m_showDeliver = canDeliverOrder
  if self.m_radianceGo2 and self.m_bIsChest then
    self.m_radianceGo2:SetActive(canDeliverOrder)
  else
    self.m_radianceGo:SetActive(canDeliverOrder)
  end
  for _, icon in ipairs(self.m_icons) do
    icon:OnOrderStateChanged()
  end
  self:UpdateLockState()
end

function OrderCell:_UpdateDeliverButton(canDeliverOrder)
  if self.m_bLock then
    return
  end
  UIUtil.SetActive(self.m_button.gameObject, canDeliverOrder)
  if not UIUtil.IsEmptyComponent(self.m_goButtonAnim) then
    if GM.ConfigModel:IsOrderDeliverButtonOpen() and canDeliverOrder and not self.m_forceTip then
      self.m_goButtonAnim.enabled = true
    else
      self.m_goButtonAnim.enabled = false
    end
  end
end

function OrderCell:SetDeliverButtonScaleAnimation(bPlay)
  if not UIUtil.IsEmptyComponent(self.m_goButtonAnim) and GM.ConfigModel:IsOrderDeliverButtonOpen() then
    self.m_goButtonAnim.enabled = bPlay
  end
end

function OrderCell:IsShowingDeliver()
  return self.m_showDeliver
end

function OrderCell:TryScrollWhenNewOrderCreate()
  if not self.m_order then
    return
  end
  local canDeliverOrder = self.m_order:GetState() == OrderState.CanDeliver
  if canDeliverOrder or self.m_order:IsChestCustomerOrder() then
    self.m_orderArea:AddOrderToWaitScrollArray(self.m_order:GetId())
  end
end

function OrderCell:_TryScrollWhenOrderStateChanged()
  if not self.m_order then
    return
  end
  local canDeliverOrder = self.m_order:GetState() == OrderState.CanDeliver
  if self.m_showDeliver ~= canDeliverOrder and canDeliverOrder and self.m_orderArea:CanScrollOrderArea() and (not LuckyStarModel.IsInProgress() or not TutorialHelper.IsMainOrderAreaLocked()) then
    Log.Debug("_TryScrollWhenOrderStateChanged", "[\233\149\156\229\164\180\231\167\187\229\138\168]")
    if self.m_order:IsChestCustomerOrder() then
      self.m_orderArea:ScrollToOrder(false, true)
      return
    end
    self.m_orderArea:ScrollToRectTransformMiddle(self.transform)
  end
end

function OrderCell:IsPlayingAnimation()
  return self.m_playingAnimation
end

function OrderCell:PlayExitAnimation(callback, bHasNewOrder)
  self.m_playingAnimation = true
  local sequence = DOTween.Sequence()
  local avatarTrans = self.m_avatarTransf
  if avatarTrans then
    sequence:Append(avatarTrans:DOAnchorPosY(25, 0.2))
    sequence:Append(avatarTrans:DOAnchorPosY(-266, 0.3))
  end
  local trans = self.gameObject.transform
  if bHasNewOrder then
    sequence:Append(trans:DOScaleY(0.0, 0.2):SetEase(Ease.OutCubic))
  else
    sequence:Append(trans:DOScale(0.0, 0.2):SetEase(Ease.OutCubic))
  end
  
  local function tweenCallback()
    self.m_playingAnimation = false
    self.gameObject:RemoveSelf()
    self.m_orderArea:ForceRebuildLayout()
    callback()
  end
  
  sequence:AppendCallback(tweenCallback)
end

function OrderCell:PlayExitAnimationV2(callback)
  self.m_playingAnimation = true
  local sequence = DOTween.Sequence()
  local avatarTrans = self.m_avatarTransf
  if avatarTrans then
    sequence:Append(avatarTrans:DOAnchorPosY(25, 0.2))
    sequence:Append(avatarTrans:DOAnchorPosY(-266, 0.3))
  end
  local rootTrans = self.transform.parent
  sequence:Append(self.transform:DOScale(0, 0.2):SetEase(Ease.OutCubic):OnUpdate(function()
    LayoutRebuilder.MarkLayoutForRebuild(rootTrans)
  end))
  sequence:AppendCallback(function()
    self.m_playingAnimation = false
    callback()
  end)
end

function OrderCell:HideForEnterAnimation()
  self.m_playingAnimation = true
  self.gameObject:SetActive(false)
end

function OrderCell:PlayEnterAnimation(isNewOrder, noScroll, orderAreaCallback, noAudio)
  if self.m_enterAnimSeq then
    self.m_enterAnimSeq:Kill()
    self.m_enterAnimSeq = nil
  end
  self.m_playingAnimation = true
  self.gameObject:SetActive(true)
  if self.m_radianceGo2 then
    self.m_radianceGo2:SetActive(false)
  end
  self.m_radianceGo:SetActive(false)
  
  local function callback()
    if self.gameObject:IsNull() then
      return
    end
    self:PlayDecorationScoreShowAnim()
    self.m_playingAnimation = false
    self.m_orderArea:ForceRebuildLayout()
    self.m_showDeliver = false
    self:OnOrderStateChanged(self.m_order:GetState() == OrderState.CanDeliver, isNewOrder, noScroll, noAudio)
    if orderAreaCallback then
      orderAreaCallback()
    end
  end
  
  local sequence = DOTween.Sequence()
  self.m_enterAnimSeq = sequence
  local avatarTrans = self.m_avatarTransf
  if avatarTrans then
    avatarTrans.anchoredPosition = Vector2(0, -266)
    sequence:Append(avatarTrans:DOAnchorPosY(25, 0.4))
    sequence:Append(avatarTrans:DOAnchorPosY(0, 0.3))
  end
  sequence:AppendCallback(callback)
end

function OrderCell:PlayCoinEffect(bHideItems, bHideExView)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxMergeCollectCoins)
  self.m_rewards.gameObject:SetActive(false)
  self.m_exRewardsRootTrans.gameObject:SetActive(false)
  if self.m_order and not self.m_order.bIsActOrder then
    self:_HideNewRewardsGo()
  end
  if bHideItems then
    self.m_iconArea.gameObject:SetActive(false)
  end
  if bHideExView then
    UIUtil.SetActive(self.m_surpriseChestNode.gameObject, false)
    UIUtil.SetActive(self.m_decorationScoreNode.gameObject, false)
  end
  if self.m_coinEffectPrefab and not self.m_coinEffectPrefab:IsNull() then
    Object.Instantiate(self.m_coinEffectPrefab, self.m_tray)
  end
end

function OrderCell:SetHandEffectActive(active, bForce)
  if self.m_handEffectGo and not self.m_handEffectGo:IsNull() then
    if GM.ConfigModel:IsOrderDeliverButtonOpen() and not UIUtil.IsEmptyComponent(self.m_goButtonAnim) then
      if self.m_forceTip or bForce then
        self.m_goButtonAnim:SetTrigger("stop")
      elseif self.m_showDeliver then
        self.m_goButtonAnim:SetTrigger("start")
        active = false
      end
    end
    active = self.m_forceTip or active
    self.m_handEffectGo:SetActive(active)
  end
end

function OrderCell:RecoverEffectSortingOrder()
  for _, reward in pairs(self.m_arrReward) do
    reward:RecoverEffectSortingOrder()
  end
end

function OrderCell:UpdateDecorationDoubleTimeState()
  if self.m_order == nil then
    return
  end
  if self.m_order:GetState() == OrderState.Finished then
    return
  end
  self:_UpdateRewardInfo()
  return false
end

function OrderCell:IsNeedMoveNomalRewardArea()
  for _, reward in pairs(self.m_arrReward) do
    if reward:IsMultiOrder() and reward:GetRewardArea() == OrderRewardArea.Normal then
      return true
    end
  end
  return false
end

function OrderCell:IsHavePlayMultiReward()
  for _, reward in pairs(self.m_arrReward) do
    if reward:IsMultiOrder() then
      return true
    end
  end
  return false
end

function OrderCell:PlayDoubleDecorationCoinAni()
  for _, reward in pairs(self.m_arrReward) do
    if reward.gameObject.activeSelf and reward:IsMultiOrder() then
      reward:PlayMultiNumberAni()
    end
  end
end

function OrderCell:GetPlayDoubleAniTime()
  local fDealy = 0
  for _, reward in pairs(self.m_arrReward) do
    if reward.gameObject.activeSelf then
      fDealy = math.max(fDealy, reward:GetPlayMultiNumberAniTime())
    end
  end
  return fDealy
end

function OrderCell:OnSurpriseChestDataChanged(bTriggered)
  self:UpdateSurpriseChestState(bTriggered)
end

function OrderCell:CanPlaySurpriseChestRewardAnim()
  return self.m_surpriseChest and self.m_surpriseChest:CanPlayRewardAnim()
end

function OrderCell:GetSurpriseChestRewardAnimTime()
  return self.m_surpriseChest and self.m_surpriseChest:GetRewardAnimTime() or 0
end

function OrderCell:PlaySurpriseChestRewardAnim(bNoDelay)
  if self.m_surpriseChest ~= nil then
    self.m_surpriseChest:PlayRewardAnim(bNoDelay)
  end
end

function OrderCell:GetSurpriseChest()
  return self.m_surpriseChest
end

function OrderCell:WaitPlaySurpriseChestAnim(bWait)
  self.m_bWaitPlaySurpriseChest = bWait
end

function OrderCell:UpdateSurpriseChestState(bTriggered)
  if self.m_order == nil or self.m_surpriseChestNode == nil then
    return
  end
  local model, activityDefinition, chestData
  for _, definition in ipairs({
    SurpriseChestOneTimeDefinition,
    SurpriseChestActivityDefinition
  }) do
    for actType, actDefinition in pairs(definition) do
      model = GM.ActivityManager:GetModel(actType)
      if model ~= nil and model.IsInOpeningPeriod and model:IsInOpeningPeriod() then
        activityDefinition = actDefinition
        chestData = model.GetChestDataByOrderId and model:GetChestDataByOrderId(self.m_order:GetId())
        break
      end
    end
    if chestData ~= nil then
      break
    end
  end
  if chestData ~= nil then
    if self.m_surpriseChest == nil then
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(activityDefinition.SurpriseChestViewPrefabName), self.m_surpriseChestNode, Vector3.zero, function(go)
        if go ~= nil and not go:IsNull() then
          UIUtil.SetActive(self.m_surpriseChestNode.gameObject, true)
          self.m_surpriseChest = go:GetLuaTable()
          self.m_surpriseChest:Init(model, chestData, self, self.m_orderArea)
          if bTriggered then
            UIUtil.SetActive(self.m_surpriseChest.gameObject, false)
          end
        end
      end)
    else
      self.m_surpriseChest:Init(model, chestData, self, self.m_orderArea)
    end
  elseif chestData == nil and self.m_surpriseChest ~= nil then
    if self.m_bWaitPlaySurpriseChest then
      return
    end
    UIUtil.SetActive(self.m_surpriseChestNode.gameObject, false)
    self.m_orderArea:HideSurpriseChestRewardBubble()
    GameObject.Destroy(self.m_surpriseChest.gameObject)
    self.m_surpriseChest = nil
  end
end

function OrderCell:_UpdateFireworksGalaState(bInit)
  local fireworksBuffReward
  if self.m_order and self.m_order.HasFireworksBuffReward then
    fireworksBuffReward = self.m_order:HasFireworksBuffReward()
  end
  if fireworksBuffReward then
    if self.m_fireworksBuffReward == nil then
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.FireworksGalaOrderReward), self.m_fireworksGalaNode, Vector3.zero, function(go)
        if self.m_fireworksBuffReward ~= nil then
          Object.Destroy(go)
          return
        end
        self.m_fireworksBuffReward = go:GetLuaTable()
        self.m_fireworksBuffReward:Init(self.m_order)
      end)
    else
      self.m_fireworksBuffReward:Init(self.m_order)
    end
    UIUtil.SetActive(self.m_fireworksGalaNode.gameObject, true)
  elseif self.m_fireworksBuffReward then
    Object.Destroy(self.m_fireworksBuffReward.gameObject)
    self.m_fireworksBuffReward = nil
    UIUtil.SetActive(self.m_fireworksGalaNode.gameObject, false)
  end
  if not bInit then
    self:_UpdateRewardInfo()
  end
end

function OrderCell:UpdateDecorationScoreState()
  if self.m_order == nil or self.m_decorationScoreNode == nil then
    return
  end
  local model = DecorationScoreModel.GetActiveModel()
  if not model or not model:IsDecorationScoreOrder(self.m_order:GetId()) then
    UIUtil.SetActive(self.m_decorationScoreNode.gameObject, false)
    return
  end
  if self.m_decorationScore == nil then
    local prefabName = DecorationScoreDefinition[model:GetType()].OrderRewardViewPrefab
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(prefabName), self.m_decorationScoreNode, Vector3.zero, function(go)
      if go ~= nil and not go:IsNull() then
        UIUtil.SetActive(self.m_decorationScoreNode.gameObject, true)
        self.m_decorationScore = go:GetLuaTable()
        self.m_decorationScore:Init(model, self.m_order:GetTotalScore(GM.MainBoardModel:GetOrderModel()), self.m_order:GetId(), self.gameObject)
      end
    end)
  else
    self.m_decorationScore:Init(model, self.m_order:GetTotalScore(GM.MainBoardModel:GetOrderModel()), self.m_order:GetId(), self.gameObject)
  end
end

function OrderCell:CanPlayDecorationScoreRewardAnim(bNotResetParent)
  local bCanPlay = self.m_decorationScore ~= nil and self.m_decorationScore:CanPlayRewardAnim()
  if bCanPlay and bNotResetParent then
    self:ResetDecorationScoreParent()
  end
  return bCanPlay
end

function OrderCell:ResetDecorationScoreParent()
  self.m_decorationScore.gameObject.transform:SetParent(self.gameObject.transform, true)
end

function OrderCell:GetDecorationScoreRewardAnimTime()
  return self.m_decorationScore and self.m_decorationScore:GetRewardAnimTime() or 0
end

function OrderCell:PlayDecorationScoreRewardAnim(bNoDelay)
  if self.m_decorationScore ~= nil then
    self.m_decorationScore:PlayRewardAnim(bNoDelay)
  end
end

function OrderCell:PlayDecorationScoreShowAnim()
  if self.m_decorationScore ~= nil then
    self.m_decorationScore:PlayShowAnim()
  end
end

function OrderCell:SetDecorationScoreRewardClicked(bEnabled)
  if self.m_decorationScore ~= nil then
    self.m_decorationScore:SetCanClicked(bEnabled)
  end
end

function OrderCell:GetDecorationScoreRewardLuaTb()
  return self.m_decorationScore
end

function OrderCell:UpdateSunflowerState(bInit)
  if self.m_order == nil or self.m_sunflowerNode == nil then
    return
  end
  local model = SunflowerModel.GetActiveModel()
  if model == nil or not model:IsSunflowerOrder(self.m_order:GetId()) then
    if self.m_sunflowerToken ~= nil and self.m_sunflowerToken.gameObject ~= nil and not self.m_sunflowerToken.gameObject:IsNull() and not bInit then
      GameObject.Destroy(self.m_sunflowerToken.gameObject)
      self.m_sunflowerToken = nil
    end
    UIUtil.SetActive(self.m_sunflowerNode.gameObject, false)
    return
  end
  if self.m_sunflowerToken == nil then
    local prefabName = UIPrefabConfigName.SunflowerTokenIcon
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(prefabName), self.m_sunflowerNode, Vector3.zero, function(go)
      if self.m_sunflowerToken ~= nil then
        GameObject.Destroy(go)
        return
      end
      if go ~= nil and not go:IsNull() then
        UIUtil.SetActive(self.m_sunflowerNode.gameObject, true)
        self.m_sunflowerToken = go:GetLuaTable()
        self.m_sunflowerToken:Init(model:GetType())
      end
    end)
  end
end

function OrderCell:CanPlaySunflowerRewardAnim()
  local bCanPlay = self.m_sunflowerToken ~= nil and self.m_sunflowerToken:CanPlayRewardAnim()
  if bCanPlay then
    self.m_sunflowerToken.transform:SetParent(self.transform, true)
  end
  return bCanPlay
end

function OrderCell:PlaySunflowerRewardAnim()
  if self.m_sunflowerToken ~= nil then
    self.m_sunflowerToken:AcquiredTokenReward()
  end
end

function OrderCell:GetSunflowerRewardAnimTime()
  return 0.5
end

function OrderCell:GetExRewardsCenterTrans()
  return self.m_exRewardsRootTrans
end

function OrderCell:GetTimedBuffReward()
  return self.m_timedBuffRewardData
end

function OrderCell:PlaySpokespersonEffectGo()
  if self.m_spokespersonReward then
    self.m_spokespersonReward:PlaySpokespersonEffectGo()
  end
end

function OrderCell:_UpdateVolcanoRaceState()
  if UIUtil.IsEmptyComponent(self.m_volcanoRaceBoardBgImage) then
    return
  end
  local model = VolcanoRaceModel.GetActiveModel()
  if model and model:IsOrderCellUpdateBlocked() then
    return
  end
  if model and model:CanShowBoardEntrance() and (model:GetCurOrderId() == self.m_order:GetId() or model:GetLastOrderId() == self.m_order:GetId()) and (model:GetRoundState() == EVolcanoRaceRoundState.Racing or model:GetRoundState() == EVolcanoRaceRoundState.WaitClaim) then
    self.m_orderActType[model:GetType()] = true
    SpriteUtil.SetImage(self.m_volcanoRaceBoardBgImage, VolcanoRaceDefinition[model:GetType()].OrderBoardImage, true, function()
      UIUtil.SetActive(self.m_volcanoRaceBoardBgImage.gameObject, true)
      local trayImg = self.m_tray:GetComponent(typeof(Image))
      if trayImg then
        trayImg.enabled = false
      end
    end)
  elseif self.m_volcanoRaceBoardBgImage.gameObject.activeSelf then
    if model then
      self.m_orderActType[model:GetType()] = false
    end
    UIUtil.SetActive(self.m_volcanoRaceBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
  end
end

function OrderCell:PlayVolcanoRaceBoardAppearAnimation(bDelay)
  if UIUtil.IsEmptyComponent(self.m_volcanoRaceBoardBgImage) then
    return
  end
  local model = VolcanoRaceModel.GetActiveModel()
  if model and model:CanShowBoardEntrance() and model:GetCurOrderId() == self.m_order:GetId() then
    self.m_orderActType[model:GetType()] = true
    local seq = DOTween.Sequence()
    seq:AppendInterval(bDelay and 0.5 or 0)
    seq:AppendCallback(function()
      SpriteUtil.SetImage(self.m_volcanoRaceBoardBgImage, VolcanoRaceDefinition[model:GetType()].OrderBoardImage, true, function()
        UIUtil.SetActive(self.m_volcanoRaceBoardBgImage.gameObject, true)
        local trayImg = self.m_tray:GetComponent(typeof(Image))
        if trayImg then
          trayImg.enabled = false
        end
        if not UIUtil.IsEmptyComponent(self.m_volcanoRaceAnimator) then
          self.m_volcanoRaceAnimator:SetTrigger("Play")
        end
      end)
      if not UIUtil.IsEmptyComponent(self.m_volcanoRaceEffect) then
        self.m_volcanoRaceEffect:Play()
      end
    end)
  else
    if model then
      self.m_orderActType[model:GetType()] = false
    end
    UIUtil.SetActive(self.m_volcanoRaceBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
  end
end

function OrderCell:SetRewardSortingOrder(order)
  for _, v in pairs(self.m_arrReward) do
    v:SetSortingOrder(order)
  end
end

function OrderCell:OnVolcanoRaceButtonClick()
  if self.m_order:IsChestCustomerOrder() then
    self.m_needPopTip = true
  end
  local model = VolcanoRaceModel.GetActiveModel()
  if model then
    model:TryOpenWindow()
  end
end

function OrderCell:PlayTimedBuffRewardEffect()
  if self.m_timedBuffReward then
    self.m_timedBuffReward:PlaySpokespersonEffectGo()
  end
end

function OrderCell:GetFireworksBuffReward()
  return self.m_fireworksBuffReward
end

function OrderCell:GetFireworksGalaNode()
  return self.m_fireworksGalaNode
end

function OrderCell:_UpdateRoadOrderState()
  if UIUtil.IsEmptyComponent(self.m_roadOrderBoardBgImage) then
    return
  end
  local model = RoadOrderModel.GetActiveModel()
  if model and model:IsOrderCellUpdateBlocked() then
    return
  end
  if model and model:IsActivityOpen() and model:GetCurOrderId() == self.m_order:GetId() then
    SpriteUtil.SetImage(self.m_roadOrderBoardBgImage, RoadOrderDefinition[model:GetType()].OrderBoardImage, true, function()
      UIUtil.SetActive(self.m_roadOrderBoardBgImage.gameObject, true)
      local trayImg = self.m_tray:GetComponent(typeof(Image))
      if trayImg then
        trayImg.enabled = false
      end
    end)
  elseif self.m_roadOrderBoardBgImage.gameObject.activeSelf then
    UIUtil.SetActive(self.m_roadOrderBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
  end
end

function OrderCell:PlayRoadOrderBoardAppearAnimation(bDelay)
  if UIUtil.IsEmptyComponent(self.m_roadOrderBoardBgImage) then
    return
  end
  local model = RoadOrderModel.GetActiveModel()
  if model and model:IsActivityOpen() and model:GetCurOrderId() == self.m_order:GetId() then
    local seq = DOTween.Sequence()
    seq:AppendInterval(bDelay and 0.5 or 0)
    seq:AppendCallback(function()
      SpriteUtil.SetImage(self.m_roadOrderBoardBgImage, RoadOrderDefinition[model:GetType()].OrderBoardImage, true, function()
        UIUtil.SetActive(self.m_roadOrderBoardBgImage.gameObject, true)
        local trayImg = self.m_tray:GetComponent(typeof(Image))
        if trayImg then
          trayImg.enabled = false
        end
      end)
      if not UIUtil.IsEmptyComponent(self.m_volcanoRaceParticle) then
        self.m_volcanoRaceParticle:Play()
      end
    end)
  else
    UIUtil.SetActive(self.m_roadOrderBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
  end
end

function OrderCell:OnRoadOrderButtonClick()
  local model = RoadOrderModel.GetActiveModel()
  if model then
    GM.UIManager:OpenView(RoadOrderDefinition[model:GetType()].MainWindowPrefabName, model:GetType(), true)
  end
end

function OrderCell:_UpdateSingleJumpState()
  if UIUtil.IsEmptyComponent(self.m_singleJumpBoardBgImage) then
    return
  end
  local model = SingleJumpModel.GetActiveModel()
  if model and model:IsOrderCellUpdateBlocked() then
    return
  end
  if model and model:CanShowBoardEntrance() and (model:GetCurOrderId() == self.m_order:GetId() or model:GetLastOrderId() == self.m_order:GetId()) and (model:GetRoundState() == ESingleJumpRoundState.Racing or model:GetRoundState() == ESingleJumpRoundState.WaitClaim) then
    self.m_orderActType[model:GetType()] = true
    SpriteUtil.SetImage(self.m_singleJumpBoardBgImage, SingleJumpDefinition[model:GetType()].OrderBoardImage, true, function()
      UIUtil.SetActive(self.m_singleJumpBoardBgImage.gameObject, true)
      local trayImg = self.m_tray:GetComponent(typeof(Image))
      if trayImg then
        trayImg.enabled = false
      end
    end)
  elseif self.m_singleJumpBoardBgImage.gameObject.activeSelf then
    if model then
      self.m_orderActType[model:GetType()] = false
    end
    UIUtil.SetActive(self.m_singleJumpBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
  end
end

function OrderCell:PlaySingleJumpBoardAppearAnimation(bDelay)
  if UIUtil.IsEmptyComponent(self.m_singleJumpBoardBgImage) then
    return
  end
  local model = SingleJumpModel.GetActiveModel()
  if model and model:CanShowBoardEntrance() and model:GetCurOrderId() == self.m_order:GetId() then
    self.m_orderActType[model:GetType()] = true
    local seq = DOTween.Sequence()
    seq:AppendInterval(bDelay and 0.5 or 0)
    seq:AppendCallback(function()
      SpriteUtil.SetImage(self.m_singleJumpBoardBgImage, SingleJumpDefinition[model:GetType()].OrderBoardImage, true, function()
        UIUtil.SetActive(self.m_singleJumpBoardBgImage.gameObject, true)
        local trayImg = self.m_tray:GetComponent(typeof(Image))
        if trayImg then
          trayImg.enabled = false
        end
      end)
      if not UIUtil.IsEmptyComponent(self.m_volcanoRaceParticle) then
        self.m_volcanoRaceParticle:Play()
      end
    end)
  else
    if model then
      self.m_orderActType[model:GetType()] = false
    end
    UIUtil.SetActive(self.m_singleJumpBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
  end
end

function OrderCell:OnSingleJumpButtonClick()
  if self.m_order:IsChestCustomerOrder() then
    self.m_needPopTip = true
  end
  local model = SingleJumpModel.GetActiveModel()
  if model then
    model:TryOpenWindow()
  end
end

function OrderCell:_UpdateDartDashState()
  if UIUtil.IsEmptyComponent(self.m_dartDashBoardBgImage) then
    return
  end
  local model = DartDashModel.GetActiveModel()
  if model and model:IsOrderCellUpdateBlocked() then
    return
  end
  if model and model:CanShowBoardEntrance() and model:GetCurOrderId() == self.m_order:GetId() and model:GetRaceState() == DartDashRoundState.InRace then
    SpriteUtil.SetImage(self.m_dartDashBoardBgImage, DartDashDefinition[model:GetType()].OrderBoardImage, true, function()
      if not model:CanShowBoardEntrance() or model:GetRaceState() ~= DartDashRoundState.InRace then
        return
      end
      UIUtil.SetActive(self.m_dartDashBoardBgImage.gameObject, true)
      local trayImg = self.m_tray:GetComponent(typeof(Image))
      if trayImg then
        trayImg.enabled = false
      end
    end)
    self:PlayDartDashAvatarAppearAnim()
  elseif self.m_dartDashBoardBgImage.gameObject.activeSelf then
    UIUtil.SetActive(self.m_dartDashBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
    self:_UpdateAvatar()
  end
  self:_UpdateRewardInfo()
end

function OrderCell:PlayDartDashBoardAppearAnimation(bDelay)
  if UIUtil.IsEmptyComponent(self.m_dartDashBoardBgImage) then
    return
  end
  local model = DartDashModel.GetActiveModel()
  if model and model:CanShowBoardEntrance() and model:GetCurOrderId() == self.m_order:GetId() and model:GetRaceState() == DartDashRoundState.InRace then
    local seq = DOTween.Sequence()
    seq:AppendInterval(bDelay and 0.5 or 0)
    seq:AppendCallback(function()
      SpriteUtil.SetImage(self.m_dartDashBoardBgImage, DartDashDefinition[model:GetType()].OrderBoardImage, true, function()
        if not model:CanShowBoardEntrance() or model:GetRaceState() ~= DartDashRoundState.InRace then
          return
        end
        UIUtil.SetActive(self.m_dartDashBoardBgImage.gameObject, true)
        local trayImg = self.m_tray:GetComponent(typeof(Image))
        if trayImg then
          trayImg.enabled = false
        end
      end)
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(DartDashDefinition[model:GetType()].OrderSpinePrefab), self.transform, V3Zero, function(go)
        if not model:CanShowBoardEntrance() or model:GetRaceState() ~= DartDashRoundState.InRace or UIUtil.IsEmptyComponent(self) then
          Object.Destroy(go)
          return
        end
        DelayExecuteFuncInView(function()
          Object.Destroy(go)
        end, 2, self)
        GM.AudioModel:PlayEffect(AudioFileConfigName.SfxfireworksGalafly1)
      end)
      if not UIUtil.IsEmptyComponent(self.m_volcanoRaceParticle) then
        self.m_volcanoRaceParticle:Play()
      end
      self:PlayDartDashAvatarAppearAnim()
    end)
  else
    UIUtil.SetActive(self.m_dartDashBoardBgImage.gameObject, false)
    local trayImg = self.m_tray:GetComponent(typeof(Image))
    if trayImg then
      trayImg.enabled = true
    end
    self:_UpdateAvatar()
  end
  self:_UpdateRewardInfo()
end

function OrderCell:PlayDartDashAvatarAppearAnim()
  if self.m_order:IsChestCustomerOrder() then
    return
  end
  local model = DartDashModel.GetActiveModel()
  if not model or DartDashDefinition[model:GetType()].OrderAvatarPrefabName == self.m_avatarName then
    return
  end
  local seq = DOTween.Sequence()
  seq:Append(self.m_avatarTransf:DOAnchorPosY(-266, 0.3))
  seq:AppendCallback(function()
    self:_UpdateAvatar(function()
      if model:CanShowBoardEntrance() and model:GetRaceState() == DartDashRoundState.InRace then
        UIUtil.SetAnchoredPosition(self.m_avatarTransf, nil, 0)
        self:_UpdateAvatar()
        return
      end
      self.m_avatarTransf:DOAnchorPosY(25, 0.4)
      self.m_avatarTransf:DOAnchorPosY(0, 0.2)
    end)
  end)
end

function OrderCell:_OnViewClose()
  if GM.UIManager.allWindowClosed and self.m_needPopTip then
    self.m_needPopTip = false
    if self.m_tbAvatar.OnClicked then
      self.m_tbAvatar:OnClicked(true)
    end
  end
end

function OrderCell:GetOrderActivityType()
  for actType, state in pairs(self.m_orderActType) do
    if state then
      return actType
    end
  end
end

local lockStateType = {UpgradeBuilding = 1, MergeGenerator = 2}

function OrderCell:UpdateLockState(bInit)
  if not (self.m_order:GetType() == OrderType.Fixed and GM.ConfigModel:IsNewUserSystem()) or not self.m_lockState and not bInit then
    return
  end
  if self.m_order:GetState() ~= OrderState.CanDeliver then
    local requireList = self.m_order:GetRequirements()
    for _, item in ipairs(requireList) do
      if GM.ItemDataModel:GetChainId(item) == "it1_1" then
      elseif not GM.ItemDataModel:CanGenerateItem(item) then
        self.m_lockItem = item
        local arrGenerator = GM.ItemDataModel:GetItemOriginalGenerators(item)
        local chain = GM.ItemDataModel:GetChainId(arrGenerator[1])
        local level = GM.ItemDataModel:GetChainLevel(arrGenerator[1])
        UIUtil.SetActive(self.m_bottomRewardsContentGo, false)
        UIUtil.SetActive(self.m_rewards.gameObject, false)
        UIUtil.SetActive(self.m_exRewardsRootTrans.gameObject, false)
        UIUtil.SetActive(self.m_iconArea.gameObject, false)
        local canShow, pdInLayer, _, _ = GM.MainBoardModel:CanMergeGeneratorToLevelByChain(chain, level)
        if canShow then
          UIUtil.SetActive(self.m_upgradeText.gameObject, false)
          UIUtil.SetActive(self.m_mergeText.gameObject, true)
          UIUtil.SetActive(self.m_pdIconImg.gameObject, false)
          local curLevel = GM.ItemDataModel:GetChainMaxLevel(chain)
          local level
          for _, pd in ipairs(pdInLayer) do
            level = tonumber(ItemUtility.GetChainLevelByCode(pd:GetCode())) or curLevel
            if curLevel > level then
              curLevel = level
            end
          end
          SpriteUtil.SetImage(self.m_pdIconImg, ImageFileConfigName[ItemUtility.GetItemCode(chain, curLevel)], true, function()
            UIUtil.SetActive(self.m_pdIconImg.gameObject, true)
            local maxSide = math.max(self.m_pdIconImg.transform.sizeDelta.x, self.m_pdIconImg.transform.sizeDelta.y, 90)
            UIUtil.SetLocalScale(self.m_pdIconImg.transform, 90 / maxSide, 90 / maxSide)
          end)
          self.m_lockState = lockStateType.MergeGenerator
        else
          UIUtil.SetActive(self.m_upgradeText.gameObject, true)
          self.m_lockState = lockStateType.UpgradeBuilding
        end
        return
      end
    end
  end
  if not bInit then
    if self.m_AvatarGroupGo then
      self.m_AvatarGroupGo:SetActive(true)
    end
    local seq = DOTween.Sequence()
    local avatarTrans = self.m_avatarTransf
    UIUtil.SetAnchoredPosition(avatarTrans, nil, -266)
    self:_UpdateDeliverButton(false)
    seq:AppendCallback(function()
      self.m_lockGroupAnim:Play("unlock", 0, 0)
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxRewardCollect)
    end)
    seq:AppendInterval(1)
    seq:AppendCallback(function()
      UIUtil.SetActive(self.m_lockGroupGo, false)
      UIUtil.SetActive(self.m_avatarAppearEffectGo, true)
      UIUtil.SetActive(self.m_upgradeText.gameObject, false)
      UIUtil.SetActive(self.m_mergeText.gameObject, false)
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxNewOrder)
    end)
    seq:Append(avatarTrans:DOAnchorPosY(25, 0.4))
    seq:AppendCallback(function()
      UIUtil.SetActive(self.m_bottomRewardsContentGo, true)
      UIUtil.SetActive(self.m_rewards.gameObject, true)
      UIUtil.SetActive(self.m_exRewardsRootTrans.gameObject, true)
      UIUtil.SetActive(self.m_iconArea.gameObject, true)
      self:_UpdateDeliverButton(self.m_order:GetState() == OrderState.CanDeliver)
    end)
    seq:Append(avatarTrans:DOAnchorPosY(0, 0.3))
    self.m_newUserOrderUnlockSeq = seq
    EventDispatcher.DispatchEvent(EEventType.OrderUnlocked)
  end
  self.m_lockState = nil
end

function OrderCell:GetLockState()
  self:UpdateLockState()
  return self.m_lockState
end

function OrderCell:OnUpgradeButtonClicked()
  if not self.m_lockItem then
    return
  end
  if self.m_lockState == lockStateType.UpgradeBuilding then
    local slots = GM.MapDataModel:GetSlotsIds()
    local genChain = GM.ItemDataModel:GetChainGenerator(GM.ItemDataModel:GetChainId(self.m_lockItem))
    local level, stage
    for _, slot in ipairs(slots) do
      level = GM.MapDataModel:GetSlotMaxLevel(slot) - 1
      stage = GM.MapDataModel:GetSlotLevelMaxStage(slot, level, true)
      local config = GM.MapDataModel:GetConfig(slot, level, stage, 2)
      config = config or GM.MapDataModel:GetConfig(slot, level, stage, 1)
      if config.reward and config.id then
        for _, reward in pairs(config.reward) do
          if GM.ItemDataModel:IsPdItem(reward[PROPERTY_TYPE]) and GM.ItemDataModel:GetChainId(reward[PROPERTY_TYPE]) == genChain then
            GM.MapLayer:ForceLoadSlot(config.id, function(slot)
              GM.SceneManager:ChangeGameMode(EGameMode.Map)
              if not slot:IsLocked() then
                slot:OnClicked()
              else
                local pos = slot:GetAnchorPosition()
                GM.MapLayer:SetCameraToPos(Vector3(pos.x, pos.y, 0), 1400, 0.3)
              end
            end)
            return
          end
        end
      end
    end
  elseif self.m_lockState == lockStateType.MergeGenerator then
    local boardView = self.m_orderArea:GetBoardView()
    local arrGenerator = GM.ItemDataModel:GetItemOriginalGenerators(self.m_lockItem)
    local chain = GM.ItemDataModel:GetChainId(arrGenerator[1])
    local level = GM.ItemDataModel:GetChainLevel(arrGenerator[1])
    local _, pdInLayer, pdInStore, pdInCache = GM.MainBoardModel:CanMergeGeneratorToLevelByChain(chain, level)
    if not Table.IsEmpty(pdInStore) then
      local sceneViewHud = TutorialHelper.GetSceneView()
      if sceneViewHud then
        local screenPos = boardView:ConvertWorldPositionToScreenPosition(self.transform.position)
        local startPos = PositionUtil.UICameraScreen2World(screenPos)
        local button = sceneViewHud:GetHudButton(ESceneViewHudButtonKey.Inventory)
        GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.NewUserFlyItem), button.transform, startPos, function(go)
          local tb = go:GetLuaTable()
          tb:Init(startPos, button.transform.position, 1)
        end)
      end
      EventDispatcher.DispatchEvent(EEventType.InventroyBubbleShow, {
        {
          [PROPERTY_TYPE] = pdInStore[1]:GetType(),
          [PROPERTY_COUNT] = 1
        }
      })
    end
    if not Table.IsEmpty(pdInCache) then
      local orderArea = boardView:GetOrderArea()
      local boardCacheRoot = orderArea:GetBoardCacheRoot()
      GM.ResourceLoader:LoadPrefab(GM.DataResource:GetUIPrefabConfig(UIPrefabConfigName.NewUserFlyItem), boardView.transform, self.transform.position, function(go)
        local tb = go:GetLuaTable()
        tb:Init(self.transform.position, boardCacheRoot.transform.position + Vector3(108, 0, 0), 1)
      end)
      self.m_orderArea:ScrollBoardCacheRootToView(true, function()
        EventDispatcher.DispatchEvent(EEventType.CacheBubbleShow, {
          {
            [PROPERTY_TYPE] = pdInCache[1],
            [PROPERTY_COUNT] = 1
          }
        })
      end)
    end
    if not Table.IsEmpty(pdInLayer) and 0 < #pdInLayer then
      if boardView.MergeItemPrompts then
        boardView:MergeItemPrompts()
      end
      if boardView.ShowFlyItemFromOrderToItem then
        do
          local level2ItemList = {}
          local level
          local curLevel = 99
          for _, pd in ipairs(pdInLayer) do
            level = tonumber(ItemUtility.GetChainLevelByCode(pd:GetCode())) or 99
            if curLevel > level then
              curLevel = level
            end
            if not level2ItemList[level] then
              level2ItemList[level] = {}
            end
            level2ItemList[level][#level2ItemList[level] + 1] = pd
          end
          boardView:ShowFlyItemFromOrderToItem(self, level2ItemList[curLevel])
        end
      end
    end
  end
end

function OrderCell:_OnStateChanged()
  if self.m_order then
    self:UpdateLockState()
  end
end

function OrderCell:IsIgnoreDouble(reward)
  if self.m_order:GetActType() == ActivityType.LimiteOrder then
    local limiteModel = LimiteOrderActivityModel.GetActiveModel()
    if limiteModel and limiteModel:GetReplaceFireReward() and AlbumModel.IsFirePack(reward[PROPERTY_TYPE]) then
      return true
    end
  end
end

function OrderCell:PlayChestCustomerAppearEffect()
  UIUtil.SetActive(self.m_chestCustomerAppearEffectGo, true)
end

local mapMainOrderType = {
  [OrderType.Fixed] = true,
  [OrderType.Random] = true,
  [OrderType.Lane] = true,
  [OrderType.Recall] = true,
  [OrderType.Insure] = true
}

function OrderCell:_IsMainOrder()
  if self.m_order.bIsActOrder then
    return false
  end
  return mapMainOrderType[self.m_order:GetType()]
end

function OrderCell:OnDartDashButtonClick()
  if self.m_order:IsChestCustomerOrder() then
    self.m_needPopTip = true
  end
  local model = DartDashModel.GetActiveModel()
  if model then
    model:TryOpenWindow()
  end
end

function OrderCell:SetGoButtonShow(bShow)
  if bShow then
    self.m_bLock = false
    self:_UpdateDeliverButton(self.m_order:GetState() == OrderState.CanDeliver)
  else
    self:_UpdateDeliverButton(false)
    self.m_bLock = true
  end
end

function OrderCell:GetOrderRewardCellByType(rewardType)
  if Table.IsEmpty(self.m_arrReward) then
    return
  end
  for k, v in pairs(self.m_arrReward) do
    if v:GetShowRewardType() == rewardType then
      return v
    end
  end
end

function OrderCell:_TrySyncDoubleNodeAnimation()
  if Table.IsEmpty(self.m_arrReward) or #self.m_arrReward <= 1 then
    return
  end
  for k, v in pairs(self.m_arrReward) do
    if v._TryResetDoubleNodeAnimation then
      v:_TryResetDoubleNodeAnimation()
    end
  end
end

OrderEmpty = {}
OrderEmpty.__index = OrderEmpty

function OrderEmpty:PlayExitAnimation()
  if self.m_tween then
    self.m_tween:Kill()
  end
  self.m_playingAnimation = true
  local sequence = DOTween.Sequence()
  sequence:Append(self.m_board:DOAnchorPosY(25, 0.2))
  sequence:Append(self.m_board:DOAnchorPosY(-265, 0.3))
  local trans = self.gameObject.transform
  sequence:Append(trans:DOScale(0.0, 0.2):SetEase(Ease.OutCubic))
  sequence:AppendCallback(function()
    self.m_playingAnimation = false
    self.gameObject:SetActive(false)
    self.m_tween = nil
  end)
  self.m_tween = sequence
end

function OrderEmpty:PlayEnterAnimation()
  if self.m_tween then
    self.m_tween:Kill()
  end
  self.m_level.text = GM.GameTextModel:GetText("order_unlock_tip", GM.LevelModel:GetCurrentLevel() + 1)
  self.m_playingAnimation = true
  self.gameObject:SetActive(true)
  self.gameObject.transform.localScale = V3One
  self.m_board.anchoredPosition = Vector2(0, -265)
  local sequence = DOTween.Sequence()
  sequence:Append(self.m_board:DOAnchorPosY(25, 0.4))
  sequence:Append(self.m_board:DOAnchorPosY(0, 0.3))
  sequence:AppendCallback(function()
    self.m_playingAnimation = false
    self.m_tween = nil
  end)
  self.m_tween = sequence
end
