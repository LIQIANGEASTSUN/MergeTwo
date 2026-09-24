DropActivityBoard = {}
DropActivityBoard.__index = DropActivityBoard
local segments = 50
local maxListWaitDropCode = 40
local unLockListWaitDropCode = 30
local itemSpawnInterval = 0.1
local MergeDefaultTime = 0.3
local MergeDownTime = 0.04
local MinMergeTime = 0.1
local SpeicalSpreadSpeed = 2000
local StableMergeTime = 1
local waitMergeDropTime = 1
local down = 1500
local itemInitialVelocityArray = {
  Vector2(-500, -down),
  Vector2(500, -down),
  Vector2(0, -down)
}
DropActivityBoard.BoardState = {
  Stable = 1,
  DropMergeWaitMerge = 2,
  DropMergeFindLine = 3,
  DropMergeMerge = 4,
  FinishDropRound = 5
}
DropActivityBoard.EffectLevel = {
  1,
  1,
  2,
  2,
  3,
  4,
  4
}

function DropActivityBoard:Init(model, mainWindow)
  self.m_model = model
  self.m_mainWindow = mainWindow
  self.m_DropItemFactoryLuaTable:Init()
  self.m_nTimeSinceLastDropItem = itemSpawnInterval
  self.m_curMergeSourceItem = nil
  self.m_curMergeTargetItem = nil
  self.m_curMergeTime = MergeDefaultTime
  self.m_ListWaitDropCode = {}
  self.m_totalScore = 0
  self.m_flyLockScore = 0
  self.m_stableTime = 0
  self.m_lastDropCodeTime = 0
  self.m_bCanMergeItem = true
  self.m_listSpecialWaitDropCode = {}
  self.m_listWaitSpreadEffect = {}
  self.m_mergeFlyTrans = self.m_mainWindow:GetFlyTrans()
  self.m_bLock = false
  self.m_cacheLuaTable:Init(self)
  self.m_EffectTransSort.sortingOrder = self.m_mainWindow:GetSortingOrder() + 1
  self:LoadRecordItems()
end

function DropActivityBoard:LoadRecordItems()
  local boardInfo = self.m_model:GetBoardData()
  if boardInfo == nil then
    self.m_items = {}
    self:SetState(DropActivityBoard.BoardState.Stable)
    return
  end
  self.m_items = {}
  if boardInfo.items ~= nil then
    for _, itemInfo in ipairs(boardInfo.items) do
      local anchorPos = Vector2(itemInfo.pos.x, itemInfo.pos.y)
      local velocity = itemInfo.velocity
      local code = itemInfo.Code
      local rotate = itemInfo.rotate
      local newItem = self:createItem(code)
      newItem.transform.anchoredPosition = anchorPos
      newItem:SetInitVelocity(Vector2(velocity.x, velocity.y))
      local newRotation = CS.UnityEngine.Vector3(0, 0, rotate or 0)
      newItem.transform.eulerAngles = newRotation
    end
  end
  if boardInfo.waitDropCode ~= nil then
    for _, code in ipairs(boardInfo.waitDropCode) do
      table.insert(self.m_ListWaitDropCode, code)
    end
  end
  if boardInfo.waitSpecialInfo ~= nil then
    for _, info in ipairs(boardInfo.waitSpecialInfo) do
      local reward = info.reward
      local endPos = Vector2(info.endPos.x, info.endPos.y)
      local curPos = Vector2(info.curPos.x, info.curPos.y)
      local time = info.flyTime or 0.25
      local level = info.level or 1
      self:PlayDropSepcialByPos(reward, curPos, endPos, time, level)
    end
  end
  self:SetState(DropActivityBoard.BoardState.DropMergeWaitMerge)
end

function DropActivityBoard:GetState()
  return self.m_state
end

