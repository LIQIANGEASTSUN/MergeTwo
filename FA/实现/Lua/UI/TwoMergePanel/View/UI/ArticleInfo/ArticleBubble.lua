
---@class ArticleBubble 选择的道具是气泡状态
local ArticleBubble = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@param selectArticleInfo SelectArticleInfo
function ArticleBubble:Refresh(selectArticleInfo)
    self.selectArticleInfo = selectArticleInfo

    local article = self.selectArticleInfo:GetArticle()
    self.cfg = article:GetConfig()
    self.selectArticleInfo:SetIcon(self.cfg.icon, true)
    self.selectArticleInfo:SetName(self.cfg.name, self.cfg.level, true)
    self.selectArticleInfo:SetDes(self.cfg.des, true)
    self.selectArticleInfo:SetDeleteShow(true)
    self.selectArticleInfo:SetIllustratedShow(false)
    self.selectArticleInfo:SetSaleShow(false)
    self.selectArticleInfo:SetSelectChestShow(false)

    self.endTimeStamp = article:GetStateSpecData(TwoMergeConfig.ItemStateDataKey["end"])

    local clonValue = self.cfg.clonValue
    self.selectArticleInfo:SetBubbleUnlockShow(true, clonValue[1], clonValue[2])

    self:BubbleCD()
end

function ArticleBubble:BubbleCD()
    self:ClearTimer()

    self.timer = WaitExtension.InvokeRepeating(function()
        local lefttime = self.endTimeStamp - TimeUtil.ServerTime()
        lefttime = math.max(lefttime, 0)
        self.selectArticleInfo:SetBubbleCD(lefttime)
    end, 0, 1)
end

function ArticleBubble:ClearTimer()
    if self.timer then
        WaitExtension.CancelTimeout(self.timer)
        self.timer = nil
    end
end

function ArticleBubble:Clear()
    self:ClearTimer()
end

function ArticleBubble:Destroy()
    self:ClearTimer()
end

return ArticleBubble