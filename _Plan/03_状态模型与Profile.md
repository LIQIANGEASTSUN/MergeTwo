# 状态模型与 Profile

用户确认使用当前项目 Profile。建议由二合 Logic 持有唯一活动状态，ProfileAdapter 在完整成功边界发布深复制的持久快照。Profile 是恢复依据，不由 UI 与 Logic 同时修改同一组活动对象。

**Effect 讨论更新**：见 [10](10_Function与Effect建模讨论.md)。本文下方的 CellLock／ItemAccessState 是初稿候选表达。若 Q11 选择效果组合，锁／气泡将映射为对应宿主的效果实例，原枚举只可保留只读派生或导入映射；不能和效果同时成为可写权威。物品位置、生成次数、期限和互斥业务阶段仍需状态数据。具体替换尚未定稿。

## 身份与位置

| 名称 | 含义 | 生命周期 |
| --- | --- | --- |
| BoardDefinitionId | 棋盘配置键 | 配置稳定 |
| BoardInstanceKey | 某个实际棋盘存档的键 | 持久；首期一个实例，以后如何与活动期次关联再定 |
| ItemConfigId | 物品种类，如某条链某一级 | 配置稳定；不能作为单个物品身份 |
| ItemInstanceId | 物品的持久身份 | 移动／入仓不变；新生成／合成分配新 ID |
| EntityId | 本次运行的 Entity／View 关联 ID | 运行期；可以映射到 ItemInstanceId，不要求与其数值相同 |
| SessionGeneration | 当前运行实例代际 | 每次重建变化，隔离旧回调 |
| CellCoord | 整数行列 | 位置，不是身份 |
| CommandId／BatchId | 调用诊断关联 | 运行期，不做存档去重 |

旧代码用位置编码表示物品当前 identity，不能直接用于新方案。移动后仍应能追踪同一个生成器；原格新物品不能收到旧物品的动画／撤销回调。

## 状态归属表

| 数据 | 分类与拥有者 | 谁可写 | 是否保存 |
| --- | --- | --- | --- |
| 棋盘尺寸、初始格、物品规则、产出池 | ConfigSnapshot／ConfigAdapter | 导入构建时写，运行只读 | 保存兼容标识，不逐物品复制配置 |
| 格子锁和占位、物品位置与属性 | 运行时／BoardState | 对应 Operation.Apply | 是 |
| 生成轮次、已用次数、固定段游标、冷却时间 | 运行时／ItemEntity 专用数据 | Generator／Time Operation.Apply | 是 |
| 气泡到期时间、宝箱开启／使用状态 | 运行时／物品专用数据 | 对应 Operation.Apply | 是 |
| 二合独有测试余额／以后独立体力 | 运行时／BoardEconomyState | 统一经济规则 Operation.Apply | 是，和棋盘同一快照 |
| 宿主已有金币／钻石等 | 外部权威／宿主道具系统 | 宿主正式入口 | 宿主已有 Profile，二合不存另一套可写余额 |
| 当前选中物品 | 运行时／InteractionState | Select／Activate／Drop 等命令的 Apply | 建议不保存；重新进入为空 |
| 售出／删除撤销凭据 | 运行时／RemovalUndoState | Remove／Restore／使其失效的 Operation | 首期建议不跨关闭保存，待确认 |
| 拖拽指针、屏幕坐标、动画句柄、显示数字 | 表现／Graphic | Input／View／表现 Consumer | 否 |
| 仓库、队列、已发现物品 | 后续运行时／对应领域模块 | 后续业务 Operation | 接入时保存 |
| 物品数量索引、空格缓存、链最高级统计 | 派生缓存／所属 Logic 模块 | 同步维护或失效重算 | 否，可从权威状态重建 |
| Profile 的二合快照 | 持久投影／ProfileAdapter | 只有提交边界发布新快照 | 是 |

UI 可以读取能力查询和只读状态，但不能拿到 ProfileDict／List 后直接写。展示延迟只改变显示值，不能反向覆盖真实余额。

## 为什么选中不是纯表现

R 明确：第二次点击选中物才执行生成／使用；选中的过期气泡暂不变更；选中其它物品会关闭售出／删除撤销机会。因此最少需要逻辑的 `SelectedItemInstanceId`。

选择框、缩放、手指跟随属于 Graphic；选择的业务事实属于 Logic。选择命令还可能导致旧气泡过期处理、撤销凭据失效，它可能产生持久变化。不能按命令名简单认为 Select 永不需要存档。

隐藏与关闭建议取消交互选择并处理被选择保护的过期气泡，再保存完整结果。需在仍可接收业务命令时执行有业务含义的离开步骤，然后 BeginShutdown；真正资源释放阶段不再发普通命令。若直接强制销毁，则恢复时以“无选中状态”重新计算到期结果。策略待 Q06 确认。

## 棋盘和物品分开建模

建议最小模型如下，名称是候选，不是现有类：

```text
BoardState
  DefinitionId, InstanceKey, SchemaVersion, RulesConfigVersion
  Cells[CellCoord] -> CellState(LockState, OccupantItemId, optional RegionId)
  Items[ItemInstanceId] -> ItemState(ConfigId, Location, AccessState, specialized data)
  NextItemInstanceId
  EconomyState
  RandomState（若采用实例随机源）

InteractionState
  SelectedItemInstanceId
  RemovalUndoRecord?
```

