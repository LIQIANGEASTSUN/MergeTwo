
---@type ArticleNull
local ArticleNull = require "UI.TwoMergePanel.View.UI.ArticleInfo.ArticleNull"
---@type ArticleDeepLock
local ArticleDeepLock = require "UI.TwoMergePanel.View.UI.ArticleInfo.ArticleDeepLock"
---@type ArticleLock
local ArticleLock = require "UI.TwoMergePanel.View.UI.ArticleInfo.ArticleLock"
---@type ArticleUnlock
local ArticleUnlock = require "UI.TwoMergePanel.View.UI.ArticleInfo.ArticleUnlock"
---@type ArticleBubble
local ArticleBubble = require "UI.TwoMergePanel.View.UI.ArticleInfo.ArticleBubble"
---@type TwoMergeConfig
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@type UndoLogic
local UndoLogic =  require ("Game.TwoMerge.Logic.UndoLogic")
---@type OperationLogic
local OperationLogic =  require ("Game.TwoMerge.Logic.OperationLogic")
---@type GenerateLogic
local GenerateLogic = require "Game.TwoMerge.Logic.GenerateLogic"
---@type TutorialLogic
local TutorialLogic = require "Game.TwoMerge.Logic.TutorialLogic"
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"

---@class SelectArticleInfo
local SelectArticleInfo = {}

function SelectArticleInfo:Init(infoRoot)
    self.root = infoRoot
    self.rect = find_component(self.root, "", RectTransform)
    self.icon = find_component(self.root, "icon", Image)
    self.text_name = find_component(self.root, "text_name", Text)
    self.text_level = find_component(self.root, "text_level", Text)
    self.text_des = find_component(self.root, "text_des", Text)
    self.btn_delete = find_component(self.root, "btn_delete", Button)
    Util.UGUI_AddButtonListener(self.btn_delete, function() self:OnClickDelete() end)
    self.btn_illustrated = find_component(self.root, "btn_illustrated", Button)
    Util.UGUI_AddButtonListener(self.btn_illustrated, function() self:OnClickIllustrated() end)

    -- 克隆
    self.bubbleroot = find_component(self.root, "bubbleroot")
    self.txt_bubble_cd = find_component(self.root, "bubbleroot/btn_bubble_unlock/txt_bubble_cd", Text)
    self.txt_bubble_price = find_component(self.root, "bubbleroot/btn_bubble_unlock/txt_bubble_price", Text)
    self.icon_bubble_cost = find_component(self.root, "bubbleroot/btn_bubble_unlock/icon_bubble_cost", Image)
    self.btn_bubble_unlock = find_component(self.root, "bubbleroot/btn_bubble_unlock", Button)
    Util.UGUI_AddButtonListener(self.btn_bubble_unlock, function() self:OnClickBubbleUnlock() end)

    -- 生成器
    self.generatorroot = find_component(self.root, "generatorroot")
    self.txt_generator_cd = find_component(self.root, "generatorroot/txt_generator_cd", Text)
    self.txt_generator_price = find_component(self.root, "generatorroot/btn_generator_speedup/txt_generator_price", Text)
    self.icon_generator_cost = find_component(self.root, "generatorroot/btn_generator_speedup/icon_generator_cost", Image)
    self.btn_generator_speedup = find_component(self.root, "generatorroot/btn_generator_speedup", Button)
    Util.UGUI_AddButtonListener(self.btn_generator_speedup, function() self:OnClickGeneratorSpeedUp() end)

    -- 撤消
    self.undoroot = find_component(self.root, "undoroot")
    self.btn_undo = find_component(self.root, "undoroot/btn_undo", Button)
    Util.UGUI_AddButtonListener(self.btn_undo, function() self:OnClickUndo() end)

    -- 减cd道具
    self.cditemroot = find_component(self.root, "cditemroot")
    self.txt_remaintime = find_component(self.root, "cditemroot/txt_remaintime", Text)

    -- 自选宝箱
    self.selectchestroot = find_component(self.root, "selectchestroot")
    self.btn_selectchest = find_component(self.root, "selectchestroot/btn_selectchest", Button)
    Util.UGUI_AddButtonListener(self.btn_selectchest, function() self:OnClickSelectChest() end)

    self.stateMap = {
        [TwoMergeConfig.ArticleState.Unlock] = ArticleUnlock,
        [TwoMergeConfig.ArticleState.Lock] = ArticleLock,
        [TwoMergeConfig.ArticleState.DeepLock] = ArticleDeepLock,
        [TwoMergeConfig.ArticleState.Bubble] = ArticleBubble,
    }

    self:AddListener()

    self:Refresh() -- 首次进入 未选中状态
