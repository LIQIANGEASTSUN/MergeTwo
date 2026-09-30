# 配置字段字典

来源：原始 Excel 前四行（中文说明、字段名、声明类型、C/CS 导出端）。运行时值以随包 Lua 和对应 JSON 为准；不会用 Excel 重新生成覆盖本次提交的数据。

## ActivityTemplate.xlsx / ActivityTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 序号 |
| name | string | CS | 活动名字 |
| activityText | string | CS | 活动介绍 |
| activityBG | string | CS | 活动背景图 |
| type | int | CS | 活动类型<br>1=黄金通行证<br>2=繁育季<br>3=地图活动<br>4=龙PVE活动<br>5=龙跑酷活动<br>6=龙抽奖<br>7=秘境寻宝<br>8=马拉松<br>9=公会龙活动营救神龙<br>10=淘金大赛<br>11=割草游戏<br>12=龙钓鱼<br>13=消耗体力返奖<br>14=卡册<br>15=旋转转盘<br>20=羊了个羊<br>21=jam小游戏（砖块迷宫）<br>24=家园积分任务<br>25=沉船宝藏<br>26=二合活动<br>27=海底寻宝<br>28=跳跳棋<br>29=万圣寻宝 |
| unlockLevel | int | CS | 解锁等级 |
| unlockTask | string | CS | 解锁任务 |
| prewarm | string | CS | 活动预热时间 |
| startTime | string | CS | 活动开启时间 |
| rankEndTime | string | CS | 排行榜结算时间<br>拥有排行榜的活动排行榜结算时间，活动未拥有排行榜不读取<br>1. 填写时间<br>北京时间<br>2. 填写格式<br>年-月-日 时:分:秒 |
| endTime | string | CS | 活动结束时间 |
| sceneID | string | CS | 对应活动场景ID |
| sceneCloseTime | int | CS | 活动结束后场景最终关闭时间（天） |
| reward | JSONArray | CS | 活动奖励，如果场景活动，则为积分奖励【【积分数量，奖励物品ID，数量】】<br>若为淘金大赛则为【【宝箱数量，奖励ID，数量】】<br>新马拉松【积分数量【大奖ID，数量】】<br>若为旋转派对，则为ActivityTurntable表ID |
| rewardPayLevelMap | JSONArray | CS | 动态副本数值分层数值<br>活动奖励，如果场景活动，则为积分奖励【【积分数量，奖励物品ID，数量】】<br>若为淘金大赛则为【【宝箱数量，奖励ID，数量】】<br>新马拉松【积分数量【大奖ID，数量】】<br>若为旋转派对，则为ActivityTurntable表ID |
| prewarmUI | int | C | 是否开启活动预估面板<br>0=不显示<br>1=显示 |
| prewarmRes | string | C | 预热图片 |
| prewarmDesc | string | C | 预热文本 |
| taskButtonIcon | string | C | 活动地图任务角标<br>（填主线任务角标） |
| eventButtonIcon | string | C | 活动地图积分任务角标<br>（可以不填写，填写后会显示主线任务的进度） |
| rankType | JSONArray | CS | 排行榜类型<br>1=龙PVE活动比赛排行榜<br>2=龙PVE活动世界排行榜<br>3=活动地图分组排行<br>4=龙跑酷比赛排行榜<br>5=龙跑酷世界排行榜<br>6=秘境寻宝世界排行<br>7=秘境个人排行<br>8=地图活动世界排行<br>9=马拉松周赛排行榜<br>10=马拉松月赛排行榜<br>11=公会龙活动世界排行<br>12=公会龙活动个人排行<br>13=淘金大赛世界排行<br>14=龙割草世界排行<br>15=龙割草个人排行<br>16=龙钓鱼比赛排行<br>17=龙钓鱼世界排行<br>18=淘金大赛小组排行<br>20=羊了个羊公会排行 |
| rankConfig | JSONArray | CS | 活动分组排行配置<br>如果活动类型为【4或5】：<br>[[世界排行显示人数],[分组人数],[分组等级区间1],[分组等级区间2]<br>如果活动类型为【6】：<br>[[世界排行显示公会数量]]<br>如果活动类型为[3]：<br>[[世界排行人数]，[小组排行人数]]<br>如果活动类型为【9或10】：<br>[[月赛排行公会数],[周赛排行公会数]]<br>如果活动类型为【11】：<br>[[世界排行显示公会数量]] |
| sceneIconShow | int | C | 地图icon显示<br>0=不显示<br>1=显示 |
| rankItem | string | CS | 排行道具 |
| robotParam | JSONArray | S | 地图排行榜机器人参数<br>[[数量],[积分刷新时间],[初始积分上限，初始积分下限],[积分增长上限，积分增长下限]] |
| sceneIds | JSONArray | CS | 多场景同时开启<br>[场景1id,场景2id] |
| lowestVersion | string | CS | 参与活动最低版本需求 |
| forecastWeight | int | C | 活动列表展示权重，数值越小越靠前，活动地图为1，pve为2，跑酷为3，工会地图为4.没有填不加入列表 |
| scoreReward | string | C | 累计积分奖励预览 |
| displayReward | string | C | 排行榜奖励预览 |
| ad_image | string | C | 广告图资源 |
| ending_image | string | C | ending图资源 |
| forecastDesc | string | C | 活动预告文字KEY,限时地图为单独key,如果多行key格式 key,key,key |
| relationId | JSONArray | CS | 活动关联id |
| dropItemId | JSONArray | CS | 活动限时采集掉落物资<br>[消耗耐久,[[掉落物id1,个数,权重],[掉落物id2,个数,权重]] |
| productItemId | JSONArray | CS | 活动限时生产物资 |
| enterminiscenceId | JSONArray | C | 未完成某个任务前进入其他场景<br>[任务id，场景id] |
| activitycoin | string | CS | 活动特殊显示货币id |
| grandprize | int | C | 活动地图积分任务大奖展示分数（不填则默认为展示最后一个奖励，通常就是龙） |
| eventmapbpreward | string | C | 活动地图小bp奖励预览 |
| eventmapbpdec | string | C | 新模式活动地图BP规则文案；不填使用原文案 |
| reopeningpartner | JSONArray | CS | 复开地图伙伴<br>[伙伴id，伙伴碎片id] |
| factoryIcon | string | C | 积分排行工厂图标 |
| clearID | JSONArray | CS | 活动地图再次开启时需额外清理的地图的id集合 |
| showImage | JSONArray | C | 积分任务固定图展示（图片id，活动名称key，地图名称key）（不填则是老的奖励展示方式） |
| isRedEnergy | int | CS | 是否使用红体力（1=用0=不用，不填默认为0） |
| PartnerShow | string | C | 是否在活动入口图标，显示奖励的伙伴头像（伙伴ID,空为不显示） |
| loopGap | int | CS | 循环间隔（首期新版每日任务结束后多少秒后开新的一期） |
| loopCircle | int | CS | 循环周期（自动开启的每日任务一期持续多少秒） |
| showId | JSONArray | CS | 展示场景id |
| skitItem | string | CS | 短剧能量 |

## ConfigTemplate.xlsx / ConfigTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | String | CS | 序号 |
| value | String | CS | 值 |

## ConfigTemplate.xlsx / Sheet1

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| 4 | 3 | 143 | [[4,24,0],[3,24,0],[143,24,0],[135,24,0],[130,24,0],[136,24,0],[132,24,0],[128,24,0],[139,24,0],[137,24,0],[141,24,0],[140,24,0],[129,24,0],[133,24,0],[146,24,0],[148,24,0],[142,24,0],[147,24,0],[149,24,0],[150,24,0],[127,24,0],[126,24,0],[122,24,0],[144,24,0],[152,24,0],[145,24,0],[151,24,0]] |

## EventMapBPLevelTemplate.xlsx / EventMapBPLevelTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | id |
| level | int | CS | 等级 |
| smallBpId | string | CS | 对应活动ID |
| exp | int | CS | 下一级所需经验<br>-1=满级不需要 |
| icon | string | C | 图标(道具类型不配置) |
| normalType | int | CS | 普通奖励类型<br>0=道具<br>1=工厂槽位<br>2=伙伴<br>3=二合道具 |
| normalReward | JSONArray | CS | 普通奖励<br>[奖励ID，数量] |
| vipType | int | CS | 付费奖励类型<br>0=道具<br>1=工厂槽位<br>2=伙伴<br>3=二合道具 |
| vipReward | JSONArray | CS | 付费奖励<br>[奖励ID，数量] |
| title | string | C | 奖励名称 |
| desc | string | C | 奖励描述 |
| specialReward | int | C | 特殊奖励框<br>0=否<br>1=是 |
| stageReward | int | C | 阶段奖励<br>0=否<br>1=是 |
| payIcon | JSONArray | C | 付款界面icon位置<br>[位置,道具ID] |
| payLabel | JSONArray | CS | 付费礼包标签<br>1：非R<br>2：微R(0,5]<br>3：小R(5,30]<br>4：中R(30,100]<br>5：大中R(100,300]<br>6：大R(300,1000]<br>7：超大R(1000+ |
| payshopid | int | CS | 对应shop表id |
| isMergeGuide | int | C | 是否触发二合的领取引导 |

## ItemTemplate.xlsx / ItemTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | id（头像框、皮肤id与frame表、skin表中id一致） |
| remarks | string |  | 备注 |
| name | string | C | 名称 |
| desc | string | C | 描述 |
| icon | string | C | 图标 |
| widgetType | int | C | 获得后icon飞向的位置<br>1=体力<br>2=钻石<br>3=金币<br>4=红体力<br>9=经验<br>13=背包<br>16=伙伴手册<br>19=炸弹包裹<br>20=头像<br>31=孵蛋功能<br>39=实验室<br>45=按次数体力打折<br>47=动物图标<br>52=公会图标<br>58=翻翻乐图标<br>60=无尽追逐图标<br>63=卡牌icon<br>102=地图积分任务图标<br>103=公会活动icon<br>104=幻神舞会地图<br>107=神龙博物馆地图<br>109=满级地图<br>110=公会龙icon<br>112=龙力buff<br>154=消耗体力返积分<br>183=藏宝图<br>184=线索道具<br>185=扎气球<br>194=礼包集合<br>195=二合入口<br>2002=龙PVE积分<br>2010=龙PVE双倍掉落BUFF<br>2011=龙PVE双倍采集BUFF<br>3001=跑酷积分<br>3002=跑酷buff<br>4001=割草积分<br>4002=割草buff<br>4004=割草加时间<br>5001=龙钓鱼积分<br>5002=鱼图鉴<br>6001=小bp积分位置 |
| paginationType | int | C | -1不在背包中显示<br>分页签类型<br>1=挂机产物<br>2=生产产物<br>3=任务活动物品<br>4=其它<br>5=基因<br>6=时装 |
| type | int | CS | 1=货币<br>2=探索物资<br>3=生产物资<br>4=任务道具<br>5=龙物资<br>6=龙蛋<br>7=体力装置消耗道具<br>8=商人兑换道具<br>9=经验<br>10=体力道具<br>11=炸弹<br>13=减冷却道具<br>14=龙<br>15=作物加速道具<br>16=龙挂机加速道具<br>17=龙钥匙<br>18=农作物<br>19=使用后获得金币<br>20=buff<br>21=建筑升级奖励道具<br>22=家园委托加速道具<br>23=礼包<br>24=头像框<br>25=航海订单劵<br>26=宝箱<br>27=皮肤<br>28=头像<br>29=活动道具<br>30=普通龙碎片（基因）<br>31=万能碎片<br>32=龙之力恢复道具<br>33=场景开启门票<br>34=体力打折道具<br>35=爱心勋章（不飞背包的道具）<br>37=龙PVE积分<br>38=地图活动积分<br>39=小游戏积分道具<br>40=共享红包道具<br>41=公会积分道具<br>42=工厂加速道具<br>43=马拉松积分道具<br>44=图纸积分道具<br>45=公会龙积分道具<br>46=淘金大赛积分道具<br>47=割草积分道具<br>48=龙钓鱼积分<br>49=龙钓鱼活动的鱼<br>50=小bp积分<br>51=对应地图id体力打折道具<br>55=家园建筑皮肤<br>56=伙伴失物<br>57=事件奖励类道具<br>58=玩法开启类道具（宴会）<br>59=每日任务积分<br>60=万能卡<br>61=卡牌<br>62=卡包<br>63=新手岛2活动积分<br>64=羊了个羊道具<br>65=jam道具<br>66=block道具<br>67=短剧能量<br>68=广告券<br>69=固定龙蛋<br>70=动态龙蛋<br>71=宝箱<br>72=二合道具（需要配转化） |
| dragonId | string | CS | 对应龙id |
| breedDragonId | string | CS | 对应繁育龙id |
| productLevel | int | CS | 生产级别：<br>1级产物由基础物资直接生产<br>2级产物生产材料至少包含1个1级生产物资<br>依此类推n级产物生产材料至少包含1个n-1级生产物资 |
| productNeedItem | JSONArray | CS | 生产所需物品[[物品ID,数量],[物品ID,数量]] |
| productNeedItemPayLevelMap | JSONArray | CS | 生产所需物品[[物品ID,数量],[物品ID,数量]] |
| orderType | int | CS | 属于订单种类：<br>0 其他<br>1 大本营订单<br>2 探索订单<br>3 混合订单 |
| productTime | int | CS | 生产时间(单位：秒) |
| timeValue | int | CS | 价值时间（单位：分钟）<br>价值时间如果是0，则不会被订单随机出来 |
| sellCoin | int | CS | 价值金币(远航提交时获得金币） |
| price | int | CS | 价值钻石 |
| expValue | int | CS | 价值经验（远航提交时获得经验） |
| orderNumLimit | int | CS | 订单物资数量限制<br>-1：表示不限制<br>0：不是订单需求物资 |
| orderNormalWeight | int | CS | 普通订单随机权重 |
| orderDifficultWeight | int | CS | 困难订单随机权重 |
| timeOrderItem | int | CS | 进入航海订单随机的道具<br>0=不进入<br>1=进入 |
| timeOrderNumLimit | JSONArray | CS | 航海订单物资数量限制<br>[超过的数量,随机数1,随机数2] |
| limittime | int | CS | 有效时间<br>（秒为单位限时道具用，-1为永久） |
| canUse | int | CS | 是否有使用功能<br>0.可以使用<br>1.不可使用 |
| funcType | int | CS | 使用后效果<br>1=获得体力<br>2=龙蛋<br>3=饱食时间<br>4=体力装置值<br>5=清除cd道具<br>6=炸弹范围<br>7=获得龙<br>8=加速龙挂机<br>9=获得金币/货币<br>10=获得buff<br>11=家园委托加速<br>12=礼包掉落<br>13=装载一个航海订单箱<br>14=宝箱包<br>15=获得头像框<br>16=获得皮肤<br>17=获得头像<br>18=龙基因碎片<br>19=优先查找挂机建筑产出<br>20=龙之力冷却减少的时间<br>21=场景开启时长<br>22=打折折扣<br>23=对应装扮图纸ID<br>24=共享红包相关参数<br>25=工厂加速<br>26=挂机建筑产出的体力装置值<br>27=对应地图id体力打折<br>31=信物所属伙伴<br>32=卡牌星级<br>33=卡包<br>34=优先查找再生植物<br>35=优先查找小精灵<br>36=红体力能量<br>37=固定龙蛋<br>38=动态龙蛋<br>39=宝箱drop |
| funcParam | JSONArray | CS | 若为1则为获得的体力数量<br>若为2则为龙蛋ID<br>若为3则为饱食时间<br>若为5，当Value=0时，直接清空cd；当Value＞0时，cd减少时间为Value的值<br>若为6填写炸弹爆炸爆炸半径，一个格子宽为1<br>若为7、13、15、16、17则不用填<br>若为8填写时间，单位秒<br>若为10填写buff表ID<br>若为12则填写掉落ID<br>若为14则填写掉落ID<br>若为15则填写frame表ID<br>若为16则填写skin表ID<br>若为17则填写avatar表ID<br>若为18则填写[龙ID,合成所需基因数量]<br>若为20则填写龙之力恢复减少的时间<br>若为21则填写时间（小时）<br>若为22则填写体力打折折扣<br>若为23，且可用道具兑换则填写[装扮ID，道具ID，数量]<br>若为24则填写[可开启数量，掉落ID]<br>若为25=工厂加速时长（秒）<br>若为27=[折扣,场景id]<br>若为30=[解锁龙乐园工厂建筑,解锁多语言，品质]<br>若为31=伙伴类型<br>若为32=[卡牌星级,活动ID]<br>若为33=cardbookdrop表ID"<br>若为37=随机蛋roll奖池[道具id，权重]<br>若为38=随机蛋roll动态奖池[道具id，权重]，只会roll已有的龙 |
| itemLimit | int | CS | 道具堆叠上限<br>-1为无上限<br>到达上限时，不在叠加 |
| getWays | JSONArray | C | 物品获取途径2<br>-1=不显示获取途径<br>0=纯文本描述获取途径<br>1=付费商城<br>2=加工厂<br>3=龙挂机产出<br>4=探索<br>5=金币商城<br>6=打开礼包<br>7=实验室<br>8=洞穴探索<br>9=种植<br>10=使用龙基因<br>11=场景剧情获得，填写场景ID<br>12=迷宫获得<br>13=女主和尼诺去试穿<br>14=去装扮<br>15=跳转装扮小屋<br>16=跳转龙族传送阵<br>17=马拉松限时物资跳转定位<br>18=召唤获得<br>19=去使用伙伴信物<br>20=打开地图界面<br>21=修复建筑<br>22=伙伴页面<br>23=钻石抽卡<br>24=积分任务阶段奖励<br>25=道具跳转礼包<br>26=道具跳转工厂，找不到工厂找礼包<br>27=广告月卡<br>28=航海订单<br>29=活动地图，打开当前活动地图界面<br>30=打开海豚岛活跃进度条的界面<br>30=升级建筑获得的奖励中包含该道具 |
| getWayParam | string | C | 若为0则填写文字表key |
| sceneId | string | CS | 固定场景产出<br>（无场景限制不填<br>有限制则填写场景id）<br>-1则为爬塔草属性场景关闭删除道具<br>-2则为木属性场景<br>-3为石属性场景删除道具<br>-4为矿属性场景删除道具 |
| lookupWay | int | C | 目标查找方式<br>0=优先查找人物附近<br>1=无解锁障碍时优先按障碍顺序查找 |
| timeOrderUnlockLevel | int | C | 航海订单物资解锁等级-1为不参与航海订单的物资 |
| itemConvert | JSONArray | CS | 道具超出上限后转换，配置了数据的转化，未配置数据的销毁。<br>配置格式<br>[物品ID,数量]<br>支持道具类型：<br>进背包的道具：支持<br>不进背包的道具：27皮肤（有需求可扩充） |
| showUp | int | C | 是否弹出重要道具界面<br>不填默认不弹，1为弹出（目前仅支持任务奖励） |
| getByAds | int | CS | 是否可看广告获得<br>0=不可以，<br>1=可以 |

## MergeTwoConfigTemplate.xlsx / MergeTwoConfigTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 棋盘ID |
| clearcd_currency_types | string | CS | 重置生成器冷却时间的货币 |
| clearcd_price | int | CS | 重置生成器冷却时间，(X秒=1钻石) |
| 2x_start_conditions | JSONArray | C | 2X采集开启条件，完成某订单 |
| 4x_start_conditions | JSONArray | C | 4X采集开启条件，完成某订单 |
| merge_start_conditions | string | CS | 二合入口开启条件，接取某任务 |
| guide_building | string | C | 二合第一个修复建筑唯一ID，用于指引 |
| guide_start_conditions | JSONArray | C | 二合棋盘引导触发条件 |
| shop_start_conditions | JSONArray | C | 二合商店开启条件，完成某订单 |
| tutorial_link | JSONArray | C | 二合需要引导的生成器链 |
| order_award_itemId | string | CS | 二合地图对应的剧情币 |
| condition_random_order | string | CS | 二合随机订单开启条件(固定订单表) |
| default_random_order | string | CS | 二合随机订单保底需求物品 |
| default_use_power | string | CS | 二合使用体力 |
| default_use_limit | int | CS | 二合体力上限 |
| default_use_grown | int | CS | 二合体力恢复速度 |
| default_use_change | float | CS | 二合体力转化比 |
| default_use_BP | int | CS | 活动使用的BP积分 |

## MergeTwoEnergyShop.xlsx / MergeTwoConfigTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 棋盘ID |
| currency_shop_id | string | CS | 体力商店购买货币id |
| currency_shop_num | string | CS | 体力商店购买数量 |
| currency_shop_value | string | CS | 体力商店购买价格 |

## MergeTwoEnergyShopTemplate.xlsx / MergeTwoEnergyShopTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 棋盘ID |
| currency_shop_id | string | CS | 体力商店购买货币id |
| currency_shop_num | string | CS | 体力商店购买数量 |
| currency_shop_value | JSONArray | CS | 体力商店购买价格 |

## MergeTwoItemGenerateTemplate.xlsx / MergeTwoItemGenerateTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 物品ID |
| fixedOutput | JSONArray | CS | 固定产出 |
| proOutput | JSONArray | CS | 概率产出 |
| num | JSONArray | CS | 产出次数 |
| cd | JSONArray | CS | 冷却时间（秒） |
| cost | JSONArray | CS | 耗费货币 |
| canDouble | int | CS | 是否支持多倍采集 |
| coverPro | int | CS | 出二级锁定的概率（万分比） |
| generateNum | int | CS | 生成个数 |

## MergeTwoItemTemplate.xlsx / MergeTwoItemTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 物品ID |
| name | string | C | 物品名称 |
| des | string | C | 物品描述 |
| icon | string | C | 图标 |
| groupId | string | CS | 所属合成链 |
| level | int | CS | 物品等级 |
| type | int | CS | 类型 |
| type_par | JSONArray | CS | 类型参数 |
| nextId | string | CS | 合并产物 |
| saleRestrictions | int | CS | 售出要求 |
| shopSale | int | CS | 商店是否售卖 |
| price | JSONArray | CS | 物品售价 |
| recycle | JSONArray | CS | 回收材料 |
| orderPrice | int | CS | 订单价值 |
| derivative | JSONArray | CS | 衍生物 |
| change | string | CS | 变更 |
| clonPro | JSONArray | CS | 克隆概率（万分比） |
| clonValue | JSONArray | CS | 克隆气泡解锁价值 |
| getWays | JSONArray | C | 获取途径 |
| getWayParam | JSONArray | C | 获取途径参数 |
| mergeEffect | int | C | 合成特效(合到) |

## MergeTwoMainTemplate.xlsx / MergeTwoMainTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | id |
| mapId | string | CS | 棋盘ID |
| maxCol | int | CS | 最大列数 |
| column_1 | JSONArray | CS | 列1 |
| column_2 | JSONArray | CS | 列2 |
| column_3 | JSONArray | CS | 列3 |
| column_4 | JSONArray | CS | 列4 |
| column_5 | JSONArray | CS | 列5 |
| column_6 | JSONArray | CS | 列6 |
| column_7 | JSONArray | CS | 列7 |
| column_8 | JSONArray | CS | 列8 |
| column_9 | JSONArray | CS | 列9 |

## MergeTwoOrderTemplate.xlsx / MergeTwoOrderTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | ID |
| activityId | string | CS | 活动ID |
| type | int | CS | 订单类型 |
| picture | string | C | 订单头像 |
| condition | string | CS | 订单接取条件（主线为当前，支线为完成，3为组ID） |
| needMitem | JSONArray | CS | 订单需求Mitem |
| reward | JSONArray | CS | 订单奖励item |
| priority | int | CS | 优先级 |
| cd | int | CS | 接取冷却（秒） |

## MergeTwoShopTemplate.xlsx / MergeTwoShopTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | id |
| activity | string | CS | 所属活动 |
| productPos | int | CS | 商品位 |
| commodityPool | JSONArray | CS | [M_itemID，售价货币，售价，库存，权重]。-1是广告，-2是免费 |

## MergeTwoWarehouseTemplate.xlsx / MergeTwoWarehouseTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | id |
| activity | string | CS | 所属活动 |
| latticeNum | int | CS | 仓库格子 |
| price | JSONArray | CS | 开启消耗 |

## MergeTwoboxTemplate.xlsx / MergeTwoboxTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | 物品ID |
| time | int | CS | 宝箱开启所需时间（秒） |
| num | int | CS | 宝箱内物品数量 |
| fixedOutput | JSONArray | CS | 固定产出 |
| proOutput | JSONArray | CS | 概率产出 |

## OrderItemChainTemplate.xlsx / OrderItemChainTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| ID | string | CS | 编号 |
| difficultyType | int | CS | 订单难度 |
| chessboard | string | CS | 棋盘id |
| SyntheticChain | string | CS | 合成链id |
| RequiredGenerator | string | CS | 所需生成器 |

## OrderItemChainTemplate.xlsx / 备注

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| number | boolean | string | 可用数据类型 |
| 数字类型 | bool类型 | 独立出来的类型，方便配置，无需""标记！ |  |

## OrderItemRandomItemTemplate.xlsx / OrderItemRandomItemTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | CS | ID |
| difficultyType | int | CS |  |
| chessboard | string | CS |  |
| SyntheticChain | string | C |  |
| MaxLevel | int | CS |  |
| taskRange | JSONArray | CS |  |
| RandomItem1 | JSONArray | CS |  |
| RandomItemWeight1 | JSONArray | CS |  |
| RandomItem2 | JSONArray | CS |  |
| RandomItemWeight2 | JSONArray | CS |  |
| RandomItem3 | JSONArray | CS |  |
| RandomItemWeight3 | JSONArray | CS |  |

## OrderItemRandomNumberTemplate.xlsx / OrderItemRandomNumberTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| ID | string | CS | 编号 |
| difficultyType | int | CS | 订单难度 |
| chessboard | string | CS | 棋盘id |
| Typeid | int | CS | 解锁类型 |
| Taskid | JSONArray | CS | 解锁类型参数 |
| itemNumber | JSONArray | CS | 数量及权重[[1个，权重],[2个，权重]] |

## OrderItemRandomNumberTemplate.xlsx / 备注

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| number | boolean | string | 可用数据类型 |
| 数字类型 | bool类型 | 独立出来的类型，方便配置，无需""标记！ |  |

## OrderItemSetTemplate.xlsx / OrderItemSetTemplate

| 字段 | 类型 | 导出端 | 原始说明 |
| --- | --- | --- | --- |
| id | string | cs | 编号 |
| difficultyType | int | cs | 订单难度 |
| chessboard | string | cs | 棋盘id |
| requirement | int | cs | 前置条件 |
| requirementValue | JSONArray | cs | 条件参数 |
| itemNumber | JSONArray | cs | 订单内容 |
