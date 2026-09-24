local EAnimationType = {
  SpreadReady = 1,
  Tap = 2,
  Prompt = 3,
  PromptBack = 4,
  BubbleIdle = 5,
  ItemShake = 6,
  TimeSkip = 7,
  Blink = 8
}
ItemView = {}
ItemView.__index = ItemView
ItemView.MoveDuration = 0.2
local cwColor = CSColor(0.63, 0.533, 0.467)
local itemColor = CSColor.white

function ItemView:Awake()
  self:_AddListeners()
end

function ItemView:Init(itemModel)
  self.m_model = itemModel
  self.m_components = {}
  self.m_tweens = {}
  local pos = self.m_model:GetPosition()
  if pos ~= nil then
    self.transform.localPosition = self:_GetLocalPosition(pos)
  end
  self.m_effectTail = nil
  self:_RestoreSpriteMaterial()
  local itemCobweb = itemModel:GetComponent(ItemCobweb)
  local itemPortal = itemModel:GetComponent(ItemPortal)
  local itemIce = itemModel:GetComponent(ItemIce)
  local itemGray = itemModel:GetComponent(ItemGray)
  local itemPick = itemModel:GetComponent(ItemPick)
  local itemFreefallBoss = itemModel:GetComponent(ItemFreefallBoss)
  if itemCobweb ~= nil then
    local spriteName = GM.ItemDataModel:GetSpriteName(itemCobweb:GetInnerItemCode(), nil, itemModel)
    SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
    self:SetToCobwebColor()
  elseif itemPortal ~= nil then
  elseif itemIce ~= nil then
    local innerSpriteName = GM.ItemDataModel:GetSpriteName(itemIce:GetInnerItemCode(), nil, itemModel)
    SpriteUtil.SetSpriteRenderer(self.m_innerSpriteRenderer, innerSpriteName)
  elseif itemGray ~= nil then
    local spriteName = GM.ItemDataModel:GetSpriteName(itemGray:GetInnerItemCode(), nil, itemModel)
    SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
  elseif itemPick ~= nil then
    self:_UpdatePickView(true)
  elseif itemFreefallBoss ~= nil then
  else
    local spriteName
    local itemSand = itemModel:GetComponent(ItemSand)
    local itemBattery = itemModel:GetComponent(ItemBattery)
    if itemSand ~= nil then
      spriteName = GM.ItemDataModel:GetSpriteName(itemSand:GetInnerItemCode(), itemModel:GetGameMode(), itemModel)
    elseif itemBattery then
      spriteName = itemBattery:GetItemSpriteName()
    else
      spriteName = GM.ItemDataModel:GetSpriteName(itemModel:GetType(), itemModel:GetGameMode(), itemModel)
    end
    if spriteName ~= nil then
      SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
    end
    self.m_spriteRenderer.color = itemColor
  end
  local itemBubble = itemModel:GetComponent(ItemBubble)
  if itemBubble ~= nil then
    local innerSpriteName = GM.ItemDataModel:GetSpriteName(itemBubble:GetInnerItemCode(), nil, itemModel)
    SpriteUtil.SetSpriteRenderer(self.m_innerSpriteRenderer, innerSpriteName)
    self:_PlayBubbleIdleAnimation()
  end
  AddHandlerAndRecordMap(self.m_model.event, ItemEventType.SetPosition, {
    obj = self,
    method = self._MoveToBoardPosition
  })
  AddHandlerAndRecordMap(self.m_model.event, ItemEventType.SwallowOver, {
    obj = self,
    method = self._UpdateSwallowSprite
  })
  AddHandlerAndRecordMap(self.m_model.event, ItemEventType.Pick, {
    obj = self,
    method = self._UpdatePickView
  })
  if self.gameObject.activeInHierarchy then
    self:_AddListeners()
  end
  self:_UpdateChecked()
  self:_UpdateStar()
  self:_UpdateSwallowSprite()
  local huntActModel = HuntActivityModel.GetActiveModel()
  if huntActModel and huntActModel:IsSwallowCode(itemModel:GetCode()) then
    GM.ResourceLoader:LoadPrefab(GM.DataResource:GetScenePrefabConfig(ScenePrefabConfigName.effect_daoju_tishi_2), self.transform, V3Zero)
  end
end

function ItemView:_AddListeners()
  EventDispatcher.AddListener(EEventType.OrderStateChanged, self, self._UpdateChecked)
  EventDispatcher.AddListener(EEventType.UpdateItemCheck, self, self._UpdateChecked)
  EventDispatcher.AddListener(EEventType.ChangeGameMode, self, self._OnGameModeChanged)
  for _, activityDefinition in pairs(BingoDefinition) do
    EventDispatcher.AddListener(activityDefinition.OrderChangedEvent, self, self._UpdateChecked)
  end
end

function ItemView:AddComponent(component)
  component:SetItemView(self)
  self.m_components[getmetatable(component)] = component
end

function ItemView:GetComponent(type)
  return self.m_components[type]
end

function ItemView:RemoveComponent(component)
  self.m_components[getmetatable(component)] = nil
  GameObject.Destroy(component.gameObject)
end

function ItemView:GetModel()
  return self.m_model
end

function ItemView:GetSpriteRenderer()
  return self.m_spriteRenderer
end

function ItemView:_ChangeSpriteMaterial(material)
  if not self.m_originalMaterial then
    self.m_originalMaterial = self.m_spriteRenderer.sharedMaterial
  end
  self.m_spriteRenderer.material = material
end

function ItemView:_RestoreSpriteMaterial()
  if self.m_originalMaterial then
    self:_ChangeSpriteMaterial(self.m_originalMaterial)
  end
end

function ItemView:GetInnerSpriteRenderer()
  return self.m_innerSpriteRenderer
end

