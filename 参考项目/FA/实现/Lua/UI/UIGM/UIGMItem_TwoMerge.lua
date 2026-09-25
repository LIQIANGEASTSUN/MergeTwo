local UIGMItem_TwoMerge = class(nil, "UIGMItem_TwoMerge")

local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
local TidyLogic = require "Game.TwoMerge.Logic.TidyLogic"
local AutoMergeLogic = require "Game.TwoMerge.Logic.AutoMergeLogic"
local HostingLogic = require "Game.TwoMerge.Logic.HostingLogic"
local DataPack = require("Game.TwoMerge.DataPack.DataPack")
local SequenceAnimationLogic = require("Game.TwoMerge.Logic.SequenceAnimationLogic")
local TwoMergeJumpLogic = require("Game.TwoMerge.Logic.TwoMergeJumpLogic")
local MergeConfigUtil = require("Game.TwoMerge.MergeUtil.MergeConfigUtil")
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")
local TwoMergeOrderLogic = require("Game.TwoMerge.Order.TwoMergeOrderLogic")

function UIGMItem_TwoMerge:ctor(gameObject)
    self.gameObject = gameObject
    self:Bind()
end
function UIGMItem_TwoMerge:destroy() end
function UIGMItem_TwoMerge:OnShow() end

function UIGMItem_TwoMerge:Bind()
    self.gmroot = find_component(self.gameObject, "view/content")
    self.input_row = find_component(self.gmroot, "input_row", typeof(CS.UnityEngine.UI.InputField))
    self.input_col = find_component(self.gmroot, "input_col", typeof(CS.UnityEngine.UI.InputField))
    self.input_row.text = "4"; self.input_col.text = "5"
    self.input_itemId = find_component(self.gmroot, "input_itemId", typeof(CS.UnityEngine.UI.InputField))
    self.btn_gmadd = find_component(self.gmroot, "btn_gmadd")
    Util.UGUI_AddButtonListener(self.btn_gmadd, function() self:OnClick_btn_gmadd() end)
    self.btn_gmaddlink = find_component(self.gmroot, "btn_gmaddlink")
    Util.UGUI_AddButtonListener(self.btn_gmaddlink, function() self:OnClick_btn_gmaddlink() end)
    self.btn_sync = find_component(self.gmroot, "btn_sync")
    Util.UGUI_AddButtonListener(self.btn_sync, function() self:OnClick_btn_sync() end)
    self.btn_load = find_component(self.gmroot, "btn_load")
    Util.UGUI_AddButtonListener(self.btn_load, function() self:OnClick_btn_load() end)
    self.btn_request = find_component(self.gmroot, "btn_request")
    Util.UGUI_AddButtonListener(self.btn_request, function() self:OnClick_btn_request() end)
    self.btn_gmremove = find_component(self.gmroot, "btn_gmremove")
    Util.UGUI_AddButtonListener(self.btn_gmremove, function() self:OnClick_btn_gmremove() end)
    self.btn_gmfind = find_component(self.gmroot, "btn_gmfind")
    Util.UGUI_AddButtonListener(self.btn_gmfind, function() self:OnClick_btn_find() end)
    self.btn_gmbubble = find_component(self.gmroot, "btn_gmbubble")
    Util.UGUI_AddButtonListener(self.btn_gmbubble, function() self:OnClick_btn_gmbubble() end)
    self.btn_gmsort = find_component(self.gmroot, "btn_gmsort")
    Util.UGUI_AddButtonListener(self.btn_gmsort, function() self:OnClick_btn_gmsort() end)
    self.btn_gmmerge = find_component(self.gmroot, "btn_gmmerge")
    Util.UGUI_AddButtonListener(self.btn_gmmerge, function() self:OnClick_btn_gmmerge() end)
    self.btn_gmhosting = find_component(self.gmroot, "btn_gmhosting")
    Util.UGUI_AddButtonListener(self.btn_gmhosting, function() self:OnClick_btn_gmhosting() end)
    self.btn_gmremoveall = find_component(self.gmroot, "btn_gmremoveall")
    Util.UGUI_AddButtonListener(self.btn_gmremoveall, function() self:OnClick_btn_gmremoveall() end)
    self.btn_gmlogorder = find_component(self.gmroot, "btn_gmlogorder")
    Util.UGUI_AddButtonListener(self.btn_gmlogorder, function() self:OnClick_btn_gmlogorder() end)
    find_component(self.gmroot, "btn_gmhosting/startup"):SetActive(true)
    find_component(self.gmroot, "btn_gmhosting/stop"):SetActive(false)
    self.btn_gmani = find_component(self.gmroot, "btn_gmani")
    Util.UGUI_AddButtonListener(self.btn_gmani, function() self:OnClick_btn_gmani() end)
    self.btn_sendmainorderitem = find_component(self.gmroot, "btn_sendmainorderitem")
    Util.UGUI_AddButtonListener(self.btn_sendmainorderitem, function() self:OnClick_btn_sendmainorderitem() end)
    find_component(self.gmroot, "btn_gmani/startup"):SetActive(true)
    find_component(self.gmroot, "btn_gmani/stop"):SetActive(false)
