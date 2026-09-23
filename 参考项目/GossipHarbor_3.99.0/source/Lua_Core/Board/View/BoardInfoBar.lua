BoardInfoBar = {}
BoardInfoBar.__index = BoardInfoBar

function BoardInfoBar:Init(boardModel)
  self.m_infoContent:Init(self, boardModel)
  self.m_removeContent:Init(self, boardModel)
  self:_ShowContent(false)
end

function BoardInfoBar:OnItemSold(itemModel)
  self:_ShowContent(false, itemModel)
end

function BoardInfoBar:UpdateInfoBar(itemModel)
  self:_ShowContent(itemModel ~= nil, itemModel)
end

function BoardInfoBar:_ShowContent(showInfo, itemModel)
  local disableContent = showInfo and self.m_removeContent or self.m_infoContent
  local enableContent = showInfo and self.m_infoContent or self.m_removeContent
  disableContent:UpdateContent()
  disableContent.gameObject:SetActive(false)
  enableContent.gameObject:SetActive(true)
  enableContent:UpdateContent(itemModel)
end

function BoardInfoBar:GetInfoContent()
  return self.m_infoContent
end

function BoardInfoBar:GetOpenBtnGo()
  return self.m_infoContent.m_openGo
end

function BoardInfoBar:GetSkipBtnGo()
  return self.m_infoContent.m_skipGo
end

function BoardInfoBar:GetUnlockBtnGo()
  return self.m_infoContent.m_unlockGo
end

function BoardInfoBar:GetInfoBtnGo()
  return self.m_infoContent.m_itemTipButton.gameObject
end

function BoardInfoBar:GetActivateBtnGo()
  return self.m_infoContent.m_activateGo
end

function BoardInfoBar:SetRemoveUpperButtonEnabled(enabled)
  self.m_infoContent.m_removeUpperGo:GetComponentInChildren(typeof(CS.UnityEngine.UI.Button)).enabled = enabled
end

function BoardInfoBar:SetItemTipButtonEnabled(enabled)
  self.m_infoContent.m_itemTipButton:SetEnabled(enabled)
end

function BoardInfoBar:SetTransformButtonEnabled(enabled)
  self.m_infoContent.m_transformButton.enabled = enabled
end

function BoardInfoBar:GetRemoveBtn()
  return self.m_infoContent.m_buttonBtn
end

BoardInfoContent = {}
BoardInfoContent.__index = BoardInfoContent
BoardInfoContent.GroupCellTitleInitPosition = Vector2(0, -32)
BoardInfoContent.GroupCellTitleMiddlePosition = Vector2(59, -32)
BoardInfoContent.GroupCellCountdownInitPosition = Vector2(0, -81)
BoardInfoContent.GroupCellCountdownMiddlePosition = Vector2(59, -81)
BoardInfoContent.SpriteType = {
  Normal = 1,
  EnergyBoost_1 = 2,
  EnergyBoost_2 = 3,
  EnergyBoost_3 = 4
}
BoardInfoContent.SpriteGroupImageKey = {
  [BoardInfoContent.SpriteType.Normal] = {
    TitleFrame = ImageFileConfigName.info_title_normal,
    InfoBg = ImageFileConfigName.info_bg_normal,
    ItemTip = ImageFileConfigName.info_detail_normal
  },
  [BoardInfoContent.SpriteType.EnergyBoost_1] = {
    TitleFrame = ImageFileConfigName.info_title_energy_boost,
    InfoBg = ImageFileConfigName.info_bg_energy_boost,
    ItemTip = ImageFileConfigName.info_detail_energy_boost
  },
  [BoardInfoContent.SpriteType.EnergyBoost_2] = {
    TitleFrame = ImageFileConfigName.info_title_energy_boost_2,
    InfoBg = ImageFileConfigName.info_bg_energy_boost_2,
    ItemTip = ImageFileConfigName.info_detail_energy_boost_2
  },
  [BoardInfoContent.SpriteType.EnergyBoost_3] = {
    TitleFrame = ImageFileConfigName.info_title_energy_boost_3,
    InfoBg = ImageFileConfigName.info_bg_energy_boost_3,
    ItemTip = ImageFileConfigName.info_detail_energy_boost_3
  }
}

