---@class TwoMergeBagGridItem
local TwoMergeBagGridItem = class("TwoMergeBagGridItem")
local TwoMergeBagMergeItem = require "UI.TwoMergeBagPanel.View.UI.TwoMergeBagMergeItem"

---@param luaparent TwoMergeBagPanel
function TwoMergeBagGridItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = TwoMergeBagGridItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function TwoMergeBagGridItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gridBG = find_component( gameObject, "gridBG")
    self.gridBuyBG = find_component( gameObject, "gridBuyBG")
    --self.event = gameObject:FindGameObject("event")
    self.itemGo = find_component(gameObject,"GameObject_Item")
    self.des = find_component(gameObject,"gridBuyBG/Text_des",Text)
    self.btnBuy = find_component(gameObject,"gridBuyBG/btnBuy")
    self.unlockCurrencyImg = find_component(gameObject,"gridBuyBG/btnBuy/currencyTxt/currencyImg",Image)
    self.unlockCurrencyNum = find_component(gameObject,"gridBuyBG/btnBuy/currencyTxt",Text)
end

function TwoMergeBagGridItem:SetData(index,max,itemData,unlockNum)
    self.index = index
    self.max = max
    self.unlockNum  = unlockNum
    local MergeWareHouseCfg = AppServices.Meta:Category("MergeTwoWarehouseTemplate")
    self.canUnlockNum = 0
    for k,v in pairs(MergeWareHouseCfg) do
        self.canUnlockNum = self.canUnlockNum + 1
    end
    local isBuy = index == max and  self.unlockNum < self.canUnlockNum
    self.gridBuyBG:SetActive(isBuy)
    if isBuy then
        self.des.text = Runtime.Translate("merge_system_09") -- 增加格子
        local _cfg = AppServices.Meta:Category("MergeTwoWarehouseTemplate")
        for k,v in pairs(_cfg) do
            if v.latticeNum == self.index then
                self.unlockCurrencyImg.sprite = AppServices.ItemIcons:GetSprite(v.price[1][1])
                self.unlockCurrencyNum.text = v.price[1][2]
            end
        end
    end
    Util.UGUI_AddButtonListener(self.btnBuy, function()
        self:OnClick()
    end)

    if itemData.itemId == "" then
        self.itemGo:SetActive(false)
        return
    end
    local bagItemFunc = TwoMergeBagMergeItem:CreateWithGameObject(self.itemGo, self)
    self.itemGo:SetActive(true)
    bagItemFunc:SetData(index,itemData)
    
end

function TwoMergeBagGridItem:OnClick()
    if self.index == self.max and self.unlockNum < self.canUnlockNum then
        self.luaparent:ClickUnlockBagGrid(self.unlockNum + 1)
    end
end

function TwoMergeBagGridItem:ClickMergeBagItem(data)
    self.luaparent:ClickMergeBagItem(data)
end



return TwoMergeBagGridItem
