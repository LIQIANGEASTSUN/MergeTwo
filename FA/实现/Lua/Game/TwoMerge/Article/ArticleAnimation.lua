
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@class ArticleAnimation
local ArticleAnimation = class(nil, "ArticleAnimation")

---@param article Article
function ArticleAnimation:ctor(article)
    self.article = article
    self.tweens = {}
    local rect = self.article:GetRect()

    self.TweenAnimation = rect.gameObject:GetComponent(typeof(CS.TweenAnimation))
    if self.TweenAnimation == nil then
        self.TweenAnimation = rect.gameObject:AddComponent(typeof(CS.TweenAnimation))
    end
end

---------------------------------- >>> 移动动画 <<< ----------------------------------
--- 飞行动画: 当前位置 -> 格子
function ArticleAnimation:FlyToGrid(row, col, flyMoveTpye)
    self.article:SetAsLastSibling()
    local startposition = self.article:GetAnchoredPos()
    local endAnchorPos = TwoMergeConfig.GridIdToPos(row, col)

    return self:Move(self.article:GetRect(), startposition, endAnchorPos, flyMoveTpye)
end
--- 飞行动画: 格子 -> 格子
function ArticleAnimation:FlyFromToGrid(row, col, targetRow, targetCol, flyMoveType)
    self.article:SetAsLastSibling()
    local startposition = TwoMergeConfig.GridIdToPos(row, col)
    local endposition = TwoMergeConfig.GridIdToPos(targetRow, targetCol)
    return self:Move(self.article:GetRect(), startposition, endposition, flyMoveType)
end
--- 飞行动画: 执行
function ArticleAnimation:Move(transform, startposition, endposition, flyMoveTpye)
    self:ClearTween()

    --- 总时间  触发特效时间
    local time, efftime = 0.6, 0.6
    self.article:SetAnchoredPos(startposition)
    if flyMoveTpye == TwoMergeConfig.FlyMoveType.ReplaceMove then
        local distance = Vector2.Distance(startposition, endposition)
        time = distance * TwoMergeConfig.articleFlyspeed
        efftime = time
        if time < 0.2 then time = 0.2 end
        local tween = GameUtil.DoAnchorPos(transform, endposition, time, function() self:ClearTween() end)
        table.insert(self.tweens, tween)
    elseif flyMoveTpye == TwoMergeConfig.FlyMoveType.AutoMergeMove then
        time = 0.5
        efftime = time
        local tween1 = GameUtil.DoAnchorPosX(transform, endposition.x, time, nil, Ease.Linear)
        local tween2 = GameUtil.DoAnchorPosY(transform, endposition.y, time, function() self:ClearTween() end, Ease.Linear)
        table.insert(self.tweens, tween1)
        table.insert(self.tweens, tween2)
    else
        time = 0.5
        local centerpos = endposition - (endposition - startposition).normalized * 25

        local aniRect = self.article:GetAniRect()
        -- aniRect.localScale = Vector3(0.3, 0.3, 0.3)
        -- local r, c = self.article:GetRowCol()
        -- console.print(">>>  my  "..r..", "..c)
        local tweenScale0 = aniRect:DOScale(0.3, 0):SetEase(Ease.Linear)
        local tweenScale1 = aniRect:DOScale(1.8, time * 0.25):SetEase(Ease.Linear)
        local tweenScale2 = aniRect:DOScale(1, time * 0.75):SetDelay(time * 0.25):SetEase(Ease.Linear)
        local tween1 = GameUtil.DoAnchorPosX(transform, centerpos.x, time, nil, Ease.OutQuad)
        local tween2 = GameUtil.DoAnchorPosY(transform, centerpos.y, time, nil, Ease.OutQuad)

        local tween3 = transform:DOAnchorPos(endposition, 0.2):SetEase(Ease.OutQuad):SetDelay(time):OnComplete(function() self:ClearTween() end)
        AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_shengcheng", 2, Vector2.zero, self.article:GetRect(), time)

        efftime = time
        time = time + 0.2
        table.insert(self.tweens, tweenScale0)
        table.insert(self.tweens, tweenScale1)
        table.insert(self.tweens, tweenScale2)
        table.insert(self.tweens, tween1)
        table.insert(self.tweens, tween2)
        table.insert(self.tweens, tween3)
    end
    self.article:SetAniTime(time)
    return time, efftime
end
--- 飞行动画: 引导提示
function ArticleAnimation:MovePrompt(endposition, time, loop)
    self:ClearTween()
    local tween = GameUtil.DoAnchorPos(self.article:GetAniRect(), endposition, time, function() self:ClearTween() end)
    tween:SetLoops(loop, LoopType.Yoyo)
    table.insert(self.tweens, tween)
end
--- 清空 Tween
function ArticleAnimation:ClearTween()
    for _, tween in pairs(self.tweens) do
        tween:Kill(true)
    end
    self.tweens = {}
    self.TweenAnimation:ClearTween()
end

--- 执行动画:  c# - TweenAnimation
function ArticleAnimation:DOAni(key, delay)
    --- 参数: .tween  .time
    local tweenInfo = self.TweenAnimation:Play(key)
    if delay then tweenInfo.tween:SetDelay(delay) end
    return tweenInfo.time
end

function ArticleAnimation:Release()
    self:ClearTween()
end

return ArticleAnimation