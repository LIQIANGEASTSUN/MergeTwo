
---@class TwoMergeSubOrderAnimation
local TwoMergeSubOrderAnimation = {}
local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")


function TwoMergeSubOrderAnimation:SetGo(flyRect, fly_icon)
    self.flyRect = flyRect
    self.fly_icon = fly_icon
end

function TwoMergeSubOrderAnimation:GetMainOrderCost(agentId, templateId)
    local usePositions, useQueues, gridInfos, waitItems = nil, nil, nil, nil

    local sceneId = App.scene:GetCurrentSceneId()
    local agent = SceneServices.ObjectManager:GetAgent(agentId)
    if not agent then
        return gridInfos, waitItems
    end

    if templateId ~= agent:GetTemplateId() then
        return gridInfos, waitItems
    end

    local curLevel = AppServices.BuildingRepair:GetLevel(sceneId, agentId)
    local levelItems = AppServices.BuildingRepair.GetLevelItems(templateId, curLevel)
    local twoMergeCostList = {}
    for _, v in ipairs(levelItems) do
        if v[1] == TwoMergeCfgType then
            local itemId, need = v[2], v[3]
            table.insert(twoMergeCostList, { itemId = itemId, count = need })
        end
    end

    if #twoMergeCostList > 0 then
        usePositions, useQueues, gridInfos, waitItems = AppServices.TwoMergeManager:GetConsumeChangedInfo(AppServices.TwoMergeManager:GetMapId(), twoMergeCostList)
    end
    return usePositions, useQueues, gridInfos, waitItems
end

---@param twoMergeOrderItem TwoMergeOrderItem
function TwoMergeSubOrderAnimation:DoAnimation(twoMergeOrderItem, flyDataList, waitItems, finishCB)
    Util.BlockAll(1.3, "TwoMergeSubOrderAnimation")

    local needList = twoMergeOrderItem:GetNeedList()
    for _, needItem in ipairs(needList) do
        self:FlyGirdInfo( needItem, flyDataList)
        self:FlyWait( needItem, waitItems)
    end

    local complete = twoMergeOrderItem:GetComplete()
    WaitExtension.SetTimeout(function()
        if Runtime.CSValid(complete) then
            complete:SetActive(true)
        end
    end, 0.8)

    local btn_complete = twoMergeOrderItem:GetBtnComplete()
    if Runtime.CSValid(btn_complete) then
        btn_complete:SetActive(false)
    end

    local gameObject = twoMergeOrderItem:GetGameObject()
    if Runtime.CSValid(gameObject) then
        local sequenceGo = DOTween.Sequence()
        sequenceGo:Append(GameUtil.DoScale(gameObject, Vector3(0.9, 0.9, 1), 0.2, nil, 0.5))
        sequenceGo:Append(GameUtil.DoScale(gameObject, Vector3(1.05, 1.05, 1), 0.1))
        sequenceGo:Append(GameUtil.DoScale(gameObject, Vector3(1, 1, 1), 0.1))
        sequenceGo:Append(GameUtil.DoScale(gameObject, Vector3(1.1, 1.1, 1), 0.2))
        sequenceGo:Append(GameUtil.DoScale(gameObject, Vector3(0, 0, 0), 0.3))
        sequenceGo:Play()
    end

    WaitExtension.SetTimeout(function()
        Runtime.InvokeCbk(finishCB)
    end, 1.3)
end

function TwoMergeSubOrderAnimation:FlyGirdInfo( needItem, flyDataList)
    local itemId = needItem:GetInfo()
    local flyData
    local article
    for index, data in ipairs(flyDataList) do
        if (data.itemId == tostring(itemId)) then
            flyData = table.remove(flyDataList, index)
            article = AppServices.TwoMergeMapGridManager:FindItemArticle(flyData.row, flyData.col)
            break
        end
    end

    if (not flyData) then
        return
    end

    if article then
        local articleview = article:GetArticleView()
        articleview:SetActive(false)
    end

    self:DoItemAnimation(needItem, flyData.fromUIPosition)
end

function TwoMergeSubOrderAnimation:FlyWait( needItem, waitItems)
    local itemId = needItem:GetInfo()
    local find = false
    for index, waitId in ipairs(waitItems) do
        if tostring(itemId) == tostring(waitId) then
            table.remove(waitItems, index)
            find = true
            break
        end
    end

    if (not find) then
        return
    end

    local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
    local queueroot = panel.queueroot
    local rect = find(queueroot, "", RectTransform)
    self:DoItemAnimation(needItem, rect.position)
end

function TwoMergeSubOrderAnimation:DoItemAnimation(needItem, fromUIPosition)
    local itemId, itemGo = needItem:GetInfo()

    local fly_icon_go = self:Clone(self.fly_icon.gameObject, self.flyRect)
    local fly_icon = find_component(fly_icon_go, "", Image)
    fly_icon.sprite = ItemId:GetIconSprite(TwoMergeItemBigType, itemId)

    local flyIconRect = find_component(fly_icon_go, "", RectTransform)
    local startAnchoredPos = GameUtil.UIToUISpaceAnchoredPosition(self.flyRect, fromUIPosition)
    flyIconRect.anchoredPosition = startAnchoredPos
    local flyGo = flyIconRect.gameObject
    flyGo:SetActive(true)

    local finish = function()
        flyGo:SetActive(false)
        --needItem:SetActive(false)
    end
    local toAnchoredPos = GameUtil.UIToUISpaceAnchoredPosition(self.flyRect, itemGo.transform.position)
    --GameUtil.DoAnchorPos(flyIconRect, toAnchoredPos, 0.5, finish)
    local BezierCurve = require("System.Core.BezierCurve")
    local sequenceGo = DOTween.Sequence()
    local offsetX = math.abs(startAnchoredPos.x - toAnchoredPos.x)
    local offsetY = math.max(100, offsetX * 0.5)
    local controlPos = (startAnchoredPos + toAnchoredPos) * 0.5 + Vector2(0, offsetY)
    for i = 1, 5 do
        local p = BezierCurve.SecondOrder(startAnchoredPos, controlPos, toAnchoredPos, i / 5)
        sequenceGo:Append(GameUtil.DoAnchorPos(flyIconRect, p, 0.1))
        -- :SetEase(Ease.InQuart)
    end

    sequenceGo:AppendCallback(finish)
    sequenceGo:Play()
end

function TwoMergeSubOrderAnimation:Clone(child, parent)
    local go = GameObject.Instantiate(child)
    go:SetParent(parent.transform, false)
    go.transform:SetLocalPosition(Vector3.zero)
    go.transform:SetLocalEulerAngle(0, 0, 0)
    go.transform:SetLocalScale(Vector3.one)
    go:SetActive(true)
    return go
end

return TwoMergeSubOrderAnimation