NoCDTrainBoardView = setmetatable({}, BaseSceneBoardView)
NoCDTrainBoardView.__index = NoCDTrainBoardView

function NoCDTrainBoardView.GetInstance()
  return NoCDTrainBoardView.s_instance
end

function NoCDTrainBoardView:Init(activityType, boardModel, infoBar)
  self.m_activityType = activityType
  self.m_activityDefinition = NoCDTrainDefinition[activityType] or NoCDBingoDefinition[activityType] or PuzzleBingoDefinition[activityType]
  self.m_infoBar = infoBar
  BaseSceneBoardView.Init(self, boardModel)
  REGISTER_BOARD_EVENT_HANDLER(self, "BatchRemoveItems")
  REGISTER_BOARD_EVENT_HANDLER(self, "StoreItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "RetrieveStoredItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "StoreFailed")
  REGISTER_BOARD_EVENT_HANDLER(self, "FinishTrainOrder")
  REGISTER_BOARD_EVENT_HANDLER(self, "ItemScaled")
  REGISTER_BOARD_EVENT_HANDLER(self, "AddPdItem")
  self.m_retrieveList = {}
  self.m_camera = GM.ModeViewController:GetNoCDTrainBoardCamera()
  self.m_canvas.worldCamera = self.m_camera
  UIUtil.SetLocalPosition(self.m_canvas.transform, NoCDTrainBoardModel.TileSize * boardModel.HorizontalTiles / 2)
  NoCDTrainBoardView.s_instance = self
end

function NoCDTrainBoardView:_AddListeners()
  BaseSceneBoardView._AddListeners(self)
  EventDispatcher.AddListener(EEventType.UpdateOrderState, self, self._OnOrderStateChanged)
end

function NoCDTrainBoardView:_RegisterTouchHandler()
end

function NoCDTrainBoardView:Update()
  BaseSceneBoardView.Update(self)
  if GameConfig.IsTestMode() and Input.GetKeyUp(KeyCode.BackQuote) then
    if GM.UIManager:IsEventLock() then
      return
    end
    GM.TestAutoRunModel:OnMergeAllClicked()
  end
end

function NoCDTrainBoardView:OnDestroy()
  BaseSceneBoardView.OnDestroy(self)
  self:_CancelPrompt()
  NoCDTrainBoardView.s_instance = nil
end

function NoCDTrainBoardView:IsNewInfoBarActive()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if mainWindow and mainWindow.IsNewInfoBarActive then
    return mainWindow:IsNewInfoBarActive()
  end
  return BaseSceneBoardView.IsNewInfoBarActive(self)
end

function NoCDTrainBoardView:_OnCloseView(msg)
  BaseSceneBoardView._OnCloseView(self)
  if msg and GM.UIManager:GetOpenedTopView() and GM.UIManager:GetOpenedTopView().name == self.m_activityDefinition.MainWindowPrefabName then
    self:_ShowRetrieveLight()
  end
end

function NoCDTrainBoardView:_ShowRetrieveLight()
  for i = #self.m_retrieveList, 1, -1 do
    self.m_retrieveList[i]:ShowRetrieveLight()
    self.m_retrieveList[i] = nil
  end
end

function NoCDTrainBoardView:_TryStartPrompt(_, extraDelayTime)
  self:_StartPrompt(extraDelayTime)
end

function NoCDTrainBoardView:ConvertWorldPositionToScreenPosition(position)
  return NoCDTrainBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function NoCDTrainBoardView:ConvertScreenPositionToWorldPosition(position)
  return NoCDTrainBoardContainer.GetInstance():ConvertTouchToWorldPosition(Vector2(position.x, position.y))
end

function NoCDTrainBoardView:_UpdateTile(tile1Sprite, tile2Sprite)
  local tile1 = self.m_activityDefinition.TileImageName1
  local tile2 = self.m_activityDefinition.TileImageName2
  for position, tileSprite in pairs(self.m_tileMap) do
    local isEven = (position:GetX() + position:GetY()) % 2 == 0
    if not isEven and tile1 then
      SpriteUtil.SetSpriteRenderer(tileSprite, tile1)
    elseif isEven and tile2 then
      SpriteUtil.SetSpriteRenderer(tileSprite, tile2)
    end
  end
end

function NoCDTrainBoardView:_GetPrompts()
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    return {
      BoardPromptMergeItems.Create()
    }
  end
  local prompts = {
    BoardPromptMergeItems.Create()
  }
  if not GameConfig.IsTestMode() or GM.TestAutoRunModel.autoRun then
  end
  return prompts
end

function NoCDTrainBoardView:ConvertBoardPositionToScreenPosition(boardPosition)
  local plottingPosition = boardPosition:ToLocalPosition()
  local worldPosition = self:GetItemsTransform():TransformPoint(Vector3(plottingPosition.x + NoCDTrainBoardModel.TileSize / 2, plottingPosition.y + NoCDTrainBoardModel.TileSize / 2, 0))
  return self:ConvertWorldPositionToScreenPosition(worldPosition)
end

function NoCDTrainBoardView:_UpdateIndicator(item, playAnimation)
  BaseActionBoardView._UpdateIndicator(self, item, playAnimation)
end

function NoCDTrainBoardView:_AdjustBoardInfoBarPos()
end

function NoCDTrainBoardView:_ResetPressedState()
end

function NoCDTrainBoardView:_OnBatchRemoveItems(message)
  for _, itemModel in ipairs(message.Removed) do
    local itemView = self:GetItemView(itemModel)
    itemView.toBeRemoved = true
    itemView.transform:DOScale(0, 0.5):OnComplete(function()
      self:_RemoveItemViewByView(itemView)
    end)
    if self.m_selectedBoardPosition == itemModel:GetPosition() then
      self:_UpdateIndicator()
      self.m_infoBar:UpdateInfoBar()
    end
  end
