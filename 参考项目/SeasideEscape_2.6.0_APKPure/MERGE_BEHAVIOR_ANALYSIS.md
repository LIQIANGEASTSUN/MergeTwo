# Seaside Escape 2.6.0 二合玩法实现分析

本文件依据本目录保留的 Lua 5.3 字节码及 unluac 重建文本，描述**该安装包内可见的实现**，供后续阅读和验证；不是开发者原始设计文档，也不是我们项目的玩法方案。本文只分析主棋盘，活动棋盘的差异另列。`code/Lua/decompiled/` 中的局部变量名和语法形式可能与原开发源码不同；C# 导出的空方法不用于推断玩法。逆向层级见 [完整性说明](COMPLETENESS.md)。

标记：**已见代码**表示所述分支、字段或调用直接出现在反编译函数体；**归纳**表示把多个函数连接成流程；**待验证**表示需要配置、原生实现或运行行为补证。以下链接均指向完整保留的脚本，未改动脚本内容。

## 1. 主棋盘的模块关系

| 角色 | 已见代码与依据 | 可得结论 |
|---|---|---|
| 输入和呈现 | [BaseSceneBoardView.lua](code/Lua/decompiled/Board/View/BaseSceneBoardView.lua#L816) `_OnPointerDown`、`_OnDrag`、`_OnPointerUp` | 视图计算落点、检查可移动性及教程限制，拖入库存时调用 `StoreItem`，其他拖动调用 `DragItem`。落点有 0.15 秒内的相邻合成目标吸附逻辑。 |
| 棋盘规则 | [BaseSceneBoardModel.lua](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua#L1)、[BaseBoardModel.lua](code/Lua/decompiled/Board/Model/Board/BaseBoardModel.lua#L211) | 场景棋盘基于行动棋盘和基础棋盘；本类声明 7×9 的坐标范围，负责拖放裁决、合成、生成后的事件与订单更新。不能由 7×9 推出每格都始终可用。 |
| 物品定义 | [ItemDataModel.lua](code/Lua/decompiled/Board/Model/ItemDataModel.lua#L26)、[ItemModel.lua](code/Lua/decompiled/Board/Model/Item/ItemModel.lua#L18) | 从 `ItemModel` 及特殊配置加载物品定义，按 `MergedType` 构造合成关系，物品实例保存类型、原始编码、位置、成本等数据。具体物品配置值本目录未保留。 |
| 能力装配 | [ItemModelFactory.lua](code/Lua/decompiled/Board/Model/ItemModelFactory.lua#L21)、[同文件](code/Lua/decompiled/Board/Model/ItemModelFactory.lua#L185) | 物品编码先识别泡泡、蜘蛛网、冰、障碍等包装类型；普通物品再按配置挂载 `ItemSpread`、`ItemTransform`、`ItemSwallow`、`ItemCollectable` 等组件。 |
| 状态和订单 | [MainBoardModel.lua](code/Lua/decompiled/Board/Model/Board/MainBoardModel.lua#L5)、[BaseOrder.lua](code/Lua/decompiled/Board/Model/Order/BaseOrder.lua#L131) | 主棋盘装配物品管理、棋盘层、缓存、库存和订单模型；订单状态由当前棋盘与库存物品数量计算。 |

**归纳的主流程：**触摸/拖放 → `BaseSceneBoardView` → `BaseSceneBoardModel` → `ItemModel` 及组件 → `ItemManager`/棋盘层的数据写入 → 棋盘和全局事件 → 订单模型与视图更新。该箭头表示已核对的调用和事件链，不代表所有活动棋盘都使用同一实现。

## 2. 拖放与合成规则

### 拖放裁决顺序

以下顺序直接见 [DragItem](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua#L803)：

| 顺序 | 条件 | 行为 |
|---:|---|---|
| 1 | 落点无效，或源坐标上的物品已不是传入实例 | 恢复源物品位置并结束。 |
| 2 | 目标格为空或仍是源物品 | 将物品移至目标格；位置变化经棋盘层写入。 |
| 3 | 来源有 `ItemSplit` 组件 | 调用拆分判定；可以拆分则执行，不可拆分则提示，**本次拖动不继续尝试合成或换位**。 |
| 4 | `CanItemMerge` 返回可合成 | 调用 `_MergeItem`；某些 Joker/新手情形存在确认窗口分支，其是否展示受测试模式和自动运行条件控制。 |
| 5 | 目标有 `ItemSwallow` 且能吞掉来源 | 执行吞噬。 |
| 6 | 目标不能移动 | 拒绝换位，恢复来源位置。 |
| 7 | 其余情况 | 根据 `ItemSwitch` 服务端开关直接换位，或先寻找目标附近空格安置目标物品。 |

**已见代码：**输入层先通过 [ItemModel:CanMove](code/Lua/decompiled/Board/Model/Item/ItemModel.lua#L220) 检查配置的 `Fixed`、组件的 `canMove` 和实例锁定位；拖动目标还会受教程和禁用格过滤。`DragItem` 本身并不重做输入层的全部检查，不能把这一函数单独视为完整交互入口。

### 合成判定

[CanItemMerge](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua#L652) 的可见规则：

| 类别 | 可见条件与结果 |
|---|---|
| 通常物品 | 两者类型相同，且 `GetMergedType()` 有结果。`ItemModel` 默认从配置 `MergedType` 返回结果，组件可以覆盖返回值。 |
| 使用过一次的开启型箱子 | 任一物品的 `ItemSpread:IsChestUsedOnce()` 为真时拒绝合成。 |
| 蜘蛛网或冰包裹物品 | 比对时读取包裹内的物品编码；两件都属于蜘蛛网/冰包裹时拒绝合成。组件的 `GetMergedType()` 读取内层物品配置。 |
| Joker | 走特殊分支，要求存在合成结果，双方均允许 `CanMergeByJoker()`；具体合成目标仍由 `GetMergedType()` 得到。 |
| 剪刀 | 两件 `ItemSplit` 的剩余次数相加，不超过 9999 时返回 `scissorssp_次数`。 |

**已见代码：**合成不是只修改来源物品的等级。[`_MergeItem`](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua#L909) 先删除来源，再以合成结果替换目标，产生新物品 ID；随后发送棋盘合成事件，对来源和目标周围的四方向物品发送 `OnShock`，可能生成冰/泡泡或配置允许的额外物品，刷新订单，发送全局 `ItemMerged` 事件并记录日志。额外生成受功能开关、棋盘空间、配置数量和概率约束，不能由此断言每次合成都会掉落。

## 3. 生成器状态机与产出

[ItemSpread.lua](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L1) 定义 `Initializing`、`Closed`、`Opening`、`Opened`、`OpenFinish` 五个状态。初态由 `Spread_InitDuration`、`Spread_OpenDuration` 是否存在决定；`m_startTimer` 和服务端时间用于计时，`UpdatePerSecond` 调用 `_UpdateRecoveryState` 推进初始化、开启和恢复。[初态](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L27) · [恢复](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L182) · [计时](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L381)

**已见代码的普通生成器单次产出链：**`OnTap` → `_TrySpread(false)`；自动生成器在 `Update` 中调用 `_TrySpread(true)`。工具箱收集与阳光奖励物品在 `OnTap` 内另有旁路。`_TrySpread` 先检查吞噬锁、棋盘满、未开启/开启中/初始化中、剩余次数和体力；接着调用 `GenerateItemCode` 选择产物并寻找位置，再调用棋盘 `SpreadItem` 创建物品，按本次产物修正并消耗体力，最后处理变形、一次性销毁或恢复状态。[点击入口](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L222) · [产出检查](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L1187) · [棋盘生成](code/Lua/decompiled/Board/Model/Board/BaseBoardModel.lua#L250)

| 可见产物选择路径 | 实现证据 |
|---|---|
| 列表消耗 | `ItemSpreadWeightType.List` 从保存的列表头部取出一项。 |
| 预定序列 | `RandomSequnce` 分支调用 `ItemFixedSpreadModel`；部分开关改走幸运产出模型。名称不能证明它在每次调用时做独立随机。 |
| 非物品效果 | `NotItem` 分支可通知 `ItemBattery`，不创建普通棋盘物品。 |
| 权重抽取 | 其余普通分支调用 `Table.ListWeightSelectOne`。 |
| 特殊覆盖 | 教程强制产物、补偿、能量箱、工具箱、盲盒、订单关联产物等在一般选择逻辑之前或旁路处理。 |

以上分支见 [GenerateItemCode 与 `_GenerateItemCode`](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L438)。**待验证：**各生成器真实权重、次数、时长、产物名单及服务端开关值须从对应配置或运行态取得；不能只凭字段名填数。生成器的状态、计时起点、剩余次数、序列等由 [ToSerialization/FromSerialization](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua#L91) 保存和恢复。

## 4. 订单、解锁、库存和存档

- **订单状态，已见代码。** [BaseOrder:UpdateState](code/Lua/decompiled/Board/Model/Order/BaseOrder.lua#L131) 对重复需求累计数量，先数棋盘物品，再加可用库存；状态在 `Init`、`PartiallyFinished`、`CanDeliver` 间变化。只有可交付且指定物品属于需求时，[`NowCanFinishBy`](code/Lua/decompiled/Board/Model/Order/BaseOrder.lua#L265) 才允许该物品触发交付。
- **订单消耗，已见代码。** [RemoveOrderItems](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua#L550) 对每一项需求优先使用指定物品，再查棋盘，最后尝试库存；[FinishOrder](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua#L250) 发奖并更新订单。订单模型还订阅 `ItemMerged`、`ItemSpread`、缓存取出、泡泡打开等事件，以检查是否产生新订单。[MainOrderModel.lua](code/Lua/decompiled/Board/Model/Order/MainOrderModel.lua#L235)
- **图鉴式解锁，已见代码。** [ItemDataModel:SetUnlocked](code/Lua/decompiled/Board/Model/ItemDataModel.lua#L588) 更新解锁状态并发事件；[BaseBoardModel:GenerateItem](code/Lua/decompiled/Board/Model/Board/BaseBoardModel.lua#L211) 创建物品时可以触发这一流程。物品“不能移动”的锁与图鉴“尚未解锁”由不同字段/模型管理，不能合为同一状态。
- **库存和缓存，已见代码。** [MainBoardModel:StoreItem](code/Lua/decompiled/Board/Model/Board/MainBoardModel.lua#L112) 在容量允许时从棋盘层移入库存；[ItemStoreModel:AddItem](code/Lua/decompiled/Board/Model/Board/ItemStoreModel.lua#L68) 保存物品 ID 和入库时间。缓存另由 [ItemCacheModel](code/Lua/decompiled/Board/Model/Board/ItemCacheModel.lua#L1) 管理队列/堆叠的物品编码或 ID，不能与库存混为一表。
- **持久化，已见代码。** [MainBoardModel:Init](code/Lua/decompiled/Board/Model/Board/MainBoardModel.lua#L5) 关联 `Item`、`Board`、`CacheItem`、`Inventory`、订单等数据表。[ItemManager:SetItem](code/Lua/decompiled/Board/Model/Board/ItemManager.lua#L69) 写物品属性；[SceneItemLayerModel:SetItem](code/Lua/decompiled/Board/Model/Board/SceneItemLayerModel.lua#L150) 以坐标写物品 ID。[DBTableManager](code/Lua/decompiled/Model/DB/DBTableManager.lua#L138) 经 `DatabaseModel:DatabaseTransaction` 写本地库；[SyncModel](code/Lua/decompiled/Model/Sync/SyncModel.lua#L289) 另有上传与下载流程。由此可归纳为“物品实体、格位映射、库存/缓存、订单分表保存，再由同步模型处理远端同步”，具体服务器冲突策略不在本文件展开。

## 5. 活动棋盘不宜套用主棋盘全部规则

[FreefallActivityBoardModel:DragItem](code/Lua/decompiled/FreefallActivity/Board/FreefallActivityBoardModel.lua#L177) 的合成分支先消耗活动 Token，失败时给出缺少 Token 原因，而且没有主棋盘的普通换位分支。[CloudsDashHuntBoardModel:_MergeItem](code/Lua/decompiled/CloudsDash/Board/CloudsDashHuntBoardModel.lua#L144) 覆盖合成结果选择和周围反应。[HuntActivityBoardModel:GenerateItem](code/Lua/decompiled/HuntActivity/Common/Board/HuntActivityBoardModel.lua#L193) 也覆盖生成。因此本文规则表只代表主棋盘基类中可见的流程；各活动需沿继承和覆盖方法逐个核对。

## 6. 推断边界及复核记录

| 结论 | 级别 | 依据或缺口 |
|---|---|---|
| 主棋盘采用配置驱动的物品链和组件化行为 | **归纳，高可信** | 配置加载、`MergedType` 关联、工厂装配和组件派发均有函数体。 |
| 拖放与合成、生成、订单、库存形成闭合状态流 | **归纳，高可信** | 上述调用和事件订阅均可在所引文件核对。 |
| 某个具体物品的完整链、每次生成概率、精确冷却/体力数值 | **待验证** | 本次交付未保留配置内容；部分行为还受服务端开关和活动状态影响。 |
| 所有运行时事件响应和实际玩家可见表现 | **待验证** | Lua 事件/回调存在动态派发，安装包也可能被远端更新；本次没有运行时执行验证。 |
| C# 桥接方法的真实内部逻辑 | **待验证** | AssetRipper 的 C# 方法体是占位；未恢复 IL2CPP 原生方法体。 |

**本次复核：**重新计算了 `BaseSceneBoardModel.lua/.luac`、`ItemSpread.lua/.luac` 的 SHA-256，四项均与 [SHA256SUMS.tsv](SHA256SUMS.tsv) 相符；对应 `.luac` 经 `file` 识别为 Lua 5.3 字节码，原字节码中的字符串表含 `CanItemMerge`、`DragItem`、`_MergeItem`、`GenerateItemCode`、`_TrySpread` 等名称。当前 [LUA_SYNTAX_CHECK.tsv](LUA_SYNTAX_CHECK.tsv) 记录的 178 份保留 Lua 均通过 Lua 5.3 语法解析；首次候选集的 437 份也曾全部通过。这些检查确认材料对应关系与可读性，**不是逐指令等价证明**。

后续要把“行为骨架”推进为“物品链与数值表”，需要重新取得本版本安装包中的配置，或读取与其一致的运行态配置，仅在说明文档记录发现。当前用户给出的 Seaside Escape XAPK 路径在磁盘上已不存在；现存交付代码仍可独立用于以上分析。
