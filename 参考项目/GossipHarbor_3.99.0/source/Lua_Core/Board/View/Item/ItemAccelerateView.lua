ItemAccelerateView = setmetatable({}, BaseItemViewComponent)
ItemAccelerateView.__index = ItemAccelerateView

function ItemAccelerateView:Init(itemAccelerateModel)
  self.m_model = itemAccelerateModel
  AddHandlerAndRecordMap(self.m_model.event, ItemAccelerateEventType.Activated, {
    obj = self,
    method = self._OnActivated
  })
  if self.m_model:IsActivated() then
    self:_OnActivated()
  end
end

function ItemAccelerateView:OnDestroy()
  if self.m_model == nil then
    return
  end
  RemoveAllHandlers(self.m_model.event, self)
  self.m_model = nil
end

function ItemAccelerateView:_OnActivated()
  if self.m_model == nil then
    return
  end
  self.m_effectGo:SetActive(true)
  local prefab = ScenePrefabConfigName["item_activated_" .. self.m_model:GetItemModel():GetType()]
  if prefab == nil then
    return
  end
  GM.ResourceLoader:LoadPrefab(GM.DataResource.ScenePrefabConfig:GetConfig(prefab), self.transform, Vector3.zero, function(go)
    if go:IsNull() then
      return
    end
    
    local function func()
      if not self.m_itemView then
        return
      end
      local rawSprite = self.m_itemView:GetSpriteRenderer()
      if rawSprite and not rawSprite:IsNull() then
        rawSprite.gameObject:SetActive(false)
      end
    end
    
    if self.m_itemView then
      func()
    else
      DelayExecuteFuncInView(func, 0.1, self)
    end
  end)
end