function BoardInfoContent:Init(infoBar, boardModel)
  if BoardInfoContent.SpriteGroupOutlineColor == nil then
    BoardInfoContent.SpriteGroupOutlineColor = {
      [BoardInfoContent.SpriteType.Normal] = UIUtil.ConvertHexColor2CSColor("58597E"),
      [BoardInfoContent.SpriteType.EnergyBoost_1] = UIUtil.ConvertHexColor2CSColor("8536A2"),
      [BoardInfoContent.SpriteType.EnergyBoost_2] = UIUtil.ConvertHexColor2CSColor("C63D72"),
      [BoardInfoContent.SpriteType.EnergyBoost_3] = UIUtil.ConvertHexColor2CSColor("C83020")
    }
  end
  self.m_infoBar = infoBar
  self.m_boardModel = boardModel
  self.m_spriteType = BoardInfoContent.SpriteType.Normal
  self.m_descriptionOriginalWidth = self.m_descriptionText.transform.sizeDelta.x
  if LocalizationModel:GetCurLanguageInString() == "KO" then
    self.m_descriptionText.lineSpacing = 1.2
  end
  EventDispatcher.AddListener(EEventType.ItemOpened, self, self.OnItemOpened)
  EventDispatcher.AddActiveListener(EEventType.OnAdEnd, self, self.OnAdEnd)
  EventDispatcher.AddListener(EEventType.EnergyBoostModeChanged, self, self._UpdateSpriteGroup)
  self:_InitSpriteGroup()
  self:UpdatePerSecond()
end

function BoardInfoContent:OnItemOpened(message)
  if self.m_itemModel == message.item then
    self:UpdateContent(self.m_itemModel)
  end
end

