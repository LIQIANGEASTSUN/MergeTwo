# Function 与 Effect 实现方案

本页是 Function／Effect 模块的实现入口，按 D19–D23、D25／D27 及 D28–D30 整理。**采用方法判断，权限返回 bool；Function／Effect 各自拥有必要数据；逻辑与表现分离；多效果按权限、数值、业务触发和视觉贡献分别组合。** 已确认方向下的类名、容器及方法是工程约定，接入时可按宿主规范调整名称，不改变职责。优先级具体数值与排序细节留到实际效果接入时规划。

适用范围：实现 EntityElement 的 Function／Effect 及 EntityViewElement 的对应表现。Tile 锁进度、元素运行锁效果与二级锁操作已确认，接线见 03／04／06；当前 Tile 不添加 Effect。D31–D42 已收敛气泡已有宿主、源／目标拖放、锁优先、同步窗口及组合约束，见 04／05；本页给出交互响应的工程轮廓。第 4 项已删除，完整执行与宿主接入继续由对应专题确定。没有开始修改宿主代码。

## 1. 对象、数据与组合

| 概念 | 拥有与职责 | 实现边界 |
| --- | --- | --- |
| EntityElement | 元素身份、坐标、配置及其 Function／Effect 实例集合 | 管理实例关系；内部统一增删，不对外暴露可修改集合 |
| FunctionBase／FunctionXXX | 一项能力及专用数据；如生成、合成、开箱 | 业务算法及只读检查，不直接持有或调用 View |
| EffectBase／EffectXXX | 一次附着的规则影响及专用数据 | 按需提供限制、数值修正和触发规则，不继承 FunctionBase |
| EntityViewElement | 绑定元素，持有表现 Function、当前视觉资源和共享视觉贡献 | Graphic 的统一写入位置，不拥有另一套业务数据 |
| ViewFunctionBase／FunctionViewXXX | 输入、拖拽、生成反馈等表现行为 | 可发起业务请求，不能直接改业务字段 |
| FunctionViewEffects | 一个表现 Function，管理本元素的 EffectView 集合 | 根据当前逻辑快照创建、刷新和释放效果表现 |
| EffectViewBase／EffectViewXXX | 一次附着对应的可选表现 | 拥有自身资源、动画和视觉贡献，不参与业务权限和到期结算 |

类名以本文为实现用名，EntityXXX／EntityViewXXX 命名继续有效。FunctionBase、EffectBase、ViewFunctionBase、EffectViewBase 保持薄基类，提供各自必要的绑定与清理；没有真实复用需求时，不抽一个包办四者的组件框架。Effect 不注册为独立 Entity，不另建全局 EffectSystem、EffectStateManager。

```text
Logic：EntityElement
  Functions
    FunctionGenerate：剩余次数、冷却依据、生成规则
    FunctionMerge：合成规则与本能力实际所需数据
  Effects
    EffectTileLock：来源 Tile 的运行引用；阶段由 Tile 唯一持有
    EffectBubble：解锁条件、可选期限、结束规则
    EffectFreeze：本次限制及实际需要的期限／来源

Graphic：EntityViewElement
  表现 Functions
    FunctionViewDrag
    FunctionViewGenerate
    FunctionViewEffects
      EffectViewBubble
      EffectViewFreeze
      EffectViewTileLock：二级锁蜘蛛网（按用户倾向的表现方案）
  共享视觉贡献：由 EntityViewElement 统一汇总并应用
```

D31 已确认气泡附着于已存在的 EntityElement，解除保留原身份和 Function 数据；不采用解锁后再创建内容物的模型。示例不新增冻结等正式玩法需求。

Function 与 Effect 都可以有数据、方法和生命周期；长期／临时、有数据／有行为均不是分类依据。生成次数与冷却只在生成 Function 保存；Effect 的期限在自身保存。局部阶段可使用字段或 enum，不建立独立 State 层。基础数值、位置和选中记录也不需要包装成 Effect。

D25 补充：Effect 必须实际加入其 Owner 的集合才拥有相应作用，但产生该作用的权威数据可以来自其它对象。EffectTileLock 的 Owner 是 EntityElement，来源是 EntityTile；其限制只作用于 Owner，不能把来源 Tile 当成另一个隐式 Owner。它是实际的运行效果，不是第二份锁存档；保存策略与作用归属是两个问题。

逻辑与表现不强制同名、同数量：纯逻辑 Effect 可以没有 EffectView；不同逻辑气泡可共用 EffectViewBubble；表现 Function 可处理多个业务结果。Effect 不内嵌另一套 FunctionController，复用算法时调用普通规则方法或已有能力。

### Owner 类型与最小代码轮廓

D24 增加 Tile 解锁 Function 后，Function 的绑定不能写死为 EntityElement。实现可使用薄的 `FunctionBase<TOwner>`，仅复用 Owner、稳定槽位键、Bind／Release；具体类型如下。这个类型参数用于明确绑定对象，不增加公共 Entity 框架或 ECS 查询机制。

