HuntMapActivityBoardView = setmetatable({}, BaseUIBoardView)
HuntMapActivityBoardView.__index = HuntMapActivityBoardView
HuntMapActivityBoardView.MergePromptInterval = 2.3

function HuntMapActivityBoardView.GetInstance()
  return HuntMapActivityBoardView.s_instance
end

function HuntMapActivityBoardView:Init(activityType, boardModel, itemDeleteButton)
  BaseUIBoardView.Init(self, activityType, boardModel, itemDeleteButton)
  HuntMapActivityBoardView.s_instance = self
  if not UIUtil.IsEmptyComponent(self.m_testText) then
    UIUtil.SetActive(self.m_testText.gameObject, GameConfig.IsTestMode() and PlayerPrefs.GetInt(EPlayerPrefKey.ShowItemTestInfo, 0) ~= 0 and GM.UIManager:IsTestActivityButtonValid())
  end
  EventDispatcher.AddListener(EEventType.HuntPdSwallowFailed, self, self._OnHuntPdItemOnTap)
end

function HuntMapActivityBoardView:_Ctor(activityType, boardModel, itemDeleteButton)
  self.m_activityType = activityType
  self.m_activityDefinition = HuntMapActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.m_mapScrollSeq = {}
  self.m_completeTileMap = HuntMapActivityBoardModel.CreateMatrix()
  self.CompleteTileColor = UIUtil.ConvertHexColor2CSColor("84d38e")
  self.m_bHasCloudKeyLock = boardModel:HasCloudKeyLock()
  self.m_bTileInversed = false
  self.m_cloudView = {}
end

function HuntMapActivityBoardView:_RegisterBoardEvent()
  BaseUIBoardView._RegisterBoardEvent(self)
  REGISTER_BOARD_EVENT_HANDLER(self, "AddMonsterSpreadItem")
end

function HuntMapActivityBoardView:GetBoardCamera()
  return GM.ModeViewController:GetHuntActivityBoardCamera()
end

function HuntMapActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  if HuntMapActivityBoardView.s_instance == self then
    HuntMapActivityBoardView.s_instance = nil
  end
end

function HuntMapActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return HuntMapActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function HuntMapActivityBoardView:_CanShowMergeLight(itemModel, lastItemModel)
  if itemModel:GetComponent(ItemSand) and lastItemModel:GetComponent(ItemBroom) then
    return true
  end
  if self.m_model:CanItemMerge(itemModel, lastItemModel) then
    return true
  end
  return BaseUIBoardView._CanShowMergeLight(self, itemModel, lastItemModel)
end

function HuntMapActivityBoardView:_UpdateIndicator(item, playAnimation)
  if self.m_model:GetSkipNextIndicatorUpdate() then
    self.m_model:SetSkipNextIndicatorUpdate(nil)
    return
  end
  BaseUIBoardView._UpdateIndicator(self, item, playAnimation)
  if GM.ConfigModel:IsSwallowDisOpen("hunt") then
    self.m_swallowItemIndicator:UpdateIndicator(item, nil, self.m_model)
  else
    self.m_swallowItemIndicator:UpdateIndicator(item, playAnimation, self.m_model)
  end
  self.m_portalItemIndicator:UpdateIndicator(item, playAnimation)
  if not UIUtil.IsEmptyComponent(self.m_testText) and self.m_testText.gameObject.activeSelf then
    if item then
      self.m_testText.text = item:GetCode()
    else
      self.m_testText.text = ""
    end
    local sig = self.m_model:GetExtraItem(2)
    if sig then
      self.m_testText.text = self.m_testText.text .. "\n" .. sig:GetCode()
    end
  end
end

function HuntMapActivityBoardView:GetTapPromptOffest()
  return Vector3(0, HuntMapActivityBoardModel.TileSize / 2, 0)
end

function HuntMapActivityBoardView:_GetIsDragToUnlockCloud()
  return false
end

function HuntMapActivityBoardView:_GetPrompts()
  if GameConfig.IsTestMode() and GM.TestAutoRunModel.mergeAll then
    return {
      BoardPromptHuntMapMergeItems.Create()
    }
  end
  local prompts = {
    BoardPromptHuntMapMaxLevelItem.Create(self.m_activityType),
    BoardPromptHuntMapMergeItems.Create(),
    BoardPormptHuntMapPopCache.Create(),
    BoardPromptHuntMapBubble.Create(),
    BoardPromptHuntMapCollect.Create()
  }
  return prompts
end

