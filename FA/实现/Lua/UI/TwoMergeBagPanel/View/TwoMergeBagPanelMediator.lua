require "UI.TwoMergeBagPanel.TwoMergeBagPanelNotificationEnum"
local TwoMergeBagPanelProxy = require "UI.TwoMergeBagPanel.Model.TwoMergeBagPanelProxy"

local TwoMergeBagPanelMediator = MVCClass('TwoMergeBagPanelMediator', BaseMediator)

---@type TwoMergeBagPanel
local panel
local proxy

function TwoMergeBagPanelMediator:ctor(...)
	TwoMergeBagPanelMediator.super.ctor(self,...)
	proxy = TwoMergeBagPanelProxy.new()
end

function TwoMergeBagPanelMediator:onRegister()
end

function TwoMergeBagPanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function TwoMergeBagPanelMediator:listNotificationInterests()
	return
	{
		--insertNotificationNames
	}
end

function TwoMergeBagPanelMediator:handleNotification(notification)

	local name = notification:getName()
	-- local type = notification:getType() -- uncomment if need by yourself
	-- local body = notification:getBody() --message data  uncomment if need by yourself
	--insertHandleNotificationNames
end

-- function TwoMergeBagPanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

-- function TwoMergeBagPanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
-- end

-- function TwoMergeBagPanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function TwoMergeBagPanelMediator:onAfterShowPanel()
-- 	--在第一次显示之后，此时visible=true。
-- end

-- function TwoMergeBagPanelMediator:onBeforeHidePanel()
-- 	--在被隐藏之前(FadeOut开始前)，此时visible=true。
-- end
-- function TwoMergeBagPanelMediator:onAfterHidePanel()
-- 	--在被隐藏之后(FadeOut完成后)，此时visible=false。
-- end

-- function TwoMergeBagPanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function TwoMergeBagPanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

-- function TwoMergeBagPanelMediator:onBeforeDestroyPanel()
-- 	--在被销毁之前，此时visible=false。
-- end

-- function TwoMergeBagPanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function TwoMergeBagPanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

-- function TwoMergeBagPanelMediator:onUpdatePerSecond()
-- 	panel:onUpdatePerSecond()
-- end

return TwoMergeBagPanelMediator
