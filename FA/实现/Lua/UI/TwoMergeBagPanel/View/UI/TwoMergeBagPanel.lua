--insertWidgetsBegin
--insertWidgetsEnd

--insertRequire
local _TwoMergeBagPanelBase = require "UI.TwoMergeBagPanel.View.UI.Base._TwoMergeBagPanelBase"
local TwoMergeBagGridItem = require "UI.TwoMergeBagPanel.View.UI.TwoMergeBagGridItem"


---@class TwoMergeBagPanel:_TwoMergeBagPanelBase
local TwoMergeBagPanel = class(_TwoMergeBagPanelBase)

function TwoMergeBagPanel:ctor()

end

function TwoMergeBagPanel:onAfterBindView()
    self.itemScrollNum = 12
    self.mapId = self.arguments.mapId
    self.gridList = {}
    self.gridFuncList = {}
    self.itemDateList = {}
    self:AddListener()
    self.title.text = Runtime.Translate("merge_system_08") -- 背包
    self.des.text = Runtime.Translate("merge_system_10") -- 点击一个物品以将其放回棋盘。背包中所有倒计时暂停
    self:RefreshUI()
end

function TwoMergeBagPanel:GetChangeData(itemDate)
    --if itemDate == nil then
    --    self:RefreshUI()
    --else
    --    if itemDate.position == nil  then
    --        self:RefreshUI()
    --    else
    --        for k,v in pairs(self.gridFuncList) do
    --            v:SetItemEffect(item.position)
    --        end
    --    end
    --end
    self:RefreshUI()
end

function TwoMergeBagPanel:RefreshUI()
    local gridNum , data = AppServices.TwoMergeManager:GetBagItems(self.mapId)
    local _max = 0 
    self.unlockNum = gridNum
    local _cfg = AppServices.Meta:Category("MergeTwoWarehouseTemplate")
    for k,v in pairs(_cfg) do
        _max = _max + 1
    end
    self.gridNum =  gridNum >= _max and  _max or gridNum + 1
    self.scroll.enabled = self.gridNum > self.itemScrollNum
    self.itemData = data
    self:RefreshGrid()
end

function TwoMergeBagPanel:RefreshGrid()
    local count = self.gridNum
    if #self.gridList < count then
        for i = 1, count - #self.gridList  do
            local gridObj = GameObject.Instantiate(self.GridItem)
            gridObj.transform:SetParent(self.GridContent.transform, false)
            table.insert(self.gridList, gridObj)
        end
    end

    if #self.gridFuncList > 0 then
        self.gridFuncList = {}
    end
    
    for i = 1, #self.gridList do
        self.gridList[i]:SetActive(i <= count)
        if i <= count then
            local gridFuncItem = TwoMergeBagGridItem:CreateWithGameObject(self.gridList[i], self)
            gridFuncItem:SetData(i, count,self.itemData[i],self.unlockNum)
            table.insert(self.gridFuncList, gridFuncItem)
        end
    end
end


function TwoMergeBagPanel:destroy()
    self.gridList = {}
    self.gridFuncList = {}
    self.itemList = {}
    self:RemoveListener()
    _TwoMergeBagPanelBase.destroy(self)    
end

------------------------------**监听事件**----------------------------------------
function TwoMergeBagPanel:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.TwoMergeBagUpdateData, self.GetChangeData, self)
end

function TwoMergeBagPanel:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.TwoMergeBagUpdateData, self.GetChangeData, self)
end


------------------------------**点击事件**----------------------------------------
--解锁背包格子
function TwoMergeBagPanel:ClickUnlockBagGrid(unlockIndex)
    local cfg = AppServices.Meta:Category("MergeTwoWarehouseTemplate")
    AppServices.TwoMergeManager:UnlockBagGrid(self.mapId,unlockIndex)
end

--点击背包物品
function TwoMergeBagPanel:ClickMergeBagItem(data)
    local isEmpty = AppServices.TwoMergeMapGridManager:FindEmptyGrid(self.mapId)
    if not isEmpty then
        local content = Runtime.Translate("merge_system_11") -- 棋盘格子不足
        UITool.ShowContentTipAni(content)
        return
    end
    AppServices.TwoMergeManager:BagToGrid(self.mapId,data)
end


return TwoMergeBagPanel