function HuntMapActivityBoardView:_OnTransformItem(message)
  BaseUIBoardView._OnTransformItem(self, message)
  if message.Source:GetComponent(ItemDig) ~= nil and message.New:GetComponent(ItemDig) == nil then
    EventDispatcher.DispatchEvent(EEventType.DigOreCollapse)
  end
end

function HuntMapActivityBoardView:GetBIActionMap()
  return EGameMode.HuntMap
end

function HuntMapActivityBoardView:_OnHuntPdTransformItem(message)
  BaseUIBoardView._OnHuntPdTransformItem(self, message)
  self:_UpdateIndicator()
end

function HuntMapActivityBoardView:InverseTiles()
  self.m_bTileInversed = not self.m_bTileInversed
  self:_UpdateTile()
end

function HuntMapActivityBoardView:GetVerticalHorizontalTiles()
  return HuntMapActivityBoardModel.VerticalTiles, HuntMapActivityBoardModel.HorizontalTiles
end

function HuntMapActivityBoardView:_OnAddMonsterSpreadItem(message)
  local worldPos = self:GetItemView(message.SourceItem).transform.position + Vector3(-200, -200)
  if not worldPos then
    return
  end
  local code = message.Code or message.New:GetCode()
  if StringUtil.StartWith(code, ItemCodePrefix.Bubble) then
    code = string.sub(code, 3, #code)
  end
  local flyItem = self.m_itemViewFactory:CreateFlyItem(self, code, ItemFlyView.EFLYTYPE.HuntActivity)
  flyItem.transform:SetParent(message.FlyItemRoot)
  flyItem:SetTail(UIPrefabConfigName.effct_UI_tw_6)
  local transform = flyItem.transform
  local itemView
  if message.Code then
    local cacheRoot = self:GetCacheRoot()
    flyItem.transform.position = cacheRoot.transform.position
  else
    itemView = self:_AddItemView(message.New)
    flyItem.transform.position = itemView.transform.position
    itemView.gameObject:SetActive(false)
  end
  PropertyAnimationManager.AddFlyingCount()
  local sourcePosition = transform.parent:InverseTransformPoint(worldPos)
  sourcePosition.z = -500
  local targetPosition = transform.localPosition
  targetPosition.z = -500
  local screenPos = self:ConvertWorldPositionToScreenPosition(worldPos)
  local width = GM.UIManager:GetCanvasSize().x
  local deltaX = 0
  local screenX = screenPos.x
  if screenX > width * 0.65 then
    deltaX = -200
  elseif screenX < width * 0.25 then
    deltaX = 200
  else
    deltaX = 200 * (message.Index & 1 == 1 and -1 or 1)
  end
  local sourcePositionZero = Vector3(sourcePosition.x, sourcePosition.y, 0)
  transform.localPosition = sourcePositionZero
  transform.localScale = V3Zero
  local midPosition = Vector3(sourcePosition.x + deltaX, sourcePosition.y, 0)
  local sequence = DOTween.Sequence()
  local delay = (math.min(5, message.Index) - 1) * 0.2
  sequence:AppendInterval(delay)
  sequence:Append(transform:DOScale(Vector3(0.5, 0.5, 1), 0.1))
  sequence:Append(transform:DOScale(Vector3(0.8, 0.8, 1), 0.2))
  sequence:Append(transform:DOScale(V3One, 0.3))
  sequence:Append(transform:DOScale(V3One, 0.2))
  sequence:Insert(0.05 + delay, transform:DOLocalJump(midPosition, 150, 1, 0.3))
  sequence:Insert(0.35 + delay, transform:DOLocalMove(targetPosition, 0.55))
  sequence:AppendInterval(0.2)
  sequence:OnKill(function()
    PropertyAnimationManager.RemoveFlyingCount()
    if itemView and itemView.gameObject and not itemView.gameObject:IsNull() then
      itemView.gameObject:SetActive(true)
    end
    if flyItem and flyItem.gameObject and not flyItem.gameObject:IsNull() then
      Object.Destroy(flyItem.gameObject)
    end
  end)
end

function HuntMapActivityBoardView:_OnHuntPdItemOnTap(message)
  if message and message.Index == 2 then
    local itemView = self:GetItemView(message.Item)
    local targetPosition = (itemView and itemView.transform.position or V3Zero) + Vector3(-50, 200, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    local key = self.m_activityDefinition.SWallowClickKey
    if not key then
      return
    end
    GM.UIManager:ShowPromptWithKey(key, screenPosition)
  end
end
