
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")

---@type IFunction
local IFunction = require("Game.TwoMerge.Function.IFunction")

---@class UseFunction : IFunction 使用：点击生成 体力、金币、钻石等
local UseFunction = class(IFunction, "UseFunction")

function UseFunction:ctor()
     self.cfg = self.article:GetConfig()
end

function UseFunction:RegisterSelfEvent(articleStateBase)
    articleStateBase:RegisterEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function UseFunction:UnRegisterSelfEvent(articleStateBase)
    articleStateBase:RemoveEvent(TwoMergeConfig.ArticleEventKey.Click, self.Click, self)
end

function UseFunction:Click()
    if self.cfg == nil then
        return TwoMergeConfig.FunctionResult.Fail
    end

    local type_par = self.cfg.type_par
    local itemId = tostring(type_par[1])
    local count = type_par[2]

    local row, col = self.article:GetRowCol()
    AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.UseItem)

    MessageDispatcher:SendMessage(MessageType.Msg_FlyItem_Currency, itemId, count, self.article:GetRect().position)
    AppServices.TwoMergeManager:AddItem(AppServices.TwoMergeMapGridManager:GetMapId(), itemId, count, ItemGetMethod.TwoMergeClickUse, { 
        isfly = true,
        startpos = self.article:GetRect().position,
    })
    -- UITool.ShowPropsAni(itemId, count, self.article:GetRect().position)

    App.audioManager:PlayEffectAudio(CONST.AUDIO.Interface_sound_acquire_coins) -- 使用音效

    return TwoMergeConfig.FunctionResult.SuccessAndAbort
end

return UseFunction