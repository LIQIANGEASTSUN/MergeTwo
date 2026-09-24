# 来源与筛选

输入为 `Merge+Studio_+Fashion+Makeover_4.5.0_APKPure.xapk`，SHA-256：`a4b9e0a7d5fc751cc99269d5f62ff2aeeba318170ad5a5b7c489deb75ed935d7`。原生库为 ARM32 `libil2cpp.so`，metadata version 31。逆向使用 AssetRipper 1.3.14.0、Il2CppDumper 和 Ghidra 12.1.2；方法与局限详见 [逆向完整性](COMPLETENESS.md)。

先前从 504 个脚本筛到 270 个，再复核到 224 个；本轮逐项检查剩余 224 个，又移除 6 个无合成逻辑或必要依赖的文件。相对最初交付，共保留 218 个，删去 286 个。类型块从 1296 个缩为 671 个，原生伪代码从 709 个方法缩为 581 个，其中 99 个已反编译的辅助方法因范围收紧而省略。目录仍无非代码资源文件。删去的主要是构建/广告设置、纯资源或配置模式、界面展示、特效、统计、任务评分、提示状态与视觉常量。保留文件原样复制；没有重构或补写缺失实现。

具体类与方法清单见 [INDEX_TYPES.tsv](INDEX_TYPES.tsv) 和 [INDEX_METHODS.tsv](INDEX_METHODS.tsv)。`SHA256SUMS.tsv` 可校验全部代码文件。
