require "UI.TwoMergeShopPanel.UITwoMergeShopPanelNotificationEnum"
local UITwoMergeShopPanelProxy = require "UI.TwoMergeShopPanel.Model.UITwoMergeShopPanelProxy"

local UITwoMergeShopPanelMediator = MVCClass('UITwoMergeShopPanelMediator', BaseMediator)

---@type UITwoMergeShopPanel
local panel
local proxy

function UITwoMergeShopPanelMediator:ctor(...)
	UITwoMergeShopPanelMediator.super.ctor(self,...)
	proxy = UITwoMergeShopPanelProxy.new()
end

function UITwoMergeShopPanelMediator:onRegister()
end

function UITwoMergeShopPanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function UITwoMergeShopPanelMediator:listNotificationInterests()
	return
	{
		--insertNotificationNames
	}
end

function UITwoMergeShopPanelMediator:handleNotification(notification)

	local name = notification:getName()
	-- local type = notification:getType() -- uncomment if need by yourself
	-- local body = notification:getBody() --message data  uncomment if need by yourself
	--insertHandleNotificationNames
end

-- function UITwoMergeShopPanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

-- function UITwoMergeShopPanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
-- end

-- function UITwoMergeShopPanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function UITwoMergeShopPanelMediator:onAfterShowPanel()
-- 	--在第一次显示之后，此时visible=true。
-- end

-- function UITwoMergeShopPanelMediator:onBeforeHidePanel()
-- 	--在被隐藏之前(FadeOut开始前)，此时visible=true。
-- end
 function UITwoMergeShopPanelMediator:onAfterHidePanel()
 	--在被隐藏之后(FadeOut完成后)，此时visible=false。
	 panel:OnHide()
 end

-- function UITwoMergeShopPanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function UITwoMergeShopPanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

-- function UITwoMergeShopPanelMediator:onBeforeDestroyPanel()
-- 	--在被销毁之前，此时visible=false。
-- end

-- function UITwoMergeShopPanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function UITwoMergeShopPanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

-- function UITwoMergeShopPanelMediator:onUpdatePerSecond()
-- 	panel:onUpdatePerSecond()
-- end

return UITwoMergeShopPanelMediator
