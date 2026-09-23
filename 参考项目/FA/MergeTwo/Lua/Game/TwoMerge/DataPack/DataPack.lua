
---@type DataPack
local DataPack = {}

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local TwoMergeModuleMsg_pb = require("Protocol.Message.TwoMergeModuleMsg_pb")

--- item类型 对应的数据
local DataConst = {
    [TwoMergeConfig.ArticleType.Generator] = { "historyCount", "curCount", "cdIndex", "end", "pause", },
    [TwoMergeConfig.ArticleType.AutoGenerator] = { "historyCount", "curCount", "cdIndex", "end", "pause", },
    [TwoMergeConfig.ArticleType.SelectChest] = { "count", "end", "pause", },
    [TwoMergeConfig.ArticleType.NormalChest] = { "count", "end", "pause", },
    [TwoMergeConfig.ArticleType.CDItem] = { "count", "end", "pause", }, -- 减cd 用end存已使用的时间
}
local DataPackage = {
    [TwoMergeConfig.ArticleType.Generator] = { getPackage = function() return TwoMergeModuleMsg_pb.ItemGeneratorMsg() end },
    [TwoMergeConfig.ArticleType.AutoGenerator] = { getPackage = function() return TwoMergeModuleMsg_pb.ItemGeneratorMsg() end },
    [TwoMergeConfig.ArticleType.SelectChest] = { getPackage = function() return TwoMergeModuleMsg_pb.ItemBoxMsg() end },
    [TwoMergeConfig.ArticleType.NormalChest] = { getPackage = function() return TwoMergeModuleMsg_pb.ItemBoxMsg() end },
    [TwoMergeConfig.ArticleType.CDItem] = { getPackage = function() return TwoMergeModuleMsg_pb.ItemBoxMsg() end },
}
local ItemStateConst = {
    [TwoMergeConfig.ArticleState.Bubble] = { "end", },
}
local ItemStatePackage = {
    [TwoMergeConfig.ArticleState.Bubble] = { getPackage = function() return TwoMergeModuleMsg_pb.ItemStateBubbleMsg() end },
}

DataPack.CreateItemData = function(itemId, row, col)
    local config = AppServices.Meta:Category("MergeTwoItemTemplate")[itemId]
    if config == nil then
        console.error("error : 生成物配置不存在  itemId: "..tostring(itemId))
    end
    -- .position        格子位置  1000 x row + col
    -- .itemId          格子里对应的道具（或其他功能行内容）
    -- .count           对应的数量(对于时钟道具来说是还剩余的秒数，可以灵活和其他类型道具复用，对于有点击次数进入冷却的可以记录点击次数)
    -- .state           格子当前状态(正常 0： 冻结：1 )
    -- .itemState       item状态
    local data = {
        row = row,
        col = col,
        itemId = itemId,
        position = TwoMergeConfig.Encode(row, col),
        itemData = {},
        count = 1,
        state = 0,
        itemState = 0,
        itemArticleType = config.type,
    }

    local all = DataConst[config.type]
    if all ~= nil then
        local itemData = {}
        for _, name in pairs(all) do
            itemData[name] = 0
        end
        data.itemData = itemData
    end

    return data
end

DataPack.CreateNullData = function(row, col)
    return {
        row = row,
        col = col,
        position = TwoMergeConfig.Encode(row, col),
        itemId = "",
        count = 0,
        state = 0,
        itemState = 0,
    }
end

--- 改变状态时  检测增加  数据结构
DataPack.CheckStateData = function(data)
    local all = ItemStateConst[data.itemState]
    if all ~= nil and data.itemStateData == nil then
        local itemStateData = {}
        for _, name in pairs(all) do
            itemStateData[name] = 0
        end
        data.itemStateData = itemStateData
    elseif all == nil then
        data.itemStateData = nil
    end
end

--- article 转换为纯数据
DataPack.ArticleToData = function(article)
    local data = article:GetItemData()
    local newData = {
        position = data.position,
        itemId = data.itemId,
        count = data.count,
        state = data.state,
        itemState = data.itemState,
    }

    local config = AppServices.TwoMergeManager:GetItemConfig()[data.itemId]
    if config ~= nil then

        local all = DataConst[config.type]
        if all ~= nil then
            local itemData = {}
            for _, name in pairs(all) do
                itemData[name] = data.itemData[name]
            end
            newData.itemData = itemData
        end

        local itemAll = ItemStateConst[data.itemState]
        if itemAll ~= nil then
            local itemStateData = {}
            for _, name in pairs(itemAll) do
                itemStateData[name] = data.itemStateData[name]
            end
            newData.itemStateData = itemStateData
        end
    end

    return newData
end

--- 解析服务器的数据
DataPack.CheckConvertMsg = function(itemId, data, bytes_ItemData, bytes_ItemStateData)
    local config = AppServices.TwoMergeManager:GetItemConfig()[itemId]
    if config == nil then return end
    data.itemArticleType = config.type
    --- 解析itemData字段
    if bytes_ItemData ~= nil and DataConst[config.type] ~= nil then
        local all = DataConst[config.type]

        local itemdata_package = DataPackage[config.type].getPackage()
        itemdata_package:ParseFromString(bytes_ItemData)

        local itemData = {}
        for _, name in pairs(all) do
            itemData[name] = itemdata_package[name]
        end
        data.itemData = itemData
    end
    --- 解析itemStateData字段
    if bytes_ItemStateData ~= nil and ItemStateConst[data.itemState] ~= nil then
        local all = ItemStateConst[data.itemState]

        local itemstate_package = DataPackage[data.itemState].getPackage()
        itemstate_package:ParseFromString(bytes_ItemStateData)

        local itemStateData = {}
        for _, name in pairs(all) do
            itemStateData[name] = itemstate_package[name]
        end
        data.itemStateData = itemStateData
    end
end

--- 纯本地数据 --> 发送Server的数据
DataPack.DataToServerData = function(data)
    local serverData = {
        position = data.position,
        itemId = data.itemId,
        count = data.count,
        state = data.state,
        itemState = data.itemState,
    }
    local config = AppServices.TwoMergeManager:GetItemConfig()[data.itemId]
    if config ~= nil then
        --- 打包itemData字段
        local all = DataConst[config.type]
        if all ~= nil then
            local package = DataPackage[config.type].getPackage()
            for _, name in pairs(all) do
                package[name] = data.itemData[name]
            end
            serverData.itemData = package:SerializeToString()
        end
        --- 打包itemStateData字段
        local itemAll = ItemStateConst[data.itemState]
        if itemAll ~= nil then
            local itemPackage = ItemStatePackage[data.itemState].getPackage()
            for _, name in pairs(itemAll) do
                itemPackage[name] = data.itemStateData[name]
            end
            serverData.itemStateData = itemPackage:SerializeToString()
        end
    end

    return serverData
end

return DataPack