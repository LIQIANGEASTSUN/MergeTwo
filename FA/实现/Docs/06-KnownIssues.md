# 原提交问题与重写注意事项

以下问题在迁移前的源码/数据中已存在。本次只整理和取证，没有改变玩法逻辑。静态可确认的代码错误与需要运行/设计核验的风险分别列出。

## 静态可确认

| 位置（相对 Lua/Game/TwoMerge） | 事实 | 重写建议 |
| --- | --- | --- |
| `Logic/MergeSpawnLogic.lua` / CheckDerivant | 先累加 totalWeight，随后重置为 0 再 random；循环命中后不 break，后项覆盖前项 | 使用明确的加权抽样函数，测试边界和分布，不照搬此函数 |
| `DataPack/DataPack.lua` / CheckConvertMsg | itemStateData 解码调用 DataPackage[data.itemState]，而编码用 ItemStatePackage；气泡值 3 会选中 ItemBoxMsg | 使用 ItemStatePackage；为气泡到期时间做序列化往返测试 |
| `Function/Normal/OmnipotentMergeFunction.lua` | require 指向 `Game.TwoMerge.Config.DropProcessLogic`；实际模块位于 Logic | 修正模块路径；当前 FunctionMap 未装配该功能，不代表已验证可玩 |
| `Logic/GenerateLogic.lua` / GenerateItem | generateNum 固定为 1；未以表值控制多颗生成 | 区分“字段存在”与“功能实现”，按新需求决定是否支持 |
| `Net/TwoMergeNetOrder.lua` / GetItemCount | 队列参与订单计数的代码已被注释 | 当前参考行为只统计棋盘和仓库，不按过时函数注释实现 |
| `Protocol/Schema/TwoMergeModuleMsg.proto` 的注释 | itemState 气泡注释为 1，代码实际为 3；仓库起点注释与客户端常量也不同 | 以代码枚举和新协议规范为准，明确数据版本 |

概率补充：克隆使用 `math.random(0,10000)` 且 `clonPro < value` 才拒绝。因此非空概率数组里的 0 不是严格不触发，10000 则必触发。重写可明确使用 1..10000 或 [0,1) 约定。

## 静态数据缺项

- 生成器 `1040304` 的 proOutput 引用缺失物品 `1030501`；`1040305` 引用缺失物品 `1030501` 与 `1030502`。
- 物品 `9950301` 的类型需要宝箱表，但没有对应 `MergeTwoboxTemplate` 行。
- 21 个配置图标未在源资源文件名或 `.meta` 子图名中找到：1040110、1030113、1030114、1030115、1030313、1030314、1040508、1040509、1040510、1030710、1040710、1030910、1031007、1040810、1040811、1030810、1030811、1030812、9910105、9920105、9950301。
- 以下 3 个 GUID 在源 Assets 和已识别 UGUI 中不能解析，依赖链已保留：

| GUID | 受影响资源 | 引用类型 |
| --- | --- | --- |
| 15ac03564ad97244bb7224de360f8b99 | UI/TwoMergePanel/TwoMergePanel.prefab | Sprite |
| a652376b7159ec74394646fb7fbd87be | 共享 Buildin/Animator/Button.controller | AnimationClip |
| f70555f144d8491a825f0804e09c671c | 共享 E_GuidePoint.anim | 历史脚本动画绑定 |

未用无关图片或随机 GUID 替换这些缺项。13 个 UGUI 脚本 GUID 可在本地 PackageCache 核实，不属于资源丢失。18 个自定义/第三方脚本 GUID 则有源码参照，但在独立包里不是可绑定的 MonoScript，见资源说明。

`UITwoMergeBpRewardItem.lua` 还声明了不存在的独立 `twoMergeBpItem.prefab` 路径，但该文件的 Create 函数是空的；现有 BP 面板从内部 `twoMergeBpItem` 节点克隆。这个路径目前不能作为“运行一定失败”的证据，也不要据此伪造一个 Prefab。

## 需要运行或产品确认

- `TwoMergeManager:GetMapData` 的无服务端分支注释明确写通常不经过；构造的数据与 DataPack 完整初始化不一致，不能直接作为离线模式。
- `TwoMergeNetBag.GetBagItems` 使用包含上界的循环，需要结合调用方确认额外一格是否作为购买槽，不能单看循环就擅自修复。
- FunctionMap 有明确意图顺序，但构造/注册阶段使用 `pairs` 遍历数组，没有显式排序；新实现应使用确定性的遍历和优先级，不依赖 Lua 的偶然迭代顺序。
- `TwoMergeManager:GetBpData` 把 bpCfg 缓存在单个字段，没有按 mapId 分开；多棋盘切换时应验证生命周期清理。
- `randomOrderCDInfo.simpleEnd` 在读包时乘 0.001，difficultEnd 同处未转换；状态时间、CD、服务器毫秒/本地秒需要逐接口核对。
- 合成气泡失败/超时变更、删除撤销、生成器入仓暂停/出仓恢复、多个在途同步请求失败时的增量合并，都应有新项目测试。
- `32001.default_random_order` 仍为另一组链的 `11010705`；配置是合法引用，但是否符合当时产品意图未知。

## 范围限制

没有服务端实现或真实运行回放，不能确认源码静态缺陷在当前活动配置下是否被玩家实际触发。这里列出的新实现建议不是对旧版本做过运行修复验证的结论。
