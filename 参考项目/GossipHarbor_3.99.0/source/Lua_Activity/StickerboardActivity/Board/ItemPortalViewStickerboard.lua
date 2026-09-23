ItemPortalViewStickerboard = setmetatable({}, BaseItemViewComponent)
ItemPortalViewStickerboard.__index = ItemPortalViewStickerboard

function ItemPortalViewStickerboard:Init(itemPortalModel)
  self.m_model = itemPortalModel
  if self.m_itemView then
    self:ShowEffect()
  end
end

function ItemPortalViewStickerboard:OnDestroy()
  if self.m_tweener ~= nil then
    self.m_tweener:Kill()
    self.m_tweener = nil
  end
end

function ItemPortalViewStickerboard:SetItemView(itemView)
  BaseItemViewComponent.SetItemView(self, itemView)
  self:ShowEffect()
end

function ItemPortalViewStickerboard:ShowEffect()
  self.m_effect_portalGo.transform.localScale = Vector3.zero
  UIUtil.SetActive(self.m_effect_portalGo, true)
  self.m_itemView:GetSpriteRenderer().gameObject:SetActive(true)
  self.m_tweener = self.m_effect_portalGo.transform:DOScale(Vector3(0.3, 0.332871, 0.332871), 0.5):SetDelay(0.2)
  GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBpUnlock)
  EventDispatcher.DispatchEvent(EEventType.VibrationLight)
end

function ItemPortalViewStickerboard:OnPointerDown(boardPosition)
  if self.m_model:GetItemModel():GetPosition() == boardPosition then
    local itemModel = self.m_model:GetItemModel()
    local code = itemModel:GetCode()
    local boardModel = itemModel:GetBoardModel()
    local activityModel = boardModel:GetActivityModel()
    local activityId = activityModel:GetId()
    local curIdx = activityModel:GetCurrentBoardIndex()
    local bReach = activityModel:HasRemovedAllObstacle()
    GM.BIManager:LogAction(activityModel:GetDefinition().ClickPortalBIType, {
      unlock = bReach,
      portal = code,
      boardId = curIdx
    })
    if not bReach then
      GM.UIManager:ShowPromptWithKey("Stickerboard_stage_hint")
      GM.AudioModel:PlayEffect(AudioFileConfigName.SfxColdingClick)
      EventDispatcher.DispatchEvent(EEventType.VibrationLight)
      EventDispatcher.DispatchEvent(EEventType.StickerboardActivityClickPortalFail)
      return
    end
    GM.UIManager:OpenView(activityModel:GetDefinition().NextStageConfirmWindowPrefabName, activityModel:GetType(), function()
      if activityModel == nil or activityModel:GetState() ~= ActivityState.Started or activityModel:GetId() ~= activityId then
        return
      end
      self.m_itemView:GetSpriteRenderer().gameObject:SetActive(false)
      activityModel:BoardUpgrade()
    end)
  end
end
