# 配置关系与数据约定

## 权威数据与导出格式

原始 Excel 的前四行分别为中文说明、字段名、声明类型、导出端（C/CS）；数据从第五行开始。中文注释列、无字段名列不会作为导出字段。`Configs/Excel` 是原表副本，未重导出或改值。

多数运行时 Lua 使用 `local config = [====[JSON]====]; return table.deserialize(config)`；`EventMapBPLevelTemplate.lua` 使用 Lua 表字面量。`Configs/Json` 和 `Configs/Related/Json` 使用受限解析器转换这两种现有导出格式，没有执行 Lua。Excel 可帮助理解意图，实际提交中的 Lua 才是客户端读取的数据。

## 核心与关联表

| 表 | 行数 | 主键/关联 | 用途 |
| --- | ---: | --- | --- |
| MergeTwoConfigTemplate | 3 | id = mapId/activityId | 棋盘体力、倍率/商店/引导解锁条件 |
| MergeTwoMainTemplate | 21 | id；按 mapId 分组，按数值 id 排序 | 3 张 7×9 棋盘的逐行初始布局 |
| MergeTwoItemTemplate | 371 | id；nextId → 本表；groupId 合成链 | 名称、图标、等级、类型、合并产物、变更、气泡、售卖、获取途径 |
| MergeTwoItemGenerateTemplate | 85 | id → ItemTemplate（本玩法的 MergeTwoItemTemplate） | 固定/概率掉落、轮次次数、冷却、费用、倍率 |
| MergeTwoboxTemplate | 27 | id → MergeTwoItemTemplate | 宝箱开启时间、次数、固定/随机内容 |
| MergeTwoOrderTemplate | 192 | activityId；needMitem → 合成物；reward → 宿主 ItemTemplate | 主线、支线、位置订单 |
| MergeTwoWarehouseTemplate | 90 | activity + latticeNum | 仓库格子购买消耗 |
| MergeTwoShopTemplate | 12 | activity + productPos | 商品池、库存、价格、权重 |
| MergeTwoEnergyShopTemplate | 1 | id = mapId | 体力商店货币、数量、递增价格 |
| OrderItemSetTemplate | 19 | chessboard；id | 固定订单开启条件和需求 |
| OrderItemRandomNumberTemplate | 5 | chessboard + difficultyType | 随机订单需求种数权重 |
| OrderItemChainTemplate | 39 | chessboard + difficultyType；SyntheticChain；RequiredGenerator | 允许参与随机订单的链与生成器门槛 |
| OrderItemRandomItemTemplate | 400 | chessboard + difficultyType + SyntheticChain | 等级范围、分槽候选道具及权重 |

以上 13 张表迁入 `Configs/Lua`，字段完整字典见 [04-ConfigurationFields.md](04-ConfigurationFields.md)。

四张宿主表保留完整快照：ConfigTemplate(533)、ActivityTemplate(336)、ItemTemplate(4435)、EventMapBPLevelTemplate(1064)。它们包含其他玩法的数据，置于 `Configs/Related`；接收项目应按棋盘/道具/条件筛选，避免把整个原游戏当作二合需求。

`MergeTwoEnergyShop.xlsx` 是另一个遗留源表：sheet 名竟为 `MergeTwoConfigTemplate`，价格声明为 string；实际运行时代码读取 `MergeTwoEnergyShopTemplate`，其价格声明为 JSONArray。两份都保留，不能混作同一张表重新导出。

## 关键字段细节

### 初始棋盘

`column_N = [itemId, initialState, gridCoverIcon, areaTask, areaType]`。itemId 可为空字符串；state 为 0/1/2。第三项是深锁遮盖图标名称；第四项为区域关联任务，第五项为该区域的表现类型。`maxCol` 只从分组第一行读取，其余行可能为 0。全表 id 是全局行 ID，不能直接当作某棋盘的行号。

3 张 mapId 为 `28001`、`28002`、`32001`，每张 7 行 9 列。服务器首次初始化通常提供格子快照；客户端 `GetOriginGrid` 提供底格和区域信息。旧代码中“无服务端数据直接加载配置”的分支并不是已完成的离线玩法入口。

