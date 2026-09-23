# MergeTwo 二合玩法参考包

本目录用于把历史实现交给其他项目的 Agent，分析后**重写**玩法。来源分支 `merge_two`，提交 `6dd100ab483`（完整 SHA 在清单中），Unity `2022.3.26f1`。

**这是带原始代码、配置与 Unity 资源的参考资料包。没有移植原游戏框架、服务器或 Lua 启动环境，不是导入即可运行的独立玩法。** 专属文件已从旧目录迁入；原工程的 Lua 加载、配置导出和 AssetBundle 路径尚未适配，当前分支不要直接当成原游戏的可运行版本。

## 从这里开始

1. 接收方 Agent 先读 [AgentHandoff.md](AgentHandoff.md)。
2. 人工审查先读 [实现分析](Docs/01-Implementation.md)、[配置关系](Docs/02-Configuration.md)、[已知问题](Docs/06-KnownIssues.md)。
3. 用浏览器打开 [资源与初始棋盘目录](Docs/ResourceCatalog.html)，按 ID、合成链查找物品。棋盘展示由配置生成，不是原游戏截图。
4. 按 [资源说明](Docs/03-AssetsAndUI.md) 在 Unity 中检查 Prefab，再按 [导出与验证](Docs/05-ExportAndValidation.md) 手工 Export Package。

## 目录

| 目录 | 内容 |
| --- | --- |
| `Lua/Game/TwoMerge` | 64 个原始核心模块：实体、状态、功能、生成、订单、网络与辅助逻辑 |
| `Lua/Manager` | TwoMergeManager / TwoMergeMapGridManager |
| `Lua/UI` | 9 个界面、注册、入口、礼包与 GM 调试代码 |
| `Lua/Game/Activities`、`Lua/MapGuide` | 活动入口及地图引导 |
| `Lua/Protocol`、`Protocol/Schema` | 原始生成消息/请求处理器及 proto 源文件和 imports |
| `Configs/Lua` | 9 张 MergeTwo 表与 4 张订单表的原始导出代码 |
| `Configs/Json` | 从这 13 张运行时 Lua 表无执行解析出的 JSON |
| `Configs/Excel` | 18 份 Excel 源表副本；原仓库 `Configs/Meta` 保留 |
| `Configs/Related` | Config / Activity / Item / EventMapBPLevel 四张共享表的完整快照及 JSON |
| `Configs/Localization` | 从原项目提取的中英文相关文案 |
| `UI` | 原始专属界面 Prefab、纹理、图集、Spine 引用及主城入口 |
| `Art/Items`、`Art/Atlases` | 合成物图片及 twoMerge 图集 |
| `Art/Spine`、`Art/Effects`、`Art/RuntimeIcons` | 专属动画、合成特效、区域图标 |
| `Reference/SharedAssets` | 共享图片、字体、材质、Shader、动画、音效的依赖副本，保留原目录后缀方便溯源 |
| `Reference/Lua`、`Reference/CSharp` | 直接框架依赖与宿主接入点源码；C# 为 `.cs.txt`，避免空项目编译原游戏框架 |
| `Docs/Manifests` | 文件迁移、GUID、资源依赖、物品映射、表字段、检查结果 |
| `Tools` | Python 标准库审计工具，不依赖 Unity、不执行 Lua |

共迁入 715 个原文件，复制 188 个源资料/共享依赖（不含自动生成 JSON、文档与 `.meta`）。194 个迁入 Lua 文件字节保留，其中 13 个是导出表。

## 保留规则与边界

- 专属文件与目录连同 `.meta` 搬迁，原 GUID 保留；共享资源复制后采用新 GUID，仅包内 Unity 序列化引用相应改写。
- 核心 Lua、协议生成代码与配置逻辑不做修复。旧的 `require("Game.TwoMerge...")`、`Prefab/...` 字符串有意保留，便于理解旧架构和追溯；接收项目必须提供新的映射/加载方式。
- `migration.json` 记录每个源路径、目标路径、操作、前后 SHA-256；可逆 GUID 替换检查可以证明资源内容仅有计划中的引用变化。
- 未混入 MiniMerge、MergeGame 或主城三合玩法。共享源码只是理解边界的直接依赖快照，不代表收集了整个游戏的可编译依赖闭包。
- 原提交已有 21 个物品图标找不到对应资源、3 个无法解析的历史资源 GUID，以及其他实现问题。详见已知问题和机器可读检查报告。
