TutorialHelper = {}

function TutorialHelper.GetSceneView()
  return GM.UIManager:GetOpenedTopViewByType(EViewType.SceneView)
end

function TutorialHelper.ForceHideTutorialLayer()
  local sceneView = TutorialHelper.GetSceneView()
  if sceneView then
    local layer = sceneView:GetTutorialLayer()
    if layer then
      layer.gameObject:SetActive(false)
    end
  end
end

function TutorialHelper.GetTutorialLayer()
  return TutorialHelper.GetSceneView():GetTutorialLayer()
end

function TutorialHelper.GetSceneViewAndTutorialLayer()
  local sceneView = TutorialHelper.GetSceneView()
  return sceneView, sceneView and sceneView:GetTutorialLayer() or nil
end

function TutorialHelper.HideTutorialLayer(gesture, arrow)
  TutorialHelper.GetTutorialLayer():Hide(gesture, arrow)
end

function TutorialHelper.FinishTutorial(gesture, arrow)
  TutorialHelper.GetTutorialLayer():Finish(gesture, arrow)
end

function TutorialHelper.HideMask()
  TutorialHelper.GetTutorialLayer():HideMask()
end

function TutorialHelper.IsMaskShow()
  return TutorialHelper.GetTutorialLayer() and TutorialHelper.GetTutorialLayer():IsMaskShow()
end

local V3Zero = _ENV.V3Zero
local V2Zero = _ENV.V2Zero

function TutorialHelper.UpdateMask(center, size, callback, clipRectClickable, skipParams)
  TutorialHelper.GetTutorialLayer():UpdateMask(center or V3Zero, size or V2Zero, callback, clipRectClickable, skipParams)
end

function TutorialHelper.WholeMask(callback, skipParams)
  TutorialHelper.GetTutorialLayer():UpdateMask(V3Zero, V2Zero, callback, nil, skipParams)
end

function TutorialHelper.MaskOnItemBoard(from, to, callback, clipRectClickable, skipParams)
  TutorialHelper.GetTutorialLayer():UpdateMaskOnBoard(from, to, callback, clipRectClickable, skipParams)
end

function TutorialHelper.MaskOnGivenBoard(boardView, from, to, callback, clipRectClickable)
  TutorialHelper.GetTutorialLayer():UpdateMaskOnGivenBoard(boardView, from, to, callback, clipRectClickable)
end

function TutorialHelper.SetMaskAlphaOnce(alpha)
  TutorialHelper.GetTutorialLayer():SetMaskAlphaOnce(alpha)
end

function TutorialHelper.MaskDragToInventory(pos, text, callback, clipRectClickable, skipParams)
  local worldPos = TutorialHelper.GetHudButton(ESceneViewHudButtonKey.Inventory).transform.position
  GM.TutorialModel:SetForceSourceBoardPosition(pos)
  GM.TutorialModel:SetForceTargetBoardPosition(BaseSceneBoardModel.CreatePosition(0, 0))
  local boardview = BoardViewHelper.GetActiveView()
  local to = boardview:ConvertScreenPositionToWorldPosition(PositionUtil.UICameraWorld2Screen(worldPos))
  to = boardview:_GetBoardPosition(to)
  local from = PositionUtil.UICameraScreen2World(boardview:ConvertBoardPositionToScreenPosition(pos))
  local boardUnitSize = TutorialHelper.GetTutorialLayer():GetBoardUnitSize()
  boardUnitSize = boardUnitSize * 0.625
  local maskFrom = from + Vector3(boardUnitSize, boardUnitSize, 0)
  local maskTo = worldPos - Vector3(75, 75, 0)
  local center = (maskFrom + maskTo) / 2
  local dis = maskTo - maskFrom
  local size = Vector2(math.abs(dis.x), math.abs(dis.y))
  TutorialHelper.UpdateMask(center, size, nil, nil, skipParams)
  TutorialHelper.ShowDialogWithBoardMaskArea(text, to, pos)
  return TutorialHelper.GetTutorialLayer():PlayDragAnimation(from, worldPos + Vector3(0, 20, 0))
end

function TutorialHelper.Highlight(transform, dontRaycaster)
  TutorialHelper.GetTutorialLayer():Highlight(transform, dontRaycaster)
end

function TutorialHelper.Dehighlight(transform)
  TutorialHelper.GetTutorialLayer():Dehighlight(transform)
end

