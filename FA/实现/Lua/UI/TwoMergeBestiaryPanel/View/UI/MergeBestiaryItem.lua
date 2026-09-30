---@class MergeBestiaryItem
local MergeBestiaryItem = class("MergeBestiaryItem")
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

---@param luaparent TwoMergeBestiaryPanel
function MergeBestiaryItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = MergeBestiaryItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function MergeBestiaryItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(true)
   -- 绑定组件
    self.bg = find_component( self.gameObject, "bg")
    self.bg_Choose = find_component( self.gameObject, "bg_Choose")
    self.icon = find_component( self.gameObject, "icon", Image)
    self.lockIcon  = find_component( self.gameObject, "lockIcon")
    self.Text_index = find_component( self.gameObject, "Text_index", Text)
    self.arrow = find_component( self.gameObject, "arrow")
end

function MergeBestiaryItem:SetData(index,data,max,id)
    self.index = index
    self.data = data
    self.id = data.id
    self.Text_index.text = tostring(index)
    local isShowArrow = index ~= max
    self.arrow:SetActive(isShowArrow)
    self.bg_Choose:SetActive(self.id == id)
    --self.bg:SetActive(self.id ~= id)
    self.lockIcon:SetActive(self.data.state == 0 )
    self.icon.gameObject:SetActive(self.data.state ~= 0 )
    if self.data.state ~= 0  then
        local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.id]
        self.icon.sprite =  AppServices.ItemIcons:GetSpriteByName(cfg.icon)    
    end
end

return MergeBestiaryItem