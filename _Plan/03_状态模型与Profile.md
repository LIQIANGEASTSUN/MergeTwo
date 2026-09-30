# 状态模型与 Profile

D02 的 Profile 指外部宿主 meatloaf_client/client 的基础设施，实际路径见 [00](00_参考资料与证据.md)。建议由二合 Logic 持有唯一活动状态，ProfileAdapter 在完整成功边界发布深复制的持久快照。Profile 是恢复依据，不由 UI 与 Logic 同时修改同一组活动对象。

**D13／D14 已确认 Tile／Element 各自存档与先格子、后元素的恢复顺序。** 本文的状态表示业务当前数据；D19 已确认 Function／Effect 各自拥有数据且不建独立 State 层，能力／效果数据导出与恢复约定见 10，实际 Profile 映射继续由存档专题确定，生成次数与冷却按 D15 归生成 Function。D20 的综合权限查询结果不作为可写字段或存档；后文专用数据记录的 State 后缀不表示独立 State 行为层。Profile 快照与执行提交仍是候选，不因确认基础字段而一并定案。概念见 [10](10_Function与Effect建模讨论.md)，业务权限见 [04](04_棋盘交互与合成.md)。

## 已生成的存档类（D16，2026-09-30 静态核对）

实际目录为 [Assets/Game/MergeTwo/Profile](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile)，命名空间为 **BettaSDK.Profile**。以下记录读取到的现状：

| 生成类 | 实际字段／属性 | 对应方案 |
| --- | --- | --- |
| [ProfileMergeTwo](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/ProfileMergeTwo.cs) | TileList: ProfileList<Tile>；ElementList 当前也是 ProfileList<Tile> | 两类记录的存档根；ElementList 的泛型见下方待核对项 |
| [Tile](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/Tile.cs) | Pos: Position；CfgId: int | 格子坐标与配置 ID；没有 ElementId 字段 |
| [Element](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/Element.cs) | Pos: Position；CfgId: int | 元素坐标与自身配置 ID |
| [Position](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/Position.cs) | X: int；Y: int | 整数坐标记录，X／Y 与行列、原点的对应随布局约定确定 |