function BoardInfoContent:UpdateContent(itemModel)
  if self.m_itemModel ~= itemModel then
    self:_ResetButtonEffect()
    local components = {
      ItemBubble
    }
    for _, compType in ipairs(components) do
      local sourceBubble = self.m_itemModel and self.m_itemModel:GetComponent(compType)
      if sourceBubble ~= nil then
        sourceBubble:SetLockBreak(false)
      end
      local targetBubble = itemModel and itemModel:GetComponent(compType)
      if targetBubble then
        targetBubble:SetLockBreak(true)
      end
    end
  end
  self.m_itemModel = itemModel
  self:_UpdateSpriteGroup()
  if itemModel ~= nil then
    self.m_itemTipButton.gameObject:SetActive(true)
    local itemBubble = itemModel:GetComponent(ItemBubble)
    local itemCobweb = itemModel:GetComponent(ItemCobweb)
    local itemTemp = itemModel:GetComponent(ItemTemp)
    if itemBubble ~= nil then
      self.m_itemTipButton:UpdateItemType(itemBubble:GetInnerItemCode(), ItemDetailWindowMode.Normal)
    elseif itemCobweb ~= nil then
      self.m_itemTipButton:UpdateItemType(itemCobweb:GetInnerItemCode(), ItemDetailWindowMode.Normal)
    elseif itemTemp ~= nil then
      self.m_itemTipButton:UpdateItemType(itemTemp:GetInnerItemCode(), ItemDetailWindowMode.Temp)
    else
      self.m_itemTipButton:UpdateItemType(itemModel:GetType(), ItemDetailWindowMode.Normal)
    end
    self.m_itemTipButton:UpdateReference(ItemDetailWindowReference.BoardInfoBar)
  end
  if itemModel ~= nil and self.m_boardModel:CanItemSell(itemModel) then
    local sellingPrice = itemModel:GetSellingPrice()
    if 0 < sellingPrice then
      self.m_sellGo:SetActive(true)
      self.m_removeGo:SetActive(false)
      self.m_removeUpperGo:SetActive(false)
      self.m_sellCostText.text = "+" .. sellingPrice
    else
      self.m_sellGo:SetActive(false)
      self.m_removeGo:SetActive(true)
      self.m_removeUpperGo:SetActive(false)
    end
  else
    self.m_sellGo:SetActive(false)
    self.m_removeGo:SetActive(false)
    self.m_removeUpperGo:SetActive(false)
  end
  local itemSpread = itemModel and itemModel:GetComponent(ItemSpread)
  if itemSpread == nil or itemSpread:GetState() ~= ItemSpreadState.Closed then
    self.m_openGo:SetActive(false)
  elseif not self.m_boardModel:HasOpeningItem() then
    self.m_openGo:SetActive(true)
    self.m_openCostText.text = TimeUtil.ParseTimeDescription(itemSpread:GetOpenDuration(), 2, false, true)
  end
  self.m_adSkip = false
  self.m_adUnlock = false
  local showSkip, speedUpCost = ItemModelHelper.GetSkipInfo(self.m_itemModel)
  self.m_showSkip = showSkip
  self.m_skipGo:SetActive(showSkip)
  if showSkip then
    if 0 < speedUpCost then
      self.m_adSkip = GM.AdModel:CanShowAd(EAdType.SpeedUp, speedUpCost)
    end
    self.m_skipCountdown.gameObject:SetActive(true)
  end
  local itemBubble = itemModel and itemModel:GetComponent(ItemBubble)
  self.m_showUnlock = itemBubble ~= nil
  self.m_unlockGo:SetActive(self.m_showUnlock)
  if self.m_showUnlock then
    local breakCost = itemBubble:GetBreakCost()
    if 0 < breakCost then
      self.m_adUnlock = GM.AdModel:CanShowAd(EAdType.Bubble, breakCost)
    end
  end
  local bTutorial = GM.TutorialModel:HasAnyStrongTutorialOngoing()
  self.m_showBubbleRemove = self.m_showUnlock and not bTutorial
  self.m_bubbleRemoveGo:SetActive(self.m_showBubbleRemove)
  self.m_swallowInfo1.gameObject:SetActive(false)
  self.m_swallowInfo2.gameObject:SetActive(false)
  local itemSwallow = itemModel and itemModel:GetComponent(ItemSwallow)
  if itemSwallow ~= nil then
    for index, info in ipairs(itemSwallow:GetSwallowInfo()) do
      local swallowInfoCell = self["m_swallowInfo" .. index]
      swallowInfoCell.gameObject:SetActive(true)
      swallowInfoCell:UpdateContent(info)
    end
  end
  local itemAccelerate = itemModel and itemModel:GetComponent(ItemAccelerate)
  self.m_activateGo:SetActive(false)
  if itemAccelerate ~= nil and not itemAccelerate:IsActivated() then
    self.m_activateGo:SetActive(true)
  end
  self.m_accelerateInfoGo:SetActive(false)
  if itemAccelerate ~= nil and itemAccelerate:IsActivated() then
    self.m_accelerateInfoGo:SetActive(true)
  end
  local itemSplit = itemModel and itemModel:GetComponent(ItemSplit)
  UIUtil.SetActive(self.m_splitCountContentGo, itemSplit ~= nil)
  if itemSplit ~= nil then
    self.m_splitCountText.text = itemSplit:GetSplitUseCount()
  end
  local itemTemp = itemModel and itemModel:GetComponent(ItemTemp)
  self.m_showTransform = itemTemp ~= nil
  self.m_transformGo:SetActive(self.m_showTransform)
  self:_UpdateText()
  self:UpdatePerSecond()
  self:UpdateAdButton()
  self:_AdjustDescription()
end

function BoardInfoContent:_InitSpriteGroup()
  self.m_mapSpriteGroup = {}
  for type, mapKeys in pairs(BoardInfoContent.SpriteGroupImageKey) do
    self.m_mapSpriteGroup[type] = {}
    for k, v in pairs(mapKeys) do
      SpriteUtil.LoadSprite(v, function(sprite)
        self.m_mapSpriteGroup[type][k] = sprite
      end)
    end
  end
  self.m_mapSpriteGroupUpdateImg = {
    TitleFrame = self.m_titleFrameImg,
    InfoBg = self.m_infoBgImg,
    ItemTip = self.m_itemTipImg
  }
  self.m_arrSpriteGroupUpdateOutline = {
    self.m_titleOutline
  }
