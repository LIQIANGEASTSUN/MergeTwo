
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type OperationLogic
local OperationLogic = require "Game.TwoMerge.Logic.OperationLogic"
---@type FsmStateMachine
local FsmStateMachine = require "Game.FsmStateMachine.FsmStateMachine"
---@type DataPack
local DataPack = require("Game.TwoMerge.DataPack.DataPack")

---@type ArticleAnimation
local ArticleAnimation = require "Game.TwoMerge.Article.ArticleAnimation"
---@type ArticleView
local ArticleView = require "Game.TwoMerge.Article.ArticleView"

---@class Article
local Article = class(nil, "Article")
local _Add = 0
local curorder = 0
local lastChangeSortingOrder = 0
function Article:ctor(itemData)
    _Add = _Add + 1
    self.instanceId = _Add
    self.itemData = itemData
    self.config = AppServices.Meta:Category("MergeTwoItemTemplate")[self.itemData:GetItemId()]
    self.FuncMap = {}
    self.lastChoose = false
    ---@type ArticleView
    self.articleView = ArticleView.new(self)
    ---@type ArticleAnimation
    self.articleAnimation = ArticleAnimation.new(self)
    self:InitFunction()
    self:InitState()
    self:RefreshShow()
end

--- 实例唯一 Id
function Article:GetInstanceId() return self.instanceId end
--- positionId : 计算之后的唯一Id  TwoMergeConfig.Encode(row, col)
function Article:GetPositionId() return self.itemData:GetPosition() end
--- 数据 table
function Article:GetItemData() return self.itemData:GetData() end
function Article:GetItemId() return self.itemData:GetItemId() end
function Article:GetConfig() return self.config end
--- 行列
function Article:SetRowCol(row, col) self.itemData:SetRowCol(row, col) end
function Article:GetRowCol() return self.itemData:GetRowCol() end
--- 数量
function Article:SetCount(count) self.itemData:SetCount(count) end
function Article:GetCount() return self.itemData:GetCount() end
--- 状态
function Article:SetItemState(itemState) self.itemData:SetItemState(itemState) end
function Article:GetItemState() return self.itemData:GetItemState() end
--- itemData字段
function Article:SetSpecData(key, value) self.itemData:SetSpecData(key, value) end
function Article:GetSpecData(key) return self.itemData:GetSpecData(key) end
--- itemStateData字段
function Article:SetStateSpecData(key, value) self.itemData:SetStateSpecData(key, value) end
function Article:GetStateSpecData(key) return self.itemData:GetStateSpecData(key) end
--- 类型
function Article:GetItemArticleType() return self.config.type end

function Article:InitState()
    ---@type FsmStateMachine
    self.stateMachine = FsmStateMachine.new()
    for _, state in pairs(TwoMergeConfig.ArticleState) do
        local alis = TwoMergeConfig.ArticleStateCfg[state]
        local stateEntity = alis.new(self)
        stateEntity:Init()
        self.stateMachine:Add(stateEntity)
    end

    self:ChangeState(self:GetItemState())
end

--- 加载完成
function Article:OnInitComplete()
    self:RefreshShow()
    self:NotifySelf(TwoMergeConfig.ArticleEventKey.OnInitComplete)
    if self:GetItemState() == TwoMergeConfig.ArticleState.Unlock and not string.isEmpty(self:GetItemId()) then
        AppServices.TwoMergeManager:CheckIllUnlock(AppServices.TwoMergeMapGridManager:GetMapId(), self:GetItemId())
    end
end

function Article:InitFunction()
    local itemFuncs = TwoMergeConfig.FunctionMap[self.config.type]
    for _, funcType in pairs(itemFuncs) do
        local alis = TwoMergeConfig.FunctionCfg[funcType]
        local func = alis.new(self)
        table.insert(self.FuncMap, { funcType = funcType, func = func })
    end
end

function Article:GetFunction(funcType)
    for _, v in pairs(self.FuncMap) do
        if v.funcType == funcType then return v.func end
    end
end

function Article:GetAllFunction() return self.FuncMap end
---@return ArticleView
function Article:GetArticleView() return self.articleView end
---@return ArticleAnimation
function Article:GetArticleAnimation() return self.articleAnimation end

