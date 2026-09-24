BaseBoardView = {
  Tile1Sprite = ImageFileConfigName.tile_bg1,
  Tile2Sprite = ImageFileConfigName.tile_bg2
}
BaseBoardView.__index = BaseBoardView

function REGISTER_BOARD_EVENT_HANDLER(view, eventName)
  local functionName = "_On" .. eventName
  AddHandlerAndRecordMap(view.m_model.event, BoardEventType[eventName], {
    obj = view,
    method = view[functionName]
  })
end

function BaseBoardView:Init(boardModel)
  self.m_model = boardModel
  self.m_tileMap = {}
  self.m_modelViewMap = {}
  for position in boardModel.GetValidPositionIterator() do
    self:_AddTile(BoardPosition.Copy(position))
    local itemModel = boardModel:GetItem(position, true)
    if itemModel ~= nil then
      self:_AddItemView(itemModel, nil, true)
    end
  end
  self:_UpdateTile()
  REGISTER_BOARD_EVENT_HANDLER(self, "SpreadItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "SwallowItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "BatchSwallowItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "TransformItem")
  REGISTER_BOARD_EVENT_HANDLER(self, "ChargeItem")
end

function BaseBoardView:OnDestroy()
  if self.m_model ~= nil then
    RemoveAllHandlers(self.m_model.event, self)
  end
end

function BaseBoardView:GetModel()
  return self.m_model
end

function BaseBoardView:GetItemsTransform()
  return self.m_itemsTransform
end

function BaseBoardView:_GetBoardPosition(worldPosition)
  local localPosition = self.transform:InverseTransformPoint(worldPosition)
  return self.m_model.CreatePositionFromLocalPosition(localPosition.x, localPosition.y)
end

function BaseBoardView:GetItemView(itemModel)
  return self.m_modelViewMap[itemModel]
end

function BaseBoardView:_AddItemView(itemModel, currentView, force, bAnim)
  local pos = itemModel:GetPosition()
  local curItem = self.m_model:GetItem(pos, force)
  if curItem ~= nil and curItem ~= itemModel then
    local info = pos:GetX() .. "_" .. pos:GetY() .. ", cur logic item id is " .. curItem:GetId() .. ", code is " .. curItem:GetCode() .. ", add item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode() .. "\n" .. debug.traceback()
    if bAnim then
      GM.BIManager:LogString(EBIProjectType.ElementOverlapLogic, info)
    else
      GM.BIManager:LogErrorInfo(EBIProjectType.ElementOverlapLogic, info)
    end
    return
  end
  for k, v in pairs(self.m_modelViewMap) do
    if v.toBeRemoved ~= true and k:GetPosition() == pos and (currentView == nil or v ~= currentView) then
      local curItem = v:GetModel()
      self:_RemoveItemViewByView(v)
      local info = pos:GetX() .. "_" .. pos:GetY() .. ", cur view item id is " .. curItem:GetId() .. ", code is " .. curItem:GetCode() .. ", add item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode()
      if bAnim then
        GM.BIManager:LogString(EBIProjectType.ElementOverlapView, info)
      else
        GM.BIManager:LogErrorInfo(EBIProjectType.ElementOverlapView, info)
      end
    end
  end
  local itemView = self.m_itemViewFactory:Create(self, itemModel)
  self.m_modelViewMap[itemModel] = itemView
  return itemView
end

function BaseBoardView:_RemoveItemViewByView(itemView)
  if itemView == nil then
    return
  end
  local itemModel = itemView:GetModel()
  local curView = self.m_modelViewMap[itemModel]
  if itemModel ~= nil and curView == nil then
    local pos = itemModel:GetPosition()
    local info = pos:GetX() .. "_" .. pos:GetY() .. ", item id is " .. itemModel:GetId() .. ", code is " .. itemModel:GetCode()
    GM.BIManager:LogErrorInfo(EBIProjectType.ElementNoViewWhenRemove, info)
  end
  if itemView.OnRemoved then
    itemView:OnRemoved()
  end
  itemView.gameObject:RemoveSelf()
  self.m_modelViewMap[itemModel] = nil
end

function BaseBoardView:_AddTile(boardPosition)
  local tileObject = Object.Instantiate(self.m_tilePrefab, self.m_tilesTransform)
  local tileSprite = tileObject:GetComponent(typeof(SpriteRenderer))
  self.m_tileMap[boardPosition] = tileSprite
  local localPosition = boardPosition:ToLocalPosition()
  tileObject.transform.localPosition = Vector3(localPosition.x + self.m_model.TileSize / 2, localPosition.y + self.m_model.TileSize / 2, 0)
end

function BaseBoardView:_UpdateTile(tile1Sprite, tile2Sprite)
  local tile1 = tile1Sprite and tile1Sprite or self.Tile1Sprite
  local tile2 = tile2Sprite and tile2Sprite or self.Tile2Sprite
  for position, tileSprite in pairs(self.m_tileMap) do
    local isEven = (position:GetX() + position:GetY()) % 2 == 0
    SpriteUtil.SetSpriteRenderer(tileSprite, isEven and tile1 or tile2)
  end
end

function BaseBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  local itemSwallow = itemModel:GetComponent(ItemSwallow)
  return itemSwallow ~= nil and itemSwallow:CanSwallow(lastItemModel)
end

function BaseBoardView:_TryShowMergeLight(worldPosition)
  local boardPosition = self:_GetBoardPosition(worldPosition)
  if self.m_model:IsTileLock(boardPosition) then
    return
  end
  local itemModel = self.m_model:GetItem(boardPosition)
  local itemView = self:GetItemView(itemModel)
  if itemView == self.m_lastMergeLightItem then
    return
  end
  self:_ClearMergeLight()
  local lastItemModel = self.m_lastTouchedItem:GetModel()
  if itemModel == nil or itemModel == lastItemModel then
    return
  end
  if self:_CanShowMergeLight(itemModel, lastItemModel) then
    self:_ShowMergeLight(itemView)
  end
end

function BaseBoardView:_ShowMergeLight(itemView)
  itemView:MergeLightAppear()
  self.m_lastMergeLightItem = itemView
end

function BaseBoardView:_ClearMergeLight()
  if self.m_lastMergeLightItem ~= nil then
    if not self.m_lastMergeLightItem.gameObject:IsNull() then
      self.m_lastMergeLightItem:MergeLightDisappear()
    end
    self.m_lastMergeLightItem = nil
  end
end

function BaseBoardView:_PlayJumpAnimation(itemView, sourcePosition, targetPosition, boardSpreadType, speedup, onKill)
  local luckySpread = BoardSpreadType.IsLuckySpread(boardSpreadType)
  local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, -1)
  local targetPositionZero = Vector3(targetPosition.x, targetPosition.y, -1)
  local deltaPosition = targetPositionZero - sourcePositionZero
  local alpha = speedup or 1
  local transform = itemView.gameObject.transform
  transform.localPosition = sourcePositionZero
  transform.localScale = Vector3.zero
  local sequence = DOTween.Sequence()
  itemView:SetJumpTween(sequence)
  sequence:Insert(0.05, transform:DOLocalJump(sourcePositionZero + deltaPosition * 0.9, 60, 1, 0.6 * alpha))
  sequence:Insert(0.65 * alpha, transform:DOLocalMove(targetPosition, 0.25):SetEase(Ease.OutQuad))
  sequence:InsertCallback(0.6 * alpha, function()
    itemView:ShowSpreadLight(boardSpreadType)
    self:_PlayLuckyProducePrompt(itemView, boardSpreadType)
  end)
  sequence:InsertCallback(0.7 * alpha, function()
    self:_OnJumpFinished(itemView)
  end)
  sequence:Insert(0.05 * alpha, transform:DOScale(Vector3(0.8, 0.8, 1), 0.1 * alpha))
  sequence:Insert(0.15 * alpha, transform:DOScale(Vector3(1.5, 1.5, 1), 0.2 * alpha))
  sequence:Insert(0.35 * alpha, transform:DOScale(Vector3(1, 1, 1), 0.3 * alpha))
  sequence:Insert(0.65 * alpha, transform:DOScale(V3One, 0.2 * alpha))
  if luckySpread then
    itemView:ShowLuckySpreadEffect()
    sequence:InsertCallback(0.65 * alpha, function()
      itemView:RemoveLuckySpreadEffect()
    end)
  end
  sequence:OnKill(onKill)
  return sequence