function TutorialHelper.IsHudButtonExist(hudButtonKey)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  return sceneView:GetHudButton(hudButtonKey) ~= nil
end

function TutorialHelper.HighlightHudButton(hudButtonKey, forceActive)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  sceneView:ScrollHudButtonToView(hudButtonKey)
  local hudButtonTransform = sceneView:GetHudButton(hudButtonKey).transform
  tutorialLayer:Highlight(hudButtonTransform)
  return hudButtonTransform
end

function TutorialHelper.DehighlightHudButton(hudButtonKey)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  local hudButton = sceneView and sceneView:GetHudButton(hudButtonKey) or nil
  if hudButton and hudButton.transform then
    tutorialLayer:Dehighlight(hudButton.transform)
  end
end

function TutorialHelper.HighlightOrder(order, mask)
  local boardView = MainBoardView.GetInstance()
  local orderArea = boardView and boardView:GetOrderArea() or nil
  local orderCell = orderArea and orderArea:GetCell(order) or nil
  if orderCell == nil then
    return
  end
  orderCell.gameObject:SetActive(true)
  orderArea:ForceRebuildLayout()
  local placeHolder = TutorialHelper.GetTutorialLayer():HighlightForBoard(orderCell.transform)
  if orderCell.SetRewardSortingOrder then
    orderCell:SetRewardSortingOrder(ESpecialViewSortingOrder.TutorialHighlight + 1)
    if mask and orderCell.SetHighlightMaskGoActive then
      orderCell:SetHighlightMaskGoActive(true)
    end
  end
  return orderCell, placeHolder
end

function TutorialHelper.DehighlightOrder(orderCell, localPositionStays)
  if orderCell and orderCell.SetRewardSortingOrder then
    orderCell:SetRewardSortingOrder(2)
  end
  if orderCell.SetHighlightMaskGoActive then
    orderCell:SetHighlightMaskGoActive(false)
  end
  TutorialHelper.GetTutorialLayer():DehighlightForBoard(orderCell.transform, localPositionStays)
end

function TutorialHelper.HighlightCacheRoot()
  local cacheRoot = TutorialHelper._GetBoardCacheRoot()
  if cacheRoot ~= nil then
    TutorialHelper.GetTutorialLayer():HighlightForBoard(cacheRoot.transform)
  end
  return cacheRoot
end

function TutorialHelper.DehighlightCacheRoot()
  local cacheRoot = TutorialHelper._GetBoardCacheRoot()
  if cacheRoot ~= nil then
    TutorialHelper.GetTutorialLayer():DehighlightForBoard(cacheRoot.transform)
  end
end

function TutorialHelper.HighlightBoardInfoBar()
  local infoBar = TutorialHelper._GetBoardInfoBar()
  if infoBar ~= nil then
    TutorialHelper.GetTutorialLayer():HighlightForBoard(infoBar.transform)
  end
  return infoBar
end

function TutorialHelper.DehighlightBoardInfoBar()
  local infoBar = TutorialHelper._GetBoardInfoBar()
  if infoBar ~= nil then
    TutorialHelper.GetTutorialLayer():DehighlightForBoard(infoBar.transform)
  end
end

function TutorialHelper.DehighlightBuildRoot()
  local cacheRoot = TutorialHelper._GetBuildRoot()
  if cacheRoot ~= nil then
    TutorialHelper.GetTutorialLayer():DehighlightForBoard(cacheRoot.transform)
  end
end

function TutorialHelper.HighlightBuildRoot()
  local infoBar = TutorialHelper._GetBuildRoot()
  if infoBar ~= nil then
    TutorialHelper.GetTutorialLayer():HighlightForBoard(infoBar.transform)
  end
  return infoBar
end

function TutorialHelper.HighlightDashActivityOrder(activityType)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    local orderCell = orderArea:GetActivityBoardCell(activityType)
    if orderCell ~= nil then
      TutorialHelper.GetTutorialLayer():HighlightForBoard(orderCell.transform)
    end
    return orderCell
  end
end

function TutorialHelper.HighlightBingoBoardCell(activityType)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    local cell = orderArea:GetActivityBoardCell(activityType)
    if cell ~= nil and cell.gameObject.activeSelf then
      TutorialHelper.GetTutorialLayer():HighlightForBoard(cell.transform)
      return cell
    end
  end
end

function TutorialHelper.HighlightDecorationBoardCell()
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    local cell = orderArea:GetDecorationBoardCell()
    if cell ~= nil and cell.gameObject.activeSelf then
      TutorialHelper.GetTutorialLayer():HighlightForBoard(cell.transform)
      return cell
    end
  end