end

function UIGMItem_TwoMerge:OnClick_btn_gmadd()
    local itemId = self.input_itemId.text
    if itemId ~= nil then

        local row, col = 0, 0
        if not string.isEmpty(self.input_row.text) then
            row = tonumber(self.input_row.text)
        else
            self.input_row.text = "4"
            row = 4
        end
        if not string.isEmpty(self.input_col.text) then
            col = tonumber(self.input_col.text)
        else
            self.input_col.text = "5"
            col = 5
        end
        return self:GMAdd(itemId, row, col)
    end
end
function UIGMItem_TwoMerge:OnClick_btn_gmaddlink()
    local itemId = self.input_itemId.text
    if itemId ~= nil then
        local config = AppServices.TwoMergeManager:GetItemConfig()
        local thisConfig = config[itemId]
        for _, v in pairs(config) do
            if thisConfig.groupId == v.groupId then
                self:GMAdd(v.id, 4, 5)
            end
        end
    end
end
function UIGMItem_TwoMerge:GMAdd(itemId, row, col)
    local config = AppServices.TwoMergeManager:GetItemConfig()[itemId]
    if config ~= nil then

        local article = AppServices.TwoMergeMapGridManager:FindItemArticle(row, col)
        local targetRow, targetCol = nil, nil
        if article == nil then
            targetRow = row; targetCol = col
        else
            targetRow, targetCol = AppServices.TwoMergeMapGridManager:FindDropGrid(row, col)
        end
        if targetRow ~= nil then
            local itemData = DataPack.CreateItemData(itemId, targetRow, targetCol)
            local newArticle = AppServices.TwoMergeManager:CreateArticle(itemData)
            AppServices.TwoMergeMapGridManager:AddArticle(targetRow, targetCol, newArticle)

            if MergeConfigUtil.IsGeneratorLink(itemId) then
                TutorialLogic.StartUp(AppServices.TwoMergeManager:MapId(), TutorialLogic.TutorialType.Generator)
            end
            return newArticle
        end
    end
end
function UIGMItem_TwoMerge:OnClick_btn_gmbubble()
    local article = self:OnClick_btn_gmadd()
    if article then
        local cloneTime = TwoMergeConfig.GetCloneTime()
        article:ChangeState(TwoMergeConfig.ArticleState.Bubble)
        article:SetStateSpecData(TwoMergeConfig.ItemStateDataKey["end"], TimeUtil.ServerTime() + cloneTime)
        article:RefreshShow()
        local row, col = article:GetRowCol()
        AppServices.TwoMergeMapGridManager:SetItemState(row, col, TwoMergeConfig.ArticleState.Bubble)
    end
end
function UIGMItem_TwoMerge:OnClick_btn_gmsort() TidyLogic.DO_Common() end
function UIGMItem_TwoMerge:OnClick_btn_gmmerge() AutoMergeLogic.DO_Common() end
function UIGMItem_TwoMerge:OnClick_btn_gmhosting()
    local targetRunning = not HostingLogic.IsRunning()
    if targetRunning then HostingLogic.StartUp()
    else HostingLogic.Stop()
    end
    find_component(self.gmroot, "btn_gmhosting/startup"):SetActive(not targetRunning)
    find_component(self.gmroot, "btn_gmhosting/stop"):SetActive(targetRunning)
