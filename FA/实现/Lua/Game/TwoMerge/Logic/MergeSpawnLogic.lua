--- 合成
---@class MergeSpawnLogic
local MergeSpawnLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type OperationLogic
local OperationLogic = require "Game.TwoMerge.Logic.OperationLogic"
---@type DataPack
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
---@type PromptMergeLogic
local PromptMergeLogic = require "Game.TwoMerge.Logic.PromptMergeLogic"

--- 可以合成的状态
local EnableMergeStateMap = {
    [TwoMergeConfig.ArticleState.Unlock] = true,
    [TwoMergeConfig.ArticleState.Lock] = true
}

--- Article 自己是否符合，合成的前提条件
function MergeSpawnLogic:EnableMerge(article)
    if not article then
        return false
    end

    if article:IsDelete() then
        return false
    end

    if article:IsMoving() then
        return false
    end

    if not AppServices.TwoMergeManager:IsUnlockArea(article:GetPositionId()) then
        return false
    end

    local articleState = article:GetCurrentStateType()
    if not EnableMergeStateMap[articleState] then
        return false
    end

    local mergeFunction = article:GetFunction(TwoMergeConfig.FunctionType.Merge)
    local omnipotentFunction = article:GetFunction(TwoMergeConfig.FunctionType.OmnipotentMerge)
    local shearsFunction = article:GetFunction(TwoMergeConfig.FunctionType.Shears)
    if (not mergeFunction) and (not omnipotentFunction) and (not shearsFunction) then
        return false
    end

    if mergeFunction then
        local spawnConfig = article:GetConfig()
        --- 没有下一级
        if (spawnConfig.nextId == 0) or string.isEmpty(spawnConfig.nextId) then
            return false
        end
    end

    --- 宝箱使用次数减少后, 不再可合成
    if article:GetItemArticleType() == TwoMergeConfig.ArticleType.NormalChest then
        if article:GetSpecData(TwoMergeConfig.ItemDataKey.count) > 0 then
            return false
        end
    end

    return true
end

--- dragArticle 和 targetArticle 合并
--- spawnConfig 生成逻辑使用的配置
function MergeSpawnLogic:MergeSuccess(dragArticle, targetArticle, spawnConfig)
    -- Map 中删除 dragArticle, targetArticle
    local nextId = spawnConfig.nextId
    local nextConfig = AppServices.TwoMergeManager:GetItemConfig()[nextId]

    local dragRow, dragCol = dragArticle:GetRowCol()
    local row, col = targetArticle:GetRowCol()
    --- 合成新的Article
    local itemData = DataPack.CreateItemData(tostring(nextId), row, col)
    local newArticle = AppServices.TwoMergeManager:CreateArticle(itemData)
    AppServices.TwoMergeMapGridManager:SetArticle(row, col, newArticle)

    local instanceId1 = dragArticle:GetPositionId()
    local instanceId2 = targetArticle:GetPositionId()
    OperationLogic:Merge(instanceId1, instanceId2, newArticle)

    AppServices.TwoMergeMapGridManager:RemoveArticle(dragRow, dragCol, TwoMergeConfig.ArticleRemoveType.Merge)

    self:CheckClone(row, col, nextConfig)
    self:CheckDerivant(row, col, nextConfig)

    -- 尝试计算解锁格子状态
    AppServices.TwoMergeMapGridManager:OnTriggerUnlockGrid(row, col)
    PromptMergeLogic:Merge()

    --- 合成特效
    if nextConfig.mergeEffect == 1 then
        AppServices.TwoMergeManager:PlayEffect("effect_erhe_hecheng_ruo", 2, TwoMergeConfig.GridIdToPos(row, col))
    elseif nextConfig.mergeEffect == 2 then
        AppServices.TwoMergeManager:PlayEffect("effect_erhe_hecheng_qiang", 2, TwoMergeConfig.GridIdToPos(row, col))
    end
    App.audioManager:PlayEffectAudio(CONST.AUDIO.audio_merge) -- 合成音效
    local time = newArticle:DOAni(TwoMergeConfig.TweenType.MergeNew)
    -- local time = newArticle:DOAni(TwoMergeConfig.TweenType.MergeNew, 0.2) -- 先播关闭 后播放生成动画
    -- newArticle:SetAniTime(0.2)

    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_MergeSucc)
