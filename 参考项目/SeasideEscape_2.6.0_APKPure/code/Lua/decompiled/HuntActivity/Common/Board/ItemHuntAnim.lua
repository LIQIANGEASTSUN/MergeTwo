ItemHuntAnim = setmetatable({}, BaseItemComponent)
ItemHuntAnim.__index = ItemHuntAnim

function ItemHuntAnim.Create()
  local itemHuntAnim = setmetatable({}, ItemHuntAnim)
  return itemHuntAnim
end

function ItemHuntAnim:OnTap()
  EventDispatcher.DispatchEvent(EEventType.HuntPdItemOnTap)
end

ItemHuntSpread = setmetatable({}, BaseItemComponent)
ItemHuntSpread.__index = ItemHuntSpread

function ItemHuntSpread.Create(itemConfig, itemModel)
  local itemSpread = setmetatable({}, ItemHuntSpread)
  itemSpread:Init(itemConfig, itemModel)
  return itemSpread
end

function ItemHuntSpread:Init(config, itemModel)
  self.m_spreadNum = config.Hunt_Spread_Num
  self.m_costEnergy = config.CostEnergy == 1
  self.m_boardModel = itemModel:GetBoardModel()
  self.m_actModel = HuntActivityModel.GetActiveModel()
end

function ItemHuntSpread:OnTap()
  local mainWindow = GM.UIManager:GetOpenedViewByName(HuntActivityDefinition[self.m_actModel:GetType()].MainWindowPrefabName)
  if mainWindow and mainWindow.IsWheatEnabled and not mainWindow:IsWheatEnabled() then
    return
  end
  if self.m_boardModel:GetCachedItemCount() > 0 then
    if not self.m_boardModel:PopCachedItem() then
      self.m_boardModel.event:Call(BoardEventType.SpreadFailed, {
        Item = self.m_itemModel,
        Reason = SpreadFailedReason.BoardFull
      })
    end
    return
  end
  if 0 >= self.m_actModel:GetActivityTokenNumber() then
    self.m_boardModel.event:Call(BoardEventType.SpreadFailed, {
      Item = self.m_itemModel,
      Reason = SpreadFailedReason.LackEnergy
    })
    return
  elseif self.m_boardModel:IsBoardFull() then
    self.m_boardModel.event:Call(BoardEventType.SpreadFailed, {
      Item = self.m_itemModel,
      Reason = SpreadFailedReason.BoardFull
    })
    return
  end
  self.m_actModel:ConsumeActivityToken(1, self.m_itemModel:GetCode())
  local code = self.m_itemModel:GetCode()
  local maxX = HuntActivityBoardModel.HorizontalTiles
  local maxY = HuntActivityBoardModel.VerticalTiles
  local centerPos = HuntActivityBoardModel.CreatePosition((maxX + 1) // 2, maxY)
  for i = 1, self.m_spreadNum do
    local spreadCode = GM.ItemFixedSpreadModel:GenerateItemCode(code)
    local pos = self.m_boardModel:GetItem(centerPos, true) == nil and centerPos or self:GetPositionInSeries(centerPos, spreadCode)
    if pos == nil then
      local cache = {}
      cache[1] = spreadCode
      GM.BIManager:LogAcquire(spreadCode, 1, EBIType.HuntAcquireItem, true, EGameMode.Hunt)
      for j = i + 1, self.m_spreadNum do
        spreadCode = GM.ItemFixedSpreadModel:GenerateItemCode(code)
        cache[j - i + 1] = spreadCode
        GM.BIManager:LogAcquire(spreadCode, 1, EBIType.HuntAcquireItem, true, EGameMode.Hunt)
      end
      EventDispatcher.DispatchEvent(EEventType.HuntPdCacheItem, {
        Source = self.m_itemModel,
        List = cache
      })
      self.m_boardModel:CacheItems(cache, CacheItemType.Stack)
      GM.BIManager:LogAction(EBIType.BoardFull, {itf = 0, m = 0}, EGameMode.Hunt)
      break
    else
      self.m_boardModel:SpreadItem(self.m_itemModel, pos, spreadCode, true)
    end
  end
  EventDispatcher.DispatchEvent(EEventType.HuntAnimItemClicked, self.m_itemModel)
end

function ItemHuntSpread:GetPositionInSeries(centerPos, code)
  local position
  position = self.m_boardModel:FindEmptyPositionInAttach(code)
  position = position or self.m_boardModel:FindEmptyPositionInSpreadOrder(centerPos)
  return position
end

ItemHuntAnimView = {}
ItemHuntAnimView.__index = ItemHuntAnimView

function ItemHuntAnimView.Create(itemModel, go)
  local view = setmetatable({}, ItemHuntAnimView)
  view:Init(itemModel, go)
  return view
end

function ItemHuntAnimView:Init(itemModel, go, withAnim)
  self.gameObject = go
  self.transform = go.transform
  self.m_model = itemModel
  local model = HuntActivityModel.GetActiveModel()
  if not model then
    return
  end
  local type = model:GetType()
  local define = HuntActivityDefinition[type]
  local mainWindow = GM.UIManager:GetOpenedViewByName(define.MainWindowPrefabName)
  if not mainWindow then
    return
  end
  self.m_window = mainWindow
  self.m_realView = mainWindow:GetItemView(itemModel)
  self.m_realView:Init(itemModel, self, withAnim, type)
  if not self.m_bPosInited then
    self.m_bPosInited = true
    if define and define.HuntPdViewPos and define.HuntPdViewPos[itemModel:GetId()] then
      self.transform.localPosition = define.HuntPdViewPos[itemModel:GetId()]
    else
      self.transform.position = mainWindow:ConvertWorldPositionToBoardPosition(self.m_realView:GetAnchor())
    end
  end
end

function ItemHuntAnimView:UpdateModel(model)
  self.m_model = model
end

function ItemHuntAnimView:GetModel()
  return self.m_model
end

function ItemHuntAnimView:UpdateItemAffectedEffect()
end

function ItemHuntAnimView:PlayTransformAnim(origin, new)
  self.m_realView:PlayTransformAnim(origin, new)
end

function ItemHuntAnimView:MergeLightDisappear()
end

function ItemHuntAnimView:PlayAppearAnim()
  if self.m_realView and self.m_realView.PlayAppearAnim then
    self.m_realView:PlayAppearAnim()
  end
end

function ItemHuntAnimView:BeforeSpreadItem()
end

HuntFarmWheat = {}
HuntFarmWheat.__index = HuntFarmWheat

function HuntFarmWheat:Init(item, itemView, withAnim, activtyType)
  local suffix = item:GetCode():sub(-1)
  self.m_spine = SpineAnimation.Create(self.m_wheat)
  if withAnim then
    self.m_spine:SetAnimation(0, "appear" .. suffix, false)
    self.m_spine:AddAnimation(0, "idle" .. suffix, true)
  else
    self.m_spine:SetAnimation(0, "idle" .. suffix, true)
  end
  self.m_itemView = itemView
  if activtyType ~= nil then
    self.m_activityDefinition = HuntActivityDefinition[activtyType]
  end
end

function HuntFarmWheat:PlayTapAnimation(item)
  local suffix = item:GetCode():sub(-1)
  self.m_spine:SetAnimation(0, "mow" .. suffix, false)
  self.m_spine:AddAnimation(0, "idle" .. suffix, true)
end

function HuntFarmWheat:GetAnchor()
  return self.transform.position + (self.m_activityDefinition and self.m_activityDefinition.WheatAnchorOffset or V3Zero)
end

function HuntFarmWheat:GetItemView()
  return self.m_itemView
end

HuntFarmCow = {}
HuntFarmCow.__index = HuntFarmCow

function HuntFarmCow:Init(item, itemView, withAnim, activtyType)
  self.m_itemView = itemView
  self.m_itemModel = item
  if activtyType ~= nil then
    self.m_activityType = activtyType
    self.m_activityDefinition = HuntActivityDefinition[activtyType]
  end
  if self.m_activityDefinition and self.m_activityDefinition.CowLevel and self.m_activityDefinition.CowLevel[item:GetCode()] > 1 and not UIUtil.IsEmptyComponent(self.m_cow2) then
    self.m_cowSpine = SpineAnimation.Create(self.m_cow2)
    self.m_cow2.gameObject:SetActive(true)
    self.m_cow.gameObject:SetActive(false)
  else
    self.m_cowSpine = SpineAnimation.Create(self.m_cow)
    self.m_cow.gameObject:SetActive(true)
    if not UIUtil.IsEmptyComponent(self.m_cow2) then
      self.m_cow2.gameObject:SetActive(false)
    end
  end
  if not UIUtil.IsEmptyComponent(self.m_bucket) then
    self.m_bucket.gameObject:SetActive(false)
  end
  if not UIUtil.IsEmptyComponent(self.m_bucket2) then
    self.m_bucket2.gameObject:SetActive(false)
  end
  if self.m_activityDefinition and self.m_activityDefinition.CowLevel and self.m_activityDefinition.CowLevel[item:GetCode()] > 1 and not UIUtil.IsEmptyComponent(self.m_bucket2) then
    self.m_bucketGo = self.m_bucket2.gameObject
    self.m_bucketSpine = SpineAnimation.Create(self.m_bucket2)
  elseif not UIUtil.IsEmptyComponent(self.m_bucket) then
    self.m_bucketGo = self.m_bucket.gameObject
    self.m_bucketSpine = SpineAnimation.Create(self.m_bucket)
  end
  self.m_cdMask.fillAmount = 0
  local itemSwallow = item:GetComponent(ItemSwallow)
  if itemSwallow and not itemSwallow:IsSwallowOver() then
    self.m_bSit = true
    self.m_cowSpine:SetAnimation(0, "sit", true)
    if self.m_standSys then
      self.m_standSys:Stop()
    end
    if self.m_bucketGo then
      self.m_bucketGo:SetActive(false)
    end
  else
    self.m_bSit = false
    self.m_cowSpine:SetAnimation(0, "stand", true)
    if self.m_standSys then
      self.m_standSys:Play()
    end
    if self.m_bucketGo then
      self.m_bucketGo:SetActive(true)
      self.m_bucketSpine:SetAnimation(0, "idle", true)
    end
    local spread = item:GetComponent(ItemSpread)
    self.m_cdMask.fillAmount = spread:GetTimerAmount()
    self:_UpdateCountDown()
  end
  if itemSwallow and itemSwallow:WillSwallow() then
    AddHandlerAndRecordMap(itemSwallow.event, ItemSwallowEventType.StateChanged, {
      obj = self,
      method = self._OnSwallowStateChanged
    })
  end
  if withAnim then
    local function callback()
      if UIUtil.IsEmptyComponent(self) then
        return
      end
      self:PlayUpgradeAnim()
      EventDispatcher.DispatchEvent(EEventType.CacheItems)
    end
    
    if self.m_activityDefinition and self.m_activityDefinition.PdUpgradeWindowName then
      GM.UIManager:OpenView(self.m_activityDefinition.PdUpgradeWindowName, self.m_activityType, callback)
    else
      callback()
    end
  end
  EventDispatcher.AddListener(EEventType.HuntCowShowHandEffect, self, self._ShowHandEffect)
end

function HuntFarmCow:OnDestroy()
  if self.m_aniSeq ~= nil then
    self.m_aniSeq:Kill()
    self.m_aniSeq = nil
  end
  if self.m_handSeq ~= nil then
    self.m_handSeq:Kill()
    self.m_handSeq = nil
  end
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  local itemSwallow = self.m_itemModel and self.m_itemModel:GetComponent(ItemSwallow)
  if self:_NeedListenSwallowStateChangeEvent(itemSwallow) then
    RemoveAllHandlers(itemSwallow.event, self)
  end
  EventDispatcher.RemoveTarget(self)
end

function HuntFarmCow:UpdatePerSecond()
  self:_UpdateCountDown()
end

function HuntFarmCow:_UpdateCountDown()
  if self.m_fillAmountTween ~= nil then
    self.m_fillAmountTween:Kill()
    self.m_fillAmountTween = nil
  end
  if self.m_itemModel ~= nil and self.m_itemModel:GetComponent(ItemSpread) ~= nil then
    local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
    if itemSpread:GetState() == ItemSpreadState.Initializing then
      if itemSpread:GetTimerAmount() >= 1 then
        UIUtil.SetActive(self.m_countDownGo, false)
        return
      end
      UIUtil.SetActive(self.m_countDownGo, true)
      local nextTimerAmount = itemSpread:GetNextTimerAmount()
      self.m_fillAmountTween = self.m_cdMask:DOFillAmount(nextTimerAmount, 1):SetEase(Ease.Linear):OnComplete(function()
        if 1 <= nextTimerAmount then
          UIUtil.SetActive(self.m_countDownGo, false)
        end
      end)
      return
    end
  end
  UIUtil.SetActive(self.m_countDownGo, false)
end

function HuntFarmCow:PlayUpgradeAnim()
  if UIUtil.IsEmptyComponent(self.m_upgradeEffect) then
    return
  end
  self.m_upgradeEffect:Play()
  local seq = DOTween.Sequence()
  seq:Append(self.transform:DOScale(1, 0.2))
  seq:AppendCallback(function()
    self.m_aniSeq = nil
  end)
  self.m_aniSeq = seq
end

function HuntFarmCow:IsCowStand()
  if not self.m_itemModel then
    return
  end
  local itemSwallow = self.m_itemModel:GetComponent(ItemSwallow)
  if not itemSwallow then
    return true
  end
  return false
end

function HuntFarmCow:_NeedListenSwallowStateChangeEvent(itemSwallow)
  if itemSwallow and itemSwallow:WillSwallow() then
    return true
  end
  return false
end

function HuntFarmCow:_OnSwallowStateChanged()
  local itemSwallow = self.m_itemModel and self.m_itemModel:GetComponent(ItemSwallow)
  if itemSwallow then
    if itemSwallow:IsSwallowOver() and self.m_bSit then
      self:_PlayStandAnimation()
    elseif not itemSwallow:IsSwallowOver() and not self.m_bSit then
      self:_PlaySitAnimation()
    end
  end
end

function HuntFarmCow:PlayTransformAnim(origin, new)
  self.m_itemModel = new
  local originItemSwallow = origin:GetComponent(ItemSwallow)
  if originItemSwallow then
    if self:_NeedListenSwallowStateChangeEvent(originItemSwallow) then
      RemoveAllHandlers(originItemSwallow.event, self)
    end
    self:_PlayStandAnimation()
  else
    self:_PlaySitAnimation(true)
  end
  local newItemSwallow = new and new:GetComponent(ItemSwallow)
  if self:_NeedListenSwallowStateChangeEvent(newItemSwallow) then
    AddHandlerAndRecordMap(newItemSwallow.event, ItemSwallowEventType.StateChanged, {
      obj = self,
      method = self._OnSwallowStateChanged
    })
  end
end

function HuntFarmCow:_PlayStandAnimation()
  self.m_bSit = false
  self.m_cdMask.fillAmount = 0
  self:_UpdateCountDown()
  self.m_colliderGo:SetActive(true)
  if self.m_trans2StandSys then
    UIUtil.SetActive(self.m_trans2StandSys.gameObject, true)
    self.m_trans2StandSys:Play()
  end
  self.m_cowSpine:SetAnimation(0, "sit_stand", false, function()
    if self.m_standSys then
      self.m_standSys:Play()
    end
  end)
  self.m_cowSpine:AddAnimation(0, "stand", true)
  if self.m_bucketGo then
    self.m_bucketGo:SetActive(true)
    self.m_bucketSpine:SetAnimation(0, "appear", false)
    self.m_bucketSpine:AddAnimation(0, "up", false)
    self.m_bucketSpine:AddAnimation(0, "idle", true)
  end
end

function HuntFarmCow:_PlaySitAnimation(bFromTransform)
  self.m_bSit = true
  self.m_colliderGo:SetActive(false)
  if self.m_standSys then
    self.m_standSys:Stop()
  end
  self.m_cowSpine:SetAnimation(0, "stand_sit", false, function()
    self.m_colliderGo:SetActive(true)
    if bFromTransform then
      EventDispatcher.DispatchEvent(EEventType.ItemTransfromEnd)
    end
  end)
  self.m_cowSpine:AddAnimation(0, "sit", true)
  if self.m_bucketGo then
    self.m_bucketSpine:SetAnimation(0, "disappear", false, function()
      self.m_bucketGo:SetActive(false)
    end)
  end
end

function HuntFarmCow:GetItemView()
  return self.m_itemView
end

function HuntFarmCow:PlayTapAnimation()
  local screenPosition = HuntActivityBoardContainer.GetInstance():GetLastTouchedScreenPosition()
  if not screenPosition then
    return
  end
  self.m_touchParticleSystem:Stop()
  self.m_touchParticleSystem:Clear()
  local uiPos = PositionUtil.UICameraScreen2World(Vector3(screenPosition.x, screenPosition.y, 0))
  self.m_touchParticleSystem.transform.position = Vector3(uiPos.x, uiPos.y, self.m_touchParticleSystem.transform.position.z)
  self.m_touchParticleSystem:Play()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
end

function HuntFarmCow:GetAnchor()
  return self.transform.position + (self.m_activityDefinition and self.m_activityDefinition.CowAnchorOffset or V3Zero)
end

function HuntFarmCow:_ShowHandEffect()
  if self.m_handSeq ~= nil then
    self.m_handSeq:Kill()
    self.m_handSeq = nil
  end
  local boardview = GM.ModeViewController:GetHuntActivityBoardView()
  if not boardview then
    return
  end
  boardview:_CancelPrompt()
  self.m_handEffectGo:SetActive(true)
  local seq = DOTween.Sequence()
  seq:AppendInterval(2)
  seq:AppendCallback(function()
    self.m_handEffectGo:SetActive(false)
    boardview:_StartPrompt()
    self.m_handSeq = nil
  end)
  self.m_handSeq = seq
end

HuntKitchenWok = {}
HuntKitchenWok.__index = HuntKitchenWok

function HuntKitchenWok:Init(item, itemView, withAnim, activtyType)
  local suffix = item:GetCode():sub(-1)
  self.m_mowSpine = SpineAnimation.Create(self.m_mow)
  for i = 1, 4 do
    self["m_spine" .. i] = SpineAnimation.Create(self["m_wheat" .. i])
  end
  for i = 1, 4 do
    self["m_fireSpine" .. i] = SpineAnimation.Create(self["m_fire" .. i])
  end
  for i = 1, tonumber(suffix) - 1 do
    self["m_spine" .. i]:SetAnimation(0, "idle" .. i, true)
    self["m_fireSpine" .. i]:SetAnimation(0, "idle", true)
  end
  if withAnim then
    self.m_playAnimationCook = suffix
    self["m_spine" .. suffix]:SetAnimation(0, "appear" .. suffix, false, function()
      self["m_spine" .. suffix]:SetCompleteCallback(function()
        self.m_playAnimationCook = nil
      end)
    end)
    self["m_spine" .. suffix]:AddAnimation(0, "cook" .. suffix, false)
    self["m_spine" .. suffix]:AddAnimation(0, "idle" .. suffix, true)
    self["m_fireSpine" .. suffix]:SetAnimation(0, "appear", false)
    self["m_fireSpine" .. suffix]:AddAnimation(0, "idle", true)
  else
    self["m_spine" .. suffix]:SetAnimation(0, "idle" .. suffix, true)
    self["m_fireSpine" .. suffix]:SetAnimation(0, "idle", true)
  end
  for i = 1, tonumber(suffix) do
    UIUtil.SetActive(self["m_wheat" .. i].gameObject, true)
    UIUtil.SetActive(self["m_fire" .. i].gameObject, true)
  end
  for i = tonumber(suffix) + 1, 4 do
    UIUtil.SetActive(self["m_wheat" .. i].gameObject, false)
    UIUtil.SetActive(self["m_fire" .. i].gameObject, false)
  end
  self.m_itemView = itemView
  if activtyType ~= nil then
    self.m_activityDefinition = HuntActivityDefinition[activtyType]
  end
end

function HuntKitchenWok:PlayTapAnimation(item)
  local suffix = item:GetCode():sub(-1)
  if self.m_bPlyingTapAnimation then
    return
  end
  self.m_bPlyingTapAnimation = true
  if self.m_iRandomAnchor == nil then
    self.m_iRandomAnchor = self:GetRandomAnchor(suffix)
  end
  local random = self.m_iRandomAnchor
  self.m_mow.transform:SetParent(self["m_anchor" .. random])
  UIUtil.SetLocalPosition(self.m_mow.transform, 0, 0, 0)
  UIUtil.SetLocalScale(self.m_mow.transform, 1, 1, 1)
  self.m_mowSpine:SetAnimation(0, "mow", false)
  self.m_mowSpine:SetCompleteCallback(function()
    self.m_iRandomAnchor = nil
    self.m_bPlyingTapAnimation = nil
  end)
end

function HuntKitchenWok:GetAnchor()
  return self.transform.position + (self.m_activityDefinition and self.m_activityDefinition.WheatAnchorOffset or V3Zero)
end

function HuntKitchenWok:GetSpreadPosition(itemCode)
  local suffix = itemCode:sub(-1)
  if self.m_iRandomAnchor == nil then
    self.m_iRandomAnchor = self:GetRandomAnchor(suffix)
  end
  return self["m_spreadAnchor" .. self.m_iRandomAnchor].position
end

function HuntKitchenWok:GetRandomAnchor(suffix)
  local maxIndex = tonumber(suffix)
  if self.m_playAnimationCook then
    maxIndex = math.min(maxIndex, tonumber(self.m_playAnimationCook) - 1)
  end
  return math.random(1, maxIndex)
end

function HuntKitchenWok:GetItemView()
  return self.m_itemView
end
