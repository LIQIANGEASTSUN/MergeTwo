# 逆向过程与溯源

## 原输入与校验

首次逆向时处理的实际 XAPK 为 `/Users/betta/Company/Project/MergeTwo/Seaside+Escape®_+Merge+&+Story_2.6.0_APKPure/Seaside+Escape®_+Merge+&+Story_2.6.0_APKPure.xapk`。原用户输入中的游戏名含 `®*`，磁盘当时实际名称如上。该路径目前不存在；下列校验是首次提取时记录的历史结果，当前清理未改动原包。

| 对象 | 大小（字节） | SHA-256 |
|---|---:|---|
| XAPK | 232,485,729 | `03af188a9f3789f531395c930981830a95b64ddb590d99dd0aa74ac9bd7584a0` |
| `lib/arm64-v8a/libil2cpp.so` | 37,096,528 | `e16481279b9aaea661a445234bd94ad2a152b417bdd810a5138432f42dd6b3bc` |
| `global-metadata.dat` | 9,260,232 | `540f03e3ccbf4cb1a138f963c2f76ef822abf284f689990969e42e7e27698588` |
| AssetRipper 导出的 `Scripts/Lua/Lua.bytes` | 18,478,238 | `06a785e10036df759aacb66b89bc9fc9c32e48de69e11cbfb24b85943527081f` |

XAPK 包含主包 `com.gamedots.seasideescape.apk` 和 `config.arm64_v8a.apk`。AssetRipper 识别的 Unity 版本为 `2022.3.62f2`，安装包使用 IL2CPP。

## 已执行的提取步骤

1. 检查工作仓库 `app_auto_unpack` 的 XAPK 拆分、AssetRipper、Il2CppDumper、Ghidra 和 JADX 流程。实际运行指定的 `AssetRipper_mac_arm64/AssetRipper --help` 与 `--version`，版本为 `1.3.14+7534ed93857d1ef4464bab6e3c7a13777529f94d`。首次沙盒调用在 AssetRipper 阶段报 `PermissionError: [Errno 1] Operation not permitted`，原因是本机 HTTP 服务受限；随后在获准的执行环境完成 AssetRipper 导出，日志结束于 `Finished post-export`。Il2CppDumper 退出码为 0。
2. 定位导出的 `Scripts/Lua/Lua.bytes`。提取时观察到工具导出 `Crypt.cs` 中的密钥常量；以循环异或试解容器，再按模块名长度、模块名和字节码长度精确切分。共得到 1,988 个具名 Lua 5.3 字节码模块，全部字节码头符合 `1B 4C 75 61 53`，最终偏移恰好等于容器长度。异或方法是结合密钥、字节头和完整切分结果得出的**人工推断并实测验证**；`Crypt.CryptBytes` 的原生方法体未恢复。`Crypt.cs` 仅含工具生成的结构占位，按本次精简要求已删除。
3. 使用 [unluac 的 Lua 5.3/xLua 分支](https://github.com/Jeong-Min-Cho/unluac)（提交 `744c8149d93f7739f17b7f0f506822fb93ba7193`）在临时目录反编译。只对临时输入调整字节码头中的格式字节并插入工具所需字节；交付 `.luac` 始终保留原字节。1,988 个模块中 1,986 个反编译成功，`LuaPanda` 和 `Common.Platform.SDKHelper` 报 `java.nio.BufferUnderflowException`，两者不在当前二合保留范围。
4. 先按完整 `Board.*` 类型层次、活动棋盘继承、实际方法内容、调用关系、事件、存档依赖建立 437 模块的候选交付集。最初对候选集的 437 份反编译 Lua 均通过官方 Lua 5.3.6 `luac -p` 语法检查，仅检查语法，不执行游戏代码。
5. 按用户后续“只保留最精简二合代码”要求逐文件复核，从候选集中保留 182 个完整模块及同名原字节码，删除 255 个无关模块对和所有 C# 占位文件。保留模块的 `.lua/.luac` 均与清理前 SHA-256 一致；各文件的当前校验值见 [SHA256SUMS.tsv](SHA256SUMS.tsv)。精简依据、删除数量和边界见 [PRUNING.md](PRUNING.md)。

目录内没有图片、音频、模型、动画、配置包或仅作资源加载的无关代码。配置文件名可以从 Lua 中看到，但具体配置值没有保留或编造。`code/Lua/bytecode/` 是实际解出的原字节码，`code/Lua/decompiled/` 是工具重建的阅读文本；后者不等同开发者源码。

6. 第二轮逐模块审查删除 4 对纯演出、剧情时间线或无引用工具模块；最终保留 178 个模块及其对应的两份代码文件。具体名称与理由见 [PRUNING.md](PRUNING.md)。
