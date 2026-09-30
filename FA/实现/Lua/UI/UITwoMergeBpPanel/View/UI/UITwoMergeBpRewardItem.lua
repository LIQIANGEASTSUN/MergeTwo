---@class UITwoMergeBpRewardItem
local UITwoMergeBpRewardItem = class(nil, "UITwoMergeBpRewardItem")
local _basePath = "Prefab/UI/TwoMergePanel/twoMergeBpItem.prefab"
function UITwoMergeBpRewardItem.Create(luaparent)

end

function UITwoMergeBpRewardItem:ctor(go, luaparent)
    self.luaparent = luaparent
    self:InitWithGameObject(go)
end

function UITwoMergeBpRewardItem:InitWithGameObject(go)
    self.gameObject = go
    self.top = find_component(self.gameObject, "top")
    self.get_top = find_component(self.gameObject, "top/get_top")
    self.itemIcon_top = find_component(self.gameObject, "top/itemIcon_top", Image)
    self.itemNum_top = find_component(self.gameObject, "top/itemNum_top", Text)
    self.geted_Top = find_component(self.gameObject, "top/geted")
    self.img_lock_Top = find_component(self.gameObject, "top/img_lock")
    self.btnTopImg = find_component(self.gameObject, "top/btnTopImg")
    --bottom
    self.bottom = find_component(self.gameObject, "bottom")
    self.get_bottom = find_component(self.gameObject, "bottom/get_bottom")
    self.itemIcon_bottom = find_component(self.gameObject, "bottom/itemIcon_bottom", Image)
    self.itemNum_bottom = find_component(self.gameObject, "bottom/itemNum_bottom", Text)
    self.geted_Bottom = find_component(self.gameObject, "bottom/geted")
    self.img_lock_Bottom = find_component(self.gameObject, "bottom/img_lock")
    self.btnBottomImg = find_component(self.gameObject, "bottom/btnBottomImg")
    self.ItemSlide = find_component(self.gameObject, "slideBg/ItemSlide", Image)
    self.lvTxt = find_component(self.gameObject, "lvImg/lvImgTxt", Text)

    self.normalBtn = find_component(self.gameObject, "bottom/vipBtn")
    self.vipBtn = find_component(self.gameObject, "top/normalBtn")

    Util.UGUI_AddButtonListener(self.normalBtn, function()
        self:ClickGetNormalReward()
    end)
    Util.UGUI_AddButtonListener(self.vipBtn, function()
        self:ClickGetVipReward()
    end)
end

