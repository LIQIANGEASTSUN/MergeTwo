# 导出、导入与验证

## 用户检查入口

1. 在文件系统/IDE 读 README、AgentHandoff、实现分析、配置关系及已知问题。
2. 在 Unity 2022.3.26f1 中检查 `UI/TwoMergePanel/TwoMergePanel.prefab`、`eleItem.prefab` 和其他界面，以及 `Art/Items`、两个图集与 Spine 目录。当前分支移动了真实文件，旧加载/构建路径未适配。
3. 用浏览器手动打开 `Docs/ResourceCatalog.html`，按链、物品 ID 搜索，查看三张初始棋盘。目录使用内嵌 JSON 和相对图片路径，随包移动后可离线查看。
4. 查 `Docs/Manifests/validation.json`。其中 PASS 只代表迁移内容和静态数据检查完成；baseline_findings 是源提交原有的缺项，external_script_guids 是刻意保留的框架依赖。

## 推荐的参考包导出

在 Project 面板选中整个 `Assets/MergeTwo` → Assets → Export Package，确认列表包含 Lua、Configs、UI、Art、Reference、Protocol、Docs 和 Tools，**取消 Include dependencies**，再由你决定包名和保存位置。

原因：共享美术资源已显式收集到目录内；原 Prefab 仍引用原项目框架组件，Include dependencies 会把它们作为 `.cs`、插件等拉入，可能扩大到整套原游戏依赖。取消后得到的是预期的研究参考包，空项目里的自定义组件会呈现 Missing Script。该边界在 README 中明确说明。

不要手工改 `.meta` GUID，不要只导出 Prefab 和图片而遗漏配置、协议、源码与说明。此次没有执行 ExportPackage，也没有提交 Git；先留给你检查。

## 在空项目中使用

- 优先用相同 Unity 大版本导入，确保有 UGUI。Lua/文档/配置可直接阅读，图片可直接复用。
- 首先让 Agent 读交接说明，按新项目架构定义数据和玩法服务。
- 自定义组件、Spine/DOTween 动画应安装相匹配库或重写。`Reference/CSharp/*.cs.txt` 不会编译，也不会自动绑定到原 Prefab。不要把这些文件批量改为 `.cs`。
- 若只要视觉参考，可打开层级、查看绑定信息及原图；要实际呈现 Spine/特殊材质/效果，仍须对应运行库及渲染管线适配。
- 没有离线启动场景、Lua 引擎、原服务器账号或服务端源码。不要以导入成功作为旧玩法运行成功。

## 可重复执行的检查

在包含该目录的工程根目录执行：

```sh
python3 Assets/MergeTwo/Tools/audit_reference.py
```

只读模式输出 PASS/FAIL、迁移错误、外部脚本依赖数与源数据问题数。写入报告需显式附加 `--write-report`。不依赖第三方 Python 库，不执行 Lua，不访问网络。

检查内容：

- 715 个迁入文件和 188 个复制/参照文件的 SHA-256；仅允许清单中记录的可逆 GUID 替换。
- 已迁移文件原 GUID、包内 meta 配对、重复 GUID。
- 包内序列化 GUID 依赖；区分 UGUI、18 个原框架脚本、3 个源资源缺失 GUID。
- 17 张导出 Lua 表与 JSON 语义相等。
- 合成 nextId 引用及链无环、棋盘物品、生成器/箱子产出、订单需求引用、图片路径。
- 核心 Lua 的直接 require 缺项。

`build_catalog.py` 可从现有 JSON 重新生成目录页面。Excel 字段字典是此次读取原表前四行得到的快照，不能作为新项目完整 schema 校验器。

## 本次验证的实际范围

已执行离线文件/GUID/配置一致性校验和 HTML 中脚本语法检查；没有运行原游戏，没有进行 Unity AssetDatabase 导入/Prefab 渲染/Player 构建测试。当前可见 Unity 窗口属于另一个项目，本工程没有可连接的 Pipeline 服务，因此没有操作或改变那个 Editor。目录页面未完成浏览器视觉验收：内置浏览器策略禁止访问本地 file URL。

本次结果：903 个源文件记录内容一致，194 个迁入 Lua 文件保留原始字节；包内 GUID 与整个 Assets 树没有冲突；计划外的已跟踪文件改动为 0；旧移动路径残留为 0。`git diff --check` 和 Python/HTML 脚本语法检查通过。报告列出 1 个缺失宝箱配置、3 处缺失物品引用、21 个图标缺项和 1 个缺失 Lua 模块，均源自历史实现。

资源 GUID 检查基于文本序列化资产和 importer meta。它不能证明所有运行期动态加载、Shader 显示、字体、Spine 版本或服务端行为完全可用。静态缺项和迁移边界已经随包交接。

## 回溯

`migration.json` 带源提交 SHA、旧/新路径、move/copy/source-reference 分类和前后哈希。专属 `.meta` 已随文件移动；共享副本对应的新旧 GUID 在 `guid_remap`。原始 Excel、共享美术原件、宿主框架源码仍在原位置。

在 Git 中检查时，新目录未暂存会表现为旧路径删除加新目录新增，暂存后 Git 通常识别为重命名。这里没有帮你暂存、提交或打包。若要撤销，仅针对迁移清单和新文件处理，避免对整个工程执行清空式恢复。
