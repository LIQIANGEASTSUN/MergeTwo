---@type GenerateLogic
local GenerateLogic = require "Game.TwoMerge.Logic.GenerateLogic"
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type OperationLogic
local OperationLogic = require "Game.TwoMerge.Logic.OperationLogic"
---@type TwoMergeOrderManager
local TwoMergeOrderManager = require "Game.TwoMerge.Order.TwoMergeOrderManager"
---@type MergePool
local MergePool = require("Game.TwoMerge.MergeUtil.MergePool")
---@class ArticleView
local ArticleView = class(nil, "ArticleView")
---@param article Article
function ArticleView:ctor(article)
    self.article = article
    self:CreateGo()
end

function ArticleView:RefreshShow()
    self:CheckGenerator()
    self:SetMaxMark(AppServices.TwoMergeMapGridManager:IsItemChainMaxLevel(self.article:GetItemId()))
    self:CheckTimer()
    self:CheckMarks()
end

function ArticleView:CheckGenerator()
    local type = self.article:GetItemArticleType()
    local isGene = type == TwoMergeConfig.ArticleType.Generator or type == TwoMergeConfig.ArticleType.AutoGenerator
    self.generateroot:SetActive(isGene and self.article:GetCurrentStateType() ~= TwoMergeConfig.ArticleState.Lock and self.article:GetCurrentStateType() ~= TwoMergeConfig.ArticleState.DeepLock)
    local showRate = self.article:CanDouble() and AppServices.TwoMergeManager:GetRate() > 0
    self.generate_icon:SetActive(not showRate)
    self.generate_rateicon:SetActive(showRate)
    self.generate_eff:SetActive(self.article:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock and GenerateLogic.IsGenerateCDComplete(self.article))
    -- if isGene then
    --     find_component(self.generateroot, "curcount", Text).text = self.article:GetSpecData(TwoMergeConfig.ItemDataKey.curCount)
    --     find_component(self.generateroot, "historycount", Text).text = self.article:GetSpecData(TwoMergeConfig.ItemDataKey.historyCount)
    --     find_component(self.generateroot, "endtime", Text).text = self.article:GetSpecData(TwoMergeConfig.ItemDataKey["end"])
    --     find_component(self.generateroot, "nowtime", Text).text = TimeUtil.ServerTime()
    -- else
    --     find_component(self.generateroot, "curcount", Text).text = ""
    --     find_component(self.generateroot, "historycount", Text).text = ""
    --     find_component(self.generateroot, "endtime", Text).text = ""
    --     find_component(self.generateroot, "nowtime", Text).text = ""
    -- end
end

-- function ArticleView:Tick()
--     local type = self.article:GetItemArticleType()
--     local isGene = type == TwoMergeConfig.ArticleType.Generator or type == TwoMergeConfig.ArticleType.AutoGenerator
--     if isGene then
--         find_component(self.generateroot, "nowtime", Text).text = TimeUtil.ServerTime()
--     end
-- end

function ArticleView:CheckTimer()
    local type = self.article:GetItemArticleType()
    local isShow, lefttime, totalTime = false, 0, 1
    if TwoMergeConfig.NeedEndTime(type) and GenerateLogic.IsShowEndTimeStamp(self.article) then
        isShow = true; lefttime, totalTime = GenerateLogic.GetCDLefttime(self.article)
    elseif self.article:GetItemState() == TwoMergeConfig.ArticleState.Bubble then
        --- 克隆暂时不显示倒计时icon
        isShow = false; lefttime = self.article:GetStateSpecData(TwoMergeConfig.ItemStateDataKey["end"]) - TimeUtil.ServerTime()
    end
    if isShow then
        self.icon_timer_gray.fillAmount = lefttime / totalTime
        if self.timerTweener ~= nil then self.timerTweener:Kill(); self.timerTweener = nil end
        self.timerTweener = self.icon_timer_gray:DOFillAmount(0, lefttime):SetEase(Ease.Linear):OnComplete(function()
            self.endtimeroot:SetActive(false)
        end)
    end
    self.endtimeroot:SetActive(isShow)
end

function ArticleView:CheckMarks()
    self.ordermark:SetActive(self.article:GetItemState() == TwoMergeConfig.ArticleState.Unlock and TwoMergeOrderManager:IsOrderNeedItem(self.article:GetItemId()))
end

function ArticleView:GetGo() return self.go end
function ArticleView:GetRect() return self.rect end
function ArticleView:GetAniRect() return self.anirect end

function ArticleView:GetEmptyImage() return self.emptyImage end

function ArticleView:GetUseRect()
    return self.useRect
end

function ArticleView:SetAnchoredPos(anchoredPosition) self.rect.anchoredPosition = anchoredPosition end
function ArticleView:GetAnchoredPos() return self.rect.anchoredPosition end
function ArticleView:SetAniPos(anchoredPosition) self.anirect.anchoredPosition = anchoredPosition end
function ArticleView:SetAsLastSibling() self.transform:SetAsLastSibling() end
function ArticleView:SetSprite(iconname) self.icon.sprite = AppServices.ItemIcons:GetSpriteByName(iconname) end -- 图片
function ArticleView:SetGray(isGray) self.uigray.enabled = isGray end -- 置灰
function ArticleView:SetDeepLock(isDeepLock) self.deeplock:SetActive(isDeepLock and 0 or 1) end -- 深度锁定状态
function ArticleView:SetLock(isLock) self.lock:SetActive(isLock) end -- 锁定状态
function ArticleView:SetCanvasGroup(a) self.canvasgroup.alpha = a end -- 透明度
function ArticleView:SetMaxMark(isMax) self.maxmark:SetActive(isMax) end -- 最高等级标记
function ArticleView:SetFindMark(isMark) self.findmark:SetActive(isMark) end -- 寻找标记

