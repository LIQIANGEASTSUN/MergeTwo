BaseUIBoardObstacleLayerView = {}
BaseUIBoardObstacleLayerView.__index = BaseUIBoardObstacleLayerView

function BaseUIBoardObstacleLayerView:Init(boardView)
  self.m_boardView = boardView
  self.m_boardModel = boardView:GetModel()
  self.m_model = self.m_boardModel:GetObstacleLayerModel()
  self.m_activityDefinition = self.m_boardModel:GetActivityModel():GetDefinition()
  self:LoadObstacle()
end

function BaseUIBoardObstacleLayerView:LoadObstacle()
  self.m_obstacleViewMap = {}
  for _, obstacleModel in pairs(self.m_model:GetObstacleModels()) do
    self:_AddObstacleView(obstacleModel)
  end
end

function BaseUIBoardObstacleLayerView:OnDestroy()
  GM.UIManager:RemoveAllEventLocks(self)
  Scheduler.UnscheduleTarget(self)
  if self.m_rewardWindow ~= nil and not self.m_rewardWindow.gameObject:IsNull() then
    self.m_rewardWindow:Close()
  end
end

function BaseUIBoardObstacleLayerView:_AddObstacleView(obstacleModel)
  local leftTop, rightBottom = obstacleModel:GetPosition()
  if leftTop == nil or rightBottom == nil then
    return
  end
  local position = self:ObstacleViewPosition(leftTop, rightBottom)
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(obstacleModel:GetPrefabName()), self.transform, V3Zero, function(obstacleObject)
    if not obstacleObject:IsNull() then
      obstacleObject.name = BaseUIBoardContainer.ObstacleName
      obstacleObject.transform.position = Vector3(position.x, position.y, obstacleObject.transform.position.z)
      local obstacleView = obstacleObject:GetLuaTable()
      obstacleView:Init(obstacleModel, self)
      self.m_obstacleViewMap[obstacleModel] = obstacleView
    end
  end)
end

function BaseUIBoardObstacleLayerView:ObstacleViewPosition(leftTop, rightBottom)
  local halfTileSize = self.m_boardModel.TileSize * 0.5
  local leftTopLocalPos = self.m_boardModel:ToLocalPosition(leftTop)
  leftTopLocalPos = Vector3(leftTopLocalPos.x + halfTileSize, leftTopLocalPos.y + halfTileSize, 0)
  local leftTopWorldPosition = self.m_boardView:GetItemsTransform():TransformPoint(leftTopLocalPos)
  local rightBottomLocalPos = self.m_boardModel:ToLocalPosition(rightBottom)
  rightBottomLocalPos = Vector3(rightBottomLocalPos.x + halfTileSize, rightBottomLocalPos.y + halfTileSize, 0)
  local rightBottomWorldPosition = self.m_boardView:GetItemsTransform():TransformPoint(rightBottomLocalPos)
  local worldPosition = (leftTopWorldPosition + rightBottomWorldPosition) * 0.5
  return worldPosition
end

function BaseUIBoardObstacleLayerView:OnRemoveObstacle(obstacleView)
  local obstacleModel = obstacleView:GetModel()
  local currentView = self.m_obstacleViewMap[obstacleModel]
  if obstacleModel ~= nil and currentView == nil then
    Log.Error("BaseUIBoardObstacleLayerView:_OnRemoveObstacle error: not found obstacleView, obstacleIndex = " .. obstacleModel:GetIndex())
  end
  self.m_obstacleViewMap[obstacleModel] = nil
  local obstaclePosition = self.m_boardView:ConvertWorldPositionToUIWorldPosition(obstacleView.transform.position)
  local reward = obstacleModel:GetReward()
  GM.UIManager:SetEventLock(true, self)
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.FlyObstacleRewardItem), self.transform, V3Zero, function(go)
    if not go:IsNull() then
      go.transform.position = obstacleView.transform.position
      local flyTool = go:GetLuaTable()
      local rewardImage = RewardApi.GetRewardIconNameAndIsSetNativeSize(reward[PROPERTY_TYPE])
      if obstacleView ~= nil and not obstacleView.gameObject:IsNull() then
        obstacleView:OnRewardHide()
      end
      flyTool:Init(rewardImage, function()
        if obstacleView ~= nil and not obstacleView.gameObject:IsNull() then
          obstacleView:OnRemove()
          self:OpenRewardWindow(reward, obstaclePosition, function()
            GM.UIManager:SetEventLock(false, self)
            if not go:IsNull() then
              AddressableLoader.Destroy(go)
            end
          end)
        end
      end)
    end
  end)
