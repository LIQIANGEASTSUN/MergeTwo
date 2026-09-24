# Merge Mansion 26.08.01 二合代码参考

本目录对应一个安装包：`Merge+Mansion_+Puzzles+&+Story_26.08.01_APKPure.xapk`，包名 `com.everywear.game5`。目标是保存可追溯的逆向代码参考，供后续阅读与分析；这里不制定玩法方案。

## 先读什么

| 主题 | 入口 |
| --- | --- |
| 棋盘合成、移动、解锁和生成 | `source/AssetRipper/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Board/MergeBoard.cs` |
| 合成物状态、可合成判定、激活与生成 | `source/AssetRipper/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Items/MergeItem.cs` |
| 合成提示搜索 | `source/AssetRipper/Metacore.MergeMansion.SharedLogic/MergePairFinder.cs` |
| 玩家动作入口 | `source/AssetRipper/Metacore.MergeMansion.SharedLogic/GameLogic/Player/Actions/Multi/TryMergeBoardMerge.cs`、`TryMergeBoardProcessActivationForCoordinate.cs` |
| 消耗、出售、库存与物品移动 | `source/AssetRipper/Metacore.MergeMansion.SharedLogic/MasterFunctions.cs`、`GameLogic/Player/BoardInventory.cs` |
| 玩家状态、棋盘与进度存档 | `source/AssetRipper/Metacore.MergeMansion.SharedLogic/GameLogic/Player/PlayerModel.cs`、`Game/Logic/ProgressState.cs` |
| 棋盘界面和交互 | `source/AssetRipper/Mansion.Scripts/UnityBoardController.cs`、`UI/Board/` |

本目录已按完整脚本收缩到 836 个二合相关脚本；筛选原则与删除范围见 `筛选说明.md`。

## 目录含义

- `source/AssetRipper/`：AssetRipper 从 IL2CPP metadata 及程序集信息重建的 C# 结构。类、接口、枚举、字段、属性和方法签名可用于定位；**方法体是工具生成的空块或默认返回值，不是原始 C# 实现**。文件按导出结果原样复制，没有删改其中其他类或方法。
- `structure/Cpp2IL-DiffableCs/`：Cpp2IL 的第二套类型结构，保留字段偏移、可见性、继承和方法签名等线索。其 `{ }` 同样是生成的占位方法体。
- `native/Cpp2IL-ISIL/`：按类型保存的 ARM64 反汇编与 Cpp2IL ISIL。`Method:` 后有 `Disassembly:` 和 `ISIL:` 时，表示该工具关联到了非空原生指令；不等于恢复原始 C#，地址与函数边界也受工具分析限制。编译器生成的嵌套类型单独保留为 `_NestedType_*.txt`。
- `native/Ghidra-C/`：部分核心方法的 Ghidra 原生伪 C，仅在成功关联和反编译时存在。它保留了原生控制流和偏移表达，但变量类型、调用名和分支可能不完整。

## 索引

- `代码索引.json`：每个保留脚本、用途分类、原样复制的 SHA-256、对应结构文件及原生文件。一个 AssetRipper 文件对应多个 Cpp2IL 泛型文件时列在 `additional_structure_files`。
- `类型索引.csv`：类、接口、结构体、枚举的命名空间、声明和所在文件。
- `脚本签名索引.csv`：优先从 Cpp2IL 结构文件提取方法签名，缺失时取 AssetRipper 文件，并标明占位或仅声明。该索引用于检索，不代替完整脚本。
- `方法索引.csv`：Cpp2IL 方法签名、RVA、ARM64/ISIL 指令条数、非空指令状态及选定方法的 Ghidra 状态和伪 C 路径。
- `native/Ghidra-C/status.tsv`：112 个保留的选定方法的逐项反编译结果与失败原因。
- `伪C质量初筛.csv`：对每份 Ghidra 伪 C 的指令范围与篇幅做初筛；标记异常扩展，初筛通过也不代表人工验证。
- `伪C调用地址映射.csv`：把伪 C 中的 `func_0x...` 地址精确匹配到保留方法索引的 RVA；未匹配的地址保留为 unresolved。
- `核心流程可读伪代码.md`：对少数棋盘流程做基于原生输出的人工释读（未经游戏运行验证），明确保留未知分支。
- `命名调用线索.csv`：ISIL 识别出的具名调用和按类名匹配的保留文件。只用于导航，重载和同名类需再次核对。
- `统计.json`：文件与方法覆盖数量。
- `筛选说明.md`：本次删除范围和保留边界。
- `逆向方法与完整性.md`：安装包技术形式、每个工具的实际结果、可信边界与缺口。
- `SHA256SUMS.txt`：结果目录中其余文件的 SHA-256，便于检查复制后是否改变。

## 阅读顺序

先在 `类型索引.csv` 或 `代码索引.json` 定位类型，阅读完整的 `source/AssetRipper/` 文件了解字段与接口。再用 `方法索引.csv` 找到该方法的原生文件和地址，阅读同名 `ISIL` 类型文件中的完整方法段。关键流程可从 `核心流程可读伪代码.md` 入手，再对照 `Ghidra-C/` 原始伪 C 与质量初筛。不要依据 C# 空方法判断游戏行为。
