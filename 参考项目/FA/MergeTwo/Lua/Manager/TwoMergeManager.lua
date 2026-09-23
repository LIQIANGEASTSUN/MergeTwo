---@class TwoMergeManager 二合活动
local TwoMergeManager = {}
local Article = require("Game.TwoMerge.Article.Article")
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local TwoMergeNetSyncLogic = require("Game.TwoMerge.Net.TwoMergeNetSyncLogic")
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
local ItemData = require("Game.TwoMerge.DataPack.ItemData")
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"
local TwoMergeNetOrder = require("Game.TwoMerge.Net.TwoMergeNetOrder")
local TwoMergeNetQueue = require("Game.TwoMerge.Net.TwoMergeNetQueue")
local TwoMergeNetBag = require("Game.TwoMerge.Net.TwoMergeNetBag")
local OperationLogic = require("Game.TwoMerge.Logic.OperationLogic")
local UndoLogic = require("Game.TwoMerge.Logic.UndoLogic")
local HostingLogic = require("Game.TwoMerge.Logic.HostingLogic")
local MergePool = require("Game.TwoMerge.MergeUtil.MergePool")
local AreaLogic = require("Game.TwoMerge.Logic.AreaLogic")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")

---------------------------------- >>> 初始化 销毁 <<< ----------------------------------
function TwoMergeManager:Init()
    self.netData = {} -- 服务器数据缓存
    AppServices.TwoMergeOrderManager:Init()
    self:InitShopConstValue()
end

function TwoMergeManager:OnDestroy()
    AppServices.TwoMergeOrderManager:Destroy()
end

function TwoMergeManager:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.MergeGridStateChange, self.OnGridStateChanged, self)
    MessageDispatcher:AddMessageListener(MessageType.TwoMergeArticleSelect, self.TwoMergeClickArticle, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Opera_Delete, self.OnDeleteGrid, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Opera_Generator_Speedup, self.OnSpeedupGenerator, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Order_Submit_Success, self.RefreshOrderMark, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_RefreshOrderMark, self.RefreshOrderMark, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Order_Add, self.RefreshOrderMark, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_MergeSucc, self.OnMergeSucc, self)
    MessageDispatcher:AddMessageListener(MessageType.Task_OnTaskFinish, self.OnTaskFinish, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TaskFinish_PanelClose, self.CheckFinishTaskTutorial, self)
end

function TwoMergeManager:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.MergeGridStateChange, self.OnGridStateChanged, self)
    MessageDispatcher:RemoveMessageListener(MessageType.TwoMergeArticleSelect, self.TwoMergeClickArticle, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Opera_Delete, self.OnDeleteGrid, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Opera_Generator_Speedup, self.OnSpeedupGenerator,
        self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Order_Submit_Success, self.RefreshOrderMark, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_RefreshOrderMark, self.RefreshOrderMark, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Order_Add, self.RefreshOrderMark, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_MergeSucc, self.OnMergeSucc, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Task_OnTaskFinish, self.OnTaskFinish, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TaskFinish_PanelClose, self.CheckFinishTaskTutorial, self)
end

---------------------------------- >>> 配置 <<< ----------------------------------
function TwoMergeManager:GetConfig() -- 棋盘配置表
    if self.config == nil then self.config = AppServices.Meta:Category("MergeTwoMainTemplate") end
    return self.config
end

function TwoMergeManager:GetItemConfig() -- 棋盘Item配置表
    if self.itemConfig == nil then self.itemConfig = AppServices.Meta:Category("MergeTwoItemTemplate") end
    return self.itemConfig
end

---------------------------------- >>> 状态 <<< ----------------------------------
function TwoMergeManager:SetRate(state) -- 0: 1倍   1: 2倍   2: 4倍
    AppServices.User.Default:SetKeyValue("twomerge_rate", state)
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_EnergyRate_Refresh)
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:CanDouble() then
            v.itemArticle:RefreshShow()
        end
    end
end

function TwoMergeManager:GetRate() -- 0:无  1:2倍  2:4倍
    local state = AppServices.User.Default:GetKeyValue("twomerge_rate", 0)
    local canRate2, canRate4 = MergeConfigUtil.IsOpenRate()
    if state == 1 and not canRate2 then
        AppServices.User.Default:SetKeyValue("twomerge_rate", 0); state = 0
    elseif state == 2 and not canRate4 then
        AppServices.User.Default:SetKeyValue("twomerge_rate", 0); state = 0
    end
    return state
end

---------------------------------- >>> 二合进入退出 <<< ----------------------------------
function TwoMergeManager:Enter(mapId)
    self:AddListener()
    self.isRunning = true
    self.mapId = mapId
    local row, col = self:GetMaxRowCol(mapId)
    TwoMergeConfig.SetOffsetArgs(row, col) -- 保持棋盘在界面中央
    local gridList, articleList, areaList = self:GetMapData(mapId)
    AreaLogic.Init(areaList)               -- 区域
    -- gridList:  .row  .col  .state
    -- articleList:  .row  .col  .position  .itemId  .count  .itemState
    AppServices.TwoMergeMapGridManager:EnterMap(mapId, gridList, articleList)
    self:InitIllInfo(mapId)
    TwoMergeNetSyncLogic.Init(mapId)
    self:SetShopCurrencyList()
    AppServices.TwoMergeOrderManager:Enter()
end

function TwoMergeManager:Exit()
    self:RemoveListener()
    self.isRunning = false
    HostingLogic.Stop()
    OperationLogic:ClearAll()
    UndoLogic.Clear()
    TwoMergeNetSyncLogic.Destroy()
    MergePool.Clear("TwoMergeArticle")
    AppServices.TwoMergeOrderManager:Exit()
end

function TwoMergeManager:MapId() return self.mapId end

--- 场景 映射到 活动Id
function TwoMergeManager:SetTwoMergeScene(mapId)
    self.scenekey = self.scenekey or {}
    local ins = ActivityServices.ActivityManager:GetInstance(mapId)
    local sceneId = ins:GetSceneId()
    self.scenekey[sceneId] = mapId
end

function TwoMergeManager:IsTwoMergeScene(sceneId)
    if self.scenekey ~= nil and self.scenekey[sceneId] ~= nil then
        return true, self.scenekey[sceneId]
    end
    return false
end

function TwoMergeManager:GetMapData(mapId)
    local config = self:GetConfig()
    local gridList, areaList = self:GetOriginGrid(mapId) -- 原始  不带参数的gridlist
    local articleList, row, col = {}, 0, 0
    --- 读取配置 走不到这里 : 服务器会加载首次地图数据
    if self.netData[mapId] == nil then
        --- 指定mapId 所有配置
        local mapConfig = self:GetCfgByMapId(mapId, config)
        local maxCol = mapConfig[1].maxCol -- 最大列数
        local _Local_row, _Local_col = 0, 0

        for _, v in pairs(mapConfig) do
            _Local_row = _Local_row + 1
            for i = 1, maxCol do
                _Local_col = i
                local _itemCfg = v["column_" .. i]
                local _itemId, _itemState = nil, nil
                if #_itemCfg ~= 0 then
                    _itemId = tostring(_itemCfg[1])
                    _itemState = _itemCfg[2]
                end

                local gridId = TwoMergeConfig.Encode(_Local_row, _Local_col)
                if not string.isEmpty(_itemId) then
                    local gridData = {
                        row            = _Local_row,
                        col            = _Local_col,
                        position       = gridId,
                        itemId         = _itemId,
                        count          = 1,
                        endTimeStamp   = 0,
                        pauseTimeStamp = 0,
                    }
                    local articleInfo = self:CreateArticle(gridData)

                    articleList[gridId] = articleInfo
                end

                gridList[gridId].state = _itemState
            end
        end
        return gridList, articleList, areaList
    else
        for _, gridData in pairs(self.netData[mapId].grids) do
            if gridData.position ~= 0 then
                if not string.isEmpty(gridData.itemId) then
                    local articleInfo = self:CreateArticle(gridData)
                    articleList[gridData.position] = articleInfo
                end
                -- console.print(">>>  my  "..tostring(gridData.position))
                if gridList[gridData.position] ~= nil then
                    gridList[gridData.position].state = gridData.state
                end
            end
        end
        return gridList, articleList, areaList
    end