end

function TutorialHelper.GetActivityOrderTrans(activityType)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    local cell = orderArea and orderArea:GetOrderTbByActivityType(activityType)
    return cell and cell.transform
  end
end

function TutorialHelper.HighLightItems(itemDatasArr)
  TutorialHelper.GetTutorialLayer():HighLightItems(itemDatasArr)
end

function TutorialHelper.HideLightItems()
  TutorialHelper.GetTutorialLayer():HideLightItems()
end

function TutorialHelper.HideGesture(gesture)
  TutorialHelper.GetTutorialLayer():HideGesture(gesture)
end

function TutorialHelper.TapCustomPos(worldPos, bFlipX)
  return TutorialHelper.GetTutorialLayer():PlayTapAnimation(worldPos, bFlipX)
end

function TutorialHelper.TapOnHudButton(hudButtonKey)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  return tutorialLayer:PlayTapAnimation(sceneView:GetHudButton(hudButtonKey).transform.position)
end

function TutorialHelper.TapOnInventoryHudButton()
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  return tutorialLayer:PlayTapAnimation(sceneView:GetHudButton(ESceneViewHudButtonKey.Inventory).transform.position + Vector3(0, 25, 0))
end

function TutorialHelper.TapOnCustomRectTrans(rectTrans, bFlipX)
  return TutorialHelper.TapCustomPos(rectTrans.position, bFlipX)
end

function TutorialHelper.TapOnBoard(boardPos)
  return TutorialHelper.GetTutorialLayer():PlayTapOnBoardAnimation(boardPos)
end

function TutorialHelper.TapOnGivenBoard(boardView, boardPos)
  return TutorialHelper.GetTutorialLayer():PlayTapOnGivenBoardAnimation(boardView, boardPos)
end

function TutorialHelper.TapOnItem(itemModel)
  return TutorialHelper.TapOnBoard(itemModel:GetPosition())
end

function TutorialHelper.TapOnItemBarOpenButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetOpenBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarSkipButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetSkipBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarUnlockButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetUnlockBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarInfoButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetInfoBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarRemoveButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetRemoveBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarUndoButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetUndoBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarActivateButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetActivateBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.TapOnItemBarMagicCrucibleButton()
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local position = boardView:GetInfoBar():GetMagicCrucibleBtnGo().transform.position
    position.z = 0
    return TutorialHelper.GetTutorialLayer():PlayTapAnimation(position)
  end
end

function TutorialHelper.DragOnItems(from, to, boardView)
  return TutorialHelper.GetTutorialLayer():PlayDragOnBoardAnimation(from, to, boardView)
end

function TutorialHelper.LockOnHudButton(hudButtonKey)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  return tutorialLayer:LockPos(sceneView:GetHudButton(hudButtonKey).transform.position, GM.TinyGameManager:GetGameType())
end

function TutorialHelper.LockCustomPos(position)
  return TutorialHelper.GetTutorialLayer():LockPos(position, GM.TinyGameManager:GetGameType())
end

function TutorialHelper.UpdateLockSortingOrder(order)
  return TutorialHelper.GetTutorialLayer():UpdateLockSortingOrder(order)
end

function TutorialHelper.HideLock()
  return TutorialHelper.GetTutorialLayer():HideLock()
end

function TutorialHelper.LockSlot(slot, callback)
  local slot = GM.MapLayer:GetSlot(slot)
  local pos = slot:GetAnchorPosition()
  GM.ResourceLoader:LoadPrefab(GM.DataResource:GetScenePrefabConfig(ScenePrefabConfigName.TinyGameLock), slot.transform, V3Zero, function(go)
    go:SetPos(pos.x, pos.y + 160, pos.z - 0.1)
    local icon = go:GetComponentInChildren(typeof(SpriteRenderer))
    SpriteUtil.SetSpriteRenderer(icon, GM.TinyGameManager:GetGameIcon())
    go.transform:SetLocalScale(1.3)
    slot.lock = go
    if callback then
      DelayExecuteFunc(callback, 0.8)
    end
  end)
end

function TutorialHelper.HideSlotLock(slot)
  local slot = GM.MapLayer:GetSlot(slot)
  if slot.lock then
    Recycle(slot.lock)
    slot.lock = nil
  end
end

function TutorialHelper.HideDialog(ignoreAni)
  TutorialHelper.GetTutorialLayer():HideDialog(ignoreAni)