end
function UIGMItem_TwoMerge:OnClick_btn_gmremoveall()
    local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
    for _, v in pairs(list) do
        if v.itemArticle and (v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Unlock or v.itemArticle:GetCurrentStateType() == TwoMergeConfig.ArticleState.Bubble) then
            AppServices.TwoMergeMapGridManager:RemoveArticle(v.row, v.col, TwoMergeConfig.ArticleRemoveType.GM)
        end
    end
end
function UIGMItem_TwoMerge:OnClick_btn_gmani()
    local targetRunning = not SequenceAnimationLogic.IsRunning()
    if targetRunning then SequenceAnimationLogic.StartUp()
    else SequenceAnimationLogic.Stop()
    end
    find_component(self.gmroot, "btn_gmani/startup"):SetActive(not targetRunning)
    find_component(self.gmroot, "btn_gmani/stop"):SetActive(targetRunning)
end
function UIGMItem_TwoMerge:OnClick_btn_gmremove()
    local itemId = self.input_itemId.text
    if (not string.isEmpty(itemId)) and AppServices.TwoMergeManager:GetItemConfig()[itemId] ~= nil then
        local list = AppServices.TwoMergeMapGridManager:GetMapDataList()
        local removelist = {}
        for _, v in pairs(list) do
            if v.itemArticle and v.itemArticle:GetItemId() == itemId and v.itemArticle:GetItemState() == TwoMergeConfig.ArticleState.Unlock then
                table.insert(removelist, v.itemArticle:GetPositionId())
            end
        end
        for _, positionId in pairs(removelist) do
            local row, col = TwoMergeConfig.Decode(positionId)
            AppServices.TwoMergeMapGridManager:RemoveArticle(row, col, TwoMergeConfig.ArticleRemoveType.GM)
        end
    end
end
function UIGMItem_TwoMerge:OnClick_btn_sync() AppServices.TwoMergeManager:SynGridInfoRequest(AppServices.TwoMergeManager:MapId()) end
function UIGMItem_TwoMerge:OnClick_btn_load() AppServices.TwoMergeManager:GMLoadConfigMap(AppServices.TwoMergeManager:MapId()) end
function UIGMItem_TwoMerge:OnClick_btn_request() AppServices.TwoMergeManager:SetReadyRequestInfo() end
function UIGMItem_TwoMerge:OnClick_btn_gm() self.gmactive = not self.gmactive; self.gmroot:SetActive(self.gmactive) end
function UIGMItem_TwoMerge:OnClick_btn_find()
    local itemId = self.input_itemId.text
    local config = AppServices.TwoMergeManager:GetItemConfig()[itemId]
    if config ~= nil then
        local targetItemId, row, col = TwoMergeJumpLogic.GetJumpItemId(config.getWays[1], itemId)
        if targetItemId ~= nil then
            AppServices.TwoMergeManager:FindItemAndMark(AppServices.TwoMergeManager:MapId(), targetItemId)
        end
    end
end
function UIGMItem_TwoMerge:OnClick_btn_gmlogorder()
    AppServices.TwoMergeOrderManager:LogOrder()
end

function UIGMItem_TwoMerge:OnClick_btn_sendmainorderitem()
    local hasMain, order = AppServices.TwoMergeOrderManager:HasMainOrder()
    if hasMain then
        for _, v in pairs(order.itemNeedList) do
            self:GMAdd(v.itemId, 4, 5)
        end
    end

    local orders = AppServices.TwoMergeOrderManager.orderList
    if orders ~= nil then
        for _, order in pairs(orders) do
            if order.orderType ~= TwoMergeConfig.OrderType.Main then
                for _, v in pairs(order.itemNeedList) do
                    self:GMAdd(v.itemId, 4, 5)
                end
            end
        end
    end
end


return UIGMItem_TwoMerge