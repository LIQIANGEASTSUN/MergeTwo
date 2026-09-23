--insertWidgetsBegin
--insertWidgetsEnd

--insertRequire
local _UITwoMergeBpPanelBase = require "UI.UITwoMergeBpPanel.View.UI.Base._UITwoMergeBpPanelBase"
local _bpRewardItem = require "UI.UITwoMergeBpPanel.View.UI.UITwoMergeBpRewardItem"
---@class UITwoMergeBpPanel:_UITwoMergeBpPanelBase
local UITwoMergeBpPanel = class(_UITwoMergeBpPanelBase)

function UITwoMergeBpPanel:ctor()

end

function UITwoMergeBpPanel:onAfterBindView()
    self.itemList = {}
    self.isInit = false
    self.type = self.arguments.type
    self:InitManager()
    self.bpCfg = self.manager:GetBpData()
    self:AddListener()
    self:refreshUI()
end

--self.type 1 二合  2 3dMatch 暂时没有别的类型
function UITwoMergeBpPanel:InitManager()
    self.manager = AppServices.TwoMergeManager
    self.activityManager = ActivityServices.TwoMergeActivityManager

    self.bpShowPic_merge:SetActive(self.type == 1)
    self.twoMergePic:SetActive(self.type == 1)
    self.bpShowPic_match3D:SetActive(false)
    self.match3dPic:SetActive(false)
end

--刷新界面显示
function UITwoMergeBpPanel:refreshUI()
    self:InitList()
    self:InitText()
    self:CheckGuide()
    self:DoSlider()
    self:SetCountDown()
    self:RefreshBuyBtn()
end

--第一次进界面需要播放动画
function UITwoMergeBpPanel:CheckGuide()
    self:JumpToRewardIndex()
end

---在这里释放
function UITwoMergeBpPanel:onAfterHidePanel()
    self:StopScrollTimer()
    self:RemoveListener()
    self:RemoveSequence()
    self:StopScrollTimer()
    self:CancelFlyTimerId()
end

----------------监听事件方法---------------------

function UITwoMergeBpPanel:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Buy_BP_Success, self.OnBuyBpSuccess, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.RefreshItems, self)
end

function UITwoMergeBpPanel:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Buy_BP_Success, self.OnBuyBpSuccess, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_BpLevelUpdate, self.RefreshItems, self)
end

function UITwoMergeBpPanel:StopScrollTimer()
    if self.scrollTimer then
        WaitExtension.CancelTimeout(self.scrollTimer)
        self.scrollTimer = nil
    end
end

function UITwoMergeBpPanel:StopTimer()
    if self.timerId then
        WaitExtension.CancelTimeout(self.timerId)
        self.timerId = nil
    end
end

function UITwoMergeBpPanel:RemoveSequence()
    if self.sequence then
        self.sequence:Kill()
        self.sequence = nil
    end
end

function UITwoMergeBpPanel:CancelFlyTimerId()
    if self.itemShowTimerId then
        WaitExtension.CancelTimeout(self.itemShowTimerId)
        self.itemShowTimerId = nil
    end
end

----------------响应方法---------------------

function UITwoMergeBpPanel:closePanel()
    self.manager:SetPreScore(self.manager:GetCurScore())
    self.manager:SetPreStage(self.manager:GetCurrentStage())
    PanelManager.closePanel(GlobalPanelEnum.UITwoMergeBpPanel)
end

--点击帮助界面
function UITwoMergeBpPanel:ClickTip()
    self.helpUI:SetActive(true)
    self.twoMergeBp.gameObject:SetActive(self.type == 1)
    self.math3DBp.gameObject:SetActive(false)
    --if self.type == 1 then
    --    self.animator = self.twoMergeBp.gameObject:GetComponent(typeof(Animator))
    --elseif self.type == 2 then
    --    self.animator = self.math3DBp.gameObject:GetComponent(typeof(Animator))
    --end
    self.animator = self.twoMergeBp.gameObject:GetComponent(typeof(Animator))
    if self.animator.enabled then
        self.animator.enabled = false
    end
    self.animator.enabled = true
end

function UITwoMergeBpPanel:CloseHelpUI()
    self.helpUI:SetActive(false)
end

--点击购买bp
function UITwoMergeBpPanel:BuyBp()
    self.isBuy = self:GetBuyBpState()
    if self.isBuy then
        return
    end
    self.manager:BuyBP()
end

----------------------自定义--------------------
-----创建最大显示数量的item
function UITwoMergeBpPanel:InitList()
    self.itemList = LuaGameUtil.SetItemNum(self.twoMergeBpItem, self.itemParent.transform, #self.bpCfg, _bpRewardItem,
        self)
    for i = 1, #self.itemList do
        self.itemList[i]:Show(self.bpCfg[i], i)
    end