function DropActivityBoard:SetState(state, pData)
  self.m_state = state
  if self.m_state == DropActivityBoard.BoardState.Stable then
    self:SetStable()
  elseif self.m_state == DropActivityBoard.BoardState.DropMergeMerge then
    self:SetDropMergeMerge()
  elseif self.m_state == DropActivityBoard.BoardState.DropMergeFindLine then
    self:SetDropMergeFindLine()
  elseif self.m_state == DropActivityBoard.BoardState.DropMergeWaitMerge then
    self:SetDropMergeWaitMerge()
  elseif self.m_state == DropActivityBoard.BoardState.FinishDropRound then
    self:TryFinishOneRound()
  end
end

function DropActivityBoard:TryFinishOneRound()
  if self.m_totalScore > 0 then
    self.m_mainWindow:TotalScoreFly(self.m_totalScore)
  end
  self.m_totalScore = 0
  self.m_mainWindow:UpdateOneRoundScore(self.m_totalScore)
  self.m_curMergeTime = MergeDefaultTime
  self.m_lastItemCode = nil
  local bTrueStable = true
  for _, item in ipairs(self.m_items) do
    if item:CanMergeItem() == false then
      bTrueStable = false
      item:SetCanMergeItem(true)
    end
  end
  self.m_bCanMergeItem = true
  if bTrueStable and Table.IsEmpty(self.m_ListWaitDropCode) and Table.IsEmpty(self.m_listSpecialWaitDropCode) then
    self:SetState(DropActivityBoard.BoardState.Stable)
  else
    self:SetState(DropActivityBoard.BoardState.DropMergeWaitMerge)
  end
end

function DropActivityBoard:SetStable()
  self.m_stableTime = 0
  self:SaveActivityData()
  EventDispatcher.DispatchEvent(EEventType.DropActivityBoardStable)
  if #self.m_ListWaitDropCode == 0 then
    self.m_mainWindow:SetDropInAnimator(false)
  end
end

function DropActivityBoard:SetDropMergeWaitMerge()
end

function DropActivityBoard:SetDropMergeFindLine(pData)
  if self.m_curMergeSourceItem ~= nil then
    local code = self.m_curMergeSourceItem:GetItemCode()
    local codeConfig = self.m_model:GetItemConfig(code)
    if codeConfig ~= nil then
      local stationItemms = {}
      local mapStationItem = {}
      for _, item in ipairs(self.m_items) do
        if item:IsStationary() and item:CanMergeItem() then
          table.insert(stationItemms, item)
          if mapStationItem[item:GetItemCode()] == nil then
            mapStationItem[item:GetItemCode()] = 0
          end
          mapStationItem[item:GetItemCode()] = mapStationItem[item:GetItemCode()] + 1
        end
      end
      for _, item in ipairs(stationItemms) do
        if self.m_curMergeSourceItem ~= item and item:GetItemCode() == self.m_curMergeSourceItem:GetItemCode() then
          self.m_curMergeTargetItem = item
          self:SetState(DropActivityBoard.BoardState.DropMergeMerge)
          self.m_curMergeTime = math.max(MinMergeTime, self.m_curMergeTime - MergeDownTime)
          return
        end
      end
    end
  end
  self.m_curMergeSourceItem = nil
  self:SetState(DropActivityBoard.BoardState.DropMergeWaitMerge)
end