end

function SelectArticleInfo:GetArticle() return self.article end

--- 设置选中
function SelectArticleInfo:SetSelect(positionId)
    self.positionId = positionId
    self.row, self.col = TwoMergeConfig.Decode(self.positionId)
    self:Refresh()
end

--- Article被删除
function SelectArticleInfo:OnArticleDelete(row, col)
    if row == self.row and col == self.col then
        self.positionId = nil; self.row = nil; self.col = nil
        self:Refresh()
    end
end

function SelectArticleInfo:OnArticleAdd(row, col)
    --- 撤消处理  添加 与 撤消 为同一格子
    local undoRow, undoCol = UndoLogic.NextRowCol()
    if row == undoRow and col == undoCol then
        self:Refresh()
    end
end

function SelectArticleInfo:OnArticleMove(oldrow, oldcol, newrow, newcol)
    if newrow == self.row and newcol == self.col then self:Refresh() end
end

--- 刷新数据
function SelectArticleInfo:Refresh()
    --- 清空上次信息
    self:Clear()

    --- 检测撤消
    if self:CheckUndo() then return end
    --- 当前位置Id为空
    if self.positionId == nil then ArticleNull:Refresh(self); return end
    --- article为空
    self.article = AppServices.TwoMergeMapGridManager:FindItemArticle(self.row, self.col)
    if self.article == nil then ArticleNull:Refresh(self); return end

    self.config = self.article:GetConfig()
    local state = self.stateMap[self.article:GetCurrentStateType()]
    state:Refresh(self)
end

------------------------------ >>> 基础信息 <<< ------------------------------
function SelectArticleInfo:SetIcon(name, show)
    if show then self.icon.sprite = AppServices.ItemIcons:GetSpriteByName(name) end
    self.icon.gameObject:SetActive(show)
end

function SelectArticleInfo:SetName(key, level, show)
    if show then
        self.text_name.text = Runtime.Translate(key)
        self.text_level.text = "(Lv. "..tostring(level)..")"
    end
    self.text_name.gameObject:SetActive(show)
    self.text_level.gameObject:SetActive(show)
end

function SelectArticleInfo:SetDes(key, show)
    if show then self.text_des.text = Runtime.Translate(key) end
    self.text_des.gameObject:SetActive(show)
end

------------------------------ >>> 生成器 <<< ------------------------------
function SelectArticleInfo:SetGeneratorInfo(show, itemId, price)
    self.generatorroot:SetActive(show)
    if show then
        self.txt_generator_price.text = tostring(price)
        self.icon_generator_cost.sprite = AppServices.ItemIcons:GetSprite(itemId)
    end
end
function SelectArticleInfo:SetGeneratorCD(time, price)
    self.txt_generator_cd.text = TimeUtil.SecToHMS(time)
    self.txt_generator_price.text = tostring(price)
end
function SelectArticleInfo:OnClickGeneratorSpeedUp()
    if self.article == nil then return end
    local id, count = GenerateLogic.GetCost(self.article)
    local mapId = AppServices.TwoMergeMapGridManager:GetMapId()
    if AppServices.TwoMergeManager:GetItemAmount(mapId, id) >= count then
        AppServices.TwoMergeManager:RemoveItem(mapId, id, count, ItemUseMethod.TwoMergeGeneratorSpeedUp)
        MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Opera_Generator_Speedup, self.article:GetRowCol())
        self:Refresh()
    else
        --UITool.ShowContentTipAni(Runtime.Translate("UI_team_flowtips1"))
        MergeUtil.CurrencyNotEnough(tostring(id))
    end
end

------------------------------ >>> 售卖 <<< ------------------------------
function SelectArticleInfo:SetSaleShow(show, itemId, price) end

------------------------------ >>> 删除 <<< ------------------------------
function SelectArticleInfo:SetDeleteShow(show)
    self.btn_delete.gameObject:SetActive(show)
