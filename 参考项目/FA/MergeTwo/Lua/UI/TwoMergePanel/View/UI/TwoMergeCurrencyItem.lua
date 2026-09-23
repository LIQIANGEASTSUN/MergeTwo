---@class TwoMergeCurrencyItem
local TwoMergeCurrencyItem = class(nil, "TwoMergeCurrencyItem")
local TutorialLogic = require("Game.TwoMerge.Logic.TutorialLogic")
local _Add = 0
function TwoMergeCurrencyItem:ctor(gameObject, currencyId)
    _Add = _Add + 1
    self.onlyId = _Add
    self:Bind(gameObject)
    self.currencyId = currencyId
    self:AddListener()
    self.stopData = false
    self.curcount = AppServices.User:GetItemAmount(self.currencyId)
    self.lastCount = self.curcount
    self:RefreshData()

    if self.currencyId == ItemId.COIN then AppServices.TwoMergeManager.flytest = self end
end
function TwoMergeCurrencyItem:AddListener()
    MessageDispatcher:AddMessageListener(MessageType.Global_After_AddItem, self.OnItemChanged, self)
    MessageDispatcher:AddMessageListener(MessageType.Global_After_UseItem, self.OnItemChanged, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_ItemChanged_Cache, self.OnItemCacheChanged, self)
    MessageDispatcher:AddMessageListener(MessageType.Msg_FlyAni_Finish, self.FlyCompleteAdd, self)
end
function TwoMergeCurrencyItem:RemoveListener()
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_AddItem, self.OnItemChanged, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Global_After_UseItem, self.OnItemChanged, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_ItemChanged_Cache, self.OnItemCacheChanged, self)
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_FlyAni_Finish, self.FlyCompleteAdd, self)
end
function TwoMergeCurrencyItem:destroy()
    self:RemoveListener()
    self = nil
end

function TwoMergeCurrencyItem:Bind(gameObject)
    self.gameObject = gameObject

    self.icon = find_component(self.gameObject, "icon", Image)
    self.label = find_component(self.gameObject, "label", Text)
    self.canvasgroup = find_component(self.gameObject, "", CanvasGroup)

    self.btn = find_component(self.gameObject, "", ButtonComponent)
    Util.UGUI_AddButtonListener(self.btn, function() self:OnClick() end)
end

--- 正常数量改变
function TwoMergeCurrencyItem:OnItemChanged(id, count)
    if self.currencyId == id then self:RefreshData() end
end

function TwoMergeCurrencyItem:RefreshData()
    --- 正在播放飞行动画  屏蔽刷新
    if not self.stopData then
        local count = AppServices.TwoMergeManager:GetItemAmount(AppServices.TwoMergeMapGridManager:GetMapId(), self.currencyId)
        self.label.text = count
        self.curcount = count
        self.lastCount = count
    end
end

--- 缓存数量改变
function TwoMergeCurrencyItem:OnItemCacheChanged(id, count, args)
    if self.currencyId == id then

        local old = self.lastCount
        local isfly = count > 0 and args ~= nil and args.isfly
        if isfly then
            self:TriggerFly(id, count, args.startpos)
        else
            self.curcount = self.curcount + count
            self.lastCount = self.lastCount + count
            self:RefreshCacheData()
        end
        -- console.print(">>>  my  11    "..self.lastCount.." old: "..old.." changed: "..count)
    end
end

function TwoMergeCurrencyItem:RefreshCacheData()
    -- self.label.text = self.lastCount
    if not self.stopData then
        self.label.text = self.curcount
    end
end

function TwoMergeCurrencyItem:FlyCompleteAdd(onlyId, value, isfinal)
    if self.onlyId ~= onlyId then return end

    local lastCount = self.lastCount
    local newcount = math.floor(lastCount + value)

    self.lastCount = newcount
    self.label.text = self.lastCount
    -- console.print(">>>  my  22    "..self.lastCount.." old: "..lastCount.." changed: "..value)
    if isfinal then
        self:RefreshData()
    end

    if self.sequence ~= nil then self.sequence:Kill(true) self.sequence = nil end
    self.icon.transform.localScale = Vector3.one * 1.2
    local sequence = DOTween.Sequence()
    sequence:Append(self.icon.transform:DOScale(1.3, 0.2))
    sequence:Append(self.icon.transform:DOScale(1, 0.2))
    sequence:SetRecyclable(true)
    sequence:Play()
    self.sequence = sequence
end

function TwoMergeCurrencyItem:OnClick()
    if TutorialLogic.IsRunning() then return end
    if self.currencyId == ItemId.ENERGY then
        PanelManager.showPanel(GlobalPanelEnum.PowerShopPanel, { source = "TwoMerge" })
    elseif self.currencyId == ItemId.DIAMOND then
        PanelManager.showPanel(GlobalPanelEnum.MoneyShopPanel, { selectIndex = MoneyShopPage.Diamond, source = "DiamondIcon"})
    elseif self.currencyId == ActivityServices.TwoMergeActivityManager:GetEnergyId() then
        AppServices.TwoMergeManager:EnergyBuyCountCheck(AppServices.TwoMergeManager:MapId())
        PanelManager.showPanel(GlobalPanelEnum.UITwoMergeEnergyBuyPanel, { mapId = AppServices.TwoMergeManager:MapId() })
    end
