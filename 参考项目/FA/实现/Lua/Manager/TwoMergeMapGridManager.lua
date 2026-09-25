---@class TwoMergeMapGridManager 二合地图管理器
local TwoMergeMapGridManager = {}
local isRunning = false

local mapGrid = require "Game.TwoMerge.Map.MapGrid"
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"
local GridRemoveLogic = require("Game.TwoMerge.Logic.GridRemoveLogic")
local ArticleDeleteLogic = require("Game.TwoMerge.Logic.ArticleDeleteLogic")

TwoMergeMapGridManager.GridDataList = {

}

function TwoMergeMapGridManager:Init()
    --存放地图信息
    self:ClearMapDataList()
    --存放格子的单例信息
    self:ClearMapGridList()
    --记录格子变化
    self.ModifyMap = {}
    --记录合成链中的itemId
    self.MergeChainToIdMap = {}
    --记录合成链item的信息
    self.MergeItemInfoMap = {}
    --存放发生过变化的格子
    self.bestiaryIds = {}
    
    self:InitMergeChainCfg()
    
    self.itemIdMap = {}
end

--进入场景发送信息
function TwoMergeMapGridManager:EnterMap(mapId, gridList, articleList)
    isRunning = true
    self:SetMapId(mapId)
    if self.MapDataList[tostring(mapId)] == nil then
        self.MapDataList[tostring(mapId)] = {}
    end
    self:InitMapData(mapId, gridList, articleList)
    self:SetMapGridList(gridList)
    self:AddListener()
    self:OnInitComplete()
    self.ticktimer = WaitExtension.InvokeRepeating(function() self:Tick() end, 0, 1)
end

function TwoMergeMapGridManager:SetMapId(mapId)
    self.curMapId = mapId
    local _tempData = {}
    local cfg = AppServices.Meta:Category("MergeTwoMainTemplate")
    for k, v in pairs(cfg) do
        if v.mapId == tostring(self.curMapId) then
            table.insert(_tempData, v)
        end
    end
    table.sort(_tempData, function(i, j)
        return tonumber(i.id) < tonumber(j.id)
    end)
    self.maxCol = _tempData[1].maxCol
    self.maxRow = #_tempData
end

function TwoMergeMapGridManager:GetMapId() return self.curMapId end

--- 地图加载完成
function TwoMergeMapGridManager:OnInitComplete()
    for _, v in pairs(self.MapDataList[tostring(self.curMapId)]) do
        if v.itemArticle then
            v.itemArticle:OnInitComplete()
        end
    end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_OnInitComplete)
end

function TwoMergeMapGridManager:InitMapData(mapId, gridList, articleList)
    for k, v in pairs(gridList) do
        ---@type Article
        local _articleItem = articleList[k]
        self.MapDataList[tostring(mapId)][tostring(k)] = self.MapDataList[tostring(mapId)][tostring(k)] or {}
        self.MapDataList[tostring(mapId)][tostring(k)] = {
            position = k,
            itemArticle = _articleItem,
            state = v.state,
            row = v._row,
            col = v._col
        }
        if _articleItem then
            self:AddItemDataToItemIdMap(_articleItem:GetItemId(), v._row, v._col)
        end
    end
end

function TwoMergeMapGridManager:AddItemDataToItemIdMap(itemId, row, col)
    if not self.itemIdMap[itemId] then
        self.itemIdMap[itemId] = {}
    end
    table.insert(self.itemIdMap[itemId], {row = row, col = col})
end

function TwoMergeMapGridManager:RemoveItemDataToItemIdMap(itemId, row, col)
    if not self.itemIdMap[itemId] then
        return
    end
    for k, v in pairs(self.itemIdMap[itemId]) do
        if v.row == row and v.col == col then
            table.remove(self.itemIdMap[itemId], k)
            break
        end
    end
end

function TwoMergeMapGridManager:GetItemMap()
    return self.itemIdMap
end

function TwoMergeMapGridManager:ClearItemIdMap()
    self.MapDataList = {}
end

function TwoMergeMapGridManager:GetItemMap()
    return self.itemIdMap
end

function TwoMergeMapGridManager:ClearItemIdMap()
    self.MapDataList = {}
end