end

--- 原始格子信息
function TwoMergeManager:GetOriginGrid(mapId)
    local grids = {}
    local areas = {}
    local config = self:GetConfig()
    local mapConfig = self:GetCfgByMapId(mapId, config)
    local row, col = self:GetMaxRowCol(mapId)
    local columDate = nil
    local areaTask, areaType = nil, nil
    for i = 1, row, 1 do
        for j = 1, col, 1 do
            columDate = mapConfig[i]["column_" .. j]
            areaTask = columDate[4]
            areaType = columDate[5]
            -- 默认给0 已解锁状态
            grids[TwoMergeConfig.Encode(i, j)] = {
                _row = i,
                _col = j,
                state = TwoMergeConfig.ArticleState.Unlock,
                gridCoverIcon = columDate[3],
                areaTask = areaTask,
                areaType = areaType,
            }
            -- 区域
            if not string.isEmpty(areaTask) then
                areas[areaTask] = areas[areaTask] or { list = {}, areaType = 0 }
                table.insert(areas[areaTask].list, { row = i, col = j })
                if areaType ~= 0 then
                    areas[areaTask].areaType = areaType
                end
            end
        end
    end
    return grids, areas
end

--- 最大行列
function TwoMergeManager:GetMaxRowCol(mapId)
    self.maxRC = self.maxRC or {}
    if self.maxRC[mapId] == nil then
        local config = self:GetConfig()
        local mapConfig = self:GetCfgByMapId(mapId, config)
        local row = #mapConfig
        local col = mapConfig[1].maxCol
        self.maxRC[mapId] = { row = row, col = col }
    end
    return self.maxRC[mapId].row, self.maxRC[mapId].col
end

--- 生成新的Article
function TwoMergeManager:CreateArticle(gridData)
    local itemData = ItemData.new(gridData)
    local articleInfo = Article.new(itemData)
    return articleInfo
end

---------------------------------- >>> 创建相关 <<< ----------------------------------
function TwoMergeManager:SetArticleObj(item, root, dragroot)
    self.ArticleItem = item; self.ArticleRoot = root; self.dragRoot = dragroot
end

function TwoMergeManager:GetArticleParent() return self.ArticleRoot end

function TwoMergeManager:GetArticleCloneItem() return self.ArticleItem end

-- function TwoMergeManager:SetParentArticleRoot(article) article.articleView:SetParent(self.ArticleRoot) end
-- function TwoMergeManager:SetParentDragRoot(article) article.articleView:SetParent(self.dragRoot) end
function TwoMergeManager:SetGridObj(item, root)
    self.gridItem = item; self.gridRoot = root
end

function TwoMergeManager:GetGridParent() return self.gridRoot end

function TwoMergeManager:GetGridCloneItem() return self.gridItem end

function TwoMergeManager:SetAreaObj(item, root)
    self.areaItem = item; self.areaRoot = root
end

-- function TwoMergeManager:GetAreaParent() return self.areaRoot end
function TwoMergeManager:GetAreaCloneItem() return self.areaItem end

function TwoMergeManager:GetItemCount(mapId, itemId) return TwoMergeNetOrder.GetItemCount(mapId, itemId) end

function TwoMergeManager:IsInBagButton(eventData)
    if Runtime.CSNull(self.btn_bagRect) then
        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
        if panel == nil then return false end
        self.btn_bagRect = find_component(panel.btn_bag.gameObject, "", RectTransform)
        local rect = self.btn_bagRect.rect
        self.bagWidthHalf = rect.width * 0.5
        self.bagHeightHalf = rect.height * 0.5
    end
    local anchored = GameUtil.ScreenToUISpace(self.btn_bagRect, eventData.position)
    if anchored.x < self.bagWidthHalf * -1 or self.bagWidthHalf < anchored.x then return false end
    if anchored.y < self.bagHeightHalf * -1 or self.bagHeightHalf < anchored.y then return false end
    return true, self.btn_bagRect
end

---根据活动id初始化地图配置信息
function TwoMergeManager:GetCfgByMapId(mapId, cfg)
    local _tempData = {}
    for _, v in pairs(cfg) do
        if v.mapId == tostring(mapId) then
            table.insert(_tempData, v)
        end
    end
    table.sort(_tempData, function(i, j) return tonumber(i.id) < tonumber(j.id) end)
    return _tempData
end

---------------------------------- >>> 通信 <<< ----------------------------------
--- 下次打开界面重新请求信息
function TwoMergeManager:SetReadyRequestInfo() self.readyRequestServer = true end

--- 如果没有 则获取
function TwoMergeManager:CheckMapData(mapId)
    if self.netData[mapId] == nil or self.readyRequestServer then
        self:TwoMergeInfoRequest(mapId)
        self.readyRequestServer = false
    else
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_ServerData_Success, true) -- 是否真实请求
    end
end

--- 获取缓存数据
function TwoMergeManager:GetNetData(mapId) if self.netData ~= nil then return self.netData[mapId] end end