function ItemView:OnDestroy()
  EventDispatcher.RemoveTarget(self)
  Scheduler.UnscheduleTarget(self)
  RemoveAllHandlers(self.m_model.event, self)
  for _, tween in pairs(self.m_tweens) do
    if tween:IsActive() then
      tween:SafeKill()
    end
  end
  if self.m_sboxEffectSeq then
    self.m_sboxEffectSeq:Kill(true)
    self.m_sboxEffectSeq = nil
  end
end

function ItemView:SetToCobwebColor()
  local gameMode = self.m_model:GetBoardModel():GetGameMode()
  local color = cwColor
  if gameMode == EGameMode.Hunt then
    local huntActType = self.m_model:GetBoardModel():GetActivityType()
    if HuntActivityDefinition[huntActType] then
      color = HuntActivityDefinition[huntActType].CwColor or color
    end
  elseif gameMode == EGameMode.Freefall then
    color = CSColor.white
  end
  self.m_spriteRenderer.color = color
end

function ItemView:OnCollapse()
  local itemTokenView = self:GetComponent(ItemTokenView)
  if itemTokenView then
    itemTokenView:OnCollapse()
  end
end

function ItemView:OnDissolve()
  local runeView = self:GetComponent(ItemRuneView)
  if runeView then
    runeView:OnDissolve()
  end
  local sandView = self:GetComponent(ItemSandView)
  if sandView then
    sandView:OnDissolve()
  end
end

function ItemView:OnRemoved()
  local itemTokenView = self:GetComponent(ItemTokenView)
  if itemTokenView then
    itemTokenView:OnRemoved()
  end
end

local CAN_DELIVER_CHECK = ImageFileConfigName.icon_check
local CANNOT_DELIVER_CHECK = ImageFileConfigName.icon_check1
local STATE_CAN_DELIVER = 0
local STATE_CANNOT_DELIVER = 1

function ItemView:_UpdateChecked()
  local codeStateMap = self.m_model:GetBoardModel():GetOrderCodeStateMap()
  local code = self.m_model:GetCode()
  local swallow = self.m_model:GetComponent(ItemSwallow)
  if swallow and swallow:IsSwallowOver() then
    code = "swallow_over"
  end
  local state = codeStateMap[code]
  local img
  self.m_checkState = state
  if state then
    img = self:_GetMainOrderState(code, STATE_CANNOT_DELIVER)
    if img ~= STATE_CAN_DELIVER then
      img = self:_GetActOrderState(code, img)
    end
  end
  if img ~= STATE_CAN_DELIVER then
    img = self:_GetBingoOrderState(code, img)
  end
  if img then
    self.m_checkState = img
    if self.m_checkImg ~= img then
      self.m_checkImg = img
      if self.m_model:GetGameMode() == EGameMode.NoCDTrain then
        SpriteUtil.SetSpriteRenderer(self.m_check, img == STATE_CAN_DELIVER and ImageFileConfigName.noCDTrain_btn_done or CANNOT_DELIVER_CHECK)
      else
        SpriteUtil.SetSpriteRenderer(self.m_check, img == STATE_CAN_DELIVER and CAN_DELIVER_CHECK or CANNOT_DELIVER_CHECK)
      end
    end
    if not self.m_bCheckShow then
      UIUtil.SetActive(self.m_checkGo, true)
      self.m_bCheckShow = true
    end
    return
  elseif self.m_bCheckShow then
    UIUtil.SetActive(self.m_checkGo, false)
    self.m_bCheckShow = false
  end
end

function ItemView:_OnGameModeChanged()
  if self.m_effectsLuckyProduce ~= nil and not self.m_effectsLuckyProduce:IsNull() then
    self.m_effectsLuckyProduce:RemoveSelf()
    self.m_effectsLuckyProduce = nil
  end
  if self.m_sboxEffectSeq then
    self.m_sboxEffectSeq:Kill(true)
    self.m_sboxEffectSeq = nil
  end
end

function ItemView:_GetMainOrderState(code, default)
  for _, order in pairs(self.m_model:GetBoardModel():GetOrders()) do
    if order:GetState() == OrderState.CanDeliver then
      local requires = order:GetRequirements()
      if Table.ListContain(requires, code) then
        return STATE_CAN_DELIVER
      end
    end
  end
  return default
end

function ItemView:_GetActOrderState(code, default)
  local activityOrderRequirementsMap = GM.ActivityManager:GetOrderCodeStateMap(true)
  if activityOrderRequirementsMap[code] then
    return STATE_CAN_DELIVER
  end
  return default
end

function ItemView:_GetBingoOrderState(code, default)
  local bingoItemCodes = NoCDTrainModel.GetCurOrderRequirements(self.m_model:GetGameMode())
  if bingoItemCodes ~= nil and bingoItemCodes[code] ~= nil then
    return STATE_CAN_DELIVER
  end
  return default
end

function ItemView:UpdateExclamation(show)
  if show ~= self.m_exclamationGo.activeSelf then
    self.m_exclamationGo:SetActive(show)
  end
end

function ItemView:_UpdateStar()
  if (self.m_model:GetComponent(ItemCollectable) or self.m_model:GetComponent(ItemWheel)) and GM.ItemDataModel:IsItemMaxLevel(self.m_model:GetType()) then
    if self.m_starGo then
      self.m_starGo:SetActive(true)
    else
      self.m_starGo = Object.Instantiate(self.m_starEffect, self.transform)
    end
  end
  self:_UpdateCrown()
  self:_UpdateCloudDashCrown()
  self:_UpdateFreefallCrown()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.MainBoardItemCrownMaxShow) then
    self:_UpdateMainBoardCrown()
  end
end

local arrMainBoardShowCrownItemTypes = {
  ItemType.Joker,
  ItemType.EnergyBox,
  ItemType.EnergyBoxT1,
  ItemType.EnergyBoxT2,
  ItemType.ItemBox01,
  ItemType.ItemBox02,
  ItemType.ItemBoxMin1,
  ItemType.Cbox01,
  ItemType.Cbox02,
  ItemType.Cbox03,
  ItemType.Cbox04,
  ItemType.SunshineBoost,
  ItemType.SunshineBoostPro,
  ItemType.ItemBoxSunshine,
  ItemType.ItemBoxSunshinePro,
  ItemType.ItemPickBox1,
  ItemType.ItemPickBox2
}