end

function BoardInfoContent:_UpdateSpriteGroup()
  local spriteType = self:_GetSpriteType(self.m_itemModel)
  if spriteType ~= self.m_spriteType then
    self.m_spriteType = spriteType
    for k, img in pairs(self.m_mapSpriteGroupUpdateImg) do
      if self.m_mapSpriteGroup[spriteType][k] ~= nil then
        img.sprite = self.m_mapSpriteGroup[spriteType][k]
      else
        SpriteUtil.SetImage(img, BoardInfoContent.SpriteGroupImageKey[spriteType][k])
      end
    end
    local color = BoardInfoContent.SpriteGroupOutlineColor[spriteType]
    for _, outline in ipairs(self.m_arrSpriteGroupUpdateOutline) do
      outline:SetColor(color)
    end
  end
end

function BoardInfoContent:_GetSpriteType(itemModel)
  if itemModel == nil then
    return BoardInfoContent.SpriteType.Normal
  end
  if GM.EnergyBoostModel:CanEnergyBoost(itemModel:GetType()) then
    local ratio = GM.EnergyBoostModel:GetEnergyBoostPowerRatio()
    return BoardInfoContent.SpriteType["EnergyBoost_" .. tostring(ratio)]
  end
  return BoardInfoContent.SpriteType.Normal
end

function BoardInfoContent:UpdateAdButton()
  self.m_adGo:SetActive(self.m_adSkip or self.m_adUnlock)
  self.m_skipTitle.anchoredPosition = self.m_adSkip and BoardInfoContent.GroupCellTitleMiddlePosition or BoardInfoContent.GroupCellTitleInitPosition
  self.m_skipCountdown.anchoredPosition = self.m_adSkip and BoardInfoContent.GroupCellCountdownMiddlePosition or BoardInfoContent.GroupCellCountdownInitPosition
  self.m_unlockTitle.anchoredPosition = self.m_adUnlock and BoardInfoContent.GroupCellTitleMiddlePosition or BoardInfoContent.GroupCellTitleInitPosition
  local activeChildNumber = 0
  for index = 1, self.m_buttonGroup.transform.childCount do
    local child = self.m_buttonGroup.transform:GetChild(index - 1)
    if child.gameObject.activeSelf then
      activeChildNumber = activeChildNumber + 1
    end
  end
  self.m_sellTitle:SetActive(activeChildNumber <= 2)
end