end

function UITwoMergeBpPanel:GetItem()
    local inst = _bpRewardItem.Create(self)
    return inst
end

--接入界面播放滑动动画
function UITwoMergeBpPanel:GoToTargetReward(fromIndex, targetIndex, duration, callback)
    -- 获取 ScrollRect 的 Content 的 RectTransform
    local blockTime = fromIndex == targetIndex and 0 or duration
    Util.BlockAll(blockTime, "UITwoMergeBpPanel:MoveToTargetReward")
    local viewportWidth = self.viewport:GetComponent("RectTransform").rect.width
    if targetIndex == #self.bpCfg or targetIndex == #self.bpCfg - 1 then
        targetIndex = targetIndex - 2
    end

    if fromIndex == nil and fromIndex == #self.bpCfg or fromIndex == #self.bpCfg - 1 then
        fromIndex = fromIndex - 2
    end
    local itemWidth = self.twoMergeBpItem:GetComponent("RectTransform").rect.width
    local targetX = (targetIndex - 1) * itemWidth
    local contentWidth = #self.bpCfg * itemWidth
    local targetNormalizedX = math.clamp(targetX / (contentWidth - viewportWidth), 0, 1)
    local fromNormalizedX = 0
    if fromIndex == nil then
        fromNormalizedX = self.scrollRect.horizontalNormalizedPosition
    else
        local fromTargetX = (fromIndex - 1) * itemWidth
        fromNormalizedX = math.clamp(fromTargetX / (contentWidth - viewportWidth), 0, 1)
        local function onSet(val)
            self.scrollRect.horizontalNormalizedPosition = val
        end
        DOTween.To(onSet, 0, fromNormalizedX, 0)
    end
    self.scrollRect.horizontalNormalizedPosition = fromNormalizedX
    self:StopScrollTimer()
    self.scrollTimer = WaitExtension.SetTimeout(function()
        local function onSet(val)
            self.scrollRect.horizontalNormalizedPosition = val
        end
        DOTween.To(onSet, fromNormalizedX, targetNormalizedX, duration):OnComplete(function()
            Runtime.InvokeCbk(callback)
        end)
    end, 1.5)
end

--进度条动画 有变化才会有动画
function UITwoMergeBpPanel:DoSlider()
    --上次存放的进度值 关闭界面的时候存放 登录的时候也要设置一遍
    --和上次存放的值作比较  没有变化则不直接设置当前进度
    --如果有变化则进行动画的设置
    local iseStAni = self:PlaySliderAnimation()
    self:RefreshItemState(iseStAni)
    self:DoLockAni()
end

--锁的动画播放
function UITwoMergeBpPanel:DoLockAni()
    local _changIndexList = self:GetChangeIndex()
    for k, v in pairs(self.itemList) do
        v:RefreshUnlock(_changIndexList)
    end
end

--刷新倒计时
function UITwoMergeBpPanel:SetCountDown()
    self.endTime = self.activityManager:GetLefttime()
    self:StopTimer()
    local function onTick()
        self:RefreshCD()
    end
    self.timerId = WaitExtension.InvokeRepeating(onTick, 0, 1)
end

function UITwoMergeBpPanel:RefreshCD()
    local now = TimeUtil.ServerTime()
    self.endTime = self.activityManager:GetLefttime()
    local _remainTime = self.endTime
    if Runtime.CSNull(self.countDown) then
        self:StopTimer()
        return
    end
    if _remainTime <= 0 then
        self:StopTimer()
        self.countDown.text = "00:00:00"
        --self:closePanel()
        return
    end
    local ret, time1, time2 = TimeUtil.SecToDayHour(_remainTime, 24)
    local str
    if ret then
        str = Runtime.Translate("ui_goldpass_activitytime", { day = tostring(time1), hour = tostring(time2) })
    else
        str = Runtime.formatStringColor(time1, "f14333")
    end
    self.countDown.text = str
end

--刷新按钮显示
function UITwoMergeBpPanel:RefreshBuyBtn()
    self.isBuy = self:GetBuyBpState()
    self.btnBuyBp.gameObject:SetActive(not self.isBuy)
end

--初始化一些文本
function UITwoMergeBpPanel:InitText()
    self.bpShowTitle.text = Runtime.Translate("merge_system_39")
    self.text_btnBuyBp.text = self.manager:GetPrice()
end

--更新item状态
function UITwoMergeBpPanel:RefreshItemState(iseStAni)
    local _curScore = self.manager:GetCurScore()
    local _curStage = self.manager:GetCurrentStage()
    local changeIndex = self:GetChangeIndex()
    for k, v in pairs(self.itemList) do
        v:RefreshState(_curScore, _curStage, changeIndex, iseStAni)
    end
end