--- 获取棋盘信息
function TwoMergeManager:TwoMergeInfoRequest(mapId)
    local function funcSuccessCbk(response)
        local netInfo = {}
        -- 所有格子信息
        local gridInfos = Net.Converter.ConvertArray(response.gridInfos) or {}

        local ItemConfig = AppServices.TwoMergeManager:GetItemConfig()
        -- 待使用的道具集合
        local queue = Net.Converter.ConvertArray(response.itemIds) or {}
        netInfo.queue = {}
        for _, itemId in pairs(queue) do
            if ItemConfig[itemId] ~= nil then table.insert(netInfo.queue, itemId) end
        end
        -- 地图格子信息
        netInfo.grids = {}
        -- 背包格子信息
        netInfo.bags = {}
        -- 额外开的格子数量
        netInfo.extra = response.extra
        --- 获得过的集合
        netInfo.gotItems = {}
        local tempGotItems = Net.Converter.ConvertArray(response.gotItems) or {}
        for _, itemId in pairs(tempGotItems) do netInfo.gotItems[itemId] = true end
        --- 支线订单
        netInfo.orders = {}
        local subOrders = Net.Converter.ConvertArray(response.subOrders) or {}
        for _, orderId in pairs(subOrders) do netInfo.orders[orderId] = true end
        --- 3类型订单数据 .groupId  .lastFinishId  .cdEndTime
        netInfo.positionOrders = {}
        local positionOrders = Net.Converter.ConvertArray(response.orderMsgs) or {}
        for _, v in pairs(positionOrders) do
            netInfo.positionOrders[tostring(v.groupId)] = {
                grouId = v.groupId,
                lastFinishId = v.lastFinishId,
                cdEndTime =
                    v.cdEndTime * 0.001
            }
        end
        --- 随机类型订单数据
        netInfo.randomOrders = {} -- .orderId  .difficult  .orderItems:{ [1] = { .itemId .count}  }
        local randomOrders = Net.Converter.ConvertArray(response.randomOrderInfos) or {}
        for _, v in pairs(randomOrders) do
            local items = {}
            for _, item in pairs(v.orderItems) do
                table.insert(items, { itemId = item.itemId, count = item.count })
            end
            netInfo.randomOrders[v.orderId] = {
                orderId = v.orderId,
                difficult = v.difficult,
                orderItems = items,
            }
        end
        --- 随机类型订单CD信息
        netInfo.randomOrderCD = {
            simpleEnd = response.randomOrderCDInfo.simpleEnd * 0.001,
            simpleNum = response.randomOrderCDInfo.simpleNum,
            difficultEnd = response.randomOrderCDInfo.difficultEnd,
        }
        --- 固定订单类型array
        netInfo.fixOrderIds = {}
        local fixOrderIds = Net.Converter.ConvertArray(response.fixOrderIds) or {}
        for _, id in pairs(fixOrderIds) do netInfo.fixOrderIds[id] = true end
        --- 体力数量
        if response.purpleEnergy ~= nil then
            local config = AppServices.Meta:Category("MergeTwoConfigTemplate")[mapId]
            AppServices.User:SetPropNumber(config.default_use_power, response.purpleEnergy)
        end
        --- 购买体力次数
        netInfo.energyBuyCount = response.buyPurpleEnergyCount or 0
        netInfo.energyBuyTodayNow = TimeUtil.ServerTime() -- 当前时间戳  判断两时间戳不是同一天 则刷新次数

        netInfo.cache_items = {}                          -- item更改 同步用
        netInfo.cache_ills = {}                           -- 图鉴更改 同步用
        netInfo.cache_bags = {}                           -- 背包更改 同步用
        netInfo.cache_logs_add = {}                       -- item产 打点用
        netInfo.cache_logs_remove = {}                    -- item销 打点用
        netInfo.cache_mergecount = 0                      -- 合成次数 打点用
        for _, gridData in pairs(gridInfos) do
            local row, col = TwoMergeConfig.Decode(gridData.position)

            local itemData = {
                row       = row,
                col       = col,
                position  = gridData.position,
                itemId    = gridData.itemId,
                count     = gridData.count,
                state     = gridData.state,
                itemState = gridData.itemState,
            }
            --- .itemData : 根据 "道具类型" 解析为对应的数据结构
            --- .itemStateData : 根据 "Item状态" 解析为对应的数据结构
            if not string.isEmpty(gridData.itemId) then
                if ItemConfig[gridData.itemId] == nil then
                    --- 曾经的ItemId配置被删掉
                    itemData.itemId = 0
                    itemData.count = 0
                    itemData.itemState = gridData.state
                else
                    DataPack.CheckConvertMsg(gridData.itemId, itemData, gridData.itemData, gridData.itemStateData)
                end
            end

            if TwoMergeConfig.IsBagGrid(row, col) then
                netInfo.bags[gridData.position] = itemData
            else
                netInfo.grids[gridData.position] = itemData
            end
        end
        self.netData[mapId] = netInfo

        self:SetTwoMergeScene(mapId)
        self:SetTwoMergeBpInfo(mapId, response)
        self.mapId = mapId
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_ServerData_Success, false)
    end
    local function funcFailedCbk(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    Net.Twomergemodulemsg_30201_TwoMergeInfo_Request({ cfgId = mapId }, funcFailedCbk, funcSuccessCbk)
end

--- 同步消息
function TwoMergeManager:SynGridInfoRequest(mapId)
    local modifies = AppServices.TwoMergeMapGridManager:GetModifyMap()
    local netInfo = self.netData[mapId]

    if table.isEmpty(modifies) and
        table.isEmpty(netInfo.cache_bags) and
        table.isEmpty(netInfo.cache_ills) and
        table.isEmpty(netInfo.cache_items) then
        return
    end



    -- local test_pre, test_middle, test_back = "", "", ""
    -- local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    -- local row, col, tempId
    -- for _, v in pairs(list) do
    --     tempId = ""
    --     if v.itemArticle then
    --         tempId = v.itemArticle:GetItemId()
    --         row, col = v.itemArticle:GetRowCol()
    --         test_back = test_back..row..","..col.."_"..tempId.."; "
    --     end
    -- end

    -- for positionId, v in pairs(netInfo.grids) do
    --     row, col = TwoMergeConfig.Decode(tonumber(positionId))
    --     test_pre = test_pre..row..","..col.."_"..v.itemId.."; "
    -- end

    --- 地图格子
    local gridInfos = {}

    for positionId, _ in pairs(modifies) do
        local mapData = AppServices.TwoMergeMapGridManager:GetMapData(positionId)

        local serverData = nil
        if mapData.itemArticle ~= nil then
            netInfo.grids[positionId] = DataPack.ArticleToData(mapData.itemArticle)
            netInfo.grids[positionId].state = mapData.state
            serverData = DataPack.DataToServerData(netInfo.grids[positionId])
            serverData.state = mapData.state

            -- row, col = mapData.itemArticle:GetRowCol()
            -- test_middle = test_middle..row..","..col.."_"..mapData.itemArticle:GetItemId().."; "
        else
            serverData = {
                position = positionId,
                itemId = "",
                count = 0,
                state = mapData.state,
                itemState = 0,
            }
            netInfo.grids[positionId] = serverData
            -- row, col = TwoMergeConfig.Decode(tonumber(positionId))
            -- test_middle = test_middle..row..","..col.."_; "
        end

        table.insert(gridInfos, serverData)
    end

    -- console.error(">>>  前置"..test_pre)
    -- console.error(">>>  变化"..test_middle)
    -- console.error(">>>  后置"..test_back)

    --- 背包格子
    local oldcache_bag = {}
    for positionId, _ in pairs(netInfo.cache_bags) do
        oldcache_bag[positionId] = true
        local serverData = DataPack.DataToServerData(netInfo.bags[positionId])
        table.insert(gridInfos, serverData)
    end
    self.netData[mapId].cache_bags = {}

    --- Item道具改变
    local oldcache_item = {}
    local items = {}
    local changeitems = self.netData[mapId].cache_items
    for id, count in pairs(changeitems) do
        table.insert(items, {
            itemTemplateId = id,
            count = count,
            cdTimes = {}, -- TODO 计时相关道具用
        })
        oldcache_item[id] = count
    end
    self.netData[mapId].cache_items = {}
    --- 图鉴改变
    local oldcache_ill = {}
    local ills = {}
    for _, itemId in pairs(self.netData[mapId].cache_ills) do
        table.insert(oldcache_ill, itemId)
        table.insert(ills, itemId)
    end

    local function funcSuccessCbk(response)
        -- 缓存item的变化 发送到本地
        for id, count in pairs(changeitems) do
            if count > 0 then
                AppServices.User:AddItem(id, count)
            else
                AppServices.User:UseItem(id, -count)
            end
        end

        local headInfoView = App.scene:GetWidget(CONST.MAINUI.ICONS.HeadInfoView)
        headInfoView:RefreshItems()
        -- 打点
        self:Log_Opera(mapId, self.netData[mapId].cache_mergecount)
        self:Log_Item(mapId, self.netData[mapId].cache_logs_add, self.netData[mapId].cache_logs_remove)
        self.netData[mapId].cache_logs_add = {}
        self.netData[mapId].cache_logs_remove = {}
        self.netData[mapId].cache_mergecount = 0
    end
    local function funcFailedCbk(errorCode)
        AppServices.TwoMergeMapGridManager:SetModifyMap(modifies)

        -- 同步失败  将缓存数据还原 等待下次同步
        local cache_bags = self.netData[mapId].cache_bags
        for positionId, _ in pairs(oldcache_bag) do
            cache_bags[positionId] = true
        end

        local cache_items = self.netData[mapId].cache_items
        for id, count in pairs(oldcache_item) do
            cache_items[id] = count
        end

        local cache_ills = self.netData[mapId].cache_ills
        for _, itemId in pairs(oldcache_ill) do
            table.insert(cache_ills, itemId)
        end

        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        cfgId = mapId,
        gridInfos = gridInfos,
        items = items,
        gotNewItems = ills,
    }
    Net.Twomergemodulemsg_30202_SynGridInfo_Request(params, funcFailedCbk, funcSuccessCbk) -- , { weakOnline = true })
end

---------------------------------- >>> 购买体力次数 <<< ----------------------------------
function TwoMergeManager:GetEnergyBuyCount(mapId)
    local netInfo = self.netData[mapId]
    if netInfo ~= nil then return netInfo.energyBuyCount end
end

