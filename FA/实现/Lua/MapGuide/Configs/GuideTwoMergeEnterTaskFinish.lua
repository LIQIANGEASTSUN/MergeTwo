--- 引导进入棋盘
local config = {
    series = {
        GuideIDs.GuideTwoMergeEnterTaskFinish,
    },

    seriesConfig = {
        {
            id = GuideIDs.GuideTwoMergeEnterTaskFinish,
            reusedId = function(param) return TimeUtil.ServerTime() end, -- 由逻辑判断发生
            steps = {
                {
                    delayRun = 1,
                    options = {
                        disableUI = false,
                        mask = {
                            tipPosition = Vector2(-250, -200),
                            key = Runtime.Translate("merge_guide_15"),
                            tipType = TipType.Default,
                            opacity = 150,
                            holes = {
                                [1] = {
                                    type = HoleType.UI,
                                    value = function()
                                        local btn = App.scene:GetWidget(CONST.MAINUI.ICONS.TwoMergeButton)
                                        return btn.gameObject
                                    end,
                                    size = { width = 40, height = 40 },
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
                    }
                },
            }
        }
    }
}

return config
