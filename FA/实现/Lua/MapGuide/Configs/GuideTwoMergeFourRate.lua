local config = {
    series = {
        GuideIDs.GuideTwoMergeFourRate,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeFourRate,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            forceComplete = function ()
                -- local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                -- if panel == nil then return true end
                return false
            end,
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_guide_12"), -- 4倍采集引导
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                                        if panel ~= nil then
                                            local btn = panel:Tutorial_GetTwoRateButton()
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
