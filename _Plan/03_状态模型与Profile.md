# 状态模型与 Profile

D02 的 Profile 指宿主 meatloaf_client/client 已有基础设施，实际路径见 [00](00_参考资料与证据.md)。**D49 已确认参考宿主三合：Entity 直接持有存档集合中的生成记录，Function／需要保存的 Effect 使用所属记录内的字段或子记录。** Operation.Apply 经业务方法修改原记录，宿主 ProfileHub 负责保存；普通业务不再导出另一份完整棋盘数据。业务写权限在 Logic，View 只读。

**D13／D14 已确认 Tile／Element 各自存档与先格子、后元素的恢复顺序。D51 使用 MapData.Initialize 判断是否首次生成存档，D52 确认存档接入直接参考宿主三合及现有 ProfileHub。** D19 不建独立 State 层；生成次数与冷却按 D15 归生成 Function。本文包含记录持有、首次初始化、恢复、业务修改与运行释放的完整契约，第 7 项已收敛。Command／Operation 见 [02b](02b_Command与Operation执行方案.md)，能力与效果见 [10](10_Function与Effect建模讨论.md)，业务权限见 [04](04_棋盘交互与合成.md)。

## 已生成的存档类（D16，2026-10-03 重新核对）

实际目录为 [Assets/Game/MergeTwo/Profile](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile)，命名空间为 **BettaSDK.Profile**。用户已将棋盘数据整理到 MapData，以下是当前生成代码的实际结构：

| 生成类 | 实际字段／属性 | 对应方案 |
| --- | --- | --- |
| [ProfileMergeTwo](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/ProfileMergeTwo.cs) | MapData: MapData；LastElementUniqueId: long，默认 0 | 二合根持有地图；Tile／Element 共用此持久计数器，保存最后已分配值 |
| [MapData](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/MapData.cs) | Initialize: bool，默认 false；TileList: ProfileList<Tile>；ElementList: ProfileList<Element> | Initialize 为存档数据初始化标记；两类棋盘记录类型已核对 |
| [Tile](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/Tile.cs) | UniqueId: long；Pos: Position；CfgId: int | UniqueId 已重新核对生成；运行占位 ElementId 仍不存档 |
| [Element](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/Element.cs) | UniqueId: long；Pos: Position；CfgId: int | 持久元素身份、坐标与配置 ID，UniqueId 已核对生成 |
| [Position](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/Profile/Position.cs) | X: int；Y: int | 整数坐标记录 |

