local config = {
    series = {
        GuideIDs.GuideTwoMergeCity,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeCity,
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(0, 0),
                            key = "merge_system_35",
                            tipType = TipType.Default,
                            opacity = 150,
                            clickable = true,
                            clickType = ClickType.TapScreen,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local btn = App.scene:GetWidget(CONST.MAINUI.ICONS.TwoMergeButton)
                                        return btn.gameObject
                                    end,
                                    size = { width = 72, height = 50 },
                                    shape = HoleShape.Rect,
                                    hand = HandType.Click
                                }
                            },
                        }
                    },
                    finishEvent = {
                        name = GuideEvent.TargetButtonClicked,
                        value = function(_, ex)
                            local btn = App.scene:GetWidget(CONST.MAINUI.ICONS.TwoMergeButton)
                            if ex == btn.gameObject then
                                return ex
                            end
                        end
                    },
                    finishOptions = {
                        disableUI = true,
                        callFunc = function()
                            local params = { mapId = AppServices.TwoMergeManager:MapId() }
                            PanelManager.showPanel(GlobalPanelEnum.TwoMergePanel, params)
                        end
                    }
                },
            }
        }
    }
}

return config