--根据坐标获取格子相关信息,并更新MapDataList中的格子数据
function TwoMergeMapGridManager:GetGridDataList(mapId, row, col)
    if self.MapDataList == nil or self.MapDataList[tostring(mapId)] == nil then
        console.print("TwoMergeMapGridManager 并没有进行初始化")
        return
    end

    local _positionId = TwoMergeConfig.Encode(row, col)
    if self.MapDataList[tostring(mapId)][tostring(_positionId)] ~= nil then
        self:SetState(self.MapDataList[tostring(mapId)][tostring(_positionId)], TwoMergeConfig.GridState.UnLock)
        return self.MapDataList[tostring(mapId)][tostring(_positionId)]
    end

    --console.error("现有的地图信息中并没有找到坐标为=" .. x .. "," .. y .. "的格子")
    return nil
end

--生成格子信息
function TwoMergeMapGridManager:SetMapGridList(gridList)
    if #self.MapGridList ~= 0 then
        return
    end
    for k, v in pairs(gridList) do
        local _grid = mapGrid.new(k, v)
        table.insert(self.MapGridList, _grid)
    end
end

function TwoMergeMapGridManager:GetMapGridList()
    return self.MapGridList
end

--获取当前格子状态
function TwoMergeMapGridManager:GetSingleGrid(row, col)
    local _positionId = TwoMergeConfig.Encode(row, col)
    for k, v in pairs(self.MapGridList) do
        if v:GetPositionId() == _positionId then
            return v
        end
    end
end

function TwoMergeMapGridManager:IsRunning() return isRunning end

--释放格子信息
function TwoMergeMapGridManager:DisposeGridInfo()
    WaitExtension.CancelTimeout(self.ticktimer)
    self:ClearMapDataList()
    self:ClearMapGridList()
    self:ClearItemIdMap()
    self.bestiaryIds = {}
    isRunning = false
end

function TwoMergeMapGridManager:ClearMapDataList()
    if self.MapDataList ~= nil then
        for k, v in pairs(self.MapDataList) do
            if v.itemArticle ~= nil then
                v.itemArticle:Release()
            end
        end
    end
    self.MapDataList = {}
    self.itemIdMap = {}
end

function TwoMergeMapGridManager:FindEmptyGrid(mapId)
    if self.MapDataList[tostring(mapId)] then
        for k,v in pairs(self.MapDataList[tostring(mapId)]) do
            if v.state == TwoMergeConfig.GridState.UnLock and v.itemArticle == nil then
                return true
            end
        end
    end
    return false
end


function TwoMergeMapGridManager:ClearMapGridList()
    if self.MapGridList ~= nil then
        for k, v in pairs(self.MapGridList) do
            v:Release()
        end
    end
    self.MapGridList = {}
end

--------------------------------工具方法-----------------------------------
--有格子状态从锁定到解锁
function TwoMergeMapGridManager:OnTriggerUnlockGrid(row, col)
    local _positionId = TwoMergeConfig.Encode(row, col)
    local _gridData = self:GetGridDataList(self.curMapId, row, col)

    for k, v in pairs(self.MapGridList) do
        if v:GetPositionId() == _positionId then
            v:ChangeState(TwoMergeConfig.GridState.UnLock)
            break
        end
    end

    self.ModifyMap[_positionId] = true

    local changeGridList = {}

    if _gridData then
        local cur_col = col
        local cur_row = row

        local _positionId1 = TwoMergeConfig.Encode(cur_row - 1, cur_col)
        local _positionId2 = TwoMergeConfig.Encode(cur_row + 1, cur_col)
        local _positionId3 = TwoMergeConfig.Encode(cur_row, cur_col - 1)
        local _positionId4 = TwoMergeConfig.Encode(cur_row, cur_col + 1)

        if self.MapDataList[tostring(self.curMapId)][tostring(_positionId1)]
                and self.MapDataList[tostring(self.curMapId)][tostring(_positionId1)].state == TwoMergeConfig.GridState.DeepLock then
            self:SetState(self.MapDataList[tostring(self.curMapId)][tostring(_positionId1)], TwoMergeConfig.GridState.Lock)
            table.insert(changeGridList, _positionId1)
        end

        if self.MapDataList[tostring(self.curMapId)][tostring(_positionId2)]
                and self.MapDataList[tostring(self.curMapId)][tostring(_positionId2)].state == TwoMergeConfig.GridState.DeepLock then
            self:SetState(self.MapDataList[tostring(self.curMapId)][tostring(_positionId2)], TwoMergeConfig.GridState.Lock)
            table.insert(changeGridList, _positionId2)
        end

        if self.MapDataList[tostring(self.curMapId)][tostring(_positionId3)]
                and self.MapDataList[tostring(self.curMapId)][tostring(_positionId3)].state == TwoMergeConfig.GridState.DeepLock then
            self:SetState(self.MapDataList[tostring(self.curMapId)][tostring(_positionId3)], TwoMergeConfig.GridState.Lock)
            table.insert(changeGridList, _positionId3)
        end

        if self.MapDataList[tostring(self.curMapId)][tostring(_positionId4)]
                and self.MapDataList[tostring(self.curMapId)][tostring(_positionId4)].state == TwoMergeConfig.GridState.DeepLock then
            self:SetState(self.MapDataList[tostring(self.curMapId)][tostring(_positionId4)], TwoMergeConfig.GridState.Lock)
            table.insert(changeGridList, _positionId4)
        end
    end

    for _, value in pairs(changeGridList) do
        for k, v in pairs(self.MapGridList) do
            if v:GetPositionId() == value and v:GetState() == TwoMergeConfig.GridState.DeepLock then
                self.ModifyMap[value] = true
                v:ChangeState(TwoMergeConfig.GridState.Lock)
                break
            end
        end
    end