方案中的 Coord 对应 **Pos（X、Y）**，ConfigId 对应 **CfgId**；不额外保存同义字段。Tile.CfgId 对应配置类型 MergeTwo.Two.Config.Tile 的 ID，配置见 [06](06_表现与资源.md#tile-与-element-的表现d10d11-已确认)。MapData 是存档容器，不新增 Board 逻辑对象；运行管理仍由 TileSystem／ElementSystem 负责。

### ElementList 已修正与生成来源

用户修正配置后，本轮重新读取 MapData.cs，确认私有 `_ElementList` 和公开 `ElementList` 都是 **ProfileList<Element>**；TileList 保持 ProfileList<Tile>。此前的类型问题已经解决，不再作为实施待办。

[ProfileDefine/ProfileMergeTwo.asset](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/MergeTwo/ProfileDefine/ProfileMergeTwo.asset) 提供表源与输出目录，字段定义来自生成输入；ProfileTemplate 生成对应字段及 setter。本轮只核对生成结果，未读取外部表格或修改宿主代码。后续字段仍从定义源添加。

Tile 锁进度、Element 的 Function／Effect 必要数据目前尚未生成。用户明确当前只设计核心玩法，按正在实现的能力补最少必要字段；未来需求出现后再补配置与数据，不预置仓库、多地图、持久 UUID 或通用历史载荷。

## 宿主 Profile 保存链（2026-10-02 源码事实）

本节描述现有代码；二合按 D49／D51／D52 接入，具体流程见下文实施契约。详细来源导航见 [00](00_参考资料与证据.md#宿主-profile-调用链重新核对2026-10-02)。

### 注册与读取

1. LoaderInit 首次启动、UtilsLoading.Restart 重启时，显式向 ProfileHub.Init 传入根 Profile 实例。Hub 按类型名建立映射，再加载本地数据。
2. `GetProfile<T>()` 直接查已注册实例，不负责按需创建；`RegisterProfile` 支持后续注册，存在该根的缓存 JSON 时会应用它。MapData／Tile／Element／Position 是根内的嵌套数据，不需要逐个注册。
3. **当前两个正式初始化清单均没有 ProfileMergeTwo；Assets 的 C# 引用检索也未发现它的业务注册／使用。** 生成类已存在，仍须接入启动与重启。后续注册应在首次获取前完成，每次打开棋盘不能重新注册一个空根覆盖当前根。
4. 尚未注册的根 JSON 保存在 `_pendingJsons`，后续整体保存会带上；这不等于已知类型中的所有未知字段都能保留。读取使用 PopulateObject 并抑制变更追踪，不把正常读档记成玩家修改。

### 数据写入与标脏

五个生成类都继承 ProfileBase。私有字段带 JsonProperty，公开属性带 JsonIgnore；setter 在值／引用变化后调用 `ProfileHub.MarkProfileChanged()`。修改 `element.Pos.X` 本身就会标脏，不要求再把 Pos 赋回 Element。

ProfileList／ProfileDict 用 `new` 隐藏部分集合修改方法并调用同一入口；正常 Add、Remove、索引赋值等应使用实际 Profile 集合入口。它们没有给全部继承方法／接口提供统一拦截，不能转成基础 List／Dictionary 或接口后任意修改并假定仍会标脏。嵌套字段依靠自身生成 setter，根属性不监控任意内部对象。

`MarkProfileChanged` 增加全局 LocalVersion，按参数设置强制同步标记；**它不在 setter 中立即写磁盘，也不是一次 Command／Batch 的完成标记。** 版本锁只保护版本字段，没有锁住整个玩法对象图。即使尚未挂入根的生成记录，其 setter／ProfileList.Add 也会通知全局 Hub；独立构建快照时不能假定只有最后一次根赋值才会标脏。

### 本地保存、云同步与恢复

```text
已有业务修改生成的 Profile 记录／集合
→ MarkProfileChanged：更新 LocalVersion
→ BettaSDKRoot.Update 驱动 ProfileHub.Update
→ 满足本地保存条件：SaveToLocal()
→ ProfileLocalSaveRequest → ProfileLocalFileStore 工作线程
→ 构建 JSON、保护载荷、写临时文件、替换主文件并保留备份
→ 成功回调更新已保存版本
```

| 环节 | 当前代码行为 | 二合接入时的含义 |
| --- | --- | --- |
| 周期本地保存 | LocalTickTime > 20 秒且版本更新／水位变更时发起；SyncForce 可提前触发 | 沿用宿主调度，不为每个 Tile／Element 建保存计时器 |
| 普通 SaveToLocal() | 提交异步请求；工作线程执行时读取活动 Profile map 并序列化 | 不是在调用瞬间固定下来的完整业务快照 |
| SaveToLocal(true) | 调用线程先构建固定 JSON，再交同一工作线程处理并等待，默认等待上限 5 秒 | 同步等待与异步请求不同；公开方法仍返回 void，内部捕获失败，调用返回不构成成功凭据 |
| 文件提交 | 当前路径为 Application.persistentDataPath/Profile/profile.dat；使用 .tmp、.bak、Flush(true) 和替换／移动降级 | 各根统一保存；Tile／Element 分开记录不等于分别创建物理文件 |
| 请求顺序 | 一个持久工作线程，等待中的异步请求保留最新一份；提交序号阻止较旧请求覆盖较新提交 | 文件顺序保障由宿主承担，不由二合重复实现 |
| 暂停／退出／Release | Hub 与 SDKRoot 的生命周期入口在允许保存且有变化时尝试同步保存；冲突／等待重启时受限 | 棋盘 View 关闭不等于整个 ProfileHub.Release；二合退出接线继续按讨论 8／10 |
| 云同步 | 满足约 30 秒／强制同步、联网与登录等条件后，在任务中序列化根数据并上传，记录远端版本／哈希 | 直接复用宿主服务；不是二合单独的上传协议 |
| 加载 | 主文件验证失败尝试备份；另有旧文件／PlayerPrefs 迁移，根数据反序列化到注册对象 | Hub 恢复数据后，二合仍须校验棋盘结构、先创建 Tile 再创建 Element |

ProfileHub 的本地与云端序列化有版本前后检查、集合变化异常重试。版本稳定性最多检查 64 次；若仍持续变更，最后一次允许返回当次已生成的 JSON，持续序列化异常则仍会失败。这是现有宿主机制，不等同于业务事务。D52 明确本期直接复用它，不将额外保存隔离设计作为二合开工条件。

项目存在 ProfileSnapshotBuilder.CloneProfileMap，但当前 Assets C# 检索只发现定义，Hub 本地／云端保存链没有调用它；不能因文件名就描述为已经深复制后后台保存。

### 宿主 Merge：Entity 持有与修改存档的完整链路

#### 首次地图数据从哪里来

本轮按实际入口补读完整建图主链：

1. `ProfileSystem.Init` 获取已注册的 ProfileMerge；`MapSystem.Init` 加载地编，按场景 ID 取 LevelData，没有记录时调用 `AddLevelCfgToProfileData`。
2. 三合按区域开放创建内容：`GetOrCreateRegionData`／`GetOrCreateAreaData` 从地编生成对应记录；已有记录则复用。`RuntimeManager` 的相关系统顺序为 Map → Region → Area → Tile → Element，SystemComponent 按加入顺序执行 Init／Start。
3. `TileSystem.CreateAreaTile` 遍历已开放区域的坐标，调用 `MapSystem.CreateTileDataFromLevelCfg`。已有 Tile 记录直接返回；否则读取地编并创建 TileItemData，配置有元素时通过 `CreateElementData` 创建 ElementData，各自加入关卡的存档列表。
4. TileEntity 接收上述 TileItemData；启动阶段随后由 `ElementSystem.InitElement` 遍历 elementList，创建 ElementEntity 并传入原 ElementData。
5. EntityFactory／EntityBase.Init 保存原记录引用，具体 Entity 与能力从记录读取、修改数据，ProfileHub 负责保存。

因此可直接参考“配置生成存档记录 → Entity 接收记录 → 业务修改原记录”的流程。二合使用用户已生成的 **MapData.Initialize** 表达初始化事实；三合上述入口用场景记录是否存在判断，不能声称三合也使用同名 bool。三合的 Region／Area 开放与自动修复重复元素属于它自己的规则，不要求二合增加这些层。

**核心事实：存档集合、Entity 和能力引用同一组 Profile 对象。** Entity 持有记录引用，记录同时挂在 Profile 根下；业务修改这份内存记录，宿主稍后将它保存。源码没有在普通移动／生成后导出另一份 Entity 数据再回填。

```text
ProfileHub 中的 ProfileMerge
└─ LevelDataDic[场景 ID] → MapSystem.LevelDataProfile（同一 LevelData）
   ├─ tileItemDataList[i] ──→ TileEntity.ProfileData／TileItemData
   └─ elementList[i] ───────→ ElementEntity.ProfileData／ElementData
      └─ OutputData ─────────→ ElementOutput.OutputData
                               ↑ 所有箭头均为对象引用，不复制内容
```

这里是三合已有类型与路径；二合对应 ProfileMergeTwo.MapData、Tile／Element。不能因为引用在多个对象中保存，就认为存在多份可独立修改的持久数据。

#### 记录怎样传入 Entity

1. [MapSystem.Init](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Systems/Map/MapSystem.cs:19) 从 ProfileMerge.LevelDataDic 取已有 LevelData；没有对应关卡才创建记录并挂回根。
2. [ElementSystem.InitElement／CreateElement](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Systems/Element/ElementSystem.cs:37) 遍历 elementList，把每一条 ElementData 交给 EntityManager；正常恢复路径没有复制或再次加入集合。
3. [EntityManager.CreateEntity](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Entities/Manager/EntityManager.cs:29) 分配新的运行 InstanceId，把传入记录交给 Factory。Factory 构造 Entity 后调用 Init；Manager 建索引并 Start。
4. [EntityBase.Init](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Entities/Entity/Base/EntityBase.cs:32) 直接执行 `ProfileData = data`；InstanceId、BirthData 分开保存。
5. [ElementEntity.ElementData](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Entities/Entity/Element/ElementEntity.cs:20) 只是 `ProfileData as ElementData`；TileEntity.Init 同样把 ProfileData 转成 TileItemData。类型转换不新建记录。

新建元素则先由 MapSystem.CreateElementData 构造记录并加入 elementList，再把同一记录交给 EntityManager。Placement／Spawn 的调用点遵守这条顺序。`new ElementData()` 或只赋给某个 Entity 并不自动进入存档根，必须由业务集合拥有它；生成 setter 标脏也不等于记录已经挂入根。

#### 业务怎样修改记录

| 业务 | 源码中的实际读写 | 说明 |
| --- | --- | --- |
| 移动 | [ElementEntity.FlyToGrid](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Entities/Entity/Element/ElementEntity.cs:79) 清旧占位，直接写 ElementData.point.x／y，建立新占位，再通知表现 | 修改的是集合中的同一记录；`point` 的生成 setter 通知 Hub，无额外 SaveEntity |
| 格子治愈 | [TileCureFunction.AddEnergy](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Entities/Function/Tile/TileCureFunction.cs:32) 经 Owner 取得 TileItemData，写 energy，再更新运行 TileState | Function 可以按需从 Owner 取数据；不要求每个能力都缓存独立数据引用 |
| 点击生成 | ElementOutputClick.Init 持有 ElementEntity，并构造 ElementOutput；[ElementOutput.Init／AddNum](/Users/betta/Company/Projects/meatloaf_client/client/Assets/Game/Merge/Scripts/Runtime/Logic/Entities/Function/Element/ElementOutput/ElementOutput.cs:52) 绑定 ElementData.OutputData，写 Num／Time | 业务能力使用其专用子记录；生成记录属于持久数据，能力对象负责行为 |
| 合成消耗及产物 | SpawnSystem.CleanupMergeElement 走 RemoveWithProfile；SpawnPlace 创建 ElementData 并入集合，再创建 Entity | 被消耗记录移出存档，新产物有新记录；不靠删除 View 更新存档 |

OutputData 为空时，该代码会新建子记录并赋回 ElementData.OutputData；若只在能力中持有一份未挂回的对象，它就不在根的序列化图中。现有生成 ElementData 默认已 `new OutputData`，所以“null 时初始化”与“新生成元素该使用什么初始值”是不同问题；新二合需分别处理创建与恢复，不能在恢复时重置次数／期限。

普通坐标修改保持原记录身份。Placement 中的 `CopyTo` 用于从待放置资料复制必要业务字段到新记录，是特定转移流程；不能把它概括成所有 Entity 都采用复制映射，也不能把这种复制用于同一元素的普通移动。

#### 运行数据、删除与释放

| 入口／数据 | 当前作用 |
| --- | --- |
| InstanceId、EntityDragData、BirthData、Function／View 对象 | 运行身份、交互和表现数据；不因 Entity 持有 Profile 就全部进入存档 |
| TileEntity.ElementInstanceId | Tile 的运行占位；与持久 TileItemData 分开，恢复时重建 |
| EntityManager.RemoveWithProfile | 先调用 Entity.DeleteProfile，再移除运行索引、通知表现释放、调用 Release |
| ElementEntity.DeleteProfile | 先触发能力 PreDeleteProfile，再由 MapSystem.DeleteElementProfile 移除集合记录 |
| EntityManager.Remove／Entity.Release | 不调用 DeleteProfile；清运行关系、能力、计时与占位，Profile 记录保留 |
| MapSystem.Release | 释放运行索引和持有引用，不清空 ProfileMerge 的关卡数据 |

因此，“关闭棋盘、稍后重建”与“物品被合成／售出／销毁”必须使用不同的生命周期入口。基础 EntityBase.Release 本身为空，不能把源码描述成已统一清空所有 Profile 引用；上表说明的是是否移除存档记录。

表现层 EntityViewBase 绑定 Entity，未持有另一份独立存档。现有 ElementData／TileItemData 的公开属性会暴露可写对象，并非编译期只读保障；二合仍按已确认边界提供只读查询／显示数据，写操作由 Logic 的 Operation 入口负责。

上述记录持有方式是本轮主要参考。三合的立即 Start／直接派发表现、重复位置修复、独立 BubbleEntity 以及格子能量规则属于它自己的实现；二合仍遵守先完整恢复关联再开放行为、Command／Operation、气泡 Effect 及 Tile 唯一解锁进度的已确认方案。

## 身份与位置

| 名称 | 含义 | 确认范围与寿命 |
| --- | --- | --- |
| Tile 的 ConfigId | 格子外观配置键 | 已确认保存；不同格子可共用 |
| Element 的 ConfigId | 元素种类配置键 | 已确认保存；不能作为某一件物品的实例身份 |
| Tile 的 Coord | 格子自己的坐标 | 已确认保存；用于实例内查格 |
| Element 的 Coord | 元素当前所在格子坐标 | 已确认保存；移动时改变 |
| Tile 的 ElementId | 当前占位元素的运行 InstanceId；两种称法指同一占位键 | 已确认仅运行时保存，恢复时重建，不进入 Tile 存档 |
| EntityId | 运行 Entity／View 的身份关联 | 基础绑定候选；分配与跨存档映射待定 |
| Element.UniqueId（D65／D68） | 同一份元素存档的持久身份，支付补单据此定位 | 已确认 long；新建记录时先递增计数器，再赋给记录，恢复原值，不替换运行 InstanceId |
| ProfileMergeTwo.LastElementUniqueId（D68／D69） | Tile／Element 共用的最后已分配序号 | 根存档 long，已生成，默认 0；只在实际新建业务记录时递增，普通恢复／Release 不修改 |
| Tile.UniqueId（D65／D69） | 格子存档的持久身份 | long 字段已生成；新建记录与 Element 共用根计数器分配，恢复保留原值 |
| InstanceKey／LayoutConfigId（候选） | 存档实例键／初始布局配置键 | 存档装配元数据，不要求重新建立 Board 对象 |
| SessionGeneration／绑定版本（候选） | 隔离旧会话与旧 View 回调 | 重建／换绑时更新，具体协议待定 |
| CommandId／BatchId（D43） | 调用诊断关联 | 运行期，不作存档去重；可选命令日志的稳定寻址另定 |

旧代码以位置编码表达物品 identity，是来源事实；新运行关系必须能区分同格前后不同元素。D65／D68 已确认所有 Element 使用持久 UniqueId 及前缀递增分配；D69 确认 Tile 与 Element 共用同一根计数器，跨两类记录也不重复。运行 InstanceId、配置 ID、坐标与持久 UniqueId 各有用途，不合并为同一字段。

### Tile／Element 持久身份与分配（D65／D68／D69）

Tile 与 Element 存档均有 long UniqueId。D69 确认共用 ProfileMergeTwo.LastElementUniqueId；保留现有字段名，不新增 Tile 计数器。D68 的前缀递增规则同时用于两类记录，只在各自业务新建存档时执行一次：

```csharp
// 新建 Tile 存档时执行：
tileData.UniqueId = checked(++profile.LastElementUniqueId);

// 新建 Element 存档时执行：
elementData.UniqueId = checked(++profile.LastElementUniqueId);
```

profile 是所属 ProfileMergeTwo。根计数器默认值仍为 **0**，表示尚未分配；前缀 ++ 先递增，再把新值赋给记录，所以两类记录共用的第一次分配得到 **1**，后续依次为 2、3……。例如先新建两个 Tile，再新建一个 Element，ID 依次为 1、2、3，计数器最终为 3；第一件 Element 不要求取得 1。LastElementUniqueId 保存两类记录共同的“最后已分配值”，**0 是无效持久 ID**。不把计数器初始值设为 1，否则首次分配会得到 2。无需额外临时变量、ID System 或 GUID。

只有**新建业务存档记录**才取号。正常游戏在 Consumer 创建的 Operation.Apply 中调用既有新建入口；地编首次填充沿 D51 的受控初始化。规则查询、预览、Consumer 准备结果和单纯 new Entity／View 均不取号。`checked` 溢出时拒绝本次新建并报告，不绕回负数；计数器不回收，不要求序号始终连续。

| 操作 | 存档记录与 ID |
| --- | --- |
| 地编首次创建 Tile | 每份新 tileData 从共享计数器取号一次；Tile 坐标、配置、解锁进度或运行占位变化不重新分配 |
| 地编首次创建、生成、首次揭示元素 | 创建新的 elementData，分配一次新 ID；一级锁没有元素记录时不分配 |
| A＋B→C 主合成 | 创建新的 C 记录并分配新 ID，A／B 原 ID 不复用 |
| 移动、换位、气泡腾位、附加／解除效果 | 修改同一 elementData，保留 UniqueId |
| 运行系统关闭后重新装配 | 绑定现有记录，不创建替代 elementData、不取号 |
| 应用重启读档 | ProfileHub 反序列化还原记录后，玩法直接绑定它；反序列化创建 C# 对象不等于业务新建，不运行分配代码 |
| View 重建或换绑 | 不创建业务存档、不取号 |
| 克隆出另一件元素 | 是新物品，新的记录分配新 ID，不能把原 UniqueId 一起复制给它 |
| 删除 | 移除记录，不回退计数器，不回收 ID |
| 撤销机制恢复原物品 | 沿第 9 项恢复原物品身份的规则；复制恢复资料不自动等于新物品，不能在无参构造函数／反序列化 setter 中自动取号 |

恢复只读校验 TileList 与 ElementList 中所有记录的 `UniqueId > 0`，并在两类记录合并的范围内检查无重复；根计数器须满足 `LastElementUniqueId >= 两类已存记录 UniqueId 的最大值`。两类列表都空时允许计数器为 0，也允许保留历史已分配的更大值。不能按当前存活记录最大 ID 重算并回写计数器：最高 ID 的记录可能已删除，旧业务仍引用它。地图运行实例 Release、普通 MapData 替换与恢复均不清零根计数器。

计数器与新记录按已有 ProfileHub 保存；内存修改不等于落盘事务。跨账号归属由宿主校验；此递增方案适用同一条权威存档历史，旧档回退或多设备并发合档不是本地 +1 可独自保证的全局唯一问题，沿宿主恢复协议处理，不另建分布式分配框架。

EntityElement 可只读转发 `Profile.UniqueId`。支付通过持久 ID 查找元素，当前 Entity／View／Tile 占位仍使用运行 InstanceId；ElementSystem 的查询直接使用既有集合，不另存第二套元素记录。**元素 ID 定位物品，当前支付请求标识区分同一物品上的不同支付尝试**；两者匹配后由支付结果 Command 的 Consumer 创建 Operation，具体规则见 05。

共享计数器只统一持久身份分配，不合并 TileSystem／ElementSystem，也不改变 Tile 的运行占位 ElementId。支付仍查询 Element，不能因 ID 跨类型唯一而把 Tile 当作支付目标；位置查询继续使用坐标。

## 状态归属表

标注 D13／D15／D24／D25 的归属已确认；其余拥有者、写入入口和保存策略沿用候选方案，不能视为本轮全部批准。

| 数据 | 分类与拥有者 | 谁可写 | 是否保存 |
| --- | --- | --- | --- |
| MapData.Initialize | 二合地图存档是否完成初始数据填充 | 首次地编数据填充成功后设为 true；普通运行与关闭不重置 | 是，D51；不代表 View／运行系统已创建 |
| 棋盘尺寸、初始格、物品规则、产出池 | ConfigSnapshot／ConfigAdapter | 导入构建时写，运行只读 | 保存兼容标识，不逐物品复制配置 |
| Tile 坐标、配置 ID、解锁进度 | EntityTile／Tile 自己的存档；解锁进度由其 FunctionTileUnlock 管理 | 初始化／恢复；解锁业务经 FunctionTileUnlock 写入 | 是，D13／D24；Element 不保存第二份格锁进度 |
| 地编中每格默认锁进度、默认 Element 配置 ID | 当前地图的只读地编配置，按 Tile 坐标查找 | 编辑器导出时写 | 配置数据；不复制成每个 Element 的锁存档 |
| Element 上来自 Tile 的锁 Effect | EntityElement 的运行效果，来源为当前 EntityTile | 建立占位／改变 Tile 进度时统一同步 | **否，由 Tile 进度与占位关系重建**，D25 |
| Element 坐标、配置 ID 与自身业务数据 | EntityElement 直接持有 MapData.ElementList 中的原记录 | ElementSystem 初始化；运行时 Operation.Apply 调用业务方法修改 | 坐标、配置 ID 及实际需要恢复的数据保存，D49 |
| Tile.ElementId | EntityTile 运行数据／占位关系 | ElementSystem 与 TileSystem 统一维护 | **否，恢复元素时重建** |
| 生成次数、冷却及项目算法所需轮次／游标 | 生成 Function 使用 Element 内的专用子记录 | 生成／时间 Operation.Apply；具体调度按专题确定 | 需恢复的字段直接写子记录；运行计时器不保存，不另建 State 层 |
| 气泡定义、可选截止时间与该变体必要数据 | EntityElement 的 EffectBubble | 气泡业务执行入口 | 随 Element 保存；解除删除该份记录，移动不重置，D31／D33 |
| 气泡 WaitPay | D60 新增持久事实；建议放在 Element 的 EffectBubble 子记录 | 开始支付 Operation 写 true；匹配支付成功／失败写 false，成功同次解除气泡 | 是，恢复原值；Release 不清零；生成字段和跨重启支付关联尚待接入，不能仅靠运行 InstanceId |
| 气泡当前弹窗交互键（工程轮廓） | EffectBubble 运行数据 | 同步打开／关闭／解锁业务入口 | 不保存；不增加异步加载阶段，恢复期限不等于恢复旧窗口或广告回调 |
| 宝箱开启／使用进度 | 对应 Function 自有数据 | 对应业务执行入口 | 恢复所需数据保存 |
| 二合独有测试余额／以后独立体力 | 运行时／经济模块自有数据（候选） | 统一经济规则 Operation.Apply | 测试可用内存替身；需要跨重启时明确所属记录，不承诺与其它根的原子落盘 |
| 宿主已有金币／钻石等 | 外部权威／宿主道具系统 | 宿主正式入口 | 宿主已有 Profile，二合不存另一套可写余额 |
| 当前选中物品 | 运行时／InteractionState | Select／Activate／Drop 等命令的 Apply | 建议不保存；重新进入为空 |
| 可撤销操作所需历史数据 | 独立恢复数据（具体形式待第 9 项） | 对应确认后的 Undo 执行入口 | D70 售卖不创建恢复凭据；Operation 不存档，普通删除及历史寿命待确认 |
| 拖拽指针、屏幕坐标、动画句柄、显示数字 | 表现／Graphic | Input／View／表现 Consumer | 否 |
| 仓库、队列、已发现物品 | 后续运行时／对应领域模块 | 后续业务 Operation | 接入时保存 |
| 物品数量索引、空格缓存、链最高级统计 | 派生缓存／所属 Logic 模块 | 同步维护或失效重算 | 否，可从权威状态重建 |
| ProfileMergeTwo.MapData | 当前棋盘存档容器；运行对象引用其中的原记录，D49 | 初始化／恢复入口建立关系；业务由 Operation.Apply 经所属对象修改 | 是；正常移动／合成不整体替换 MapData |

UI 可以读取能力查询和只读状态，但不能拿到 ProfileDict／List 后直接写。展示延迟只改变显示值，不能反向覆盖真实余额。

## 为什么选中不是纯表现

普通元素的再次点击激活需要逻辑的 `SelectedElementId`；选择是否影响可撤销操作由第 9 项确定，D70 下售卖没有撤销机会。选择框、缩放、手指跟随属于 Graphic，选择这一业务事实属于 Logic。

**D34 的有效窗口保护与 D60 的持久 WaitPay 保护分别表达不同事实，不能用“是否选中”代替。D63 已确认：支付失败清 WaitPay 后，未关闭的窗口继续保护。** R 的选中过期气泡暂不变更仅是历史规则。新方案中，气泡 Click 选择后请求打开窗口；只选中、拖动或取消选择不自动延长其期限或结算气泡。气泡数据与交互键轮廓见 [05](05_生成器与时间.md#气泡-effect-与生命周期)。

具体选择动作仍可能使撤销凭据失效等，是否产生持久变化要看完整结果，不能按命令名断言 Select 永不保存。D36 已确认到期弹窗主动关闭时逻辑立即销毁、表现随后退场；隐藏棋盘、广告覆盖、退出应用不自动等同于主动关闭该弹窗，分别按 05 的调度与恢复约定、06 的整体 Release 协议处理。有业务含义的离开步骤应在仍可接收业务请求时完成，再进入资源释放；不能在 View.Unbind 中补做销毁。

## Function／Effect 的数据接入

D22／D23 的模块约定见 [10 第 8 节](10_Function与Effect建模讨论.md#8-保存恢复合成与移除)，D49 将持久数据落实为所属记录内的字段／子记录。Function 按稳定槽位绑定，需要独立保存的 Effect 按记录恢复；D25 的 Tile 来源锁 Effect 根据 Tile 重建，不进入 Element 存档。两类效果均重新分配运行身份；不保存综合权限或 View。新建与恢复分开，恢复不执行重复奖励／扣费／期限重置。此前“导出”描述的是需要保存哪些内容，正常保存现直接使用原记录；只在撤销、显式复制或表现交接需要稳定副本时复制相应数据。

D31–D35：EffectBubble 记录附在已有 Element 数据内，不另存一份“气泡内物品”。恢复保留原 Function 数据和气泡期限，不重建一份新物品充当解锁结果。所有气泡变体在同一元素上至多一份；若存档含多份，作为不合法记录按存档协议处理，不依次恢复成多层或任取一份。解除后可再次添加，故无需终身气泡标志。D58 已确认窗口及交互键不存档、不跨整体 Release 恢复；D60 新增 WaitPay 必须随气泡记录保存并恢复。正式支付结果的持久关联仍待接入，不能把旧窗口运行键作为持久解锁授权。数据与操作流程见 [05](05_生成器与时间.md#支付等待与到期保护d60)。

## Tile 与 Element 分开存档（D13 已确认）

具体存档类已由 D16 提供；以下示意沿用实际基础字段名，能力扩展内容按 D49 接入，具体生成成员见下节：

```text
BettaSDK.Profile.Tile
  Pos: Position { X, Y }
  CfgId: int
  解锁进度（D24 已确认需要保存，需扩展生成定义）

BettaSDK.Profile.Element
  Pos: Position { X, Y }
  CfgId: int
  Function 专用子记录、需要恢复的独立 Effect 子记录（按当前能力扩展生成定义）

运行时
  TileSystem：按坐标查 EntityTile
    Coord、ConfigId 转发原记录；ElementId 可为空，仅运行时
  ElementSystem：按运行 ID 查 EntityElement
    Coord、ConfigId 转发原记录；Function／Effect 引用所属子记录
```

编辑器为 Tile 指定初始配置 ID；恢复已有局面时，TileSystem 读取 **Tile 自己的存档** 创建格子，不能仅用初始布局覆盖已有 Tile 数据。新局如何由编辑器布局产生初始记录，属于初始化接入细节。

已生成的 ProfileMergeTwo.MapData 通过 TileList／ElementList 组织两类记录；ElementList 泛型已修正并核对。物理文件由宿主统一保存，运行对象直接使用这些记录；新局识别见下文，随机与持久身份仅在实际需要时扩展。EntityTile.ElementId 与 View 引用均不进入 Tile 存档。

### 可据此设计的记录内容

下列是已有确认所需的**记录内容约定**，不是现有生成类已具备的成员，也不要求再建一个运行 State 层。实施者从 ProfileDefine 的生成输入补当前能力所需字段，重新生成；不得只手改带生成声明的 .cs。下面的 FunctionRecords／EffectRecords 表达记录归属，**不是要求新增两个任意类型载荷数组**。

```text
Tile 记录
  Pos、CfgId
  UnlockPhase：FunctionTileUnlock 直接读写的唯一阶段

Element 记录
  UniqueId、Pos、CfgId
  FunctionRecords[]：稳定槽位键、类型／配置键、该能力自身的必要数据
  EffectRecords[]：仅保存必须独立恢复的效果及各实例必要数据
```

- Tile 的阶段只编码一次；如果放在 UnlockPhase 字段，就不再往 Function 记录中重复保存。FunctionTileUnlock.Phase 读取这个字段，写入只通过该 Function 的内部应用方法；没有另一份等待导出的运行值。
- Element 的 EffectRecords 明确排除 EffectTileLock；读档、克隆或撤销恢复后，按实际 Tile 重新装配它。其它效果是否需要独立保存由效果定义明确，不能统一忽略。
- 阶段的枚举名、数字编码与版本迁移未定，不能沿用旧“深锁／浅锁”的数字 ID。类型键和 Function 槽位键的编码须稳定，不用反射顺序／列表下标代替。
- 恢复绑定原记录并创建新运行对象；普通保存不复制整盘。函数引用、SourceTile、RuntimeId、EntityView 与资源句柄均不在记录中。显式克隆／撤销副本必须深复制可变子记录；D65／D68 已确认元素持久 UniqueId；普通恢复绑定反序列化后的原记录，不重建业务记录或重新分配 ID。
- ElementList 的生成定义已修正；实际宿主接入继续补当前所需字段与注册，再验证真实落盘。只在内存记录中完成往返不算宿主保存已完成。

## 锁数据归属与表示（D24／D25 已确认）

**一级锁、二级锁、完全解锁统一是 Tile 的解锁进度。** EntityTile 具有解锁 Function，本文用名 FunctionTileUnlock；它直接读写所属 Tile 记录中的唯一进度。EntityTile 如需暴露 Phase，只提供转发至该 Function 的只读属性，不再存一份字段。局部阶段字段或 enum 不构成独立 State 层。

Element 创建并关联 Tile 后，根据 Tile 进度添加真实的运行时锁 Effect，本文用名 EffectTileLock；它属于 Element 的效果集合，只影响自己的 Owner。二级锁阶段由它限制元素操作，并由对应 EffectView 显示蜘蛛网。**此 Effect 不导出到 Element 存档，也不拥有另一份可独立修改的锁进度。** 推荐只绑定来源 Tile 的运行引用，判断时读取 FunctionTileUnlock 的只读进度；显示快照可以包含阶段副本，但不能反写逻辑。

| 数据 | 唯一来源 | 重建方式 |
| --- | --- | --- |
| 当前解锁进度 | Tile 记录中的唯一字段，FunctionTileUnlock 直接使用 | 恢复时绑定原记录；只有明确解锁业务推进 |
| 未揭示位置的默认元素种类 | 当前地图地编配置中的默认 Element 配置 ID | 首次揭示时按 Tile 坐标读取，不预建隐藏元素或另存待揭示元素实例 |
| 已创建元素的种类、位置与能力数据 | Element 自身存档 | 读档恢复原有记录，不用地编默认值覆盖 |
| EffectTileLock 的存在及来源 | 当前 Tile 进度＋占位关系 | Element 关联完成后同步；不存锁副本、来源运行引用或 Effect.RuntimeId |

因此维护的是一份持久事实及其运行作用对象；额外成本是集中同步 Effect。同步入口、解除与替换边界见 [04 的锁实现](04_棋盘交互与合成.md#tile-解锁与运行时锁-effect)。D29 已确定当前 Tile 不添加 Effect；Element 上的锁效果继续保留，Tile 进度由解锁 Function 管理。

## 一级锁揭示时的元素创建（D17 已确认）

- 一级锁时没有该 EntityElement 实例与实例存档记录，EntityTile.ElementId 为空；恢复时不为一级锁内容预建隐藏元素。
- 一级锁首次进入二级锁时，按当前地图＋Tile 坐标读取地编默认 Element 配置 ID，创建 EntityElement、建立占位并同步运行锁 Effect；元素按 Pos／CfgId 纳入自身存档，ElementId 继续仅保留在 EntityTile 的运行数据中。
- 从已保存的二级锁恢复时，按 Element 存档恢复原有元素；不能因“当前为二级锁”再次创建或重置元素。
- 表现层显示创建与揭示的结果，动画完成回调不决定元素是否存在。一级锁格没有占位也仍可禁止普通放入。
- D24 已确定来源是后续地编配置，其中每格包含默认锁进度和默认 Element 配置 ID。新局中初始为二级锁／完全解锁且配置了默认元素的格子，也在初始化时创建；一级锁不创建。已有局面的恢复始终先读存档。
- **二级锁或完全解锁不是“发现空格就补默认元素”的条件。** 元素移走、销毁或替换后不重新读地编补发；一级锁首次揭示、新局初始化、已有存档恢复是三个明确入口。若未来允许一级锁直接完全解锁，首次揭示仍走同一创建入口，具体跳级规则须另行确认。
- 地编查找失败、配置不存在等问题须在进度推进前完成校验，不保存“已揭示但创建意外失败”的局面。合法空内容如何配置、地图标识／版本与保存兼容协议仍由地编／存档接入确定。当前生成的 Tile 类尚未增加解锁进度字段。

## 核心不变量

第 1 项及恢复结构检查已随 D14 确认；其余为对应业务的候选约束，随各主题继续裁定。

1. 每格最多一个活跃元素；EntityElement.Coord 与对应 EntityTile.ElementId 一致，恢复占位时重建该关系，ElementId 不写入 Tile 存档。
2. 同一元素只能在一个实际容器中；仓库等外围接入后沿用此约束。待领取条目与已创建 EntityElement 不重复计数。
3. 被合成／使用／删除的元素退出活跃查询，退场 View 不计库存。D65／D68 已确认持久 UniqueId，退役按 D54；撤销机制恢复原物品身份的具体凭据规则留第 9 项，使用新运行绑定隔离旧回调，分配计数器不因撤销回退。
4. 生成 Function 自有次数、冷却及其它字段满足所选项目算法；需要阶段时保证表示一致，具体轮次和游标规则不作为通用架构约束。
5. 任何业务拒绝都不扣费、不消耗次数、不丢物品。若选择可控随机源，拒绝也不推进其状态。
6. 撤销只恢复该次移除的完整实例，不撤销期间其它物品的操作，不覆盖已占用原格。
7. 物品自身状态与只读配置分开；图标缺失不改物品种类，也不能用 GameObject 数量计算库存。

## 二合 Profile 接入实施契约（D49）

### 持有关系与写入口

```text
Host：获取已注册的 ProfileMergeTwo
  MapData.TileList[i] ───────→ EntityTile → FunctionTileUnlock 使用同一 Tile 字段
  MapData.ElementList[i] ────→ EntityElement
    能力子记录 ──────────────→ 对应 Function
    独立效果子记录 ──────────→ 对应 Effect

Command Consumer：查询、校验、准备普通值数据
  → Operation.Apply
  → System／Entity／Function／Effect 内部业务方法
  → 修改同一生成记录／Profile 集合 → 自动标脏
  → 本批 Apply 完成后 Graphic 消费显示结果

ProfileHub：按已有条件保存根数据，与 Graphic 动画是否完成无关
```

**每份持久事实只有一份可写数据。** Entity 里的记录引用与集合里的引用指向同一对象；坐标／配置查询转发生成记录。Function／Effect 可以从 Owner 读取子记录，也可以绑定后缓存其引用；普通更新修改原记录，不偷偷替换子记录让已绑定对象继续写旧值。确需替换整份记录时先退出该运行绑定，再重新恢复。

**不同业务对象不能共享可变子记录。** Tile.Pos 与所在 Element.Pos 的坐标值可以相同，但必须是两个 Position 对象；新建元素复制 X／Y 值，不能直接赋 `element.Pos = tile.Pos`，否则移动元素会改动 Tile 坐标。两个元素的生成／效果子记录同样独立；只读配置可以共享。这样，“同一对象引用”只用于同一业务记录与它的运行拥有者之间。

实现采用三合的简单持有方式即可：Entity 基类内部保存 ProfileBase，具体 Entity 在绑定时检查类型并取得 Tile／Element 引用。也可由两个具体 Entity 分别持有类型明确的字段；二者不并建。Function／Effect 是行为对象，不继承 ProfileBase，不为每种能力增加一套 State 类。

Profile 数据类型允许成为 Logic 的依赖。Logic 不调用文件保存、云同步或 Hub 生命周期；这些仍归 Host。生成 setter 内部依赖 ProfileHub 是本方案的实际耦合，不能再宣称 Core 完全不依赖 Profile。具体 asmdef 接入见第 10 项，不能为满足旧“无 Profile 依赖”候选重新复制一套模型。

### 当前生成字段的落地规则

| 所属记录 | 需要补充的内容 | 生成与绑定要求 |
| --- | --- | --- |
| Tile | 解锁进度 UnlockPhase（UniqueId 已生成） | 明确表示一级锁、二级锁、完全解锁，显式校验有效值；编码在定义中固定，不能按旧项目数字推断；缺失阶段不能默认为完全解锁 |
| Element 的生成能力子记录 | 所选算法需要恢复的次数／时间等 | 单槽能力可用命名子属性，其字段位置对应固定槽位键；确有多个同类槽位时再用按稳定槽位键组织的类型明确集合，不能用列表下标认能力 |
| Element 的气泡子记录 | 效果定义／变体键、可选截止时间、WaitPay、当前支付请求标识及实际解锁变体需要的数据 | 单层气泡可用一个可空专用子记录；null 表示没有气泡，非 null 恢复一份。没有期限与期限到 0 明确区分；不能使用默认 0 同时表达两者。WaitPay 默认 false；true 时必须能关联当前支付请求，开始／结果按 05 同次维护 |
| 其它已采用的 Function／独立 Effect | 只补本能力确需恢复的数据 | 有真实第二种需求时扩展对应生成结构；不预置任意 object／JSON 载荷或未来全部效果 |

以上是成员语义与最小表示方式，字段名按生成规范落地；新增子记录应使用宿主同一生成机制，保证 setter 与集合变更通知。气泡记录、生成记录默认值要区分：生成器配置存在但记录缺失，不等于可以随时重置次数；气泡子记录不应在所有 Element 上无条件默认 new，否则无泡元素也会被恢复成气泡。生成工具若不支持可空子记录，实施前明确一种等价、唯一的“无记录”表示，再同步生成定义；不得靠未约定的特殊配置 ID 猜测。

定义／类型／槽位键应能唯一找到当前配置与逻辑类。单份能力若已由专用字段和元素配置唯一确定，不再重复存相同类型键；气泡定义不能由元素种类唯一确定时需保存。记录类型／槽位与配置不匹配时报告，不随意删掉旧数据或覆盖成新建值。支付补单按已确认的 Element.UniqueId 定位；新建与恢复按本页 D68／D69 分配契约；运行 InstanceId 与 Effect.RuntimeId 仍每次装配重新分配，不能把任一运行计数器保存下来冒充持久分配器。

时间记录的单位与实际时间源按 05 的命令时间戳契约统一，在 Host 接入时固定；基础验证使用同一单位的受控时间。不能在持久字段确定前将一处秒、一处毫秒接在一起；这项依赖不要求 Function 改用独立 State 层。

本期气泡实现须把上述期限、WaitPay 与支付请求字段落实到原生成定义，再由生成工具产出类型；不能只存在于运行 Effect 或 UI 字段中。支付失败时结束当前等待关联，保留气泡记录及期限；成功时整个气泡记录随效果移除。ActiveDialogId、窗口引用、Effect.RuntimeId 和退役凭据不进入该子记录。宿主支付请求键的具体类型在读取真实接口后选定，不能仅用 Element.UniqueId 替代“哪一次支付”。字段存在不等于真实补单已接通，验收见 08。

### 方法边界与调用者

下列是实现方法的职责用名，可按宿主风格调整；不要求为每个入口增加接口类。

| 入口 | 调用者与输入 | 必须完成 |
| --- | --- | --- |
| InitializeProfileFromLayout(mapData, layout) | 启动入口；Initialize 为 false，地编配置已读取 | 直接向当前 MapData 填充 Tile／Element 记录，每份新记录按 D68／D69 从同一根计数器取号一次；成功返回后由调用者设置 Initialize=true；不创建第二份 MapData 发布层 |
| RestoreMap(mapData) | Host 初始化；已加载记录 | 先按 D69 跨两类记录校验 ID 和根计数器，再依恢复顺序绑定已有记录；不清列表、不重复 Add、不产生新局奖励 |
| BindRecord(record) | Entity 创建工厂；类型匹配的原记录 | 分配运行身份、保存引用、建立能力对象；无自动奖励或立即开放计时 |
| CreateElement(preparedBirth) | 新局装配或 Operation.Apply；已校验出生描述 | 初始化一份新 Element 存档记录，按 D68／D69 从共享根计数器分配一次 UniqueId 及必要子记录，再加入 ElementList、绑定同一记录并建立占位／派生效果 |
| ApplyPlacement(preparedMoves) | 移动／换位／腾位 Operation | 统一检查所涉及记录与旧占位，清相关旧占位、修改原 Pos、建新占位、同步派生效果；不更换原 Element 记录 |
| FunctionTileUnlock.ApplyPhase(next) | 解锁／合成／揭示 Operation | 修改同一 Tile 记录的阶段，协调同步当前占位元素的锁 Effect |
| Attach／Remove 独立 Effect | 对应 Operation；明确实例和条件 | 同时维护所属持久子记录与运行效果；气泡移除保持原 Element 记录和其它能力数据 |
| RemoveElementWithProfile(instanceId) | 合成消耗／业务删除 Operation | 捕获必要显示数据，移除对应 Element 记录并解除占位、活跃索引、选择／交互和活动行为 |
| ReleaseRuntime() | 关闭、初始化失败清理或实例重建 | 取消计时／订阅，清运行索引与占位，解绑引用；不移除根内任何记录 |

运行期消费者准备阶段不修改已挂根记录，也不为“试一下能否执行”调用生成 setter。准备出生／迁移参数使用普通只读值描述；通过正常业务校验后才在 Apply 创建或修改生成记录。恢复装配和经过校验的新局初始化是受控入口，不伪装成玩家命令；初始化完成前不开放输入。

记录删除以运行对象实际绑定的记录引用为准，并验证它属于当前 MapData；不能只按配置 ID，或在位置已变化后按旧坐标随意删一项。正常集合修改使用 ProfileList／ProfileDict 的实际通知方法，不通过基类集合／接口绕过标脏。不另外加每帧 SaveEntity，不由 View 的销毁回调删除存档。

### 核心业务怎样改记录

| 业务 | 同一次 Apply 的持久与运行变化 | 要保留什么 |
| --- | --- | --- |
| 移动／换位／气泡腾位 | 按准备好的映射更新各元素原 Pos 与所有相关 Tile 的运行占位，见 02b 的统一操作 | 元素记录引用、生成进度、气泡原期限；Tile 的位置／配置／锁进度不随元素移动 |
| 主合成 A＋B→C | A／B 对应记录移除，C 新记录入集合，目标 Tile 按规则解锁并绑定 C；继承字段由已采用的合成规则明确赋值 | 未参与的记录；不默认把 A 的全部子记录交给 C，也不共享可变子记录 |
| 一级锁首次揭示 | 同一 Reveal Operation 推进 Tile 阶段，按地编出生描述创建一次 Element 记录并建立占位／锁效果 | 后续重开使用这条 Element 记录，不能重新按地编补发 |
| 附加／解除气泡 | 对应持久子记录与运行 Effect 同步建立／移除；解除结束对应运行交互 | 原 Element、坐标、Function 和其它 Effect；不写综合权限 true／false |
| 到期且普通关窗销毁 | 按匹配交互、期限及剩余支付保护判断，确需销毁时删除 Element 记录，清运行占位与活动关系；Graphic 播放已捕获的退出结果 | Tile 的进度；不等退出动画完成后才删除存档 |
| 关闭重开 | 完成明确的离开业务后释放运行绑定；重新绑定根内记录 | 所有仍有效的 Tile、Element、能力与独立效果记录；不恢复旧窗口键／回调 |

全部操作沿 02b：一个 Command 可产生多个 Operation；本批逻辑完成后才派发表现。没有自动回滚协议，Apply 异常可能留下部分改动，不将字段标脏或本页的统一方法称作事务。正常拒绝必须在登记前完成检查。

### 示例：同一记录引用怎样贯穿运行

以下是责任示意，不是宿主已存在的新 API；运行写方法仅供 Logic 的 Apply 路径调用。

```csharp
// Restore：record 已在 MapData.ElementList 中，不再 Add。
void BindRecord(ProfileElement record)
{
    _data = record;
    // 具体 Function 绑定 _data 中对应子记录，不复制次数／期限。
}

// View 可持有 Entity；通过查询读取唯一记录，不取得业务写入权限。
int X => _data.Pos.X;
int Y => _data.Pos.Y;

// System 已准备全部移动，先解除相关旧占位，再统一修改和重建。
void ApplyPosition(int x, int y)
{
    _data.Pos.X = x;
    _data.Pos.Y = y;
}

void ReleaseRuntime()
{
    ReleaseRuntimeFunctionsAndEffects(); // 清引用／订阅，不删持久子记录。
    _data = null;                       // 最终释放时调用；先确保 View 已解绑。
}
```

`ProfileElement` 表示 `BettaSDK.Profile.Element` 的代码别名；这段只展示持有与写入，不替代 02b 对占位完整修改、结果捕获和删除操作的契约。D54 下 View 可经所持 Entity 读取记录数据，但不修改 Pos／Profile；普通查询返回坐标值。上述 ReleaseRuntime 在最终解绑后调用，业务删除先退役并保留数据，不立即清空 _data。需要历史值的显示字段在修改／释放前捕获。

### 三种数据用途不要混用

| 用途 | 数据形式 | 谁持有／更新 |
| --- | --- | --- |
| 正常保存 | Profile 根下持续更新的原记录 | Entity／Function／Effect 按业务职责修改，ProfileHub 序列化 |
| Graphic 显示与退出动画 | D54：View 持有 Entity 引用；历史值及已移除 Effect 的字段按需保存副本 | Graphic 只读；退役 Entity 可保留已经移出 MapData 的记录直到 View 结束，不写入或重新挂回该记录 |
| 撤销、显式复制与诊断样本 | 对应范围的独立数据副本 | 业务明确捕获，不能随原元素继续变化；撤销产品细则仍由第 9 项确定 |

普通存档使用上述根内原记录；View 持有旧 Entity 不影响其记录已经从根中删除，表现结束才最终清引用。显示／撤销副本仅服务各自用途，不作为正常存档写回来源。已撤回独立全盘发布和首次建图替换 MapData 的候选流程。

## 保存结果与宿主接入

| 阶段 | 代表什么 | 不代表什么 |
| --- | --- | --- |
| Operation.Apply 更新记录 | 根内当前业务数据已修改 | 已写磁盘、整个 Batch 自动回滚或后台只读到完整 Batch |
| Profile setter／集合标脏 | Hub 知道有变化，可按已有机制保存 | 每次字段更新都同步保存或每个版本对应一个 Command |
| SaveToLocal 请求提交 | 宿主受理了保存请求 | void 返回就是保存成功；不能据此重放玩法 |
| 文件保存并冷启动恢复验证 | 宿主实际持久化链路通过对应案例 | 所有崩溃时点均有事务保证 |

Host 在获取根前完成注册：核对 LoaderInit、UtilsLoading.Restart 的根清单，按当前项目装配一次 ProfileMergeTwo；若采用模块延后注册，则首启／重启均须经过该入口，不能两个方案重复注册。每次打开棋盘只获取已存在的根。嵌套 MapData／Tile／Element 无须逐项向 Hub 注册。

普通修改依赖现有自动保存。D58 下整体关闭二合直接 Release 各系统，不发送离开／关窗业务 Command，也不为释放清 WaitPay 或删除到期元素。宿主关闭／暂停保存沿原链，支付开始前关键记录的保存请求与结果恢复按 05 接入，具体宿主装配归第 10 项；请求在相应业务写入后发起。保存失败使用宿主诊断／重试，不重新执行合成、消耗或解泡。二合模块不得调用全局 ProfileHub.Release 来关闭自己的棋盘，也不能清理其它根的数据。

D52：本期按三合方式使用现有 ProfileHub，正常生成字段／集合修改负责标脏，沿用宿主本地／云端保存与生命周期处理。实现时接注册和业务记录即可，保存成功仍以实际文件恢复验证；不再保留额外保存机制的架构选择题。

## 保存与恢复

### Initialize 控制首次填充（D51）

已核对生成的 MapData.cs：`Initialize` 为 bool，默认 false，setter 使用现有变更通知。**它是唯一的首次初始化判据，不根据 TileList／ElementList 数量猜测。** D50 已确认本期没有需兼容的旧存档。

```text
获取 ProfileMergeTwo.MapData
→ Initialize == false：读取地编配置，创建 Tile／Element 存档记录并加入当前 MapData
                       → 数据填充成功后 Initialize = true
→ Initialize == true：直接使用已有存档记录
→ TileSystem 遍历 TileList，创建 EntityTile 并传入原 Tile 记录
→ ElementSystem 遍历 ElementList，创建 EntityElement 并传入原 Element 记录，建立占位
→ 同步派生锁效果，完成关联后启用行为与表现
```

首次数据填充的具体职责：

- 地编每个有效格子生成一条 Tile，记录自己的 Pos、CfgId、默认解锁进度。
- 一级锁不创建 Element 记录；初始二级锁／完全解锁且配置了默认元素时，生成对应 Element 及必要能力／独立效果数据。
- 数据直接加入当前 MapData 的列表。Initialize=false 的填充入口开始时清理这两个未初始化列表，再按配置填充，避免失败后再次进入时重复追加；Initialize=true 时不执行这一步。
- 全部初始记录填充成功后设置 Initialize=true，然后用统一流程创建运行 Entity。该标记表示存档数据已初始化，与 EntityView 创建是否成功无关。
- 地编加载／数据填充失败则保留 false 并报告；运行 Entity 装配失败则只释放运行对象，已完成的数据和 true 标记保留，下次从记录重建。
- Initialize=true 后，即使没有 Element，也按已有存档恢复；普通移动、消耗、关闭或配置变更不会重发初始元素，也不会把标记改回 false。

最小代码轮廓（辅助方法为二合实现用名）：

```csharp
var mapData = ProfileHub.Instance.GetProfile<ProfileMergeTwo>().MapData;
if (!mapData.Initialize)
{
    var layout = LoadLayoutConfig();
    InitializeProfileFromLayout(mapData, layout);
    mapData.Initialize = true;
}

tileSystem.Restore(mapData.TileList);
elementSystem.Restore(mapData.ElementList);
// 全部占位建立后同步派生锁，再开放行为与表现。
```

`InitializeProfileFromLayout` 不再写一次标记；由上面的调用者在成功返回后统一置 true。地编格式尚未添加，这是待实现的配置输入；当前先明确每格坐标、Tile 配置 ID、默认锁进度及默认 Element 配置 ID，接口名随实际地编落地。

### 创建运行对象与恢复

创建前校验记录坐标、配置与占位关系；检查结果不参与 Initialize 判定。正常数据直接沿以下顺序创建。

**初始化顺序及恢复边界已确认（D14）：**

1. 加载 Tile／Element 存档，校验 Tile 坐标唯一、配置可解析、元素坐标指向有效格子、同一格没有重复元素。
2. TileSystem 遍历 ProfileMergeTwo.MapData.TileList，以记录的 Pos.X／Pos.Y 和 CfgId 创建全部 EntityTile；已有业务状态按以后生成的字段恢复，ElementId 初始为空。
3. ElementSystem 遍历 ProfileMergeTwo.MapData.ElementList，以元素记录的 Pos 与 CfgId 创建 EntityElement，按坐标找到 EntityTile，并填入运行 ElementId；ElementList 的泛型现已正确。
4. 依据每个 Tile 的当前进度，为其已关联 Element 同步运行 EffectTileLock；不从 Element 记录还原格锁、不按地编默认内容补发元素。一级锁却存在 Element 记录属于结构冲突，应报告并保留原记录。
5. 全部创建、关联与派生效果同步完成后，再启用依赖完整格子／元素集合的查询、自动行为和计时结算。字段恢复与 Function 构造可在创建阶段完成。
6. EntityViewTile／EntityViewElement 绑定已有逻辑对象及效果并显示当前结果；表现完成回调不负责创建占位或触发首次生成。

二级锁等已有元素记录按存档恢复；D17 指定的一级锁不预建元素。初始化不使用玩家“是否可放入新物品”的权限拒绝原有占位。恢复后，锁定与其它行为限制继续生效。结构错误不得静默覆盖或丢弃记录；具体错误恢复／迁移方式仍待确定。

D42 的“二级锁＋气泡”组合约束也须在完整关联后、开放行为前核对：项目存在适用的独立格锁解锁方式才采用该组合，否则配置应避免产生。恢复时不能因玩家不能拖入锁格而拒绝结构正确的记录，也不能因为缺少新解锁规则就静默删泡／改阶段；报告具体 Tile、Element 与规则缺项，沿存档错误／迁移协议处理。配置和运行时附加的检查边界见 [04](04_棋盘交互与合成.md#独立解锁方式与配置约束d42)。

逻辑完成时各记录必须对应同一轮业务结果，保存按 D52 沿用宿主。当前状态存档不含 View、退役 Entity 引用、Tween、运行时 Command／Operation／Batch 或旧回调；D44 允许按需另存稳定的 Command 输入记录，Operation／Batch 始终不存档。恢复不重放已完成奖励／扣费，也不补播历史合成动画。时间归一化的具体算法、View 资源装配与开放输入协议继续讨论。

如果实际接入需要 SchemaVersion，应与配置版本分开；当前未提前增加版本平台。缺配置报告具体 ID，旧 Lua 存档迁移未被要求，保留原始包。配置热切换、Profile 替换或账号切换时如何关闭与重建，沿用候选生命周期方案；同一存档实例的并发写入策略未在本轮扩展。

运行装配中途失败只逆序释放已创建的运行对象，原记录保留；不要调用业务 RemoveElementWithProfile 清理恢复过程。Initialize=false 的数据填充与运行装配是两个步骤，按上节处理。已有数据中的缺失字段，仅按明确的版本兼容规则补齐，不能在每次 Function.Init 时悄悄重置。

实施时分别验证同进程重建与清除内存后的磁盘恢复，不能把生成记录已改变当作已经完成落盘。

## 撤销数据与不可撤销边界

D70 确认售卖不可撤销，不保存恢复已售物品、扣回收入的凭据。Operation 逆序 Undo 遇到第一个不可撤销项即停止，不得跳过；正式边界见 [02b](02b_Command与Operation执行方案.md#undo-边界d70-已确认)。

普通删除与其它操作是否支持 Undo、恢复数据形式和寿命见[第 9 项](../待讨论项/9_撤销边界与不可撤销操作.md)。若允许恢复，仍需完整稳定的物品数据，排除派生格锁和运行 View／订阅，隔离旧回调；身份、落点和计时不能直接沿用已撤回的售卖恢复方案。

Operation／OperationBatch 不存档；独立历史数据不等于运行 Operation。不能只留可撤销项而丢失中间边界。跨关闭历史和具体 Undo 接口仍待确认，撤销不是动画倒放。

## 实现顺序建议

统一的依赖顺序与验收见 [08 的 Profile 实施清单](08_实现顺序与验证.md#profile-实施清单d49)。实施本页时依次完成：Step 1 扩展当前能力的生成字段与注册；Step 2 按 Initialize 首次填充、绑定原记录并恢复；Step 3 接 Operation 的创建／修改／删除；Step 4 接独立效果记录及运行释放；Step 5 验证根记录、同进程重建和真实磁盘恢复。每一步的具体文件、验证与剩余依赖由该清单维护。

本页覆盖数据持有、Initialize 首次填充、运行恢复及业务读写，可直接设计实现；第 7 项已完成并删除。地编配置输入按本文职责实现，时间／窗口／关闭按 05／06 实施；撤销机制及完整程序集装配见第 9、10 项。实现报告须区分完成的模块与宿主联调结果。