function DropActivityBoard:SetDropMergeMerge()
  if self.m_curMergeSourceItem == nil or self.m_curMergeTargetItem == nil then
    Log.Assert(false, "\230\142\137\232\144\189\231\139\130\230\172\162\231\138\182\230\128\129\230\156\186\229\136\135\230\141\162\233\148\153\232\175\175\239\188\140 \229\188\186\232\161\140\231\186\160\230\173\163")
    self:SetStable(DropActivityBoard.BoardState.DropMergeWaitMerge)
    return
  end
  local flyEffect = self.m_cacheLuaTable:CreateFlyEffect(self.m_mergeFlyTrans)
  local flyItem = self.m_cacheLuaTable:CreateFlyItem(self.m_mergeFlyTrans)
  
  local function MergeFlyFinish()
    local targetItemCode = self.m_curMergeTargetItem:GetItemCode()
    local MergeItemCode = self.m_model:GetMergeItemCode(targetItemCode)
    local newItem
    if MergeItemCode ~= nil then
      newItem = self:createItem(MergeItemCode)
      newItem.transform.position = self.m_curMergeTargetItem.transform.position
      newItem:PlayShowAct(function()
        self:SetState(DropActivityBoard.BoardState.DropMergeFindLine)
      end)
    else
      DelayExecuteFuncInView(function()
        self:SetState(DropActivityBoard.BoardState.DropMergeWaitMerge)
      end, 0.1, self)
    end
    local level = self.m_model:GetItemLevel(targetItemCode)
    if AudioFileConfigName["SfxMergelv" .. tostring(level + 1)] ~= nil then
    end
    EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
    local effectNum = DropActivityBoard.EffectLevel[level]
    if effectNum == nil then
      effectNum = "4"
    end
    local effect = self.m_cacheLuaTable:CreateEffect("m_effect" .. tostring(effectNum), self.m_EffectTransRectTrans)
    DelayExecuteFuncInView(function()
      self.m_cacheLuaTable:DestroyCache("m_effect" .. tostring(effectNum), effect)
    end, 1, self)
    effect.transform.position = self.m_curMergeTargetItem.transform.position
    self.m_lastItemCode = self.m_curMergeTargetItem:GetItemCode()
    local reward, progressReward = self.m_model:OnCreateItem(MergeItemCode, targetItemCode)
    if reward[PROPERTY_TYPE] == "item" then
      self:FlyDropSpecialReward(reward, self.m_curMergeTargetItem.transform.anchoredPosition, level)
    elseif reward[PROPERTY_TYPE] == "score" then
      self:PlayScoreNotification(reward[PROPERTY_COUNT], self.m_curMergeTargetItem.transform.position)
    elseif reward[PROPERTY_TYPE] == "dropToken" then
      self:PlayTokenNotification(reward, self.m_curMergeTargetItem.transform.position)
    else
      self:PlayRewardNotification(reward, self.m_curMergeTargetItem.transform.position)
    end
    self:RemoveItem(self.m_curMergeTargetItem)
    self.m_curMergeSourceItem = newItem
    self.m_cacheLuaTable:DestroyFlyItem(flyItem)
    self.m_cacheLuaTable:DestroyFlyEffect(flyEffect)
    self:SaveActivityData()
  end
  
  local offsetPos = self.m_curMergeTargetItem.transform.anchoredPosition - self.m_curMergeSourceItem.transform.anchoredPosition
  local length = math.sqrt(offsetPos.x * offsetPos.x + offsetPos.y * offsetPos.y)
  local speed = length / self.m_curMergeTime
  flyItem:Init(self.m_curMergeSourceItem.transform.position, self.m_curMergeSourceItem:GetItemCode(), self.m_curMergeTargetItem, MergeFlyFinish, speed)
  self:RemoveItem(self.m_curMergeSourceItem)
  flyEffect:Init(flyItem.gameObject, self.m_curMergeTargetItem, self.m_mainWindow:GetSortingOrder())
end

function DropActivityBoard:FlyDropSpecialReward(reward, startPos, level)
  local upTrans, downTrans = self.m_mainWindow:GetFlyArea()
  local speicalReward = self.m_model:GetSpecialDroppItem(reward[PROPERTY_COUNT])
  local flyHeight = math.random(1, math.ceil(upTrans.anchoredPosition.y - downTrans.anchoredPosition.y)) + downTrans.anchoredPosition.y
  local endPos = Vector2(0, flyHeight)
  self:PlayDropSepcialByPos(speicalReward, startPos, endPos, nil, level)
end

