---@class TwoMergeBagMergeItem
local TwoMergeBagMergeItem = class("TwoMergeBagMergeItem")

---@param luaparent TwoMergeBagGridItem
function TwoMergeBagMergeItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = TwoMergeBagMergeItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function TwoMergeBagMergeItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.icon = find_component( gameObject, "ItemIcon", Image)
    self.count = find_component( gameObject, "Text_count", Text)
    self.event = gameObject:FindGameObject("event")
    self.btnTip = gameObject:FindGameObject("btnTip")
end

function TwoMergeBagMergeItem:SetData(index,data)
    self.index = index 
    self.data = data
    self.itemId = self.data.itemId
    self.cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.itemId]
    if self.cfg == nil then
        console.error("配置表 MergeTwoItemTemplate 没有找到 itemId = " .. self.itemId)
        return
    end
    self.icon.sprite = AppServices.ItemIcons:GetSpriteByName(self.cfg.icon)
    self.icon:SetNativeSize()
    self.count.text = self.data.count
    Util.UGUI_AddButtonListener(self.event, function()
        self:OnClick()
    end)
    
    Util.UGUI_AddButtonListener(self.btnTip, function()
        PanelManager.showPanel( GlobalPanelEnum.TwoMergeBestiaryPanel,{id = self.itemId})
    end)
end

function TwoMergeBagMergeItem:GetPosition()
    if self.data ~= nil then
        return self.data.position
    end
    return 0
end

function TwoMergeBagMergeItem:PlayItemAnimation()
    --todo 做动画
    self.luaparent:RefreshUI()
end


function TwoMergeBagMergeItem:OnClick()
    self.luaparent:ClickMergeBagItem(self.data)
end




return TwoMergeBagMergeItem
