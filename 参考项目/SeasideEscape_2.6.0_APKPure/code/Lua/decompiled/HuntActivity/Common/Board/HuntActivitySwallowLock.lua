HuntActivitySwallowLock = {}
HuntActivitySwallowLock.__index = HuntActivitySwallowLock
local CloudColor = {
  [1] = ImageFileConfigName.cloud_normal,
  [2] = ImageFileConfigName.cloud_gold,
  Unlocked = CSColor.white,
  Locked = CSColor(0.8, 0.8, 0.8, 1),
  Blink = CSColor(0.9, 0.9, 0.9, 1)
}

function HuntActivitySwallowLock:Init(itemType, actType, showLock, targetVal, curVal, notice, color)
  self.m_mapSeq = {}
  self.m_arrClouds = {}
  self.m_arrPos = {}
  self.m_targetVal = targetVal
  self.m_model = GM.ActivityManager:GetModel(actType)
  self.m_rootOriginScale = self.m_rootGo.transform.localScale
  self.m_checkOriginScale = self.m_checkTrans.localScale
  self.m_checkTrans.localScale = self.m_checkOriginScale * 1.2
  local spriteName = GM.ItemDataModel:GetSpriteName(itemType)
  SpriteUtil.SetSpriteRenderer(self.m_renderer, spriteName)
  UIUtil.SetActive(self.m_rootGo, showLock)
  self.m_progressSliderImage.fillAmount = curVal / self.m_targetVal
  self.m_progressLabel.text = curVal .. "/" .. self.m_targetVal
  self.m_notice = notice
  self.m_color = color or 1
end

function HuntActivitySwallowLock:OnDestroy()
  if not Table.IsEmpty(self.m_mapSeq) then
    for seq, _ in pairs(self.m_mapSeq) do
      seq:Kill()
    end
  end
  self.m_mapSeq = nil
end

function HuntActivitySwallowLock:PlayProgressAnimation(val, callback)
  local seq = DOTween.Sequence()
  local scale = self.m_rootOriginScale
  local ICON_SCALE = 1.18
  local EFFECT_DELAY_TIME = 0.1
  local ICON_SCALE_TIME = 0.2
  local SLIDER_FILL_TIME = 0.5
  seq:InsertCallback(1 + EFFECT_DELAY_TIME, function()
    self.m_boomEffect:Play()
    self.m_progressLabel.text = val .. "/" .. self.m_targetVal
  end)
  seq:Insert(1 + EFFECT_DELAY_TIME, self.m_rootGo.transform:DOScale(scale * ICON_SCALE, ICON_SCALE_TIME))
  seq:Insert(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME, DOVirtual.Float(self.m_progressSliderImage.fillAmount, val / self.m_targetVal, SLIDER_FILL_TIME, function(value)
    self.m_progressSliderImage.fillAmount = value
  end))
  seq:Insert(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + ICON_SCALE_TIME * 0.5, self.m_rootGo.transform:DOScale(scale, ICON_SCALE_TIME * 0.5))
  seq:AppendCallback(function()
    if callback then
      callback()
    end
    self.m_mapSeq[seq] = nil
  end)
  self.m_mapSeq[seq] = true
end

