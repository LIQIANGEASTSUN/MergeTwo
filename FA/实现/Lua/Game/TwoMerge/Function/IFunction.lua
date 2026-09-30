---@class IFunction
local IFunction = class(nil, "IFunction")

---@param article Article
---@param articleStateBase ArticleStateBase
function IFunction:ctor(article)
    ---@type Article
    self.article = article
    local goRect = self.article:GetRect()
    self.rect = goRect.rect
    local parent = AppServices.TwoMergeManager:GetArticleParent()
    self.parentRect = find_component(parent.gameObject, "", RectTransform)
end

---@param articleStateBase ArticleStateBase
function IFunction:RegisterSelfEvent(articleStateBase)

end

---@param articleStateBase ArticleStateBase
function IFunction:UnRegisterSelfEvent(articleStateBase)

end

return IFunction