function Article:RefreshShow()
    self.articleView:RefreshShow()
    self:NotifySelf(TwoMergeConfig.ArticleEventKey.RefreshShow)
end

function Article:Tick()
    self:NotifySelf(TwoMergeConfig.ArticleEventKey.Tick)
    -- self.articleView:Tick()
end

function Article:NotifySelf(key, ...)
    local currentState = self:GetCurrentState()
    currentState:NotifySelf(key, ...)
end

function Article:ChangeState(state, transitionData)
    local oldState = self:GetItemState()
    self.stateMachine:ChangeState(state, transitionData)
    self:SetItemState(state)
    DataPack.CheckStateData(self:GetItemData())

    if oldState == TwoMergeConfig.ArticleState.DeepLock and state == TwoMergeConfig.ArticleState.Lock then
        local row, col = self:GetRowCol()
        AppServices.TwoMergeManager:PlayEffect("effect_erhe_sui", 2, TwoMergeConfig.GridIdToPos(row, col))
    end
end

---@return ArticleStateBase
function Article:GetState(state)
    return self.stateMachine:GetState(state)
end

function Article:GridStateChange(state)
    local currentState = self:GetCurrentStateType()
    if currentState ~= TwoMergeConfig.ArticleState.Bubble then
        self:ChangeState(state)
    end
end

function Article:GridChange(oldrow, oldcol, newrow, newcol)
    self:NotifySelf(TwoMergeConfig.ArticleEventKey.GridChange, oldrow, oldcol, newrow, newcol)
end

function Article:GetCurrentStateType()
    local currentState = self.stateMachine:GetCurrentState()
    if not currentState then
        return -1
    end
    return currentState:GetStateType()
end

function Article:IsUnlockArea() return AppServices.TwoMergeManager:IsUnlockArea(self:GetPositionId()) end

---@return ArticleStateBase
function Article:GetCurrentState() return self.stateMachine:GetCurrentState() end
function Article:SetAnchoredPos(anchoredPosition) self.articleView:SetAnchoredPos(anchoredPosition) end
function Article:SetAniPos(anchoredPosition) self.articleView:SetAniPos(anchoredPosition) end
function Article:GetAnchoredPos() return self.articleView:GetAnchoredPos() end
function Article:GetGo() return self.articleView:GetGo() end
function Article:GetRect() return self.articleView:GetRect() end
function Article:GetAniRect() return self.articleView:GetAniRect() end
function Article:SetAsLastSibling() self.articleView:SetAsLastSibling() end
function Article:SetSprite(iconname) self.articleView:SetSprite(iconname) end
function Article:SetGray(isGray) self.articleView:SetGray(isGray) end
function Article:SetDeepLock(isDeepLock) self.articleView:SetDeepLock(isDeepLock) end
function Article:SetLock(isLock) self.articleView:SetLock(isLock) end
function Article:SetCanvasGroup(a) self.articleView:SetCanvasGroup(a) end
function Article:SetCloneRootShow(value) self.articleView:SetCloneRootShow(value) end
function Article:DOAni(key, delay) return self.articleAnimation:DOAni(key, delay) end
function Article:SetGray(isGray) self.articleView:SetGray(isGray) end
function Article:SetDeepLock(isDeepLock) self.articleView:SetDeepLock(isDeepLock) end
function Article:SetCloneRootShow(value) self.articleView:SetCloneRootShow(value) end

--- 飞行动画
function Article:FlyToGrid(row, col, flyMoveType) return self.articleAnimation:FlyToGrid(row, col, flyMoveType) end
function Article:FlyFromToGrid(row, col, targetRow, targetCol, flyMoveType)
    self:SetAnchoredPos( TwoMergeConfig.GridIdToPos(row, col) )
    return self:FlyToGrid(targetRow, targetCol, flyMoveType)
end
function Article:FlyFromPosition(position, row, col, flyMoveType)
    self:SetAnchoredPos(position)
    return self:FlyToGrid(row, col, flyMoveType)
end

--- 是否可以双倍点击
function Article:CanDouble()
    if self:GetItemArticleType() == TwoMergeConfig.ArticleType.Generator then
        local config = AppServices.Meta:Category("MergeTwoItemGenerateTemplate")[self:GetItemId()]
        return config ~= nil and config.canDouble == 1
    end
    return false
end