end

function BaseBoardView:_OnJumpFinished(itemView)
end

function BaseBoardView:_PlayLuckyProducePrompt(itemView, spreadEffectType)
end

function BaseBoardView:_OnSpreadItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  local newItemView = self:_AddItemView(message.New)
  if newItemView ~= nil then
    self:_PlayJumpAnimation(newItemView, sourceItemView.transform.localPosition, newItemView.transform.localPosition, message.BoardSpreadType)
  end
end

function BaseBoardView:_OnSwallowItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  sourceItemView.toBeRemoved = true
  local targetItemView = self:GetItemView(message.Target)
  local targetPosition = targetItemView.transform.localPosition
  local sequence = DOTween.Sequence()
  sequence:Insert(0, sourceItemView.transform:DOLocalMove(targetPosition, 0.1))
  sequence:Insert(0, sourceItemView.transform:DOScale(0.3, 0.1))
  sequence:InsertCallback(0.1, function()
    if self:GetItemView(message.Source) == sourceItemView then
      self:_RemoveItemViewByView(sourceItemView)
    end
  end)
end

function BaseBoardView:_OnBatchSwallowItem(message)
  self:_DoBatchSwallowItem(message, nil, nil)
end

function BaseBoardView:_DoBatchSwallowItem(message, onBegin, onEnd)
  local targetItemView = self:GetItemView(message.Target)
  if not targetItemView then
    return
  end
  if onBegin ~= nil then
    onBegin()
  end
  local targetPosition = targetItemView.transform.position
  targetPosition.z = 0
  local reachedCount = 0
  local mergeLightAppearItem = {}
  for _, sourceItem in ipairs(message.Sources) do
    local sourceItemView = self:GetItemView(sourceItem)
    if not sourceItemView then
      if onEnd ~= nil then
        onEnd()
      end
      return
    end
    local sourcePosition = sourceItemView.transform.position
    sourcePosition.z = 0
    sourceItemView.transform.position = sourcePosition
    
    local function onUpdate(value)
      local currentPosition = Vector3.Lerp(sourcePosition, targetPosition, value)
      sourceItemView.transform.position = currentPosition
      local boardPosition = self:_GetBoardPosition(currentPosition)
      if boardPosition == message.Target:GetPosition() then
        if Table.IsEmpty(mergeLightAppearItem) then
          targetItemView:MergeLightAppear()
        end
        mergeLightAppearItem[sourceItem] = true
      end
    end
    
    local function onComplete()
      local itemSwallow = message.Target:GetComponent(ItemSwallow)
      itemSwallow:Swallow(sourceItem, message.Index)
      mergeLightAppearItem[sourceItem] = nil
      if Table.IsEmpty(mergeLightAppearItem) then
        targetItemView:MergeLightDisappear()
      end
      reachedCount = reachedCount + 1
      if reachedCount == #message.Sources and onEnd ~= nil then
        onEnd()
      end
    end
    
    local distance = Vector3.Distance(sourcePosition, targetPosition)
    DOVirtual.Float(0, 1, distance / 1200, onUpdate):OnComplete(onComplete)
  end
