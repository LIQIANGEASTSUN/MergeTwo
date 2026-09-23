ItemPortalViewMultiboards = setmetatable({}, BaseItemViewComponent)
ItemPortalViewMultiboards.__index = ItemPortalViewMultiboards

function ItemPortalViewMultiboards:Init(itemPortalModel)
  self.m_model = itemPortalModel
  self:_HideTip()
  if self.m_itemView then
    self:_UpdateSprite()
  end
end

function ItemPortalViewMultiboards:SetItemView(itemView)
  BaseItemViewComponent.SetItemView(self, itemView)
  self:_UpdateSprite()
end

function ItemPortalViewMultiboards:UpdateView()
  self:_UpdateSprite()
  self:_HideTip()
end

function ItemPortalViewMultiboards:_UpdateSprite()
  local boardModel = self.m_model:GetItemModel():GetBoardModel()
  local activityModel = boardModel:GetActivityModel()
  self.m_effect_portalGo:SetActive(activityModel:IsReachLimitLevel())
  local type = self.m_itemView:GetModel():GetType()
  local viewConfig = GM.ItemDataModel:GetViewConfig(type)
  local spriteName = viewConfig.Image[activityModel:IsReachLimitLevel() and 2 or 1]
  SpriteUtil.SetSpriteRenderer(self.m_itemView:GetSpriteRenderer(), spriteName)
  self.m_itemView:GetSpriteRenderer().gameObject:SetActive(true)
end

function ItemPortalViewMultiboards:OnPointerDown(boardPosition)
  if self.m_model:GetItemModel():GetPosition() == boardPosition then
    local itemModel = self.m_model:GetItemModel()
    local code = itemModel:GetCode()
    local boardModel = itemModel:GetBoardModel()
    local activityModel = boardModel:GetActivityModel()
    local activityId = activityModel:GetId()
    local curIdx = activityModel:GetCurrentBoardIndex()
    local bReach = activityModel:IsReachLimitLevel()
    GM.BIManager:LogAction(activityModel:GetDefinition().ClickPortal, {
      unlock = bReach,
      portal = code,
      boardId = curIdx
    })
    if not bReach then
      GM.UIManager:ShowPromptWithKey(activityModel:GetDefinition().TextKeyPrefix .. "_multiboards_door_hint")
      self:_ShowTip()
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
      EventDispatcher.DispatchEvent(EEventType.VibrationLight)
      return
    end
    self:_HideTip()
    GM.UIManager:OpenView(activityModel:GetDefinition().NextStageConfirmWindowPrefabName, activityModel:GetType(), function()
      if activityModel == nil or activityModel:GetState() ~= ActivityState.Started or activityModel:GetId() ~= activityId then
        return
      end
      self.m_itemView:GetSpriteRenderer().gameObject:SetActive(false)
      activityModel:BoardUpgrade()
    end)
  else
    self:_HideTip()
  end
end

function ItemPortalViewMultiboards:_ShowTip()
  if self.m_tween_tip then
    self.m_tween_tip:Kill()
  end
  self.m_TipGo:SetActive(true)
  self.m_TipGo.transform.localScale = Vector3(0, 0, 0)
  self.m_tween_tip = self.m_TipGo.transform:DOScale(Vector3(1, 1, 1), 0.2):SetEase(Ease.OutBack):OnComplete(function()
    self.m_tween_tip = nil
  end)
end

function ItemPortalViewMultiboards:_HideTip()
  self.m_tween_tip = self.m_TipGo.transform:DOScale(Vector3(0, 0, 0), 0.2):SetEase(Ease.OutBack):OnComplete(function()
    if self.m_TipGo and not self.m_TipGo:IsNull() then
      self.m_TipGo:SetActive(false)
      self.m_tween_tip = nil
    end
  end)
end
