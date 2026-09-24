# Tasty & Travels 64.0.0 二合代码参考

来源：`Tasty+Travels_+Merge+Game_64.0.0_APKPure.xapk`。本目录按安装包独立整理，保留 563 份完整 C# 逆向脚本、497 份对应伪 C、经筛选的 ARM 反汇编及索引。没有贴图、音频、模型、动画、安装包或配置二进制资源。

## 阅读顺序

1. [代码索引](代码索引.md)：从棋盘、物品、交互、生成、存档流程定位代码。
2. [逆向方法与完整性](逆向方法与完整性.md)：辨别工具占位、伪 C 与原生指令。
3. [阅读方法实现](阅读方法实现.md)：通过方法索引与 RVA 找实现。
4. [筛选说明](筛选说明.md)：了解精简边界与保留依据。
5. [二合机制实现推断](二合机制实现推断.md)：基于恢复证据的玩法推断，非原始代码。

## 文件

- `scripts/`：AssetRipper 导出的完整 C# 脚本，逐文件字节未改；其中方法体主要是占位。
- `pseudo_c/`：对应保留脚本的 Ghidra 伪 C，整文件未裁剪。
- `native_disassembly.s`：保留方法的 ARM32 原生指令段。
- `script_index.csv`：逐文件命名空间、类型、保留理由及原 SHA-256。
- `script_method_index.csv`、`native_method_index.csv`：声明与实现地址。
- `native_direct_calls.csv`：保留方法出发的静态直接调用边，包括指向已移除外围代码的名字。
- `unaddressed_methods.csv`：RVA 为 -1 的保留类型声明。
- `prune_manifest.json`：保留脚本清单与选择理由。
- `SHA256SUMS.txt`：本目录文件校验值。

这些材料供阅读分析，不能直接作为可编译的原工程源码。
