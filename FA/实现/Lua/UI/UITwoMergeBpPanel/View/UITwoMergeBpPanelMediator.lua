require "UI.UITwoMergeBpPanel.UITwoMergeBpPanelNotificationEnum"
local UITwoMergeBpPanelProxy = require "UI.UITwoMergeBpPanel.Model.UITwoMergeBpPanelProxy"

local UITwoMergeBpPanelMediator = MVCClass('UITwoMergeBpPanelMediator', BaseMediator)

---@type UITwoMergeBpPanel
local panel
local proxy

function UITwoMergeBpPanelMediator:ctor(...)
	UITwoMergeBpPanelMediator.super.ctor(self,...)
	proxy = UITwoMergeBpPanelProxy.new()
end

function UITwoMergeBpPanelMediator:onRegister()
end

function UITwoMergeBpPanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function UITwoMergeBpPanelMediator:listNotificationInterests()
	return
	{
		--insertNotificationNames
	}
end

function UITwoMergeBpPanelMediator:handleNotification(notification)

	local name = notification:getName()
	-- local type = notification:getType() -- uncomment if need by yourself
	-- local body = notification:getBody() --message data  uncomment if need by yourself
	--insertHandleNotificationNames
end

-- function UITwoMergeBpPanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

-- function UITwoMergeBpPanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
-- end

-- function UITwoMergeBpPanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function UITwoMergeBpPanelMediator:onAfterShowPanel()
-- 	--在第一次显示之后，此时visible=true。
-- end

-- function UITwoMergeBpPanelMediator:onBeforeHidePanel()
-- 	--在被隐藏之前(FadeOut开始前)，此时visible=true。
-- end
 function UITwoMergeBpPanelMediator:onAfterHidePanel()
 	--在被隐藏之后(FadeOut完成后)，此时visible=false。
	 panel:onAfterHidePanel()
 end

-- function UITwoMergeBpPanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function UITwoMergeBpPanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

-- function UITwoMergeBpPanelMediator:onBeforeDestroyPanel()
-- 	--在被销毁之前，此时visible=false。
-- end

-- function UITwoMergeBpPanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function UITwoMergeBpPanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

-- function UITwoMergeBpPanelMediator:onUpdatePerSecond()
-- 	panel:onUpdatePerSecond()
-- end

return UITwoMergeBpPanelMediator
