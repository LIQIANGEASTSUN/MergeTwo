using IFix.Core;

namespace FAT.Merge
{
	public static class EnergyBoostUtility
	{
		public enum BetState
		{
			X1 = 0,
			X2 = 1,
			X4 = 2,
			X8 = 3,
			X16 = 4
		}

		public static bool _tip4xTriggeredInSession;

		public static bool _tip8xTriggeredInSession;

		public static bool _tip16xTriggeredInSession;

		public static bool IsMaxToastBoost()
		{
			return false;
		}

		public static bool AnyEnergyBoostFeatureReady()
		{
			return false;
		}

		public static ReasonString GetEnergyProduceReason(int curState)
		{
			return null;
		}

		public static ReasonString GetEnergyProduceReasonByMultiplier(int actualMultiplier)
		{
			return null;
		}

		public static bool IsBoost(int curState)
		{
			return false;
		}

		public static int GetEnergyRate(int state = -1)
		{
			return 0;
		}

		public static int GetBoostLevel(int state = -1)
		{
			return 0;
		}

		public static (string, string) GetBoardDetailKeyForBoostState()
		{
			return default((string, string));
		}

		public static string GetEnergyBoostTipText()
		{
			return null;
		}

		public static bool OnLoginAdjustBetState(int curState, out int nextState)
		{
			nextState = default(int);
			return false;
		}

		public static bool CanSwitchToState(EnergyBoostState state)
		{
			return false;
		}

		public static bool TryMarkTipTriggeredForHighest(EnergyBoostState highestAvailableState)
		{
			return false;
		}

		public static EnergyBoostState GetHighestAvailableState()
		{
			return default(EnergyBoostState);
		}

		[IDTag(1)]
		public static int SwitchBetState(int curState)
		{
			return 0;
		}

		[IDTag(0)]
		public static BetState SwitchBetState(BetState fromState)
		{
			return default(BetState);
		}

		public static bool FeatureReady(BetState state)
		{
			return false;
		}

		public static bool IsReplaceEnabled(EnergyBoostState state)
		{
			return false;
		}

		public static int GetEnergyBoostedItemId(int originalItemId, int levelAdd, out int actualEnergyMultiplier, out bool usedSmartReplacement)
		{
			actualEnergyMultiplier = default(int);
			usedSmartReplacement = default(bool);
			return 0;
		}

		public static int ProcessEnergySpecialLogic(int originalItemId, int levelAdd, out int actualEnergyMultiplier, out bool usedSmartReplacement)
		{
			actualEnergyMultiplier = default(int);
			usedSmartReplacement = default(bool);
			return 0;
		}

		public static int CalculateEnergyMultiplierByLevel(int level)
		{
			return 0;
		}

		public static bool TryFindBestOutputForOrders(int originalItemId, int levelAdd, out int bestItemId, out int bestLevel)
		{
			bestItemId = default(int);
			bestLevel = default(int);
			return false;
		}

		public static bool IsItemNeededByOrders(int itemId)
		{
			return false;
		}

		public static bool IsItemNeededByMainOrders(int itemId)
		{
			return false;
		}

		public static IEnergyBoostReplaceItem GetCurrentActivityOrderProvider()
		{
			return null;
		}
	}
}
