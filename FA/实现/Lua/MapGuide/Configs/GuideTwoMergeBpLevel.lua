local config = {
    series = {
        GuideIDs.GuideTwoMergeBpLevel,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeBpLevel,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_system_33"), 
                            tipType = TipType.Default,
                            opacity = 150,
                            -- clickable = true,
                            -- clickType = ClickType.ClickButton,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                                        local btn = panel:Tutorial_GetBpButton()
                                        return btn.gameObject
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
                        callFunc = function() end
                    }
                },
                {
                    --startEvent = {
                    --    {
                    --        name = GuideEvent.PanelPoppedOut,
                    --        value = GlobalPanelEnum.UITwoMergeBpPanel.panelName
                    --    }
                    --},
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_system_34"),
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.UITwoMergeBpPanel.panelName)
                                        local btn = panel:Tutorial_GetAllBtn()
                                        return btn.gameObject
                                    end,
                                    size = { width = 100, height = 40 },
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
                        end
                    },
                    finishOptions = {
                        disableUI = true,
                        callFunc = function() end
                    }
                },
            }
        }
    }
}

return config
