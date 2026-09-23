GeneratorFactoryDetailCell = {}
GeneratorFactoryDetailCell.__index = GeneratorFactoryDetailCell

function GeneratorFactoryDetailCell:Init(genType, arrowPos, itemCell)
  self.m_initialized = true
  self.m_dt = 0
  self.m_canPrompt = true
  self:UpdateView(genType, arrowPos, itemCell)
end

function GeneratorFactoryDetailCell:OnDestroy()
  Scheduler.UnscheduleTarget(self)
end

function GeneratorFactoryDetailCell:OnDisable()
  if self.m_initialized then
    self:UpdateSlider()
  end
end

function GeneratorFactoryDetailCell:Update(dt)
  if not self.m_canPrompt then
    return
  end
  self.m_dt = self.m_dt or 0
  self.m_dt = self.m_dt + dt
  if self.m_dt > 2 then
    local pos = self:_GetPromptItemPos()
    if pos ~= nil then
      local localPos = self.transform:InverseTransformPoint(pos) + Vector3(8, -39, 0)
      self.m_gestureTapLuaTable.gameObject.transform.localPosition = localPos
      UIUtil.SetActive(self.m_gestureTapLuaTable.gameObject, true)
    end
    self.m_canPrompt = false
  end
end

function GeneratorFactoryDetailCell:UpdateView(genType, arrowPos, itemCell)
  self.m_genType = genType
  self.m_itemCell = itemCell
  local iconName = RewardApi.GetRewardIconNameAndIsSetNativeSize(genType)
  SpriteUtil.SetImage(self.m_tokenImg, iconName, true)
  SpriteUtil.SetImage(self.m_tokenImg2, iconName, true)
  local tb = GM.MainBoardModel:GetGenDataByType(genType)
  local tbData = tb.data
  self.m_contentRectTrans.gameObject:RemoveChildren()
  self.m_items = {}
  local k = tonumber(genType)
  local ct = k % 100
  for i = k - ct + 1, k - 1 do
    local strCode = tostring(i)
    self.m_items[strCode] = Object.Instantiate(self.m_itemPrefab, self.m_contentRectTrans):GetLuaTable()
    local num = 0
    if tbData ~= nil and not Table.IsEmpty(tbData.items) then
      num = tbData.items[strCode] or 0
    end
    self.m_items[strCode]:Init(self, genType, strCode, num)
  end
  self.m_itemScrollViewScrollRect.horizontal = 5 < ct
  local pivotX = 5 < ct and 0 or 0.5
  self.m_contentRectTrans.pivot = Vector2(pivotX, 0.5)
  local posX = 5 < ct and -345.0843 or 0
  self.m_contentRectTrans.anchoredPosition = Vector2(posX, 0)
  local score = 0
  if tbData ~= nil and tbData.score ~= nil then
    score = tbData.score
  end
  self.m_progressText.text = string.format("%d/%d", score, tb.maxScore)
  self.m_progressSlider.value = score / tb.maxScore
  self.m_arrowUpRectTrans.anchoredPosition = arrowPos
  self.m_arrowDownRectTrans.anchoredPosition = arrowPos
  UIUtil.SetActive(self.m_arrowUpRectTrans.gameObject, 0 < arrowPos.y)
  UIUtil.SetActive(self.m_arrowDownRectTrans.gameObject, 0 > arrowPos.y)
  self.m_lastScore = score
  self.m_detailCellCanvasGroup.alpha = 0
  self.m_detailCellCanvasGroup:DOFade(1, 0.3):SetDelay(0.1)
  self:RestartPrompt()
end