function UITwoMergeBpPanel:SetSliderValue(score, stage)
    local _curMaxScore = self:GetMaxScore(stage)
    self.sliderFill.fillAmount = score / _curMaxScore
    self.Text_progress.text = score .. "/" .. _curMaxScore
    self.Text_level.text = stage
end

--进入界面播放进度条动画
function UITwoMergeBpPanel:PlaySliderAnimation()
    local tempScore = 0
    local _preStage = self.manager:GetPreStage()
    local _curStage = self.manager:GetCurrentStage()
    local _preScore = self.manager:GetPreScore()
    local _curScore = self.manager:GetCurScore()
    local _curMaxScore = self:GetMaxScore(_curStage)
    --self:RemoveSequence()
    self.sequence = DOTween.Sequence()
    for i = 1, _curStage - _preStage do
        tempScore = self:GetMaxScore(_preStage)
        local temp = self.sliderFill:DOFillAmount(1, 0.7):SetEase(Ease.Linear):OnComplete(function()
            self.sliderFill.gameObject:SetActive(false)
            _preStage = _preStage + 1
            _preScore = tempScore
            self.sliderFill.fillAmount = 0
            self.Text_level.text = _preStage
        end)
        temp:OnStart(function()
            self.sliderFill.fillAmount = _preScore / tempScore
            tempScore = self:GetMaxScore(_preStage)
            self.Text_progress.text = tempScore .. "/" .. tempScore
        end)
        self.sequence:Append(temp)
        self.sequence:AppendInterval(0.1)
        self.sequence:AppendCallback(function()
            self.sliderFill.gameObject:SetActive(true)
        end)
    end


    if _curMaxScore ~= -1 then
        if _preScore == _curScore then
            self.sequence:AppendCallback(function()
                self.sliderFill.gameObject:SetActive(true)
                self.Text_level.text = _curStage
                self.sliderFill.fillAmount = _curScore / _curMaxScore
                self.Text_progress.text = _curScore .. "/" .. _curMaxScore
            end)
        else
            self.sequence:Append(self.sliderFill:DOFillAmount(_curScore / _curMaxScore, 0.7):SetEase(Ease.Linear)
                :OnComplete(function()
                    self.sliderFill.gameObject:SetActive(true)
                    self.sliderFill.fillAmount = _curScore / _curMaxScore
                    self.Text_progress.text = _curScore .. "/" .. _curMaxScore
                    self.Text_level.text = _curStage
                end))
        end
    else
        self.sequence:AppendCallback(function()
            self.sliderFill.fillAmount = 1
            self.Text_progress.gameObject:SetActive(false)
            self.Text_level.text = _curStage
        end)
    end

    if self.sequence then
        self.sequence:Play()
    end
    if _preScore == _curScore then
        return false
    end
    return true
end

--进入界面跳转到可领奖区域
function UITwoMergeBpPanel:JumpToRewardIndex()
    local index = self.manager:GetRewardIndex() == nil and 1 or self.manager:GetRewardIndex()
    if index > 3 then
        self:GoToTargetReward(nil, index, 1.5)
    end
end

function UITwoMergeBpPanel:Tutorial_GetFirstOne()
    return self.itemList[1]:GetNormalOne()
end

function UITwoMergeBpPanel:Tutorial_GetAllBtn()
    return self.btnAllGet
end

----------------查数据-------------------
----获取当前阶段的所需经验
function UITwoMergeBpPanel:GetMaxScore(stage)
    for k, v in pairs(self.bpCfg) do
        if v.level == tonumber(stage) then
            return v.exp
        end
    end
    return 0
end

--获取有变化的阶段数
function UITwoMergeBpPanel:GetChangeIndex()
    local _preStage = self.manager:GetPreStage()
    local _curStage = self.manager:GetCurrentStage()
    local _changeList = {}
    while (_preStage <= _curStage) do
        _preStage = _preStage + 1
        if _preStage > _curStage then
            break
        end
        table.insert(_changeList, _preStage)
    end
    return _changeList
end

--获取当前索引的普通奖励的领奖状态
function UITwoMergeBpPanel:GetNormalRewardState(index)
    return self.manager:GetNormalRewardState(index)
end

--获取当前索引的付费奖励的领奖状态
function UITwoMergeBpPanel:GetVipRewardState(index)
    return self.manager:GetVipRewardState(index)
end

--获取当前的等级
function UITwoMergeBpPanel:GetCurStage()
    return self.manager:GetCurrentStage()
end

--获取当前的积分
function UITwoMergeBpPanel:GetCurScore()
    return self.manager:GetCurScore()
end

--获取bp是否购买
function UITwoMergeBpPanel:GetBuyBpState()
    return self.manager:IsBuy()
end

function UITwoMergeBpPanel:GetRewardCheck(level)
    self:RefreshItems()