function HuntActivitySwallowLock:AddCloud(go, x, y)
  local spriteRdr = go:GetComponent(typeof(SpriteRenderer))
  self.m_arrClouds[#self.m_arrClouds + 1] = spriteRdr
  self.m_arrPos[#self.m_arrPos + 1] = {x, y}
  local by = HuntActivityBoardModel.VerticalTiles
  local bx = HuntActivityBoardModel.HorizontalTiles
  local z = bx * by - bx * (y - 1) - x + 1
  go.transform.localPosition = Vector3(go.transform.localPosition.x, go.transform.localPosition.y, z * 10 - 5)
  SpriteUtil.SetSpriteRenderer(spriteRdr, CloudColor[self.m_color])
  if not self.m_rootGo.activeSelf then
    spriteRdr.color = CloudColor.Locked
  else
    spriteRdr.color = CloudColor.Unlocked
  end
end

function HuntActivitySwallowLock:PlayDisappearAnim(callback)
  local seq = DOTween.Sequence()
  local scale = self.m_rootOriginScale
  local ICON_SCALE = 1.18
  local EFFECT_DELAY_TIME = 0.1
  local ICON_SCALE_TIME = 0.2
  local SLIDER_FILL_TIME = 0.5
  local SLIDER_MASK_FADE_TIME = 0.2
  local CHECK_APPEAR_TIME = 0.15
  UIUtil.SetActive(self.m_effect, false)
  seq:InsertCallback(1 + EFFECT_DELAY_TIME, function()
    self.m_boomEffect:Play()
    self.m_progressLabel.text = self.m_targetVal .. "/" .. self.m_targetVal
  end)
  seq:Insert(1 + EFFECT_DELAY_TIME, self.m_rootGo.transform:DOScale(scale * ICON_SCALE, ICON_SCALE_TIME))
  seq:Insert(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME, DOVirtual.Float(self.m_progressSliderImage.fillAmount, 1, SLIDER_FILL_TIME, function(value)
    self.m_progressSliderImage.fillAmount = value
  end))
  seq:Insert(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME, self.m_progressMaskImage:DOFade(0, SLIDER_MASK_FADE_TIME))
  seq:InsertCallback(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME, function()
    UIUtil.SetActive(self.m_checkTrans.gameObject, true)
  end)
  seq:Insert(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME, self.m_checkTrans:DOScale(self.m_checkOriginScale * 0.8, 0.1))
  seq:Insert(1 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME + 0.1, self.m_checkTrans:DOScale(self.m_checkOriginScale, 0.05))
  local sprites = self.m_rootGo:GetComponentsInChildren(typeof(SpriteRenderer), true)
  for i = 0, sprites.Length - 1 do
    seq:Insert(1.7 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME + CHECK_APPEAR_TIME, sprites[i]:DOFade(0, 0.01))
  end
  seq:Insert(1.7 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME + CHECK_APPEAR_TIME, DOVirtual.Float(1, 0, 0.01, function(value)
    self.m_progressCanvasGroup.alpha = value
  end))
  for _, v in pairs(self.m_arrClouds) do
    seq:Insert(1.8 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME + CHECK_APPEAR_TIME, v:DOFade(0, 0.1))
    seq:InsertCallback(1.8 + EFFECT_DELAY_TIME + ICON_SCALE_TIME + SLIDER_FILL_TIME + SLIDER_MASK_FADE_TIME + CHECK_APPEAR_TIME, function()
      local particleSystem = v.gameObject:GetComponentInChildren(typeof(ParticleSystem))
      if not UIUtil.IsEmptyComponent(particleSystem) then
        particleSystem:Play()
      end
    end)
  end
  seq:AppendCallback(function()
    if callback then
      callback()
    end
    self.m_mapSeq[seq] = nil
  end)
  self.m_mapSeq[seq] = true
end

function HuntActivitySwallowLock:PlayLockAppearAni(callback, delay)
  if delay == nil then
    delay = 2
  end
  local seq = DOTween.Sequence()
  seq:AppendInterval(delay)
  for _, v in pairs(self.m_arrClouds) do
    seq:Insert(delay, v:DOColor(CloudColor.Unlocked, 1))
  end
  seq:InsertCallback(delay, function()
    self.m_rootGo:SetActive(true)
  end)
  seq:Insert(delay, self.m_rootGo.transform:DOScale(1.25, 0.1))
  seq:Insert(0.1 + delay, self.m_renderer.transform:DOShakeRotation(0.3, Vector3(0, 0, 30), 15, 90):SetEase(Ease.InOutQuad))
  seq:Insert(0.4 + delay, self.m_rootGo.transform:DOScale(1, 0.1))
  seq:AppendCallback(function()
    if callback then
      callback()
    end
    self.m_mapSeq[seq] = nil
  end)
  self.m_mapSeq[seq] = true
end

function HuntActivitySwallowLock:TryShowLockPrompt(boardPosition)
  if self.m_playingTip or not self.m_rootGo.activeSelf then
    return
  end
  local x = boardPosition:GetX()
  local y = boardPosition:GetY()
  for _, pos in pairs(self.m_arrPos) do
    if pos[1] == x and pos[2] == y then
      self:ShowPrompt()
      return
    end
  end
end

local color = CSColor(0.9, 0.9, 0.9, 1)

function HuntActivitySwallowLock:ShowPrompt()
  self.m_playingTip = true
  GM.UIManager:ShowPromptWithKey(self.m_notice or "hunt_key_unlock")
  for _, v in pairs(self.m_arrClouds) do
    v:DOColor(CloudColor.Blink, 0.25)
    v:DOColor(CloudColor.Unlocked, 0.25):SetDelay(0.25)
    v:DOColor(CloudColor.Blink, 0.25):SetDelay(0.5)
    v:DOColor(CloudColor.Unlocked, 0.25):SetDelay(0.75)
  end
  DelayExecuteFunc(function()
    self.m_playingTip = false
  end, 1)
  self.m_renderer.transform:DOShakeRotation(0.5, Vector3(0, 0, 35), 10, 90):SetEase(Ease.InOutQuad):SetDelay(0.1)
  GM.BIManager:LogAction(EBIType.HuntClickCloud, self.m_notice or "hunt_key_unlock", EGameMode.Hunt)
end

function HuntActivitySwallowLock:TryShowNormal()
  if not self.m_bGray or not self.m_rootGo.activeSelf then
    return
  end
  if self.m_progressCanvasGroup.alpha <= 0 then
    return
  end
  self:ChangedCloudGray(false)
  UIUtil.SetActive(self.m_effect, false)
end

function HuntActivitySwallowLock:TryShowGray(boardPosition)
  if self.m_bGray or not self.m_rootGo.activeSelf then
    return
  end
  local x = boardPosition:GetX()
  local y = boardPosition:GetY()
  for _, pos in pairs(self.m_arrPos) do
    if pos[1] == x and pos[2] == y then
      UIUtil.SetActive(self.m_effect, true)
      self:ChangedCloudGray(true)
      return true
    end
  end
  return false
end

function HuntActivitySwallowLock:ChangedCloudGray(bGray)
  self.m_bGray = bGray
  local color = bGray and CloudColor.Blink or CloudColor.Unlocked
  for _, v in pairs(self.m_arrClouds) do
    if v.color.a <= 0 then
      return
    end
    v:DOColor(color, 0.1)
  end
end

function HuntActivitySwallowLock:IsCurrentShowLock()
  return self.m_rootGo.activeSelf
end

function HuntActivitySwallowLock:IsClicked(boardPosition)
  local x = boardPosition:GetX()
  local y = boardPosition:GetY()
  for _, pos in pairs(self.m_arrPos) do
    if pos[1] == x and pos[2] == y then
      return true
    end
  end
  return false
end
