require "UI.UITwoMergeClonItemPanel.UITwoMergeClonItemPanelNotificationEnum"
local UITwoMergeClonItemPanelProxy = require "UI.UITwoMergeClonItemPanel.Model.UITwoMergeClonItemPanelProxy"

local UITwoMergeClonItemPanelMediator = MVCClass('UITwoMergeClonItemPanelMediator', BaseMediator)

---@type UITwoMergeClonItemPanel
local panel
local proxy

function UITwoMergeClonItemPanelMediator:ctor(...)
	UITwoMergeClonItemPanelMediator.super.ctor(self,...)
	proxy = UITwoMergeClonItemPanelProxy.new()
end

function UITwoMergeClonItemPanelMediator:onRegister() end

function UITwoMergeClonItemPanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function UITwoMergeClonItemPanelMediator:listNotificationInterests() return { } end

function UITwoMergeClonItemPanelMediator:handleNotification(notification) end

return UITwoMergeClonItemPanelMediator
