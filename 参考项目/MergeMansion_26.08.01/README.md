# Merge Mansion 26.08.01：二合相关脚本

此目录按二合棋盘、物品、合成、生成器、气泡、仓库、操作入口和棋盘 UI 的关系筛选。保留脚本的内容与 AssetRipper 原始导出逐字节一致；目录不包含图片、Bundle、APK、Android 包装层和第三方框架脚本。

- 保留 C# 脚本：**998** 个，位于 `source/`，保留原程序集和相对路径。
- 删除其余 C# 脚本：**11023** 个。
- 文件级 SHA-256 与筛选依据：`evidence/retained_scripts.json`。
- 原始完整导出与日志：`/Users/betta/Company/Project/common_tools/app_auto_unpack/output/merge_mansion_26_08_01`。
- 静态分析结论：`研究报告.md`。报告中的原始资源与日志路径指向上述完整导出。

**注意：** 这些 C# 文件是从 IL2CPP 元数据恢复的类型、字段和方法签名。方法体为生成的占位代码，不能作为游戏原始实现执行。筛选依据可见的名称、路径和类型引用；由于没有真实方法体，无法证明所有潜在间接依赖。
