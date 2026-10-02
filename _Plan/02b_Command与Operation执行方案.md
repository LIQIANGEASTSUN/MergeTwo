# Command 与 Operation 执行方案

**状态：Command／Operation 专题已收敛，D43–D47 已回写。** 执行框架沿用 ProjectIdea 规范及 TileScape HomeHub 的机制，二合五类操作与邻接同批方案按本页实现。 本页是二合编码入口；原理、Entity／View 参考见 [02a](02a_逻辑表现分离架构详解.md)，源码版本与阅读范围见 [00](00_参考资料与证据.md#commandoperation-重新核对2026-10-02)。第 6／7 项讨论已删除；Profile 按 03 实施，实际时间／窗口／资源和宿主装配在第 8–10 项接入，不阻塞本页核心与已确认操作的独立实现。

2026-10-02 用户明确：HomeHub 的 Command／Operation 已在线上项目验证，二合继续沿用；一个 Command 允许多个 Consumer，产生多个 Operation，组成 OperationBatch。上一稿提出的单业务 Consumer 限制、收集失败整批丢弃、统一改写 Submit 返回值、默认故障停队及插队清理均撤回，不作为实施要求。

## 1. 四个概念与两类 Consumer

| 概念 | 表达什么 | 谁创建／处理 | 持久化边界 |
| --- | --- | --- | --- |
| Command | 输入命令及参数：玩家点击／拖放、活动开启、已确认的支付结果、时间输入等 | 输入或宿主适配层创建，Runtime 路由到 Command Consumer | 需要时保存可重建的命令数据，用于历史／回放扩展 |
| Command Consumer | 解释这个输入，检查条件，构造并登记所需执行步骤 | 按 CommandType 注册；一个类型可有多个实例 | 本身不保存；收集时不写玩法数据 |
| Operation | Command 最终驱动的最小业务执行单元；Apply 可修改数据／存档、创建或移除 Entity、调用 Function，并保留执行结果 | 由 Command Consumer 或其调用的业务构建方法产生，交给 Recorder | **Operation 不存档**，也不直接从存档恢复后执行 |
| OperationBatch | 这次 Command 收集到的有序 Operation 集合 | Runtime 创建，所有匹配 Consumer 向同一 Batch 登记 | **Batch 不存档**，不是历史记录 |
| Operation Consumer | 消费已经 Apply 的 Operation 及其结果，例如更新 View、播放动画或声音 | 按 OperationType 注册；一个类型也可有多个 Consumer | 不保存，不重新结算业务 |

Command 表达输入，Operation 执行输入经过规则解释后的具体工作。比如 `DropElementCommand(A, 目标坐标)`，可能产生移动、合成或气泡腾位操作，结果由出队时的状态与规则决定。支付结果 Command 表达宿主已确认的结果，回放它时不重新发起真实支付。

“原子”按业务一致性划分：移动一个元素时，元素坐标、源格占位、目标格占位一起维护，可以是一条 Operation；两元素换位也可以是一条。创建、移除、更新格锁等步骤可拆成多条有明确依赖的 Operation。框架不限制一条 Command 只能产生一条 Operation，也不要求每次字段赋值都单独建类。

Operation 的 Apply 可为空，例如统一调度的相机／反馈请求；它也可以只定位目标供表现使用。一个 Operation 没有任何表现 Consumer 同样合法。具体类只在实际需要时增加。

## 2. 核心接口与装配

保留参考接口。`CommandType`／`OperationType` 是路由键，由二合显式定义；不引入 RuleCheck、BlockReason 或 State 框架。

```csharp
public interface ICommand
{
    int CommandId { get; }
    CommandType CommandType { get; }
}

public interface ICommandConsumer
{
    CommandType CommandType { get; }
    bool TryConsumer(ICommand command, IOperationRecorder recorder, out string reason);
}

public interface IOperationRecorder
{
    void AddOperation(IAtomicOperation operation);
    void AddOperations(System.Collections.Generic.IEnumerable<IAtomicOperation> operations);
}

public interface IAtomicOperation
{
    OperationType OperationType { get; }
    void Apply();
}

public interface IOperationConsumer
{
    OperationType OperationType { get; }
    bool Consume(IAtomicOperation operation);
}

public interface IOperationBatchPlayer
{
    bool Play(OperationBatch batch);
    void RegisterConsumer(IOperationConsumer consumer);
    void UnregisterConsumer(IOperationConsumer consumer);
}
```

`out string reason` 沿用参考框架作诊断；Function／Effect 的权限查询仍只返回 bool。`TryConsumer`、`CanXXX`、`Consume`、`SubmitCommand` 的 bool 各自表达不同阶段，不互相代替。

| 类型／模块 | 最小职责与数据 |
| --- | --- |
| CommandConsumerRegistry | `Dictionary<CommandType, List<ICommandConsumer>>`；Register／Unregister／Get／Clear |
| OperationConsumerRegistry | `Dictionary<OperationType, List<IOperationConsumer>>`；同样按注册顺序分发 |
| CommandRuntimeModule | 命令注册表、FIFO、processing、acceptsCommands；SubmitCommand／Update／BeginShutdown |
| 排队项 | Command、可空 bool Result；null 表示尚未取得该项同步结果 |
| OperationBatch | BatchId、SourceCommandId、有序 Operations、IsCollecting；Begin／Add／End／Abort |
| GraphicOperationPlayer | 按 Operation 顺序、各类型 Consumer 注册顺序同步分发并汇总 bool |
| Logic 命令装配模块 | Init 创建业务 Consumer，Start 注册，Release 注销；允许同类型多个 Consumer |

两张注册表都按列表追加。同一普通引用实例重复注册只保留一份；不同实例即使实现类型相同也分别注册。使用参考的 List.Contains／Remove 默认相等规则，Consumer 不自定义值相等。注销不存在的实例无副作用；未注册类型返回空列表。分发过程中不增删当前列表。

第 2–4 节已列出不依赖外部文档的接口、算法、注册与返回契约，可据此实现核心。需要直接移植时，完整参考代码在 [ProjectIdea 实现规范 §5.7](../../ProjectIdea/核心玩法逻辑表现分离/Document/玩法逻辑与表现分离_实现规范.md#execution)；HomeHub 对照文件见本页第 9 节。实施时保留算法，只适配二合命名空间、路由类型、模块装配及日志／消息／Player 服务。核心不引入棋盘规则。

## 3. 固定执行时序

```text
玩家输入／活动事件／支付结果／系统输入
  → 构造 Command
  → CommandRuntime.SubmitCommand
  → FIFO 出队
  → 新建 OperationBatch，Begin(command)
  → Command Consumer A：登记 O1、O2
  → Command Consumer B：登记 O3
  → 其余匹配 Consumer……
  → 检查是否为空
  → Batch.End：O1.Apply → O2.Apply → O3.Apply
  → 全部 Apply 成功后 Player.Play
  → O1 的各 Operation Consumer
  → O2 的各 Operation Consumer
  → O3 的各 Operation Consumer
  → 同步表现分发结束通知
  → 继续下一条 Command；各自动画按自己的生命周期结束
```

### Runtime 的完整分支

1. Submit 在关闭或参数为 null 时返回 false；否则创建 `Result=null` 的排队项并入队，尝试处理队列。
2. 已经 processing 时不递归执行；Submit 返回 `Result ?? true`。当前处理循环最后在 finally 中复位 processing。
3. 每次出队查所有匹配 Command Consumer；无路由则本请求失败。
4. 为本请求新建 Batch 并 Begin。逐个调用 Consumer；返回 false 或抛异常都记录诊断，**继续后续 Consumer，并保留此前已登记项**。
5. 收集结束为空：Abort，当前执行返回 false；不 Apply、不 Play。
6. 非空：调用 End，按登记顺序同步 Apply。Apply 抛异常则中断本批后续项，Abort、记录故障、当前执行返回 false；**不撤销前序写入，原队列仍可继续后续请求**。
7. End 成功后才 Play。表现返回 false 时继续其余 Consumer／Operation，最终汇总 false；表现抛异常则向上传播，本轮 Drain 退出，未出队请求留在队列，后续 Update／合法 Submit 可继续驱动。
8. Play 正常返回后发布同步分发结束通知（即使汇总 false），将 Play 返回值作为排队项 Result；处理后续请求。通知不代表动画结束。

核心不自动重试、不自动回滚、不等待动画。BeginShutdown 关闭接收并清除未执行队列，不抢占当前同步 Apply，也不替被清队请求补业务回调；等待者在自身关闭路径取消等待。

### Batch 的准确边界

构造分配 BatchId；Begin 记录 SourceCommandId、清空列表并开始收集。收集期间重复 Begin 报错，收集期外 Add／End 报错。HomeHub 的 AddOperation 直接追加，不过滤 null；Consumer 必须提供有效操作，误登记 null 会在 End 的 Apply 调用处报错。AddOperations 逐项追加，不保证一次调用全部成功或全部撤回，因此本节业务使用事先构造好的完整列表。

End 的 finally 关闭收集标记；Apply 期间禁止追加、移除或重排本批 Operation，不能利用实现中标记尚未关闭继续登记。Abort 清空列表及两个 ID，不恢复状态；失败批次直接丢弃。每个命令新建 Batch，成功批次不再次 End 或 Apply。

### 返回值与完成时点

| 情况 | Submit 表现 | 业务含义 |
| --- | --- | --- |
| 未接收、无路由、最终空批 | false | 没有本批 Apply |
| 同步 Apply 失败 | false | 可能已有前序写入，不能当作未发生 |
| 同步 Apply 成功、Play 成功 | true | 同步执行及表现分发结束；动画／落盘未必结束 |
| 同步 Apply 成功、Play 汇总 false | false | 逻辑已经执行，不能据此重做业务 |
| A 执行期间提交 B | B 立即 true | 仅表示 B 已入队，不能据此判断 B 最终结果 |
| 本轮某个 Play 抛异常 | 异常向外传播 | 可能来自稍后排队的 B；不能反推最初提交的 A 没执行 |

H 的通知名称为 `PresentationFinished`，保留其“同步分发结束”语义。确实需要知道某次业务结果或动画结束时，在具体请求上设计明确的回调；不统一替换为上一稿的 `TrySubmitCommand + onLogicCompleted` 协议。回调可能同步触发，调用方先建立等待再提交；完成／取消收尾最多一次。

## 4. 多 Consumer 如何组合

多 Consumer 是框架的正式能力，各 Consumer 对自己登记的操作负责；某个 Consumer 的 false **不是其它 Consumer 的否决权**。例如锁 Effect 不能被注册成一个只返回 false 的 Command Consumer，企图阻止另一 Consumer 已登记的合成。

二合的权限处理仍放在业务 Consumer 调用的 Function／规则入口：基础条件通过后检查参与元素全部 Effect；任一效果阻止则不登记该业务操作。效果优先级决定 Owner 内的响应顺序，不替代 Runtime 的 Consumer 注册顺序。

### 收集时的数据与执行依赖

- 所有 Consumer 收集期间看到本批 Apply 前的状态。Consumer B 不能因为 A 已登记 CreateOperation 就查到新 Entity。
- 后续 Operation 可持有前序 Operation 引用，在自己的 Apply 中读取已创建对象或执行输出；HomeHub 的 Theme→Segment→Level 就这样实现。顺序由业务登记保证，框架不自动排序依赖。
- 两个 Consumer 修改相同对象时，要明确顺序与各自前置假设；不能各按旧状态独立准备互相冲突的写入。注册表只提供顺序，不解决业务冲突。
- 扣费与产物、两元素移动等必须共同成立的工作，应在同一个业务准备入口先完整校验，再登记该组操作。**这是该业务的组织选择，不是限制一个 Command 只能有一个 Consumer。** 其它独立消费者仍可登记自己的步骤。
- 一个 Consumer 需要登记多项时，先完成可能正常失败的检查和必要对象构造，再 Add；不要先登记扣费，随后因满盘返回 false。参考框架会保留已经登记的扣费。

不要求所有 Operation 在收集期算完所有结果：Apply 可以通过 Function 完成有界逻辑计算，也可读取前序操作的输出。可提前判断的正常业务拒绝尽量在登记前处理；涉及付款、消耗、占位的相关条件应在首次写入前齐备。收集与 Can 查询不能推进真实随机源、写坐标、扣费或发奖励。需要试算时使用局部数据，实际变化由 Apply 提交。

Operation.Apply 是同步执行入口，可以调用 System／Function 的内部方法；不在其中等待广告、网络、资源或动画，也不新建 Operation 后绕过 Batch 手动 Apply。若需要新输入，提交新 Command，它按 FIFO 成为另一批。

## 5. 二合 Operation 的实施契约

**D45 确认以下五类职责划分，D46 确认主合成与邻格揭示同批执行。** 本节补齐可编码的输入、执行和输出；类／字段名可依宿主风格调整，职责和先后关系保持。生成算法、金额、邻接范围、最近空格的同距规则仍由项目提供，不由框架猜测。

### 5.1 Command 输入与业务 Consumer

Command 只携带意图和定位参数。执行时读取配置、权限和当前位置，不接受 UI 传入“已校验通过”“目标已经解锁”等结论。

| Command 示例 | 最少输入 | Consumer 工作与产物 |
| --- | --- | --- |
| DropElementCommand | 源 Element.InstanceId、目标 Tile 坐标；提交给所属运行实例 | DropRules 查询实际源格／占位，选择唯一移动／换位／合成／气泡分支，产生本节对应操作组 |
| ClickElementCommand | Element.InstanceId | 读取点击前选择，查询 Function／Effect，准备选择以及合法附加动作 |
| UnlockBubbleCommand | Element.InstanceId、Effect.RuntimeId；来自窗口时含交互键；条件凭据 | 校验同一会话与当前实例、Tile 完全解锁及解泡条件，产生 UnlockBubbleOperation |
| EndBubbleInteractionCommand | Element.InstanceId、Effect.RuntimeId、交互键 | 匹配当前交互，读取业务时间，产生 EndBubbleInteractionOperation |
| 初始化／恢复 Command | 已校验的地图及 Tile／Element 记录 | 先创建全部 Tile，再恢复 Element／关联／派生效果，最后启用依赖完整棋盘的行为 |
| 时间／活动／支付结果 Command | 对应时间或宿主已确认结果、必要业务身份 | 由对应 Consumer 产生领域 Operation；外部支付结果不能当作再次扣款的指令 |

Command 的目标是提交时捕获的元素身份；不得在执行时按旧格坐标改成另一个元素。源实际位置变化时按当前规则重新求解，预览不具有写入权。窗口／广告回调绑定所属 Runtime，会话失效时丢弃；不从全局新 Runtime 继续提交旧请求。

业务 Consumer 通过显式依赖取得 TileSystem、ElementSystem、只读配置／地编与规则服务。需要时间时取得本次业务的时间值并传给 Function／Effect，关联步骤使用同一值；不在各 Operation 分别读取 Unity 时间。真实时间采样／推进策略由第 8 项接入，基础 Runtime 接口不增加 CommandContext 或优先队列。

### 5.2 准备数据与执行结果

每条 Operation 只保留自己的输入和输出；不增加通用 StateDiff、事务控制器或强制的 CompositeOperation。以下“数据”可以是具体只读结构，也可以直接是 Operation 的私有字段；不要求再建一个通用 Plan 基类。

| Operation | 登记前准备的数据 | Apply 的完整职责 | 给表现层的结果 |
| --- | --- | --- | --- |
| MoveElementsOperation | 一条或两条移动：元素身份、预期源坐标、目标坐标；所有涉及格子的预期占位 | 同时维护元素坐标和格子占位，统一同步派生锁 Effect；元素身份、Function／独立 Effect 数据保留 | 每个元素的身份、旧／新坐标及必要效果变化 |
| MergeElementsOperation | A／B 身份与预期位置／配置；目标 Tile 预期进度；产物配置与初始数据；项目确定的能力继承／附加产物等实际规则 | 消耗 A／B，目标二级锁合法时解锁，在目标格创建 C，完成占位、派生 Effect、选择及本次必要数据变化 | A／B 旧显示数据、C 身份与显示数据、目标格旧／新阶段、选择及其它实际变化 |
| RevealTileOperation | 目标 Tile 坐标、预期一级锁与空占位、地编提供的元素配置／初始数据；所属主合成的结果引用 | 一级→二级，首次创建地编元素，建立占位并挂载运行锁 Effect | Tile 旧／新显示、创建元素身份及显示数据；主合成关联用于安排演出 |
| UnlockBubbleOperation | 匹配元素／气泡／可选交互键，本次已验证条件、费用或已确认外部凭据 | 执行本模块负责的必要条件消费，移除这一份气泡，结束对应交互；Element 身份不变 | 气泡退出数据、当前剩余效果、匹配窗口关闭请求；无需重建 ElementView |
| EndBubbleInteractionOperation | 匹配元素／气泡／交互键，本次时间与期限判断、该变体到期行为 | 清交互；未到期保留元素，已到期按 D36 立即逻辑移除并释放占位 | 未到期只结束窗口；到期交付旧外观／位置／效果供退场，活跃查询中已不存在 |

需要共同使用的内部修改由 ElementSystem、TileSystem、Function／Effect 方法完成；Operation 不直接调用另一条 Operation.Apply 来复用代码。生成、普通到期、出售等以后可复用相同的内部创建／移除方法，无需把所有行为并入一个巨大 Operation。

本次准备包含的配置、地编出生数据和动作参数在同步执行期间保持稳定。正式随机如需试算，使用局部随机状态，成功执行时由负责该业务的操作提交一次；没有随机的移动／解泡不添加随机字段。Entity 身份在实际创建时取得，不能为了预览消耗业务身份。Operation 的 `Result` 仅在其完整 Apply 成功后赋值，表现读取结果不重新求解。

### 5.3 各操作的写入顺序

**MoveElementsOperation：**

1. 首次写入前核对全部移动对象、源格反向关联、目标存在与目标占位。目标当前占位只能为空或属于本次将移出的元素；同一个目标不能被两条移动占用。
2. 捕获本次显示起点数据，解除所有涉及元素的旧占位。
3. 更新所有元素坐标，再建立所有新占位，最后集中同步派生锁 Effect。中间不对外通知、不取存档快照、不调用 Graphic。
4. 完成结果。一次普通移动只有一条记录，换位／气泡腾位最多两条；源刚腾出的格子可作为腾位落点。移动不改变任何 Tile 的解锁进度，不重新计算气泡期限。

**MergeElementsOperation：**

1. 登记前已做源／目标各自的合成权限、合法产物和必要配置检查。Apply 首次写入前核对预期身份、位置、占位和目标阶段；不在失配后临时退回移动／换位分支。
2. 在改变阶段、清理 Function／Effect 前捕获 A／B 的旧外观、位置和效果；准备产物所需继承数据，不能从已释放旧实体补读。
3. 解除 A／B 占位并退出活跃查询；通过 FunctionTileUnlock 写入目标格的合法解锁结果，在目标格创建 C，建立占位并按目标当前阶段同步运行锁 Effect。源 Tile 原有进度保持。
4. 完成本次已准备的能力数据、选中记录等变化，生成合成结果。可选附加玩法只在项目已定义时接入；涉及空间时与邻格出生位置一起预留，不能临时挤走必需揭示元素。

**RevealTileOperation：**

1. 在 Apply 读取前序 MergeElementsOperation 的完整结果；不得在收集时读尚未创建的 C。结果缺失是内部执行错误。
2. 核对 Owner Tile 仍是预期一级锁且无占位；地编数据已在登记前取得，不能主合成完成后才发现产物配置缺失。
3. 捕获旧 Tile 外观；通过 FunctionTileUnlock 更新为二级锁，创建指定 Element、建立占位、同步运行锁 Effect；完成显示结果。
4. 本次新元素没有参与主合成，不继续按“目标已合成”推进到完全解锁；无额外解锁 Command 或 TileEffect。

**UnlockBubbleOperation：**

1. Consumer 正常校验匹配实例、当前权限、交互和条件。Apply 首次写入前验证准备前提仍成立；广告／真实支付已完成的部分使用凭据，不再次发起外部结算。
2. 执行当前模块负责的已准备消费，捕获气泡退出数据，移除匹配 Effect 并结束对应交互。保留元素身份、坐标、Function 进度和其它 Effect。
3. 交付当前效果列表与窗口身份；Graphic 移除对应 EffectView、关闭匹配窗口。其它 Effect 的限制继续由查询方法综合判断，不设置 CanXXX=true。

**EndBubbleInteractionOperation：**

1. Consumer 读取执行时匹配交互与业务时间；已失效的旧窗口／旧气泡请求不登记写操作。正常空批可以按核心返回 false，不据此重试或复活对象。
2. 匹配时清交互；未到期保留原期限。已到期则捕获退出显示数据，清除选择关联（仅当前选中对象是它时）、解除占位、退出活跃查询并清理其 Function／Effect 的活动行为。
3. 交付退场结果；新元素可立即使用空出的 Tile，旧动画仅清自己的资源。最终 Entity.Release 与旧 View 引用的管理见第 8 项，不延迟业务删除。

以上首次核对是对已准备步骤的内部一致性检查；在这段无异步等待的执行中失配，表明操作组冲突或代码错误，按原 Apply 异常契约报告，不能静默跳过后继续执行依赖项。正常余额不足、满盘、锁限制等应在登记前判定。核心仍不承诺异常回滚。

### 5.4 邻接解锁同批执行

D46 采用方案 A：负责 Drop 合成分支的 Consumer 协调本次主合成与邻格揭示，准备完成后登记为同一个 Batch 的连续操作组。框架仍允许该 CommandType 的其它 Consumer；它们不得重复执行本组工作或依赖“收集期间已发生合成”。

```text
DropElementCommand
→ DropRules 校验并确定普通合成分支
→ 准备主合成（含目标二级锁的合法解锁）
→ 构造只读拟合成上下文：源／目标身份与坐标、目标产物、本次业务时间
→ TileSystem 提供合成目标位置的邻格，去重并按项目固定顺序遍历
→ 逐格调用 FunctionTileUnlock.TryPrepareAdjacentMergeUnlock
→ 校验全部必需地编／出生配置，形成局部操作列表
→ Recorder.AddOperations：Merge → Reveal 1 → Reveal 2 ……
→ 所有 Command Consumer 收集结束
→ Batch.End 依序 Apply
→ 全部成功后 Graphic 分发合成和各格揭示结果
```

拟合成上下文只用于准备，不能对外广播成“合成成功”。邻格不是一级锁或不满足条件时，不产生揭示；必需地编缺项则该合成组不登记任何操作，并报告配置错误。主合成拒绝时也不登记揭示。以目标合成位置查询周围 Tile，源／目标不重复作为本次邻格揭示对象。

同一 Tile 在本次操作组最多揭示一次；使用固定顺序的坐标列表做登记，HashSet 可用于去重，不能依赖其枚举顺序。四邻／八邻等几何规则由项目提供。所有预定出生位置与实际采用的附加产物共用局部占位视图，准备期不写真实格子。

下面是 Consumer 合成分支的代码轮廓；辅助类型表示上表的具体数据，不是新增框架接口：

```csharp
private bool TryCollectMerge(
    DropElementCommand command, IOperationRecorder recorder, out string reason)
{
    // 所有正常业务检查、必需邻格配置读取及局部落点求解均在此完成。
    if (!TryPrepareMergeGroup(command, out var data, out reason))
        return false;

    // List 仅属于本次 Consumer；构造异常也不会把半组写入公共 Recorder。
    var operations = new List<IAtomicOperation>(1 + data.Reveals.Count);
    var merge = new MergeElementsOperation(_elements, _tiles, data.Merge);
    operations.Add(merge);
    for (int i = 0; i < data.Reveals.Count; i++)
        operations.Add(new RevealTileOperation(_elements, _tiles, merge, data.Reveals[i]));

    recorder.AddOperations(operations); // 已物化、非 null；不传会继续求解的 yield 枚举。
    reason = string.Empty;
    return true;
}
```

`TryPrepareMergeGroup` 调用 04 的只读规则及 FunctionTileUnlock，返回主合成与揭示出生数据；非响应邻格被跳过，已适用却缺失必需配置属于配置错误。不把这个方法放进 CommandRuntime，也不让每个 Tile 在 Apply 中追加新的 Operation。

HomeHub 的 CreateSegment／CreateLevel 已验证“后项 Apply 读取前项输出”的组织方式；此处 Reveal 持有 merge 引用并读取结果，依序执行即可，不新增跨 Operation 的成功标记系统。Merge.Apply 异常会使 Reveal 不执行；某 Reveal.Apply 异常仍可能留下此前写入，按原核心诊断，不能宣称“同一 Batch”等于回滚事务或一次磁盘事务。

后续若另有独立业务需要合成事实，可在明确阶段通知或提交新 Command；不能再次登记本组已完成的邻接揭示。未来命令回放只需重建这个 Drop 输入及其必要条件，由同一 Consumer 重新产生揭示，不另存这些 Operation。

### 5.5 Click、开窗与表现接线

Click Consumer 先读取点击前的选中记录，再判断选择资格和 Effect 响应。选择、附加业务都准备好后才登记，避免先改选中导致首次点击被误认为第二次激活。

- 二级锁：只选择与果冻反馈，不进入气泡窗口。
- 完全解锁的气泡：选择＋建立气泡交互＋同步开窗；重复 Click 聚焦原窗口，不刷新期限。
- 普通元素：按已定首次选择／再次激活规则。附加动作正常受限而选择允许时，产生“仅选择”结果；不是整批拒绝，也不回退其它能力。

可用 `SelectElementOperation` 承载选择变化／点击反馈，用 `BeginBubbleInteractionOperation` 承载匹配交互建立及窗口请求；两者均由 Click Consumer 登记，后者只在对应分支出现。Apply 改逻辑选择／交互，Graphic Consumer 显示选择框、播放果冻和同步开窗。类名可调整，不能让选择框的 OnShow 决定逻辑选择，或让 EffectView.Init 自动弹窗。

**D47：同步窗口打开失败的具体接入归第 8 项。** 通用执行出口固定为匹配身份的 EndBubbleInteractionCommand → Consumer → EndBubbleInteractionOperation。宿主桥接清理局部 UI 后沿普通 FIFO 提交；核心不新增插队／优先清理口。排队期间怎样排除无效窗口保护、具体窗口失败返回和关闭事件由第 8 项核对宿主 API 后落实。本专题的关闭／到期 Operation 已可独立实现，实际窗口适配不能把尚未完成的部分伪装为成功。

### 5.6 实施所需的最小依赖

| 依赖 | 实施者应提供什么 | 未接宿主时怎样验证 |
| --- | --- | --- |
| TileSystem／ElementSystem | 活跃查询、占位与坐标共同修改、创建／移除和效果同步；写入口限 Apply 使用 | 内存格子与元素对象，按 03／04 不变量检查 |
| 只读配置／地编 | 产物规则、按位置查首次揭示内容及有效出生参数 | 明确的内存配置；缺项用例应在登记前被发现 |
| Function／Effect | 按动作的 bool 查询、准备数据、内部应用方法；锁阶段唯一来源 | 直接使用 10 的对象，不模拟一组可写 Can 标记 |
| 时间／条件／经济 | 本次业务时间、本地条件消费或已确认外部凭据 | 固定时间和测试余额；真实来源／跨系统结算仍归第 8／10 项 |
| Graphic／窗口 | 注册相应 Operation Consumer，消费结果并产生后续输入 | 记录结果的假 Consumer；无 Graphic 也验证完整逻辑，真实 UI 再验生命周期 |
| Profile | D49：Entity／能力直接绑定根内生成记录，Apply 经业务方法修改；不保存 Operation | 按 03 验证原记录、增删与重建；D51 用 Initialize 初始化，D52 沿用宿主保存 |

以普通构造注入、具体服务或已有宿主契约接入即可，不要求每行都新建接口／管理器。没有窗体或存档服务的验证环境应明确使用替身，正式接入不能用空保存、永远开窗成功等默认值代替真实功能。

## 6. 表现与生命周期

全部 Apply 成功后才分发表现。Operation 保存本次显示需要的旧值、新值、身份及创建／移除结果；Graphic 可以同步查询当前对象，涉及旧状态及异步动画的数据必须按 [06](06_表现与资源.md) 捕获，不能反查已释放对象。

一个 Operation 可有多个表现 Consumer，例如物品动画与音效各处理自己的部分；它们不能再次 Apply、重新判断合成、扣费或创建产物。H 的最终释放 Consumer 通过专用 Ticket 在 View 清理后释放 Entity，是生命周期收尾入口，不能推广为一般业务写入权限。共享视觉属性仍由 FunctionViewEffects 汇总，不能让多个 EffectView 任意覆盖同一材质／缩放。

业务删除与对象最终 Release 分开理解：消耗／到期后立即退出活跃查询、释放占位；动画可以继续。HomeHub 在需要旧 Entity 绑定时使用退役 Ticket，表现清理后最终 Release；二合已有旧外观副本要求不因此改变。最终采用哪种引用保留／资源回收路径在 [讨论 8](../待讨论项/8_时间推进与表现生命周期.md) 落地，不能把“移除立即生效”解释为必须在旧 View 解绑前 Release 所有引用。

新命令不等待旧动画；同对象表现冲突时取消旧句柄并对齐新结果。旧动画只清理自己的绑定和资源，不按坐标删除可能已换入的新 View。回调校验所属运行实例、Entity／Effect／窗口或 View 绑定身份；重建后不能从全局新实例继续执行旧请求。

初始化保持全部 Init→全部 Start→首次构建／恢复→开放玩家输入。两类 Consumer 在首次命令前装配完成。关闭先 BeginShutdown，再取消等待／交互与表现，逆序释放 Graphic→Logic→Runtime；关闭清理不依靠已经关闭的 Runtime 再执行业务请求。

## 7. 保存、Command 历史与 Replay／Redo／Undo

### 当前状态保存

Operation.Apply 经所属 System／Entity／Function／Effect 的业务方法，直接修改根内生成记录及 Profile 集合，持有与增删契约见 [03](03_状态模型与Profile.md#二合-profile-接入实施契约d49)。**修改存档数据不等于把 Operation 自身序列化。** Tile／Element 仍分别保存，Function／Effect 保存必要自有数据；View、Effect.RuntimeId、委托及 Batch 均不进入存档。当前不增加跨重启元素身份，无实际使用者不添加 UUID。

D49 已选择直接引用，正常业务不再构造完整 MapData 发布，也无需给 CommandRuntime 新增通用 CommitAppliedBatch 钩子。准备阶段保持只读，用普通值描述预定结果；实际生成记录只在 Apply 或受控初始化入口修改。不能用 Submit 的 bool 或动画结束推断落盘。D52 已确定参考三合、沿用宿主 ProfileHub；具体源码事实和接入契约见 [03](03_状态模型与Profile.md)，不另设保存机制前置条件。

### 命令记录是可选扩展

用户已明确需要时可以保存 Command，用于重播、Redo、Undo 等能力。应保存**命令的稳定数据表达**：命令类型、参数、顺序及必要时间／外部结果，不序列化持有 Entity、Ticket、UI 委托的整个运行时对象。HomeHub 的纯表现命令实际包含 Action，这类数据不能直接写盘。恢复记录后重新构造 Command，由 Consumer 重新产生运行时 OperationBatch。

以下说明扩展所需数据，不在本轮选定通用历史算法；A §12 的已有变化记录方案与基于命令前缀重建的方案须按实际需求另行取舍。

| 能力 | 从什么恢复 | 需要补齐什么 |
| --- | --- | --- |
| 当前状态恢复 Resume | Tile／Element 等当前业务存档 | 数据版本、关联恢复；不重播历史 Command |
| Command 逻辑回放 Replay | 可信起始状态＋有效命令序列 | 配置／规则版本、稳定目标身份、必要时间和外部结果、可复现随机、固定顺序及逐步结果校验 |
| Redo | 已撤销步骤对应的命令及必要恢复资料 | 恢复相应前置状态与随机／身份条件，或使用专门的数据恢复规则；不能在当前状态随意再发一次原命令冒充重做 |
| Undo | 目标命令对应的执行前资料，或从可信起点重演到该命令之前 | 被删除对象完整数据、关系和必要 Function／Effect 字段；不可逆外部结算另定边界 |
| 只重播表现 | 可独立展示的显示数据 | 新的播放实例／回调；不再次 Apply、不重复业务结算 |

Command 日志记录“输入过什么”，通常不能单独反推出已删除对象的全部数据。Undo 可以使用专用数据凭据，也可以从基线和命令前缀重建；二合首期仍按 D03 只讨论售出／删除专用撤销。**不增加 `Operation.Serialize`、持久化 OperationBatch 或强制所有 Operation 实现 Revert。** A §12 中的不可变变化记录是独立数据，不是运行时 Operation 对象；本项目是否采用该扩展须另行确定。

确定性回放还需区分外部输入与自动派生 Command：不能既注入记录中的派生命令，又让原输入再派生一次。回放不重新请求广告／支付／发奖。CommandId／BatchId 当前只是运行诊断身份，不自动提供跨重启寻址或业务去重；这些扩展未启用前不预建完整历史框架。

## 8. 失败边界与业务实施约束

沿用第 3 节实际契约；Operation 的“原子”名称、Batch.End 或 Abort 都不提供数据库事务。正常拒绝应在对应操作登记前完成；开发测试中的 Apply 异常必须修复。基础框架不会自动将整个实例置为故障状态。

确有自动重建、结构化完成结果、可靠外部交付需求时，按 A §12 单独设计宿主扩展，经确认后接入。当前不把这些扩展加入所有命令，也不改成表现异常逐 Consumer 吞掉继续。具体窗口／资源能力可自行处理其预期失败、归还资源并返回 false。

一般消息可以在特定 Apply 中发布，但只表示当时已经成立的局部事实；H 的 CompleteMapBuild.Apply 发布 MapReady 时 Play 尚未发生。依赖整批的事实必须在相应步骤完整成功后观察，不能把任意 Operation 消息等同整批完成。消息监听者要写业务时提交新 Command，不能同步旁路修改。

诊断至少保留 CommandId／类型、BatchId／SourceCommandId、Consumer、失败 Operation 与原异常；Apply 故障的关联 ID 在 Abort 前写入诊断。日志不是权限结果枚举，也不能发起新业务。重试保存与重试玩法动作分开；表现或落盘失败不能导致再次合成／扣费。

## 9. HomeHub 实际代码对应

下表路径相对 `TileScape/Assets/Module/HomeHub/HomeScene/Scripts/`；本轮已读取方法体，未运行项目测试。

| 要点 | 实际代码与证据 |
| --- | --- |
| 多 Command Consumer | `Core/Command/CommandConsumerRegistry.cs` 存 List；`CommandRuntimeModule.TryExecute` foreach 所有消费者 |
| 收集后执行 | `Core/Operation/OperationBatch.cs` 的 Begin／Add／End；End 内依序 Apply |
| 多 Operation Consumer | `Graphic/Module/OperationPlayer/` 两文件；false 汇总、不短路 |
| 一个命令多步骤 | `Logic/Command/BuildMapCommand.cs` → `Logic/Module/Map/MapModule.BuildMap` 登记主题、分段、关卡等及完成操作 |
| Operation 执行依赖 | `Logic/Operation/CreateThemeOperation.cs` → `CreateSegmentOperation.cs` → `CreateLevelOperation.cs`；后者在 Apply 读前者 Entity 输出 |
| 一个 Consumer 登记多项 | `Logic/Command/RefreshSceneCommand.cs` 登记 RefreshSceneOperation，符合条件再登记 SyncCloudOperation |
| Operation 调用领域逻辑 | `Logic/Operation/SyncCloudOperation.cs` → `CloudModule.Reconcile` 更新／创建／退役云，并保存结果集合 |
| 点击输入 | `Graphic/Entity/Level/Function/FunctionLevelClick.cs` → LevelClickCommand → Consumer 校验 → LevelClickOperation.Apply 发布请求 |
| 空 Apply 与纯表现 | `Graphic/Module/Camera/Command/CameraLookPositionCommand.cs` 及 `Operation/CameraLookPositionOperation.cs` |
| 退役／最终释放 | SyncCloudOperation → CloudSyncOperationConsumer／RetireCloudOperationConsumer → FinalizeEntityRetirementCommand → EntityRetirementFinalizeOperationConsumer |
| 生命周期 | `Logic/Command/LogicCommandModule.cs`、`Core/HomeHubModule.cs`：Init／Start／注销／BeginShutdown |

源码说明的是职责和时序；不用复制 Home 的关卡、云、Flow、相机或表达式服务才能实现二合。二合继续采用已确认的 EntityTile／EntityElement、Function／Effect 与 TileSystem／ElementSystem。

## 10. 实现顺序建议与验收

| 步骤 | 工作 | 验证目标 |
| --- | --- | --- |
| Step 1 | 按 A §4–5 移植接口、注册表、Runtime、Batch、Player；仅换服务接线和二合类型 | 核心行为与来源一致，不加入上一稿 C1–C4 的改动 |
| Step 2 | 装配 Consumer 与生命周期，建立最小移动输入和一个逻辑／表现链 | 全部收集→全部 Apply→Play；关闭拒收、重入不递归 |
| Step 3 | 按第 5 节输入／结果和 Apply 顺序实现五类操作，连接 Entity／System／Function／Effect | 普通移动／换位／气泡腾位共用关联修改；合成、揭示、解泡、到期关闭分别完整维护数据 |
| Step 4 | 实现 Drop Consumer 的合成组准备、Merge→Reveal 同批依赖；接 Click／气泡命令与结果 | 登记前完整准备；邻格只揭示一次；用替身验证窗口请求和匹配关闭，真实失败接线归第 8 项 |
| Step 5 | 按 03 及讨论 8／10 接 Profile、时间、资源、Host 和退出 | 稳定存档、不重复结算、旧回调不能影响新实例 |
| Step 6 | 按 D03 与讨论 9 接专用撤销；实际要求时才追加 Command 历史能力 | 不保存 Operation／Batch；不宣称尚未实现的通用 Replay／Redo／Undo |

与 [08 总路线](08_实现顺序与验证.md)一起验收以下关键情况；这里只规定预期，未声称已有二合代码通过测试：

1. 两个同类型 Consumer 按序登记多项；同一实例不重复注册，不同实例都执行。
2. Consumer 登记 O1 后 false／异常，下一 Consumer 登记 O2：O1、O2 都保留并 Apply；最终无项才拒绝。
3. O1 创建、O2 引用输出：收集时对象不存在，O2.Apply 时存在；所有 Apply 后才有任何表现消费。
4. O2.Apply 异常：O1 影响保留、O3 不执行、本批不 Play；已排队的下一 Command 仍按原核心处理。
5. 表现 false 继续其它 Consumer／Operation；表现异常传播，剩余队列下次仍可驱动。
6. Consumer／Apply／Consume／通知中提交 B：只入队，A 同步分发结束后执行；不等 A 动画。
7. 同步 bool、重入 bool、分发通知与动画完成分别验证；不能据 false 重试已经发生的业务。
8. 移动／气泡腾位同时维护双方关系；普通目标合成解二级锁；Click 的附加动作受限时仍可仅选择。
9. BeginShutdown 清队、不抢占当前批次；晚到窗口／广告／退场回调不能改新会话。
10. 当前保存只含业务数据；如启用 Command 记录，排除引用与委托，重建命令后由 Consumer 重新产生 Operation。

**本页与 03／04／05／06／10 足以开展 Command／Operation 核心、五类操作和已确认交互链路的代码设计与独立实现。** Profile 持有与业务读写按 D49／03 实施；首次初始化／保存按 D51／D52；时间／窗口服务、退出和模块装配仍按第 8–10 项接入，这不代表整套宿主玩法已全部定案。本轮交付的是实施契约，没有新增或运行玩法代码。

### 业务组合的必要验收

以下在第 5 节实际编码后验证，沿用核心行为，不重新选择 Runtime：

| 用例 | 必须观察到的结果 |
| --- | --- |
| 准备合成及两个邻格，第二格地编缺项 | 本 Consumer 的 Merge 和两个 Reveal 都未进入 Recorder；A／B、Tile 进度及业务随机未变化；其它独立 Consumer 仍按原核心处理 |
| 主合成无合法产物或被任一 Effect 阻止 | 不登记 Merge／Reveal；不回退为普通换位 |
| 成功 Merge＋多个 Reveal，邻格查询有重复 | Apply 为 Merge→去重后的 Reveals；同格只创建一次；首次 Graphic 消费时全部逻辑结果已存在 |
| Merge.Apply 内部异常 | 后续 Reveal 不执行；保留原异常语义，不伪造批次回滚 |
| Move 一条记录／Swap 两条记录／满盘气泡腾位 | 坐标和占位双向一致；源格作为合法候选；失败不登记半移动；Tile 进度、气泡期限不变 |
| 二级锁目标合成、气泡移动到同一锁格 | 前者符合条件时目标完全解锁，C 无该来源锁；后者拒绝，目标不变 |
| 首次邻格揭示后再次读档／再次响应 | 恢复已有元素，不重新从地编补发；本次揭示不自动跨过第二级 |
| 解泡前存在其它 Effect／旧泡解除后又新加泡 | 只移除匹配气泡；其它限制保留；旧回调不移除新泡 |
| 开窗保护下计时为 0，再关窗／再解泡 | 关窗立即逻辑删除并腾格；成功解泡保留原 Element；两条路径各自只生效一次 |
| 旧 View 动画未结束，新元素进入同格 | 旧动画只使用捕获数据并清自己的资源；新占位和新 View 保留 |
| 第一个表现 Consumer 消费后，同批后项还未播放 | 不依赖逐条表现产生逻辑结果；同一条 Operation 的多个表现 Consumer 读取一致结果 |
| 无真实窗口／Profile 的核心验证 | 能验证命令、逻辑和结果；明确未覆盖真实开窗失败、落盘或宿主退出，不用这些替身结果宣称联调完成 |