function DropActivityBoard:PlayDropSepcialByPos(speicalReward, startPos, endPos, time, level)
  local flyEffect = self.m_cacheLuaTable:CreateFlyBox(self.m_mergeFlyTrans)
  
  local function callBack()
    self.m_listSpecialWaitDropCode[flyEffect] = nil
    local startAngle = 0
    local midAngle = 360 // #speicalReward
    for index, code in ipairs(speicalReward) do
      local offsetAngle = math.random(startAngle, startAngle + midAngle)
      startAngle = startAngle + midAngle
      local angle = -1 * offsetAngle * 3.1415926 / 180
      local velocity = Vector2(math.cos(angle) * SpeicalSpreadSpeed, math.sin(angle) * SpeicalSpreadSpeed)
      local newSpecialItem = self:createItem(code)
      newSpecialItem:SetInitVelocity(velocity)
      newSpecialItem.transform.anchoredPosition = endPos + Vector2(index * 50 - index * 25, 0)
      newSpecialItem.transform.localScale = Vector3(0.1, 0.1, 1)
      self:AddTween(newSpecialItem.transform:DOScale(Vector3(1, 1, 1), 0.5))
    end
    DelayExecuteFuncInView(function()
      self.m_cacheLuaTable:DestroyFlyBox(flyEffect)
    end, 0.5, self)
  end
  
  local maxTime = 0.3
  if time == nil then
    for item, _ in pairs(self.m_listSpecialWaitDropCode) do
      maxTime = math.max(item:GetLeftTime() + 0.25 + 0.3, maxTime)
    end
  else
    maxTime = time
  end
  flyEffect:Init(startPos, endPos, callBack, self.m_mainWindow:GetSortingOrder(), maxTime, level, function(effect)
    return self:CheckSpreadItems(effect)
  end, self)
  self.m_listSpecialWaitDropCode[flyEffect] = {reward = speicalReward, endPos = endPos}
end

function DropActivityBoard:PlayScoreNotification(score, startPos)
  local flyReward = self.m_cacheLuaTable:CreateScore(self.m_mergeFlyTrans)
  flyReward:Init(score)
  flyReward.transform.position = startPos
  flyReward.m_DropScoreNotificationTipCanv.alpha = 1
  self.m_flyLockScore = self.m_flyLockScore + 1
  local seq = DOTween.Sequence()
  seq:Append(flyReward.transform:DOAnchorPosY(flyReward.transform.anchoredPosition.y + 50, 0.5))
  local moveUpPosition = Vector2(startPos.x, startPos.y + 50)
  local endPosition = self.m_mainWindow:GetScoreRoundTextTrans().transform.position
  local midPos = Vector3((moveUpPosition.x + endPosition.x) / 2.0, (moveUpPosition.y + endPosition.y) / 2.0, 0)
  local wayPoints = {
    GM.UIManager:GetCanvasRoot():TransformPoint(Vector3(moveUpPosition.x, moveUpPosition.y, 0)),
    GM.UIManager:GetCanvasRoot():TransformPoint(Vector3(midPos.x, midPos.y - 150, 0)),
    GM.UIManager:GetCanvasRoot():TransformPoint(Vector3(endPosition.x, endPosition.y - 80, 0))
  }
  seq:Append(flyReward.transform:DOPath(wayPoints, 0.4, PathType.CatmullRom):SetEase(Ease.InOutQuad))
  seq:Insert(seq:Duration() - 0.3, flyReward.m_DropScoreNotificationTipCanv:DOFade(0, 0.4))
  seq:Join(flyReward.transform:DOMove(endPosition, 0.2))
  seq:AppendCallback(function()
    self.m_flyLockScore = self.m_flyLockScore - 1
    self.m_totalScore = self.m_totalScore + score
    self.m_mainWindow:UpdateOneRoundScore(self.m_totalScore)
    self.m_cacheLuaTable:DestroyScore(flyReward)
  end)
  self:AddTween(seq)
end

