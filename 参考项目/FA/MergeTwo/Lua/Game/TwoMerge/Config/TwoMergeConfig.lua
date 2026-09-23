

---@class TwoMergeConfig 二合配置
local TwoMergeConfig = {

    --- 克隆概率权重
    cloneWeight = 10000,

    flyMinTime = 0.1,
    flyMaxTime = 0.5,
    --- 道具飞动画速度
    articleFlyspeed = 0.00075,
}

TwoMergeConfig.ItemDataKey = {
    historyCount = "historyCount",
    curCount = "curCount",
    ["end"] = "end",
    pause = "pause",
    cdIndex = "cdIndex",
    count = "count",
}
TwoMergeConfig.LocalArchive = {
    WaitUnlockArea = "twomerge_unlockarea_",
}
TwoMergeConfig.ItemStateDataKey = {
    ["end"] = "end",
}

--- 操作事件
TwoMergeConfig.ArticleEventKey = {
    --- 点击
    Click = "Click",
    --- Tick
    Tick = "Tick",
    --- 开始拖拽
    BeginDrag = "BeginDrag",
    --- 拖拽中
    Draging = "Draging",
    --- 拖拽结束
    DragEnd = "DragEnd",
    --- 拖拽 DragEnd 执行后处理的逻辑
    DropProcess = "DropProcess",

    --- 格子状态变化
    GridChange = "GridChange",

    --- 道具刷新显示
    RefreshShow = "RefreshShow",
    --- 初始化完成
    OnInitComplete = "OnInitComplete",
    --- 选中状态更改
    ChooseChanged = "ChooseChanged",
    --- 创建完成
    OnGenerateComplete = "OnGenerateComplete",
    --- 克隆解锁
    TriggerCloneUnlock = "TriggerCloneUnlock",
}

--- 功能类型
TwoMergeConfig.FunctionType = {

    --- Normal 状态的 Begin 从 1 开始 ---------------------------------------------
    --- 拖拽
    Drag = 1,

    --- 点击掉落：掉落的是 二合道具
    ClickDrop = 10,

    ---被动生成器
    AutoGenerator = 12,

    --- 减少CD
    ReduceCD = 20,

    --- 使用：点击掉落 体力、金币、钻石等
    Use = 30,

    --- 万能合成道具
    OmnipotentMerge = 40,

    --- 相同道具合成功能
    Merge = 50,

    --- 宝箱生成器
    NormalChest = 70,

    --- 自选宝箱
    SelectChest = 80,

    --- 剪刀
    Shears = 90,

    --- 替换位置
    Replace = 10000,
}


TwoMergeConfig.FunctionCfg = setmetatable(
    {
        _register = {
            [TwoMergeConfig.FunctionType.Drag] =             "Normal.DragFunction",
            [TwoMergeConfig.FunctionType.ClickDrop] =        "Normal.ClickDropFunction",
            [TwoMergeConfig.FunctionType.ReduceCD] =         "Normal.ReduceCDFunction",
            [TwoMergeConfig.FunctionType.Use] =              "Normal.UseFunction",
            [TwoMergeConfig.FunctionType.OmnipotentMerge] =  "Normal.OmnipotentMergeFunction",
            [TwoMergeConfig.FunctionType.Merge] =            "Normal.MergeFunction",
            [TwoMergeConfig.FunctionType.Replace] =          "Normal.ReplaceFunction",
            [TwoMergeConfig.FunctionType.NormalChest] =      "Normal.NormalChestFunction",
            [TwoMergeConfig.FunctionType.SelectChest] =      "Normal.SelectChestFunction",
            [TwoMergeConfig.FunctionType.AutoGenerator] =    "Normal.AutoGeneratorFunction",
            [TwoMergeConfig.FunctionType.Shears] =           "Normal.ShearsFunction",
        }
    },
    {
        __index = function(t, k)
            local path = t._register[k]
            path = "Game.TwoMerge.Function."..path
            local v = require(path)
            rawset(t, k, v)
            return v
        end
    }
)

--- Func 执行结果
TwoMergeConfig.FunctionResult = {
    --- 失败
    Fail = 1,
    --- 成功
    Success = 2,
    -- 成功并且退出
    SuccessAndAbort = 3,
}

--- 格子状态
TwoMergeConfig.GridState = {
    --- 未锁定
    UnLock = 0,
    ---锁定
    Lock = 1,
    --- 深度锁定
    DeepLock = 2,
}

TwoMergeConfig.GridStateCfg = setmetatable(
        {
            _register = {
                [TwoMergeConfig.GridState.UnLock] =    "TowMergeGridStateUnLock",
                [TwoMergeConfig.GridState.Lock] =      "TowMergeGridStateLock",
                [TwoMergeConfig.GridState.DeepLock] =  "TowMergeGridStateDeepLock",
            }
        },
        {
            __index = function(t, k)
                local path = t._register[k]
                path = "Game.TwoMerge.Map."..path
                local v = require(path)
                rawset(t, k, v)
                return v
            end
        }
)