end

function TwoMergeMapGridManager:FindDropGrid(local_row, local_col)
    local row, col = self:SearchNextGrid(local_row, local_col)

    if row == nil then
        console.print("没有找到下一个格子")
        return nil
    else
        return row, col
    end
end

-------------------------------------图鉴功能界面来回关闭的逻辑
function TwoMergeMapGridManager:SetCurOpenId(id,findItemTip)
    if  #self.bestiaryIds == nil then
        self.bestiaryIds = {}
    end
    for k,v in pairs(self.bestiaryIds) do
        if v.panelId == id  then
            return
        end
    end
    table.insert(self.bestiaryIds, {panelId = id , findItemTip = findItemTip} )
end


function TwoMergeMapGridManager:OnCloseBestiary(id)
    for k,v in pairs(self.bestiaryIds) do
        if v.panelId == id then
            table.remove(self.bestiaryIds,k)
        end
    end
    local _nextId =  self.bestiaryIds[#self.bestiaryIds]
    
    return _nextId or 0
  
end

function TwoMergeMapGridManager:ClearBestiary()
    self.bestiaryIds = {}
end

-------------------------------------**操作item**--------------------------------------------
--更新item的数量
function TwoMergeMapGridManager:UpDateItemCount(row, col, count)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end
    mapData.itemArticle:SetCount(count)
end

--更新结束时间
function TwoMergeMapGridManager:SetItemEndTime(row, col, endTime)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end
    mapData.itemArticle:SetEndTimeStamp(endTime)
end

--更新暂停时间
function TwoMergeMapGridManager:SetItemPauseTime(row, col, pauseTime)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end

    mapData.itemArticle:SetPauseTime(pauseTime)
end

--更新Item状态
function TwoMergeMapGridManager:SetItemState(row, col, state)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end

    mapData.itemArticle:ChangeState(state)
    self.ModifyMap[mapData.itemArticle:GetPositionId()] = true
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_StateChanged, row, col)
end

--更新数据 特殊类型数据
function TwoMergeMapGridManager:SetItemSpecData(row, col, key, value)
    local _positionId = TwoMergeConfig.Encode(row, col)
    local data = self.MapDataList[tostring(self.curMapId)]
    if data == nil then
        console.print("没有找到地图id=" .. self.curMapId .. "的数据")
        return
    end
    local mapData = data[tostring(_positionId)]
    if mapData == nil then
        console.print("没有找到格子id=" .. _positionId .. "的数据")
        return
    end

    mapData.itemArticle:SetSpecData(key, value)
    self.ModifyMap[_positionId] = true
end

--增加格子的item
function TwoMergeMapGridManager:AddArticle(row, col, itemArticle)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end
    if mapData.itemArticle ~= nil then
        console.error("格子上已经有item row=" .. row .. "col=" .. col)
        return
    end
    mapData.itemArticle = itemArticle
    local itemId = itemArticle:GetItemId()
    mapData.itemArticle:NotifySelf(TwoMergeConfig.ArticleEventKey.OnGenerateComplete)
    AppServices.TwoMergeManager:CheckIllUnlock(self.curMapId, itemId)
    local _positionId = TwoMergeConfig.Encode(row, col)
    self.ModifyMap[_positionId] = true
    if itemArticle then
        self:AddItemDataToItemIdMap(itemArticle:GetItemId(),row,col)
    end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Add, row, col, itemId)