function DropActivityBoard:PlayRewardNotification(reward, startPos)
  local flyReward = self.m_cacheLuaTable:CreateReward(self.m_mergeFlyTrans)
  flyReward:Init(reward)
  flyReward.transform.position = startPos
  self:AddTween(flyReward.transform:DOAnchorPosY(flyReward.transform.anchoredPosition.y + 50, 0.5))
  local seq = DOTween.Sequence()
  seq:AppendInterval(0.6)
  seq:AppendCallback(function()
    RewardApi.AcquireRewardsInView({reward}, {
      arrWorldPos = {
        flyReward.transform.position
      }
    })
    self.m_cacheLuaTable:DestroyReward(flyReward)
  end)
  self:AddTween(seq)
end

function DropActivityBoard:PlayTokenNotification(reward, startPos)
  local flyReward = self.m_cacheLuaTable:CreateToken(self.m_mergeFlyTrans)
  flyReward:Init(reward[PROPERTY_COUNT])
  flyReward.transform.position = startPos
  self:AddTween(flyReward.transform:DOAnchorPosY(flyReward.transform.anchoredPosition.y + 50, 0.5))
  local seq = DOTween.Sequence()
  seq:AppendInterval(0.5)
  seq:AppendCallback(function()
    RewardApi.AcquireRewardsInView({
      {
        [PROPERTY_TYPE] = DropDefinition[self.m_model:GetType()].ActivityTokenPropertyType,
        [PROPERTY_COUNT] = reward[PROPERTY_COUNT]
      }
    }, {
      noDelayTime = true,
      arrWorldPos = {
        flyReward.transform.position
      }
    })
    self.m_cacheLuaTable:DestroyToken(flyReward)
  end)
  self:AddTween(seq)
end

function DropActivityBoard:TryDropOneList()
  if self.m_bLock then
    local targetPosition = self.m_mainWindow:GetDropBtn().transform.position + Vector3(0, 100, 0)
    local screenPosition = PositionUtil.UICameraWorld2Screen(targetPosition)
    GM.UIManager:ShowPrompt(GM.GameTextModel:GetText("vending_drop_cooldown_hint"), screenPosition)
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardFull)
    return false
  end
  if self.m_model:TryDropOnBoard() then
    self:GenerateDropCodes()
  end
  return true
end

function DropActivityBoard:GenerateDropCodes()
  local listItems = self.m_model:GetDroppedItems()
  for _, item in ipairs(listItems) do
    table.insert(self.m_ListWaitDropCode, item)
    GM.BIManager:LogSpread(self.m_model:GetType(), item)
  end
  if self:GetState() == DropActivityBoard.BoardState.Stable then
    self:SetState(DropActivityBoard.BoardState.DropMergeWaitMerge)
    self:SaveActivityData()
  elseif self:GetState() == DropActivityBoard.BoardState.DropMergeWaitMerge then
    self:SaveActivityData()
  end
end

function DropActivityBoard:CanDrop()
  local leftTrans, rightTrans = self.m_mainWindow:GetLockTrans()
  local collider = CS.UnityEngine.Physics2D.OverlapArea(Vector2(leftTrans.position.x, leftTrans.position.y), Vector2(rightTrans.position.x, rightTrans.position.y))
  if collider == nil then
    return true
  end
  return false
end

