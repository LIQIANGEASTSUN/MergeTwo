# Travel Town 2.12.1751 二合玩法代码参考

此目录来自 `Travel+Town+-+Merge+Adventure_2.12.1751_APKPure.xapk` 的 arm64 Unity IL2CPP 程序。按二合玩法收紧到 1355 个类型、7578 个元数据方法声明、1044 个泛型专门化原生地址；上一轮 1400 个类型中又移除了 45 个；首次索引为 3288 个类型。目录中不含图片、音频、模型、动画等资源文件，也不含无关的下载链接。

保留集包含棋盘与合成实现，也包含其数据、存档、输入交互和必要的基类/接口；并非每个保留方法都直接执行合成。

先看 [重点类索引.md](重点类索引.md)，再按 [code_index.csv](code_index.csv) 找完整脚本，按 [method_index.csv](method_index.csv) 找签名、RVA、反汇编和伪 C。[generic_instantiations.csv](generic_instantiations.csv) 补充泛型实例，[native_calls.csv](native_calls.csv) 记录保留类型之间的直接调用。

- `generated_csharp/`：AssetRipper/Cpp2IL 导出的完整 C# 脚本，**方法体是空块或默认值占位，不是原始实现**；未改写任何保留脚本。
- `metadata_blocks/`：Il2CppDumper 提取的完整类型块，含字段、继承、签名和 RVA。
- `native_arm64/`：从 `libil2cpp.so` 字节解码的原生指令。
- `ghidra_pseudoc/`、`ghidra_bounded_pseudoc/`：Ghidra 推断的伪 C，分别使用自动边界与显式推断边界；都不是原始 C#。

选择、删减、实现覆盖与工具限制见 [逆向过程与完整性.md](逆向过程与完整性.md)。数量见 [coverage.json](coverage.json)，源文件哈希见 [source_manifest.json](source_manifest.json)。
