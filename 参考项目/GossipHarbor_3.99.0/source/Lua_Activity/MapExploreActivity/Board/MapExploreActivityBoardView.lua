MapExploreActivityBoardView = setmetatable({}, BaseUIBoardView)
MapExploreActivityBoardView.__index = MapExploreActivityBoardView

function MapExploreActivityBoardView:Init(activityType, boardModel)
  self.m_activityType = activityType
  self.m_activityDefinition = MapExploreActivityDefinition[activityType]
  self.m_activityModel = GM.ActivityManager:GetModel(activityType)
  self.Tile1Sprite = self.m_activityDefinition.TileImageName1
  self.Tile2Sprite = self.m_activityDefinition.TileImageName2
  self.m_itemViewSpriteMappings = {
    [ItemType.PaperBox] = self.m_activityDefinition.PaperboxNames,
    [ItemType.Cobweb] = self.m_activityDefinition.CobwebNames
  }
  BaseUIBoardView.Init(self, boardModel)
  self.m_paperBoxCollapseDelay = 0
  if ImageFileConfigName.HasConfig(activityType .. "_mapexplore_board_bg2") and self.m_cacheRootBottomImage ~= nil then
    SpriteUtil.SetImage(self.m_cacheRootBottomImage, ImageFileConfigName[activityType .. "_mapexplore_board_bg2"])
  end
end

function MapExploreActivityBoardView:Update()
  if self.m_paperBoxCollapseDelay ~= 0 then
    self.m_paperBoxCollapseDelay = 0
  end
  BaseUIBoardView.Update(self)
end

function MapExploreActivityBoardView:OnDestroy()
  BaseUIBoardView.OnDestroy(self)
  GM.UIManager:RemoveAllEventLocks(self)
end

function MapExploreActivityBoardView:ConvertWorldPositionToScreenPosition(position)
  return MapExploreActivityBoardContainer.GetInstance():ConvertWorldPositionToScreenPosition(position)
end

function MapExploreActivityBoardView:GetCustomItemViewSpriteMappings()
  return self.m_itemViewSpriteMappings
end

function MapExploreActivityBoardView:_OnCollapseItem(message)
  if message.Source:GetComponent(ItemPaperBox) ~= nil then
    GM.UIManager:SetEventLock(true, self)
    DOVirtual.DelayedCall(self.m_paperBoxCollapseDelay, function()
      GM.UIManager:SetEventLock(false, self)
      BaseUIBoardView._OnCollapseItem(self, message)
    end)
  else
    BaseUIBoardView._OnCollapseItem(self, message)
  end
end

function MapExploreActivityBoardView:GetCollapseEffectPrefabName()
  return self.m_activityDefinition.CollapseEffectPrefabName
end

function MapExploreActivityBoardView:_OnTransformItem(message)
  if self.m_selectedBoardPosition == message.Source:GetPosition() then
    self:_UpdateIndicator(message.New, true)
  end
  local delay = 0
  local itemSwallow = message.Source:GetComponent(ItemSwallow)
  if itemSwallow ~= nil and not itemSwallow:AllowTap() then
    delay = 1.5
  end
  self:_DoTransformItem(message, delay)
  self.m_paperBoxCollapseDelay = delay
end

function MapExploreActivityBoardView:CanItemDelete(itemModel)
  return self.m_model:CanItemSell(itemModel)
end

function MapExploreActivityBoardView:BinClickPrompt()
  local mainWindow = GM.UIManager:GetOpenedViewByName(self.m_activityDefinition.BoardWindowPrefabName)
  mainWindow:ShowBinTextTip()
end

function MapExploreActivityBoardView:CantDeletePrompt(itemModel)
  DOVirtual.DelayedCall(ItemView.MoveDuration, function()
    local itemView = self:GetItemView(itemModel)
    local targetPosition = itemView.transform.position + Vector3(0, 100, 0)
    local screenPosition = self:ConvertWorldPositionToScreenPosition(targetPosition)
    GM.UIManager:ShowPromptWithKey("hint_cannot_delete", screenPosition)
  end)
end

function MapExploreActivityBoardView:_LogBin()
  GM.BIManager:LogAction(self.m_activityDefinition.ActivateBinBIType)
end