function TwoMergeManager:EnergyBuyRequest(mapId, itemId, count, cost)
    local function succfunc(info)
        local netInfo = self.netData[mapId]
        netInfo.energyBuyCount = netInfo.energyBuyCount + 1
        AppServices.User:AddItem(itemId, count)
        AppServices.User:UseItem(ItemId.DIAMOND, cost)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_BuyEnergySucc)

        local pcb = PanelCallbacks:Create(function() end)
        PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, {
            rewards = { [1] = { ItemId = itemId, Amount = count } }
        }, pcb)
    end
    local function failfunc(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        purpleShopCfgId = mapId,
        cost = cost,
    }
    Net.Twomergemodulemsg_30215_TwoMergeBuyPurpleEnergy_Request(params, failfunc, succfunc)
end

function TwoMergeManager:EnergyBuyCountCheck(mapId)
    local netInfo = self.netData[mapId]
    if netInfo ~= nil then
        local issameday = TimeUtil.InSameRefreshDay(netInfo.energyBuyTodayNow, TimeUtil.ServerTime())
        if not issameday then
            netInfo.energyBuyTodayNow = TimeUtil.ServerTime()
            netInfo.energyBuyCount = 0
        end
    end
end

---------------------------------- >>> 接口 <<< ----------------------------------
function TwoMergeManager:HasGeneratorLinkId(mapId, linkId)
    if self.netData[mapId] == nil then return false end
    local haslink = false
    local itemConfig = self:GetItemConfig()
    local config = nil
    local grids = self.netData[mapId].grids
    local groudId = tostring(math.floor(tonumber(linkId) / 100))
    for _, v in pairs(grids) do
        config = itemConfig[v.itemId]
        if config ~= nil and config.type == TwoMergeConfig.ArticleType.Generator and config.groupId == groudId and tonumber(config.id) >= tonumber(linkId) then
            haslink = true; break
        end
    end
    if haslink then return true end

    local bags = self.netData[mapId].bags
    for _, v in pairs(bags) do
        config = itemConfig[v.itemId]
        if config ~= nil and config.type == TwoMergeConfig.ArticleType.Generator and config.groupId == groudId and tonumber(config.id) >= tonumber(linkId) then
            haslink = true; break
        end
    end
    if haslink then return true end

    local queue = self.netData[mapId].queue
    for _, itemId in pairs(queue) do
        config = itemConfig[itemId]
        if config ~= nil and config.type == TwoMergeConfig.ArticleType.Generator and config.groupId == groudId and tonumber(config.id) >= tonumber(linkId) then
            haslink = true; break
        end
    end
    if haslink then return true end
    return false
    -- local isRunning = AppServices.TwoMergeMapGridManager:IsRunning()
end

---------------------------------- >>> 背包 <<< ----------------------------------
function TwoMergeManager:GetDataBags(mapId) return self.netData[mapId].bags end

--- 获取背包数据  有序  有空
function TwoMergeManager:GetBagItems(mapId) return TwoMergeNetBag.GetBagItems(mapId) end

--- 解锁背包的格子
function TwoMergeManager:UnlockBagGrid(mapId, gridIndex) TwoMergeNetBag.UnlockBagGrid(mapId, gridIndex) end

--- 背包 -> 格子
function TwoMergeManager:BagToGrid(mapId, mapData) TwoMergeNetBag.BagToGrid(mapId, mapData) end

--- 格子 -> 背包
function TwoMergeManager:GridToBag(mapId, article) TwoMergeNetBag.GridToBag(mapId, article) end

function TwoMergeManager:BagRemove(mapId, row, col) TwoMergeNetBag.BagRemove(mapId, row, col) end

function TwoMergeManager:BagAdd(mapId, gridData) TwoMergeNetBag.BagAdd(mapId, gridData) end

function TwoMergeManager:GetOneBagGrid(mapId) return TwoMergeNetBag.GetOneBagGrid(mapId) end

---------------------------------- >>> 队列 <<< ----------------------------------
function TwoMergeManager:QueueGet(mapId) return TwoMergeNetQueue.QueueGet(mapId) end

function TwoMergeManager:QueueUse(mapId, params) TwoMergeNetQueue.QueueUse(mapId, params) end

function TwoMergeManager:QueueAdd(mapId, itemId, count) TwoMergeNetQueue.QueueAdd(mapId, itemId, count) end

function TwoMergeManager:QueueRemove(mapId, itemId) TwoMergeNetQueue.QueueRemove(mapId, itemId) end

function TwoMergeManager:QueueHasGenerator(mapId) return TwoMergeNetQueue.QueueHasGenerator(mapId) end

---------------------------------- >>> 待同步缓存 <<< ----------------------------------
function TwoMergeManager:AddItem(mapId, id, count, source, args)
    id = tostring(id)
    local items = self.netData[mapId].cache_items
    if items[id] == nil then items[id] = 0 end
    items[id] = items[id] + count

    MessageDispatcher:SendMessage(MessageType.Msg_ItemChanged_Cache, id, count, args)

    local logs_add = self.netData[mapId].cache_logs_add
    logs_add[id] = logs_add[id] or {}
    logs_add[id][source] = (logs_add[id][source] or 0) + count

    if items[id] >= 1000 then TwoMergeNetSyncLogic.Trigger() end -- 触发同步
end

function TwoMergeManager:RemoveItem(mapId, id, count, source)
    id = tostring(id)
    local items = self.netData[mapId].cache_items
    if items[id] == nil then items[id] = 0 end
    items[id] = items[id] - count

    local logs_remove = self.netData[mapId].cache_logs_remove
    logs_remove[id] = logs_remove[id] or {}
    logs_remove[id][source] = (logs_remove[id][source] or 0) + count

    MessageDispatcher:SendMessage(MessageType.Msg_ItemChanged_Cache, id, -count)
end

function TwoMergeManager:GetItemAmount(mapId, id)
    local userCount = AppServices.User:GetItemAmount(id)
    if self.netData[mapId] == nil then return userCount end
    id = tostring(id)
    local items = self.netData[mapId].cache_items
    local changed = items[id] or 0
    return userCount + changed
end

function TwoMergeManager:OnMergeSucc()
    local mapId = self:MapId()
    self.netData[mapId].cache_mergecount = self.netData[mapId].cache_mergecount + 1
end

function TwoMergeManager:Log_Opera(mapId, mergecount)
    DcDelegates:TDLog(SDK_EVENT.two_merge_times, { activity_id = mapId, merge_times = mergecount })
end

function TwoMergeManager:Log_Item(mapId, logs_add, logs_remove)
    if logs_add ~= nil then
        for itemId, sources in pairs(logs_add) do
            for source, count in pairs(sources) do
                DcDelegates:TDLog(SDK_EVENT.report_item_merge, {
                    activity_id = mapId,
                    change_type = 1, -- 1增加  -1减少
                    report_item_id = itemId,
                    change_method = source,
                    change_num = count,
                })
            end
        end
    end
    if logs_remove ~= nil then
        for itemId, sources in pairs(logs_remove) do
            for source, count in pairs(sources) do
                DcDelegates:TDLog(SDK_EVENT.report_item_merge, {
                    activity_id = mapId,
                    change_type = -1, -- 1增加  -1减少
                    report_item_id = itemId,
                    change_method = source,
                    change_num = count,
                })
            end
        end
    end
end

---------------------------------- >>> 订单 <<< ----------------------------------
--- 订单是否完成
function TwoMergeManager:OrderGet(mapId, orderId, orderType) return TwoMergeNetOrder.OrderGet(mapId, orderId, orderType) end

--- 支线订单提交  orderType: 0配置订单  1自定义随机订单
function TwoMergeManager:OrderSubmit(mapId, orderId, orderType, endtime, list, callback, animationDataCB)
    TwoMergeNetOrder.OrderSubmit(mapId, orderId, orderType, endtime, list, callback, animationDataCB)
end

function TwoMergeManager:GetPositionOrderInfo(mapId, groupId) return TwoMergeNetOrder.GetPositionOrderInfo(mapId, groupId) end

function TwoMergeManager:SetPositionOrderInfo(mapId, groupId, lastFinishId, cdEndTime)
    TwoMergeNetOrder
        .SetPositionOrderInfo(mapId, groupId, lastFinishId, cdEndTime)