方案中的 Coord 对应 **Pos（X、Y）**，ConfigId 对应 **CfgId**；存档实现沿用实际生成名，不额外保存同义 Coord／ConfigId 字段。Tile.CfgId 对应配置类型 MergeTwo.Two.Config.Tile 的 ID，具体配置见 [06](06_表现与资源.md#tile-与-element-的表现d10d11-已确认)。

这四个存档类继承 ProfileBase；公开属性带 JsonIgnore，实际 JsonProperty 在对应私有字段上。属性 setter 在值或引用发生变化时调用 ProfileHub.Instance.MarkProfileChanged()；本轮没有据此推定列表增删、嵌套改动和落盘的完整行为，ProfileList／ProfileBase／保存入口仍需在接入时核对。

### ElementList 的生成定义待核对

当前 ProfileMergeTwo 的 **_ElementList 与 ElementList 均为 ProfileList<Tile>**，虽然同目录已经生成独立 Element 类。按已确认的 Tile／Element 分别存档方案，预期应为 **ProfileList<Element>**。应核对生成源中的 ElementList 元素类型，再重新生成；本轮如实记录差异，没有把当前文件描述成已修正或已完成接入。两种记录目前同有 Pos／CfgId，不能仅因当前字段相同就忽略类型差异。

当前 Tile／Element 生成类正文尚未声明锁状态、Function 自有数据或持久元素 ID；未来需要时按已确认归属扩展生成定义。ProfileMergeTwo 正文也未声明原候选 SchemaVersion／完整提交载荷字段，不能把候选结构写成已有实现。

## 身份与位置

| 名称 | 含义 | 确认范围与寿命 |
| --- | --- | --- |
| Tile 的 ConfigId | 格子外观配置键 | 已确认保存；不同格子可共用 |
| Element 的 ConfigId | 元素种类配置键 | 已确认保存；不能作为某一件物品的实例身份 |
| Tile 的 Coord | 格子自己的坐标 | 已确认保存；用于实例内查格 |
| Element 的 Coord | 元素当前所在格子坐标 | 已确认保存；移动时改变 |
| Tile 的 ElementId | 当前占位元素的运行 ID | 已确认仅运行时保存，恢复时重建，不进入 Tile 存档 |
| EntityId | 运行 Entity／View 的身份关联 | 基础绑定候选；分配与跨存档映射待定 |
| ElementInstanceId（候选） | 若需要跨保存引用某件元素，使用的持久身份 | 是否需要独立字段、如何与运行 ID 对应仍待讨论 |
| InstanceKey／LayoutConfigId（候选） | 存档实例键／初始布局配置键 | 存档装配元数据，不要求重新建立 Board 对象 |
| SessionGeneration／绑定版本（候选） | 隔离旧会话与旧 View 回调 | 重建／换绑时更新，具体协议待定 |
| CommandId／BatchId（候选） | 调用诊断关联 | 运行期，不作存档去重 |

旧代码以位置编码表达物品 identity，是来源事实；新运行关系必须能区分同格前后不同元素。具体持久身份方案未在本轮确认。

## 状态归属表

标注 D13／D15 的归属已确认；其余拥有者、写入入口和保存策略沿用候选方案，不能视为本轮全部批准。

| 数据 | 分类与拥有者 | 谁可写 | 是否保存 |
| --- | --- | --- | --- |
| 棋盘尺寸、初始格、物品规则、产出池 | ConfigSnapshot／ConfigAdapter | 导入构建时写，运行只读 | 保存兼容标识，不逐物品复制配置 |
| Tile 坐标、配置 ID；以后归属 Tile 的业务状态 | EntityTile／Tile 自己的存档 | TileSystem 初始化；运行修改经最终确定的业务入口 | 是，D13 已确认；具体锁归属未定 |
| Element 坐标、配置 ID 与自身业务数据 | EntityElement／Element 自己的存档 | ElementSystem 初始化；运行修改经最终确定的业务入口 | 坐标、配置 ID 已确认保存；其它数据协议待定 |
| Tile.ElementId | EntityTile 运行数据／占位关系 | ElementSystem 与 TileSystem 统一维护 | **否，恢复元素时重建** |
| 生成次数、冷却及项目算法所需轮次／游标 | 生成 Function 的内部字段或自有数据记录 | 生成／时间业务入口；Operation 方案仍待确认 | 需恢复的字段保存，具体载体待定；不另建 State 层 |
| 气泡到期时间、宝箱开启／使用状态 | 运行时／物品专用数据 | 对应 Operation.Apply | 是 |
| 二合独有测试余额／以后独立体力 | 运行时／经济模块自有数据（候选） | 统一经济规则 Operation.Apply | 是，和棋盘同一快照 |
| 宿主已有金币／钻石等 | 外部权威／宿主道具系统 | 宿主正式入口 | 宿主已有 Profile，二合不存另一套可写余额 |
| 当前选中物品 | 运行时／InteractionState | Select／Activate／Drop 等命令的 Apply | 建议不保存；重新进入为空 |
| 售出／删除撤销凭据 | 运行时／RemovalUndoState | Remove／Restore／使其失效的 Operation | 首期建议不跨关闭保存，待确认 |
| 拖拽指针、屏幕坐标、动画句柄、显示数字 | 表现／Graphic | Input／View／表现 Consumer | 否 |
| 仓库、队列、已发现物品 | 后续运行时／对应领域模块 | 后续业务 Operation | 接入时保存 |
| 物品数量索引、空格缓存、链最高级统计 | 派生缓存／所属 Logic 模块 | 同步维护或失效重算 | 否，可从权威状态重建 |
| Profile 的二合快照 | 持久投影／ProfileAdapter | 只有提交边界发布新快照 | 是 |

UI 可以读取能力查询和只读状态，但不能拿到 ProfileDict／List 后直接写。展示延迟只改变显示值，不能反向覆盖真实余额。

## 为什么选中不是纯表现

R 明确：第二次点击选中物才执行生成／使用；选中的过期气泡暂不变更；选中其它物品会关闭售出／删除撤销机会。因此最少需要逻辑的 `SelectedElementId`。

选择框、缩放、手指跟随属于 Graphic；选择的业务事实属于 Logic。选择命令还可能导致旧气泡过期处理、撤销凭据失效，它可能产生持久变化。不能按命令名简单认为 Select 永不需要存档。

隐藏与关闭建议取消交互选择并处理被选择保护的过期气泡，再保存完整结果。需在仍可接收业务命令时执行有业务含义的离开步骤，然后 BeginShutdown；真正资源释放阶段不再发普通命令。若直接强制销毁，则恢复时以“无选中状态”重新计算到期结果。策略待 Q06 确认。

## Function／Effect 的数据接入

D22／D23 已将模块的数据导出与恢复约定收敛到 [10 第 8 节](10_Function与Effect建模讨论.md#8-保存恢复合成与移除)：Function 按稳定槽位键恢复，Effect 按每份记录恢复并重建运行身份；不保存综合权限或 View。新建与恢复分开，恢复不执行重复奖励／扣费／期限重置。已有生成类尚需按存档专题扩展，稳定字段契约不等于完整 Profile 快照与落盘协议已经确定。

## Tile 与 Element 分开存档（D13 已确认）

具体存档类已由 D16 提供；以下示意沿用实际字段名。ElementList 的目标类型仍需完成上节的生成定义核对，Function 等扩展字段待设计：

```text
BettaSDK.Profile.Tile
  Pos: Position { X, Y }
  CfgId: int
  后续归属 Tile 的业务状态（需要时扩展生成定义）

BettaSDK.Profile.Element
  Pos: Position { X, Y }
  CfgId: int
  Function 自有数据及其它需要恢复的业务数据（扩展字段与协议待定）

运行时
  TileSystem：按坐标查 EntityTile
    Coord、ConfigId、ElementId（可为空，不写入 Tile 存档）
  ElementSystem：按运行 ID 查 EntityElement
    Coord、ConfigId、自身功能数据
```

编辑器为 Tile 指定初始配置 ID；恢复已有局面时，TileSystem 读取 **Tile 自己的存档** 创建格子，不能仅用初始布局覆盖已有 Tile 数据。新局如何由编辑器布局产生初始记录，属于初始化接入细节。

已生成的 ProfileMergeTwo 通过 TileList／ElementList 组织两类记录；ElementList 泛型按上节核对。物理文件组织、完整快照／替换载荷、版本元数据、随机状态和持久 ID 分配器仍随 Profile 接入确定。EntityTile.ElementId 与 View 引用均不进入 Tile 存档。

## 锁数据归属与表示（待讨论）

锁归属由 [待讨论项 3](../待讨论项/3_锁的归属与分阶段解锁.md)裁定。若某事实独属于格子进度，由 Tile 自己保存；若随元素存在，由 Element 保存。**D17 已确认一级锁下没有 EntityElement，首次进入二级锁时才创建。** 此前“一级锁已创建但隐藏”的候选退出；需要创建的元素配置／初始参数从哪里取得、待揭示内容由谁保存，继续由第 3、7 项确定，不能仅凭 Tile 外观 CfgId 推定。

| 候选表示 | EntityTile 上 | EntityElement 上 |
| --- | --- | --- |
| 少量字段与专用数据 | 格子锁数据 | 元素限制与气泡期限等专用数据 |
| 效果组合 | 归属格子的效果数据 | 归属元素的效果数据 |

以上是锁的具体表示候选，不撤销 D19 的 Function＋Effect 方向；D21 先验证 EntityElement，Tile 是否采用 Effect 仍待讨论，也不要求两侧同时有锁。同一事实只保留一份可写数据。生成器次数与冷却按 D15 留在生成 Function；项目需要的其它轮次、游标由该 Function 管理，不因选择 Effect 而复制。

## 一级锁揭示时的元素创建（D17 已确认）

- 一级锁时没有该 EntityElement 实例与实例存档记录，EntityTile.ElementId 为空；恢复时不为一级锁内容预建隐藏元素。
- 一级锁进入二级锁的逻辑变化中创建 EntityElement，建立占位，并将元素按 Pos／CfgId 纳入自身存档；ElementId 继续仅保留在 EntityTile 的运行数据中。
- 从已保存的二级锁恢复时，按 Element 存档恢复原有元素；不能因“当前为二级锁”再次创建或重置元素。
- 表现层显示创建与揭示的结果，动画完成回调不决定元素是否存在。一级锁格没有占位也仍可禁止普通放入。
- 待揭示内容的配置来源和持久化字段留给锁／存档专题，当前生成的 Tile 类尚未由此增加字段。

## 核心不变量

第 1 项及恢复结构检查已随 D14 确认；其余为对应业务的候选约束，随各主题继续裁定。

1. 每格最多一个活跃元素；EntityElement.Coord 与对应 EntityTile.ElementId 一致，恢复占位时重建该关系，ElementId 不写入 Tile 存档。
2. 同一元素只能在一个实际容器中；仓库等外围接入后沿用此约束。待领取条目与已创建 EntityElement 不重复计数。
3. 被合成／使用／删除的元素退出活跃查询，退场 View 不计库存。若采用持久 ElementInstanceId，撤销可恢复原身份，并以新的绑定版本隔离旧回调；持久 ID 分配器不因撤销回退。具体身份与退役机制仍待讨论。
4. 生成 Function 自有次数、冷却及其它字段满足所选项目算法；需要阶段时保证表示一致，具体轮次和游标规则不作为通用架构约束。
5. 任何业务拒绝都不扣费、不消耗次数、不丢物品。若选择可控随机源，拒绝也不推进其状态。
6. 撤销只恢复该次移除的完整实例，不撤销期间其它物品的操作，不覆盖已占用原格。
7. 物品自身状态与只读配置分开；图标缺失不改物品种类，也不能用 GameObject 数量计算库存。

## Profile 的两种接法

| 接法 | 好处 | 代价与限制 |
| --- | --- | --- |
| Entity 直接持有可写 Profile 对象 | 与三合已有方式相近，少一次映射 | 规则依赖 SDK；多字段逐次标脏，UI 容易取得可写对象；后台序列化可能观察写入过程 |
| **Logic 自有状态，完整结果后发布 Profile 快照** | 写入边界明确；规则可独立测试；后台只读取已发布内容 | 需要快照构建／映射和提交观察点；约 63 格规模先实测，不提前做增量复制框架 |

推荐第二种。活动状态和存档投影的用途不同，不允许两边各自演进；加载方向是 Profile → Logic，运行方向是 Logic → 新快照，View 永远不参与反写。

2026-09-25 对 P.ProfileHub 的历史核对记录了后台序列化、文件持久化与生命周期保存路径；不能据此认定棋盘／钱包跨系统事务。该次核对的 `SaveToLocal(bool persistence = false, ...)` 返回 void：默认路径可排队保存，显式持久化路径也在内部捕获错误；不能只凭“调用返回”判断落盘成功。实际入口见 00。

现有生成 ProfileMergeTwo 已包含 TileList／ElementList。原方案提出增加 SchemaVersion 与完整提交载荷后一次替换，仍是待讨论的接入候选；这些不是当前类正文已声明的字段。后续在现有生成结构上比较直接接入、独立运行数据映射或必要的生成定义扩展，再确定发布方式，不能仅凭类已生成就认定具备快照替换或事务语义。

若二合正式使用宿主余额，不能靠两个独立 Profile setter 宣称崩溃原子性。届时明确宿主同步结算、失败恢复和完整保存边界；M1 推荐二合专用测试余额，避免把真实全局经济接入混进架构验证。

## 发布与落盘分开处理

| 阶段 | 本方案所说的成功 | 失败处理 |
| --- | --- | --- |
| 业务求解／Apply | 完整业务操作已执行且不变量成立 | 正常拒绝无副作用；异常写入可能不完整，关闭实例 |
| 快照构建／发布 | 独立载荷构建完并交给 Profile；发布后不再修改 | 保留上一份确认快照，关闭写入口，不播放本次成功表现 |
| 宿主实际落盘 | 保存系统确认相应版本已持久化 | 不自动撤回已发布逻辑，不重放业务；明确报告／重试保存 |

发布中途报错且结果不明时先停写；恢复前核对实际发布／持久化版本，不能直接用旧快照覆盖可能已经保存的新结果。

当前设计不承诺每次点击后立即抗进程崩溃。M1 应明确关闭时的持久化请求、成功／失败可观测方式和重开验证；“同一进程从 Profile 对象重建”与“清除内存、从磁盘恢复”是两项测试。若要求每次操作都耐久提交，需要另定宿主保存协议，不靠增加快照复制解决。

## 保存与恢复

完整业务成功后发布快照仍为 Profile 候选方案：

```text
完整业务操作成功
→ 检查受影响的数据关系
→ 构建 Tile 与 Element 的完整持久记录，Tile 不写 ElementId
→ 发布 Profile 快照
→ Graphic 消费业务结果
```

**初始化顺序及恢复边界已确认（D14）：**

1. 加载 Tile／Element 存档，校验 Tile 坐标唯一、配置可解析、元素坐标指向有效格子、同一格没有重复元素。
2. TileSystem 遍历 ProfileMergeTwo.TileList，以记录的 Pos.X／Pos.Y 和 CfgId 创建全部 EntityTile；已有业务状态按以后生成的字段恢复，ElementId 初始为空。
3. ElementSystem 遍历 ProfileMergeTwo.ElementList，以元素记录的 Pos 与 CfgId 创建 EntityElement，按坐标找到 EntityTile，并填入运行 ElementId；正式对接前先核对上节 ElementList 的泛型。
4. 全部创建与关联完成后，再启用依赖完整格子／元素集合的查询、自动行为和计时结算。字段恢复与 Function 构造可在创建阶段完成。
5. EntityViewTile／EntityViewElement 绑定已有逻辑对象并显示当前结果；表现完成回调不负责创建占位或触发首次生成。

二级锁等已有元素记录按存档恢复；D17 指定的一级锁不预建元素。初始化不使用玩家“是否可放入新物品”的权限拒绝原有占位。恢复后，锁定与其它行为限制继续生效。结构错误不得静默覆盖或丢弃记录；具体错误恢复／迁移方式仍待确定。

各自存档仍须对应同一轮完整业务结果。保存不含 View、退役 Entity 引用、Tween、Command、Batch 或旧回调；恢复不重放已完成奖励／扣费，也不补播历史合成动画。时间归一化的具体算法、View 资源装配与开放输入协议继续讨论。

SchemaVersion 与配置版本分开，缺配置报告具体 ID；旧 Lua 存档迁移未被要求，保留原始包。配置热切换、Profile 替换或账号切换时如何关闭与重建，沿用候选生命周期方案；同一存档实例的并发写入策略未在本轮扩展。

实施时分别验证同进程重建与清除内存后的磁盘恢复，不能把发布到 Profile 当作已经完成落盘。

## 有限撤销的数据

`RemovalUndoRecord` 至少保存：记录 ID、棋盘实例／代际、原物品完整稳定数据副本、原格、移除原因、已结算售出金额、有效标记。不要保存旧 Entity／View 引用。

撤销执行前再次校验记录有效、原格仍空、货币可以扣回；成功一次后失效。生成器时间采取自然时间还是冻结到删除前的剩余时长仍需决定；“保留状态”不能直接解释为复制旧截止时间就一定正确。售出金额已花掉时推荐拒绝撤销并显示原因，待确认。

不需要为所有 Operation 添加 Revert，不建立通用历史栈，也不按动画倒放实现撤销。

实施与验收见 [08](08_实现顺序与验证.md)；本页维护数据归属和恢复协议，不另建实施步骤。