### 物品、合成链和图标

ID 通常存为字符串，但嵌套 JSONArray 中大量 ID 是数字。读表后应统一为字符串，尤其是 `fixedOutput`、`proOutput`、奖励、需求等。

`nextId` 是结果权威来源。正常链用 `groupId` 和 `level` 组织；本提交中也存在 groupId/level 为 0 的记录，不能根据“全部 371 条都有完整可玩链”建模。当前数据实际使用类型 1 普通、2 手动生成器、3 普通箱、4 自选箱、6 使用类；代码还保留自动生成器、剪刀、减 CD 等功能，当前表中未实际配置相应类型。

图标是 sprite 名，不是完整路径。`ArticleView:SetSprite` 通过 `AppServices.ItemIcons:GetSpriteByName` 解析；`Art/Items` 是主素材目录，具体映射在 `item-assets.json`。371 条记录中 350 条能按图标名找到源图片，21 条未在源资源文件或 `.meta` 子图名称中找到，未伪造补齐。

### 生成器与箱子

- `fixedOutput`：固定顺序物品 ID 列表；`proOutput`：`[[itemId, weight], ...]`。
- `num` 和 `cd`：对应轮次的数组，不应按单值读取；CD 秒数，小于 0 表示产出耗尽后移除。
- `cost`：`[currencyId, count]`；钱包货币属于宿主 ItemTemplate，与合成物表不同。
- `canDouble` 控制倍率资格；`generateNum` / `coverPro` 存在于表结构，但当前生成主流程没有按它们实现多颗产出或生成后深锁概率。
- 宝箱 `time` 为开启耗时，`num` 为可用次数。应结合箱子代码理解负值/零值含义。
- `clonPro` 以玩家付费分层为索引，代码与 0..10000 随机比较；`clonValue` 是气泡解锁消耗。精确概率边界应在重写时重新定义。
- `derivative` 的数据意图是衍生物权重池，但原实现有错误，不能照抄算法。

### 条件与订单

倍率/商店条件中既出现 `[1, taskId]`，也出现 `[2, fixedOrderId]`；引导字段还可能是嵌套列表。`condition` 不在所有订单类型中表达同一种关系，主线、支线、固定位置组要分别解析。

普通/简单随机订单还依赖 `ConfigTemplate` 的 `order_simple`、`order_simple_limit`、`order_simple_time`、动态 `order_normal_timeN` 等常量。商店依赖 `merge_shop_*`，气泡依赖 `merge_clon_destruction`、`merge_clone_time`，提示依赖 `merge_prompt`。

`commodityPool` 每项为 `[mergeItemId, priceCurrency, price, stock, weight]`；原表说明货币 -1 表示广告，-2 表示免费。`price`、`reward`、`needMitem` 等字段不是可以统一套用同一种数组结构的通用字段，请分别核对字典和读表代码。

### 32001 的实例

使用独立体力 `1017`，上限 100，每 120 秒恢复；订单奖励币 `38060`，BP 积分也是 `38060`。倍率条件为固定订单 7/23，商店条件为固定订单 5。`default_random_order` 仍指向旧活动物品 `11010705`；这是当前配置的事实，是否符合设计意图需产品确认。

BP 表以 `smallBpId == mapId` 筛选；通行证价格/内购接入还有宿主 ProductManager 和支付协议，不能仅复制 BP 表就实现购买闭环。

## 推荐的新数据规范

导入层将空值 `""`、空数组、0、0.0 分类处理：数组空值规范化为 `[]`，可选 ID 规范化为 null 或空字符串，保留明确的 0 数值。不要盲目对每个字段执行相同的空值转换。

加载时检查 nextId 外键、链无环、生成器 num/cd 长度、产出池非空、权重正数、棋盘尺寸/坐标、道具和图标引用、订单需求及货币种类。历史数据问题见 `validation.json`；该报告把迁移一致性与原数据缺项分开列出。