function BoardInfoContent:UpdatePerSecond()
  if self.m_itemModel == nil then
    return
  end
  if self.m_showSkip then
    local needSkip, speedUpCost = ItemModelHelper.GetSkipInfo(self.m_itemModel)
    if needSkip then
      if not self.m_adSkip and 0 < speedUpCost and GM.AdModel:CanShowAd(EAdType.SpeedUp, speedUpCost) then
        self.m_adSkip = true
        self:UpdateAdButton()
        self:_AdjustDescription()
      end
      self.m_skipCostText.text = 0 < speedUpCost and speedUpCost or GM.GameTextModel:GetText("tutorial_free_btn")
      local itemSpread = self.m_itemModel:GetComponent(ItemSpread)
      local itemTransform = self.m_itemModel:GetComponent(ItemTransform)
      local restDuration
      if itemSpread ~= nil then
        restDuration = itemSpread:GetTimerDuration() + itemSpread:GetStartTimer() - GM.GameModel:GetServerTime()
      else
        restDuration = itemTransform:GetDuration() + itemTransform:GetStartTimer() - GM.GameModel:GetServerTime()
      end
      self.m_skipCountdownText.text = TimeUtil.ParseTimeDescription(restDuration, 2, false, false)
    else
      self:UpdateContent(self.m_itemModel)
    end
  end
  if self.m_showUnlock then
    local itemBubble = self.m_itemModel:GetComponent(ItemBubble)
    local breakCost, bSale, oriCost = itemBubble:GetBreakCost()
    self.m_unlockCostText.text = 0 < breakCost and breakCost or GM.GameTextModel:GetText("tutorial_free_btn")
    UIUtil.SetActive(self.m_oriPriceText.transform.gameObject, bSale)
    if bSale then
      self.m_oriPriceText.text = oriCost
    end
  end
  if self.m_accelerateInfoGo.activeSelf then
    local itemAccelerate = self.m_itemModel:GetComponent(ItemAccelerate)
    local restDuration = itemAccelerate:GetTimerDuration() + itemAccelerate:GetStartTimer() - GM.GameModel:GetServerTime()
    self.m_accelerateInfoText.text = TimeUtil.ParseTimeDescription(restDuration, 2, false, false)
  end
  if self.m_transformGo.activeSelf then
    local itemTemp = self.m_itemModel:GetComponent(ItemTemp)
    local restDuration = itemTemp:GetTimerDuration() + itemTemp:GetStartTimer() - GM.GameModel:GetServerTime()
    self.m_transformCountdownText.text = TimeUtil.ParseTimeDescription(restDuration, 2, false, false)
  end
  if GameConfig.IsTestMode() and self.m_testText.gameObject.activeSelf then
    local itemType = self.m_itemModel:GetType()
    local orderItem = GM.MainBoardModel:GetOrderModel(OrderModelType.Slot):GetItemCodeConfigMap()
    local diffScore = orderItem[itemType] and orderItem[itemType].DiffScore or "nil"
    self.m_testText.text = "type:" .. itemType .. " DS:" .. tostring(diffScore)
  end
end

function BoardInfoContent:OnDestroy()
  EventDispatcher.RemoveTarget(self)
end

function BoardInfoContent:_GetTitle(itemType)
  if itemType == nil then
    return ""
  end
  local levelSuffix
  if self:_IsItemInChain(itemType) then
    local level = GM.ItemDataModel:GetChainLevel(itemType)
    levelSuffix = GM.GameTextModel:GetText("hint_title_level", level)
  end
  local title = GM.GameTextModel:GetText(ItemNameDefinition.GetName(itemType))
  if levelSuffix ~= nil then
    title = title .. " " .. levelSuffix
  end
  return title
end

function BoardInfoContent:_IsItemInChain(itemType)
  local chainId = GM.ItemDataModel:GetChainId(itemType)
  return GM.ItemDataModel:GetChainMaxLevel(chainId) ~= 1
end