function GeneratorFactoryDetailCell:UpdateSlider()
  local tb = GM.MainBoardModel:GetGenDataByType(self.m_genType)
  local tbData = tb.data
  local curScore = 0
  if tbData ~= nil and tbData.score ~= nil then
    curScore = tbData.score
  end
  self.m_progressText.text = string.format("%d/%d", curScore, tb.maxScore)
  if curScore >= tb.maxScore then
    if self.m_sliderTween then
      self.m_sliderTween:Kill()
      self.m_sliderTween = nil
    end
    self.m_sliderTween = DOTween.Sequence()
    GM.UIManager:SetEventLock(true)
    local factoryModel = GM.MainBoardModel:GetItemGeneratorFactoryModel()
    factoryModel:TryReward(self.m_genType)
    local rewards = {
      {
        [PROPERTY_TYPE] = self.m_genType,
        [PROPERTY_COUNT] = 1
      }
    }
    self.m_sliderTween:Append(self.m_progressSlider:DOValue(1, 0.3))
    self.m_sliderTween:AppendCallback(function()
      self.m_animator:Play("shake_token", 0, 0)
    end)
    self.m_sliderTween:AppendInterval(0.25)
    self.m_sliderTween:AppendCallback(function()
      self:RestartPrompt()
      self.m_progressSlider.value = 0
      local newProgress = (curScore - tb.maxScore) / tb.maxScore
      self.m_progressText.text = string.format("%d/%d", curScore - tb.maxScore, tb.maxScore)
      self.m_progressSlider:DOValue(newProgress, 0.2)
      local arrWorldPos = {
        self.m_tokenImg.transform.position
      }
      local viewData = {arrWorldPos = arrWorldPos, floatUp = true}
      RewardApi.AcquireRewardsInView(rewards, viewData)
      local inventoryWindow = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.InventoryWindow)
      if inventoryWindow ~= nil then
        inventoryWindow:AddDisplayRewards(rewards)
      end
      GM.UIManager:SetEventLock(false)
    end)
  else
    self.m_itemCell:UpdateSlider()
    self.m_progressSlider:DOValue(curScore / tb.maxScore, 0.3)
  end
  self.m_itemCell:UpdateContent()
  EventDispatcher.DispatchEvent(EEventType.GeneratorFactoryTabButtonRedUpdate)
end

function GeneratorFactoryDetailCell:PlayFlyItemAni(itemType, score)
  local startPos = self.m_items[tostring(itemType)]:GetIconPosition()
  local endPos = self.m_endPosRectTrans.position
  local midPos = Vector2((startPos.x + endPos.x) * 0.5, (startPos.y + endPos.y) * 0.5)
  local controlPos = Vector2(midPos.x - 80, midPos.y - 80)
  local config = {
    control1 = controlPos,
    control2 = controlPos,
    to = Vector2(endPos.x, endPos.y),
    from = Vector2(startPos.x, startPos.y),
    posType = BezierPosType.World,
    easeType = BezierEaseType.Sin
  }
  self.m_itemCell:UpdateContent()
  EventDispatcher.DispatchEvent(EEventType.GeneratorFactoryTabButtonRedUpdate)
  local flyGo = Object.Instantiate(self.m_flyItemGo, self.gameObject.transform)
  local flyView = flyGo:GetLuaTable()
  flyView:UpdateContent(itemType, score)
  flyView:MoveToTarget(config, 0.4, function()
    flyView:PlayArriveAni()
    DelayExecuteFuncInView(function()
      flyGo:RemoveSelf()
    end, 1.5, self)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxProgressCrush)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    self:UpdateSlider()
  end)
end

function GeneratorFactoryDetailCell:CancelPrompt()
  self.m_canPrompt = false
  self.m_dt = 0
  UIUtil.SetActive(self.m_gestureTapLuaTable.gameObject, false)
end

function GeneratorFactoryDetailCell:RestartPrompt()
  self.m_dt = 0
  self.m_canPrompt = true
  UIUtil.SetActive(self.m_gestureTapLuaTable.gameObject, false)
end

function GeneratorFactoryDetailCell:_OnScrollChange()
  if self.m_dt > 0.3 or not self.m_canPrompt then
    self:RestartPrompt()
  end
end

function GeneratorFactoryDetailCell:_GetPromptItemPos()
  for _, item in pairs(self.m_items) do
    if item:HasCount() then
      return item:GetIconPosition()
    end
  end
end

function GeneratorFactoryDetailCell:GetItemCell()
  return self.m_itemCell
end

FactoryFlyItem = {}
FactoryFlyItem.__index = FactoryFlyItem

function FactoryFlyItem:OnDisable()
  UIUtil.SetActive(self.gameObject, false)
end

function FactoryFlyItem:UpdateContent(itemType, Score)
  local iconName = RewardApi.GetRewardIconNameAndIsSetNativeSize(itemType)
  SpriteUtil.SetImage(self.m_iconImg, iconName, true)
  self.m_scoreText.text = string.format("%s%d", "+", Score)
  self:_Reset()
end

function FactoryFlyItem:_Reset()
  self.m_flyItemAnimator:Play("FlyItemReset", 0, 0)
  UIUtil.SetActive(self.gameObject, true)
end

function FactoryFlyItem:PlayArriveAni()
  self.m_flyItemAnimator:Play("FlyItem", 0, 0)
  UIUtil.SetActive(self.gameObject, true)
end

function FactoryFlyItem:MoveToTarget(config, during, callback)
  self.m_bezier:MoveTo(config, during, callback)
end