--- 二合道具状态  状态枚举数字与服务器通信消息有关 不能随意更改
TwoMergeConfig.ArticleState = {
    --- 棋牌上解锁的道具
    Unlock = 0,

    ---锁定
    Lock = 1,

    --- 深度锁定
    DeepLock = 2,

    --- 气泡状态
    Bubble = 3,

}

--用于图鉴显示item产出的状态
TwoMergeConfig.ShowItemGenerateState = {
    --增长
    Grow = 1,
    --新增
    Add = 2,
}

--道具类型
TwoMergeConfig.ArticleType = {
    --普通
    Normal = 1,
    --手动生成器
    Generator = 2,
    --普通宝箱
    NormalChest = 3,
    --自选宝箱
    SelectChest = 4,
    --被动生成器
    AutoGenerator = 5,
    -- 可使用道具
    Use = 6,
    --剪刀
    Shears = 10,
    --CD道具
    CDItem = 11,
}

TwoMergeConfig.OrderRandomSimpleStartId = 1000
TwoMergeConfig.OrderRandomCommonStartId = 2000
TwoMergeConfig.OrderIdRate = 1000 -- 根据Id判断类型 /1000
--- 二合订单类型
TwoMergeConfig.OrderType = {
    --- 主订单
    Main = 1,
    --- 子订单
    Sub = 2,
    --- 固定位置订单
    Position = 3,
    --- 简单随机订单
    RandomSimple = 4,
    --- 正常随机订单
    RandomCommon = 5,
    --- 固定订单
    Fix = 6,
}

TwoMergeConfig.FlyMoveType = {
    ReplaceMove = 1,
    CreateMove = 2,
    PromptTip = 3, -- 引导提示
    AutoMergeMove = 4,
}

--- 有冲突事件时  注意顺序 (例: Merge在前 Replace在后)
TwoMergeConfig.FunctionMap = {
    [TwoMergeConfig.ArticleType.Normal] = {
        TwoMergeConfig.FunctionType.Merge,
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Replace,
    },

    [TwoMergeConfig.ArticleType.Generator] = {
        TwoMergeConfig.FunctionType.Merge,
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Replace,
        TwoMergeConfig.FunctionType.ClickDrop
    },

    [TwoMergeConfig.ArticleType.NormalChest] = {
        TwoMergeConfig.FunctionType.Merge,
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Replace,
        TwoMergeConfig.FunctionType.NormalChest
    },

    [TwoMergeConfig.ArticleType.SelectChest] = {
        TwoMergeConfig.FunctionType.Merge,
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Replace,
        TwoMergeConfig.FunctionType.SelectChest
    },

    [TwoMergeConfig.ArticleType.AutoGenerator] = {
        TwoMergeConfig.FunctionType.Merge,
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Replace,
        TwoMergeConfig.FunctionType.AutoGenerator,
    },

    [TwoMergeConfig.ArticleType.Use] = {
        TwoMergeConfig.FunctionType.Merge,
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Replace,
        TwoMergeConfig.FunctionType.Use,
    },

    [TwoMergeConfig.ArticleType.Shears] = {
        TwoMergeConfig.FunctionType.Drag,
        TwoMergeConfig.FunctionType.Shears,
        TwoMergeConfig.FunctionType.Replace,
    },

    [TwoMergeConfig.ArticleType.CDItem] = {
         TwoMergeConfig.FunctionType.ReduceCD,
         TwoMergeConfig.FunctionType.Drag,
         TwoMergeConfig.FunctionType.Merge,
         TwoMergeConfig.FunctionType.Replace,
    }
}

--- Article删除方式
TwoMergeConfig.ArticleRemoveType = {
    GM = 0, -- GM删除
    DeleteBtn = 1, -- 主动删除
    GeneratorCountEnd = 2, -- 生成器次数达到
    CloneTimeEnd = 3, -- 克隆时间达到
    MoveToBag = 4, -- 移动到背包
    UseItem = 5, -- 点击使用消耗
    Merge = 6, -- 合成时删除
}

--- DOTWEEN 动画Key -- 对应 TweenAnimation.cs   eleItem.prefab-root中的Dotween动画配置
TwoMergeConfig.TweenType = {
    --- 提示合成动画
    PromptMerge = 1,

    --- 向自己所在格子移动
    MoveToGrid = 100,

    GenerateCreate = 1001,
    MergeNew = 1002,
    ClickAni = 1003,
    CanMerge = 1004,
    Delete   = 1005,
}

