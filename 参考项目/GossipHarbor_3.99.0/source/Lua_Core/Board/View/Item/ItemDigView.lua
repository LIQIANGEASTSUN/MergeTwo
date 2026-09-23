ItemDigView = setmetatable({}, BaseItemViewComponent)
ItemDigView.__index = ItemDigView

function ItemDigView:Init(itemDigModel)
  self.m_model = itemDigModel
  AddHandlerAndRecordMap(self.m_model.event, ItemDigEventType.ProgressChanged, {
    obj = self,
    method = self._UpdateView
  })
  self:_InitView()
end

function ItemDigView:OnRecycle()
  if self.m_sliderAniTweenr ~= nil then
    self.m_sliderAniTweenr:Kill()
    self.m_sliderAniTweenr = nil
  end
  self.m_breatheEffectGo:SetActive(false)
  self:OnDestroy()
end

function ItemDigView:OnDestroy()
  if self.m_model == nil then
    return
  end
  RemoveAllHandlers(self.m_model.event, self)
  GM.UIManager:RemoveAllEventLocks(self)
  Scheduler.UnscheduleTarget(self)
  self.m_model = nil
end

function ItemDigView:_InitView()
  UIUtil.SetActive(self.m_breatheEffectGo, false)
  local targetNumber = self.m_model:GetMaxLevel()
  if targetNumber == 0 then
    self.m_sliderTransform.gameObject:SetActive(false)
    return
  end
  self.m_sliderCells = {}
  local cells = self.m_sliderTransform.gameObject:GetComponentsInChildren(typeof(CS.UnityEngine.UI.Slider), true)
  if targetNumber <= cells.Length then
    for i = 0, targetNumber - 1 do
      table.insert(self.m_sliderCells, cells[i]:GetComponent(typeof(CS.UnityEngine.UI.Slider)))
    end
    for i = targetNumber, cells.Length - 1 do
      cells[i].gameObject:RemoveSelf()
    end
  else
    for i = 0, cells.Length - 1 do
      table.insert(self.m_sliderCells, cells[i]:GetComponent(typeof(CS.UnityEngine.UI.Slider)))
    end
    for i = cells.Length + 1, targetNumber do
      local object = Object.Instantiate(self.m_sliderCellGo, self.m_sliderTransform)
      table.insert(self.m_sliderCells, object:GetComponent(typeof(CS.UnityEngine.UI.Slider)))
    end
  end
  local sliderWidth = self.m_sliderTransform.sizeDelta.x
  local totalWidth = sliderWidth - 7 - (targetNumber - 1) * 3
  local cellWidth = totalWidth / targetNumber
  for i = 1, targetNumber do
    UIUtil.SetSizeDelta(self.m_sliderCells[i].transform, cellWidth)
    self.m_sliderCells[i].value = 0
  end
  for i = 1, targetNumber do
    local posX = -sliderWidth * 0.5 + 3.5 + (i - 1) * (cellWidth + 3) + cellWidth * 0.5
    UIUtil.SetLocalPosition(self.m_sliderCells[i].transform, posX)
  end
  local digedNumber = self:_GetCurLevelView()
  if digedNumber == 0 then
    self.m_sliderTransform.gameObject:SetActive(false)
  end
  local sliderValue = targetNumber - digedNumber
  for i = 1, sliderValue do
    self.m_sliderCells[i].value = 1
  end
end

function ItemDigView:_UpdateView()
  GM.UIManager:SetEventLock(true, self)
  if self.m_sliderAniTweenr ~= nil then
    self.m_sliderAniTweenr:Kill()
  end
  self.m_model:GetItemModel():GetBoardModel()
  local time = 0.5
  local message = {
    position = self.m_itemView.transform.position,
    delay = time,
    code = self.m_model:GetItemModel():GetCode(),
    curLevel = self.m_model:GetCurLevel(),
    mxLevel = self.m_model:GetMaxLevel()
  }
  local sequence = DOTween.Sequence()
  sequence:AppendCallback(function()
    EventDispatcher.DispatchEvent(EEventType.PlayDigAnimation, message)
    if self.m_model:GetMaxLevel() ~= 0 then
      UIUtil.SetActive(self.m_sliderTransform.gameObject, true)
    end
  end)
  sequence:InsertCallback(time, function()
    self.m_model:OnDig()
    GM.UIManager:SetEventLock(false, self)
  end)
  self.m_sliderAniTweenr = sequence
end

function ItemDigView:_GetCurLevelView()
  return self.m_model:GetCurLevel() - self.m_model:GetState()
end

function ItemDigView:SetBreatheEffectActive(active)
  if self.m_model == nil then
    return
  end
  if self.m_model:GetState() == ItemDigState.Spread then
    return
  end
  UIUtil.SetActive(self.m_breatheEffectGo, active)
end
