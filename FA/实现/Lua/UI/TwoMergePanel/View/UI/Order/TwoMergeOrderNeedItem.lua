---@param twoMergeOrderInfo TwoMergeOrderInfo
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")

---@class TwoMergeOrderNeedItem
local TwoMergeOrderNeedItem = class(nil, "TwoMergeOrderNeedItem")

function TwoMergeOrderNeedItem:ctor(itemGo, luaparent, needData, orderId)
    self.itemGo = itemGo
    self.luaparent = luaparent
    self.needData = needData
    self.orderId = orderId
    self.icon = find_component(itemGo, "icon", Image)
    self.count = needData.count
    self.bg_default = find_component(itemGo, "bg_default")
    self.complete = find_component(itemGo, "complete")
    self.icon.sprite = ItemId:GetIconSprite(TwoMergeItemBigType, self.needData.itemId)

    Util.UGUI_AddButtonListener(self.icon.gameObject,function()
        if TutorialLogic.IsRunning() then return end
        PanelManager.showPanel( GlobalPanelEnum.TwoMergeBestiaryPanel,{id = needData.itemId,isCanShowFind = true, orderId = self.orderId})
    end)
end

function TwoMergeOrderNeedItem:Refresh()
    if self.luaparent:IsDoingCompleteAni() then return end
    self.bg_default:SetActive(not self.needData.complete)
    self.complete:SetActive(self.needData.complete)
end

function TwoMergeOrderNeedItem:SetActive(show)
    self.itemGo:SetActive(show)
end

function TwoMergeOrderNeedItem:GetInfo()
    return self.needData.itemId, self.itemGo
end

return TwoMergeOrderNeedItem