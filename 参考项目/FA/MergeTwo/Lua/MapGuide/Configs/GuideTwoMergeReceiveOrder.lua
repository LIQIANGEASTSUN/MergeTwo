local config = {
    series = {
        GuideIDs.GuideTwoMergeReceiveOrder,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeReceiveOrder,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_guide_05"), -- "t: 点击提交订单",
                            tipType = TipType.Default,
                            opacity = 150,
                            -- clickable = true,
                            -- clickType = ClickType.ClickButton,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                                        local btn = panel:Tutorial_GetOrderButtonComplete()
                                        return btn.gameObject
                                    end,
                                    size = { width = 65, height = 30 },
                                    shape = HoleShape.Rect,
                                    hand = HandType.Click
                                }
                            },
                        }
                    },
                    finishEvent = {
                        -- name = GuideEvent.ClickAnywhere,
                        name = GuideEvent.TargetButtonClicked,
                        value = function(_, ex)
                            return ex
                            -- local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                            -- local btn = panel:Tutorial_GetTwoRateButton()
                            -- if ex == btn.gameObject then
                            --     return ex
                            -- end
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
