---@class ItemDetailTip
local ItemDetailTip = {}

local ArrowDirection = {
    left =1,
    right = 2,
    bottom = 3,
    top = 4,
}

local ColorFade = Color(1,1,1,0)
local ColorDefault = Color.white

---@return ItemDetailTip
function ItemDetailTip.Create(parent)
    local go = BResource.InstantiateFromAssetName("Prefab/UI/Bag/itemTip.prefab")
    go:SetParent(parent, false)
    local itm = {}
    setmetatable(itm, {__index = ItemDetailTip})
    itm:Bind(go, parent)
    return itm
end

function ItemDetailTip:Bind(go, parent)
    self.gameObject = go
    self.parent = parent
    self.transform = go.transform
    self.imgLeftArrow = find_component(go, "leftArrow", Image)
    self.imgRightArrow = find_component(go, "rightArrow", Image)
    self.imgBottomArrow = find_component(go, "bottomArrow", Image)
    self.imgIcon = find_component(go, "imgIcon", Image)
    self.txtName = find_component(go, "txtName", Text)
    self.txtDesc = find_component(go, "txtDesc", Text)
    self.txtCount = find_component(go, "txtCount", Text)
    self.txtGetContent = find_component(go, "txtGet", Text)
    self.goBtnGet = find_component(go, "layout_btns/btnGetWay")
    self.btnLayout = find_component(go, "layout_btns")
    self.canvasGroup = find_component(go, "", CanvasGroup)
    self.tipChecker = find_component(go, "", CS.UITipChecker)
    self.tipChecker:SetCallback(
        function()
           self:HideTip()
        end
    )
    self.canvasGroup.alpha = 0
    self.getWayBtns = {}

    --初始化屏幕参数
    local min = GameUtil.ScreenToUISpace(self.parent.transform, Vector2.zero)
    local max = GameUtil.ScreenToUISpace(self.parent.transform, Vector2(Screen.width, Screen.height))
    self.screenAnchor = {min = min, max = max}
end

function ItemDetailTip:HideTip()
    DOTween.Kill(self.canvasGroup)
    self.canvasGroup.alpha = 0
    self.canvasGroup.blocksRaycasts = false
    self.tipChecker:SetRaycastEnable(false)
    self:CleanBtns()
end

function ItemDetailTip:Show(dt, pos, dir)
    if not pos or not dt then
        console.error("传入的pos或者dt为空")
        return
    end
    local config = dt.config
    self.txtName.text = Runtime.Translate(config.name)
    self.txtDesc.text = Runtime.Translate(config.desc)
    if dt.data then
        self.txtCount.text = string.format("%s%d", Runtime.Translate("ui_common_own2"), dt.data.count)
    else
        local cnt = AppServices.SkinEquipManager:GetSkinCount(config.id)
        self.txtCount.text = string.format("%s%d", Runtime.Translate("ui_common_own2"), cnt)
    end
    self:HandleGetWays(config)
    if dt.partnerConfig then
        local path = string.format("Prefab/RuntimeIcons/Dragons/%s.png", dt.partnerConfig.icon)
        AppServices.ItemIcons:LoadSpriteAsync(path, function(spr)
            UITool.AdaptImage(self.imgIcon, spr, 106)
        end)
        local partner = AppServices.MagicalCreatures:GetCreatureByType(dt.partnerConfig.type)
        if not partner then
            self:SetPartnerComposeBtn(dt)
        end
    else
        local spr = AppServices.ItemIcons:GetSprite(config.id)
        UITool.AdaptImage(self.imgIcon, spr, 98)
    end
    if dt.hideBtn then
        for index, value in ipairs(self.getWayBtns) do
            value:SetActive(false)
        end
        self.getWayBtns = {}
    end
    self:AdaptBgSize()
    self:AdaptPosition(pos, dir)
    self.canvasGroup:DOFade(1, 0.2)
    self.canvasGroup.blocksRaycasts = true
    self.tipChecker:SetRaycastEnable(true)
end

