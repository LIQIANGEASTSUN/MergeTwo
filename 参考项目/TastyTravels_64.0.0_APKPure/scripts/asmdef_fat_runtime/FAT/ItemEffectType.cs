using UnityEngine;

namespace FAT
{
	public enum ItemEffectType
	{
		[Tooltip("状态 可消耗能量")]
		Energy = 0,
		[Tooltip("状态 可产出")]
		Spawnable = 1,
		[Tooltip("状态 顶级棋子")]
		TopLevel = 2,
		[Tooltip("瞬时 登场表现")]
		OnBoard = 3,
		[Tooltip("瞬时 合成表现")]
		OnMerge = 4,
		[Tooltip("瞬时 收集表现")]
		OnCollect = 5,
		[Tooltip("瞬时 解锁格子")]
		UnlockNormal = 6,
		[Tooltip("瞬时 解锁格子 带等级")]
		UnlockLevel = 7,
		[Tooltip("瞬时 解锁网")]
		UnFrozen = 8,
		[Tooltip("状态 订单礼盒拖尾")]
		OrderBoxTrail = 9,
		[Tooltip("瞬时 订单礼盒从棋盘上消耗")]
		OrderBoxOpen = 10,
		[Tooltip("状态 可加倍消耗能量")]
		BoostEnergy = 11,
		[Tooltip("瞬时 棋子飞到订单时爆炸")]
		OrderItemConsumed = 12,
		[Tooltip("瞬时 点击沙滩格")]
		TapLocked = 13,
		[Tooltip("瞬时 跳过冷却 冷却消失效果")]
		JumpCDDisappear = 14,
		[Tooltip("瞬时 跳过冷却 飞行轨迹")]
		JumpCDTrail = 15,
		[Tooltip("状态 跳过冷却背光效果")]
		JumpCDBg = 16,
		[Tooltip("状态 订单可提交")]
		OrderCanFinish = 17,
		[Tooltip("瞬时 4倍体力Max产出")]
		EnergyBoostBg4X = 18,
		[Tooltip("状态 星想事成拖尾")]
		MagicHourTrail = 19,
		[Tooltip("瞬时 星想事成反馈")]
		MagicHourHit = 20,
		[Tooltip("瞬时 时间加速器生效")]
		TimeSkip = 21,
		[Tooltip("瞬时 触发式产棋子组件特效")]
		TrigAutoSource = 22,
		[Tooltip("状态 灯泡特殊道具")]
		Lightbulb = 23,
		[Tooltip("瞬时 冰冻棋子合成及消失时要播的特效")]
		FrozenItem = 24,
		[Tooltip("瞬时 带有活动Token的棋子触发翻倍效果")]
		TokenMultiTrigger = 25,
		[Tooltip("瞬时 活动Token翻倍棋子自身生效时的瞬时效果")]
		TokenMultiSelfTrigger = 26,
		[Tooltip("状态 活动Token翻倍棋子自身生效时的背光效果")]
		TokenMultiBg = 27,
		[Tooltip("状态 选中描边")]
		SelectOutline = 28,
		[Tooltip("状态 阴影")]
		Shadow = 29,
		[Tooltip("等级解锁地块拖尾")]
		UnlockLevelTrail = 30,
		[Tooltip("状态 格子奖励prefab")]
		GirdReward = 31,
		[Tooltip("瞬时 魔盒订单落地特效")]
		MagicOrderHit = 32,
		[Tooltip("登录礼包相关特效")]
		LoginGift = 33,
		[Tooltip("瞬时 带有活动Token的棋子触发翻倍效果 气球皮")]
		TokenMultiTriggerBalloon = 34,
		[Tooltip("状态 活动Token翻倍棋子自身生效时的背光效果 气球皮")]
		TokenMultiBgBalloon = 35,
		TeslaSource = 36,
		TeslaBuff = 37,
		Filter_Scissor = 38,
		Filter_Feed = 39,
		SpeedUp_Tip = 40
	}
}
