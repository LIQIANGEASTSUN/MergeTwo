--- 玩家间隔一定时间没操作合成，提醒玩家合成
---@class PromptMergeLogic
local PromptMergeLogic = {}

---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type TwoMergeOrderManager
local TwoMergeOrderManager = require "Game.TwoMerge.Order.TwoMergeOrderManager"
---@type TutorialLogic
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")

function PromptMergeLogic:Init()
    local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
    self.rowMax, self.colMax = AppServices.TwoMergeManager:GetMaxRowCol(mapId)
    self.intervalTime = AppServices.Meta:GetConfigMetaValueNumber("merge_prompt") or 2500   --- 间隔时间未操作
    self.intervalTime = self.intervalTime * 0.001 -- 初始配置毫秒
    self.moveTime = 0.4     --- 一次动画时长
    self.moveLength = 10    --- 移动距离
    self.moveLoopTimes = 6  --- 循环次数，必须是偶数
    self.lasttimestamp = TimeUtil.ServerTime()

    self.positionId_1 = nil
    self.positionId_2 = nil

    self:StartTimer()
end

function PromptMergeLogic:OnDown() self:ClearCD(true) end
function PromptMergeLogic:Merge() self:ClearCD(true) end --- 合成调用
function PromptMergeLogic:ClickEvent() self:ClearCD(true) end --- 点击道具
function PromptMergeLogic:DragBegin() self:ClearCD(true) end
function PromptMergeLogic:DragEnd() self:ClearCD(true) end

function PromptMergeLogic:ClearCD(value)
    self.lasttimestamp = TimeUtil.ServerTime()
end

function PromptMergeLogic:CheckPrompt()
    if TimeUtil.ServerTime() < self.lasttimestamp + self.intervalTime then
        return
    end
    self.lasttimestamp = TimeUtil.ServerTime()

    --- 局内引导时 不触发弱引导
    if TutorialLogic.IsRunning() then
        return
    end

    self:RefreshIgnore()
    local result = self:PromptMerge(self.positionId_1, self.positionId_2)
    if result then
        self.stop_positionId_1 = self.positionId_1
        self.stop_positionId_2 = self.positionId_2
        return
    end

    local articleMap = AppServices.TwoMergeMapGridManager:GetItemMap()
    for _, articleList in pairs(articleMap) do
        if self:CollectEnableMerge(articleList) then
            break
        end
    end
end

function PromptMergeLogic:RefreshIgnore()
    self.ignores = {}
    self.ignorelinks = {}
    -- 当前不需要此功能
    -- local allneed = TwoMergeOrderManager:GetAllNeedItem()
    -- local itemConfig = AppServices.TwoMergeManager:GetItemConfig()
    -- for itemId, _ in pairs(allneed) do
    --     local config = itemConfig[itemId]
    --     local linkId = config.groupId
    --     if self.ignores[itemId] == nil then
    --         self.ignores[itemId] = true
    --         -- 记录忽略的链和等级
    --         if self.ignorelinks[linkId] == nil then
    --             self.ignorelinks[linkId] = config.level
    --         elseif config.level < self.ignorelinks[linkId] then
    --             self.ignorelinks[linkId] = config.level
    --         end
    --     end
    -- end
end

function PromptMergeLogic:IsValidArticle(article)
    if not article then
        return false
    end
    if not article:IsUnlockArea() then
        return false
    end

    local articleState = article:GetCurrentStateType()
    if articleState == TwoMergeConfig.ArticleState.DeepLock or articleState == TwoMergeConfig.ArticleState.Bubble then
        return false, articleState
    end

    local itemId = article:GetItemId()
    local config = article:GetConfig()
    local linkId = config.groupId
    if self.ignores[itemId] == nil then
        -- 大于等于订单需要的物品等级  忽略合成
        if self.ignorelinks[linkId] ~= nil and config.level >= self.ignorelinks[linkId] then
            self.ignores[itemId] = true
        else
            self.ignores[itemId] = false
        end
    end
    if self.ignores[itemId] then
        return false, articleState
    end

    if string.isEmpty(config.nextId) then
        return false, articleState
    end

    --- 曾经已经点出奖励的箱子 不能合成
    if config.type == TwoMergeConfig.ArticleType.NormalChest then
        if article:GetSpecData(TwoMergeConfig.ItemDataKey.count) > 0 then
            return false, articleState
        end
    end

    return true, articleState
end

