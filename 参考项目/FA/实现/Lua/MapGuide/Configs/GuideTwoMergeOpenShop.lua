local config = {
    series = {
        GuideIDs.GuideTwoMergeOpenShop,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeOpenShop,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_guide_09"), -- "t: 商店功能已开启",
                            tipType = TipType.Default,
                            opacity = 150,
                            -- clickable = true,
                            -- clickType = ClickType.ClickButton,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.TwoMergePanel.panelName)
                                        local btn = panel:Tutorial_GetShopButton()
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
                    delayRun = 2,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = Runtime.Translate("merge_guide_11"), -- "t: 点击购买商品",
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local panel = PanelManager.GetPanel(GlobalPanelEnum.UITwoMergeShopPanel.panelName)
                                        local btn = panel:Tutorial_GetShopFreeButton()
                                        return btn.gameObject
                                    end,
                                    size = { width = 70, height = 25},
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