function DropActivityBoard:Update(dt)
  if self.m_lockCheckSpreadItems ~= nil then
    self.m_lockCheckSpreadItems = self.m_lockCheckSpreadItems - dt
    if self.m_lockCheckSpreadItems <= 0 then
      self.m_lockCheckSpreadItems = nil
    end
  end
  if self.m_ListWaitDropCode == nil then
    return
  end
  if self.m_bLock == true then
    if self:CanUnLockDrop() then
      self.m_bLock = false
    end
  elseif self:CanLockDrop() then
    self.m_bLock = true
  end
  self.m_mainWindow:GetDropBtn():SetEnabled(not self.m_bLock)
  if self:GetState() == DropActivityBoard.BoardState.Stable then
    return
  end
  if #self.m_ListWaitDropCode == 0 and DropActivityBoard.BoardState.DropMergeWaitMerge then
    self.m_lastDropCodeTime = self.m_lastDropCodeTime + dt
    if self.m_lastDropCodeTime >= waitMergeDropTime then
      self.m_bCanMergeItem = false
    end
  end
  local bCanStabele = 0 >= #self.m_ListWaitDropCode
  self.m_nTimeSinceLastDropItem = self.m_nTimeSinceLastDropItem + dt
  if self.m_nTimeSinceLastDropItem >= itemSpawnInterval and 0 < #self.m_ListWaitDropCode and self:CanDrop() then
    if self:DropOneItem() then
      self.m_mainWindow:SetDropInAnimator(true)
      self.m_nTimeSinceLastDropItem = 0
    end
    if #self.m_ListWaitDropCode == 0 then
      self.m_lastDropCodeTime = 0
      self.m_mainWindow:SetDropInAnimator(false)
    end
  end
  if self:GetState() == DropActivityBoard.BoardState.DropMergeWaitMerge then
    self.m_stableTime = self.m_stableTime + dt
    if self.m_stableTime < StableMergeTime then
      return
    end
    local stationItemms = {}
    local mapStationItem = {}
    for _, item in ipairs(self.m_items) do
      if item:IsStationary() and item:CanMergeItem() then
        table.insert(stationItemms, item)
        if mapStationItem[item:GetItemCode()] == nil then
          mapStationItem[item:GetItemCode()] = 0
        end
        mapStationItem[item:GetItemCode()] = mapStationItem[item:GetItemCode()] + 1
      end
      if not item:IsStationary() and item:CanMergeItem() then
        bCanStabele = false
      end
    end
    table.sort(stationItemms, function(a, b)
      return self.m_model:GetItemLevel(a:GetItemCode()) < self.m_model:GetItemLevel(b:GetItemCode())
    end)
    local Mergetype
    if self.m_lastItemCode ~= nil then
      local config = self.m_model:GetItemConfig(self.m_lastItemCode)
      if config ~= nil and config.merge_rate ~= nil then
        local rand = math.random()
        if rand < config.merge_rate then
          for _, item in ipairs(stationItemms) do
            if self.m_model:GetItemType(item:GetItemCode()) == self.m_model:GetItemType(self.m_lastItemCode) and mapStationItem[item:GetItemCode()] >= 2 then
              Mergetype = self.m_model:GetItemType(self.m_lastItemCode)
              break
            end
          end
        end
      end
    end
    for _, item in ipairs(stationItemms) do
      if mapStationItem[item:GetItemCode()] >= 2 and (Mergetype == self.m_model:GetItemType(item:GetItemCode()) or Mergetype == nil) and self.m_model:GetItemConfig(item:GetItemCode()) ~= nil then
        self.m_curMergeSourceItem = item
        break
      end
    end
    if self.m_curMergeSourceItem ~= nil then
      self:SetState(DropActivityBoard.BoardState.DropMergeFindLine)
      return
    end
    if bCanStabele and self.m_flyLockScore == 0 then
      if GM.UIManager:IsTestActivityButtonValid() then
        GM.UIManager:ShowPrompt("\229\174\140\230\136\144\228\184\128\232\189\174 \230\181\139\232\175\149\230\150\135\230\161\136")
      end
      self:SetState(DropActivityBoard.BoardState.FinishDropRound)
      return
    end
  end
end

