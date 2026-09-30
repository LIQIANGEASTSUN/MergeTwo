# 给接收项目 Agent 的任务说明

> 这是旧参考包的历史交接说明。当前讨论入口为 [方案 README](../../_Plan/README.md)，本次范围以 [提问](../../_Plan/提问.md) 为准；文中的订单等历史建议不自动纳入当前方案。

请分析本目录中的历史二合玩法，在当前项目的技术架构中重新实现。用户要参考旧方案，不要求延续旧 Lua 框架、旧全局单例或旧联网协议。先提交与你所在项目匹配的实现设计，再按用户在接收项目给出的范围实施。

## 阅读顺序与证据

1. [实现包 README](实现/README.md) 确认包定位、来源和限制。
2. `Docs/01-Implementation.md` 了解点击生成 → 拖拽合成 → 提交订单 → 解锁/奖励的循环。
3. `Lua/Game/TwoMerge/Config/TwoMergeConfig.lua` → `Article/Article.lua` → `Article/State/ArticleStateBase.lua` → `Function/Normal/MergeFunction.lua` → `Logic/MergeSpawnLogic.lua`。
4. `Logic/GenerateLogic.lua`、`Manager/TwoMergeMapGridManager.lua`、`DataPack/DataPack.lua`、`Net/TwoMergeNetOrder.lua`、`Order/*`。
5. `Docs/02-Configuration.md`、`Docs/04-ConfigurationFields.md`，以 `Configs/Json` 的实际值核对表结构，必要时读 Excel 注释。
6. `Docs/03-AssetsAndUI.md` 与 `Docs/ResourceCatalog.html`；根据 `Docs/Manifests/item-assets.json` 通过 ID 定位图片，不要猜资源文件名。
7. `Docs/06-KnownIssues.md`：其中的问题不要照搬成新需求。

除上述链接外，下文源码／Docs／Configs 路径相对本仓库的 `参考项目/FA/实现/`；省略的 Lua 子路径按阅读顺序中的父目录定位。`Docs/Manifests/migration.json` 仍保留历史 `Assets/MergeTwo/` 目标前缀，查文件时映射到 `参考项目/FA/实现/`。旧 Lua 模块名按其原始模块路径保留；配置被单独归档，未配置任何运行时加载器。

## 应明确设计的内容

- 独立数据模型：Board / Cell / ItemInstance / GeneratorState / Order / Inventory / PendingRewards / Wallet。
- 保留格子锁与物品锁两个概念；气泡属于物品状态，区域任务锁是额外门槛。
- 以 `nextId` 定义合成结果，`groupId` + `level` 辅助图鉴和订单；不要以 `ID + 1` 计算。
- 将功能处理顺序写明：合成或特殊道具优先，不能处理时才换位；一次放手只提交一次规则变化。
- 把生成器的轮次、轮内次数、时间、费用、随机数与动画分开。配置空值、字符串 ID、数字 ID 要统一处理。
- 随机、时钟、存档和钱包使用可替换接口。离线原型可实现本地存档；正式联网版再定义服务器权威、幂等与冲突策略。
- UI 仅渲染状态和发送命令；不要把旧 AppServices / PanelManager / XLua / MessageDispatcher 移植为新的玩法核心。
- 商店、广告、付费、BP、主线任务、地图建筑修复作为外围适配层；是否实施取决于新项目需求。

## 建议分阶段

1. **最小闭环**：一张棋盘、普通物品、手动生成器、拖动/换位/合成、满盘提示、本地保存重载。
2. **完整规则**：浅锁/深锁、区域锁、生成器冷却、仓库、待领取队列、订单、图鉴、气泡。
3. **产品功能**：宝箱/自选箱、剪刀/减 CD、2×/4×、订单随机、商店、BP、引导和宿主任务适配。

验收用例至少覆盖：不同 ID 不能普通合成、链尾拒绝合成、锁定目标合成、深锁不可操作、区域未解锁拒绝操作、满盘不扣能量、生成器跨轮冷却、存入仓库暂停计时、重复需求订单只消耗一次、未领取队列不计入当前版本订单可提交数量、失败请求不丢改动、气泡存档往返保持时间、合成链无环、资源缺失有可见降级。

## 不能推断的事实

这里没有服务器实现、线上随机种子、运营配置最终版本或完整运行测试录像。proto 注释与实际客户端存在偏差；以可执行代码及配置证据描述历史行为，并把设计意图与推断分开。资源可能需要在目标项目安装 UGUI / Spine / DOTween 或重写相应效果后才完整呈现。

原型优先验证合成、生成和订单循环。不要花时间恢复原游戏网络、全局商城或整套主城，除非接收项目的用户明确要求。