local distanceReference = 1000000
local unLockExtraDistance = 1000  -- 未解锁的额外添加的距离
function PromptMergeLogic:CalculateMin(articleList, data1, valueBit, maxIndex, distance, extraDistance)
    local data2 = nil
    for index = 1, maxIndex do
        local bit = (1 << index)
        if (valueBit & bit) > 0 then
            local articleData = articleList[index]
            local newDistance = math.abs(data1.row - articleData.row) + math.abs(data1.col - articleData.col) + extraDistance
            if newDistance < distance then
                data2 = articleData
            end
        end
    end
    return data2
end

function PromptMergeLogic:CollectEnableMerge(articleList)
    local data1, data2
    local normalBit = 0
    local normalMaxIndex = 0
    local lockBit = 0
    local lockMaxIndex = 0
    for index, articleData in ipairs(articleList) do
        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(articleData.row, articleData.col)
        local valid, articleState = self:IsValidArticle(article)
        if (valid) then
            local bit = (1 << index)
            if articleState == TwoMergeConfig.GridState.UnLock then
                if (not data1) then
                    data1 = articleData
                else
                    normalBit = (normalBit | bit)
                    normalMaxIndex = index
                end
            else
                lockBit = (lockBit | bit)
                lockMaxIndex = index
            end
        end
    end

    if (not data1) then
        return false
    end

    data2 = self:CalculateMin(articleList, data1, normalBit, normalMaxIndex, distanceReference, 0)
    if (not data2) then
        data2 = self:CalculateMin(articleList, data1, normalBit, lockMaxIndex, distanceReference, unLockExtraDistance)
    end

    if (not data2) then
        return false
    end

    self.positionId_1 = TwoMergeConfig.Encode(data1.row, data1.col)
    self.positionId_2 = TwoMergeConfig.Encode(data2.row, data2.col)
    self.stop_positionId_1 = self.positionId_1
    self.stop_positionId_2 = self.positionId_2
    self:PromptMerge(self.positionId_1, self.positionId_2)
    return true
end

function PromptMergeLogic:PromptMerge(positionId_1, positionId_2)
    if (not positionId_1) or (not positionId_2) then
        return false
    end
    local row1, col1 = TwoMergeConfig.Decode(positionId_1)
    local row2, col2 = TwoMergeConfig.Decode(positionId_2)
    local article1 = AppServices.TwoMergeMapGridManager:FindItemArticle(row1, col1)
    local article2 = AppServices.TwoMergeMapGridManager:FindItemArticle(row2, col2)
    if (not self:IsValidArticle(article1)) or (not self:IsValidArticle(article2)) then
        return false
    end
    if article1:GetItemId() ~= article2:GetItemId() then
        return false
    end

    self:MoveTo(article1, row2, col2); article1:DOAni(TwoMergeConfig.TweenType.CanMerge)
    self:MoveTo(article2, row1, col1); article2:DOAni(TwoMergeConfig.TweenType.CanMerge)
    return true
end

---@param article Article
function PromptMergeLogic:MoveTo(article, row, col)
    local selfRow, selfCol = article:GetRowCol()
    local startAnchorPos = TwoMergeConfig.GridIdToPos(selfRow, selfCol)
    local targetAnchorPos = TwoMergeConfig.GridIdToPos(row, col)

    local offset = (targetAnchorPos - startAnchorPos).normalized
    local transform = article:GetAniRect()
    targetAnchorPos = transform.anchoredPosition + offset * self.moveLength

    article:SetAnchoredPos(startAnchorPos)
    local articleAnimation = article:GetArticleAnimation()

    articleAnimation:MovePrompt(targetAnchorPos, self.moveTime, self.moveLoopTimes)
end

function PromptMergeLogic:StartTimer(delay)
    delay = delay or 0
    self:StopTimer()
    self.promptTimer = WaitExtension.InvokeRepeating(function()
        self:CheckPrompt()
    end, 1, 0.5)
end

function PromptMergeLogic:StopTimer()
    if self.promptTimer then
        WaitExtension.CancelTimeout(self.promptTimer)
        self.promptTimer = nil
    end
end

function PromptMergeLogic:StopArticle(row, col)
    local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
    if article ~= nil then
        article.articleAnimation:ClearTween()
    end
end

function PromptMergeLogic:StopAni()
    if self.stop_positionId_1 ~= nil then
        self:StopArticle(TwoMergeConfig.Decode(self.stop_positionId_1))
        self.stop_positionId_1 = nil
    end
    if self.stop_positionId_2 ~= nil then
        self:StopArticle(TwoMergeConfig.Decode(self.stop_positionId_2))
        self.stop_positionId_2 = nil
    end
end

function PromptMergeLogic:Clear()
    self:StopTimer()
    self.positionId_1 = nil
    self.positionId_2 = nil
end

return PromptMergeLogic