end

function BaseBoardView:_OnSplitItem(message)
  self:_DoSplitItem(message, nil, nil)
end

function BaseBoardView:_DoSplitItem(message, onBegin, onEnd)
  local toBeSplitView = self:GetItemView(message.ToBeSplit)
  local splitItemView = self:GetItemView(message.Split)
  if not toBeSplitView or not splitItemView then
    return
  end
  if onBegin ~= nil then
    onBegin()
  end
  local itemSplit = message.Split:GetComponent(ItemSplit)
  self:_RemoveItemViewByView(splitItemView)
  local sequence = DOTween.Sequence()
  toBeSplitView:MergeLightDisappear()
  toBeSplitView:ShowItemSplitAnimation(itemSplit:GetNextType() == nil)
  sequence:Insert(0.3333333333333333, toBeSplitView.transform:DOScale(0.3, 0.16666666666666666):SetEase(Ease.OutSine))
  sequence:InsertCallback(0.5, function()
    if onEnd ~= nil then
      onEnd()
    end
    local new1, new2, newSplit = itemSplit:DoSplitItem(message.ToBeSplit, message.TargetPosition)
    if not new1 then
      return
    end
    local newItemView1 = self:_AddItemView(new1, toBeSplitView)
    self:_PlayJumpAnimation(newItemView1, toBeSplitView.transform.localPosition, newItemView1.transform.localPosition)
    local newItemView2 = self:_AddItemView(new2, toBeSplitView)
    self:_PlayJumpAnimation(newItemView2, toBeSplitView.transform.localPosition, newItemView2.transform.localPosition)
    self:_RemoveItemViewByView(toBeSplitView)
    if newSplit then
      local newSplitView = self:_AddItemView(newSplit)
      newSplit:SetPosition(newSplit:GetPosition())
      newSplitView.transform.localScale = 0.3 * Vector3.zero
      newSplitView.transform:DOScale(1, 0.2)
    end
  end)