function ItemView:_UpdateMainBoardCrown()
  if self.m_model:GetBoardModel():GetGameMode() ~= EGameMode.Main then
    return
  end
  local type = self.m_model:GetType()
  if GM.ItemDataModel:GetMergedType(type) == nil and (Table.ListContain(arrMainBoardShowCrownItemTypes, type) or StringUtil.StartWith(type, ItemCodePrefix.Energy) or StringUtil.StartWith(type, ItemCodePrefix.Gold) or StringUtil.StartWith(type, ItemCodePrefix.Gem) or StringUtil.StartWith(type, ItemCodePrefix.Battery) or StringUtil.StartWith(type, ItemCodePrefix.Blind) or StringUtil.StartWith(type, ItemCodePrefix.Turnbox) or StringUtil.StartWith(type, ItemCodePrefix.Sbox) or StringUtil.StartWith(type, ItemCodePrefix.GoldBox) or StringUtil.StartWith(type, ItemCodePrefix.BPBox) or StringUtil.StartWith(type, ItemCodePrefix.ToolBox) or StringUtil.StartWith(type, ItemCodePrefix.HugeToolBox)) then
    self.m_crownGo:SetActive(true)
  end
end

function ItemView:_UpdateCrown()
  if self.m_model:GetBoardModel():GetGameMode() ~= EGameMode.Hunt and self.m_model:GetBoardModel():GetGameMode() ~= EGameMode.HuntMap then
    return
  end
  local activityType = self.m_model:GetBoardModel():GetActivityType()
  if not activityType or not HuntActivityDefinition[activityType] and not HuntMapActivityDefinition[activityType] then
    return
  end
  if self.m_model:GetComponent(ItemSwallow) == nil and self.m_model:GetComponent(ItemBubble) == nil and self.m_model:GetComponent(ItemPaperBox) == nil and self.m_model:GetComponent(ItemCobweb) == nil and self.m_model:GetComponent(ItemSplit) == nil and self.m_model:GetComponent(ItemDig) == nil and self.m_model:GetComponent(ItemPortal) == nil and self.m_model:GetComponent(ItemGray) == nil then
    local chainId = GM.ItemDataModel:GetChainId(self.m_model:GetType())
    local level = GM.ItemDataModel:GetChainLevel(self.m_model:GetType())
    local model = GM.ActivityManager:GetModel(activityType)
    if chainId == ItemChain.Hunt then
      if level >= model:GetMergeLength() then
        self.m_crownGo:SetActive(true)
      end
    elseif level == GM.ItemDataModel:GetChainMaxLevel(chainId) and self.m_model:GetMergedType() == nil then
      self.m_crownGo:SetActive(true)
    elseif model:GetLevelByItemCode(self.m_model:GetType()) >= model:GetMergeLength() then
      self.m_crownGo:SetActive(true)
    end
  end
end

function ItemView:_UpdateCloudDashCrown()
  if self.m_model:GetBoardModel():GetGameMode() ~= EGameMode.CloudsDash then
    return
  end
  local activityType = self.m_model:GetBoardModel():GetActivityType()
  if not activityType or not CloudsDashDefinition[activityType] then
    return
  end
  if self.m_model:GetComponent(ItemSwallow) == nil and self.m_model:GetComponent(ItemBubble) == nil and self.m_model:GetComponent(ItemPaperBox) == nil and self.m_model:GetComponent(ItemCobweb) == nil and self.m_model:GetComponent(ItemSplit) == nil and self.m_model:GetComponent(ItemDig) == nil and self.m_model:GetComponent(ItemPortal) == nil and self.m_model:GetComponent(ItemGray) == nil then
    local chainId = GM.ItemDataModel:GetChainId(self.m_model:GetType())
    local level = GM.ItemDataModel:GetChainLevel(self.m_model:GetType())
    if level == GM.ItemDataModel:GetChainMaxLevel(chainId) and self.m_model:GetMergedType() == nil then
      self.m_crownGo:SetActive(true)
    end
  end
end

function ItemView:_UpdateFreefallCrown()
  if self.m_model:GetBoardModel():GetGameMode() ~= EGameMode.Freefall then
    return
  end
  local activityType = self.m_model:GetBoardModel():GetActivityType()
  if not activityType or not FreefallActivityDefinition[activityType] then
    return
  end
  if self.m_model:GetComponent(ItemSwallow) == nil and self.m_model:GetComponent(ItemBubble) == nil and self.m_model:GetComponent(ItemPaperBox) == nil and self.m_model:GetComponent(ItemCobweb) == nil and self.m_model:GetComponent(ItemSplit) == nil and self.m_model:GetComponent(ItemDig) == nil and self.m_model:GetComponent(ItemPortal) == nil and self.m_model:GetComponent(ItemGray) == nil and self.m_model:GetComponent(ItemFreefallBoss) == nil then
    local chainId = GM.ItemDataModel:GetChainId(self.m_model:GetType())
    local level = GM.ItemDataModel:GetChainLevel(self.m_model:GetType())
    local model = GM.ActivityManager:GetModel(activityType)
    if StringUtil.StartWith(self.m_model:GetType(), ItemCodePrefix.CloudsDash) then
      if level >= model:GetMergeLength() then
        self.m_crownGo:SetActive(true)
      end
    elseif level == GM.ItemDataModel:GetChainMaxLevel(chainId) and self.m_model:GetMergedType() == nil then
      self.m_crownGo:SetActive(true)
    end
  end
end