function DropActivityBoard:DropOneItem()
  local itemCode = table.remove(self.m_ListWaitDropCode, 1)
  local newItem = self:createItem(itemCode)
  newItem:SetCanMergeItem(self.m_bCanMergeItem)
  newItem.transform.position = self.m_itemStartPosRectTrans.position
  local InitVelocity = itemInitialVelocityArray[math.random(1, #itemInitialVelocityArray)]
  newItem:SetInitVelocity(InitVelocity)
  self:SaveActivityData()
  return true
end

function DropActivityBoard:createItem(itemCode)
  local newItem = self.m_DropItemFactoryLuaTable:CreateItem(itemCode)
  newItem:Init(itemCode, self)
  table.insert(self.m_items, newItem)
  return newItem
end

function DropActivityBoard:RemoveItem(removeItem)
  self.m_DropItemFactoryLuaTable:CycleItem(removeItem)
  for index, item in ipairs(self.m_items) do
    if item == removeItem then
      table.remove(self.m_items, index)
      return
    end
  end
end

function DropActivityBoard:GetItemNum()
  return #self.m_items
end

function DropActivityBoard:CanLockDrop()
  return #self.m_ListWaitDropCode + #self.m_items >= maxListWaitDropCode
end

function DropActivityBoard:CanUnLockDrop()
  return #self.m_ListWaitDropCode + #self.m_items <= unLockListWaitDropCode
end

function DropActivityBoard:AddWaitFlyEffect(flyeffect)
  table.insert(self.m_listWaitSpreadEffect, flyeffect)
end

function DropActivityBoard:CheckSpreadItems(flyeffect)
  if #self.m_items > 40 then
    return false
  end
  if self.m_lockCheckSpreadItems ~= nil and self.m_lockCheckSpreadItems > 0 then
    return false
  end
  if self.m_listWaitSpreadEffect[1] == flyeffect then
    table.remove(self.m_listWaitSpreadEffect, 1)
    self.m_lockCheckSpreadItems = 0.3
    return true
  end
  return false
end

function DropActivityBoard:SaveActivityData()
  local itemInfo = {}
  for _, item in ipairs(self.m_items) do
    table.insert(itemInfo, {
      pos = {
        x = item.transform.anchoredPosition.x,
        y = item.transform.anchoredPosition.y
      },
      velocity = {
        x = item:GetVelocity().x,
        y = item:GetVelocity().y
      },
      Code = item:GetItemCode(),
      rotate = item.transform.eulerAngles.z
    })
  end
  local waitDropCode = {}
  for _, itemCode in ipairs(self.m_ListWaitDropCode) do
    table.insert(waitDropCode, itemCode)
  end
  local waitSpecialInfo = {}
  for flyItem, info in pairs(self.m_listSpecialWaitDropCode) do
    table.insert(waitSpecialInfo, {
      reward = info.reward,
      endPos = {
        x = info.endPos.x,
        y = info.endPos.y
      },
      curPos = {
        x = flyItem.transform.anchoredPosition.x,
        y = flyItem.transform.anchoredPosition.y
      },
      flyTime = flyItem:GetLeftTime(),
      level = flyItem:GetLevel()
    })
  end
  local strDropBoardData = {
    items = itemInfo,
    waitDropCode = waitDropCode,
    waitSpecialInfo = waitSpecialInfo
  }
  local strSaveData = json.encode(strDropBoardData)
  self.m_model:SaveBoardData(strSaveData)
end

function DropActivityBoard:PlayJumpAnim(force)
  for _, item in ipairs(self.m_items) do
    item:AddForce(Vector2(0, force or 0))
  end
end

function DropActivityBoard:AddTween(tween)
  self.m_arrTween = self.m_arrTween or {}
  self.m_arrTween[#self.m_arrTween + 1] = tween
end

function DropActivityBoard:OnDestroy()
  Scheduler.UnscheduleTarget(self)
  for _, tween in ipairs(self.m_arrTween or {}) do
    if tween:IsActive() then
      tween:Kill()
    end
  end
end

function DropActivityBoard:AddTestCode(itemCode)
  if not GM.UIManager:IsTestActivityButtonValid() then
    return
  end
  table.insert(self.m_ListWaitDropCode, itemCode)
  if self:GetState() == DropActivityBoard.BoardState.Stable then
    self:SetState(DropActivityBoard.BoardState.DropMergeWaitMerge)
  end
end
