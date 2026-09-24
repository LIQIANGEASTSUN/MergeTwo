# 二合代码索引

## 主流程入口

| 主题 | 完整脚本与关键方法 |
|---|---|
| 触摸和拖放 | [BaseSceneBoardView.lua](code/Lua/decompiled/Board/View/BaseSceneBoardView.lua) 的 `_OnPointerDown`、`_OnDrag`、`_OnPointerUp`；活动共用输入见 [BaseUIBoardView.lua](code/Lua/decompiled/Board/View/BaseUIBoardView.lua)。 |
| 主棋盘初始化 | [MainBoardModel.lua](code/Lua/decompiled/Board/Model/Board/MainBoardModel.lua) 的 `Init` 建立物品、格位、缓存、库存和订单模型。 |
| 合成判定和执行 | [BaseSceneBoardModel.lua](code/Lua/decompiled/Board/Model/Board/BaseSceneBoardModel.lua) 的 `CanItemMerge`、`DragItem`、`_MergeItem`；[BaseBoardModel.lua](code/Lua/decompiled/Board/Model/Board/BaseBoardModel.lua) 管理创建、替换、移除和生成。 |
| 物品与能力 | [ItemModel.lua](code/Lua/decompiled/Board/Model/Item/ItemModel.lua)、[ItemModelFactory.lua](code/Lua/decompiled/Board/Model/ItemModelFactory.lua)、[ItemDataModel.lua](code/Lua/decompiled/Board/Model/ItemDataModel.lua)；`Board/Model/Item/` 保留完整的生成、蛛网、冰、泡泡、剪刀、吞噬、变形等组件。 |
| 生成器 | [ItemSpread.lua](code/Lua/decompiled/Board/Model/Item/ItemSpread.lua) 的 `OnTap`、`GenerateItemCode`、`_TrySpread`，并保留固定序列、幸运产出与摆放位置的直接依赖。 |
| 订单交付 | [BaseOrder.lua](code/Lua/decompiled/Board/Model/Order/BaseOrder.lua)、[MainOrderModel.lua](code/Lua/decompiled/Board/Model/Order/MainOrderModel.lua)、[OrderCell.lua](code/Lua/decompiled/Board/View/Order/OrderCell.lua)；订单创建器和规则表在 `Board/Model/Order/`。 |
| 库存和存档 | [ItemStoreModel.lua](code/Lua/decompiled/Board/Model/Board/ItemStoreModel.lua)、[SceneItemLayerModel.lua](code/Lua/decompiled/Board/Model/Board/SceneItemLayerModel.lua)、[DBTableManager.lua](code/Lua/decompiled/Model/DB/DBTableManager.lua)、[SyncModel.lua](code/Lua/decompiled/Model/Sync/SyncModel.lua)。 |
| 活动棋盘变体 | [FreefallActivityBoardModel.lua](code/Lua/decompiled/FreefallActivity/Board/FreefallActivityBoardModel.lua)、[CloudsDashHuntBoardModel.lua](code/Lua/decompiled/CloudsDash/Board/CloudsDashHuntBoardModel.lua)、[HuntActivityBoardModel.lua](code/Lua/decompiled/HuntActivity/Common/Board/HuntActivityBoardModel.lua)、[HuntMapActivityBoardModel.lua](code/Lua/decompiled/HuntMapActivity/Board/HuntMapActivityBoardModel.lua)、[NoCDTrainBoardModel.lua](code/Lua/decompiled/NoCDTrain/Board/NoCDTrainBoardModel.lua)、[DropActivityBoard.lua](code/Lua/decompiled/Drop/Board/DropActivityBoard.lua)。 |

建议从 `BaseSceneBoardView:_OnPointerUp` → `BaseSceneBoardModel:DragItem` → `CanItemMerge` → `_MergeItem` 阅读；从 `ItemSpread:OnTap` → `_TrySpread` → `GenerateItemCode` → `BaseBoardModel:SpreadItem` 阅读生成；从 `BaseOrder:UpdateState` → `BaseSceneBoardModel:RemoveOrderItems` → `FinishOrder` 阅读订单。活动模式会覆盖部分方法，不能把主棋盘规则直接套用于全部活动。

## 全量索引

- [INDEX_MODULES.tsv](INDEX_MODULES.tsv)：178 个保留模块及对应完整 `.lua`、`.luac` 和原字节码 SHA-256。
- [INDEX_LUA_FUNCTIONS.tsv](INDEX_LUA_FUNCTIONS.tsv)：4,622 个具名函数与所在行；匿名闭包仍在完整脚本内。
- [INDEX_LUA_TABLES.tsv](INDEX_LUA_TABLES.tsv)：304 个顶层表/原型候选及可见父对象。
- [INDEX_LUA_FIELDS.tsv](INDEX_LUA_FIELDS.tsv)：2,155 次动态字段赋值观测，不等于字段声明数。
- [INDEX_STATIC_CALLS.tsv](INDEX_STATIC_CALLS.tsv)：4,250 条**保留模块之间**可静态唯一匹配的调用；`self`、回调和事件派发需人工追踪，调用到未保留的通用 UI、日志或资源模块不在此表。
- [LUA_SYNTAX_CHECK.tsv](LUA_SYNTAX_CHECK.tsv)：178 份反编译 Lua 的 Lua 5.3 语法检查结果。
- [SHA256SUMS.tsv](SHA256SUMS.tsv)：356 个保留代码文件的 SHA-256 和来源层级。

保留文件均为完整脚本。配置包、资源、与玩法无关的 UI/活动模块和仅有占位方法体的 C# 结构文件不在精简结果中。筛选记录与限制见 [精简依据](PRUNING.md)。
