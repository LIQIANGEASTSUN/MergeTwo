# 界面与资源说明

## 界面位置

这套玩法的主要视觉载体是 `UI/TwoMergePanel/TwoMergePanel.prefab`，棋盘内重复克隆 `eleItem.prefab` 和界面内的格子模板。没有专门搬入启动 Scene，也没有可直接挂载运行的独立 C# 游戏入口。

| Prefab（位于 UI/TwoMergePanel） | Lua/UI 子目录 | 职责 |
| --- | --- | --- |
| TwoMergePanel | TwoMergePanel | 主棋盘、订单、生成物、队列入口、货币、功能按钮 |
| TwoMergeBagPanel | TwoMergeBagPanel | 仓库与扩容 |
| TwoMergeBestiaryPanel | TwoMergeBestiaryPanel | 合成链和生成途径图鉴 |
| UITwoMergeShopPanel | TwoMergeShopPanel | 商品、热卖、刷新 |
| UITwoMergeBpPanel | UITwoMergeBpPanel | 通行证奖励与进度 |
| UITwoMergeClonItemPanel | UITwoMergeClonItemPanel | 气泡克隆购买 |
| UITwoMergeEnergyBuyPanel | UITwoMergeEnergyBuyPanel | 独立体力购买 |
| UITwoMergeSelectChestPanel | UITwoMergeSelectChestPanel | 自选宝箱 |
| UITwoMergeTwoRatePanel | UITwoMergeTwoRatePanel | 倍率功能说明/开启 |

`UI/Entrance/TwoMergeButton.prefab` 是主城入口；`Order.prefab`、`infoRoot.prefab`、`eleItem.prefab` 是复用元素。每个界面原注册表保存在 `Lua/UI/PanelRegisters`，记录模块名、Mediator、预加载特效、显示方式及自动卸载规则。UIBase 中的 `find_component` 路径是理解节点绑定的依据。

`eleItem` 的重要节点：`root/icon`、`lock`、`chooseImg`、`root/generateroot`、`root/countroot`、`root/cloneroot`、`root/endtimeroot`、`root/maxmark`、`root/findmark`、`root/ordermark`、`use`。拖拽输入来自 EventTriggerForLua，UIGray、EmptyImage、TweenAnimation 等来自项目 C#。

## 资源分类

- `Art/Items`：347 个原始图片素材，含物品、生成器、深锁遮罩等。名称保持原样。
- `Art/Atlases/twoMerge.spriteatlas`：原图集，packable 文件夹 GUID 随迁移保留。
- `UI/TwoMergePanel/TwoMergeRes.spriteatlas`：界面专属图集，引用 `res` 文件夹；未改名破坏 sprite 查找。
- `Art/Spine`：六组动画资料（wanchenganniu、biao、xiangziqingchu、kelongdaiji、dailingqu、shendian）。UI 自带 Spine 资源同时保留。
- `Art/Effects`：`effect_erhe_*` 专属 Prefab。其他被引用的拖尾和辅助 Prefab 位于 `Reference/SharedAssets` 的原目录后缀中。
- `Art/RuntimeIcons`：棋盘区域遮盖图。
- `Reference/SharedAssets`：共同用到的字体、按钮/货币图、特效纹理/材质、Shader、动画控制器和音效。`audio-assets.json` 提供音效常量到新路径的映射。

图片索引见 `item-assets.json`。可直接浏览 `ResourceCatalog.html`，它展示配置中的物品、下一等级、类型和静态初始棋盘；不运行旧玩法，不模拟动画，也不代表 Prefab 的完整外观。

## 为什么仍会出现 Missing Script

包内收齐了能够解析到的视觉资源依赖，但项目框架脚本采用源码参照而不是可编译移植：原 C# 文件复制为 `.cs.txt`，保留类定义供重写查看。这些文本不能充当 Prefab 的 MonoScript。

原 Prefab/Spine ScriptableObject 保留脚本 GUID，所以导入空项目后自定义组件及 Spine 相关资源会提示 Missing Script，安装/适配对应库或重建界面后才能正常显示全部效果。UGUI 来自 `com.unity.ugui@1.0.0`，不应被误判为源仓库丢文件。

直接引用脚本与受影响资产见 `validation.json.external_script_guids`；其中涉及 Spine、DOTweenPro、UIParticle、EventTriggerForLua、ButtonComponent、UIGray、文本/描边/本地化组件等。`Reference/CSharp` 只包含必要直接参照和动态调用的 TweenAnimation，**不包含它们的完整编译依赖树**。

为研究源码，优先导出当前文件夹并关闭 Include dependencies。若要原样运行这些 Prefab，需先明确目标框架，再移植组件；简单开启 Include dependencies 可能拉入原游戏脚本、插件甚至更大范围的依赖，仍不能保证编译或运行。

## 引用保留与复制

专属资源 GUID 不变。共享资源以新 GUID 复制，并在包内 Prefab/Material/Animation/Atlas 的序列化引用中替换；原项目共享原件保留。Shader 中的 include 已检查，当前收集到的 Shader 仅引用 Unity 内置 cginc。目标项目若采用 URP/HDRP，需要另外验证这些历史 Shader 的效果。

资源字符串路径没有进行假装可运行的全局替换。接收方应使用新项目的 Addressables/Resources/资产注册表，依据迁移清单建立映射，或在重写的 UI 中直接绑定 Unity 引用。
