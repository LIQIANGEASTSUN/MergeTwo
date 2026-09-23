---@class MergeBestiaryGeneratorItem
local MergeBestiaryGeneratorItem = class("MergeBestiaryGeneratorItem")
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"

---@param luaparent TwoMergeBestiaryPanel
function MergeBestiaryGeneratorItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = MergeBestiaryGeneratorItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function MergeBestiaryGeneratorItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(true)
    -- 绑定组件
    self.icon = find_component( self.gameObject, "icon", Image)
    self.lockIcon  = find_component( self.gameObject, "lockIcon")
    self.Text_Name = find_component( self.gameObject, "Text_Name", Text)
    self.btnTips = find_component( self.gameObject, "icon/btnTips")
    
end

function MergeBestiaryGeneratorItem:SetData(index,id)
    self.index = index
    self.id = id
    self.data = AppServices.TwoMergeMapGridManager:GetItemInfoById(self.id)
    local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.id]
    self.type = cfg.type
    self.Text_Name.gameObject:SetActive(false)
    --self.Text_Name.text = Runtime.Translate(cfg.name)
    self.icon.sprite =  AppServices.ItemIcons:GetSpriteByName(cfg.icon)
    self.lockIcon.gameObject:SetActive(self.data.state == 0)
    self.btnTips.gameObject:SetActive(self.data.state == 1)
    self.icon.gameObject:SetActive(self.data.state == 1)
    local isGenerate = self.type ==  TwoMergeConfig.ArticleType.AutoGenerator
            or self.type == TwoMergeConfig.ArticleType.Generator
    self.btnTips.gameObject:SetActive(isGenerate)
    if isGenerate then
        Util.UGUI_AddButtonListener(self.btnTips, function()
            self:OnClick()
        end)    
    end
end

function MergeBestiaryGeneratorItem:OnClick()
    self.luaparent:OnOpenNext(self.id)
end

return MergeBestiaryGeneratorItem