```text
FunctionTileUnlock : FunctionBase<EntityTile>
  Owner = 当前 Tile；只读 Phase 转发 Tile 原记录；内部方法唯一写入阶段
FunctionGenerate / FunctionMerge : FunctionBase<EntityElement>
  Owner = 当前元素；各自持配置与业务数据
EffectBase
  Owner: EntityElement；RuntimeId；只读定义／Priority；Blocks；Release
EffectTileLock : EffectBase
  SourceTile: 运行来源引用；无独立可写锁进度，无持久记录
ViewFunctionBase / FunctionViewXXX
  Owner = 对应 EntityView；只读显示数据与表现资源
EffectViewBase / EffectViewXXX
  Owner: EntityViewElement；效果运行键、当前显示副本、资源句柄
```

若宿主现有 Function 基类已经提供等价的类型安全绑定，可适配沿用，不再叠加一套基类。Tile 的解锁 Function 可直接由 EntityTile 持有；Element 按稳定槽位保存自己的 Function 集合。Tile 的基础外观可以直接由 EntityViewTile 负责，不为保持形式相同强行添加空的 Effect 集合或表现 Function。

Owner／来源只在内部 Bind 时指定，绑定期间不允许外部替换；换宿主须 Release 后重新构建绑定。Effects 集合由 Owner 内部管理，查询者只拿只读视图。运行 Effect 允许在纯逻辑层引用来源 Tile；D54 下 EntityView 持有 Entity 并只读查询；EffectView 仍可使用必要的显示副本，Graphic 不调用 Function／Effect 写方法。Logic 不引用 Unity、Tween、EntityView 或具体资源服务。

