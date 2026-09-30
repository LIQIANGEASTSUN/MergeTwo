---@class BaseIconButton : LuaUiBase
local BaseIconButton = class(LuaUiBase)
--function BaseIconButton:ctor(params)
--    self.btnCallback = nil
--    self.interactable = true
--    self:Ins(params)
--end
function BaseIconButton:GetButtonConfig() end
function BaseIconButton:GetShowId()
    local activityId = self.activityId
    if activityId then
        local activityConfig = ActivityServices.ActivityManager:GetConfigById(activityId)
        if activityConfig.showId and activityConfig.showId ~= "" then
            if activityConfig.showId[1] == CONST.MAINUI.ICONS.Activity_Button then
                self.startTime = activityConfig.startTime
                return CONST.MAINUI.ICONS.Activity_Button
            end
        end
    end
end

function BaseIconButton:Ins(params)
    local const = self:GetButtonConfig()
    local gameObject = BResource.InstantiateFromAssetName(const.path)
    local widgetId = const.widgetID or params.widgetID
    self.widgetId = widgetId
    self:InitWithGameObject(gameObject, params)
    if const.parentType == CONST.MAINUI.LAYOUTS.RIGHT then
        AppServices.ButtonsForSceneManager.AddAndSort({
            instance    = self,
            btnKey      = widgetId,
            showId      = params.showId or self:GetShowId()
        })
    elseif const.parentType == CONST.MAINUI.LAYOUTS.LEFT_BOTTOM then
        App.scene:AddWidget(widgetId, self)
        local bottomLeft = App.scene.layout:BottomLeft()
        gameObject:SetParent(bottomLeft, false)
    end
end

function BaseIconButton:InitWithGameObject(gameObject,data)
    self.data = data
    self.gameObject = gameObject
    self.transform = gameObject.transform
    self.rectTransform = self:GetRectTransform()
    
    self.img_icon_go = gameObject:FindGameObject("img_icon") or gameObject:FindGameObject("anim/img_icon")
    if self.img_icon_go then
        self.img_icon = self.img_icon_go:GetComponent(typeof(Image))
    end
    self.img_reddot_go = gameObject:FindGameObject("img_reddot") or gameObject:FindGameObject("anim/img_reddot")
    if self.img_reddot_go then
        self.img_reddot = self.img_reddot_go:GetComponent(typeof(Image))
        self.img_reddot_go:SetActive(false)
    end
    self.btn = gameObject:GetComponent(typeof(Button))
    
    WaitExtension.InvokeDelay(
        function()
            self.originalAnchoredPosY = self.rectTransform.anchoredPosition.y
            self.originalAnchoredPosX = self.rectTransform.anchoredPosition.x
        end
    )
    self.interactable = true
    local function OnClick_btn(go)
        if not self.interactable then
            return
        end
        self:OnBtnClick()
    end
    Util.UGUI_AddButtonListener(self.btn.gameObject, OnClick_btn, {noAudio = true})
   
end

function BaseIconButton:GetPosition()
    if Runtime.CSValid(self.rectTransform) then
        return self.rectTransform.position
    end
end

function BaseIconButton:OnBtnClick()
    if not App.globalFlags:CanClick() then
        return
    end
    App.globalFlags:SetClickFlag()
    print("BaseIconButton:OnBtnClick()") --@DEL
    if self.btnCallback then
        self.btnCallback()
    else
        self:OnClick()
    end
end

function BaseIconButton:OnClick() end

function BaseIconButton:ShowRedDot(showOrNot)
    if Runtime.CSValid(self.img_reddot_go) then
        self.img_reddot_go:SetActive(showOrNot)
    end
end

function BaseIconButton:SetBtnCallback(callback)
    self.btnCallback = callback
end

function BaseIconButton:ShowExitAnim(instant)
    DOTween.Kill(self.rectTransform)
    local tarPos = self:GetOutsideAnchoredPosition()
    if instant then
        self.rectTransform.anchoredPosition = tarPos
    else
        GameUtil.DoAnchorPos(self.rectTransform, tarPos, 0.5)
    end
end

function BaseIconButton:ShowEnterAnim(instant)
    DOTween.Kill(self.rectTransform, false)
    local tarPos = self:GetInsideAnchoredPosition()
    if instant then
        self.rectTransform.anchoredPosition = tarPos
    else
        GameUtil.DoAnchorPos(self.rectTransform, tarPos, 0.5)
    end
end

function BaseIconButton:SetInteractable(interactable)
    self.interactable = interactable
end

function BaseIconButton:GetMainIconGameObject()
    return self.gameObject
end

function BaseIconButton:GetInsideAnchoredPosition()
    if not self.originalAnchoredPos then
        self.originalLocalPos = self.rectTransform.localPosition
        self.originalAnchoredPos = self.rectTransform.anchoredPosition
    end
    return self.originalAnchoredPos
end
function BaseIconButton:GetOutsideAnchoredPosition()
    if not self.outAnchoredPos then
        local pos = self:GetInsideAnchoredPosition()
        self.outAnchoredPos = Vector2(pos.x, pos.y - 200)
    end
    return self.outAnchoredPos
end
--获取组件显示在屏幕上时的世界坐标位置
function BaseIconButton:GetInsideWorldPosition()
    if self.originalLocalPos then
        local wPos = self.transform.parent:TransformPoint(self.originalLocalPos)
        return wPos
    end
end

-- event section
function BaseIconButton:OnEvent_ShowBottomIcons(isFirstTime)
    self:SetInteractable(true)
    self:ShowEnterAnim()
end
function BaseIconButton:OnEvent_HideBottomIcons(instant)
    self:SetInteractable(false)
    self:ShowExitAnim(instant)
end

function BaseIconButton:SetParent(parent)
    self.gameObject.transform:SetParent(parent, false)
end

return BaseIconButton