end

function TutorialHelper.ShowDialog(text, anchorPercent, guideAvatarKey, expression)
  TutorialHelper.GetTutorialLayer():ShowText(text, anchorPercent, guideAvatarKey, expression)
end

function TutorialHelper.ShowDialogWithBoardMaskArea(text, boardPos1, boardPos2, guideAvatarKey, expression)
  TutorialHelper.GetTutorialLayer():ShowTextWithBoardMaskArea(text, boardPos1, boardPos2, guideAvatarKey, expression)
end

function TutorialHelper.ShowDialogWithGivenBoardMaskArea(boardView, text, boardPos1, boardPos2, guideAvatarKey, expression)
  TutorialHelper.GetTutorialLayer():ShowTextWithGivenBoardMaskArea(boardView, text, boardPos1, boardPos2, guideAvatarKey, expression)
end

function TutorialHelper.ShowDialogUnderTrans(text, tragetTrans, guideAvatarKey, expression)
  TutorialHelper.ShowDialogWithTrans(text, tragetTrans, 16, guideAvatarKey, expression)
end

function TutorialHelper.ShowDialogOnTrans(text, tragetTrans, guideAvatarKey, expression)
  TutorialHelper.ShowDialogWithTrans(text, tragetTrans, -16, guideAvatarKey, expression)
end

function TutorialHelper.ShowDialogWithTrans(text, tragetTrans, deltaPercent, guideAvatarKey, expression)
  local screenHeight = Screen.height
  local screenPosition = PositionUtil.UICameraWorld2Screen(tragetTrans.position).y
  local anchorPercent = (1 - screenPosition / screenHeight) * 100
  deltaPercent = deltaPercent or 0
  if 100 < anchorPercent + deltaPercent + 150 / screenHeight * 100 then
    deltaPercent = -deltaPercent
  end
  TutorialHelper.ShowDialog(text, anchorPercent + deltaPercent, guideAvatarKey, expression)
end

function TutorialHelper.UpdateDialogPositionOnPositionY(text, positionY, guideAvatarKey, expression)
  local screenHeight = Screen.height
  local screenPosition = PositionUtil.UICameraWorld2Screen(Vector3(0, positionY, 0)).y
  local anchorPercent = (1 - screenPosition / screenHeight) * 100
  local deltaPercent = -16
  if 100 < anchorPercent + deltaPercent + 150 / screenHeight * 100 then
    deltaPercent = -deltaPercent
  end
  TutorialHelper.ShowDialog(text, anchorPercent + deltaPercent, guideAvatarKey, expression)
end

function TutorialHelper.UpdateDialogPositionUnderTrans(tragetTrans)
  local screenHeight = Screen.height
  local screenPosition = PositionUtil.UICameraWorld2Screen(tragetTrans.position).y
  local anchorPercent = (1 - screenPosition / screenHeight) * 100
  local resultPercent = anchorPercent + 16 > 90 and anchorPercent - 16 or anchorPercent + 16
  TutorialHelper.UpdateDialogPosition(resultPercent)
end

function TutorialHelper.UpdateDialogPosition(anchorPercent)
  TutorialHelper.GetTutorialLayer():UpdateTextPosition(anchorPercent)
end

function TutorialHelper.HideArrow(arrow)
  TutorialHelper.GetTutorialLayer():HideArrow(arrow)
end

function TutorialHelper.AddArrow2HudButton(hudButtonKey, rotateZ)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  local hudButtonTransform = sceneView:GetHudButton(hudButtonKey).gameObject.transform
  local arrow = tutorialLayer:AddArrow(hudButtonTransform.position, rotateZ, hudButtonTransform.sizeDelta.x / 2)
  return arrow
end

function TutorialHelper.AddArrowToWorldPos(pos, rotateZ, radius)
  local sceneView, tutorialLayer = TutorialHelper.GetSceneViewAndTutorialLayer()
  local arrow = tutorialLayer:AddArrow(pos, rotateZ, radius)
  return arrow
end

function TutorialHelper.GetItems(itemType)
  return GM.MainBoardModel:FilterItemsWithType(itemType) or {}
end

function TutorialHelper.GetItemCount(itemType)
  return #TutorialHelper.GetItems(itemType)
end

function TutorialHelper.SpeedUpSpreadItem(itemType)
  local items = GM.MainBoardModel:GetItemsOfType(itemType)
  if 0 < #items then
    local spreader
    for _, item in ipairs(items) do
      spreader = item:GetComponent(ItemSpread)
      spreader:SpeedUp()
    end
  end