end

function BaseBoardView:_OnTransformItem(message)
  local sourceItemView = self:GetItemView(message.Source)
  local newItemView = self:_AddItemView(message.New, sourceItemView)
  sourceItemView.toBeRemoved = true
  local sequence = DOTween.Sequence()
  if message.Source and message.Source:GetComponent(ItemDig) ~= nil then
  else
    sequence:Insert(0, sourceItemView.transform:DOScale(0.3, 0.1))
  end
  sequence:InsertCallback(0.1, function()
    self:_RemoveItemViewByView(sourceItemView)
  end)
  if newItemView ~= nil then
    if message.New:GetComponent(ItemDig) ~= nil then
      newItemView.transform.localScale = V3One
    elseif StringUtil.StartWith(message.Source:GetType(), ItemCodePrefix.Turnbox) then
      newItemView:PlayUpgradeEffect({
        Item = message.New
      })
      local newItemPos = Vector3(newItemView.transform.localPosition.x, newItemView.transform.localPosition.y, 0)
      local deltaPosition = Vector3(0, 80, 0)
      message.New:SetLocked(true)
      sequence:Insert(0.1, newItemView.transform:DOLocalMove(newItemPos + deltaPosition, 0.4):SetEase(Ease.InOutCubic))
      sequence:Insert(0.5, newItemView.transform:DOLocalMove(newItemPos, 0.2):SetEase(Ease.InOutCubic))
      sequence:Insert(0.1, newItemView.transform:DOScale(1.3, 0.4))
      sequence:Insert(0.5, newItemView.transform:DOScale(1, 0.2))
      sequence:OnComplete(function()
        message.New:SetLocked(false)
        message.New:SetPosition(message.New:GetPosition())
      end)
    else
      newItemView.transform.localScale = Vector3.zero
      sequence:InsertCallback(0.1, function()
        newItemView.transform.localScale = 0.3 * V3One
      end)
      sequence:Insert(0.1, newItemView.transform:DOScale(1.3, 0.2))
      sequence:Insert(0.3, newItemView.transform:DOScale(1, 0.1))
      if not UIUtil.IsEmptyComponent(newItemView) and StringUtil.StartWith(message.New:GetCode(), "sbox_2") then
        sequence:InsertCallback(0.1, function()
          newItemView:ShowAnniversarySBoxEffect()
        end)
      end
    end
  end
end

function BaseBoardView:_OnChargeItem(message)
  local item = message.Source
  local sourceItemView = self:GetItemView(item)
  sourceItemView:UpdateChargeState(item:GetComponent(ItemCharge))
end

function BaseBoardView:IsMainBoard()
  return false
end

function BaseBoardView:_UpdateItemAffectedEffect()
  local itemModel = self.m_lastTouchedItem and self.m_lastTouchedItem:GetModel() or nil
  for _, view in pairs(self.m_modelViewMap) do
    if view ~= self.m_lastTouchedItem then
      view:UpdateItemAffectedEffect(itemModel)
    end
  end
end

function BaseBoardView:SetRaycastEnabled()
end