function BoardInfoContent:_GetDescription(itemModel)
  local gameTextModel = GM.GameTextModel
  if itemModel == nil then
    return gameTextModel:GetText("hint_desc_blank")
  end
  local itemCobweb = itemModel:GetComponent(ItemCobweb)
  if itemCobweb ~= nil then
    local tempItem = ItemModelFactory.CreateWithCode(nil, nil, itemCobweb:GetInnerItemCode(), false)
    return self:_GetDescription(tempItem)
  end
  if itemModel:GetComponent(ItemTemp) ~= nil then
    return gameTextModel:GetText("temp_item_desc")
  end
  local itemGeneratorFactory = itemModel:GetComponent(ItemGeneratorFactory)
  if itemGeneratorFactory ~= nil and itemGeneratorFactory:IsGeneratorFactoryOpen() then
    return itemGeneratorFactory:GetBoardInfoDescriptionText()
  end
  local itemSpread = itemModel:GetComponent(ItemSpread)
  if itemSpread ~= nil and itemSpread:GetState() == ItemSpreadState.Initializing then
    local beforeKey = "item_" .. itemModel:GetType() .. "_desc_before"
    if gameTextModel:HasText(beforeKey) then
      return gameTextModel:GetText(beforeKey)
    end
  end
  local itemAccelerate = itemModel:GetComponent(ItemAccelerate)
  if itemAccelerate ~= nil and itemAccelerate:IsActivated() then
    local key = "item_" .. itemModel:GetType() .. "_desc_activated"
    return gameTextModel:GetText(key)
  end
  local specialKey, listParam = GM.ItemDataModel:GetItemDescTextKey(itemModel:GetType())
  if specialKey ~= nil then
    return gameTextModel:GetText(specialKey, table.unpack(listParam))
  end
  local itemBubble = itemModel:GetComponent(ItemBubble)
  if itemBubble ~= nil then
    if itemBubble:IsInstant() then
      local tempItem = ItemModelFactory.CreateWithCode(nil, nil, itemBubble:GetInnerItemCode(), false)
      return self:_GetDescription(tempItem)
    elseif self.m_showBubbleRemove then
      return gameTextModel:GetText("hint_desc_in_bubble_delete")
    else
      return gameTextModel:GetText("hint_desc_in_bubble")
    end
  end
  local itemDescKey
  local needLevelDescKey = true
  if itemSpread ~= nil then
    if itemSpread:GetOpenDuration() ~= nil then
      local state = itemSpread:GetState()
      if state == ItemSpreadState.Closed then
        local specialKey = "item_" .. itemModel:GetType() .. "_closed_desc"
        if gameTextModel:HasText(specialKey) then
          return gameTextModel:GetText(specialKey)
        end
        if self.m_boardModel:HasOpeningItem() then
          itemDescKey = "hint_desc_cannot_open"
        else
          itemDescKey = "hint_desc_open"
        end
      elseif state == ItemSpreadState.Opening then
        local specialKey = "item_" .. itemModel:GetType() .. "_opening_desc"
        if gameTextModel:HasText(specialKey) then
          return gameTextModel:GetText(specialKey)
        end
        itemDescKey = "hint_desc_opening"
      else
        if state == ItemSpreadState.Opened then
          local specialKey = "item_" .. itemModel:GetType() .. "_opened_desc"
          if gameTextModel:HasText(specialKey) then
            return gameTextModel:GetText(specialKey)
          end
        end
        if itemSpread:IsChestUsedOnce() then
          needLevelDescKey = false
        end
      end
    end
    if itemDescKey == nil then
      if itemSpread:IsAutoSpread() then
        if not itemSpread:IsDisposable() then
          itemDescKey = "hint_desc_auto_spawn"
        end
      else
        itemDescKey = "hint_desc_tap_spawn"
      end
    end
  end
  local desc
  if needLevelDescKey then
    if itemModel:GetMergedType() == nil then
      desc = gameTextModel:GetText("hint_desc_max_level")
      if itemDescKey ~= nil then
        desc = gameTextModel:GetText(itemDescKey) .. " " .. desc
      end
    else
      desc = gameTextModel:GetText("hint_desc_merge")
      if itemDescKey ~= nil then
        desc = desc .. " " .. gameTextModel:GetText(itemDescKey)
      end
    end
  else
    desc = itemDescKey and gameTextModel:GetText(itemDescKey) or ""
  end
  return desc
end

function BoardInfoContent:_GetSkipInfo(itemModel)
  if itemModel == nil then
    return false, nil
  end
  local itemTransform = itemModel:GetComponent(ItemTransform)
  if itemTransform ~= nil and itemTransform:GetDuration() ~= nil then
    return true, itemTransform:GetSpeedUpCost()
  end
  local itemSpread = itemModel:GetComponent(ItemSpread)
  if itemSpread ~= nil and (itemSpread:GetState() == ItemSpreadState.Initializing or itemSpread:GetState() == ItemSpreadState.Opening or itemSpread:GetState() == ItemSpreadState.Opened and itemSpread:GetItemRestNumber() == 0) then
    return true, itemSpread:GetSpeedUpCost()
  end
  return false, nil
end