end

-- 移除格子的item
function TwoMergeMapGridManager:RemoveArticle(row, col, deleteType)
    local isExist, mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)

    if isExist and mapData.itemArticle ~= nil then
        --- 主动删除 需要动画
        self:RemoveItemDataToItemIdMap(mapData.itemArticle:GetItemId(),row,col)
        if deleteType == TwoMergeConfig.ArticleRemoveType.DeleteBtn or deleteType == TwoMergeConfig.ArticleRemoveType.CloneTimeEnd then
            local deletetime = mapData.itemArticle:SetDelete()
            WaitExtension.SetTimeout(function() self:RealRemove(row, col, deleteType) end, deletetime)
        else
            self:RealRemove(row, col, deleteType)
        end
    end
end

-- 真实删除  不允许直接调用
function TwoMergeMapGridManager:RealRemove(row, col, deleteType)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then return end

    if mapData.itemArticle == nil then
        console.print("格子上没有找到item row=" .. row .. " ，col=" .. col)
        return
    end

    local itemId = mapData.itemArticle:GetItemId()
    local itemState = mapData.itemArticle:GetItemState()
    local positionId = TwoMergeConfig.Encode(row, col)
    self.ModifyMap[positionId] = true
    -- if deleteType == TwoMergeConfig.ArticleRemoveType.Merge then
    --     mapData.itemArticle:ReleaseDelay()
    -- else
    --     mapData.itemArticle:Release()
    -- end
    mapData.itemArticle:Release()
    mapData.itemArticle = nil
    local deleteInfo = {
        itemState = itemState,
    }
    ArticleDeleteLogic.TriggerDelete(row, col, itemId, deleteType, deleteInfo) -- 触发删除
    GridRemoveLogic.TriggerToNull(row, col, deleteType) -- 触发格子变空

    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Delete, row, col, itemId)
end

--交换
function TwoMergeMapGridManager:ReplaceArticle(row1, col1, row2, col2)
    local isExist1, mapData1 = MergeUtil.CheckMapDataList(row1, col1, self.MapDataList,self.curMapId)
    local isExist2, mapData2 = MergeUtil.CheckMapDataList(row2, col2, self.MapDataList,self.curMapId)

    self.ModifyMap[TwoMergeConfig.Encode(row1, col1)] = true
    self.ModifyMap[TwoMergeConfig.Encode(row2, col2)] = true
    if isExist1 and isExist2 then
        if mapData1.itemArticle then
            self:RemoveItemDataToItemIdMap(mapData1.itemArticle:GetItemId(), row1, col1)
            self:AddItemDataToItemIdMap(mapData1.itemArticle:GetItemId(), row2, col2)
        end
        if mapData2.itemArticle then
            self:RemoveItemDataToItemIdMap(mapData2.itemArticle:GetItemId(), row2, col2)
            self:AddItemDataToItemIdMap(mapData2.itemArticle:GetItemId(), row1, col1)
        end
        if mapData1.itemArticle ~= nil and mapData2.itemArticle ~= nil then
            local tmp = mapData1.itemArticle
            mapData1.itemArticle = mapData2.itemArticle
            mapData1.itemArticle:SetRowCol(row1, col1)
            mapData2.itemArticle = tmp
            mapData2.itemArticle:SetRowCol(row2, col2)
            mapData1.itemArticle:GridChange(row2, col2, row1, col1)
            mapData2.itemArticle:GridChange(row1, col1, row2, col2)

            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Move, row1, col1, row2, col2)
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Move, row2, col2, row1, col1)
        elseif mapData1.itemArticle ~= nil and mapData2.itemArticle == nil then
            mapData2.itemArticle = mapData1.itemArticle
            mapData2.itemArticle:SetRowCol(row2, col2)
            mapData1.itemArticle = nil
            mapData2.itemArticle:GridChange(row1, col1, row2, col2)
            GridRemoveLogic.TriggerToNull(row1, col1) -- 触发格子变空
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Move, row1, col1, row2, col2)
        elseif mapData1.itemArticle == nil and mapData2.itemArticle ~= nil then
            mapData1.itemArticle = mapData2.itemArticle
            mapData1.itemArticle:SetRowCol(row1, col1)
            mapData2.itemArticle = nil
            mapData1.itemArticle:GridChange(row2, col2, row1, col1)
            GridRemoveLogic.TriggerToNull(row2, col2) -- 触发格子变空
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Move, row2, col2, row1, col1)
        end
    end
