require "UI.TwoMergeBestiaryPanel.TwoMergeBestiaryPanelNotificationEnum"
local TwoMergeBestiaryPanelProxy = require "UI.TwoMergeBestiaryPanel.Model.TwoMergeBestiaryPanelProxy"

local TwoMergeBestiaryPanelMediator = MVCClass('TwoMergeBestiaryPanelMediator', BaseMediator)

---@type TwoMergeBestiaryPanel
local panel
local proxy

function TwoMergeBestiaryPanelMediator:ctor(...)
	TwoMergeBestiaryPanelMediator.super.ctor(self,...)
	proxy = TwoMergeBestiaryPanelProxy.new()
end

function TwoMergeBestiaryPanelMediator:onRegister()
end

function TwoMergeBestiaryPanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function TwoMergeBestiaryPanelMediator:listNotificationInterests()
	return
	{
		--insertNotificationNames
	}
end

function TwoMergeBestiaryPanelMediator:handleNotification(notification)

	local name = notification:getName()
	-- local type = notification:getType() -- uncomment if need by yourself
	-- local body = notification:getBody() --message data  uncomment if need by yourself
	--insertHandleNotificationNames
end

-- function TwoMergeBestiaryPanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

-- function TwoMergeBestiaryPanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
-- end

-- function TwoMergeBestiaryPanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function TwoMergeBestiaryPanelMediator:onAfterShowPanel()
-- 	--在第一次显示之后，此时visible=true。
-- end

-- function TwoMergeBestiaryPanelMediator:onBeforeHidePanel()
-- 	--在被隐藏之前(FadeOut开始前)，此时visible=true。
-- end
-- function TwoMergeBestiaryPanelMediator:onAfterHidePanel()
-- 	--在被隐藏之后(FadeOut完成后)，此时visible=false。
-- end

-- function TwoMergeBestiaryPanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function TwoMergeBestiaryPanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

-- function TwoMergeBestiaryPanelMediator:onBeforeDestroyPanel()
-- 	--在被销毁之前，此时visible=false。
-- end

 function TwoMergeBestiaryPanelMediator:onAfterDestroyPanel()
 	--在被销毁之后，此时visible=false。
	 panel:OnHide()
 end

-- function TwoMergeBestiaryPanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function TwoMergeBestiaryPanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

-- function TwoMergeBestiaryPanelMediator:onUpdatePerSecond()
-- 	panel:onUpdatePerSecond()
-- end

return TwoMergeBestiaryPanelMediator
