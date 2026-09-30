require "UI.TwoMergePanel.TwoMergePanelNotificationEnum"
local TwoMergePanelProxy = require "UI.TwoMergePanel.Model.TwoMergePanelProxy"

local TwoMergePanelMediator = MVCClass('TwoMergePanelMediator', BaseMediator)

---@type TwoMergePanel
local panel
local proxy

function TwoMergePanelMediator:ctor(...)
	TwoMergePanelMediator.super.ctor(self,...)
	proxy = TwoMergePanelProxy.new()
end

function TwoMergePanelMediator:onRegister()
end

function TwoMergePanelMediator:onAfterSetViewComponent()
	panel = self:getViewComponent()
	panel:setProxy(proxy)
end

function TwoMergePanelMediator:listNotificationInterests()
	return
	{
        TwoMergePanelNotificationEnum.Click_btn_close,
        TwoMergePanelNotificationEnum.Click_btn_help,
        TwoMergePanelNotificationEnum.Click_btn_bag
	}
end

function TwoMergePanelMediator:handleNotification(notification)

	local name = notification:getName()
    if name ==TwoMergePanelNotificationEnum.Click_btn_close then
		panel:OnClickClose()
	elseif name == TwoMergePanelNotificationEnum.Click_btn_help then
		panel:OnClickHelp()
	elseif name == TwoMergePanelNotificationEnum.Click_btn_bag then
		panel:OnClickBag()
    end
end

-- function TwoMergePanelMediator:onBeforeLoadAssets()
--  -- 在资源即在之前，用于进行服务器请求或额外的资源加载。
-- 	-- Send Request To Server
-- 	local extraAssetsNeedLoad = {}
-- 	table.insert(extraAssetsNeedLoad, "extraAssetName")
-- 	self:loadAssetsAndInitPanel(extraAssetsNeedLoad)
-- end

-- function TwoMergePanelMediator:onLoadAssetsFinish()
-- 	--资源加载完成，在BindView之前。
-- end

-- function TwoMergePanelMediator:onBeforeShowPanel()
-- 	--在第一次显示之前，此时visible=false。
-- 	panel:refreshUI()
-- end
function TwoMergePanelMediator:onAfterShowPanel()
	--在第一次显示之后，此时visible=true。
	panel:onAfterShowPanel()
end

function TwoMergePanelMediator:onBeforeHidePanel()
	--在被隐藏之前(FadeOut开始前)，此时visible=true。
	panel:onBeforeHidePanel()
end
function TwoMergePanelMediator:onAfterHidePanel()
	--在被隐藏之后(FadeOut完成后)，此时visible=false。
	panel:OnAfterHide()
end

-- function TwoMergePanelMediator:onBeforeReshowPanel(lastPanelVO)
-- 	--在被重新显示之前(FadeIn开始前)，此时visible=false。
-- 	panel:refreshUI()
-- end
-- function TwoMergePanelMediator:onAfterReshowPanel(lastPanelVO)
-- 	--在被重新显示之后(FadeIn完成后)，此时visible=true。
-- end

-- function TwoMergePanelMediator:onBeforeDestroyPanel()
-- 	--在被销毁之前，此时visible=false。
-- end

-- function TwoMergePanelMediator:onBeforePausePanel()
-- 	--在被Popup面板盖住之前，此时visible=true。
-- end
-- function TwoMergePanelMediator:onAfterResumePanel()
-- 	--在Popup面板移除之后，此时visible=true。
-- 	panel:refreshUI()
-- end

-- function TwoMergePanelMediator:onUpdatePerSecond()
-- 	panel:onUpdatePerSecond()
-- end

return TwoMergePanelMediator