end

function TwoMergeManager:GetConsumeResult(mapId, list) return TwoMergeNetOrder.GetConsumeResult(mapId, list) end

function TwoMergeManager:GetConsumeChangedInfo(mapId, list)
    local enough, usePositions, useQueues = TwoMergeNetOrder.GetConsumeResult(mapId, list)
    local gridInfos, waitItems = {}, {}
    if enough then
        for _, positionId in pairs(usePositions) do
            local data = DataPack.CreateNullData(TwoMergeConfig.Decode(positionId))
            table.insert(gridInfos, data)
        end
        for _, itemId in pairs(useQueues) do
            table.insert(waitItems, itemId)
        end
    end
    return usePositions, useQueues, gridInfos, waitItems
end

function TwoMergeManager:GetDefineOrder(mapId, type) return TwoMergeNetOrder.GetDefineOrder(mapId, type) end

function TwoMergeManager:GetDefineOrderInfo(mapId) return TwoMergeNetOrder.GetDefineOrderInfo(mapId) end

function TwoMergeManager:TwoMergeRandomOrderRequest(mapId, orderInfo, endtime, issimple, callback)
    TwoMergeNetOrder.TwoMergeRandomOrderRequest(mapId, orderInfo, endtime, issimple, callback)
end

function TwoMergeManager:TwoMergeRandomOrderCDRequest(mapId, endtime, callback)
    TwoMergeNetOrder.TwoMergeRandomOrderCDRequest(mapId, endtime, callback)
end

function TwoMergeManager:NetGridsNull(mapId, gridInfos)
    local grids = self.netData[mapId].grids
    local bags = self.netData[mapId].bags
    local isRunning = AppServices.TwoMergeMapGridManager:IsRunning()
    for _, positionId in pairs(gridInfos) do
        local row, col = TwoMergeConfig.Decode(positionId)
        if TwoMergeConfig.IsBagGrid(row, col) then
            local data = DataPack.CreateNullData(row, col)
            bags[positionId] = data
        else
            local data = DataPack.CreateNullData(row, col)
            grids[positionId] = data
            if isRunning then --- 棋盘数据设置
                AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.UseItem)
            end
        end
    end
end

function TwoMergeManager:NetQueueNull(mapId, waitItems)
    for _, itemId in pairs(waitItems) do
        AppServices.TwoMergeManager:QueueRemove(mapId, itemId)
    end
end

function TwoMergeManager:OnTaskFinish(id) AreaLogic.OnFinishTask(id) end

function TwoMergeManager:CheckFinishTaskTutorial()
    local curScene = App.scene:GetCurrentSceneId()
    local inScene = self:IsTwoMergeScene(curScene)
    if inScene then
        local mapId = self:MapId()
        local state = AppServices.User.Default:GetKeyValue("twomerge_tutorial_finishtask" .. tostring(mapId), 0)
        if state == 0 then
            App.mapGuideManager:StartSeries(GuideIDs.GuideTwoMergeEnterTaskFinish)
            AppServices.User.Default:SetKeyValue("twomerge_tutorial_finishtask" .. tostring(mapId), 1, true)
            return
        end
    end
end

function TwoMergeManager:IsUnlockArea(positionId)
    local result, taskId = AreaLogic.IsUnlockByPositionId(positionId)
    return result, taskId
end

function TwoMergeManager:ShowUnlockArea(taskId)
    self.unlockTips = self.unlockTips or {}
    if self.unlockTips[taskId] == nil then
        local sceneId = App.scene:GetCurrentSceneId()
        local taskList = AppServices.Task:GetActivitySceneTasks(sceneId)
        for index, tId in ipairs(taskList) do
            if tId == taskId then
                self.unlockTips[taskId] = tostring(index)
                break
            end
        end
    end
    local params = { num = self.unlockTips[taskId] }
    local content = Runtime.Translate("merge_guide_14", params)
    LuaGameUtil.ShowContent(content)
end

---------------------------------- >>> 图鉴 <<< ----------------------------------
function TwoMergeManager:InitIllInfo(mapId)
    local gotItems = self.netData[mapId].gotItems
    for itemId, _ in pairs(gotItems) do
        AppServices.TwoMergeMapGridManager:GetMergeChainInfoMap(itemId, 1)
    end
end

function TwoMergeManager:Ill_IsUnlock(mapId, itemId)
    local gotItems = self.netData[mapId].gotItems
    return gotItems[itemId] or false
end

--- 图鉴尝试解锁
function TwoMergeManager:CheckIllUnlock(mapId, itemId)
    local gotItems = self.netData[mapId].gotItems
    if (not string.isEmpty(itemId)) and (not gotItems[itemId]) then
        gotItems[itemId] = true

        local ills = self.netData[mapId].cache_ills
        table.insert(ills, itemId)

        AppServices.TwoMergeMapGridManager:GetMergeChainInfoMap(itemId, 1)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_IllUnlock, itemId)
    end
end

function TwoMergeManager:Ill_UnlockMax(mapId, linkId)
    if self.netData[mapId] == nil then return 0 end
    local gotItems = self.netData[mapId].gotItems
    local pre_Number = tonumber(linkId) * 100
    local itemId = ""
    local itemConfig = self:GetItemConfig()
    local maxlevel = 0
    for i = 1, 20, 1 do
        itemId = tostring(pre_Number + i)
        if itemConfig[itemId] == nil then
            break
        end
        if gotItems[itemId] then
            maxlevel = i
        end
    end
    return maxlevel
end

--- 找itemId 并标记
function TwoMergeManager:FindItemAndMark(mapId, itemId)
    if string.isEmpty(itemId) or self:GetItemConfig()[itemId] == nil then return end
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    for _, v in pairs(list) do
        if v.itemArticle and v.itemArticle:GetItemId() == itemId and v.itemArticle:GetItemState() == TwoMergeConfig.ArticleState.Unlock then
            v.itemArticle:GetArticleView():SetFindMark(true)
            return v.itemArticle
        end
    end
end

--- 清除所有特殊标记
function TwoMergeManager:ClearSpecialMark()
    self.clearstate = self.clearstate or 0
    self.clearstate = self.clearstate + 1
    if self.clearstate >= 2 then
        self.clearstate = 0
        local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
        for _, v in pairs(list) do
            if v.itemArticle then
                v.itemArticle:GetArticleView():ClearSpecialMark()
            end
        end
    end
end

--- 播放特效
function TwoMergeManager:PlayEffect(name, time, position, root)
    if not self.isRunning then return end
    local prefabPath = "Prefab/ScreenPlays/DragonEffect/" .. name .. ".prefab"
    local gameObject = BResource.InstantiateFromAssetName(prefabPath)
    --- 设置父物体
    if root then
        gameObject.transform:SetParent(root)
    else
        gameObject.transform:SetParent(self:GetArticleParent())
    end
    gameObject.transform:SetLocalScale(Vector3.one)
    local rect = find_component(gameObject, "", RectTransform)
    rect.anchoredPosition = position
    if time ~= nil then GameObject.Destroy(gameObject, time) end
    return gameObject
end

function TwoMergeManager:PlayEffectDelay(name, time, position, root, delay)
    self.finishtimers = self.finishtimers or {}
    -- WaitExtension.SetTimeout(function()
    --     self:PlayEffect(name, time, position, root)
    -- end, delay)

    local function onSet(val) end
    DOTween.To(onSet, 0, 10, delay):OnComplete(function()
        self:PlayEffect(name, time, position, root)
    end)
end

---------------------------------- >>> 监听方法 <<< ----------------------------------
--- 选中
function TwoMergeManager:TwoMergeClickArticle(positionId, preSelectId)
    local mapData = AppServices.TwoMergeMapGridManager:GetMapDataList()
    for _, v in pairs(mapData) do
        if v.itemArticle then v.itemArticle:ChooseItem(positionId) end
    end
end

--- 点击删除
function TwoMergeManager:OnDeleteGrid(row, col)
    local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
    if article ~= nil then
        AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.DeleteBtn)
    end
