PaperBoxExtraReward = {}
PaperBoxExtraReward.__index = PaperBoxExtraReward

function PaperBoxExtraReward:Init(boardModel, boardPosition)
  self.m_extraReward = boardModel:GetPaperBoxExtraReward(boardPosition)
  self.m_rewardItem:Init(self.m_extraReward)
  self.transform.localPosition = boardModel:ToLocalPositionSetZ(boardPosition, 0)
  UIUtil.SetLocalPosition(self.transform, nil, nil, 0)
end

function PaperBoxExtraReward:OnPaperboxExtraRewardClicked()
  self.m_animator:SetTrigger("Lock")
  GM.UIManager:ShowPromptWithKey("board_reward_locked_hint")
  EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
end

function PaperBoxExtraReward:GetRewardItem()
  return self.m_rewardItem
end

function PaperBoxExtraReward:SetTransformFunction(func)
  self.m_rewardItem:GetTipButton():SetTransformFunction(func)
end

function PaperBoxExtraReward:PlayRewardAnimation(seq, message)
  self.m_rewardItem:HideTipButton()
  self.m_lock:PlayUnlockAni()
  self.m_animator:SetTrigger("Unlock")
  local canvas = self.m_rewardItem.gameObject:AddComponent(typeof(CS.UnityEngine.Canvas))
  canvas.overrideSorting = true
  canvas.sortingOrder = 1
  if message and message.isPropReward then
    self.m_seq = DOTween.Sequence()
    self.m_seq:InsertCallback(0.62, function()
      RewardApi.AcquireRewardsInView({
        message.CollapseReward
      }, {
        arrWorldPos = {
          message.PropPos
        }
      })
    end)
    self.m_seq:InsertCallback(0.74, function()
      self.gameObject:SetActive(false)
    end)
  end
  return 0.83, 1.5
end

function PaperBoxExtraReward:OnDestroy()
  if self.m_seq ~= nil then
    self.m_seq:Kill(false)
  end
end
