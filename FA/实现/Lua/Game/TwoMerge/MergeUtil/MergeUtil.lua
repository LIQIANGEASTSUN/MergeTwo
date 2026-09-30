local MergeUtil = {}
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
--转圈找格子
MergeUtil.SpiralMatrixIII             = function(rStart, cStart, rows, cols)
    local total = rows * cols
    local order = {}
    local top = rStart
    local bottom = rStart
    local left = cStart
    local right = cStart
    local index = 1

    while index <= total do
        local start1 = math.max(left, 1)
        local end1 = math.min(right, cols)
        local isCanSet = false
        local start4 = math.min(bottom, rows)
        local end4 = math.max(top, 1)
        for row = start4, end4, -1 do
            if left >= 1 and index <= total then
                order[index] = { row, left }
                isCanSet = AppServices.TwoMergeMapGridManager:CheckGrid(row, left)
                if isCanSet then
                    return row, left
                end
                index = index + 1
            end
        end
        top = top - 1
        
        for col = start1, end1 do
            if top >= 1 and index <= total then
                order[index] = { top, col }
                isCanSet = AppServices.TwoMergeMapGridManager:CheckGrid(top, col)
                if isCanSet then
                    return top, col
                end
                index = index + 1
            end
        end
        right = right + 1

        local start2 = math.max(top, 1)
        local end2 = math.min(bottom, rows)
        for row = start2, end2 do
            if right <= cols and index <= total then
                order[index] = { row, right }
                isCanSet = AppServices.TwoMergeMapGridManager:CheckGrid(row, right)
                if isCanSet then
                    return row, right
                end
                index = index + 1
            end
        end

        bottom = bottom + 1

        local start3 = math.min(right, cols)
        local end3 = math.max(left, 1)
        for col = start3, end3, -1 do
            if bottom <= rows and index <= total then
                order[index] = { bottom, col }
                isCanSet = AppServices.TwoMergeMapGridManager:CheckGrid(bottom, col)
                if isCanSet then
                    return bottom, col
                end
                index = index + 1
            end
        end
        left = left - 1

      
    end

    return nil
end

--检查是否MapDataList数据有错误
MergeUtil.CheckMapDataList            = function(row, col,mapDataList,curMapId)
    local _positionId = TwoMergeConfig.Encode(row, col)
    local data = mapDataList[tostring(curMapId)]
    if data == nil then
        console.print("没有找到地图id=" ..curMapId .. "的数据")
        return false
    end
    local mapData = data[tostring(_positionId)]
    if mapData == nil then
        -- console.print("没有找到格子id=" .. _positionId .. "的数据")
        return false
    end
    return true ,mapData
end

--获取合成链对应的生成器
MergeUtil.GetCurMergeChainGenerateIds = function(mergeChainId)
    local _cfg = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")
    local list = {}
    for k,v in pairs(_cfg) do
        if #v.fixedOutput > 0 then -- v.fixedOutput ~= "" then
            local outputId = 0
            for index,value in pairs(v.fixedOutput) do
                outputId = tostring(math.floor( tonumber(value) / 100) ) -- tostring(value[1]):sub(1,6)
                if outputId == mergeChainId then
                    table.insert( list , v.id)
                end
            end
        end

        if #v.proOutput > 0 then -- v.proOutput ~= "" then
            local proOutputId = 0
            for index,value in pairs(v.proOutput) do
                proOutputId = tostring(math.floor( tonumber(value[1]) / 100) ) -- tostring(value[1]):sub(1,6)
                if proOutputId == mergeChainId then
                    table.insert( list , v.id)
                end
            end
        end
    end    
    return list
end

MergeUtil.GetCurItemGenerateList     = function(itemId,_cfg)
    local list = {}
    local _itemCfg = _cfg[tostring(itemId)]
    local _proOut = _itemCfg.proOutput
    local isShow = false
    if _proOut ~= "" then
        for k,v in pairs(_proOut) do
            table.insert(list ,{id = v[1], state = TwoMergeConfig.ShowItemGenerateState.None})
        end
    end
    isShow = #list > 0
    return list,isShow
end

