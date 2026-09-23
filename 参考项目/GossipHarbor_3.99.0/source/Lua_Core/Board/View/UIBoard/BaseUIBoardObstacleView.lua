BaseUIBoardObstacleView = {}
BaseUIBoardObstacleView.__index = BaseUIBoardObstacleView

function BaseUIBoardObstacleView:Init(obstacleModel, layerView)
  self.m_model = obstacleModel
  self.m_layerView = layerView
  AddHandlerAndRecordMap(self.m_model.event, UIBoardObstacleEventType.ReduceLevel, {
    obj = self,
    method = self._OnReduceLevel
  })
  self.m_rewardAniSpine:Initialize(false)
  self:InitView()
end

function BaseUIBoardObstacleView:GetModel()
  return self.m_model
end

function BaseUIBoardObstacleView:OnDestroy()
  RemoveAllHandlers(self.m_model.event, self)
  if self.m_seq ~= nil then
    self.m_seq:Kill()
    self.m_seq = nil
  end
  self.m_model = nil
  self.m_maxLevel = nil
  GM.UIManager:RemoveAllEventLocks(self)
end

function BaseUIBoardObstacleView:InitView()
  local size = self.m_model:GetSize()
  self.m_tileSize = size
  self.m_collider.size = self.m_tileSize
  self.transform.sizeDelta = self.m_tileSize
  SpriteUtil.SetImage(self.m_iconImg, self.m_model:GetToolIconName(), false)
  self:InitSlider()
end

function BaseUIBoardObstacleView:GetSpineState(level)
  local totalStateNum = tonumber(self.m_spineStateNum)
  if totalStateNum <= 1 then
    return 1
  end
  if level >= self.m_maxLevel then
    return totalStateNum
  end
  local state = math.floor(level * totalStateNum / self.m_maxLevel)
  return math.max(0, math.min(state, totalStateNum - 1))
end

function BaseUIBoardObstacleView:InitSlider()
  self.m_maxLevel = self.m_model:GetMaxLevel()
  self.m_level = self.m_model:GetCurLevel()
  self.m_progressText.text = string.format("%d/%d", self.m_level, self.m_maxLevel)
  self.m_sliderCellSlider.value = self.m_level / self.m_maxLevel
  local state = self:GetSpineState(self.m_level) + 1
  self.m_rewardAniSpine.AnimationState:SetAnimation(0, "idle" .. state, false)
end

function BaseUIBoardObstacleView:_OnReduceLevel(item)
  local curLevel = self.m_model:GetCurLevel()
  local bRemove = curLevel == self.m_maxLevel
  if bRemove and not self.m_locked then
    self.m_locked = true
    GM.UIManager:SetEventLock(true, self)
  end
  self.m_layerView:OnObstacleLevelReduce(self, item, function()
    self:OnFlyToSlider()
  end)
end

function BaseUIBoardObstacleView:OnFlyToSlider()
  local curLevel = self.m_model:GetCurLevel()
  local bRemove = curLevel == self.m_maxLevel
  if self.m_seq ~= nil then
    self.m_seq:Kill()
    self.m_seq = nil
  end
  self.m_seq = DOTween.Sequence()
  self.m_seq:AppendCallback(function()
    GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardObstacleTool)
    EventDispatcher.DispatchEvent(EEventType.VibrationLight)
    self.m_iconAnimator:Play("IconScale", 0, 0)
  end)
  self.m_seq:AppendInterval(0.2)
  self.m_seq:Append(self.m_sliderCellSlider:DOValue(curLevel / self.m_maxLevel, 0.2))
  self.m_seq:AppendCallback(function()
    self.m_progressText.text = string.format("%d/%d", curLevel, self.m_maxLevel)
  end)
  self.m_seq:AppendCallback(function()
    local oldState = self:GetSpineState(self.m_level)
    local newState = self:GetSpineState(curLevel)
    if oldState < newState then
      GM.AudioModel:PlayEffect(self.m_layerView:GetObstacleAnimationAudioName())
      self.m_rewardAniSpine.AnimationState:SetAnimation(0, "open" .. newState, false)
      self.m_rewardAniSpine.AnimationState:AddAnimation(0, "idle" .. newState + 1, false, 0)
    else
      self.m_rewardAniSpine.AnimationState:SetAnimation(0, "idle" .. oldState + 1, false)
    end
  end)
  if bRemove and not self.m_bRemoved then
    self.m_seq:AppendInterval(0.26)
    self.m_seq:AppendCallback(function()
      self.m_bRemoved = true
      self.m_model:OnRemove()
      self.m_layerView:OnRemoveObstacle(self)
    end)
  end
  self.m_seq:AppendCallback(function()
    self.m_level = curLevel
    if self.m_locked and not self.m_unlocked then
      self.m_unlocked = true
      GM.UIManager:SetEventLock(false, self)
    end
  end)
end

function BaseUIBoardObstacleView:OnRewardHide()
  self.m_rewardAniSpine.AnimationState:SetAnimation(0, "disappear", false)
end

function BaseUIBoardObstacleView:OnRemove()
  self.m_canvasGroup:DOFade(0, 0.2):OnComplete(function()
    AddressableLoader.Destroy(self.gameObject)
  end):SetLink(self.gameObject)
end

function BaseUIBoardObstacleView:GetHeight()
  return self.m_tileSize.y
end

function BaseUIBoardObstacleView:GetSize()
  return self.m_tileSize
end

function BaseUIBoardObstacleView:GetIconTransform()
  return self.m_iconImg.transform
end