--- 选中状态
function Article:ChooseItem(positionId)
    local isChoose = self:GetPositionId() == positionId
    if self.lastChoose ~= isChoose then
        self.lastChoose = isChoose
        self:NotifySelf(TwoMergeConfig.ArticleEventKey.ChooseChanged)
    end
    self:RefreshChoose()
end

function Article:RefreshChoose()
    --- 拖拽中  不显示选中框
    local isDraging = OperationLogic:IsDraging()
    local isMoving = self:IsMoving()
    local show = self:IsChoose() and (not isDraging) and (not isMoving)
    self.articleView:SetChooseImgShow(show)
end

function Article:IsChoose() return self.lastChoose or false end
--- 正在进行动画
function Article:SetAniTime(time)
    local img = self.articleView:GetEmptyImage()
    img.raycastTarget = false
    self.isAni = true
    -- 疑似 WaitExtension.SetTimeout 耗时严重先替换成下面 GameUtil.DoAnchorPosY 测试一下
    -- WaitExtension.SetTimeout(function()
    --     self.isAni = false
    --     if not Runtime.CSNull(img) then
    --         self:RefreshChoose()
    --         img.raycastTarget = true
    --     end
    -- end, time)

    local function onSet(val) end
    DOTween.To(onSet, 0, 10, time):OnComplete(function()
        self.isAni = false
        if not Runtime.CSNull(img) then
            self:RefreshChoose()
            img.raycastTarget = true
        end
    end)
end

function Article:SetCanvasOrder(time)
    -- x时间未改变过  则从最低order = 1开始
    local servertime = TimeUtil.ServerTime()
    if servertime - lastChangeSortingOrder >= 2 then
        curorder = 0
    end
    lastChangeSortingOrder = servertime
    curorder = curorder + 1

    self:ClearCanvas()
    local rect = self:GetAniRect()
    self.canvas = rect.gameObject:AddComponent(typeof(Canvas))

    self.canvas.overrideSorting = true
    self.canvas.sortingLayerName = CONST.MAINUI.LAYERS.BASIC_UI
    self.canvas.sortingOrder = curorder -- 拖尾特效为0 到挡住拖尾特效
    WaitExtension.SetTimeout(function() self:ClearCanvas() end, time)
end
function Article:ClearCanvas()
    if self.canvas ~= nil then
        if not Runtime.CSNull(self.canvas) then
            GameObject.Destroy(self.canvas)
        end
        self.canvas = nil
    end
end

function Article:IsMoving() return self.isAni or false end

function Article:DoBubbleAni()
    -- if oldState == TwoMergeConfig.ArticleState.Bubble and state == TwoMergeConfig.ArticleState.Unlock then
    local row, col = self:GetRowCol()
    local root = AppServices.TwoMergeManager:GetArticleParent()
    AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_qipao_po", 2, TwoMergeConfig.GridIdToPos(row, col), root, 0.2)
    local time = self:DOAni(TwoMergeConfig.TweenType.GenerateCreate)
    AppServices.TwoMergeManager:PlayEffectDelay("effect_erhe_open", 2, TwoMergeConfig.GridIdToPos(row, col), root, 0.7)
    -- end
    return time
end

function Article:SetDelete()
    local deletetime = 0
    if self:GetCurrentStateType() == TwoMergeConfig.ArticleState.Bubble then
        deletetime = self:DoBubbleAni()
    else
        deletetime = self:DOAni(TwoMergeConfig.TweenType.Delete)
    end
    self.isdelete = true
    return deletetime
end
function Article:IsDelete() return self.isdelete or false end

function Article:DoUnlock(delay)
    self:RefreshShow()
    local rect = self.articleView:GetAniRect()
    rect.localScale = Vector3.zero
    rect:DOScale(1, 0.3):SetDelay(delay)
    self.articleView.lock.transform.localScale = Vector3.zero
    self.articleView.lock.transform:DOScale(1, 0.3):SetDelay(delay)
end

function Article:ReleaseDelay(delay)
    local time = self:DOAni(TwoMergeConfig.TweenType.Delete)
    self:SetAniTime(time)
    WaitExtension.SetTimeout(function()
        self:Release()
    end, time)
end

function Article:Release()
    self.stateMachine:OnExit()
    self.stateMachine = nil
    self.articleAnimation:Release()
    self.articleView:Release()
end

return Article