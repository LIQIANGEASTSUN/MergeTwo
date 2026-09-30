require "UI.UITwoMergeTwoRatePanel.UITwoMergeTwoRatePanelNotificationEnum"
local UITwoMergeTwoRatePanelProxy = require "UI.UITwoMergeTwoRatePanel.Model.UITwoMergeTwoRatePanelProxy"

local UITwoMergeTwoRatePanelMediator = MVCClass('UITwoMergeTwoRatePanelMediator', BaseMediator)

---@type UITwoMergeTwoRatePanel
local panel
local proxy

function UITwoMergeTwoRatePanelMediator:ctor(...)
	UITwoMergeTwoRatePanelMediator.super.ctor(self,...)
	proxy = UITwoMergeTwoRatePanelProxy.new()
end

function UITwoMergeTwoRatePanelMediator:onRegister()
end

function UITwoMergeTwoRatePanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function UITwoMergeTwoRatePanelMediator:listNotificationInterests()
	return
	{
        UITwoMergeTwoRatePanelNotificationEnum.Click_btn_close
	}
end

function UITwoMergeTwoRatePanelMediator:handleNotification(notification)
	local name = notification:getName()
end

-- function UITwoMergeTwoRatePanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

-- function UITwoMergeTwoRatePanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
-- end

-- function UITwoMergeTwoRatePanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function UITwoMergeTwoRatePanelMediator:onAfterShowPanel()
-- 	--在第一次显示之后，此时visible=true。
-- end

-- function UITwoMergeTwoRatePanelMediator:onBeforeHidePanel()
-- 	--在被隐藏之前(FadeOut开始前)，此时visible=true。
-- end
-- function UITwoMergeTwoRatePanelMediator:onAfterHidePanel()
-- 	--在被隐藏之后(FadeOut完成后)，此时visible=false。
-- end

-- function UITwoMergeTwoRatePanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function UITwoMergeTwoRatePanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

function UITwoMergeTwoRatePanelMediator:onBeforeDestroyPanel()
	--在被销毁之前，此时visible=false。
	panel:onBeforeDestroyPanel()
end

-- function UITwoMergeTwoRatePanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function UITwoMergeTwoRatePanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

-- function UITwoMergeTwoRatePanelMediator:onUpdatePerSecond()
-- 	panel:onUpdatePerSecond()
-- end

return UITwoMergeTwoRatePanelMediator