function BoardInfoContent:_UpdateText(itemModel)
  itemModel = itemModel or self.m_itemModel
  local itemType = itemModel and itemModel:GetType()
  if itemType == ItemType.Cobweb then
    itemType = itemModel:GetComponent(ItemCobweb):GetInnerItemCode()
  elseif itemType == ItemType.Temp then
    itemType = itemModel:GetComponent(ItemTemp):GetInnerItemCode()
  elseif itemType == ItemType.Bubble then
    itemType = itemModel:GetComponent(ItemBubble):GetInnerItemCode()
  end
  self.m_titleText.text = self:_GetTitle(itemType)
  UIUtil.SetSizeDelta(self.m_titleText.gameObject.transform, math.min(343, self.m_titleText.preferredWidth))
  self.m_descriptionText.text = self:_GetDescription(itemModel)
end

function BoardInfoContent:_AdjustDescription()
  local scale
  if self.m_showSkip then
    scale = 0.8
    self.m_buttonGroup.transform.anchoredPosition = Vector2(350, 20)
  else
    local activeChildNumber = 0
    for index = 1, self.m_buttonGroup.transform.childCount do
      local child = self.m_buttonGroup.transform:GetChild(index - 1)
      if child.gameObject.activeSelf then
        activeChildNumber = activeChildNumber + 1
      end
    end
    scale = 2 < activeChildNumber and 0.9 or 1
    self.m_buttonGroup.transform.anchoredPosition = Vector2(350, 7)
  end
  self.m_buttonGroup.transform.localScale = Vector3(scale, scale, 1)
  LayoutRebuilder.ForceRebuildLayoutImmediate(self.m_buttonGroup.transform)
  local adjustSize = Vector2(self.m_descriptionOriginalWidth - self.m_buttonGroup.preferredWidth * scale, self.m_descriptionText.transform.sizeDelta.y)
  self.m_descriptionText.transform.sizeDelta = adjustSize
end

function BoardInfoContent:OnSellButtonClicked()
  if self.m_disableSellButton then
    return
  end
  if self.m_itemModel:IsRare() then
    local itemType = self.m_itemModel:GetType()
    GM.UIManager:OpenView(UIPrefabConfigName.DeleteItemConfirmWindow, self.m_itemModel, function()
      if self.m_itemModel == nil then
        Log.Assert(false, "[BoardInfoContent]itemModel\228\184\141\232\131\189\228\184\186\231\169\186,type:" .. tostring(itemType))
        return
      end
      itemType = self.m_itemModel:GetType()
      self:_SellItem(self.m_itemModel)
      GM.BIManager:LogUI(EBIType.DeleteItemConfirmOkClick, itemType, EBIReferType.UserClick)
    end)
  else
    self:_SellItem(self.m_itemModel)
  end
  GM.AudioModel:PlayEffect(AudioFileConfigName.sfxCommonDelete)
end

function BoardInfoContent:_SellItem(itemModel)
  self.m_boardModel:SellItem(self.m_itemModel)
  self.m_infoBar:OnItemSold(self.m_itemModel)
end

function BoardInfoContent:OnOpenButtonClicked()
  self.m_boardModel:OpenItem(self.m_itemModel)
  self:UpdateContent(self.m_itemModel)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxOpenBox)
  EventDispatcher.DispatchEvent(EEventType.TryStartBoardPromptEvent)
end

function BoardInfoContent:OnSkipButtonClicked()
  self.m_boardModel:SpeedUpItem(self.m_itemModel)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  self:UpdateContent(self.m_itemModel)
end

function BoardInfoContent:OnRemoveBubbleButtonClicked()
  local itemComponent = ItemBubble
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
  GM.UIManager:OpenView(UIPrefabConfigName.RemoveBubbleConfirmWindow, self.m_itemModel, itemComponent, function(itemComponent)
    local itemBubble = self.m_itemModel:GetComponent(itemComponent)
    self:OnSkipButtonClicked()
    GM.BIManager:LogUI(EBIType.RemoveBubbleConfirmClick, itemBubble and itemBubble:GetInnerItemCode() or "nil", EBIReferType.UserClick)
  end)
end

function BoardInfoContent:OnUnlockButtonClicked()
  self.m_boardModel:BreakItem(self.m_itemModel)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
