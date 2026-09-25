---@class SelectChestItem
local SelectChestItem = class("SelectChestItem")
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

function SelectChestItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = SelectChestItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function SelectChestItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(true)
    -- 绑定组件
    self.normalBg = find_component( self.gameObject, "normalBg")
    self.chooseBg = find_component( self.gameObject, "chooseBg")
    self.icon = find_component( self.gameObject, "GameObject_Item/ItemIcon", Image)
    self.choose = find_component( self.gameObject, "choose")
    self.event = find_component( self.gameObject, "event")
    self.lvTxt = find_component( self.gameObject, "Txt_lv", Text)
end

function SelectChestItem:SetData(index,id)
    self.index = index
    self.id = tostring(id)
    local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.id]
    if not cfg then
        console.error(" 没有找到自选宝箱数据" .. self.id)
        return
    end
    self.icon.sprite =  AppServices.ItemIcons:GetSpriteByName(cfg.icon)
    --self.nameTxt.text = Runtime.Translate(cfg.name)
    self.lvTxt.text = "Lv."..cfg.level
    Util.UGUI_AddButtonListener(self.event,function()
        self:OnClick()
    end)
end

function SelectChestItem:OnClick()
    self.luaparent:ClickBox(self.id)
end

function SelectChestItem:ChooseBoxItem(id)
    self.normalBg:SetActive(id ~= self.id)
    self.chooseBg:SetActive(id == self.id)
    self.choose:SetActive(id == self.id)
end

return SelectChestItem