end

--- 地格状态更改
function TwoMergeManager:OnGridStateChanged(row, col, stateType)
    local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
    if article ~= nil then
        article:GridStateChange(stateType)
    end
end

--- 点击加速
function TwoMergeManager:OnSpeedupGenerator(row, col)
    local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
    if article ~= nil then
        if TwoMergeConfig.NeedEndTime(article:GetConfig().type) then
            AppServices.TwoMergeMapGridManager:SetItemSpecData(row, col, TwoMergeConfig.ItemDataKey["end"],
                TimeUtil.ServerTime() - 1)
            article:RefreshShow()
        end
    end
end

--- 订单完成
function TwoMergeManager:RefreshOrderMark()
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    if list ~= nil then
        for _, v in pairs(list) do
            if v.itemArticle then
                v.itemArticle:GetArticleView():CheckMarks()
            end
        end
    end
end

---------------------------------- >>> 监听方法 end

--- 获取当前场景对应的二合mapId
function TwoMergeManager:GetMapId()
    local mapId = self:MapId()
    if mapId then
        return mapId
    end
    ---@type ActivityBase
    local insList = ActivityServices.ActivityManager:GetActivityInstancesByType(ActivityType.TwoMerge, true)
    if not insList or #insList <= 0 then return end

    local activityId = nil
    local mapId = App.scene:GetCurrentSceneId()
    for _, ins in ipairs(insList) do
        local cfg = ins:GetActivityConfig()
        if cfg.sceneID == mapId then
            activityId = ins:GetActivityId(); break
        end
    end
    return activityId
end

---------------------------------- >>> GM加载 <<< ----------------------------------
function TwoMergeManager:GMLoadConfigMap(mapId)
    --- 指定mapId 所有配置
    local mapConfig = self:GetCfgByMapId(mapId, self:GetConfig())
    local maxCol = mapConfig[1].maxCol -- 最大列数
    local _Local_row, _Local_col = 0, 0

    for _, v in pairs(mapConfig) do
        _Local_row = _Local_row + 1
        for i = 1, maxCol do
            _Local_col = i
            local _itemCfg = v["column_" .. i]
            local _itemId, _itemState = nil, nil
            if #_itemCfg ~= 0 then
                _itemId = tostring(_itemCfg[1])
                _itemState = _itemCfg[2]
            end

            -- 删除旧的
            local old = AppServices.TwoMergeMapGridManager:FindItemArticle(_Local_row, _Local_col)
            if old ~= nil then
                AppServices.TwoMergeMapGridManager:RealRemove(_Local_row, _Local_col, TwoMergeConfig.ArticleRemoveType
                    .GM)
            end

            local gridId = TwoMergeConfig.Encode(_Local_row, _Local_col)
            if not string.isEmpty(_itemId) then
                -- local gridData = {
                --     row             = _Local_row,
                --     col             = _Local_col,
                --     position        = gridId,
                --     itemId          = _itemId,
                --     count           = 1,
                --     endTimeStamp    = 0,
                --     pauseTimeStamp  = 0,
                --     itemState       = 0,
                -- }
                local gridData = DataPack.CreateItemData(_itemId, _Local_row, _Local_col)
                local articleInfo = self:CreateArticle(gridData)
                AppServices.TwoMergeMapGridManager:AddArticle(_Local_row, _Local_col, articleInfo)
            end

            AppServices.TwoMergeMapGridManager:SetStateByRowCol(_Local_row, _Local_col, _itemState)
        end
    end

    for i = TwoMergeConfig.defaultStartPosition, TwoMergeConfig.defaultStartPosition + 10, 1 do
        self:BagRemove(mapId, TwoMergeConfig.Decode(i))
    end
end

---------------------------------- >>> 商店 <<< ----------------------------------
---设置二合商城的货币集合
function TwoMergeManager:SetShopCurrencyList()
    if self.shopCurrencyList == nil then
        self.shopCurrencyList = {}
    end
    if #self.shopCurrencyList == 0 then
        self.shopCurrencyList = MergeUtil.GetCurrencyList()
    end
end

--设置二合商店的固定参数
function TwoMergeManager:InitShopConstValue()
    --每日商品刷新时间间隔
    self.merge_shop_sale = AppServices.Meta:Category("ConfigTemplate")["merge_shop_sale"].value * 3600
    --热卖商品刷新时间间隔
    self.merge_shop_ordinary = AppServices.Meta:Category("ConfigTemplate")["merge_shop_ordinary"].value * 3600
    --普通商品库存上限
    self.merge_shop_ordinary_inventory = AppServices.Meta:Category("ConfigTemplate")["merge_shop_ordinary_inventory"]
        .value
    --普通商品刷新广告
    self.merge_shop_refresh_ad = AppServices.Meta:Category("ConfigTemplate")["merge_shop_refresh_ad"].value
    --普通商品刷新钻石
    self.merge_shop_refresh_diamond = table.deserialize(AppServices.Meta:Category("ConfigTemplate")
        ["merge_shop_refresh_diamond"].value)
end

function TwoMergeManager:GetProductPos(id)
    local cfg = AppServices.Meta:Category("MergeTwoShopTemplate")[id]
    return cfg.productPos or 0
end

function TwoMergeManager:TwoMergeShopInfoRequest(callbacks)
    local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
    local function success(response)
        --每日商品集合
        self.dayShopItemInfo = {}
        local data = Net.Converter.ConvertArray(response.dayShopItems) or {}

        for k, v in pairs(data) do
            table.insert(self.dayShopItemInfo, v)
        end

        table.sort(self.dayShopItemInfo, function(a, b)
            return a.shopItem.position < b.shopItem.position
        end)

        --热卖商品集合
        self.hotShopItemInfo = Net.Converter.ConvertArray(response.hotShopItems) or {}
        --热卖商品广告每日刷新已用次数
        self.hotAdsCount = response.hotAdsCount or 0
        --热卖商品钻石每日刷新已用次数
        self.hotDiamondCount = response.hotDiamondCount or 0
        --上次每日商品刷新时间点
        self.lastDayUpdateTime = response.lastDayUpdateTime / 1000 or 0
        --上次热卖商品刷新时间点
        self.lastHotUpdateTime = response.lastHotUpdateTime / 1000 or 0

        self:SetCutDownTime()



        Runtime.InvokeCbk(callbacks)
    end --  success

    local function failed(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end --  failed
    Net.Twomergemodulemsg_30209_TwoMergeShopInfo_Request({ cfgId = mapId }, failed, success)
end

function TwoMergeManager:TwoMergeShopBuyItemRequest(shopType, position, costItem, costNum, mergeItemId)
    local mapId = AppServices.TwoMergeMapGridManager:GetMapId()

    local function funcSuccessCbk(response)
        --todo 处理购买成功

        if costNum > 0 then
            AppServices.User:UseItem(costItem, costNum)
        end

        AppServices.TwoMergeManager:QueueAdd(mapId, mergeItemId, 1)

        if shopType == 1 then
            for k, v in pairs(self.dayShopItemInfo) do
                if v.shopItem.position == position then
                    v.shopItem.count = v.shopItem.count + 1
                    break
                end
            end
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Buy_DailyShopItem)
        else
            for k, v in pairs(self.hotShopItemInfo) do
                if v.position == position then
                    v.count = v.count + 1
                    break
                end
            end
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Buy_HotShopItem)
        end
    end
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_FlyShopItem, mergeItemId, position, shopType)
    local function funcFailedCbk(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end

    Net.Twomergemodulemsg_30210_TwoMergeShopBuyItem_Request({ cfgId = mapId, position = position, shopType = shopType },
        funcFailedCbk, funcSuccessCbk)
end

function TwoMergeManager:TwoMergeShopRefreshHotItemRequest(refreshType, cost)
    local mapId = AppServices.TwoMergeMapGridManager:GetMapId()

    local function funcSuccessCbk(response)
        --处理刷新成功
        self.hotShopItemInfo = Net.Converter.ConvertArray(response.hotShopItems) or {}
        if refreshType == 1 then
            AppServices.User:UseItem(ItemId.DIAMOND, cost)
            self.hotDiamondCount = self.hotDiamondCount + 1
        else
            self.hotAdsCount = self.hotAdsCount + 1
        end
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Refresh_HotItem)
    end

    local function funcFailedCbk(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end

    Net.Twomergemodulemsg_30211_TwoMergeShopRefreshHotItem_Request({ cfgId = mapId, refreshType = refreshType },
        funcFailedCbk, funcSuccessCbk)
end

---获取二合商城的货币集合
function TwoMergeManager:GetShopCurrencyList()
    return self.shopCurrencyList
end

function TwoMergeManager:SetCutDownTime()
    local _nextRefreshDailyTime = self:GetNextDailyRefreshTime()
    local _nextRefreshHotTime = self:GetNextHotRefreshTime()
    local _nextDayRefreshTime = self:GetNextDayRefreshTime()
    if self.dailyTimer ~= nil then
        WaitExtension.CancelTimeout(self.dailyTimer)
        self.dailyTimer = nil
    end
    self.dailyTimer = WaitExtension.SetTimeout(function()
        self:TwoMergeShopInfoRequest(function()
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_ShopInfo_Success)
        end)
    end, _nextRefreshDailyTime)

    if self.hotTimer ~= nil then
        WaitExtension.CancelTimeout(self.hotTimer)
        self.hotTimer = nil
    end

    self.hotTimer = WaitExtension.SetTimeout(function()
        self:TwoMergeShopInfoRequest(function()
            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_ShopInfo_Success)
        end)
    end, _nextRefreshHotTime)

    if self.dayTimer ~= nil then
        WaitExtension.CancelTimeout(self.dayTimer)
        self.dayTimer = nil
    end

    self.dayTimer = WaitExtension.SetTimeout(function()
        self:RefreshBtnRefreshTime()
    end, _nextDayRefreshTime)