end

--设置新的Article
function TwoMergeMapGridManager:SetArticle(row, col, itemArticle)
    local isExist, mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end
    if mapData.itemArticle then
        mapData.itemArticle:Release()
        mapData.itemArticle = nil
    end
    mapData.itemArticle = itemArticle
    mapData.itemArticle:SetRowCol(row, col)
    local itemId = mapData.itemArticle:GetItemId()
    AppServices.TwoMergeManager:CheckIllUnlock(self.curMapId, itemId)
    local _positionId = TwoMergeConfig.Encode(row, col)
    self.ModifyMap[_positionId] = true

    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Article_Add, row, col, itemId)
end

--获取格子的item
function TwoMergeMapGridManager:FindItemArticle(row, col)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end
    return mapData.itemArticle
end

function TwoMergeMapGridManager:GetMapData(positionId)
    if self.MapDataList[tostring(self.curMapId)] then
        return self.MapDataList[tostring(self.curMapId)][tostring(positionId)]
    end
end

function TwoMergeMapGridManager:GetModifyMap()
    local caches = {}
    for positionId, _ in pairs(self.ModifyMap) do
        caches[positionId] = true
    end
    self.ModifyMap = {}
    return caches
end

function TwoMergeMapGridManager:SetModifyMap(caches)
    for positionId, _ in pairs(caches) do
        self.ModifyMap[positionId] = true
    end
end

function TwoMergeMapGridManager:GetMapDataList()
    return self.MapDataList[tostring(self.curMapId)]
end

---------------------------------**返回服务器需要的数据**--------------------------------------------
function TwoMergeMapGridManager:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.UnlockGrid, self.OnTriggerUnlockGrid, self)
end

function TwoMergeMapGridManager:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.UnlockGrid, self.OnTriggerUnlockGrid, self)
end

function TwoMergeMapGridManager:OnDestroy()
    self:RemoveListener()
    self.MapGridList = {}
    self:ClearMergeChainToIdMap()
end

function TwoMergeMapGridManager:SetStateByRowCol(row, col, state)
    local isExist ,mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist  then
        return
    end
    local _positionId = TwoMergeConfig.Encode(row, col)
    for k, v in pairs(self.MapGridList) do
        if v:GetPositionId() == _positionId then
            v:ChangeState(state)
            break
        end
    end
  
    self.ModifyMap[_positionId] = true
    self:SetState(mapData, state)
end

function TwoMergeMapGridManager:SetState(mapData, state)
    if state > 2 then
        console.error("设置的格子状态大于2==" .. state)
        return
    end
    mapData.state = state
end

---------------------------------**格子转圈找到空闲的位置**--------------------------------------------
function TwoMergeMapGridManager:SearchNextGrid(row, col)
    local local_row, local_col = MergeUtil.SpiralMatrixIII(row, col, self.maxRow, self.maxCol)
    if local_row == nil then
        return nil
    else
        return local_row, local_col
    end
end

--检查格子
function TwoMergeMapGridManager:CheckGrid(row, col)
     --是否存在
    local isExist, mapData = MergeUtil.CheckMapDataList( row, col, self.MapDataList,self.curMapId)
    if not isExist then
        return false
    end
    if mapData.state == TwoMergeConfig.GridState.UnLock and mapData.itemArticle == nil then
        return true
    end
    return false
end

---------------------------------**合成链**---------------------------------------
---初始化合成链的item信息
function TwoMergeMapGridManager:InitMergeChainCfg()
    local MergeTwoItemCfg = AppServices.Meta:Category("MergeTwoItemTemplate")
    for k,v in pairs(MergeTwoItemCfg) do
        if self.MergeChainToIdMap[v.groupId] == nil then
            self.MergeChainToIdMap[v.groupId] = {} 
        end
        table.insert(self.MergeChainToIdMap[v.groupId], v.id)
    end

    --state 为当前的item的解锁状态 0 为未获得过 1 获得过
    for k,v in pairs(MergeTwoItemCfg) do
        table.insert(self.MergeItemInfoMap,{id = v.id ,groupId = v.groupId ,level = v.level,type = v.type,state = 0})
    end
end

