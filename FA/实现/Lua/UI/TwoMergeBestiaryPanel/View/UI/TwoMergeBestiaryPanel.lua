--insertWidgetsBegin
--insertWidgetsEnd

--insertRequire
local _TwoMergeBestiaryPanelBase = require "UI.TwoMergeBestiaryPanel.View.UI.Base._TwoMergeBestiaryPanelBase"
local TwoMergeConfig = require "Game.TwoMerge.Config.TwoMergeConfig"
local MergeBestiaryItem = require "UI.TwoMergeBestiaryPanel.View.UI.MergeBestiaryItem"
--生产者
local MergeBestiaryGeneratorItem = require "UI.TwoMergeBestiaryPanel.View.UI.MergeBestiaryGeneratorItem"
--被生产者生产出的
local MergeBestiaryGenerateItem = require "UI.TwoMergeBestiaryPanel.View.UI.MergeBestiaryGenerateItem"

---@class TwoMergeBestiaryPanel:_TwoMergeBestiaryPanelBase
local TwoMergeBestiaryPanel = class(_TwoMergeBestiaryPanelBase)

function TwoMergeBestiaryPanel:ctor()
    self.MergeItemFunctions = {}
    self._MergeBestiaryGeneratorItems = {}
    self._generateSuchItems = {}
    self._generateNextSuchItems = {}
end

function TwoMergeBestiaryPanel:onAfterBindView()
    self.animator = self.gameObject:GetComponent("Animator")
    self:InitUI()
end

function TwoMergeBestiaryPanel:refreshUI()

end

function TwoMergeBestiaryPanel:OnHide()
    self:Dispose()
end

function TwoMergeBestiaryPanel:Dispose()
    self.MergeItemFunctions = {}
    self._MergeBestiaryGeneratorItems = {}
    self._generateSuchItems = {}
    self._generateNextSuchItems = {}
end

-----------------------**自定义方法**------------------------
----初始化界面
function TwoMergeBestiaryPanel:InitUI()
    self:RefreshUI(self.arguments.id,self.arguments.isCanShowFind)
end

function TwoMergeBestiaryPanel:RefreshUI(id,isCanShowFind)
    self.orderId = self.arguments.orderId
    self.id = tostring(id)
    self.findItemTip = isCanShowFind and true or false
    AppServices.TwoMergeMapGridManager:SetCurOpenId(self.id,self.findItemTip)
    self.cfg = AppServices.Meta:Category("MergeTwoItemTemplate")[self.id]
    local _name = self.cfg.name
    self.Text_title.text = Runtime.Translate(_name)
    self.Text_LevelDes.text = Runtime.Translate("merge_collection_01")
    self.Text_GeneratorDes.text = Runtime.Translate("merge_collection_02")
    self.Text_GenerateDes.text = Runtime.Translate("merge_collection_03")
    self.Text_NextGenerateDes.text = Runtime.Translate("merge_collection_04")
    self.type = self.cfg.type
    self:GenerateMergeItem()
    self.ShowGenerateItemRoot.gameObject:SetActive(false)
    self.ShowNextGenerateItemRoot.gameObject:SetActive(false)
    self.ShowGeneratorRoot.gameObject:SetActive(self.type == TwoMergeConfig.ArticleType.Normal)
    if self.type == TwoMergeConfig.ArticleType.Normal then
        self:GenerateNormalItem()
    elseif self.type == TwoMergeConfig.ArticleType.Generator or
            self.type == TwoMergeConfig.ArticleType.NormalChest or
            self.type == TwoMergeConfig.ArticleType.SelectChest or
            self.type == TwoMergeConfig.ArticleType.AutoGenerator
    then
        self:GenerateGeneratorItem()
    end
    self:ShowRoot()
    self.btnFind.gameObject:SetActive(self.findItemTip)
    WaitExtension.SetTimeout(
            function()
                CS.UnityEngine.UI.LayoutRebuilder.ForceRebuildLayoutImmediate(self.content)
            end, 0.1
    )
    Util.UGUI_AddButtonListener(self.btn_close, function(go)
        self:OnCloseNext(self.id)
    end)
    
    Util.UGUI_AddButtonListener(self.btnFind,function()
        self:OnClickFind()
    end)
end

function TwoMergeBestiaryPanel:ShowRoot()
   
end