function ItemView:SetFlying(flying)
  if flying then
    if self.m_starGo then
      self.m_starGo:SetActive(false)
    end
    if self.m_crownGo then
      self.m_crownGo:SetActive(false)
    end
    if self.m_retriveLightEffectGo and not UIUtil.IsEmptyComponent(self.m_retriveLightEffectGo) then
      self.m_retriveLightEffectGo:SetActive(false)
      self.m_retriveLightEffectGo:RemoveSelf()
      self.m_retriveLightEffectGo = nil
    end
  else
    self:_UpdateStar()
  end
  for _, component in pairs(self.m_components) do
    component:SetFlying(flying)
  end
end

function ItemView:_MoveToBoardPosition(boardPosition)
  if self:TryStopJumpTween() then
    self.transform.localScale = Vector3.one
    self:RemoveLuckySpreadEffect()
  end
  self.transform:DOLocalMove(self:_GetLocalPosition(boardPosition), ItemView.MoveDuration)
end

function ItemView:_GetLocalPosition(boardPosition)
  local localPosition = boardPosition:ToLocalPosition()
  local zIndex = BaseSceneBoardModel.HorizontalTiles * BaseSceneBoardModel.VerticalTiles - BaseSceneBoardModel.HorizontalTiles * (boardPosition:GetY() - 1) - boardPosition:GetX() + 1
  return Vector3(localPosition.x + self.m_model:GetBoardModel().TileSize / 2, localPosition.y + self.m_model:GetBoardModel().TileSize / 2, zIndex * 10)
end

function ItemView:MergeLightAppear()
  Object.Instantiate(self.m_mergeLightAppearPrefab, self.transform)
  self.m_mergeLightTween = DOVirtual.DelayedCall(0.34, function()
    self.m_mergeLightObject = Object.Instantiate(self.m_mergeLightContinuePrefab, self.transform)
  end)
end

function ItemView:MergeLightDisappear()
  if self.m_mergeLightTween ~= nil then
    self.m_mergeLightTween:Kill()
    self.m_mergeLightTween = nil
  end
  if self.m_mergeLightObject ~= nil then
    Object.Destroy(self.m_mergeLightObject)
    self.m_mergeLightObject = nil
  end
  if not self.m_mergeLightDisappearPrefab:IsNull() and not self.transform:IsNull() then
    local go = Object.Instantiate(self.m_mergeLightDisappearPrefab, self.transform)
    local particleSystem = go.transform:GetComponent(typeof(ParticleSystem))
    particleSystem:Clear()
    particleSystem:Play()
  end
end

function ItemView:IceBoom(root)
  self.m_components[ItemIceView]:Boom(root)
end

function ItemView:IceCDAppear()
  self.m_components[ItemIceView]:CDAppear()
end

function ItemView:IceDisappear()
  self.m_components[ItemIceView].gameObject:SetActive(false)
end

function ItemView:GrayBreak(root)
  self.m_components[ItemGrayView]:Break(root)
end

function ItemView:ShowSpreadLight(spreadType)
  Object.Instantiate(self.m_spreadLightPrefab, self.transform)
  local luckyProducePrefab
  if spreadType == BoardSpreadType.Lucky or spreadType == BoardSpreadType.ExtraLucky then
    luckyProducePrefab = self.m_luckyProduceNormalPrefab
  elseif spreadType == BoardSpreadType.SuperLucky or spreadType == BoardSpreadType.ExtraSuperLucky then
    luckyProducePrefab = self.m_luckyProduceSuperPrefab
  elseif spreadType == BoardSpreadType.DoubleLucky or spreadType == BoardSpreadType.TripleLucky1 then
    luckyProducePrefab = self.m_luckyProduceCombo1Prefab
  elseif spreadType == BoardSpreadType.TripleLucky2 then
    luckyProducePrefab = self.m_luckyProduceCombo2Prefab
  end
  if luckyProducePrefab ~= nil then
    if self.m_effectsLuckyProduce ~= nil and not self.m_effectsLuckyProduce:IsNull() then
      self.m_effectsLuckyProduce:RemoveSelf()
    end
    self.m_effectsLuckyProduce = Object.Instantiate(luckyProducePrefab, self.transform)
  end
  if spreadType == BoardSpreadType.DoubleLucky or spreadType == BoardSpreadType.TripleLucky1 or spreadType == BoardSpreadType.TripleLucky2 then
    EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
  end
  if spreadType == BoardSpreadType.TripleLucky2 then
    GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.effect_ui_lucky_fireworks_fullscreen), GM.UIManager:GetCanvasRoot(), Vector3.zero)
  end
end

function ItemView:ShowRetrieveLight()
  self.m_retriveLightEffectGo = Object.Instantiate(self.m_retrieveLightPrefab, self.transform)
end

function ItemView:UpdateItemAffectedEffect(dragItemModel)
  if self.m_model:GetBoardModel():IsTileLock(self.m_model:GetPosition()) then
    return
  end
  local mergePrompt = false
  local setAlpha = self:_CheckSplitAlpha(dragItemModel)
  if setAlpha then
    self.m_formerSpriteAlpha = self.m_spriteRenderer.color.a
    self.m_formerInnerSpriteAlpha = self.m_innerSpriteRenderer.color.a
    UIUtil.SetAlpha(self.m_spriteRenderer, math.min(self.m_formerSpriteAlpha, 0.5))
    UIUtil.SetAlpha(self.m_innerSpriteRenderer, math.min(self.m_formerInnerSpriteAlpha, 0.5))
    for _, comp in pairs(self.m_components) do
      comp:SetActive(EItemViewComponentHideReason.UpdateItem, false, setAlpha)
    end
  else
    if self.m_formerSpriteAlpha ~= nil then
      UIUtil.SetAlpha(self.m_spriteRenderer, self.m_formerSpriteAlpha)
      self.m_formerSpriteAlpha = nil
    end
    if self.m_formerInnerSpriteAlpha ~= nil then
      UIUtil.SetAlpha(self.m_innerSpriteRenderer, self.m_formerInnerSpriteAlpha)
      self.m_formerInnerSpriteAlpha = nil
    end
    for _, comp in pairs(self.m_components) do
      comp:SetActive(EItemViewComponentHideReason.UpdateItem, true, setAlpha)
    end
    if GM.ConfigModel:IsMergePromptAnimOpen() then
      mergePrompt = self:_CheckMergeAnim(dragItemModel)
    end
  end
  if mergePrompt then
    self.m_mergeAnimTween = DOTween.Sequence()
    self.m_mergeAnimTween:AppendInterval(0.5)
    self.m_mergeAnimTween:Append(self.m_spriteRenderer.transform:DOScale(1.15, 0.5))
    self.m_mergeAnimTween:Append(self.m_spriteRenderer.transform:DOScale(1, 0.5))
    self.m_mergeAnimTween:SetLoops(-1)
  elseif self.m_mergeAnimTween then
    self.m_mergeAnimTween:Kill()
    self.m_mergeAnimTween = nil
    self.m_spriteRenderer.transform.localScale = V3One
  end