--设置单个item的状态
function TwoMergeMapGridManager:GetMergeChainInfoMap(itemId,state)
    for k,v in pairs(self.MergeItemInfoMap) do
        if v.id == itemId  then
            if v.state ~= state then
                v.state = state
            end
            break
        end
    end
end

--通过合成链的groupId来获取整条链的信息
function TwoMergeMapGridManager:GetMergeChainToIdMap(mergeChainId)
    local list = {}
    for k,v in pairs(self.MergeItemInfoMap) do
        if v.groupId == mergeChainId then
            table.insert(list, v)
        end
    end
    table.sort(list , function(i, j) return i.level < j.level end)
    return list
end

--通过合成链id获得当前的物品最大等级
function TwoMergeMapGridManager:GetMergeItemInChainMaxLevel(mergeChainId)
    local _curLevel = 0
    local _itemId = 0
    for _,v in pairs(self.MergeItemInfoMap) do
        if v.groupId == mergeChainId and _curLevel < v.level and v.state == 1 then
           _curLevel = v.level
            _itemId = v.id
        end
    end
    return _curLevel,_itemId
end

--通过itemId获得所属链
function TwoMergeMapGridManager:GetMergeChainId(itemId)
    local _chainId = 0
    for k,v in pairs(self.MergeChainToIdMap) do
        for index,value in pairs(v) do
            if value == itemId then
                _chainId = k
                break
            end
        end
    end
    return _chainId
end

--通过itemId获得所属链的信息
function TwoMergeMapGridManager:GetMergeItemInfoMap(itemId)
    local _chainId = self:GetMergeChainId(itemId)
    if _chainId == 0 then
        console.error("没有找到对应的合成链 == >" .. itemId )
        return nil
    end
    return self:GetMergeChainToIdMap(_chainId)
end

--获取当前item的合成链的最大等级
function TwoMergeMapGridManager:GetItemChainMaxLevel(itemId)
    local _chainId = self:GetMergeChainId(itemId)
    if _chainId == 0 then
        console.error("没有找到对应的合成链 == >" .. itemId )
        return 0
    end
    return #self.MergeChainToIdMap[_chainId]
end

--获取当前item是否是合成链的最大等级
function TwoMergeMapGridManager:IsItemChainMaxLevel(itemId)
    local _maxLevel = self:GetItemChainMaxLevel(itemId)
    local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")
    local _info = _cfg[tostring(itemId)]
    if _info == nil then
        console.error("没有找到对应的合成链 == >" .. itemId )
        return false
    end
    return _maxLevel == _info.level
end

--获取当前合成链解锁的最大等级
function TwoMergeMapGridManager:GetItemIdToChainUnlockMaxId(itemId)
    local _chainId = self:GetMergeChainId(itemId)
    if _chainId == 0 then
        console.error("没有找到对应的合成链 == >" .. itemId )
        return 0
    end
    local _level = 0 
    for k,v in pairs(self.MergeItemInfoMap) do
        if v.groupId == _chainId and v.state == 1 and v.level > _level then
            _level = v.level
        end
    end
    return _level
end

--获取单个物品的信息
function TwoMergeMapGridManager:GetItemInfoById(itemId)
    for k,v in pairs(self.MergeItemInfoMap) do
        if v.id == itemId then
            return v
        end
    end
    return nil
end

--获取当前item对应的合成链的状态 是否可以售卖
-- return 1参数 true 为可以售卖  false 为不可以售卖 2参数可以卖 但是需要查找数量是否大于1 只有2个以上才能卖 
function TwoMergeMapGridManager:GetItemMergeChainState(itemId)
    local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")
    local curUnlockLevel = self:GetItemIdToChainUnlockMaxId(itemId)
    for k,v in pairs(_cfg) do
        if v.id == itemId and v.saleRestrictions <= curUnlockLevel then
            if v.level == v.saleRestrictions  then
                return true , true
            else
                return true , false
            end
        end
    end
end

--获取当前链的已获取过的最大等级的生成器id
function TwoMergeMapGridManager:GetGenerateMergeChainItemId(mergeChainId)
    local isNormalItem = self:CheckItemTypeByChain(mergeChainId) == TwoMergeConfig.ArticleType.Normal
    --if not isNormalItem then
    --    console.error("当前链id不是type == 1 的，不应该查找生成器id")
    --    return 0
    --end

    local list = MergeUtil.GetCurMergeChainGenerateIds(mergeChainId)

    local _level = 0 
    local _curId = ""
    for k,v in pairs(list) do
        for index,value in pairs(self.MergeItemInfoMap) do
            --if v == value.id and value.level > _level  then
            if v == value.id and value.level > _level and value.state ==  1  then
                _level = value.level
                _curId = value.id
                break
            end
        end
    end
    
    return _curId