--生成道具图鉴
function TwoMergeBestiaryPanel:GenerateMergeItem()
    local list = AppServices.TwoMergeMapGridManager:GetMergeItemInfoMap(self.id)
    if #self.MergeItemFunctions < #list then
        local _count = #list - #self.MergeItemFunctions
        for i = 1, _count do
            local obj = GameObject.Instantiate(self.GameObject_MergeItem, self.mergeItemRoot)
            local item = MergeBestiaryItem:CreateWithGameObject(obj, self)
            table.insert(self.MergeItemFunctions, item)
        end
    end
    for i = 1, #self.MergeItemFunctions do
        local item = self.MergeItemFunctions[i]
        item.gameObject:SetActive(i <= #list)
        if i <= #list then
            item:SetData(i, list[i], #list, self.id)
        end
    end
    self.ShowMergeItem.gameObject:SetActive(true)
end

--生成普通道具图鉴的附加
function TwoMergeBestiaryPanel:GenerateNormalItem()
    local _groupId = self.cfg.groupId
    local id = AppServices.TwoMergeMapGridManager:GetGenerateMergeChainItemId(_groupId)
    --for i = 1, #list do
    if id == "" then
        local emptyObj = find_component(self.ShowGeneratorItemRoot, "Empty")
        if not Runtime.CSNull(emptyObj) then
            emptyObj.gameObject:SetActive(true)
            local btnTip =  find_component(emptyObj,"btnTips")
            local generatorId = AppServices.TwoMergeMapGridManager:GetCurIdGeneratorId(self.cfg.groupId)
            --console.error("generatorId == "..generatorId..",self.cfg.groupId == "..self.cfg.groupId)
            btnTip.gameObject:SetActive(generatorId ~= nil)
            self.ShowGeneratorRoot.gameObject:SetActive(generatorId ~= nil)
            if generatorId then
                Util.UGUI_AddButtonListener(btnTip,function()
                    self:OnOpenNext(generatorId)
                end)
            end
        end
        if self._MergeBestiaryGeneratorItems[1] then
            self._MergeBestiaryGeneratorItems[1].gameObject:SetActive(false)
        end
        return
    end
    self.ShowGeneratorRoot.gameObject:SetActive(self.type == TwoMergeConfig.ArticleType.Normal)
    if #self._MergeBestiaryGeneratorItems == 0 then
        local obj = GameObject.Instantiate(self.GameObject_GeneratorItem, self.ShowGeneratorItemRoot)
        local item = MergeBestiaryGeneratorItem:CreateWithGameObject(obj, self)
        table.insert(self._MergeBestiaryGeneratorItems, item)
        table.insert(self._MergeBestiaryGeneratorItems, item)
    end

    self._MergeBestiaryGeneratorItems[1]:SetData(1, id)
    self._MergeBestiaryGeneratorItems[1].gameObject:SetActive(true)

    --end
end

--生成生成器图鉴的附加
function TwoMergeBestiaryPanel:GenerateGeneratorItem()
    self.ShowGenerateItemRoot.gameObject:SetActive(self.type == TwoMergeConfig.ArticleType.Generator or self.type == TwoMergeConfig.ArticleType.AutoGenerator
            or self.type == TwoMergeConfig.ArticleType.NormalChest or self.type == TwoMergeConfig.ArticleType.SelectChest)
    self.ShowNextGenerateItemRoot.gameObject:SetActive(self.type == TwoMergeConfig.ArticleType.Generator or self.type == TwoMergeConfig.ArticleType.AutoGenerator
            or self.type == TwoMergeConfig.ArticleType.NormalChest or self.type == TwoMergeConfig.ArticleType.SelectChest)
    local list, isShow = AppServices.TwoMergeMapGridManager:GetCurItemGenerateList(self.id)
    if not isShow then
        self.ShowGenerateItemRoot.gameObject:SetActive(false)
        self.ShowNextGenerateItemRoot.gameObject:SetActive(false)
        return
    end
    self.ShowGenerateScroll.enabled = #list >= 6

    local _count = #list - #self._generateSuchItems
    if _count > 0 then
        for i = 1, _count do
            local obj = GameObject.Instantiate(self.GameObject_GenerateItem, self.ShowGenerateItemSuchRoot)
            local item = MergeBestiaryGenerateItem:CreateWithGameObject(obj, self)
            table.insert(self._generateSuchItems, item)
        end
    end
    for i = 1, #self._generateSuchItems do
        local item = self._generateSuchItems[i]
        item.gameObject:SetActive(i <= #list)
        if i <= #list then
            item:SetData(i, list[i])
        end
    end

    local _list = AppServices.TwoMergeMapGridManager:GetMergeChainGenerateItem(self.id)
    if #_list == 0 then
        self.ShowNextGenerateItemRoot.gameObject:SetActive(false)
        return
    end

    local _countEx = #_list - #self._generateNextSuchItems
    self.ShowNextGenerateScroll.enabled = #_list > 5

    if _countEx > 0 then
        for i = 1, _countEx do
            local obj = GameObject.Instantiate(self.GameObject_GenerateItem, self.ShowNextGenerateItemSuchRoot)
            local item = MergeBestiaryGenerateItem:CreateWithGameObject(obj, self)
            table.insert(self._generateNextSuchItems, item)
        end
    end
    for i = 1, #self._generateNextSuchItems do
        local item = self._generateNextSuchItems[i]
        item.gameObject:SetActive(i <= #_list)
        if i <= #_list then
            item:SetData(i, _list[i])
        end
    end
end

-----------------------**响应事件**------------------------
function TwoMergeBestiaryPanel:OnOpenNext(id,findItemTip, isShow)
    self:RefreshUI(id,findItemTip)
    isShow = isShow == nil and true or false
    if isShow and self.animator then
        self.animator.gameObject:SetActive(false)
        self.animator.gameObject:SetActive(true)
    end
end

function TwoMergeBestiaryPanel:OnCloseNext()
    local _nextId = AppServices.TwoMergeMapGridManager:OnCloseBestiary(self.id)
    if _nextId ~= 0 then
        self:OnOpenNext(_nextId.panelId, _nextId.findItemTip, 1)
    else
        self:OnClose()
    end
end

function TwoMergeBestiaryPanel:OnClose()
    PanelManager.closePanel(GlobalPanelEnum.TwoMergeBestiaryPanel)
end

function TwoMergeBestiaryPanel:OnClickFind()
    PanelManager.closePanel(GlobalPanelEnum.TwoMergeBestiaryPanel)
    AppServices.TwoMergeMapGridManager:ClearBestiary()
    MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_Bestiary_Jump,self.id, self.orderId)
end

return TwoMergeBestiaryPanel     
