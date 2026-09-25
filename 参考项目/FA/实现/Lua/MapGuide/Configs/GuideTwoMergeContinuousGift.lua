local config = {
    series = {
        GuideIDs.GuideTwoMergeContinuousGift,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeContinuousGift,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            forceComplete = function ()
                return false
            end,
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_guide_18"), -- 无尽追逐礼包引导提示
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                                        if panel ~= nil then
                                            local btn = panel:Tutorial_GetContinuousGiftButton()
                                            return btn.gameObject
                                        end
                                        return nil
                                    end,
                                    size = { width = 50, height = 50 },
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
                        callFunc = function()
                            MessageDispatcher:SendMessage(MessageType.Msg_TwoMerge_TutorialStep)
                        end
                    }
                },
            }
        }
    }
}

return config