D64 统一具体实现前缀为 FunctionXXX／FunctionViewXXX、EffectXXX／EffectViewXXX，其余类型见 [02 命名规范](02_架构与参考取舍.md#具体实现类命名d64)。

## 2. 装配、身份与集合

### 只读定义、实例与创建入口

1. 配置描述元素要装配哪些能力、能力配置，以及新局实际需要的初始效果。定义只读，多实例可共享；实例字段独立，两个生成器不能共用剩余次数。
2. 显式工厂按能力／效果类型键创建类。可用简单注册字典或 switch，不以反射顺序决定业务顺序；两者不并建。
3. 逻辑工厂仅创建 Function／Effect。Graphic 的注册表把效果类型或表现配置键映射到 EffectView；允许无表现，允许多种逻辑类型共用一种表现。
4. 新建按配置产生初始字段；恢复先创建实例并还原记录，不能再执行新建赠送、抽取、扣费或重置期限。
5. 所有格子、元素及关联完成后才启用依赖完整局面的行为，遵守 D14。View 绑定不会触发逻辑装配。
6. 未注册的必需逻辑类型或无效配置在装配时报告并停止该实例初始化；已创建的临时对象按逆序清理，不留下半装配对象。缺失可选表现不改变逻辑结果。

### 逻辑生命周期的最小方法

基类只提供 Bind 与 Release，具体能力／效果提供自己的新建字段初始化和 Restore 方法；需要完整局面后启用的机制再实现 Start。调用顺序为“创建对象 → 绑定拥有者与键 → 新建初始化或 Restore 二选一 → 加入集合 → 完整关联后 Start”。D49 下 Restore 绑定所属 Profile 的已有子记录，不复制并重写一份；新建持久子记录必须挂回所属 Entity 记录。Start 不发首次奖励、不重置恢复数据。没有启动工作时不保留空的逐帧调用。

Function 的 Bind 接收 owner 与稳定槽位键；Effect 的 Bind 接收 owner、RuntimeId 与定义。配置在新建／恢复前就绪，具体类型持只读定义与自身唯一可写数据。D54 下业务移除先退出活动查询、停止 Consumer／事件等活动，保留退场 View 需要的数据；View 解绑后才最终逆序 Release。实际有 Start 注册的机制提供对应停止注册方法，注销可幂等复用；不要求无注册能力增加空逻辑。Release 仅清理引用／订阅，不触发其它业务。正常附加与解除产生的业务变化由调用它们的规则入口显式组织。

### 几种键各有用途

| 键 | 用途 | 是否必须持久化 |
| --- | --- | --- |
| EntityElement 的运行身份 | 找到当前元素及其 View | 运行期；与 D65／D68 已确认的 Element.UniqueId 持久身份分开，见 03 |
| Function 的稳定配置槽位键 | 对应某一份能力及其存档；不按 List 下标恢复 | 保存或由稳定定义恢复；单份能力可用固定类型键 |
| Effect 的定义／配置键 | 确定效果种类与参数 | 恢复规则所需时保存 |
| Effect.RuntimeId | 标识本次附着，不与类型键混用 | 仅运行期；重开可重新分配 |
| View 的绑定版本、资源请求版本 | 隔离旧会话、旧绑定及同实例旧资源回调 | 否 |

基础集合使用普通 List／Dictionary。Function 以稳定槽位键定位，Effect 以 RuntimeId 定位。RuntimeId 在当前宿主生命周期内递增且不复用，跨重建再结合宿主会话区分；不为此引入持久 UUID。

### 添加、更新与移除

- 集合写入入口仅供业务执行阶段调用；运行遍历期间不直接增删，先确定本次变化，再执行增删。
- Add 分配新 RuntimeId；Update 修改指定实例的专用字段；Remove 按实例键删除，重复删除返回 false 且无其它副作用。
- 同类型可以表达多份独立实例，但不自动复制、合并或覆盖。同类型第二次附加究竟拒绝、刷新或新增，由具体效果的应用方法明确写出；无需通用叠加策略枚举或管理器。未实现某种重复规则时，业务入口拒绝该种重复请求。
- D33／D35：所有气泡变体统一检查 Owner 上是否已有气泡；已有则拒绝，不叠加、不刷新。解除后允许重新添加，分配新 RuntimeId；不设置终身禁止再附加标记。
- 刷新现有实例保留其 RuntimeId；移除后再添加分配新 ID。独立实例分别持期限与规则，移除一份保留其它份。
- 释放实例只清理实例资源和引用；奖励、爆炸等业务后果必须由明确的业务规则执行，不能写在 Release／析构／View.Unbind 中。

来自 Tile 的派生效果由 04 的统一同步入口维护，重复同步保留同来源实例；普通业务不可独立移除它来绕过格锁。其它效果仍按各自附加／解除规则处理，不为全部 Effect 强加相同来源模型。

### Effect 优先级（D27／D30）

**保留 Effect 优先级原则；具体数值和排序细节由实际实现时结合效果需求规划。D39 已明确相对顺序：二级锁 Effect 先于气泡 Effect。** 这不要求先指定具体数字，也不把此前“大数先处理、默认 0、同级按定义键／RuntimeId”候选固化为通用契约。

实现保留只读 Priority 与一个集中排序位置，避免每个 Function 自定一套顺序。实际接入存在顺序要求的效果时，统一明确排序方向、同级规则与数值计算阶段；查询期间不修改效果集合或优先级。RuntimeId 在恢复时重建，不能作为有业务含义的跨存档排序依据。权限的“任意阻止即拒绝”不依赖具体优先级数值，可以先实现验证。

| 调用类别 | 优先级的作用 | 不因优先级改变的语义 |
| --- | --- | --- |
| 权限 Blocks | 按序检查，遇到阻止可提前返回 | 任意阻止仍为 false；高优先级“不阻止”不能覆盖低优先级阻止 |
| 数值求解 | 同一计算阶段内按序处理；先收集固定增减／倍率等明确修正项 | 能力定义的阶段、限界、取整仍有效；不能只加 Priority 就获得正确数学规则 |
| 业务响应 | 对同一 Owner 的本次响应按序求解 | 不自动停止后续 Effect；消耗、取消或独占须有明确业务规则，不能复用 Blocks 表达 |
| 表现 | 独立覆盖物用资源层级；共享不可混合属性用显式视觉优先级 | 逻辑 Priority 不自动等于渲染 SortOrder，低优先级逻辑效果不会因没显示而消失 |

例如气泡不阻止拖动，格锁阻止，整体仍拒绝；格锁解除只移除 Tile 来源效果，独立气泡仍有效。D39 要求 Tile 完全解锁后才可解除气泡：EffectTileLock 对 OpenBubbleDialog／UnlockBubble 明确阻止，业务入口也校验当前 Tile 与效果关联一致。不能仅排序后期待自动获得这条限制，也不能让优先级使气泡的禁止合成等规则失效。Effect 顺序只定义一个 Owner 内的处理，不决定不同元素、Tile、Command 或 Operation 的全局先后；气泡期限见 05。

## 3. 权限查询：普通方法与 bool

**综合权限没有可写字段。** 不增加 Entity.CanClick、CanGenerate、SetCanClick；也不建立 RuleCheck、BlockReason 或其它通用权限结果对象。方法返回 true／false 已足够。各对象仍可保存属于自身的真实布尔事实。

按动作查询，如 CanGenerate、CanDrag、CanMerge、CanUnlockBubble。物理点击路由先确定动作，再调用对应查询。需要在 Effect 中分派动作时，可用一个只含已实现动作的 ElementAction 枚举；它表示业务动作，不额外引入结果码、拒绝原因或角色枚举。

ActionContext 只携带该次动作的必要只读上下文：源／目标引用、对应 Function 或待解除 Effect 的运行键、本次命令携带的时间戳 now。动作没有目标时目标可空；只接受合法组合，不堆积 object 参数字典或预建所有玩法字段。

上下文中的 Source／Target 指本次业务的两方；正在遍历的 Effect.Owner 才是本次接受限制的对象。合成入口必须分别调用源的 MergeAsSource 与目标的 MergeAsTarget，不能只检查拖动者，或给目标效果也传 MergeAsSource。对应方法先校验 Owner 与该角色一致；角色错误是调用错误，不作为正常权限放行。

```text
CanMerge(source, target)
  → 检查对象、位置、合成能力与项目合成关系
  → source.AllowsEffects(MergeAsSource, 同一只读上下文)
  → target.AllowsEffects(MergeAsTarget, 同一只读上下文)
  → 全部通过才返回 true
```

以上固定调用关系；某个锁对源／目标究竟返回什么仍按 04 的确认矩阵实现。未确定的动作不靠 EffectBase 默认“不阻止”偷偷放行：验证场景只开放已明确动作，正式接入前必须补齐该效果涉及的实际动作规则。新增业务动作时检查现有效果的适用范围，不要求每种效果阻止一切。

### Effect 的 bool 语义

```csharp
// EffectBase：默认对动作没有阻止，具体效果只覆盖需要的规则。
public virtual bool Blocks(ElementAction action, in ActionContext context)
{
    return false;
}

// EntityElement 内部辅助方法，不是整项业务的公开执行许可。
internal bool AllowsEffects(ElementAction action, in ActionContext context)
{
    foreach (var effect in effects)
    {
        if (effect.Blocks(action, context))
            return false;
    }
    return true;
}
```

Blocks=true 表示本效果阻止；false 表示没有阻止，不能覆盖其它拒绝。限制期间保留 Function 及其进度，不通过删除后重建 Function 来临时禁用能力。若将来某种效果授予新能力，应在业务执行时明确装配该 Function；返回 false 不会凭空授予能力。AllowsEffects=true 仅代表效果检查通过，调用者还必须完成业务基础条件校验。代码按实际宿主风格实现；这里的 effects 是私有集合。

公开 CanXXX 方法属于相应业务规则入口，统合 Function 自身条件、格子事实及相关元素的 Effect。简单规则直接用方法，不为每个 Can 方法再创建 Function 或服务类。

### 一次动作的调用顺序

```text
1. 校验元素仍有效、位置与格子关系正确、所需能力存在
2. 从基础参数开始，计算本次适用 Effect 修正后的有效参数
3. Function／相应业务规则检查次数、最终费用、冷却、目标关系等
4. 检查参与元素的 Effect：任意 Blocks=true 则返回 false
5. 全部通过返回 true
```

生成检查生成器；合成分别检查源和目标，动作分别为 MergeAsSource／MergeAsTarget；不扫描全盘无关 Effect。D25 的二级锁元素限制由实际挂载的 EffectTileLock 参与判断，D28 已确认禁止作为源、条件允许作为目标；不在每个 Function 重复写一遍格锁限制。目标是否存在、占位是否正确、锁格能否接纳普通放置等仍由格子／业务规则检查；D29 当前不添加 Tile Effect。

查询只读：不扣费、不消耗次数、不抽取正式随机、不删除到期 Effect、不发奖励、不弹窗。首版直接查询少量对象，不缓存权限；诊断可用断点或开发日志，不增加正式错误码体系。正常业务条件不满足返回 false；配置缺失或程序异常按故障入口处理，不吞掉异常并伪装成普通拒绝。

## 4. 参数求解、实际执行与时间

### bool 不承载本次业务参数

费用、产物和落点等是业务数据，不能在去掉 RuleCheck 后丢失。公开资格方法返回 bool；实际执行使用内部的准备方法，将本次参数放在局部变量或具体业务参数结构中：

```csharp
public bool CanGenerate(EntityElement element, long now)
{
    return TryPrepareGenerate(element, now, out _);
}

// GenerateParameters 只含本次生成需要的数值；不是权限结果类型。
internal bool TryPrepareGenerate(
    EntityElement element, long now, out GenerateParameters parameters)
{
    parameters = default;
    if (!IsValidGenerator(element))
        return false;

    var candidate = BuildEffectiveGenerateParameters(element, now);
    if (!MeetsGenerateRequirements(element, candidate, now))
        return false;

    var context = CreateGenerateContext(element, now);
    if (!element.AllowsEffects(ElementAction.Generate, context))
        return false;

    parameters = candidate;
    return true;
}
```

上述为接口示意，辅助方法由生成规则实现；GenerateParameters 仅在该能力需要共享求解参数时建立。这里不确定随机产物，不推进随机源。实际生成在业务执行入口重新 TryPrepare，随后在局部求解上下文确定产物等，并用同一份有效参数完成扣费和次数变化。UI 查询得到的 bool 不能作为稍后执行的凭证。

局部准备和写入之间不等待动画／网络／广告回调。确需异步等待时，返回后重新核对宿主、目标身份与效果实例，重新查询和求解；旧参数不直接复用。当前状态需要另一步时间归一化时，由执行入口先完成该步，再用统一 now 检查，不在 Can 方法中偷偷结算。

### 数值按定义的阶段合成

每次从只读配置和当前基础数据求有效值，不能在旧的最终数值上反复乘倍率。需要修正的能力以明确的类型化方法收集该参数的修正项；没有数值需求的 Effect 不增加空泛的属性系统。

需要减费等机制时，由生成模块定义一个窄的修正接口，例如 IGenerateModifier.CollectGenerateModifiers(context, ref modifiers)，相关 Effect 按需实现；生成规则遍历当前效果并收集。modifiers 是本次查询的局部固定增减／倍率数据，初值分别为 0／1。其它能力出现自己的修正需求时定义对应接口，不给 EffectBase 预加几十个空方法，也不使用万能属性名字符串与 object 值。

例如费用可以选用“基础值＋固定增减 → 倍率 → 限界与一次取整”。这只是数值协议示例，每个实际参数明确规则、单位、取整与稳定计算顺序，不因添加顺序改变结果。100 加 20 再乘 0.5 是 60，反过来是 70；不可默认任意变换可交换。

基础费用为 10、余额为 6、减费后费用为 5 时，先计算 5 再判断余额。实际扣费使用已求解的 5。修正冷却时应区分下一次时长和已经开始的期限；具体项目自行定义，不据此改生成 Function 的数据归属。

### 有副作用的触发

气泡到期销毁、消耗层数、解除后奖励、消耗元素后影响邻格，由具体 Function／Effect 规则形成变化，交由统一业务入口执行。权限、参数修正、业务触发三者分开调用，不用一个 OnEffect 通吃。

不会因某个 Effect 检查返回 false 就消费它。派生变化先在本次局部结果中求解，避免在遍历或表现回调中再次修改活动集合。需要连锁时才增加有序局部工作队列与终止约束；不预建通用反应引擎。

D56 已确认：Function／Effect 只使用所属命令传入的时间戳，不自行获取现在；同一命令各步使用同一值，重播沿用命令记录值。D55 下 Command 不修改真实时间源。正式契约见 [05](05_生成器与时间.md#命令时间戳契约d56-已确认)；需要主动到期检查的能力注册 Consumer，公共 Command Consumer 每次创建并登记 OperationRefreshTimeDisplay；D61 限定只有 Command Consumer 能产生 Operation，其它规则方法只提供准备数据，具体链路按 05 的 D57 落实，不启动各自的 Unity 计时协程。期限表示、暂停和离线规则按机制选择；没有 View 也必须能完成已定义的到期业务。基础执行失败协议见 [02b](02b_Command与Operation执行方案.md)，业务操作与组合也见 02b 第 5 节，时间源及 Host 调度见 [05 调度与恢复](05_生成器与时间.md#调度与恢复的接续边界)。

### Effect 响应点击与拖放（实现轮廓）

`Blocks` 回答“是否阻止某个业务动作”，不能表达“这次点击应打开气泡窗口”或“拖入后应腾位”。补充两个按需实现的窄接口作为工程方案；没有相应需求的 Effect 不实现，不给基类增加一排空的输入回调。以下为代码构思用签名，不把接口命名视为独立产品决策：

```csharp
interface IEffectClickResponder
{
    bool TryGetClickAction(in ClickContext context, out ElementAction action);
}

interface IEffectDropResponder
{
    bool TryGetDropAction(in DropContext context, out ElementAction action);
}
```

仍复用已实际使用的 ElementAction；气泡 Click 返回 `OpenBubbleDialog`，Drop 返回 `MoveWithDisplacement`。后者表示 A 移入目标格，有占位 X 时为 X 找合法落点，空目标时仅移动 A。D38 已确认气泡既可在源端也可在目标端，因此不能限定接口只查询目标 Effect。

ClickContext 包含被点元素及 now；DropContext 包含 Source、TargetTile、可空的 TargetElement、预期源位置及 now。响应者从自己的 Owner 判断在源端还是目标端，避免另加角色枚举；上下文没有 PointerEventData／View。路由记录提供动作的 Owner 身份与 Effect.RuntimeId，随后执行重验，不用坐标代替身份，也不需要通用 Action 对象树。

**返回 bool 的含义是“本效果是否接管此交互”，不是“权限通过”或“执行成功”。** 返回 true 后，即使条件不足也不回退成普通生成／合成／换位。气泡在余额不足时仍需接管点击并展示条件窗口；业务限制在动作确定后统一检查。路由查询不得扣费、改交互键、移动物品或打开真实 UI。

调用链：

```text
输入层已有 Click 或 Drop 事件，Graphic 提交逻辑身份与必要坐标
→ Click：按该元素的 Effect 优先级确定一个独占响应
   Drop：检查源／目标相关 Effect，收集本次需要的拖放分支
→ 确定一个动作并保留来源 Owner／RuntimeId
   无响应：使用普通 Function／拖放规则
→ 对选定动作执行基础检查＋相关 Owner 的全部 Effect.Blocks
→ 相应业务入口准备参数并执行；拒绝则结束，不自动换另一动作
→ 成功结果交给 Graphic：打开窗口、移动、更新效果表现等
```

Click 的选择是明确的公共步骤：先检查可选择并准备选择／点击反馈，再求解选定的附加动作；实际写入统一在执行阶段完成，不能在路由／Can 查询时更新选择。完全解锁 Tile 上的气泡首次 Click 即请求窗口；二级锁 Effect 先返回 `Select`，表示仅完成选择与果冻反馈，不再继续寻找气泡响应，公共选择步骤只执行一次。普通无接管元素仍按“首次选中、再次激活”规则，使用点击前的选中记录区分，不能刚选中就误判为再次点击。附加动作正常不满足而选择允许时，准备并执行明确的“仅选择”结果，不能激活原能力；正常仅选择分支仍可返回 Consumer 成功；无需用 false 表达附加动作不允许。Consumer 的 false 不是整批拒绝，已经登记的操作仍保留；程序异常也按原机制记录并继续其它 Consumer。具体批次协议见 [02b](02b_Command与Operation执行方案.md)。D37 已确认拖拽不触发 Click，不再为气泡添加 PointerDown 检测或额外的手势排除逻辑。

同一 Owner 多个 Effect 想接管点击时，按确定后的优先级只选一个，避免同时打开多个窗口；其余效果仍参与权限检查。优先级具体数值继续遵守 D30，实际接入时明确稳定顺序；不以高优先级跳过低优先级限制。独占交互与“业务成功后多个效果分别响应”的通知不同，后者仍按上节的显式触发规则组织，不统一改成遇到第一个效果就停止。

Drop 由现有 DropRules 收集源与目标的响应：一方气泡请求 MoveWithDisplacement 即进入该分支；双方都是气泡时合并为同一请求，只求解／执行一次。每一方内部按自己的 Effect 顺序处理；**不把两个 Owner 的 Priority 混成一个全局排名**。不同业务动作若将来竞争，必须在 DropRules 明确取舍后再启用该组合，不能依集合顺序任选。当前气泡分支先于普通合成／工具激活求解，禁止条件失败后回退绕过限制。

CanDrag 与跟手表现继续沿用。被挤开的 X 不是在发起一轮新 Drag：查询它的 `CanBeDisplaced` 及合法落点，权限动作可用 `Displace`，同样检查它自己的全部 Effect；EffectTileLock 阻止该动作，EffectBubble 不阻止。B 不需要成为当前选中元素才能被移动。具体方法实现见 04；Effect 只返回响应，不自行修改任何元素或 Tile 占位。

Effect 逻辑不持有窗口，不调用 EffectView.OpenWindow。`EffectViewBubble` 只显示覆盖物；D40 下成功的 OpenBubbleDialog 通过应用入口同步调用 Graphic 窗口 API。D59 下仅成功打开并登记有效的窗口拥有交互保护，不能先写保护再尝试开窗；D62 下窗口成功打开并绑定 EntityElement 后提交 Command，其 Consumer 创建 Operation 调用 EffectBubble 内部方法写入交互保护，不设计异步加载阶段。普通关闭／解锁通过业务入口结束交互；D58 的整体 Release 直接清运行绑定；D60 的 WaitPay 使用持久数据保护，具体生命周期与最小方法见 [05](05_生成器与时间.md#气泡-effect-与生命周期)。

## 5. EffectView 的创建与同步

Graphic 根据逻辑结果获得只读显示数据，不把可写 Function／Effect 实例暴露给 UI。最小显示记录包括：

- 宿主运行身份与本次绑定关系。
- Effect.RuntimeId。
- 效果类型及显示需要的表现配置键。
- 对应类型的必要显示字段，例如气泡期限、层数或阶段。

记录是稳定副本；不必复制整个逻辑对象。两种气泡可映射到同一 EffectView，但保留各自实例键；期限没有启用时，显示字段明确为空而非用 0 猜测语义。

FunctionViewEffects 使用一个 SyncEffects(currentSnapshots) 入口，在初次绑定和已完成业务结果到达时对齐整个当前效果集合：

1. 按 RuntimeId 检查已有 EffectView。
2. 新出现且需要显示的实例，通过 Graphic 工厂创建并 Bind。
3. 仍存在的实例 Refresh，替换自己的显示字段与贡献。
4. 已不存在的实例撤回贡献并解除绑定；需要消散动画时单独移交退出表现。
5. 某次配置变化需要换表现类型／资源时，先撤回旧绑定，再按新显示记录创建；单纯字段变化不重建资源。

SyncEffects 按业务结果顺序调用，重复同步相同快照不重复创建或叠加贡献。View 初次创建／重建读取完整当前快照，不依赖历史增删事件；不能在重建时补播奖励、重新添加效果或重置期限。

## 6. 表现生命周期与旧回调

EffectViewBase 使用最小方法：

| 方法 | 行为 |
| --- | --- |
| Bind(view, snapshot) | 建立新绑定，申请自身资源；只做表现，不调用逻辑添加 |
| Refresh(snapshot) | 更新显示与来源贡献；必要时发起新的资源请求 |
| Unbind() | 撤回自身贡献、取消请求与动画、注销订阅，归还资源；允许重复调用 |

逻辑 Effect 在业务移除时立刻失效；效果表现可以继续消散。Unbind 立即释放对宿主共享属性的控制，退出动画只持自己的资源与显示副本，结束后归还；业务结果可指定退出样式，不要求先建立通用解除原因枚举。场景关闭或资源失败时可跳过退出动画。

异步完成须核对：宿主会话／运行身份、View 绑定版本、Effect.RuntimeId、当前资源请求版本。Refresh 改变资源请求时，旧请求即使属于同一 Effect 也应失效。晚到的资源只归还，不再创建过时表现或删除新实例贡献。

View 隐藏、回池和业务实体销毁由不同入口处理：回收可视资源不删除逻辑 Effect；重新显示按当前数据重建。D58 下宿主彻底关闭由总管理器 Release 停业务入口／时间驱动，各系统依次释放 View 绑定及逻辑引用，不额外发关窗 Command，顺序见 06。Release 不执行业务奖励或主动解除流程。

## 7. 多个视觉效果怎样共同作用

### 独立资源分层显示

气泡外壳、绿色粒子、冰冻覆盖物等各自持有子节点，配置挂点与渲染顺序。移除一个 EffectView 只释放它自己的资源，不清空宿主特效根。

同类多份逻辑效果若只显示一份，Graphic 以当前完整实例集合形成视觉组；任一来源移除后重新计算组是否仍存在，不能让第一份的 Unbind 直接删除其它来源共用的资源。实际没有合并需求时，各实例各自显示。

### 共享属性只有一个写入口

EntityViewElement 管理共享视觉贡献。普通表现 Function 与 EffectView 都以自己的来源键调用 SetVisualContribution／RemoveVisualContribution；来源键在当前绑定内唯一，不同种类来源不能碰撞。FunctionViewEffects 负责效果表现集合，不独占其它表现 Function 的渲染职责。

更新同一来源时替换其贡献，移除时只删除该来源。最终值由“当前基础外观＋当前所有贡献”重新计算，然后统一写渲染器。动画等导致基础外观变化时也重新计算，不恢复某个效果添加前拍下的旧值。

| 视觉通道 | 基础实现约定 |
| --- | --- |
| 动画暂停 | 所有来源的暂停要求取 OR；任一要求暂停就暂停 |
| 动画速度 | 没有暂停要求时，基础速度乘有效速度倍率，校验单位和范围 |
| 不可混合材质／样式 | 按显式优先级择一，同优先级用稳定来源键裁定；未显示来源仍保留 |
| 颜色与 Shader 参数 | 只对当前资源实际支持的通道定义混合；不承诺任意材质可自动组合 |
| 独立覆盖物 | 各自节点按配置层级显示，不与共享材质写入混为一条路径 |

贡献中的 PauseAnimation 表示某个来源自身的要求，可以是 bool；最终综合暂停结果仅在 View 内计算，不由来源直接改 Animator。控制范围限于相应视觉对象，不使用全局 Time.timeScale 暂停业务。

首版只实现实际使用的通道。渲染实现先选匹配资源的普通方法，不预建完整着色图／属性聚合框架。缺失必需图标记录诊断并使用项目占位方式；不改变逻辑类型、期限或权限。

## 8. 保存、恢复、合成与移除

### 逻辑数据与生成 Profile 的绑定约定

**D49 已确认直接持有记录。** Function／需要独立持久化的 Effect 使用所属 Entity 的生成记录内的字段或类型明确的子记录，业务方法直接修改它们。Function／Effect 本身不继承 ProfileBase，没有通用 State 行为层，也不保存运行对象、委托、View 或动画句柄。**可从其它权威数据重建的运行效果不另存一份记录**：D25 的 EffectTileLock 从 Tile 恢复，不能复制到 Element 的效果存档、克隆或撤销记录中。

| 记录 | 需要表达 | 不保存 |
| --- | --- | --- |
| Function 记录 | 稳定槽位键、类型／配置键、需要恢复的次数、期限与局部阶段 | 集合下标、可写权限缓存、Unity 对象 |
| Effect 记录 | 类型／定义键、每份实例的专用数据；实际需要的期限、来源和层数 | 运行 RuntimeId、EffectView、临时资源和旧绑定版本 |
| Tile 来源锁 Effect | 无独立持久记录；关联 Tile 后由当前锁进度重建 | 锁阶段副本、来源 Tile 引用、运行实例键 |

这些是记录含义，不是用户已生成 Profile 类的现有字段。具体生成规则、单份能力／单层气泡的最小表示及方法边界见 [03 的实施契约](03_状态模型与Profile.md#二合-profile-接入实施契约d49)。普通存档不逐次导出，也不再使用独立运行模型回填；ProfileHub 序列化根内记录。显示、撤销或显式克隆所需副本另行复制，不能把仍会变化的子记录引用当作稳定副本。

恢复时按稳定槽位键创建能力、绑定原有子记录，按每份效果记录恢复实例并分配新运行键；多份同类记录不能只取最后一份。恢复不走正常“再次附加”的产品流程，不重复 Add，不重新抽奖／扣费／刷新期限。未知类型或损坏字段按存档协议报告并保留原始记录，不静默丢弃。字段缺失不能统一按新建初始化：先判断是合法无效果、无该能力，还是需明确迁移的记录。

需要生成独立副本时显式排除已知的 Tile 来源派生效果；不能把“未知类型无法处理”也当成可忽略。恢复顺序为实体及各自独立数据 → 占位关联 → 重建 Tile 来源锁 Effect → 开放行为／绑定表现。效果是否保存由其数据来源明确规定，不由 UI 任意切换 Persist=true／false。

持久 Effect 的业务附加／解除同时维护子记录与 Owner 的运行集合；业务解除仅移除匹配记录。单层气泡可以绑定可空 Bubble 子记录，解除置空后释放当前运行实例；新附加创建新记录及 RuntimeId，迟到回调不能解除它。关闭时 Release 仅清运行引用／订阅，不置空 Bubble 记录，不清 WaitPay；窗口运行交互不恢复。子记录正常更新保持引用；整体替换时必须重新绑定相应 Function／Effect，不能继续写已脱离根的旧对象。

### 跨对象变化

- 移动元素：自身 Function／独立 Effect 按规则随元素保留；Tile 来源锁 Effect 按新占位重新同步，Tile 进度不随元素移动。
- 合成：明确哪些能力数据重建／继承，以及每种 Effect 是阻止、终止、迁移还是重新附加；不能默认复制所有字段。具体规则由项目定义，未配置该类型的处理时先不启用该组合。
- 删除／销毁：移除 Element 的原存档记录、退出活动查询并停止其能力与效果；D54 下 Graphic 保留对应 Entity 引用只读收尾，最终 View／Entity 释放按 06；已移除 Effect 的独立退出资源仍使用自己的字段副本。关闭／恢复失败清理只释放运行绑定，不删除记录。
- 专用撤销：保留所属元素需要恢复的 Function／Effect 数据，按第 9 项确定身份、计时与结算；不覆盖 Tile 后续变化。
- Tile 的进度、Element 运行锁 Effect 与二级锁操作已确认，见 04；Tile 当前不添加 Effect。邻接响应按 D46 由业务 Consumer 调用 Function 准备，Merge→Reveal 同批执行，见 02b；一级锁没有元素，也不为它创建元素效果。

## 9. 从文档开始实现时的边界与核对

新增一种 Effect 时，实施者依次补：逻辑类与只读定义、逻辑工厂注册、需要的 Blocks／修正／触发方法、确需持久化时的生成子记录及创建／绑定／删除；有视觉需求时再补 EffectView 映射与资源，以及组合用例。通常无需修改其它已有 Function 的权限判断；确需一种全新数值通道时由对应能力增加窄接口，不把所有新增效果塞进中央大分支。保存与表现注册是明确的接入成本，不能遗漏。

可以直接开始实现的部分：薄基类与显式工厂、实体内集合、只读 bool 查询、按动作检查、具体参数修正、EffectView 同步与释放、共享视觉贡献、按 03 绑定生成数据的创建／恢复／移除，以及不创建 Unity 场景对象的组合验证。生成记录的 setter 会通知宿主 ProfileHub，测试需要相应宿主初始化，不能把它误当成完全无依赖的普通 DTO。

开始集成时，先按 [08](08_实现顺序与验证.md)验证以下结果；测试效果只作为验证载体：

| 案例 | 应满足 |
| --- | --- |
| 气泡与冻结按不同顺序解除 | 仍存在的限制继续生效，移除不直接恢复综合权限 |
| 仅限制生成的效果存在，查询解锁气泡 | 按动作分别判定；查询不产生任何写入 |
| 基础费用 10、余额 6、减费到 5 | 用有效费用校验与执行，重复查询不重复减费 |
| 数值效果添加顺序改变 | 按定义的阶段与稳定顺序计算，不依赖集合偶然顺序 |
| 两份暂停贡献，解除一份，同时保留速度倍率 | 仍暂停；暂停全部解除后恢复当前合成速度 |
| 同类效果删除再添加，旧资源回调到达 | 不创建旧表现、不移除新贡献；当前效果刷新后的旧资源请求也失效 |
| 无 View 时到期、View 重开、退出动画未结束 | 业务只执行一次，重建不重置期限，视觉尾声不持有逻辑限制 |
| 保存恢复两份同类效果、交换能力配置顺序 | 不按列表下标认能力，不合并或丢失独立效果记录 |

仍需由其它主题确定的输入，不阻止本模块基础实现：

| 主题 | 尚未决定的内容 |
| --- | --- |
| [02b 执行与业务接线](02b_Command与Operation执行方案.md) | D43–D47 已收敛：多 Consumer、多 Operation、FIFO、五类操作与邻接同批；查询 bool 不代表执行或保存成功，窗口服务按 05 的 D59／D62 接入 |
| [03 存档实施契约](03_状态模型与Profile.md#二合-profile-接入实施契约d49) | D49／D51／D52 已收敛：绑定原记录，Initialize 控制初始数据生成，保存参考三合及现有宿主；地编输入与当前能力生成字段按正文实施 |
| [05 时间与窗口](05_生成器与时间.md)、[06 生命周期](06_表现与资源.md#生命周期归属) | 已确认的命令时间、保护、后台恢复与整体 Release；具体宿主模块装配见待讨论项 10 |
| [9 撤销](../待讨论项/9_售出删除的专用撤销.md)／[10 模块](../待讨论项/10_模块边界与实施顺序.md) | 撤销产品协议、程序集与宿主启动装配 |

上述外围契约用窄的时间、保存、资源及业务提交入口对接；不在本模块私建另一套 Profile、命令队列或全局调度器。完整棋盘的生产接入仍需完成这些专题，本文不把它们默认为已经确定。

气泡专题已随 D41／D42 收敛，全部规则和代码轮廓见 04／05／06／本文。普通目标合成解锁保留；锁与气泡并存时由项目新增独立的 Tile 解锁方式，未设计则配置避免组合。此扩展在 FunctionTileUnlock 接入，不能靠提高 Effect 优先级忽略气泡限制；无需重开 Function／Effect 或气泡宿主选型。

## 参考依据与概念边界

10 个参考项目的职责对照、旧二合／三合／HomeHub／TileV2 的核对依据已集中到 [00 的 Function／Effect 参考依据](00_参考资料与证据.md#functioneffect-参考依据)。历史方案用于说明取舍，不要求接手者重新选择本页已确定的方向；原框架调用细节按需查 [02a](02a_逻辑表现分离架构详解.md)。

Buff 类比适用于“附着宿主、改变规则、可解除”的机制；基础数值和能力流程仍归各自对象。独立炸弹道具可以是 EntityElement＋爆炸 Function，附加“被消耗时爆炸”可以是 Effect；箱子若本身占格且有独立身份，可作为业务对象，外壳附着原物时再比较 Effect。此类例子不新增首期需求；D29 当前不添加 TileEffect，以后出现真实独立需求时再扩展。