end

function BoardInfoContent:OnAdButtonClicked()
  if self.m_adSkip then
    GM.AdModel:ShowAd(EAdType.SpeedUp, self.m_itemModel:GetCode())
  elseif self.m_adUnlock then
    self.m_itemModel:GetComponent(ItemBubble):SetLockBreak(true)
    GM.AdModel:ShowAd(EAdType.Bubble, self.m_itemModel:GetCode())
  end
end

function BoardInfoContent:OnActivateButtonClicked()
  self.m_boardModel:ActivateItem(self.m_itemModel)
  self:UpdateContent(self.m_itemModel)
end

function BoardInfoContent:OnTransformButtonClicked()
  GM.UIManager:OpenView(UIPrefabConfigName.RemoveTempConfirmWindow, self.m_itemModel, function()
    self:OnSkipButtonClicked()
  end)
end

function BoardInfoContent:OnAdEnd(msg)
  if msg.bSuccess then
    if msg.eAdType == EAdType.Bubble then
      self.m_boardModel:BreakItem(self.m_itemModel, true)
    elseif msg.eAdType == EAdType.SpeedUp then
      self.m_boardModel:SpeedUpItem(self.m_itemModel, true)
    end
  elseif msg.eAdType == EAdType.Bubble then
    local components = {
      ItemBubble
    }
    for _, compType in ipairs(components) do
      local itemComponent = self.m_itemModel:GetComponent(compType)
      if itemComponent then
        itemComponent:SetLockBreak(false)
      end
    end
  end
  self:UpdateContent(self.m_itemModel)
end

function BoardInfoContent:SetHandEffectActive(active)
  self.m_handEffectGo:SetActive(active)
end

function BoardInfoContent:SetDisableSellButton(disabled)
  self.m_disableSellButton = disabled
end

function BoardInfoContent:PlayOpenButtonEffect()
  if self.m_openAnimator:GetCurrentAnimatorStateInfo(0):IsName("Init") then
    self.m_openAnimator:SetTrigger("Effect")
  end
end

function BoardInfoContent:PlaySkipButtonEffect()
  if self.m_skipAnimator:GetCurrentAnimatorStateInfo(0):IsName("Init") then
    self.m_skipAnimator:SetTrigger("Effect")
  end
end

function BoardInfoContent:_ResetButtonEffect()
  if self.m_openAnimator.gameObject.activeInHierarchy then
    self.m_openAnimator:Update(10)
  end
  if self.m_skipAnimator.gameObject.activeInHierarchy then
    self.m_skipAnimator:Update(10)
  end
  self.m_openButtonEffectGo:SetActive(false)
  self.m_skipButtonEffectGo:SetActive(false)
end

BoardRemoveContent = {}
BoardRemoveContent.__index = BoardRemoveContent

function BoardRemoveContent:Init(infoBar, boardModel)
  self.m_infoBar = infoBar
  self.m_boardModel = boardModel
end

function BoardRemoveContent:UpdateContent(itemModel)
  self.m_itemModel = itemModel
  if itemModel == nil then
    self.m_removeContentGo:SetActive(false)
    self.m_blankTextGo:SetActive(true)
  else
    self.m_removeContentGo:SetActive(true)
    self.m_blankTextGo:SetActive(false)
    local spriteName = GM.ItemDataModel:GetSpriteName(itemModel:GetType())
    SpriteUtil.SetImage(self.m_iconImg, spriteName, true)
    local sellingPrice = itemModel:GetSellingPrice()
    self.m_descriptionText.text = GM.GameTextModel:GetText(0 < sellingPrice and "hint_sold" or "hint_removed")
    if sellingPrice ~= 0 then
      self.m_sellSpecialGo:SetActive(true)
      self.m_undoText.text = "-" .. sellingPrice
    else
      self.m_sellSpecialGo:SetActive(false)
    end
  end
end

function BoardRemoveContent:OnUndoButtonClicked()
  self.m_boardModel:UndoSellItem(self.m_itemModel)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxButtonClick)
end