end

function ItemView:_CheckSplitAlpha(dragItemModel)
  if dragItemModel == nil or dragItemModel == self.m_model or dragItemModel:GetComponent(ItemSplit) == nil then
    return false
  end
  local type = self.m_model:GetType()
  if StringUtil.StartWith(type, ItemCodePrefix.Scissors) or type == ItemType.ScissorsSp then
    return false
  end
  return not dragItemModel:GetComponent(ItemSplit):CanSplitItem(self.m_model)
end

function ItemView:_CheckMergeAnim(dragItemModel)
  if dragItemModel == nil or dragItemModel == self.m_model or self.m_model:GetBoardModel():IsTileLock(self.m_model:GetPosition()) then
    return false
  end
  local type = self.m_model:GetType()
  if ToolCodeToLevel[type] or type:find(ItemCodePrefix.Energy) or StringUtil.StartWith(type, ItemCodePrefix.Gold) or type:find(ItemCodePrefix.Gem) or type == ItemType.Joker or dragItemModel:GetCode() == ItemType.Joker or type:find("box") or StringUtil.StartWith(type, ItemCodePrefix.Scissors) or StringUtil.StartWith(type, ItemCodePrefix.ScissorsSp) or StringUtil.StartWith(type, ItemCodePrefix.Spokesperson) or self.m_checkState == STATE_CAN_DELIVER or StringUtil.StartWith(type, ItemCodePrefix.TimeSkip) then
    return false
  end
  if type == ItemType.Cobweb then
    local code = self.m_model:GetComponent(ItemCobweb):GetInnerItemCode()
    local codeStateMap = self.m_model:GetBoardModel():GetOrderCodeStateMap()
    local state = codeStateMap[code]
    if state then
      state = self:_GetMainOrderState(code, STATE_CANNOT_DELIVER)
      if state ~= STATE_CAN_DELIVER then
        state = self:_GetActOrderState(code, state)
      end
    end
    if state ~= STATE_CAN_DELIVER then
      state = self:_GetBingoOrderState(code, state)
    end
    if state == STATE_CAN_DELIVER then
      return false
    end
  end
  return self.m_model:GetBoardModel():CanItemMerge(dragItemModel, self.m_model)
end

function ItemView:PlayTapAnimation(range)
  local transform = self.m_spriteRenderer.transform
  local sequence = DOTween.Sequence()
  sequence:Append(transform:DOScale(1 - range, 0.1))
  sequence:Append(transform:DOScale(1 + range, 0.2))
  sequence:Append(transform:DOScale(1, 0.2))
  sequence:Append(transform:DOScale(1 + range / 2, 0.2))
  sequence:Append(transform:DOScale(1, 0.2))
  sequence:OnComplete(function()
    self.m_tweens[EAnimationType.Tap] = nil
  end)
  self.m_tweens[EAnimationType.Tap] = sequence
  if self.m_model:GetComponent(ItemBattery) ~= nil then
    local batteryView = self:GetComponent(ItemBatteryView)
    if batteryView then
      batteryView:PlayTapAnimation(range)
    end
  end
  if self.m_model:GetComponent(ItemPick) ~= nil then
    local pickView = self:GetComponent(ItemPickView)
    if pickView then
      pickView:PlayTapAnimation(range)
    end
  end
end

function ItemView:ShowCollapseEffect()
  self.m_spriteRenderer.gameObject:SetActive(false)
  local pickView = self:GetComponent(ItemPickView)
  if pickView then
    pickView.gameObject:SetActive(false)
  end
  if self.m_starGo then
    self.m_starGo:SetActive(false)
  end
  if self.m_crownGo then
    self.m_crownGo:SetActive(false)
  end
  UIUtil.SetActive(self.m_checkGo, false)
  self:_StopAnimation(EAnimationType.ItemShake)
  if self.m_model:GetComponent(ItemPaperBox) or self.m_model:GetComponent(ItemMapBlocker) then
    Object.Instantiate(self.m_itemBoomPrefab, self.transform)
  else
    Object.Instantiate(self.m_itemCollapsePrefab, self.transform)
  end
end

function ItemView:ShowItemSplitAnimation(bIsFinalSplit)
  if self.m_itemSplitAnimationGo then
    Object.Destroy(self.m_itemSplitAnimationGo)
    self.m_itemSplitAnimationGo = nil
  end
  local prefab = bIsFinalSplit and self.m_itemSplitFinalEffectPrefab or self.m_itemSplitEffectPrefab
  self.m_itemSplitAnimationGo = Object.Instantiate(prefab, self.transform)
end

function ItemView:PlayShakeAnim()
  local sequence = DOTween.Sequence()
  local vec1 = Vector3(0, 0, -4)
  local vec2 = Vector3(0, 0, 8)
  local keyFrame = 0.08333333333333333
  sequence:Append(self.transform:DOLocalRotate(vec1, keyFrame))
  sequence:Append(self.transform:DOLocalRotate(vec2, keyFrame))
  sequence:Append(self.transform:DOLocalRotate(vec1, keyFrame))
  sequence:Append(self.transform:DOLocalRotate(vec2, keyFrame))
  sequence:Append(self.transform:DOLocalRotate(V3Zero, keyFrame))
  sequence:AppendInterval(keyFrame * 5)
  sequence:SetLoops(-1, LoopType.Restart)
  self.m_tweens[EAnimationType.ItemShake] = sequence
