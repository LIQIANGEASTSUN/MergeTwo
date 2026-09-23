---@type ArticleStateBase
local ArticleStateBase = require "Game.TwoMerge.Article.State.ArticleStateBase"
---@class ArticleStateBubble : FsmStateBase  道具锁定状态
local ArticleStateBubble = class(ArticleStateBase, "ArticleStateBubble")
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type DataPack
local DataPack = require("Game.TwoMerge.DataPack.DataPack")

function ArticleStateBubble:ctor()
    self.stateType = TwoMergeConfig.ArticleState.Bubble
    self.processFuncMap = {
        [TwoMergeConfig.FunctionType.Drag] = true,
        [TwoMergeConfig.FunctionType.Replace] = true,
    }
end

function ArticleStateBubble:SetAppearance()
    ArticleStateBase.SetAppearance(self)
    self.article:SetLock(false)
end

function ArticleStateBubble:Click()
    self:OnCloneUnlock()
end

function ArticleStateBubble:Tick()
    self:CheckCloneRemove()
end

--- 克隆删除检测    剩余时间 <= 0 && 未选中
function ArticleStateBubble:CheckCloneRemove()
    local endTimeStamp = self.article:GetStateSpecData(TwoMergeConfig.ItemStateDataKey["end"])
    local lefttime = endTimeStamp - TimeUtil.ServerTime()
    if lefttime <= 0 and not self.article:IsChoose() then
        local row, col = self.article:GetRowCol()
        AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.CloneTimeEnd)
    end
end

--- 选中状态更改
function ArticleStateBubble:ChooseChanged(isChoose)
    --- 选中 => 未选中 检测一次状态
    if not isChoose then
        self:CheckCloneRemove()
    end
end

function ArticleStateBubble:RefreshShow()
    self.article:SetCanvasGroup(1)
    self.article:SetCloneRootShow(true)
    ArticleStateBase.RefreshShow(self)
end

function ArticleStateBubble:OnCloneUnlock()
    local config = self.article:GetConfig()
    local itemId = config.clonValue[1]
    local count = config.clonValue[2]
    if itemId ~= nil and count ~= nil then
        local params = {
            itemId = self.article:GetItemId(),
            costId = itemId,
            costCount = count,
            callback = function(succ)
                if succ then
                    AppServices.TwoMergeManager:RemoveItem(AppServices.TwoMergeMapGridManager:GetMapId(), itemId, count, ItemUseMethod.TwoMergeCloneBubble)

                    local row, col = self.article:GetRowCol()
                    AppServices.TwoMergeMapGridManager:SetItemState(row, col, TwoMergeConfig.ArticleState.Unlock)--- 克隆解锁特效
                    self.article:DoBubbleAni()
                    self.article:RefreshShow()
                    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Info_Refresh)
                end
            end,
        }
        PanelManager.showPanel(GlobalPanelEnum.UITwoMergeClonItemPanel, params)
    end
end

--- 注册事件
function ArticleStateBubble:AddListerer()
    ArticleStateBase.AddListerer(self)
    self:RegisterEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
    self:RegisterEvent(TwoMergeConfig.ArticleEventKey.Tick, self.Tick, self)
    self:RegisterEvent(TwoMergeConfig.ArticleEventKey.ChooseChanged, self.ChooseChanged, self)
    self:RegisterEvent(TwoMergeConfig.ArticleEventKey.TriggerCloneUnlock, self.OnCloneUnlock, self)
end

--- 移除事件
function ArticleStateBubble:RemoveListener()
    ArticleStateBase.RemoveListener(self)
    self:RemoveEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
    self:RemoveEvent(TwoMergeConfig.ArticleEventKey.Tick, self.Tick, self)
    self:RemoveEvent(TwoMergeConfig.ArticleEventKey.ChooseChanged, self.ChooseChanged, self)
    self:RemoveEvent(TwoMergeConfig.ArticleEventKey.TriggerCloneUnlock, self.OnCloneUnlock, self)
end

return ArticleStateBubble