--- 道具状态配置
TwoMergeConfig.ArticleStateCfg = setmetatable(
        {
            _register = {
                [TwoMergeConfig.ArticleState.Unlock] =      "ArticleStateUnLock",
                [TwoMergeConfig.ArticleState.Lock] =        "ArticleStateLock",
                [TwoMergeConfig.ArticleState.DeepLock] =    "ArticleStateDeepLock",
                [TwoMergeConfig.ArticleState.Bubble] =      "ArticleStateBubble",
            }
        },
        {
            __index = function(t, k)
                local path = t._register[k]
                path = "Game.TwoMerge.Article.State."..path
                local v = require(path)
                rawset(t, k, v)
                return v
            end
        }
)

TwoMergeConfig.ActionType = {
    ClickGenerateSucc = 1,  -- 点击生成成功
    ClickGenerateFail = 2,  -- 点击生成失败
    GridToBag = 3,          -- 道具拖动到背包
    GridChanged = 4,        -- 道具拖动换位
    SelectNew = 5,          -- 选择了新道具
}

TwoMergeConfig.TipType = {
    Great = 1,
    Good = 2,
    Lianyi = 3,
    Bowen = 4,
}

TwoMergeConfig.TutorialType = {
    Merge = 1,
    Click = 2,
    End = 10,
}

TwoMergeConfig.ClickFailType = {
    EnergyNotEnough = 1,
}

TwoMergeConfig.Encode = function(row, col) return row * 1000 + col end
TwoMergeConfig.Decode = function(gridId) return math.modf(gridId / 1000), gridId % 1000 end

TwoMergeConfig.defaultStartPosition = 1000001 -- 背包开始位置
TwoMergeConfig.IsBagGrid = function(row, col)
    local position = TwoMergeConfig.Encode(row, col)
    return position >= TwoMergeConfig.defaultStartPosition
end

TwoMergeConfig.GridWeightOrigin = 60 -- 原始宽
TwoMergeConfig.GridHeightOrigin = 60 -- 原始高
TwoMergeConfig.GridWeight = 60
TwoMergeConfig.GridHeight = 60
TwoMergeConfig.OffsetX = -TwoMergeConfig.GridWeight * 9 * 0.5
TwoMergeConfig.OffsetY = -TwoMergeConfig.GridHeight * 9 * 0.5

TwoMergeConfig.SetItemWH = function(w, h) TwoMergeConfig.GridWeight = w; TwoMergeConfig.GridHeight = h end
TwoMergeConfig.SetOffsetArgs = function(row, col)
    TwoMergeConfig.OffsetX = -TwoMergeConfig.GridWeight * col * 0.5 - TwoMergeConfig.GridWeight * 0.5
    TwoMergeConfig.OffsetY = -TwoMergeConfig.GridHeight * row * 0.5 - TwoMergeConfig.GridHeight * 0.5
end
TwoMergeConfig.GetScale = function()
    return Vector3(TwoMergeConfig.GridWeight / TwoMergeConfig.GridWeightOrigin, TwoMergeConfig.GridHeight / TwoMergeConfig.GridHeightOrigin, 1)
end

TwoMergeConfig.GridIdToPos = function(row, col)
    local tempVector2 = Vector2(0, 0)
    tempVector2.y = -( TwoMergeConfig.GridHeight * row + TwoMergeConfig.OffsetY )
    tempVector2.x =  TwoMergeConfig.GridWeight * col + TwoMergeConfig.OffsetX
    return tempVector2
end
TwoMergeConfig.PosToGridId = function(pos)
    local row = math.ceil( (-pos.y - TwoMergeConfig.OffsetY) / TwoMergeConfig.GridHeight - 0.5 )
    local col = math.ceil( (pos.x - TwoMergeConfig.OffsetX) / TwoMergeConfig.GridWeight - 0.5 )
    -- console.error(">>>  my  "..row.." "..col.."  ooo")
    return row, col
end

--- 需要时间参数 "end"
TwoMergeConfig.NeedEndTime = function(type)
    return type == TwoMergeConfig.ArticleType.Generator or
        type == TwoMergeConfig.ArticleType.NormalChest or
        type == TwoMergeConfig.ArticleType.SelectChest or
        type == TwoMergeConfig.ArticleType.AutoGenerator
end

--- 获取克隆消失 生成的道具Id
TwoMergeConfig.GetCloneFailOutput = function()
    local result = AppServices.Meta:GetConfigMetaValue("merge_clon_destruction")
    local list = table.deserialize(result)
    return list[1]
end
TwoMergeConfig.GetCloneTime = function()
    return AppServices.Meta:GetConfigMetaValueNumber("merge_clone_time", 60)
end

TwoMergeConfig.GetLocalArchive = function(archiveType, defaultValue)
    local mapId = AppServices.TwoMergeManager:MapId()
    local key = archiveType..mapId
    return AppServices.User.Default:GetKeyValue(key, defaultValue)
end
TwoMergeConfig.SetLocalArchive = function(archiveType, value)
    local mapId = AppServices.TwoMergeManager:MapId()
    local key = string.format("%s%s", archiveType, tostring(mapId))
    AppServices.User.Default:SetKeyValue(key, value, true)
end

return TwoMergeConfig