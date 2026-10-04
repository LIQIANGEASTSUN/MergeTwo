# FA 历史参考包：给接收项目 Agent

更新日期：2026-10-04。**当前二合项目的交接入口是 [_Plan/START_HERE.md](../_Plan/START_HERE.md)**，最终设计与用户确认以 [_Plan/09](../_Plan/09_决策与接续记录.md)及对应正文为准。

> **废弃声明：旧交接中的“实现订单循环”和“建立独立 State／GeneratorState 层”建议已明确废弃，不再执行，也不再作为待讨论或待实现事项。** 此声明同样适用于 FA 下历史文档中的相关建议。原代码、配置及分析中的订单／State 记录仅保留用于理解历史实现；当前实现以 _Plan 的 D04、D15、D19 等确认结论为准。

FA 是用户自己以前实现的二合资料，不是其它游戏的 APK 逆向包。本目录保存旧需求、Lua 源码、配置和资源，供接收项目比较和按需复用；它不是可直接运行的独立模块，也不决定新二合必须实现哪些功能。

## 1. 与当前方案的关系

按 D74，FA 抽取代码、宿主三合 Assets/Game/Merge、TileScape Assets/Module/HomeHub **共同作为新二合的代码参考**。FA 重点提供旧二合玩法与资源经验，三合提供 Profile 和宿主接入，HomeHub 提供已确认的 Command／Operation 执行机制。接收 Agent 应阅读相关实际源码，完整路径及各模块入口见 [_Plan/00](../_Plan/00_参考资料与证据.md#必须参考的三处代码d74)。

旧版交接中的实现建议按下表处理。标为“已废弃”的内容已经结束讨论，不能因阅读参考代码而重新加入实施计划；外围功能的范围仍按用户当前需求确定。

| 旧参考中的概念／功能 | 当前处理 |
| --- | --- |
| Cell、Board、ItemInstance 等旧建模建议 | **已被当前方案替代。** 使用 EntityTile／EntityElement、EntityViewXXX、TileSystem／ElementSystem |
| 独立 State／GeneratorState 层及对应基类、管理器、集合 | **实现建议已废弃，不再实现。** 按 D15／D19，Function＋Effect 各自持必要数据；生成次数和冷却归生成 Function，局部阶段归所属对象；权限用方法返回 bool |
| 照搬锁和气泡旧数字状态的建议 | **已被当前方案替代。** 锁进度由 Tile 唯一持有；Element 派生运行锁 Effect；气泡是已存在 Element 上的 Effect，解除保留身份 |
| 订单、订单循环及配套接入 | **实现建议已废弃，不再实现。** 按 D04，本项目不做订单，相关配置接入、实施步骤、验证和待讨论项均已移出方案；旧订单源码仅供溯源 |
| 售出／删除撤销与历史系统 | D71 不实现重播／Undo／Redo，仅在架构上考虑 |
| 旧联网存档／DataPack | 当前沿用宿主生成 Profile，直接持有原记录；不复用旧协议当作新存档 |
| AppServices／PanelManager／XLua 等框架 | 作为历史依赖阅读，不恢复整套旧游戏框架 |
| UI、图片、Spine、特效与配置 | 新棋盘已确定 UGUI；实际复用前核对资源、脚本及渲染依赖，不把旧 Prefab 当成已适配资源 |
| 仓库暂停及完整外围循环 | 不纳入当前实施任务；后续由真实需求另行确定 |
| 商店、广告、付费、BP、任务、主城修复 | 仅按当前用户需求接入，不能因旧包包含代码而自动纳入范围 |

完整历史缘由、已确认方案和当前工程候选见 START_HERE 及 _Plan/13；本页不再维护第二套新玩法路线。

## 2. 怎样读这个包

下表路径以本目录的 **实现/** 为根；阅读源文件时区分“需求意图”“代码实际行为”“历史说明”。

| 目的 | 入口 |
| --- | --- |
| 包定位、来源和保留边界 | [实现包 README](实现/README.md) |
| 历史调用与数据链路 | [实现分析](实现/Docs/01-Implementation.md)；Lua/Game/TwoMerge/Article/、Function/Normal/MergeFunction.lua、Logic/MergeSpawnLogic.lua |
| 生成与棋盘 | Lua/Game/TwoMerge/Logic/GenerateLogic.lua、Lua/Manager/TwoMergeMapGridManager.lua |
| 历史状态与序列化问题溯源（State 架构建议已废弃） | Lua/Game/TwoMerge/Article/State/、DataPack/DataPack.lua；按[已知问题](实现/Docs/06-KnownIssues.md)核对 |
| 表关系与真实取值 | [配置关系](实现/Docs/02-Configuration.md)、[字段字典](实现/Docs/04-ConfigurationFields.md)、Configs/Json；必要时看 Excel 注释 |
| 资源定位 | [资源说明](实现/Docs/03-AssetsAndUI.md)、[离线资源目录](实现/Docs/ResourceCatalog.html)、Docs/Manifests/item-assets.json |
| 静态审计边界 | [导出与验证](实现/Docs/05-ExportAndValidation.md)、Docs/Manifests/migration.json／validation.json |

旧合成 nextId、groupId、level 的来源要按配置核对，不从 ID 加一或字符串截断猜规则。旧生成次数、轮次、费用和概率按实际方法理解；是否采用这些算法由当前项目选择。Order／Net 等只在追查历史耦合时阅读；订单实现建议已废弃，不能生成订单开发任务。

## 3. 复制后的路径和资源规则

- 推荐 _Plan 与 FA 保持同级；放在接收项目根或其它资料目录均可。包内 Markdown 链接按这个布局维护。
- 清单、旧脚本及部分工具说明中的 Assets/MergeTwo/ 是原 Unity 工程的历史目标前缀；当前文件查找对应本包 实现/。旧 require 模块路径仍按原名保留。
- 文档中原来的 参考项目/FA/ 是此前整理位置，现 FA 已位于交接包顶层。不要据旧路径另复制一份参考包。
- 原始 Lua、协议、配置、资源、meta、GUID 和迁移清单用于溯源，不因当前方案变化而改写。Reference/CSharp 内的 .cs.txt 是参考文本，不批量改为可编译 .cs。
- Docs 的旧导出步骤属于原工程操作记录；本次用户只复制资料目录，不需要先导出 Unity Package、安装旧 Lua 环境或运行旧服务器。

## 4. 能确认与不能确认的内容

已知问题文档记录了概率端点、衍生抽样、序列化及资源缺项，不能照搬为新实现；其中校验结果属于历史静态检查，不等于当前宿主玩法已经通过测试。

本包没有服务器实现、线上随机种子、最终运营配置或完整运行测试录像。旧 proto 注释与实际客户端存在差异；具体行为以源码和配置证据说明，推断单独标注。Spine、DOTween、字体、Shader 与原框架脚本依赖需要在接收项目中按实际资源接线核对。

接收 Agent 的下一步是核对当前宿主并继续具体设计讨论；不是按本页恢复旧 Lua 玩法。开始代码实施以用户在接收项目给出的任务为准。