end

function NoCDTrainBoardView:_GetInventoryButton()
  if self.m_inventoryButton == nil then
    local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
    self.m_inventoryButton = window and window:GetInventoryButton()
  end
  return self.m_inventoryButton
end

function NoCDTrainBoardView:_OnStoreItem(message)
  self:_RemoveItemViewByView(self:GetItemView(message.Source))
  self:_UpdateIndicator()
  self.m_infoBar:UpdateInfoBar()
end

function NoCDTrainBoardView:_OnRetrieveStoredItem(message)
  local itemView = self:_AddItemView(message.Source)
  self.m_retrieveList[#self.m_retrieveList + 1] = itemView
  if GM.UIManager.allWindowClosed then
    self:_ShowRetrieveLight()
  end
  self:_UpdateIndicator(message.Source, true)
  if not self.m_infoBar.gameObject:IsNull() then
    local model = GM.ActivityManager:GetModel(self.m_activityType)
    if not (model and model.IsFinalLineOnGoing) or not model:IsFinalLineOnGoing() then
      self.m_infoBar:UpdateInfoBar(message.Source)
    end
  end
end

function NoCDTrainBoardView:_OnStoreFailed(message)
  local function onStoreFailed()
    local itemView = self:GetItemView(message.Item)
    
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    local key = message.Reason == StoreFailedReason.CannotStore and "hint_cannot_store" or "hint_inventory_full"
    GM.UIManager:ShowPromptWithKey(key, screenPosition)
  end
  
  DOVirtual.DelayedCall(ItemView.MoveDuration, onStoreFailed)
end

function NoCDTrainBoardView:_OnItemScaled(message)
  local items = message and message.Items
  if Table.IsEmpty(items) then
    return
  end
  for _, item in pairs(items) do
    local itemView = self:GetItemView(item)
    if itemView then
      itemView:PlayTapAnimation(0.3)
    end
  end
end

function NoCDTrainBoardView:_OnFinishTrainOrder(message)
  for _, itemModel in pairs(message.Removed) do
    self:_PlayRemoveOrderItemAnimation(itemModel, message.PosX, message.PosY, message.ActivityType, message.TargetPos, message.Delay, message.Callback)
  end
end

function NoCDTrainBoardView:_PlayRemoveOrderItemAnimation(itemModel, x, y, activityType, targetPos, delay, callback)
  self:_SetItemViewToBeRemoved(itemModel)
  local itemView = self:GetItemView(itemModel)
  local define = NoCDTrainDefinition[activityType]
  define = define or NoCDBingoDefinition[activityType] or PuzzleBingoDefinition[activityType]
  local window = GM.UIManager:GetOpenedViewByName(define.MainWindowPrefabName)
  if not window then
    return
  end
  local flyItem = self.m_itemViewFactory:CreateFlyingItemInUI(itemModel:GetCode(), window:GetFlyItemRoot())
  local transform = flyItem.transform
  local position = itemView.transform.position
  local rootPos = window:GetFlyItemRoot().position
  position = Vector3(position.x - 10000 + rootPos.x, position.y + 20000 + rootPos.y, 0)
  transform.position = position
  local targetPosition
  if targetPos then
    targetPosition = targetPos
  else
    local cell = window:GetCell(x, y)
    if not cell then
      return
    end
    targetPosition = cell.transform.position
  end
  local sequence = DOTween.Sequence()
  local moveDuration = 0.5
  delay = delay or 0
  sequence:InsertCallback(delay, function()
    self:_RemoveItemViewByView(itemView)
  end)
  sequence:Insert(delay + 0, transform:DOMove(targetPosition, moveDuration):SetEase(Ease.OutQuad))
  sequence:Insert(delay + 0, transform:DOScale(1.8, moveDuration * 0.7))
  sequence:Insert(delay + moveDuration * 0.7, transform:DOScale(0.8, moveDuration * 0.3))
  sequence:AppendCallback(function()
    Object.Destroy(flyItem)
    if callback ~= nil then
      callback()
    end
  end)
end

function NoCDTrainBoardView:_OnAddPdItem(message)
  local itemModel = message.New
  local itemView = self:_AddItemView(itemModel)
  local fromPos = message.FromPos
  local boardPosition = itemModel:GetPosition()
  local localPosition = boardPosition:ToLocalPosition()
  local zIndex = BaseSceneBoardModel.HorizontalTiles * BaseSceneBoardModel.VerticalTiles - BaseSceneBoardModel.HorizontalTiles * (boardPosition:GetY() - 1) - boardPosition:GetX() + 1
  fromPos = Vector3(fromPos.x + 390, fromPos.y + 750, zIndex * 10)
  itemView.transform.localPosition = fromPos
  local endPos = Vector3(localPosition.x + self.m_model.TileSize / 2, localPosition.y + self.m_model.TileSize / 2, zIndex * 10)
  itemView.transform:DOLocalMove(endPos, 1):SetEase(Ease.OutQuad)
end

function NoCDTrainBoardView:_OnPopCachedItem(message)
  self:_AddItemView(message.New)
end

function NoCDTrainBoardView:_GetHudButtonByPropertyType(ePropertyType)
  local window = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.MainWindowPrefabName)
  if window and window.GetHudButton then
    return window:GetHudButton(ePropertyType)
  else
    return BaseSceneBoardView._GetHudButtonByPropertyType(self, ePropertyType)
  end
end

function NoCDTrainBoardView:StopPrompt()
  self.m_stopPrompt = true
  self:_CancelPrompt()
end

function NoCDTrainBoardView:StartPrompt()
  self.m_stopPrompt = nil
  self:_TryStartPrompt()
end