function ItemDetailTip:AdaptPosition(pos, dir)
    local uPos = GameUtil.UIToUISpaceAnchoredPosition(self.parent.transform, pos)
    local tPos = Vector2(uPos.x, uPos.y)
    if not dir then
        dir = ArrowDirection.left
    end

    local min = self.screenAnchor.min
    local max = self.screenAnchor.max
    local sizeDelta = self.transform.sizeDelta
    local tmpPos = tPos
    if dir == ArrowDirection.right then
        if tPos.x - sizeDelta.x -25 < min.x then
            dir = ArrowDirection.left
            tPos.x = tmpPos.x + sizeDelta.x/2 + 25
        else
            tPos.x = tmpPos.x - sizeDelta.x/2 - 25
        end
    elseif dir == ArrowDirection.bottom then
        if tPos.y + sizeDelta.y + 25 > max.y then
            dir = ArrowDirection.top
            tPos.y = tPos.y - sizeDelta.y / 2 - 25
        else
            tPos.y = tPos.y + sizeDelta.y / 2 + 25
        end
    elseif dir == ArrowDirection.left then
        if tPos.x + sizeDelta.x + 25 > max.x then
            dir = ArrowDirection.right
            tPos.x = tmpPos.x - sizeDelta.x/2 - 25
        else
            tPos.x = tmpPos.x + sizeDelta.x/2 + 25
        end
    end

    local vertical = false
    if dir == ArrowDirection.left or dir == ArrowDirection.right then
        tPos.y = math.clamp(tPos.y, min.y + sizeDelta.y/2, max.y - sizeDelta.y /2)
        vertical = true
    else
        tPos.x = math.clamp(tPos.x, min.x, max.x)
    end

    self:HandleArrows(dir)
    self.transform.anchoredPosition = tPos

    ---处理箭头
    local arrowTrans = nil
    if dir == ArrowDirection.left then
        arrowTrans = self.imgLeftArrow.transform
    elseif dir == ArrowDirection.right then
        arrowTrans = self.imgRightArrow.transform
    elseif dir == ArrowDirection.bottom then
        arrowTrans = self.imgBottomArrow.transform
    end
    if arrowTrans then
        local tmp = GameUtil.UIToUISpaceAnchoredPosition(self.transform, pos)
        local vt = arrowTrans.anchoredPosition
        if vertical then
            vt.y = tmp.y
        else
            vt.x = tmp.x
        end
        arrowTrans.anchoredPosition = vt
    end
end

function ItemDetailTip:HandleArrows(dir)
    if not dir then
        dir = ArrowDirection.left
    end
    if dir == ArrowDirection.left then
        self.imgRightArrow.color = ColorFade
        self.imgLeftArrow.color = ColorDefault
        self.imgBottomArrow.color = ColorFade
    elseif dir == ArrowDirection.right then
        self.imgRightArrow.color = ColorDefault
        self.imgLeftArrow.color = ColorFade
        self.imgBottomArrow.color = ColorFade
    elseif dir == ArrowDirection.bottom then
        self.imgRightArrow.color = ColorFade
        self.imgLeftArrow.color = ColorFade
        self.imgBottomArrow.color = ColorDefault
    end
end