--初始化item的数据
function UITwoMergeBpRewardItem:Show(data, index)
    self.data = data
    self.index = index
    self.id = data.id
    self.exp = data.exp
    self.normalReward = data.normalReward
    self.vipReward = data.vipReward
    self.level = data.level
    
    self.lvTxt.text = self.level
    UITool:GetItemUISprite(self.itemIcon_top, tostring(self.vipReward[1]))
    self.itemNum_top.text = "x" .. self.vipReward[2]
    self.bottom:SetActive(#self.normalReward ~= 0)
    if #self.normalReward ~= 0 then
        UITool:GetItemUISprite(self.itemIcon_bottom, tostring(self.normalReward[1]))
        self.itemNum_bottom.text = "x" .. self.normalReward[2]
    end
    if not self.luaparent.isInit then
        return
    end

    self:RefreshShow()
end

function UITwoMergeBpRewardItem:GetNormalOne()
    return self.bottom
end

function UITwoMergeBpRewardItem:GetVipOne()
    return self.top
end

--播放锁的动画
function UITwoMergeBpRewardItem:RefreshUnlock(changeList)
    self.changeList = changeList
    local isGetNormalReward = self.luaparent:GetNormalRewardState(self.index - 1) == 2
    self.curStage = self.luaparent:GetCurStage()
    local isUnlock = false
    for k, v in pairs(changeList) do
        if v == self.level then
            isUnlock = true
            break
        end
    end
    if not isGetNormalReward then
        if isUnlock then
            GameUtil.PlaySpineAnimation(
                self.img_lock_Bottom,
                "suo_open",
                false,
                function()
                    self.img_lock_Bottom.gameObject:SetActive(false)
                end
            )
        else
            self.img_lock_Bottom.gameObject:SetActive(self.curStage < self.level)
        end
    else
        self.img_lock_Bottom.gameObject:SetActive(false)
    end

    self:PlayUnlockVip(changeList)
    self.luaparent.isInit = true
end

--播放vip解锁的动画
function UITwoMergeBpRewardItem:PlayUnlockVip(changeList)
    local isGetVipReward = self.luaparent:GetVipRewardState(self.index - 1) == 2
    local vipState = self.luaparent:GetBuyBpState()
    self.curStage = self.luaparent:GetCurStage()
    local isUnlock = false
    if changeList and #changeList > 0 then
        for k, v in pairs(self.changeList) do
            if v == self.level then
                isUnlock = true
                break
            end
        end
    end

    if not isGetVipReward then
        if not vipState then
            self.img_lock_Top.gameObject:SetActive(true)
            return
        end
        if isUnlock then
            GameUtil.PlaySpineAnimation(
                self.img_lock_Top,
                "suo_open",
                false,
                function()
                    self.img_lock_Top.gameObject:SetActive(false)
                end
            )
        else
            self.img_lock_Top.gameObject:SetActive(self.curStage < self.level)
        end
    else
        self.img_lock_Top.gameObject:SetActive(false)
    end
end

--刷新进度条
function UITwoMergeBpRewardItem:RefreshState(score, stage, changeList, isSetAni)
    local isUnlock = false
    score = tonumber(score)
    for k, v in pairs(changeList) do
        if v == self.level then
            isUnlock = true
            break
        end
    end
    if isSetAni then
        if isUnlock then
            self.ItemSlide:DOFillAmount(1, 0.5):SetEase(Ease.Linear):OnComplete(function()
                self:SetSliderValue(score, stage)
            end)
        elseif self.level == stage and #changeList > 0 then
            self.ItemSlide:DOFillAmount(score / self.exp, 0.5):SetEase(Ease.Linear):OnComplete(function()
                self:SetSliderValue(score, stage)
            end)
        end
    end
    self:SetSliderValue(score, stage)
end

--刷新显示
function UITwoMergeBpRewardItem:RefreshShow()
    local curScore = self.luaparent:GetCurScore()
    local stage = self.luaparent:GetCurStage()
    self:SetSliderValue(curScore, stage)
    self:SetUnlockShow()
end

--解锁bp显示
function UITwoMergeBpRewardItem:UnLockBp()
    local curScore = self.luaparent:GetCurScore()
    local stage = self.luaparent:GetCurStage()
    self:SetSliderValue(curScore, stage)
    self:PlayUnlockVip()
end

--设置item的进度条显示
function UITwoMergeBpRewardItem:SetSliderValue(score, stage)
    local progress = 0
    if self.index - 1 < stage then
        progress = 1
    elseif self.index - 1 > stage then
        progress = 0
    else
        progress = score / self.exp
    end
    self.ItemSlide.fillAmount = progress
    self.curStage = self.luaparent:GetCurStage()
    local isGetNormalReward = self.luaparent:GetNormalRewardState(self.index - 1) == 2
    local isGetVipReward = self.luaparent:GetVipRewardState(self.index - 1) == 2
    local isBuyBp = self.luaparent:GetBuyBpState()
    self.get_bottom.gameObject:SetActive(self.curStage >= self.level and not isGetNormalReward)
    self.btnBottomImg.gameObject:SetActive(self.curStage >= self.level and not isGetNormalReward)
    self.get_top.gameObject:SetActive(self.curStage >= self.level and not isGetVipReward and isBuyBp)
    self.btnTopImg.gameObject:SetActive(self.curStage >= self.level and not isGetVipReward and isBuyBp)
    self.geted_Bottom.gameObject:SetActive(isGetNormalReward)
    self.geted_Top.gameObject:SetActive(isGetVipReward)
end

--解锁的正常显示不用展示动画
function UITwoMergeBpRewardItem:SetUnlockShow()
    self.curStage = self.luaparent:GetCurStage()
    local isGetNormalReward = self.luaparent:GetNormalRewardState(self.index - 1) == 2
    local isGetVipReward = self.luaparent:GetVipRewardState(self.index - 1) == 2
    self.img_lock_Bottom.gameObject:SetActive(self.curStage < self.level)
    self.img_lock_Top.gameObject:SetActive(self.curStage < self.level or not self.luaparent:GetBuyBpState())
end

--领取普通奖励
function UITwoMergeBpRewardItem:ClickGetNormalReward()
    local _mapId = self.luaparent:MapId()
    if self.level == 0 and _mapId ~= nil then
        local isClickBp = AppServices.User.Default:GetKeyValue("twoMergeBp" .. _mapId .. 0, 0) == 0
        if isClickBp then
            AppServices.User.Default:SetKeyValue("twoMergeBp" .. _mapId .. 0, 1, true)
        end
    end
    if self.luaparent:GetNormalRewardState(self.index - 1) == 2 or self.curStage < self.level then
        return
    end
    self.luaparent:GetReward(1, self.level)
end

--领取付费奖励
function UITwoMergeBpRewardItem:ClickGetVipReward()
    if self.luaparent:GetVipRewardState(self.index - 1) == 2 or self.curStage < self.level
        or not self.luaparent:GetBuyBpState() then
        return
    end
    self.luaparent:GetReward(2, self.level)
end

return UITwoMergeBpRewardItem