end
function SelectArticleInfo:OnClickDelete()
    if TutorialLogic.IsRunning() then return end

    if self.article == nil or self.article:IsDelete() then return end
    local row, col = self.article:GetRowCol()
    local data = self.article:GetItemData()
    local state = self.article:GetCurrentStateType()
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Opera_Delete, row, col)
    OperationLogic:ClearSelect()
    if state == TwoMergeConfig.ArticleState.Unlock then
        UndoLogic.Push(row, col, data)
    end
    self:Refresh()
end

------------------------------ >>> 撤消 <<< ------------------------------
function SelectArticleInfo:OnClickUndo()
    if UndoLogic.CanPop() then
        UndoLogic.Pop()
        self:Refresh()
    end
end
function SelectArticleInfo:CheckUndo()
    local hasNext = UndoLogic.HasNext()
    self.undoroot:SetActive(hasNext)
    return hasNext
end

------------------------------ >>> 自选宝箱 <<< ------------------------------
function SelectArticleInfo:SetSelectChestShow(show)
    self.selectchestroot:SetActive(show)
end
function SelectArticleInfo:OnClickSelectChest()
    self.article:NotifySelf(TwoMergeConfig.ArticleEventKey.Click)
end

------------------------------ >>> 图鉴 <<< ------------------------------
function SelectArticleInfo:SetIllustratedShow(show)
    self.btn_illustrated.gameObject:SetActive(show)
end
function SelectArticleInfo:OnClickIllustrated()
    if TutorialLogic.IsRunning() then return end
    PanelManager.showPanel( GlobalPanelEnum.TwoMergeBestiaryPanel,{id = self.article:GetItemId()})
end

------------------------------ >>> 克隆气泡 <<< ------------------------------
function SelectArticleInfo:SetBubbleUnlockShow(show, itemId, price)
    self.bubbleroot:SetActive(show)
    if show then
        self.txt_bubble_price.text = tostring(price)
        self.icon_bubble_cost.sprite = AppServices.ItemIcons:GetSprite(itemId)
    end
end

function SelectArticleInfo:SetBubbleCD(time) self.txt_bubble_cd.text = TimeUtil.SecToHMS(time) end
function SelectArticleInfo:OnClickBubbleUnlock()
    if TutorialLogic.IsRunning() then return end
    if self.article == nil or self.article:IsDelete() then return end
    self.article:NotifySelf(TwoMergeConfig.ArticleEventKey.TriggerCloneUnlock)
end
------------------------------ >>> 减cd道具 <<< ------------------------------
function SelectArticleInfo:CDItem_Set(show, time)
    self.cditemroot:SetActive(show)
    self.txt_remaintime.text = TimeUtil.SecToHMS(time)
end
------------------------------ >>> 手指按下 <<< ------------------------------
function SelectArticleInfo:OnDown(gestureData)
    -- local anchored = GameUtil.ScreenToUISpace(self.btn_sale_cancel.transform, gestureData.position)

    -- local sizeRect = self.btn_sale_cancel.transform.rect
    -- if    anchored.x < sizeRect.width * -0.5
    --    or sizeRect.width * 0.5 < anchored.x
    --    or anchored.y < sizeRect.height * -0.5
    --    or sizeRect.height * 0.5 < anchored.y
    -- then
    --     self:CloseCancel()
    -- end
end

function SelectArticleInfo:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.TwoMergeArticleSelect, self.SetSelect, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Delete, self.OnArticleDelete, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Move, self.OnArticleMove, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Info_Refresh, self.Refresh, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Article_Add, self.OnArticleAdd, self)
end

function SelectArticleInfo:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.TwoMergeArticleSelect, self.SetSelect, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Delete, self.OnArticleDelete, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Move, self.OnArticleMove, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Info_Refresh, self.Refresh, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Article_Add, self.OnArticleAdd, self)
end

function SelectArticleInfo:Clear()
    for _, v in pairs(self.stateMap) do if v.Clear then v:Clear() end end
    self:SetGeneratorInfo(false)
    self:CDItem_Set(false)
end

function SelectArticleInfo:Destroy()
    self:RemoveListener()
    for _, v in pairs(self.stateMap) do
        if v.Destroy then v:Destroy() end
    end
end

return SelectArticleInfo