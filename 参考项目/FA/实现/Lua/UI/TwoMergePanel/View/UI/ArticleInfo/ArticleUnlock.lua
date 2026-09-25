

---@class ArticleUnlock  选择的道具是解锁状态
local ArticleUnlock = {}
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local GenerateLogic = require "Game.TwoMerge.Logic.GenerateLogic"
---@type MergeConfigUtil
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")
local lastEndTimeShow = nil

---@param selectArticleInfo SelectArticleInfo
function ArticleUnlock:Refresh(selectArticleInfo)
    self.selectArticleInfo = selectArticleInfo
    lastEndTimeShow = nil

    self.article = self.selectArticleInfo:GetArticle()
    self.cfg = self.article:GetConfig()
    self.selectArticleInfo:SetIcon(self.cfg.icon, true)
    self.selectArticleInfo:SetName(self.cfg.name, self.cfg.level, true)
    self.selectArticleInfo:SetDes(self.cfg.des, true)

    local linkId = self.cfg.groupId
    local unlockMaxLevel = AppServices.TwoMergeMapGridManager:GetMergeItemInChainMaxLevel(linkId)
    self.selectArticleInfo:SetDeleteShow(self.cfg.saleRestrictions > 0 and unlockMaxLevel >= self.cfg.saleRestrictions)

    self:CheckGenerator()
    self:NormalChest()
    self:SelectChest()
    self:CheckCDItem()

    self.selectArticleInfo:SetIllustratedShow(true)
    self.selectArticleInfo:SetBubbleUnlockShow(false)
end

function ArticleUnlock:CheckGenerator()
    local config = self.article:GetConfig()
    self:ClearGeneratorTimer()
    self.selectArticleInfo:SetGeneratorInfo(false)
    if TwoMergeConfig.NeedEndTime(config.type) then
        self.generatortimer = WaitExtension.InvokeRepeating(function()
            self:EndTimeTick()
        end, 0, 1)
        self:EndTimeTick()
    end
end

function ArticleUnlock:EndTimeTick()
    local isShow = GenerateLogic.IsShowEndTimeStamp(self.article)
    if isShow ~= lastEndTimeShow then
        local id, count = GenerateLogic.GetCost(self.article)
        self.selectArticleInfo:SetGeneratorInfo(isShow, id, count)
        lastEndTimeShow = isShow
    end
    if isShow then
        local lefttime = GenerateLogic.GetCDLefttime(self.article)
        local id, count = MergeConfigUtil.GetLeftTimePrice(lefttime)
        self.selectArticleInfo:SetGeneratorCD(lefttime, count)
    end
end

--- 普通宝箱需要显示的逻辑
function ArticleUnlock:NormalChest() end

--- 选择宝箱需要显示的逻辑
function ArticleUnlock:SelectChest()
    local isshow = self.article:GetItemArticleType() == TwoMergeConfig.ArticleType.SelectChest
    self.selectArticleInfo:SetSelectChestShow(isshow)
end

--- 减cd道具信息
function ArticleUnlock:CheckCDItem()
    if self.article:GetItemArticleType() == TwoMergeConfig.ArticleType.CDItem then
        local useTime = self.article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
        local remainTime = self.cfg.type_par[1] - useTime -- type_par[1]: 拥有的时间(秒)
        self.selectArticleInfo:CDItem_Set(true, remainTime)
    else
        self.selectArticleInfo:CDItem_Set(false)
    end
end

function ArticleUnlock:ClearGeneratorTimer()
    if self.generatortimer ~= nil then
        WaitExtension.CancelTimeout(self.generatortimer)
        self.generatortimer = nil
    end
end

function ArticleUnlock:Clear()

end

function ArticleUnlock:Destroy()
    lastEndTimeShow = nil
    self:ClearGeneratorTimer()
end

return ArticleUnlock