end

function TwoMergeCurrencyItem:TriggerFly(id, count, startPosition)
    if self.currencyId == id then
        local flyCount = count; if flyCount > 5 then flyCount = 5 end
        local flys = {}
        local value = math.modf(count / flyCount)
        local finalValue = value; if count % flyCount ~= 0 then finalValue = count % flyCount + 1 end
        for i = 1, flyCount, 1 do
            if i ~= flyCount then table.insert(flys, { value = value })
            else table.insert(flys, { value = finalValue })
            end
        end
        self:DoFly(flys, startPosition)
    end
end

function TwoMergeCurrencyItem:DoFly(flys, startPosition)
    self.stopData = true
    for i = 1, #flys, 1 do
        local value = flys[i].value
        local obj = BResource.InstantiateFromAsset(self.icon.gameObject, self.gameObject.transform)
        obj.transform.localScale = Vector3(1.5, 1.5, 1.5)
        obj.transform.position = startPosition
        self:FlyItem2(obj, value, i, i == #flys)
    end
end

--- 弹跳
function TwoMergeCurrencyItem:FlyItem2(obj, value, index, isfinal)
    local delay = (index - 1) * 0.065
    local trans = obj.transform
    local targetPos = self.icon.transform.position
    local canvasgroup = find_component(obj, "", CanvasGroup)

    local sequence = DOTween.Sequence()
    sequence:AppendInterval(delay)

    -- 上升
    local flag = index % 2 == 0 and 1 or -1 -- math.random(0, 100) >= 50 and  1 or -1
    local startX = (index - 1) * 10
    local endX = startX + 10
    local firstX = math.random(startX, endX) * 0.01 * flag
    local firstY = math.random(40, 70) * 0.01
    local firstPos = trans.position + Vector3(firstX, firstY, 0)
    sequence:Append(trans:DOMove(firstPos, 0.2))

    -- 弹跳
    local bottomY = firstPos.y - 0.4
    sequence:Append(trans:DOMoveY(bottomY, 0.12))
    sequence:Append(trans:DOMoveY(bottomY + 0.3, 0.12))
    sequence:Append(trans:DOMoveY(bottomY, 0.12))
    sequence:Append(trans:DOMoveY(bottomY + 0.1, 0.12))
    sequence:Append(trans:DOMoveY(bottomY, 0.12))
    sequence:Join(trans:DOScale(1.5, 0.1))
    local movetime = math.random(40, 60) * 0.01
    sequence:AppendInterval(delay)
    sequence:Append(trans:DOMoveX(targetPos.x, movetime))
    sequence:Join(trans:DOMoveY(targetPos.y, movetime)):SetEase(Ease.Linear)
    sequence:Join(trans:DOScale(1, movetime))
    sequence:Join(canvasgroup:DOFade(0, movetime * 0.5):SetDelay(movetime * 0.5))
    sequence:AppendCallback(function()
        if not Runtime.CSNull(obj) then
            self.stopData = false
            -- self:FlyCompleteAdd(value)
            MessageDispatcher:SendMessage(MessageType.Msg_FlyAni_Finish, self.onlyId, value, isfinal)
            GameObject.Destroy(obj)
        end
    end)
    sequence:SetRecyclable(true)
    sequence:Play()
end

--- 柔和
function TwoMergeCurrencyItem:FlyItem3(obj, value, delay)
    local trans = obj.transform
    local targetPos = self.icon.transform.position
    local canvasgroup = find_component(obj, "", CanvasGroup)

    local sequence = DOTween.Sequence()
    sequence:AppendInterval(0)

    trans.localScale = Vector3(1, 1, 1)
    --- 发散
    local firstX = (math.random() - 0.5) * 0.8
    local firstY = (math.random() - 0.5) * 0.8
    local firstPos = trans.position + Vector3(firstX, firstY, 0)
    sequence:Append(trans:DOMove(firstPos, 0.25))
    sequence:Join(trans:DOScale(Vector3(1.5, 1.5, 1.5), 0.25))

    --- 各方向移动
    local dir = TwoMergeCurrencyItem.RotateRound(Vector3.down, Vector3.zero, Vector3.back, (math.random() - 0.5) * 30) * 0.1
    local downtime = math.random(100, 130) * 0.01 + delay
    local tPos = firstPos + dir * downtime
    sequence:Append(trans:DOMove(tPos, downtime):SetEase(Ease.Linear))

    --- 飞向目标
    sequence:Append(trans:DOScale(1, 0.8))
    sequence:Join(trans:DOMove(targetPos, 0.8):SetEase(Ease.InQuart))
    sequence:Join(canvasgroup:DOFade(0, 0.8):SetEase(Ease.InQuart))

    sequence:AppendCallback(function()
        if not Runtime.CSNull(obj) then
            self.stopData = false
            -- self:FlyCompleteAdd(value)
            MessageDispatcher:SendMessage(MessageType.Msg_FlyAni_Finish, self.onlyId, value)
            GameObject.Destroy(obj)
        end
    end)
    sequence:SetRecyclable(true)
    sequence:Play()

end

TwoMergeCurrencyItem.RotateRound = function(position, center, axis, angle)
    local point = Quaternion.AngleAxis(angle, axis) * (position - center) + center
    point.z = 0
    return point
end

return TwoMergeCurrencyItem