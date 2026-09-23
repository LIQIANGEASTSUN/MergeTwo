BaseUIBoardScrollComponent = {}
BaseUIBoardScrollComponent.__index = BaseUIBoardScrollComponent

function BaseUIBoardScrollComponent:Init(mainWindow, boardView, boardImg, activityType, onBeginScrollCallback, onScrollCallback, onEndScrollCallback, boardScale)
  self.m_mainWindow = mainWindow
  self.m_boardView = boardView
  self.m_boardModel = boardView:GetModel()
  self.m_boardImg = boardImg
  self.m_boardScale = boardScale or 1
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.m_onBeginScrollCallback = onBeginScrollCallback
  self.m_onScrollCallback = onScrollCallback
  self.m_onEndScrollCallback = onEndScrollCallback
  self:SetTileInversed()
  self.m_tweenMap = {}
  self:_InitRT()
  self.m_preboardImgOriginPos = self.m_preboardImg.transform.localPosition
end

function BaseUIBoardScrollComponent:_InitRT()
  local sizeDelta = self.m_boardImg.transform.sizeDelta
  self.m_copyImgRectTrans.sizeDelta = sizeDelta
  self.m_preImgRectTrans.sizeDelta = sizeDelta
  self.m_curImgRectTrans.sizeDelta = sizeDelta
  local position = self.m_boardImg.transform.position
  self.m_copyImgRectTrans.position = position
  self.m_preImgRectTrans.position = position
  self.m_curImgRectTrans.position = position
  self.m_copyImgRectTrans:SetLocalPosY(self.m_copyImgRectTrans.localPosition.y + sizeDelta.y * 0.5)
  self.m_preImgRectTrans:SetLocalPosY(self.m_preImgRectTrans.localPosition.y + sizeDelta.y * 0.5)
  self.m_curImgRectTrans:SetLocalPosY(self.m_curImgRectTrans.localPosition.y + sizeDelta.y * 0.5)
end

function BaseUIBoardScrollComponent:OnBeginScroll(moveRows)
  if self.m_onBeginScrollCallback then
    self.m_onBeginScrollCallback(moveRows)
  end
end

function BaseUIBoardScrollComponent:OnScroll(interval)
  if self.m_onScrollCallback then
    self.m_onScrollCallback(interval)
  end
end

function BaseUIBoardScrollComponent:OnEndScroll(moveRows)
  if self.m_onEndScrollCallback then
    self.m_onEndScrollCallback(moveRows)
  end
end

function BaseUIBoardScrollComponent:CheckTiles(rows)
  if self.m_tileInversed == nil then
    self.m_tileInversed = 1
  end
  if rows % 2 == 1 then
    self.m_boardView:InverseTiles()
    self.m_tileInversed = self.m_tileInversed * -1
  end
end

function BaseUIBoardScrollComponent:SetTileInversed()
  self.m_tileInversed = 1
end

function BaseUIBoardScrollComponent:GetTileInversed()
  if self.m_tileInversed == nil then
    self.m_tileInversed = 1
  end
  return self.m_tileInversed
end

function BaseUIBoardScrollComponent:OnDestroy()
  Scheduler.UnscheduleTarget(self)
  GM.UIManager:RemoveAllEventLocks(self)
  if self.m_preboardImg.gameObject.activeSelf then
    CS.UnityEngine.RenderTexture.ReleaseTemporary(self.m_preboardImg.texture)
  end
  if self.m_curboardImg.gameObject.activeSelf then
    CS.UnityEngine.RenderTexture.ReleaseTemporary(self.m_curboardImg.texture)
  end
  if self.m_copyImg.gameObject.activeSelf then
    CS.UnityEngine.RenderTexture.ReleaseTemporary(self.m_copyImg.texture)
  end
  if not Table.IsEmpty(self.m_tweenMap) then
    for tween, _ in pairs(self.m_tweenMap) do
      tween:Kill()
    end
  end
  self.m_tweenMap = {}
end

function BaseUIBoardScrollComponent:TryScroll()
  if not self:CheckValid() then
    return
  end
  local ok, moveRows = self:CheckScroll()
  if ok then
    self:ScrollBoard(moveRows)
  end
  return ok
end

function BaseUIBoardScrollComponent:CheckScroll()
  local moveRows = self.m_boardModel:GetScrollRows()
  if moveRows == 0 then
    return false
  end
  return true, moveRows
end

