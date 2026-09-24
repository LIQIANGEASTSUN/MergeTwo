# 二合代码索引

保留 218 个完整 C# 脚本、671 个完整 Il2CppDumper 类型块、3642 个方法签名和 581 个 ARM 原生伪代码方法。

## 阅读入口

| 主题 | 文件 | 作用 |
|---|---|---|
| 棋盘与合成 | [BoardController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardController.cs) | 棋盘移动、合成判定、生成、保存与加载 |
| 物品交互 | [ItemController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/ItemController.cs) | 拖拽、生成、消耗、合成与解锁 |
| 物品定义 | [BoardItemData.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardItemData.cs) | 合成链、物品种类与特殊能力的类型入口 |
| 棋盘状态 | [BoardEntity.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardEntity.cs) | 格子、物品和棋盘存档状态 |
| 生成器 | [BoardItemSpawnerData.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardItemSpawnerData.cs) | 产出、容量与刷新逻辑 |
| 任务消耗 | [BoardTaskEntity.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardTaskEntity.cs) | 目标物品与任务状态 |
| 活动小棋盘 | [BaseMiniBoardController.cs](code/AssetRipper/Assembly-CSharp/Paxie/MergeStudio/Features/MiniBoard/BaseMiniBoardController.cs) | 活动棋盘的移动、合成与生成 |
| 活动物品 | [MiniBoardItemController.cs](code/AssetRipper/Assembly-CSharp/Paxie/MergeStudio/Features/MiniBoard/MiniBoardItemController.cs) | 活动棋盘物品交互 |

## 关键方法

| 方法 | RVA | 结构脚本 | 原生伪代码 |
|---|---:|---|---|
| `ItemController.IsMergeAvailable` | `0x189153C` | [ItemController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/ItemController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `ItemController.MergeIt` | `0x1892AF4` | [ItemController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/ItemController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardController.IsMergeAvailable` | `0x18F7F28` | [BoardController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardController.MergeItemsOnBoard` | `0x18E355C` | [BoardController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardController.SpawnItem` | `0x18E0B38` | [BoardController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardController.Save` | `0x18DD100` | [BoardController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardController.Load` | `0x18F0CA4` | [BoardController.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardController.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardData.GetMergedItemData` | `0x1915890` | [BoardData.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardData.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |
| `BoardItemSpawnerData.GetRandomItem` | `0x18C7E90` | [BoardItemSpawnerData.cs](code/AssetRipper/Assembly-CSharp/MergePuzzle/BoardItemSpawnerData.cs) | [查看](code/Ghidra/ghidra_expanded_pseudocode.c) |

## 全量索引

- [INDEX_TYPES.tsv](INDEX_TYPES.tsv)：保留类型、字段数量、继承声明及对应文件。
- [INDEX_METHODS.tsv](INDEX_METHODS.tsv)：保留方法的签名、RVA 与伪代码位置。
- [INDEX_NATIVE_CALLS.tsv](INDEX_NATIVE_CALLS.tsv)：能够由原生调用地址匹配的目标方法。
- [SHA256SUMS.tsv](SHA256SUMS.tsv)：保留代码文件的校验值。

C# 脚本和 Il2CppDumper 类型块以完整文件保存；原生伪代码按完整函数块筛选。
