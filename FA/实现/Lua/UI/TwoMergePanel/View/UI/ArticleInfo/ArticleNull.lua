

---@class ArticleNull 未选择道具
local ArticleNull = {}

---@param selectArticleInfo SelectArticleInfo
function ArticleNull:Refresh(selectArticleInfo)
    self.selectArticleInfo = selectArticleInfo

    self.selectArticleInfo:SetIcon("", false)
    self.selectArticleInfo:SetName("", "", false)
    self.selectArticleInfo:SetDes("merge_system_16", true)
    self.selectArticleInfo:SetDeleteShow(false)
    self.selectArticleInfo:SetIllustratedShow(false)
    self.selectArticleInfo:SetBubbleUnlockShow(false)
    self.selectArticleInfo:SetSaleShow(false)
    self.selectArticleInfo:SetSelectChestShow(false)
end

return ArticleNull