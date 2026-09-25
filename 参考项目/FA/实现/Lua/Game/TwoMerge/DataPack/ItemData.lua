---@class ItemData
local ItemData = class(nil, "ItemData")
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

function ItemData:ctor(data)
    self.data = data
    self.row, self.col = TwoMergeConfig.Decode(data.position)
end

function ItemData:GetValue(key)
    return self.data[key]
end

function ItemData:GetRowCol() return self.row, self.col end
function ItemData:SetRowCol(row, col)
    self.row = row; self.col = col
    self.data.position = TwoMergeConfig.Encode(row, col)
end

function ItemData:GetPosition() return self.data.position end
function ItemData:GetData() return self.data end

function ItemData:SetSpecData(key, value) self.data.itemData[key] = value end
function ItemData:GetSpecData(key) return self.data.itemData[key] or 0 end

function ItemData:SetStateSpecData(key, value)
    if self.data.itemStateData == nil then console.error("error : 该状态不存在 itemStateData 字段,  状态: "..tostring(self.data.itemState)); return 0 end
    self.data.itemStateData[key] = value
end
function ItemData:GetStateSpecData(key)
    if self.data.itemStateData == nil then console.error("error : 该状态不存在 itemStateData 字段,  状态: "..tostring(self.data.itemState)); return 0 end
    return self.data.itemStateData[key] or 0
end

function ItemData:GetItemId() return self.data.itemId or "" end

--- 数量
function ItemData:SetCount(count) self.data.count = count end
function ItemData:GetCount() return self.data.count or 0 end

--- item状态
function ItemData:SetItemState(itemState) self.data.itemState = itemState end
function ItemData:GetItemState() return self.data.itemState or 0 end

return ItemData