TestAutoPlayBoard = setmetatable({}, TestFavoriteItemContent)
TestAutoPlayBoard.__index = TestAutoPlayBoard

function TestAutoPlayBoard.GetInstance()
  return TestAutoPlayBoard.m_instance
end

function TestAutoPlayBoard:OnDestroy()
  EventDispatcher.RemoveTarget(self)
  TestAutoPlayBoard.m_instance = nil
end

function TestAutoPlayBoard:Awake()
  self:UpdateContent()
  
  function self.m_eventTrigger.OnLuaPointerDown(eventData)
    self:_OnPointerDown(eventData)
  end
  
  function self.m_eventTrigger.OnLuaDrag(eventData)
    self:_OnDrag(eventData)
  end
  
  function self.m_eventTrigger.OnLuaPointerUp(eventData)
    self:_OnPointerUp(eventData)
  end
  
  TestAutoPlayBoard.m_instance = self
end

function TestAutoPlayBoard:Init()
  self.m_bStart = false
  self.m_addItemTime = 0
  self.m_finishOrderTime = 0
  self.m_mergeTime = 0
  self.m_removeAll = 0
  self.m_mapTestCache = {}
end

function TestAutoPlayBoard:Update(dt)
  if not UIHelper.IsUIWindowAutoPopupAllowed() then
    return
  end
  if not self.m_bStart then
    return
  end
  if GM.SceneManager:GetGameMode() ~= EGameMode.Main then
    return
  end
  self.m_addItemTime = self.m_addItemTime + dt
  self.m_finishOrderTime = self.m_finishOrderTime + dt
  self.m_mergeTime = self.m_mergeTime + dt
  self.m_removeAll = self.m_removeAll + dt
  if self.m_addItemTime >= 1 then
    self.m_addItemTime = 0
    GM.TestModel:AddOrderItems()
  end
  if self.m_finishOrderTime >= 0.2 then
    self.m_finishOrderTime = 0
    local orderCells = MainBoardView.GetInstance():GetOrderArea():GetCells(OrderModelType.Slot)
    for _, cell in pairs(orderCells) do
      if cell.m_order.m_state == OrderState.CanDeliver and cell.m_order:CanDeliver(GM.MainBoardModel:GetCodeCountMap(true, false, false)) and cell.m_button.gameObject.activeSelf then
        cell:OnGoButtonClicked()
        break
      end
    end
  end
  local orderBoostModel = GM.ActivityManager:GetModel(ActivityType.OrderBoost)
  if orderBoostModel:CanSendSmile() and self.m_orderBoostCallBack == nil then
    GM.UIManager:OpenView(UIPrefabConfigName.OrderBoostMainWindow)
    
    function self.m_orderBoostCallBack()
      if GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.OrderBoostMainWindow) then
        local openWindow = GM.UIManager:GetOpenedViewByName(UIPrefabConfigName.OrderBoostMainWindow)
        if openWindow ~= nil then
          Scheduler.Unschedule(self.m_orderBoostCallBack, self)
          self.m_orderBoostCallBack = nil
        end
        openWindow:OnSendSmile()
      end
    end
    
    Scheduler.Schedule(self.m_orderBoostCallBack, self)
    self.m_orderBoostCallBack()
    return
  end
  if self.m_mergeTime >= 1.5 then
    self.m_mergeTime = 0
    GM.TestModel:MergeAll()
  end
  if self.m_removeAll >= 10 then
    self.m_removeAll = 0
    GM.TestModel:RemoveAll()
  end
end

function TestAutoPlayBoard:OnPauseBtn()
  self.m_bStart = false
end

function TestAutoPlayBoard:OnStartBtn()
  self.m_bStart = true
end
