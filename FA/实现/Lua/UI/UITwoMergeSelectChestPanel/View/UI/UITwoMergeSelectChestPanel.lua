--insertWidgetsBegin
--insertWidgetsEnd

--insertRequire
local _UITwoMergeSelectChestPanelBase = require "UI.UITwoMergeSelectChestPanel.View.UI.Base._UITwoMergeSelectChestPanelBase"
local SelectChestItem = require "UI.UITwoMergeSelectChestPanel.View.UI.SelectChestItem"
local MergeUtil = require "Game.TwoMerge.MergeUtil.MergeUtil"

---@class UITwoMergeSelectChestPanel:_UITwoMergeSelectChestPanelBase
local UITwoMergeSelectChestPanel = class(_UITwoMergeSelectChestPanelBase)

function UITwoMergeSelectChestPanel:ctor()
    self.items ={}
end

function UITwoMergeSelectChestPanel:onAfterBindView()
    self.id = self.arguments.id
    self.callback = self.arguments.callback
    self.DataList = MergeUtil.GetSelectChestItem(self.id)
    self.title.text = Runtime.Translate("merge_box_01")
    self.desc.text = Runtime.Translate("merge_box_02")
    self.btnTxt.text = Runtime.Translate("merge_box_03")
    Util.UGUI_AddButtonListener(self.btnOk,function()
        self:ChooseBox()
    end)
    self:refreshUI()
end

function UITwoMergeSelectChestPanel:refreshUI()
    if #self.DataList <= 3 then
        local emptyObj = GameObject.Instantiate(self.emptyItem,self.GridContent)
        local emptyItem = SelectChestItem:CreateWithGameObject(emptyObj, self)
    end
    for i = 1, #self.DataList do
        local obj = GameObject.Instantiate(self.boxItem,self.GridContent)
        local item = SelectChestItem:CreateWithGameObject(obj, self)
        item:SetData(i, self.DataList[i])
        table.insert(self.items, item)
    end
end

function UITwoMergeSelectChestPanel:ClickBox(id)
    --选择宝箱 id
    self.ChooseId = id
    self:ChooseBoxItem(id)
end

function UITwoMergeSelectChestPanel:ChooseBoxItem(id)
    for i = 1, #self.items do
        self.items[i]:ChooseBoxItem(id)
    end
end

function UITwoMergeSelectChestPanel:ChooseBox()
    if self.ChooseId == nil or tonumber(self.ChooseId) <= 0 then
        UITool.ShowContentTipAni(Runtime.Translate("merge_system_22"))
        PanelManager.closePanel(GlobalPanelEnum.UITwoMergeSelectChestPanel)
        return
    end
    if self.callback ~= nil then
        Runtime.InvokeCbk(self.callback(self.ChooseId))
    end
    PanelManager.closePanel(GlobalPanelEnum.UITwoMergeSelectChestPanel)
end

function UITwoMergeSelectChestPanel:destroy()
    _UITwoMergeSelectChestPanelBase.destroy(self)
end

return UITwoMergeSelectChestPanel
