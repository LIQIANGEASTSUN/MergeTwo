local config = {
    series = {
        GuideIDs.GuideTwoMergeBp,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeBp,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_system_33"), -- "t: 商店功能已开启",
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
                    delayRun = 0.8,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_system_34"), -- "t: 钓鱼活动开启",
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.UITwoMergeBpPanel.panelName)
                                        local btn = panel:Tutorial_GetFirstOne()
                                        return btn.gameObject
                                    end,
                                    size = { width = 55, height = 70 },
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
            }
        }
    }
}

return config
