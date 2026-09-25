
---@class ArticleLock  选择的道具是锁定状态
local ArticleLock = {}

---@param selectArticleInfo SelectArticleInfo
function ArticleLock:Refresh(selectArticleInfo)
    self.selectArticleInfo = selectArticleInfo

    local article = self.selectArticleInfo:GetArticle()
    self.cfg = article:GetConfig()
    self.selectArticleInfo:SetIcon(self.cfg.icon, true)
    self.selectArticleInfo:SetName(self.cfg.name, self.cfg.level, true)
    self.selectArticleInfo:SetDes(self.cfg.des, true)
    self.selectArticleInfo:SetDeleteShow(false)
    self.selectArticleInfo:SetIllustratedShow(true)
    self.selectArticleInfo:SetBubbleUnlockShow(false)
    self.selectArticleInfo:SetSaleShow(false)
    self.selectArticleInfo:SetSelectChestShow(false)
end

return ArticleLock