function BaseUIBoardScrollComponent:ScrollBoard(moveRows)
  if moveRows == 0 then
    return
  end
  GM.UIManager:SetEventLock(true, self)
  self.m_boardView:_CancelPrompt()
  self.m_boardView:ClearIndicator()
  self:OnBeginScroll(moveRows)
  local seq = DOTween.Sequence()
  seq:AppendInterval(1.2)
  seq:AppendCallback(function()
    if not self:CheckValid() then
      return
    end
    self.m_boardView:HideCacheAndBin()
    self:CopyBoard()
    local moveRows = self.m_boardModel:TryScroll()
    self.m_boardView:Scroll(moveRows, self.m_maskRectTrans)
  end)
  seq:AppendInterval(0.1)
  seq:AppendCallback(function()
    if not self:CheckValid() then
      return
    end
    self:CopyBoard2()
    self:CheckTiles(moveRows)
  end)
  seq:AppendInterval(0.5)
  seq:AppendCallback(function()
    if not self:CheckValid() then
      return
    end
    self:CopyBoard3()
    self.m_boardView:ShowCacheAndBin()
  end)
  seq:AppendInterval(0.15)
  seq:AppendCallback(function()
    if not self:CheckValid() then
      return
    end
    self:ScrollBoardAnim(moveRows, function()
      if not self:CheckValid() then
        return
      end
      GM.UIManager:SetEventLock(false, self)
      self.m_boardView:_StartPrompt()
      self:OnEndScroll(moveRows)
    end)
  end):OnComplete(function()
    self.m_tweenMap[seq] = nil
  end)
  self.m_tweenMap[seq] = true
  return true
end

function BaseUIBoardScrollComponent:CopyBoard()
  CS.GraphicsSettings.Instance:CopyTexture(self.m_boardImg, self.m_copyImg)
  self.m_copyImg.gameObject:SetActive(true)
  self.m_boardImg.gameObject:SetActive(false)
end

function BaseUIBoardScrollComponent:CopyBoard2()
  CS.GraphicsSettings.Instance:CopyTexture(self.m_boardImg, self.m_preboardImg)
end

function BaseUIBoardScrollComponent:CopyBoard3()
  CS.GraphicsSettings.Instance:CopyTexture(self.m_boardImg, self.m_curboardImg)
end

function BaseUIBoardScrollComponent:ScrollBoardAnim(moveRows, callback)
  self.m_preboardImg.gameObject:SetActive(true)
  self.m_copyImg.gameObject:SetActive(false)
  CS.UnityEngine.RenderTexture.ReleaseTemporary(self.m_copyImg.texture)
  self.m_boardImg.gameObject:SetActive(true)
  self.m_boardView:HideBoard()
  self.m_curboardImg.gameObject:SetActive(true)
  local dir = self.m_boardModel.ScrollDirection == EBoardScrollDirection.Up and 1 or -1
  local moveLength = self.m_boardModel.TileSize * moveRows * dir * self.m_boardScale
  local moveTime = 0.8 * moveRows
  local tpos = self.m_preboardImgOriginPos
  local preboardMoveTween
  preboardMoveTween = self.m_preboardImg.transform:DOLocalMoveY(tpos.y + moveLength, moveTime):SetEase(Ease.Linear):OnComplete(function()
    if not self:CheckValid() then
      return
    end
    self.m_preboardImg.gameObject:SetActive(false)
    self.m_preboardImg.transform.localPosition = self.m_preboardImgOriginPos
    self.m_tweenMap[preboardMoveTween] = nil
  end)
  self.m_tweenMap[preboardMoveTween] = true
  Scheduler.Schedule(function()
    self:OnScroll(0.08)
  end, self, 0.08, 10 * moveRows, 0)
  self.m_curboardImg.transform.localPosition = tpos - Vector3(0, moveLength, 0)
  local curboardMoveTween, maskShakeTween
  curboardMoveTween = self.m_curboardImg.transform:DOLocalMoveY(tpos.y, moveTime):SetEase(Ease.Linear):OnComplete(function()
    self.m_tweenMap[curboardMoveTween] = nil
  end)
  maskShakeTween = self.m_maskRectTrans:DOShakeAnchorPos(moveTime, Vector2(10, 0), 20, 0, true, false):OnComplete(function()
    self.m_tweenMap[maskShakeTween] = nil
  end)
  self.m_tweenMap[curboardMoveTween] = true
  self.m_tweenMap[maskShakeTween] = true
  Scheduler.Schedule(function()
    EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
  end, self, 0.1, 8 * moveRows - 2)
  self:PlayScrollSound()
  DelayExecuteFuncInView(function()
    self.m_boardView:ShowBoard()
    self.m_curboardImg.gameObject:SetActive(false)
    CS.UnityEngine.RenderTexture.ReleaseTemporary(self.m_preboardImg.texture)
    CS.UnityEngine.RenderTexture.ReleaseTemporary(self.m_curboardImg.texture)
    callback()
  end, moveTime + 0.02, self)
end

function BaseUIBoardScrollComponent:PlayScrollSound()
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardScroll)
end

function BaseUIBoardScrollComponent:CheckValid()
  if not (self and not self.gameObject:IsNull() and self.m_mainWindow) or self.m_mainWindow.gameObject:IsNull() then
    return false
  end
  return true
end
