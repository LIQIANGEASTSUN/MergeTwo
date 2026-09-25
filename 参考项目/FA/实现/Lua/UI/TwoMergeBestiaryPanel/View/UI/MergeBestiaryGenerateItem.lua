---@class MergeBestiaryGenerateItem
local MergeBestiaryGenerateItem = class(nil,"MergeBestiaryGenerateItem")
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
---@param luaparent TwoMergeBestiaryPanel
function MergeBestiaryGenerateItem:CreateWithGameObject(gameObject, luaparent)
    self.luaparent = luaparent
    local instance = MergeBestiaryGenerateItem.new()
    instance:InitFromGameObject(gameObject)
    return instance
end

function MergeBestiaryGenerateItem:InitFromGameObject(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(true)
    -- 绑定组件
    self.icon = find_component(self.gameObject, "icon", Image)
    self.lockIcon = find_component(self.gameObject, "lockIcon")
    self.Image_new = find_component(self.gameObject, "Image_new")
    self.Image_add = find_component(self.gameObject, "Image_add")
    self.btnTips = find_component(self.gameObject, "btnTips")

end

function MergeBestiaryGenerateItem:SetData(index, data)
    self.index = index
    self.data = data
    self.id = tostring(data.id)
    self.state = data.state
    local cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.id]
    self.type = cfg.type
    local itemInfo = AppServices.TwoMergeMapGridManager:GetItemInfoById(self.id)
    --判断item是否已经在图鉴中解锁，没有解锁需要显示问号
    local isUnlock = itemInfo ~= nil and itemInfo.state == 1
    self.Image_add.gameObject:SetActive(self.state == TwoMergeConfig.ShowItemGenerateState.Grow and isUnlock)
    self.Image_new.gameObject:SetActive(self.state == TwoMergeConfig.ShowItemGenerateState.Add and isUnlock)
    local _data  = AppServices.TwoMergeMapGridManager:GetItemInfoById(self.id)
    if _data == nil then
        console.error("没有找到对应的格子数据，id=" .. self.id)
        return
    end
    local itemState = _data.state
    
    self.lockIcon.gameObject:SetActive(itemState == 0)
    self.icon.gameObject:SetActive(itemState == 1)
    self.icon.sprite = AppServices.ItemIcons:GetSpriteByName(cfg.icon)
    local isGenerate = self.type == TwoMergeConfig.ArticleType.AutoGenerator
            or self.type == TwoMergeConfig.ArticleType.Generator
    self.btnTips.gameObject:SetActive(isGenerate)
    if isGenerate then
        Util.UGUI_AddButtonListener(self.btnTips, function()
            self:OnClick()
        end)
    end
end

function MergeBestiaryGenerateItem:OnClick()
    self.luaparent:OnOpenNext(self.id)
end

return MergeBestiaryGenerateItem