end

function BaseUIBoardObstacleLayerView:OpenRewardWindow(reward, obstaclePosition, callback)
  local args = {
    reward = reward,
    rewardWorldPosition = obstaclePosition,
    titleText = GM.GameTextModel:GetText(self.m_activityDefinition.TextKeyPrefixFull .. "_obstacle_title"),
    descText = GM.GameTextModel:GetText(self.m_activityDefinition.TextKeyPrefixFull .. "_obstacle_desc"),
    rewardAnimationFunc = function(rewardItem, closeFunc)
      self.m_rewardWindow = nil
      if self == nil or self.gameObject:IsNull() then
        closeFunc()
        return
      end
      GM.UIManager:SetEventLock(true, self)
      DelayExecuteFuncInView(function()
        GM.UIManager:SetEventLock(false, self)
        if self == nil or self.gameObject:IsNull() or self.m_boardView == nil or self.m_boardView.gameObject:IsNull() then
          closeFunc()
          return
        end
        local startBoardWorldPos = self.m_boardView:ConvertUIWorldPositionToWorldPosition(rewardItem.transform.position)
        local cachedRewardItemInfo = self.m_model:GetCachedRewardItemInfo()
        if cachedRewardItemInfo then
          if cachedRewardItemInfo.itemModel then
            self.m_boardView:OnAddFlyItem(cachedRewardItemInfo.itemModel, startBoardWorldPos, BoardSpreadType.ObstacleReward)
          else
            self:FlyToCacheRoot(cachedRewardItemInfo.itemCode, startBoardWorldPos)
          end
          self.m_model:ClearCachedRewardItemInfo()
        end
        closeFunc()
      end, 0.2, self)
    end,
    initCallback = function(window)
      self.m_rewardWindow = window
      if callback ~= nil then
        callback()
      end
    end
  }
  GM.UIManager:OpenView(UIPrefabConfigName.OneRewardWindow, args)
end

function BaseUIBoardObstacleLayerView:FlyToCacheRoot(itemCode, startBoardWorldPos)
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.FlyElement), self.transform, V3Zero, function(go)
    if not go:IsNull() then
      go.transform.position = startBoardWorldPos
      local flyElement = go:GetLuaTable()
      flyElement:SetImage(GM.ItemDataModel:GetSpriteName(itemCode))
      go.transform:DOJump(self.m_boardView:GetCacheRoot().transform.position, 100, 1, 0.5):SetLink(self.m_boardView.gameObject):OnComplete(function()
        AddressableLoader.Destroy(go)
        GM.AudioModel:PlayEffect(AudioFileConfigName.SfxBoardObstacleFly2)
        EventDispatcher.DispatchEvent(EEventType.VibrationMedium)
      end)
    end
  end)
end

function BaseUIBoardObstacleLayerView:OnObstacleLevelReduce(obstacleView, item, callback)
  local startPosition, toolImage, toolImageScale
  local itemView = self.m_boardView:GetItemView(item)
  if itemView ~= nil then
    local clearCom = itemView:GetComponent(ItemObstacleClear)
    if clearCom ~= nil then
      startPosition = clearCom:GetSpritePosition()
      toolImage = clearCom:GetToolImage()
    end
  else
    local localPosition = self.m_boardView:ConvertBoardPositionToLocalPosition(item:GetPosition())
    startPosition = self.m_boardView:GetItemsTransform():TransformPoint(localPosition)
    local itemViewSpriteMap = self.m_boardView:GetCustomItemViewSpriteMappings()
    if not Table.IsEmpty(itemViewSpriteMap) and not Table.IsEmpty(itemViewSpriteMap[item:GetType()]) then
      toolImage = itemViewSpriteMap[item:GetType()][1]
    end
  end
  local obstacleModel = obstacleView:GetModel()
  local currentView = self.m_obstacleViewMap[obstacleModel]
  if obstacleModel ~= nil and currentView == nil then
    Log.Error("BaseUIBoardObstacleLayerView:_OnRemoveObstacle error: not found obstacleView, obstacleIndex = " .. obstacleModel:GetIndex())
  end
  GM.ResourceLoader:LoadPrefab(GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.FlyObstacleClearTool), self.transform, V3Zero, function(go)
    if not go:IsNull() then
      if self == nil or self.gameObject:IsNull() then
        AddressableLoader.Destroy(go)
        return
      end
      go.transform.position = startPosition
      local flyTool = go:GetLuaTable()
      flyTool:SetImage(toolImage)
      DelayExecuteFuncInView(function()
        if not go:IsNull() then
          if obstacleView == nil or obstacleView.gameObject:IsNull() then
            AddressableLoader.Destroy(go)
            return
          end
          go.transform:DOJump(obstacleView:GetIconTransform().position, 100, 1, 0.41):SetLink(obstacleView.gameObject):OnComplete(function()
            if callback ~= nil then
              callback()
            end
            AddressableLoader.Destroy(go)
          end)
        end
      end, 0.667, self)
    end
  end)