--获取宝箱或者生成器的生成物品详情
MergeUtil.CheckMergeChainGenerateItem = function(itemId,_cfg)
    local list = {}
    local _itemCfg = _cfg[tostring(itemId)]
    local _proOut = _itemCfg.proOutput
    local _nextId = MergeUtil.GetNextId(itemId)
    if _nextId ~= 0 then
        local _nextproOut = _cfg[tostring(_nextId)].proOutput
        for k,v in pairs(_nextproOut) do
            local isFind = false
            for index,value in pairs(_proOut) do
                if v[1] == value[1]  then
                    if v[2] > value[2] then
                        table.insert(list ,{id = v[1], state = TwoMergeConfig.
                        ShowItemGenerateState.Grow})
                    end
                    isFind = true
                    break
                end
            end
            if not isFind then
                table.insert(list ,{id = v[1], state = TwoMergeConfig.ShowItemGenerateState.Add})
            end
        end
    end
    return list
end

--获取下一级的id 同一合成链中的id
MergeUtil.GetNextId                   = function(itemId)
    local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")
    local _groupId= _cfg[tostring(itemId)].groupId
    local _level = _cfg[tostring(itemId)].level
    for k,v in pairs(_cfg) do
        if v.groupId == _groupId and v.level == _level + 1 then
            return v.id
        end
    end
    return 0
end

--获得自选宝箱数据
MergeUtil.GetSelectChestItem          = function(itemId)
    local _cfg = AppServices.Meta:Category("MergeTwoboxTemplate")[itemId]
    if not _cfg then
        console.error(" 没有找到自选宝箱数据" .. itemId)
        return {}
    end
    local list = {}
    if _cfg.fixedOutput ~= "" then
        for k,v in pairs(_cfg.fixedOutput) do
            table.insert(list,v)
        end
        return list
    end
    
    
    local _tempList = {}
    if _cfg.proOutput ~= "" then
        for k,v in pairs(_cfg.proOutput) do
            table.insert(_tempList,v)
        end
    end

    --抽取次数
    for i = 1, _cfg.num do
        local weight = 0
        for k,v in pairs(_tempList) do
            weight = weight + v[2]
        end

        local index = math.random(1,weight)
        local removeK = 0
        for k, v in pairs( _tempList) do
            if index <= v[2] then
                table.insert(list,v[1])
                removeK = k
                break
            end
            index = index - v[2]
        end

        table.remove(_tempList,removeK)
    end

    return list
end

--找一个物品附近8个格子是否有空的
MergeUtil.FindOneRoundGrid = function(row,col)
    for  i = -1, 1 do
        local _row = row  + i
        for j = -1, 1 do
            local _col = col + j
            if _col ~= col or _row ~= row then
                if AppServices.TwoMergeMapGridManager:GetSingleGrid(_row, _col) ~= nil and AppServices.TwoMergeMapGridManager:FindItemArticle(_row, _col) == nil then
                    return _row, _col
                end
            end
        end
    end
    return nil,nil
end

--获取表中item可以消耗的货币
MergeUtil.GetCurrencyList             = function()
    local list = {}
    local _cfg = AppServices.Meta:Category("MergeTwoItemTemplate")
    for k,v in pairs(_cfg) do
        if v.price ~= "" and list[v.price[1]] == nil then
            list[v.price[1]] = v.price[2]
        end
    end
    local _temp = {}
    for k,v in pairs(list) do
        table.insert(_temp,{id = k ,num = v})
    end
    return _temp
end

MergeUtil.CurrencyNotEnough            = function(currencyId)
    local page = ""
    local source = ""
    if currencyId == ItemId.DIAMOND then
        page = MoneyShopPage.Diamond
        source = "DiamondIcon"
        if App.loginLogic:IsLoggedIn() then
            require("Game.Processors.RequestIAPProcessor").Start(function()
                PanelManager.showPanel(GlobalPanelEnum.MoneyShopPanel, {
                    selectIndex = page,
                    source = source })
            end)
        else
            ErrorHandler.ShowErrorMessage(Translate("no.network.message"))
        end
    elseif currencyId == ItemId.COIN then
        page = MoneyShopPage.Coin
        source = "GoldIcon"
        PanelManager.showPanel(GlobalPanelEnum.MoneyShopPanel, {selectIndex = page, source = source})
    end
end


return MergeUtil