end

--获取当前物品可产出物品
function TwoMergeMapGridManager:GetCurItemGenerateList(itemId)
    local _itemType = self:CheckItemTypeById(itemId)
    local isNormalItem = _itemType == TwoMergeConfig.ArticleType.Generator or
            _itemType == TwoMergeConfig.ArticleType.NormalChest or
            _itemType == TwoMergeConfig.ArticleType.SelectChest or
            _itemType == TwoMergeConfig.ArticleType.AutoGenerator
    if not isNormalItem then
        console.error("当前链id不是生成器类型的，不应该查找生成的itemid")
        return 0
    end
    local list = {}
    local isShow = {}
    if _itemType == TwoMergeConfig.ArticleType.AutoGenerator or _itemType == TwoMergeConfig.ArticleType.Generator  then
        local _cfg = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")
        list,isShow = MergeUtil.GetCurItemGenerateList(itemId,_cfg)
    else
        local _boxCfg = AppServices.Meta:Category("MergeTwoboxTemplate")
        list,isShow = MergeUtil.GetCurItemGenerateList(itemId,_boxCfg)
    end

    return list,isShow
end

--获取链升级可生成的item
function TwoMergeMapGridManager:GetMergeChainGenerateItem(itemId)
    local _itemType = self:CheckItemTypeById(itemId)
    local isNormalItem = _itemType == TwoMergeConfig.ArticleType.Generator or
            _itemType == TwoMergeConfig.ArticleType.NormalChest or
            _itemType == TwoMergeConfig.ArticleType.SelectChest or
            _itemType == TwoMergeConfig.ArticleType.AutoGenerator
    if not isNormalItem then
        console.error("当前链id不是生成器类型的，不应该查找生成的itemid")
        return 0
    end
    local list = {}
    if _itemType == TwoMergeConfig.ArticleType.AutoGenerator or _itemType == TwoMergeConfig.ArticleType.Generator  then
        local _cfg = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")
        list = MergeUtil.CheckMergeChainGenerateItem(itemId,_cfg)
    else
        local _boxCfg = AppServices.Meta:Category("MergeTwoboxTemplate")
        list = MergeUtil.CheckMergeChainGenerateItem(itemId,_boxCfg)
    end
    return list
end

function TwoMergeMapGridManager:GetCurIdGeneratorId(groupId)
    local _cfg = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")
    local _list = {}
    for k,v in pairs(_cfg) do
        for i = 1, #v.proOutput do
            outputId = tostring(v.proOutput[i][1]):sub(1,6)
            if outputId == groupId then
                table.insert(_list,v)
                break
            end
        end
    end
    
    table.sort(_list,function(a, b)  return a.id < b.id end)
    if #_list > 0 then
        return _list[1].id
    end
    return nil
end

--查看合成链的type
function TwoMergeMapGridManager:CheckItemTypeByChain(mergeChainId)
    for k,v in pairs(self.MergeItemInfoMap) do
        if v.groupId == mergeChainId then
            return v.type
        end
    end
    return 0
end

--查看item的type
function TwoMergeMapGridManager:CheckItemTypeById(itemId)
    for k,v in pairs(self.MergeItemInfoMap) do
        if v.id == itemId then
            return v.type
        end
    end
    return 0
end

function TwoMergeMapGridManager:GetIsSameType(itemArticle, itemId)
    if itemArticle == nil then
        return false
    end
    local _type = self:CheckItemTypeById(itemId)
    local _tempType = self:CheckItemTypeById(itemArticle:GetItemId())
    return _type == _tempType
end

function TwoMergeMapGridManager:ClearMergeChainToIdMap()
    self.MergeChainToIdMap = {}
    self.MergeItemInfoMap = {}
end

function TwoMergeMapGridManager:Tick()
    if self.MapDataList == nil or self.MapDataList[self.curMapId] == nil then return end
    for _, v in pairs(self.MapDataList[self.curMapId]) do
        if v.itemArticle ~= nil then
            v.itemArticle:Tick()
        end
    end
end

return TwoMergeMapGridManager