end

--获取距离下次每日商品刷新还有多久
function TwoMergeManager:GetNextDailyRefreshTime()
    local now = TimeUtil.ServerTime()
    return self.lastDayUpdateTime + self.merge_shop_sale - now
end

--获取距离下次热卖商品刷新还有多久
function TwoMergeManager:GetNextHotRefreshTime()
    local now = TimeUtil.ServerTime()
    return self.lastHotUpdateTime + self.merge_shop_ordinary - now
end

--获取距离第二天刷新还有多久
function TwoMergeManager:GetNextDayRefreshTime()
    local _nextTime = TimeUtil.GetRefreshDateRemainTime()
    return _nextTime
end

-- 刷新按钮的刷新次数
function TwoMergeManager:RefreshBtnRefreshTime()
    self.hotAdsCount = 0
    self.hotDiamondCount = 0
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Refresh_BtnTimes)
end

-- 获取每日特卖的物品信息
function TwoMergeManager:GetShopItemInfo()
    return self.dayShopItemInfo
end

-- 获取热卖特卖的物品信息
function TwoMergeManager:GetHotShopItemInfo()
    return self.hotShopItemInfo
end

-- 获取特卖的物品的最大数量
function TwoMergeManager:GetHotItemMaxCount()
    return self.merge_shop_ordinary_inventory
end

-- 获取热卖广告刷新已使用的数量
function TwoMergeManager:GetHotAdsCount()
    return self.hotAdsCount
end

-- 获取热卖钻石刷新已使用的数量
function TwoMergeManager:GetHotDiamondCount()
    return self.hotDiamondCount
end

--获取热卖商店广告刷新次数的上限
function TwoMergeManager:GetAdsRefreshMaxTimes()
    return self.merge_shop_refresh_ad
end

function TwoMergeManager:GetCurDiamondRefreshCost(count)
    local curNum = count < #self.merge_shop_refresh_diamond and count or #self.merge_shop_refresh_diamond
    curNum = curNum == 0 and 1 or curNum
    return self.merge_shop_refresh_diamond[curNum]
end

--------------通行证----------------
---获取bp数据
function TwoMergeManager:GetBpData(mapId)
    local _mapId = mapId
    if _mapId == nil then _mapId = self:MapId() end
    if self.bpGideData == nil then
        self.bpGideData = {}
    end
    if _mapId == nil then return end
    if self.bpCfg == nil then
        self.bpCfg = {}
        local _cfg = AppServices.Meta:Category("EventMapBPLevelTemplate")
        for k, v in pairs(_cfg) do
            if tonumber(v.smallBpId) == tonumber(_mapId) then
                table.insert(self.bpCfg, v)
            end
        end
        table.sort(self.bpCfg, function(a, b) return a.level < b.level end)
        if #self.bpGideData == 0 then
            for i = 1, #self.bpCfg do
                if self.bpCfg[i].isMergeGuide == 1 then
                    table.insert(self.bpGideData, self.bpCfg[i].level)
                end
            end
        end
    end
    return self.bpCfg
end

---获取通行证价格
function TwoMergeManager:GetPrice()
    local shopId = self:GetShopId()
    local productId = AppServices.ProductManager:GetProductId(tostring(shopId))
    local priceData = AppServices.ProductManager:GetProductPrice(productId)
    return priceData.currencyPrice
end

--获取bp对应的商品id
function TwoMergeManager:GetShopId()
    if self:MapId() == nil then return end
    if self.bpCfg == nil then
        self:GetBpData()
    end
    local _shopId = 0
    for k, v in pairs(self.bpCfg) do
        if v.payshopid ~= 0 then
            _shopId = v.payshopid
            break
        end
    end
    return _shopId
end

--是否已经购买了通行证
function TwoMergeManager:IsBuy()
    local _isBuy = self.BuyState == 1
    return _isBuy
end

--设置通行证的购买状态
function TwoMergeManager:SetBuyState(state)
    if self.BuyState == 1 then return end
    self.BuyState = state
end

--上次关闭界面时的积分情况
function TwoMergeManager:SetPreScore(score)
    self.preScore = score
end

--当前的积分情况
function TwoMergeManager:GetPreScore()
    return self.preScore or 0
end

--增加bp积分
function TwoMergeManager:AddBpScore(score)
    self.curScore = self.curScore + score
    self:CheckBpStage()
end

--设置当前积分更新
function TwoMergeManager:SetCurScore(score)
    self.curScore = score
end

---获取通行证当前积分
function TwoMergeManager:GetCurScore()
    return self.curScore or 0
end

function TwoMergeManager:GetGuideData()
    if self.bpGideData == nil then
        for i = 1, #self.bpCfg do
            if self.cfg[i].isMergeGuide == 1 then
                table.insert(self.bpGideData, self.bpCfg[i].level)
            end
        end
    end
    return self.bpGideData
end

--检查当前积分是否增加等级
function TwoMergeManager:CheckBpStage()
    local maxLevel = self.bpCfg[#self.bpCfg].level
    local _curScore = self.curScore
    local addStage = 0
    if self.currentStage >= maxLevel then
        return
    end
    while (_curScore > 0) do
        for k, v in pairs(self.bpCfg) do
            if v.level == self.currentStage then
                data = v
                break
            end
        end
        _curScore = _curScore - data.exp
        if _curScore >= 0 then
            addStage = self.currentStage + 1
        end
        if _curScore <= 0 then
            break
        end
    end
    if addStage > self.currentStage then
        self:SetCurrentStage(addStage)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_AddBpScore)
    end
end

--上次通行证关闭时的阶段
function TwoMergeManager:SetPreStage(stage)
    self.preStage = stage
end

--获取上次关闭界面时的通行证阶段
function TwoMergeManager:GetPreStage()
    return self.preStage or 0
end

---获取通行证当前阶段
function TwoMergeManager:GetCurrentStage()
    return self.currentStage or 1
end

