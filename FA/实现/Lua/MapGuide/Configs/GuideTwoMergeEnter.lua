--- 引导进入棋盘
local config = {
    series = {
        GuideIDs.GuideTwoMergeEnter,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeEnter,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, -100),
                            key = Runtime.Translate("merge_guide_10"), -- "t: 点击进入二合棋盘",
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.BuildingTaskPanel.panelName)
                                        local btn = panel:GetTutorialFirstItemBtn()
                                        return btn.gameObject
                                    end,
                                    size = { width = 350, height = 40 },
                                    shape = HoleShape.Rect,
                                    hand = HandType.Click
                                }
                            },
                        }
                    },
                    finishEvent = {
                        name = GuideEvent.TargetButtonClicked,
                        value = function(_, ex)
                            return ex
                        end
                    },
                    finishOptions = {
                        disableUI = true,
                        callFunc = function() MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_TutorialStep) end
                    }
                },
            }
        }
    }
}

return config