end

--刷新item的显示
function UITwoMergeBpPanel:RefreshItems()
    for k, v in ipairs(self.itemList) do
        v:RefreshShow()
    end
end

function UITwoMergeBpPanel:MapId()
    return self.activityManager:GetActivityId()
end

function UITwoMergeBpPanel:AllGet()
    if self.activityManager:GetLefttime() <= 0 then
        LuaGameUtil.ShowContent(Runtime.Translate("UI_SaveAnimal_end_title"))
        return
    end
    if self.manager:GetRewardIndex() == nil then
        LuaGameUtil.ShowContent(Runtime.Translate("merge_system_37"))
        return
    end
    local callback = function(list)
        local itemCfg = AppServices.Meta:Category("ItemTemplate")
        for i = 1, #list do
            local rewardId = list[i].ItemId
            local _funcType = itemCfg[rewardId].funcType or 0
            if _funcType == 40 then
                local cloneObj = GameObject.Instantiate(self.twoMergeBpFlyItem.gameObject, self.root.transform)
                cloneObj.name = "flyObj"
                if list[i].type == 1 then
                    cloneObj.transform.position = self.itemList[list[i].rewardByStage + 1]:GetNormalOne().gameObject
                        .transform.position
                else
                    cloneObj.transform.position = self.itemList[list[i].rewardByStage + 1]:GetVipOne().gameObject
                        .transform.position
                end
                cloneObj.transform.localScale = Vector3.one
                local itemIcon = find_component(cloneObj.gameObject, "icon", Image)
                UITool:GetItemUISprite(itemIcon, tostring(rewardId))
                cloneObj.gameObject:SetActive(true)
                self:CancelFlyTimerId()
                self.queueObj.gameObject:SetActive(true)
                self.uiObj.gameObject:SetActive(false)
                local offsetX = -cloneObj.gameObject:GetLocalPosition()[0] * 0.5
                local offsetY = 200
                AppServices.FlyAnimation.FlyEffectOffset(cloneObj.gameObject, self.queueObj.gameObject, function()

                end, 0.8, Ease.InOutSine, offsetX, offsetY)
                self.itemShowTimerId = WaitExtension.SetTimeout(function()
                    self.queueObj.gameObject:SetActive(false)
                end, 1.5)
            end
        end
        self:RefreshItems()
    end
    self.manager:GetAllReward(callback)
end

--领奖
function UITwoMergeBpPanel:GetReward(type, level, pos)
    if self.activityManager:GetLefttime() <= 0 then
        LuaGameUtil.ShowContent(Runtime.Translate("UI_SaveAnimal_end_title"))
        return
    end
    local callback = function()
        if type == nil or level == nil then
            return
        end
        local rewardId = 0
        local rewardType = 0
        if type == 1 then
            rewardId = self.bpCfg[level + 1].normalReward[1]
            rewardType = self.bpCfg[level + 1].normalType
        else
            rewardId = self.bpCfg[level + 1].vipReward[1]
            rewardType = self.bpCfg[level + 1].vipType
        end

        if rewardType ~= 3 then
            self:GetRewardCheck(level)
            return
        end

        local cloneObj = GameObject.Instantiate(self.twoMergeBpFlyItem.gameObject, self.root.transform)
        cloneObj.name = "flyObj"

        if type == 1 then
            cloneObj.transform.position = self.itemList[level + 1]:GetNormalOne().gameObject.transform.position
        else
            cloneObj.transform.position = self.itemList[level + 1]:GetVipOne().gameObject.transform.position
        end

        cloneObj.transform.localScale = Vector3.one
        local itemIcon = find_component(cloneObj.gameObject, "icon", Image)
        UITool:GetItemUISprite(itemIcon, tostring(rewardId))
        cloneObj.gameObject:SetActive(true)
        self:CancelFlyTimerId()
        self.queueObj.gameObject:SetActive(true)
        self.uiObj.gameObject:SetActive(false)
        local offsetX = -cloneObj.gameObject:GetLocalPosition()[0] * 0.5
        local offsetY = 200
        AppServices.FlyAnimation.FlyEffectOffset(cloneObj.gameObject, self.queueObj.gameObject, function()

        end, 0.8, Ease.InOutSine, offsetX, offsetY)
        self.itemShowTimerId = WaitExtension.SetTimeout(function()
            self.queueObj.gameObject:SetActive(false)
        end, 1.5)
        self:GetRewardCheck(level)
    end
    self.manager:SendBpItemRequest(type, level, callback)
end

--购买bp成功
function UITwoMergeBpPanel:OnBuyBpSuccess()
    self:RefreshBuyBtn()
    for k, v in pairs(self.itemList) do
        v:UnLockBp()
    end
end

return UITwoMergeBpPanel
