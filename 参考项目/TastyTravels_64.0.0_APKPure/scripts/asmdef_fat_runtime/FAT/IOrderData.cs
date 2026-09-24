using System;
using System.Collections.Generic;
using Config;

namespace FAT
{
	public interface IOrderData
	{
		OrderState State { get; }

		int Id { get; }

		int OrderType { get; }

		int ProviderType { get; }

		int RoleId { get; }

		int UnlockLevel { get; }

		IReadOnlyList<ItemCountInfo> Requires { get; }

		IReadOnlyList<RewardConfig> Rewards { get; }

		bool Displayed { get; set; }

		bool IsNewOrder { get; set; }

		int DffyStrategy { get; set; }

		bool ShouldNotChange { get; set; }

		Func<IOrderData, bool> RemoteOrderResolver { get; set; }

		int PayDifficulty => 0;

		int ActDifficulty => 0;

		int AutoActDifficulty => 0;

		int AutoPayDifficulty => 0;

		int RestActDifficulty => 0;

		int RestPayDifficulty => 0;

		bool IsApiOrder => false;

		OrderApiStatus ApiStatus => default(OrderApiStatus);

		bool IsCounting => false;

		int OrderCountFrom => 0;

		int OrderCountRequire => 0;

		int OrderCountTotal => 0;

		bool IsExpired => false;

		int Duration => 0;

		long Countdown => 0L;

		bool IsFlash => false;

		int Score => 0;

		int Score1 => 0;

		int ScoreBR => 0;

		int ScoreRewardBR => 0;

		int LikeId => 0;

		int LikeNum => 0;

		int RateId => 0;

		int RateNum => 0;

		bool IsStep => false;

		int FallbackItemId { get; set; }

		(int min, int max) RewardDffyRange { get; set; }

		int MagicHourTimeLifeMilli { get; set; }

		int MagicHourTimeDurationMilli { get; set; }

		bool IsMagicHour => false;

		bool IsMagicHourExpired => false;

		bool IsMagicOrder => false;

		bool IsGuideMagicOrder => false;

		bool IsActivityDependent => false;

		bool IsActivityDependencyExpired => false;

		bool SupportsSpineSkin => false;

		bool HasExtraReward => false;

		bool HasExtraRewardMini => false;

		(int id, int num) ExtraRewardMini => default((int, int));

		bool HasOrderExtraReward => false;

		(int id, int num) OrderExtraReward => default((int, int));

		bool IsClawOrder => false;

		bool IsMysteryBagOrder => false;

		bool IsOrderQuest => false;

		bool IsEscapeQuest => false;

		bool IsThiefOrder => false;

		bool IsColorOrder => false;

		bool IsFoodVanOrder => false;

		bool IsSpinOrder => false;

		bool IsPiggyOrder => false;

		bool IsCDOrder => false;

		bool IsCoopOrder => false;

		int BonusEventID { get; set; }

		int BonusID { get; set; }

		int BonusEndTime { get; set; }

		int BonusPhase { get; set; }

		bool needBonusAnim { get; set; }

		bool HasBonus => false;

		bool IsRewardPickOrder => false;

		bool IsLongOrder => false;

		bool HasScrollRequest { get; set; }

		int HideId => 0;

		int HideNum => 0;

		bool IsMultiOrder => false;

		int GetValue(OrderParamType paramKey);

		bool HasTag(OrderTag flag)
		{
			return false;
		}

		int CalcRealDifficulty()
		{
			return 0;
		}

		bool ShouldOverrideOrderRes()
		{
			return false;
		}

		bool TryGetOverrideRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetRoleSpineRes(out string res)
		{
			res = null;
			return false;
		}

		static string ApplyV2SuffixIfNeeded(string res)
		{
			return null;
		}

		bool TryGetExtraRewardMiniRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetOrderLikeRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetOrderRateRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetOrderBonusRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetClawOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetMysteryBagOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetFoodVanOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetMultiOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetPiggyOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetColorOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetLimitMergeOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetCDOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetThiefOrderRes(out string res)
		{
			res = null;
			return false;
		}

		bool TryGetSpinOrderRes(out string res)
		{
			res = null;
			return false;
		}
	}
}