---设置通行证阶段
function TwoMergeManager:SetCurrentStage(stage)
    if self.currentStage == nil then
        self.currentStage = 0
    end
    if self.currentStage >= stage then
        return
    end
    local _exp = 0
    for k, v in pairs(self.bpCfg) do
        if v.level == self.currentStage then
            _exp = v.exp
            break
        end
    end
    self.currentStage = stage
    local score = self:GetCurScore() - _exp > 0 and self:GetCurScore() - _exp or 0

    self:SetCurScore(score)
    self:CheckBpStage()
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_BpLevelUpdate)
end

--普通奖励的状态
function TwoMergeManager:GetNormalRewardState(index)
    if self.normalRewardState == nil then
        return 0
    end
    return self.normalRewardState[index] or 0
end

--设置普通奖励状态
function TwoMergeManager:SetNormalRewardState(index, state)
    if self.normalRewardState == nil then
        self.normalRewardState = {}
    end
    if self.normalRewardState[index] == nil then
        self.normalRewardState[index] = 0
    end
    if self.normalRewardState[index] >= state then
        return
    end
    self.normalRewardState[index] = state
end

--vip奖励的状态
function TwoMergeManager:GetVipRewardState(index)
    if self.vipRewardState == nil then
        return 0
    end
    return self.vipRewardState[index] or 0
end

--设置vip奖励的状态
function TwoMergeManager:SetVipRewardState(index, state)
    if self.vipRewardState == nil then
        self.vipRewardState = {}
    end
    if self.vipRewardState[index] == nil then
        self.vipRewardState[index] = 0
    end
    if self.vipRewardState[index] >= state then
        return
    end
    self.vipRewardState[index] = state
end

--获得当前一个最靠前的可领取奖励的位置
function TwoMergeManager:GetRewardIndex()
    if self.bpCfg == nil then return nil end
    --先找普通
    for i = 1, #self.bpCfg do
        if (self:GetNormalRewardState(self.bpCfg[i].level) < 2) and (self.bpCfg[i].level <= self.currentStage)
            and (self.bpCfg[i].exp ~= -1) and #self.bpCfg[i].normalReward > 0 then
            return i
        end
    end

    if not self:IsBuy() then
        return nil
    end
    --再找vip
    for i = 1, #self.bpCfg do
        if (self:GetVipRewardState(self.bpCfg[i].level) < 2) and (self.bpCfg[i].exp ~= -1)
            and (self.bpCfg[i].level <= self.currentStage) and #self.bpCfg[i].vipReward > 0 then
            return i
        end
    end
    return nil
end

-----通信
--初始化bp信息
function TwoMergeManager:SetTwoMergeBpInfo(mapId, response)
    self:GetBpData(mapId)
    self:SetCurrentStage(response.level)
    self:SetPreStage(response.level)
    self:SetCurScore(response.exp)
    self:SetPreScore(response.exp)
    local baseLevel = Net.Converter.ConvertArray(response.baseLevels) or {}
    for i = 1, #baseLevel do
        self:SetNormalRewardState(baseLevel[i], 2)
    end
    local passLevels = Net.Converter.ConvertArray(response.passLevels) or {}
    for i = 1, #passLevels do
        self:SetVipRewardState(passLevels[i], 2)
    end
    local isBuy = response.unlock and 1 or 0
    self:SetBuyState(isBuy)
end

--购买bp
function TwoMergeManager:BuyBP()
    local shopId = self:GetShopId()
    local productId = AppServices.ProductManager:GetProductId(tostring(shopId))
    local function NetSuc()
        self:SetBuyState(1)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Buy_BP_Success)
    end


    local ext = {
        version = RuntimeContext.BUNDLE_VERSION,
        activityId = self:MapId(),
    }
    AppServices.ProductManager:StartPay(productId, ext, nil, NetSuc)
end

--领奖
function TwoMergeManager:SendBpItemRequest(goldPassKind, level, callback)
    local curLevel = self:GetCurrentStage()
    if curLevel < level then
        console.error("等级不足", curLevel, level) --@DEL
        return
    end
    local isNormal = goldPassKind == GoldPassKind.Normal
    local function funcSuccessCbk()
        local data = nil
        for k, v in pairs(self.bpCfg) do
            if v.level == level then
                data = v
                break
            end
        end
        if data == nil then
            console.error("找不到等级", level) --@DEL
            return
        end
        local rewardData = nil
        if isNormal then
            self:SetNormalRewardState(level, 2)
            rewardData = data.normalReward
        else
            self:SetVipRewardState(level, 2)
            rewardData = data.vipReward
        end
        local rewardParam = {}
        table.insert(rewardParam, {
            ItemId = tostring(rewardData[1]),
            Amount = tonumber(rewardData[2])
        })

        for k, v in pairs(rewardParam) do
            AppServices.User:AddItem(tostring(v.ItemId), v.Amount)
        end
        local pcb = PanelCallbacks:Create(function()
            Runtime.InvokeCbk(callback)
        end)
        if #rewardParam > 0 then
            PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, { rewards = rewardParam }, pcb)
        end
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_GetBpReward)
    end
    local function funcFailedCbk(errorCode)
        Runtime.InvokeCbk(callback, false)
        ErrorHandler.ShowErrorMessage(errorCode)
    end
    local params = {
        actId = self:MapId(),
        type = goldPassKind,
        level = level
    }
    if string.isEmpty(params.actId) then
        Runtime.InvokeCbk(callback, false)
        return
    end
    Net.Activitymodulemsg_12004_TakeBpAward_Request(params, funcFailedCbk, funcSuccessCbk)
end

function TwoMergeManager:GetAllReward(callback)
    local normalRewardStage = {}
    local vipRewardStage = {}
    local rewardByStage = {}
    for i = 1, self.currentStage + 1 do
        if self:GetNormalRewardState(i - 1) ~= 2 then
            table.insert(normalRewardStage, i - 1)
        end

        if self:GetVipRewardState(i - 1) ~= 2 and self:IsBuy() then
            table.insert(vipRewardStage, i - 1)
        end
    end
    local function success()
        local rewardParam = {}
        for i = 1, #normalRewardStage do
            local data = nil
            for k, v in pairs(self.bpCfg) do
                if v.level == normalRewardStage[i] then
                    data = v
                    break
                end
            end
            if data == nil then
                console.error("找不到等级", level) --@DEL
                return
            end
            local rewardData = nil
            rewardData = data.normalReward
            table.insert(rewardParam, {
                ItemId = tostring(rewardData[1]),
                Amount = tonumber(rewardData[2])
            })
            table.insert(rewardByStage, {
                ItemId = tostring(rewardData[1]),
                rewardByStage = data.level,
                type = 1
            })
            self:SetNormalRewardState(data.level, 2)
        end

        for i = 1, #vipRewardStage do
            local data = nil
            for k, v in pairs(self.bpCfg) do
                if v.level == vipRewardStage[i] then
                    data = v
                    break
                end
            end
            if data == nil then
                console.error("找不到等级", level) --@DEL
                return
            end
            local rewardData = nil
            rewardData = data.vipReward
            table.insert(rewardParam, {
                ItemId = tostring(rewardData[1]),
                Amount = tonumber(rewardData[2])
            })
            table.insert(rewardByStage, {
                ItemId = tostring(rewardData[1]),
                rewardByStage = data.level,
                type = 2
            })
            self:SetVipRewardState(data.level, 2)
        end
        for k, v in pairs(rewardParam) do
            AppServices.User:AddItem(tostring(v.ItemId), v.Amount)
        end
        local pcb = PanelCallbacks:Create(function()
            Runtime.InvokeCbk(callback(rewardByStage))
        end)
        if #rewardParam > 0 then
            PanelManager.showPanel(GlobalPanelEnum.CommonRewardPanel, { rewards = rewardParam }, pcb)
        end
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_GetBpReward)
    end

    local function fail(errorCode)
        ErrorHandler.ShowErrorMessage(errorCode)
    end

    local params = {
        actId = self:MapId(),
    }
    Net.Activitymodulemsg_12005_TakeAllBpAward_Request(params, fail, success)
end

return TwoMergeManager
