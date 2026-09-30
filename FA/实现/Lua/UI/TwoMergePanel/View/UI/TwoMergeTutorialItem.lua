local TwoMergeConfig = require("Game.TwoMerge.Config.TwoMergeConfig")
---@class TwoMergeTutorialItem
local TwoMergeTutorialItem = class(nil, "TwoMergeTutorialItem")

function TwoMergeTutorialItem:ctor(gameObject)
    self:Bind(gameObject)
    MessageDispatcher:AddMessageListener(MessageType.Msg_TwoMerge_Tutorial, self.OnTutorial, self)
end
function TwoMergeTutorialItem:destroy()
    MessageDispatcher:RemoveMessageListener(MessageType.Msg_TwoMerge_Tutorial, self.OnTutorial, self)
    self = nil
end

function TwoMergeTutorialItem:Bind(gameObject)
    self.gameObject = gameObject
    self.gameObject:SetActive(false)
    self.clickroot = find_component(self.gameObject, "root/clickroot", RectTransform)
    self.dragroot = find_component(self.gameObject, "root/dragroot", RectTransform)
    self.dragrootcanvas = find_component(self.gameObject, "root/dragroot", CanvasGroup)
    self.tiproot = find_component(self.gameObject, "root/tiproot")
    self.tipcontent = find_component(self.gameObject, "root/tiproot/content/text_content", Text)
    self.imageMaskHoles = self.gameObject:GetComponent(typeof(CS.ImageMaskHoles))
end

function TwoMergeTutorialItem:SetWH(x, y, w, h)
    --- 不能调用多次
    self.imageMaskHoles:AddRect(x, y, w, h)
end

--- 来自TutorialLogic的事件
function TwoMergeTutorialItem:OnTutorial(type, args)
    self:Clear()
    if type == TwoMergeConfig.TutorialType.Merge then -- 合成
        --- args: .position1 .position2 .content
        self.gameObject:SetActive(true)
        self.dragroot.gameObject:SetActive(true)
        self.dragroot.anchoredPosition = args.position1
        self.dragrootcanvas.alpha = 0
        if self.sequence ~= nil then self.sequence:Kill(); self.sequence = nil end
        self.sequence = DOTween.Sequence()
        self.sequence:AppendInterval(1)
        self.sequence:Append(self.dragrootcanvas:DOFade(1, 0.5):SetEase(Ease.Linear))
        self.sequence:Append(self.dragroot:DOAnchorPos(args.position2, 1))
        self.sequence:Append(self.dragrootcanvas:DOFade(0, 0.5):SetEase(Ease.Linear))
        self.sequence:SetLoops(-1)
        self.sequence:Play()

        -- if self.dragtweener ~= nil then self.dragtweener:Kill(); self.dragtweener = nil end
        -- self.gameObject:SetActive(true)
        -- self.dragroot.gameObject:SetActive(true)
        -- self.dragroot.anchoredPosition = args.position1
        -- self.dragtweener = self.dragroot:DOAnchorPos(args.position2, 1):SetLoops(-1)
    elseif type == TwoMergeConfig.TutorialType.Click then -- 点击
        --- args: .position .content
        self.gameObject:SetActive(true)
        self.clickroot.gameObject:SetActive(true)
        self.clickroot.anchoredPosition = args.position
    elseif type == TwoMergeConfig.TutorialType.End then
        self.gameObject:SetActive(false)
    end
    self:CheckShowContent(args)
end

function TwoMergeTutorialItem:CheckShowContent(args)
    self.tiproot:SetActive(args ~= nil and args.content ~= nil)
    if args ~= nil and args.content ~= nil then
        self.tipcontent.text = args.content
    end
end

function TwoMergeTutorialItem:Clear()
    self.dragroot.gameObject:SetActive(false)
    self.clickroot.gameObject:SetActive(false)
end

return TwoMergeTutorialItem