end

--- 合成时 额外多 生成一个 -- 额外获得 TODO: 根据付费分层设置概率 暂时1
function MergeSpawnLogic:CheckClone(row, col, spawnConfig)
    if not spawnConfig.clonPro or #spawnConfig.clonPro <= 0 then
        return
    end

    local payCategory = AppServices.User:GetPayCategory()
    local clonPro = spawnConfig.clonPro[payCategory] or 0
    local value = math.random(0, TwoMergeConfig.cloneWeight)
    if clonPro < value then
        return
    end
    local extraRow, extraCol = AppServices.TwoMergeMapGridManager:FindDropGrid(row, col)
    if extraRow ~= nil then
        local newArticle = self:SpawnArticle(extraRow, extraCol, spawnConfig.id)
        local time, efftime = newArticle:FlyFromToGrid(row, col, extraRow, extraCol, TwoMergeConfig.FlyMoveType.CreateMove)
        newArticle:ChangeState(TwoMergeConfig.ArticleState.Bubble)
        newArticle:DOAni(TwoMergeConfig.TweenType.GenerateCreate)
        -- AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_shengcheng", 2, TwoMergeConfig.GridIdToPos(extraRow, extraCol), nil, efftime)

        local cloneTime = TwoMergeConfig.GetCloneTime()
        newArticle:SetStateSpecData(TwoMergeConfig.ItemStateDataKey["end"], TimeUtil.ServerTime() + cloneTime)
        newArticle:RefreshShow()
        AppServices.TwoMergeMapGridManager:SetItemState(extraRow, extraCol, TwoMergeConfig.ArticleState.Bubble) -- 刷新状态消息用
        App.audioManager:PlayEffectAudio(CONST.AUDIO.audio_bubble) -- 生成音效
    end
end

--- 衍生物生成检测
function MergeSpawnLogic:CheckDerivant(row, col, spawnConfig)
    local derivative = spawnConfig.derivative
    if not derivative or #derivative <= 0 then
        return
    end

    local totalWeight = 0
    for _, item in ipairs(derivative) do
        totalWeight = item[2] + totalWeight
    end

    totalWeight = 0
    local value = math.random(0, totalWeight)
    local index = -1
    for i, item in ipairs(derivative) do
        totalWeight = item[2] + totalWeight
        if totalWeight >= value then
            index = i
        end
    end

    if index <= 0 then
        return
    end

    local item = derivative[index]
    if item[1] <= 0 then
        return
    end

    local extraRow, extraCol = AppServices.TwoMergeMapGridManager:FindDropGrid(row, col)
    if extraRow ~= nil then
        local article = self:SpawnArticle(extraRow, extraCol, tostring(item[1]))
        local time, efftime = article:FlyFromToGrid(row, col, extraRow, extraCol, TwoMergeConfig.FlyMoveType.CreateMove)
        article:DOAni(TwoMergeConfig.TweenType.GenerateCreate)
        -- AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_shengcheng", 2, TwoMergeConfig.GridIdToPos(extraRow, extraCol), nil, efftime)
        App.audioManager:PlayEffectAudio(CONST.AUDIO.audio_bubble) -- 生成音效
    end
end

function MergeSpawnLogic:SpawnArticle(row, col, itemId)
    local itemData = DataPack.CreateItemData(tostring(itemId), row, col)
    local newArticle = AppServices.TwoMergeManager:CreateArticle(itemData)
    AppServices.TwoMergeMapGridManager:AddArticle(row, col, newArticle)
    return newArticle
end

return MergeSpawnLogic