function ItemDetailTip:HandleGetWays(config)
    local getWays = AppServices.GetWay.get(config.id)
    local showBtn = config.getWays[1] ~= GetWayType.none
    local getWayNum = #getWays
    if showBtn then
        if config.funcType == 31 or config.funcType == 4 or getWayNum == 1 then
            local btn = BResource.InstantiateFromGO(self.goBtnGet)
            btn:SetParent(self.btnLayout, false)
            btn:SetActive(true)
            local goBlue = find_component(btn, "imgBlue")
            goBlue:SetActive(true)
            local way = getWays[1]
            local txt = find_component(btn, "txtCommon", Text)
            Runtime.Localize(txt, way.str2 or way.str or "ui_common_get")
            local function handleWays(ways, index)
                if ways and ways[index] then
                    local handler = ways[index].handle
                    if handler then
                        local state = handler(config.id) -- handler(config.id, 1)
                        if not state then
                            handleWays(ways, index+1)
                        end
                    else
                        if ways[index].str then
                            -- UITool.ShowContentTipAni(Runtime.Translate(ways[index].str))
                        end
                    end
                end
            end
            Util.UGUI_AddButtonListener(
                btn,
                function()
                    handleWays(getWays, 1)
                end
            )
            table.insert(self.getWayBtns, btn)
        else
            for _, v in ipairs(getWays) do
                local btn = BResource.InstantiateFromGO(self.goBtnGet)
                btn:SetParent(self.btnLayout, false)
                btn:SetActive(true)
                local goBlue = find_component(btn, "imgBlue")
                goBlue:SetActive(true)
                local way = v
                local txt = find_component(btn, "txtCommon", Text)
                txt.text = Runtime.Translate(way.str)
                Util.UGUI_AddButtonListener(
                    btn,
                    function()
                        local handler = way.handle
                        if handler then
                            handler(config.id)
                        end
                    end
                )
                table.insert(self.getWayBtns, btn)
            end
        end
    end
end

function ItemDetailTip:SetPartnerComposeBtn(dt)
    local needCount = dt.config.funcParam[2]
    local curCount = dt.data.count
    if curCount >= needCount then
        local btn = BResource.InstantiateFromGO(self.goBtnGet)
        btn:SetParent(self.btnLayout, false)
        btn:SetActive(true)
        local goGreen = find_component(btn, "imgGreen")
        goGreen:SetActive(true)
        local txt = find_component(btn, "txtCommon", Text)
        txt.text = Runtime.Translate("UI_Partner_handbook__button_3")
        local pos = txt.transform.anchoredPosition
        pos.x = -57
        txt.transform.anchoredPosition = pos
        txt = find_component(btn, "txtChip", Text)
        txt.text = string.format("%d/%d", curCount, needCount)
        txt.gameObject:SetActive(true)
        Util.UGUI_AddButtonListener(btn, function()
            self:ComposePartner(dt.data.itemId)
        end)

        table.insert(self.getWayBtns, btn)
    end
end

function ItemDetailTip:ComposePartner(itemId)
    local function cbk(state, data)
        if state then
            self:HideTip()
            local config = data:GetConfig()
            sendNotification(BagPanelNotificationEnum.ComposePartner, config)
        end
    end
    AppServices.PartnerManager:ComposePartner(itemId, cbk)
end

function ItemDetailTip:CleanBtns()
    if #self.getWayBtns then
        for _, v in ipairs(self.getWayBtns) do
            Runtime.CSDestroy(v)
        end
        self.getWayBtns = {}
    end
end

function ItemDetailTip:AdaptBgSize()
    local btnCount = #self.getWayBtns
    if btnCount > 0 then
        self.txtGetContent.text = Runtime.Translate("UI_get_way1")
    else
        self.txtGetContent.text = ""
    end
    local sizeDelta = self.transform.sizeDelta
    sizeDelta.y = 245 + btnCount * 75
    self.bgHeight = sizeDelta.y
    self.transform.sizeDelta = sizeDelta
end

---@param direction directions
function ItemDetailTip:ShowTip(itemId, targetBgGo, direction, specifiedGetWays, localOffset)
    local config = AppServices.Meta:GetItemMeta(itemId)
    local data = {config = config, data = {itemId = itemId, count = AppServices.User:GetItemAmount(itemId)}}
    self:Show(data, targetBgGo.transform.position, direction)
end

function ItemDetailTip:HandlePosition()
    if self.direction then
        self:SetPosition(self.direction)
        self.direction = nil
    else
        self:SetPosition()
    end
end
function ItemDetailTip:Destroy()
    self.copyComponents = nil
    if Runtime.CSValid(self.go) then
        self.go:SetActive(false)
        Runtime.CSDestroy(self.go)
        MessageDispatcher:RemoveMessageListener(MessageType.Global_After_Show_Panel, self.HideTip, self)
    end
end

return ItemDetailTip