end

function ItemView:PlayPromptAnimation(targetPosition)
  self:StopPromptAnimation(false)
  local sequence = DOTween.Sequence()
  local transform = self.m_spriteRenderer.transform
  self.m_promptOriginPos = transform.localPosition
  local hasCobweb = self.m_model:GetComponent(ItemCobweb)
  local movePos
  if hasCobweb or targetPosition == nil then
    movePos = self.m_promptOriginPos
  else
    local direction = Vector3.Normalize(targetPosition - self.transform.position)
    direction.z = 0
    movePos = 20 * direction + self.m_promptOriginPos
  end
  for i = 1, 3 do
    sequence:Append(transform:DOScale(1.15, 0.25):SetEase(Ease.OutCubic))
    sequence:Join(transform:DOLocalMove(movePos, 0.45):SetEase(Ease.OutCubic))
    sequence:AppendInterval(0.05)
    sequence:Append(transform:DOScale(1, 0.25))
    sequence:Join(transform:DOLocalMove(self.m_promptOriginPos, 0.5))
  end
  sequence:AppendInterval(2)
  sequence:SetLoops(-1)
  self.m_tweens[EAnimationType.Prompt] = sequence
end

function ItemView:StopPromptAnimation(ignoreAnim)
  if self.m_tweens[EAnimationType.Prompt] ~= nil and not self.gameObject:IsNull() then
    self:_StopAnimation(EAnimationType.Prompt)
    local transform = self.m_spriteRenderer.transform
    local targetPos = self.m_promptOriginPos or V3Zero
    self.m_promptOriginPos = nil
    self:_StopAnimation(EAnimationType.PromptBack)
    if ignoreAnim ~= false then
      local duration = (transform.localScale.x - 1) / 0.19999999999999996 * 0.4
      local sequence = DOTween.Sequence()
      sequence:Insert(0, transform:DOScale(1, duration))
      sequence:Insert(0, transform:DOLocalMove(targetPos, duration))
      sequence:OnComplete(function()
        self.m_tweens[EAnimationType.PromptBack] = nil
      end)
      self.m_tweens[EAnimationType.PromptBack] = sequence
    else
      transform.localScale = V3One
      transform.localPosition = targetPos
    end
  end
end

function ItemView:_PlayBubbleIdleAnimation()
  local transform = self.m_spriteRenderer.transform
  local sequence = DOTween.Sequence()
  sequence:Append(transform:DOScale(0.98, 0.5))
  sequence:Insert(0, transform:DOLocalMove(Vector3(0, 3, 0), 0.5))
  sequence:Append(transform:DOScale(1.02, 1))
  sequence:Insert(0.5, transform:DOLocalMove(Vector3(0, -3, 0), 1))
  sequence:Append(transform:DOScale(V3One, 0.5))
  sequence:Insert(1.5, transform:DOLocalMove(V3Zero, 0.5))
  sequence:SetLoops(-1)
  self.m_tweens[EAnimationType.BubbleIdle] = sequence
end

function ItemView:ShowBubbleBreakLight()
  Object.Instantiate(self.m_bubbleBreakLightPrefab, self.transform)
end

function ItemView:RemoveActivityToken()
  local itemTokenView = self:GetComponent(ItemTokenView)
  if itemTokenView then
    itemTokenView:OnBubbleBreak()
  end
end

function ItemView:PlayTimeSkipAnimation(delay)
  delay = delay or 0
  local sequence = DOTween.Sequence()
  local transform = self.m_spriteRenderer.transform
  sequence:Insert(delay, transform:DOLocalMoveY(30, 0.25):SetEase(Ease.OutCubic))
  sequence:Insert(delay + 0.25, transform:DOLocalMoveY(0, 0.25):SetEase(Ease.InCubic))
  sequence:InsertCallback(delay, function()
    if self.m_timeSkipEffect ~= nil then
      Object.Destroy(self.m_timeSkipEffect)
      self.m_timeSkipEffect = nil
    end
    self.m_timeSkipEffect = Object.Instantiate(self.m_timeSkipEffectPrefab, self.transform)
  end)
  sequence:InsertCallback(delay + 1, function()
    if self.m_timeSkipEffect ~= nil then
      Object.Destroy(self.m_timeSkipEffect)
      self.m_timeSkipEffect = nil
    end
  end)
end

function ItemView:SetJumpTween(tween)
  self.m_jumpTween = tween
end

function ItemView:TryStopJumpTween()
  if self.m_jumpTween ~= nil then
    self.m_jumpTween:Kill()
    self.m_jumpTween = nil
    return true
  end
  return false
end

function ItemView:_StopAnimation(type)
  if self.m_tweens[type] ~= nil then
    self.m_tweens[type]:Kill()
    self.m_tweens[type] = nil
  end
end

function ItemView:UpdateChargeState(itemCharge)
  local spriteName = GM.ItemDataModel:GetSpriteName(self.m_model:GetType())
  local stage = itemCharge:GetStage()
  local level = itemCharge:GetLevel()
  if level == 0 then
    self.m_spriteRenderer.transform.localPosition = V3Zero
    SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
    self.m_innerSpriteRenderer.sprite = nil
    return
  end
  if ItemChargeImageConfig[spriteName] == nil then
    local strImageName = self.m_model:GetType() .. "_" .. stage .. "_" .. level
    SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, strImageName)
  else
    SpriteUtil.SetSpriteRenderer(self.m_innerSpriteRenderer, spriteName)
    local chain = GM.ItemDataModel:GetChainId(self.m_model:GetType())
    local name = chain .. "_" .. stage .. "_" .. level
    SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, name)
    local transform = self.m_spriteRenderer.transform
    transform.localPosition = ItemChargeImageConfig[name].pos
    local innerTrans = self.m_innerSpriteRenderer.transform
    innerTrans:SetLocalScale(ItemChargeImageConfig[spriteName].scale)
    innerTrans.localPosition = ItemChargeImageConfig[spriteName].pos - ItemChargeImageConfig[name].pos
  end
