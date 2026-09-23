ItemViewFactory = {}
ItemViewFactory.__index = ItemViewFactory
local componentView = {
  [ItemSpread] = "m_itemSpreadViewPrefab",
  [ItemAccelerate] = "m_itemAccelerateViewPrefab",
  [ItemAccelerateTime] = "m_itemAccelerateTimeViewPrefab",
  [ItemTransform] = "m_itemTransformViewPrefab",
  [ItemCobweb] = "m_itemCobwebViewPrefab",
  [ItemPaperBox] = "m_itemPaperBoxViewPrefab",
  [ItemFog] = "m_itemFogViewPrefab",
  [ItemObstacleClear] = "m_itemObstacleClearViewPrefab"
}

function ItemViewFactory:Init()
  self.m_itemViewPool = {}
  self.m_flyItemViewPool = {}
  self.m_itemViewPoolParent = self.transform
end

function ItemViewFactory:Create(boardView, itemModel)
  local itemViewFromPool = self:_GetItemViewFromPool(itemModel)
  if itemViewFromPool ~= nil then
    itemViewFromPool.transform:SetParent(boardView:GetItemsTransform())
    itemViewFromPool:Init(itemModel, boardView:GetCustomItemViewSpriteMappings())
    for metaTable, component in pairs(itemModel:GetComponents()) do
      local componentView = itemViewFromPool:GetComponent(metaTable)
      if componentView ~= nil then
        componentView:Init(component)
      end
    end
    return itemViewFromPool
  end
  local itemObject = Object.Instantiate(self.m_itemViewPrefab, boardView:GetItemsTransform())
  local itemView = itemObject:GetLuaTable()
  itemView:Init(itemModel, boardView:GetCustomItemViewSpriteMappings())
  for k, v in pairs(componentView) do
    local component = itemModel:GetComponent(k)
    if component ~= nil then
      local object = Object.Instantiate(self[v], itemObject.transform)
      local view = object:GetLuaTable()
      view:Init(component)
      itemView:AddComponent(k, view)
    end
  end
  local itemSwallow = itemModel:GetComponent(ItemSwallow)
  if itemSwallow ~= nil then
    if itemSwallow:AllowTap() then
      local object = Object.Instantiate(self.m_itemSwallowViewPrefab, itemObject.transform)
      local view = object:GetLuaTable()
      view:Init(itemSwallow)
      itemView:AddComponent(ItemSwallow, view)
    else
      local viewConfig = GM.ItemDataModel:GetViewConfig(itemModel:GetType())
      local prefabConfig = GM.DataResource.UIPrefabConfig:GetConfig(viewConfig.SwallowView)
      GM.ResourceLoader:LoadPrefab(prefabConfig, itemObject.transform, Vector3.zero, function(object)
        local view = object:GetLuaTable()
        view:Init(itemSwallow)
        itemView:AddComponent(ItemSwallow, view)
      end)
    end
  end
  local itemDig = itemModel:GetComponent(ItemDig)
  if itemDig ~= nil then
    local viewConfig = GM.ItemDataModel:GetViewConfig(itemModel:GetType())
    local prefabConfig = GM.DataResource.UIPrefabConfig:GetConfig(viewConfig.DigView)
    GM.ResourceLoader:LoadPrefab(prefabConfig, itemObject.transform, Vector3.zero, function(object)
      local view = object:GetLuaTable()
      view:Init(itemDig)
      itemView:AddComponent(ItemDig, view)
    end)
  end
  local itemTemp = itemModel:GetComponent(ItemTemp)
  if itemTemp ~= nil then
    local prefabConfig = GM.DataResource.UIPrefabConfig:GetConfig(UIPrefabConfigName.ItemTempView)
    GM.ResourceLoader:LoadPrefab(prefabConfig, itemObject.transform, Vector3.zero, function(object)
      local view = object:GetLuaTable()
      view:Init(itemTemp)
      itemView:AddComponent(ItemTemp, view)
    end)
  end
  if itemModel:GetType() == ItemType.RewardBubble then
    local itemCollectable = itemModel:GetComponent(ItemCollectable)
    local object = Object.Instantiate(self.m_itemRewardItemViewPrefab, itemView:GetInnerSpriteRenderer().transform)
    local view = object:GetLuaTable()
    view:Init(itemCollectable)
    itemView:AddComponent(ItemCollectable, view)
  end
  local itemPortal = itemModel:GetComponent(ItemPortal)
  if itemPortal ~= nil then
    local viewConfig = GM.ItemDataModel:GetViewConfig(itemModel:GetType())
    local prefabConfig = GM.DataResource.UIPrefabConfig:GetConfig(viewConfig.PortalView)
    GM.ResourceLoader:LoadPrefab(prefabConfig, itemObject.transform, Vector3.zero, function(object)
      local view = object:GetLuaTable()
      view:Init(itemPortal)
      itemView:AddComponent(ItemPortal, view)
    end)
  end
  return itemView
end

function ItemViewFactory:RecycleItem(itemView)
  local itemType = itemView:GetModel():GetType()
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.DisableItemViewPool) then
    itemView.gameObject:RemoveSelf()
    return
  end
  if itemType == ItemType.PaperBox or itemType == ItemType.Cobweb or itemType == ItemType.shooting_star_1 or itemType == ItemType.Temp or itemType == ItemType.Fog or itemType == ItemType.ObstacleClear then
    itemView.gameObject:RemoveSelf()
    return
  end
  itemView:OnRecycle()
  UIUtil.SetActive(itemView.gameObject, false)
  if self.m_itemViewPool[itemType] == nil then
    self.m_itemViewPool[itemType] = {}
  end
  self.m_itemViewPool[itemType][#self.m_itemViewPool[itemType] + 1] = itemView
  itemView.transform:SetParent(self.m_itemViewPoolParent)
end

function ItemViewFactory:_GetItemViewFromPool(itemModel)
  local itemType = itemModel:GetType()
  if self.m_itemViewPool[itemType] ~= nil and #self.m_itemViewPool[itemType] > 0 then
    local itemView = self.m_itemViewPool[itemType][#self.m_itemViewPool[itemType]]
    self.m_itemViewPool[itemType][#self.m_itemViewPool[itemType]] = nil
    UIUtil.SetActive(itemView.gameObject, true)
    return itemView
  end
end

function ItemViewFactory:CreateFlyItem(boardView, itemType, eFlyType)
  local itemView
  if #self.m_flyItemViewPool > 0 then
    itemView = self.m_flyItemViewPool[#self.m_flyItemViewPool]
    UIUtil.SetActive(itemView.gameObject, true)
    self.m_flyItemViewPool[#self.m_flyItemViewPool] = nil
  else
    local itemObject = Object.Instantiate(self.m_itemFlyViewPrefab, boardView:GetItemsTransform())
    itemView = itemObject:GetLuaTable()
  end
  itemView:Init(self, itemType, eFlyType)
  return itemView
end

function ItemViewFactory:RecycleFlyItem(flyItemView)
  if GM.ConfigModel:IsServerControlOpen(EGeneralConfType.DisableItemViewPool) then
    flyItemView.gameObject:RemoveSelf()
    return
  end
  UIUtil.SetActive(flyItemView.gameObject, false)
  self.m_flyItemViewPool[#self.m_flyItemViewPool + 1] = flyItemView
end