function ArticleView:SetCloneRootShow(value)
    self.cloneroot:SetActive(value)
    if value then self.cloneicon.sprite = AppServices.ItemIcons:GetSpriteByName(self.article:GetConfig().icon) end
end -- 克隆
function ArticleView:SetChooseImgShow(value) self.chooseImg:SetActive(value) end -- 选择框

function ArticleView:CreateGo()
    self.parentRect = AppServices.TwoMergeManager:GetArticleParent()
    local child = AppServices.TwoMergeManager:GetArticleCloneItem()

    local go = self:Clone(child, self.parentRect)
    self.go = go
    go.transform.localScale = TwoMergeConfig.GetScale()
    self.transform = go.transform

    local itemId = self.article:GetItemId()
    local row, col = self.article:GetRowCol()
    self.go.name = string.format("%d_%s_%d_%d", self.article:GetInstanceId(),  itemId, row, col)
    self.go.transform:SetAsLastSibling()

    self.canvasgroup = find_component(self.go, "", CanvasGroup)
    self.icon = find_component(self.go, "root/icon", Image)
    self.rect = find_component(self.go, "", RectTransform)
    self.anirect = find_component(self.go, "root", RectTransform)
    self.uigray = find_component(self.go, "", UIGray)
    self.lock = find_component(self.go, "lock")
    --- 数量
    self.countroot = find_component(self.go, "root/countroot")
    self.countlabel = find_component(self.go, "root/countroot/label", Text)
    --- 生成器
    self.generateroot = find_component(self.go, "root/generateroot")
    self.generate_icon = find_component(self.go, "root/generateroot/icon")
    self.generate_rateicon = find_component(self.go, "root/generateroot/rateicon")
    self.generate_eff = find_component(self.go, "root/generateroot/eff")
    --- 选中框
    self.chooseImg = find_component(self.go, "chooseImg")
    self.chooseImg:SetActive(false)
    --- 克隆root
    self.cloneroot = find_component(self.go, "root/cloneroot")
    self.cloneicon = find_component(self.go, "root/cloneroot/icon", Image)
    --- 倒计时
    self.endtimeroot = find_component(self.go, "root/endtimeroot")
    self.text_timer = find_component(self.go, "root/endtimeroot/endtimestamp", Text)
    self.icon_timer_gray = find_component(self.go, "root/endtimeroot/icon_timer_gray", Image) -- 倒计时IconGray
    self.text_timer.text = ""
    --- 最高等级标志
    self.maxmark = find_component(self.go, "root/maxmark")
    --- 寻找标记
    self.findmark = find_component(self.go, "root/findmark")
    --- 订单需要标记
    self.ordermark = find_component(self.go, "root/ordermark")

    self.emptyImage = find_component(self.go, "", CS.EmptyImage)
    self.useRect = find_component(self.go, "use", RectTransform)
    --- 添加 Click
    local click = function()
        if self.operaAllow then
            OperationLogic:Click(self.article)
        end
    end
    local btn = find_component(self.go, "", Button)
    Util.UGUI_AddButtonListener(btn, click, { noAudio = true })
    self:ListerDrag()
end

function ArticleView:ListerDrag()
    self.eventTrigger = find_component(self.go, "", CS.EventTriggerForLua)

    local onBeginDrag = function(eventData)
        if self.operaAllow then
            OperationLogic:BeginDrag(self.article, eventData)
            self.article:RefreshChoose()
        end
    end

    local onDrag = function(eventData)
        if self.operaAllow then
            OperationLogic:Draging(self.article, eventData)
        end
    end

    local onEndDrag = function(eventData)
        if self.operaAllow then
            OperationLogic:DragEnd(self.article, eventData)
            self.article:RefreshChoose()
        end
    end

    local onPointerDown = function(eventData)
        local anchoredPosition = GameUtil.ScreenToUISpace(self.parentRect, eventData.position)
        local gridRow, gridCol = TwoMergeConfig.PosToGridId(anchoredPosition)
        local row, col = self.article:GetRowCol()
        self.operaAllow = row == gridRow and col == gridCol and not self.article:IsDelete()
    end

    self.eventTrigger.onDrag = onDrag
    self.eventTrigger.onEndDrag = onEndDrag
    self.eventTrigger.onBeginDrag = onBeginDrag
    self.eventTrigger.onPointerDown = onPointerDown
end

function ArticleView:SetActive(show)
    self.go:SetActive(show)
end

function ArticleView:SetParent(parent)
    if not Runtime.CSNull(self.go) then
        self.go.transform:SetParent(parent)
    end
end

function ArticleView:Clone(child, parent)
    local go = MergePool.GetGameObject("TwoMergeArticle", parent, child)
    return go
    -- local go = GameObject.Instantiate(child)
    -- go:SetParent(parent.transform, false)
    -- go.transform:SetLocalPosition(Vector3.zero)
    -- go.transform:SetLocalEulerAngle(0, 0, 0)
    -- go.transform:SetLocalScale(Vector3.one)
    -- go:SetActive(true)
    -- return go
end

--- 清除临时标记
function ArticleView:ClearSpecialMark()
    self:SetFindMark(false)
end

function ArticleView:Release()
    self.eventTrigger.onDrag = nil
    self.eventTrigger.onEndDrag = nil
    self.eventTrigger.onBeginDrag = nil
    self.eventTrigger.onPointerDown = nil

    -- Runtime.CSDestroy(self.go)
    MergePool.ReleaseGameObject("TwoMergeArticle", self.go)
end

return ArticleView