end

function ItemView:SetDoubleEnergyFlyItemInfo()
  UIUtil.SetActive(self.m_checkGo, false)
  EventDispatcher.RemoveTarget(self)
end

function ItemView:PlayAccEffect()
  local go = Object.Instantiate(self.m_accEffectPrefab, self.transform)
  self.transform:DOJump(self.transform.position, 15, 1, 0.2):OnComplete(function()
    if go ~= nil and not go:IsNull() then
      GameObject.Destroy(go)
    end
  end)
end

function ItemView:PlayBlinkAnim()
  if self.m_tweens[EAnimationType.Blink] ~= nil then
    self:StopBlinkAnim()
  end
  self.m_effectSpriteRenderer.sprite = self.m_spriteRenderer.sprite
  self.m_effectSpriteRenderer.transform.localPosition = self.m_spriteRenderer.transform.localPosition
  self.m_effectSpriteRenderer.transform.localScale = self.m_spriteRenderer.transform.localScale
  self.m_innerEffectSpriteRenderer.sprite = self.m_innerSpriteRenderer.sprite
  self.m_innerEffectSpriteRenderer.transform.localPosition = self.m_innerSpriteRenderer.transform.localPosition
  self.m_innerEffectSpriteRenderer.transform.localScale = self.m_innerSpriteRenderer.transform.localScale
  local sequence = DOTween.Sequence()
  sequence:AppendInterval(2)
  sequence:OnComplete(function()
    UIUtil.SetActive(self.m_effectSpriteRenderer.transform.gameObject, false)
    self.m_tweens[EAnimationType.Blink] = nil
  end)
  UIUtil.SetActive(self.m_effectSpriteRenderer.transform.gameObject, true)
  self.m_tweens[EAnimationType.Blink] = sequence
end

function ItemView:StopBlinkAnim()
  if self.m_tweens[EAnimationType.Blink] == nil then
    return
  end
  self.m_tweens[EAnimationType.Blink]:Kill()
  self.m_tweens[EAnimationType.Blink] = nil
  UIUtil.SetActive(self.m_effectSpriteRenderer.transform.gameObject, false)
end

function ItemView:PlayLuckyStarEffect()
  local go = Object.Instantiate(self.m_luckyStarEffectPrefab, self.transform)
  go.transform.localScale = Vector3(0.25, 0.25, 1)
end

function ItemView:PlayUpgradeEffect(msg)
  local itemType = msg and msg.Item and msg.Item:GetType()
  if itemType and StringUtil.StartWith(itemType, ItemCodePrefix.Turnbox) then
    Object.Instantiate(self.m_upgradeSuccessEffectPrefab, self.m_bottomEffect.transform)
    Object.Instantiate(self.m_upgradeSuccessEffectPrefab2, self.m_bottomEffect.transform)
    local boardCam = GM.ModeViewController:GetBoardInfo()
    local screenPos = boardCam:WorldToScreenPoint(self.transform.position)
    if itemType == ItemType.Turnbox7 then
      GM.UIManager:ShowPromptWithKey("turnbox_top", screenPos, nil, EPromptStyle.Amazing)
    else
      GM.UIManager:ShowPromptWithKey("turnbox_success", screenPos, nil, EPromptStyle.BoardNormal)
    end
  else
    Object.Instantiate(self.m_upgradeFailEffectPrefab, self.m_bottomEffect.transform)
  end
  self.cantClick = true
  DelayExecuteFunc(function()
    self.cantClick = nil
    EventDispatcher.DispatchEvent(EEventType.TurnboxTransform, msg)
  end, 0.6)
end

function ItemView:ShowLuckySpreadEffect()
  if self.m_effectsLuckyProduceFly == nil or self.m_effectsLuckyProduceFly:IsNull() then
    self.m_effectsLuckyProduceFly = GameObject.Instantiate(self.m_luckySpreadEffectPrefab, self.transform)
  end
  if self.m_components[ItemSwallowView] then
    self.m_components[ItemSwallowView]:SetActive(EItemViewComponentHideReason.LuckyProduce, false)
  end
  self.m_spriteRendererScale = self.m_spriteRenderer.transform.localScale
  self.m_spriteRenderer.transform.localScale = V3Zero
  self.m_checkScale = self.m_checkGo.transform.localScale
  self.m_checkGo.transform.localScale = V3Zero
end

function ItemView:RemoveLuckySpreadEffect()
  if self.m_components[ItemSwallowView] then
    self.m_components[ItemSwallowView]:SetActive(EItemViewComponentHideReason.LuckyProduce, true)
  end
  if self.m_effectsLuckyProduceFly then
    Object.Destroy(self.m_effectsLuckyProduceFly)
    self.m_effectsLuckyProduceFly = nil
    self.m_spriteRenderer.transform.localScale = self.m_spriteRendererScale
    self.m_spriteRendererScale = nil
    self.m_checkGo.transform.localScale = self.m_checkScale
    self.m_checkScale = nil
  end
end

function ItemView:_UpdateSwallowSprite()
  local itemSwallow = self.m_model:GetComponent(ItemSwallow)
  if itemSwallow and itemSwallow:IsSwallowOver() then
    local spriteName = GM.ItemDataModel:GetSpriteName(self.m_model:GetType(), self.m_model:GetGameMode())
    if spriteName ~= nil then
      spriteName = spriteName .. "_full"
      if ImageFileConfigName.HasConfig(spriteName) then
        SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
      end
    end
  end
end

