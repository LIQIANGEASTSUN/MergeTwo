

---@class ArticleDeepLock  选择的道具是深度锁定状态
local ArticleDeepLock = {}

---@param selectArticleInfo SelectArticleInfo
function ArticleDeepLock:Refresh(selectArticleInfo)
    self.selectArticleInfo = selectArticleInfo

    local article = self.selectArticleInfo:GetArticle()
    self.cfg = article:GetConfig()
    self.selectArticleInfo:SetIcon(self.cfg.icon, false)
    self.selectArticleInfo:SetName(self.cfg.name, self.cfg.level, false)
    local msg = Runtime.Translate("merge_system_24")
    self.selectArticleInfo:SetDes(msg, true)
    self.selectArticleInfo:SetDeleteShow(false)
    self.selectArticleInfo:SetIllustratedShow(false)
    self.selectArticleInfo:SetBubbleUnlockShow(false)
    self.selectArticleInfo:SetSaleShow(false)
    self.selectArticleInfo:SetSelectChestShow(false)
end

return ArticleDeepLock