end

function BaseUIBoardObstacleLayerView:DeleteAll()
  for _, obstacleView in pairs(self.m_obstacleViewMap) do
    if obstacleView ~= nil and not obstacleView.gameObject:IsNull() then
      AddressableLoader.Destroy(obstacleView.gameObject)
    end
  end
  self.m_obstacleViewMap = {}
end

function BaseUIBoardObstacleLayerView:UpdateObstaclesView()
  self:DeleteAll()
  self:LoadObstacle()
end

function BaseUIBoardObstacleLayerView:GetObstacleAnimationAudioName()
  if StringUtil.IsNilOrEmpty(self.m_activityDefinition.ObstacleAnimationAudioName) then
    Log.Error("\233\154\156\231\162\141\232\167\163\229\134\179\229\144\142\231\154\132\229\138\168\231\148\187\233\159\179\230\149\136\230\156\170\233\133\141\231\189\174\239\188\140\232\175\183\229\156\168\230\180\187\229\138\168\229\174\154\228\185\137\228\184\173\233\133\141\231\189\174 ObstacleAnimationAudioName")
  end
  return self.m_activityDefinition.ObstacleAnimationAudioName
end

function BaseUIBoardObstacleLayerView:OnObstaclePointerDown(obstacleObj)
  self.m_lastTouchedObstacle = obstacleObj
end

function BaseUIBoardObstacleLayerView:OnObstaclePointerUp(obstacleObj)
  if self.m_lastTouchedObstacle == nil then
    return
  end
  UIBoardObstacleViewTipBubble.ShowTip(self.m_activityDefinition.ObstacleViewTipPrefabName, {
    targetRectTrans = obstacleObj.transform,
    lengthToTargetCenter = obstacleObj.transform.sizeDelta.y * 0.5 - 5,
    bIgnoreCloseAni = false,
    canTouchClose = true,
    arrowDir = AdaptiveTipBubble.ArrowDir.Down,
    transformFunction = function()
      local targetScreenPosition = self.m_boardView:ConvertWorldPositionToScreenPosition(obstacleObj.transform.position)
      return PositionUtil.UICameraScreen2World(targetScreenPosition)
    end,
    descText = GM.GameTextModel:GetText(self.m_activityDefinition.TextKeyPrefixFull .. "_obstacle_bubble_desc")
  })
  self.m_lastTouchedObstacle = nil
  self.m_dragging = false
end

function BaseUIBoardObstacleLayerView:OnObstacleDrag(obstacleObj)
  if self.m_lastTouchedObstacle == nil then
    return
  end
  self.m_dragging = true
end

function BaseUIBoardObstacleLayerView:ClearPointerData()
  self.m_lastTouchedObstacle = nil
  self.m_dragging = false
  UIBoardObstacleViewTipBubble.HideTip()
end

FlyObstacleRewardItem = {}
FlyObstacleRewardItem.__index = FlyObstacleRewardItem

function FlyObstacleRewardItem:Init(spriteKey, callback)
  if spriteKey ~= nil then
    SpriteUtil.SetImage(self.m_iconImg, spriteKey, true)
    SpriteUtil.SetImage(self.m_iconImg2, spriteKey, true)
  end
  self.m_callback = callback
end

function FlyObstacleRewardItem:OnAnimationFinish()
  if self.m_callback ~= nil then
    self.m_callback()
  end
end