function ItemView:_UpdatePickView(ignoreEffect)
  local itemPick = self.m_model:GetComponent(ItemPick)
  local spriteName = GM.ItemDataModel:GetSpriteName(self.m_model:GetType(), self.m_model:GetGameMode(), self.m_model)
  if itemPick:GetChoosedCode() ~= nil then
    spriteName = spriteName .. "_picked"
  end
  SpriteUtil.SetSpriteRenderer(self.m_spriteRenderer, spriteName)
  local itemPickView = self:GetComponent(ItemPickView)
  if itemPickView then
    itemPickView:UpdateView(ignoreEffect)
  end
end

function ItemView:CreateSunshineEffect()
  local isBox = not StringUtil.IsNilOrEmpty(self.m_model:GetSunshineId())
  local isSuper = GM.ActivityManager:IsInSuperSunshineRewardSpan()
  local effect = isSuper and self.m_SunshineRewardEffectPrefabPro or self.m_SunshineRewardEffectPrefab
  if not isBox and isSuper then
    effect = self.m_sunshineItemTw
  end
  self.m_sunshineFlyItem = Object.Instantiate(effect, self.m_flyItemTrans)
end

function ItemView:CreateSunshineArriveEffect()
  local isBox = not StringUtil.IsNilOrEmpty(self.m_model:GetSunshineId())
  local isSuper = GM.ActivityManager:IsInSuperSunshineRewardSpan()
  local effect = isSuper and self.m_SunshineRewardEffectBoomPro or self.m_SunshineRewardEffectBoom
  if not isBox and isSuper then
    effect = self.m_sunshineItemBoom
  end
  local boomEffect = Object.Instantiate(effect, self.m_flyItemTrans)
  boomEffect.transform.localScale = Vector3(0.3, 0.3, 1)
end

function ItemView:CreateSunshineRaceEffect()
  local effect = self.m_sunshineRaceEffect
  self.m_sunshineFlyItem = Object.Instantiate(effect, self.m_flyItemTrans)
end

function ItemView:CreateSunshineRaceArriveEffect()
  local effect = self.m_sunshineRaceBoom
  local boomEffect = Object.Instantiate(effect, self.m_flyItemTrans)
  boomEffect.transform.localScale = Vector3(0.3, 0.3, 1)
  local edgeEffect = Object.Instantiate(effect, self.m_flyItemTrans)
  DelayExecuteFuncInView(function()
    GameObject.Destroy(edgeEffect)
  end, 2, self)
end

function ItemView:DestroySunshineEffect()
  if self.m_sunshineFlyItem then
    DelayExecuteFuncInView(function()
      GameObject.Destroy(self.m_sunshineFlyItem)
    end, 0.2, self)
  end
end

function ItemView:CreateTriggerPlaneEffect(bExCustomer)
  local effect = bExCustomer and self.m_extraCustomerTwEffect or self.m_triggerPlaneTwEffect
  self.m_triggerPlaneFlyItem = Object.Instantiate(effect, self.m_flyItemTrans)
end

function ItemView:CreateTriggerPlaneArriveEffect(bExCustomer)
  local effect = bExCustomer and self.m_extraCustomerBoomEffect or self.m_triggerPlaneBoomEffect
  local boomEffect = Object.Instantiate(effect, self.m_flyItemTrans)
  boomEffect.transform.localScale = Vector3(0.4, 0.4, 1)
end

function ItemView:DestroyTriggerPlaneEffect(delay)
  if self.m_triggerPlaneFlyItem then
    DelayExecuteFuncInView(function()
      GameObject.Destroy(self.m_triggerPlaneFlyItem)
    end, delay or 0.2, self)
  end
end

function ItemView:CreateChestCustomerArriveEffect()
  Object.Instantiate(self.m_SunshineRewardEffectEdge, self.m_flyItemTrans)
end

function ItemView:SetSpriteActive(bActive)
  UIUtil.SetActive(self.m_spriteRenderer.gameObject, bActive)
end

function ItemView:ShowAnniversarySBoxEffect()
  if not self.gameObject.activeInHierarchy then
    return
  end
  local startLocalPos = self.transform.localPosition
  local tileSize = self.m_model:GetBoardModel().TileSize
  local boardPosition = self.m_model:GetPosition()
  local endPos = Vector3(tileSize * 3.5, tileSize * 4.5, 0)
  local boomEffectGo = Object.Instantiate(self.m_anniversaryBoomEffect, self.transform)
  local seq = DOTween.Sequence()
  local tailEffectGo = Object.Instantiate(self.m_anniversaryTailEffect, self.transform.parent)
  tailEffectGo.transform.localPosition = startLocalPos
  tailEffectGo.transform.localScale = Vector3(2, 2, 2)
  local cakeEffectGo = Object.Instantiate(self.m_anniversaryCakeEffect, self.transform.parent)
  cakeEffectGo:SetActive(false)
  cakeEffectGo.transform.localPosition = endPos
  cakeEffectGo.transform.localScale = Vector3(3, 3, 3)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxFirework)
  seq:Append(tailEffectGo.transform:DOLocalMove(endPos, 0.5))
  seq:AppendCallback(function()
    cakeEffectGo:SetActive(true)
  end)
  seq:AppendInterval(5)
  seq:OnComplete(function()
    self.m_sboxEffectSeq = nil
    tailEffectGo:RemoveSelf()
    cakeEffectGo:RemoveSelf()
    if not UIUtil.IsEmptyComponent(boomEffectGo) then
      boomEffectGo:RemoveSelf()
    end
  end)
  self.m_sboxEffectSeq = seq
end

function ItemView:GetSpriteRendererSize()
  if self.m_spriteRendererSize == nil then
    if self.m_model:GetType() == ItemType.Ice then
      self.m_spriteRendererSize = self.m_innerSpriteRenderer.size
    else
      self.m_spriteRendererSize = self.m_spriteRenderer.size
    end
  end
  return self.m_spriteRendererSize
end