`CellLock` 表示地格解锁进度；`ItemAccessState` 表示物品自身普通／浅锁／深锁／气泡。两者不能简单折叠，因为 R 有“生成的物品带锁”，未必改变该格的永久解锁进度。可通过统一能力查询组合限制，避免到处分别判断两个枚举。

首期只允许旧数据导入器产生受支持的组合；不要把“所有枚举笛卡尔积”都当合法。例如解锁格内气泡可以存在，深锁格内可操作物品不能因 ItemAccessState 为普通而绕过格子限制。具体归一化矩阵在 M0 冻结。

## 核心不变量

1. 每格最多一个活跃物品；棋盘内物品的 Location 与格子 OccupantItemId 双向一致。
2. 同一持久物品只能在棋盘、仓库等一个实际容器中。待领取奖励条目与已生成 ItemInstance 不能重复计数。
3. 被合成／使用／删除的物品立即退出活跃查询；退场 View 和退役凭据不计库存。
4. 生成器本轮次数、游标与轮次对应配置范围；时间单位统一，paused 与 running 状态不同时生效。
5. 任何业务拒绝都不扣费、不消耗次数、不丢物品。若选择可控随机源，拒绝也不推进其状态。
6. 撤销只恢复该次移除的完整实例，不撤销期间其它物品的操作，不覆盖已占用原格。
7. 物品自身状态与只读配置分开；图标缺失不改物品种类，也不能用 GameObject 数量计算库存。

## Profile 的两种接法

| 接法 | 好处 | 代价与限制 |
| --- | --- | --- |
| Entity 直接持有可写 Profile 对象 | 与三合已有方式相近，少一次映射 | 规则依赖 SDK；多字段逐次标脏，UI 容易取得可写对象；后台序列化可能观察写入过程 |
| **Logic 自有状态，完整结果后发布 Profile 快照** | 写入边界明确；规则可独立测试；后台只读取已发布内容 | 需要快照构建／映射和提交观察点；约 63 格规模先实测，不提前做增量复制框架 |

推荐第二种。活动状态和存档投影的用途不同，不允许两边各自演进；加载方向是 Profile → Logic，运行方向是 Logic → 新快照，View 永远不参与反写。

P.ProfileHub 已有后台序列化、版本重试、文件持久化和生命周期保存路径，但这**不是棋盘／钱包跨系统事务**。`MarkProfileChanged` 只是变更追踪；`SaveToLocal()` 返回也不代表所有异步保存已持久落盘。

建议 `ProfileMergeTwo` 具有 SchemaVersion 和一个已提交状态载荷；该载荷完整构建后替换，发布后不再原地修改嵌套集合。具体使用生成的 Profile DTO 还是稳定序列化载荷，应先核对现有生成工具支持、热更注册与序列化约定，不在设计稿中虚构不存在的自动事务 API。

若二合正式使用宿主余额，不能靠两个独立 Profile setter 宣称崩溃原子性。届时明确宿主同步结算、失败恢复和完整保存边界；M1 推荐二合专用测试余额，避免把真实全局经济接入混进架构验证。

## 保存与恢复

```text
成功的全部 Apply
→ 检查本次受影响的不变量
→ 创建新的完整持久快照并发布到 Profile
→ Graphic 播放

重新打开
→ Profile 注册／加载完成
→ 校验版本、配置键与领域不变量
→ 恢复 Logic 与 ID／随机状态
→ 执行明确的时间归一化步骤
→ 创建当前稳定 View
→ 开放输入
```

保存不含 View、退役 Entity 引用、Tween、Command、Batch 或旧回调。恢复不重放此前获得奖励／扣费，也不补播历史合成动画。SchemaVersion 与配置版本分开；缺配置要报出具体 ID，不把未知物品静默删掉。旧 Lua 线上存档是否迁移尚未要求，保留原始包，不自动接入旧协议。

配置热切换、Profile 被替换或账号切换时，先关闭当前实例，再从新权威状态重建。第一版不支持两个实例同时写同一 BoardInstanceKey。

## 有限撤销的数据

`RemovalUndoRecord` 至少保存：记录 ID、棋盘实例／代际、原物品完整稳定数据副本、原格、移除原因、已结算售出金额、有效标记。不要保存旧 Entity／View 引用。

撤销执行前再次校验记录有效、原格仍空、货币可以扣回；成功一次后失效。生成器时间采取自然时间还是冻结到删除前的剩余时长仍需决定；“保留状态”不能直接解释为复制旧截止时间就一定正确。售出金额已花掉时推荐拒绝撤销并显示原因，待确认。

不需要为所有 Operation 添加 Revert，不建立通用历史栈，也不按动画倒放实现撤销。

## 实现顺序建议

1. **Step 1：定义状态表和合法组合。** 冻结持久 ID、锁、时间、选择与撤销的归属；给每个字段指定唯一写入者。
2. **Step 2：打通 Profile 注册与样例往返。** 确认生成源／注册路径，以新存档键保存一个棋盘；验证旧账号没有该字段时可初始化，不改 ProfileMerge。
3. **Step 3：接入完整提交边界。** 发布后不再修改快照；注入表现失败验证存档仍正确，注入 Apply 失败验证没有发布半成品并关闭实例。
4. **Step 4：加入时间和有限撤销。** 分别验证生成器、气泡与删除恢复，不把运行时交互写入长期 Profile。
5. **Step 5：扩展容器与版本。** M3 加仓库／待领取队列时更新不变量、结构版本与迁移方案，保持一个活动状态拥有者。