end

function TutorialHelper.GetSelectedItem()
  local boardView = BoardViewHelper.GetActiveView()
  return boardView and boardView:GetSelectedItemModel()
end

function TutorialHelper.GetMainFirstOrderCell()
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      local orderCell = orderArea:GetOrderRoot():GetChild(0)
      if orderCell ~= nil then
        return orderCell.gameObject:GetLuaTable()
      end
    end
  end
  return nil
end

function TutorialHelper.ScrollToFront(needAnim)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      orderArea:ScrollToFront(needAnim)
    end
  end
end

function TutorialHelper.ScrollActivityEntryToView(activityType, needAnim, toMid, toLeft)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      orderArea:ScrollActivityEntryToView(activityType, needAnim, true, toMid, toLeft)
    end
  end
end

function TutorialHelper.ScrollToTargetOrder(orderId, needAnim, bToMid)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      orderArea:ScrollTargetOrderToView(orderId, needAnim, bToMid)
    end
  end
end

function TutorialHelper.ScrollToFirstOrderByCondition(func, needAnim, bToMid)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      orderArea:ScrollToFirstOrderByCondition(func, needAnim, bToMid)
    end
  end
end

function TutorialHelper.ScrollToOrder(needAnim)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      orderArea:ScrollToOrder(needAnim)
    end
  end
end

function TutorialHelper.ScrollToBoardCacheRoot(needAnim)
  local boardView = MainBoardView.GetInstance()
  if boardView ~= nil then
    local orderArea = boardView:GetOrderArea()
    if orderArea ~= nil then
      orderArea:ScrollToBoardCacheRoot(needAnim, true)
    end
  end
end

function TutorialHelper.ShowTutorialBoard(tutorialBoardName)
  GM.UIManager:OpenView(UIPrefabConfigName.TutorialBoardWindow, tutorialBoardName)
end

function TutorialHelper.GetHudButton(hudButonKey)
  local sceneView = TutorialHelper.GetSceneView()
  if not sceneView then
    Log.Error("SceneView \230\154\130\230\156\170\231\148\159\230\136\144\239\188\129")
    return nil
  end
  return sceneView:GetHudButton(hudButonKey)
end

function TutorialHelper.SetItemBarInfoButtonState(bActive)
  local boardView = BoardViewHelper.GetActiveView()
  if boardView ~= nil then
    local go = boardView:GetInfoBar():GetInfoBtnGo()
    UIUtil.SetActive(go, bActive or false)
  end
end

function TutorialHelper._GetBoardInfoBar()
  local boardView = BoardViewHelper.GetActiveView()
  return boardView and boardView:GetInfoBar()
end

function TutorialHelper._GetBoardCacheRoot()
  local boardView = BoardViewHelper.GetActiveView()
  return boardView and boardView:GetBoardCacheRoot()
end

function TutorialHelper._GetBuildRoot()
  local boardView = BoardViewHelper.GetActiveView()
  return boardView and boardView:GetBuildRoot()
end

function TutorialHelper.SetHudButtonEnable(key, bEnable)
  local btn = TutorialHelper.GetHudButton(key)
  btn:SetClickEnabled(bEnable)
end

function TutorialHelper.SetShowCacheItemFirst(bShow)
  local cacheRoot = TutorialHelper._GetBoardCacheRoot()
  if cacheRoot then
    cacheRoot:SetShowCacheItemFirst(bShow)
    cacheRoot:UpdateContent()
  end
end

function TutorialHelper.SetMainOrderAreaLock(bLock)
  TutorialHelper.MainOrderAreaLocked = bLock
end

function TutorialHelper.IsMainOrderAreaLocked()
  return TutorialHelper.MainOrderAreaLocked
end

function TutorialHelper.ScrollHudButtonToView(hudButtonKey, bOnlyValidWhileTutorialMaskShow)
  if bOnlyValidWhileTutorialMaskShow and not TutorialHelper.IsMaskShow() then
    return
  end
  local sceneView = TutorialHelper.GetSceneViewAndTutorialLayer()
  if sceneView then
    sceneView:ScrollHudButtonToView(hudButtonKey)
  end
end

function TutorialHelper.SetHightLightBoardClickable(bClickable)
  TutorialHelper.GetTutorialLayer():SetHightLightBoardClickable(bClickable)
end
