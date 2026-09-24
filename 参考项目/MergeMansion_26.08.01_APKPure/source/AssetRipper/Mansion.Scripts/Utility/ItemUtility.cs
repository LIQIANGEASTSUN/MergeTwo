using GameLogic.Player;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Pool.Items;

namespace Utility
{
	public static class ItemUtility
	{
		public const string OpenChestSkinSuffix = "_Open";

		public static string GetUsesLeftText(IMergeItem item)
		{
			return null;
		}

		public static string GetUsesLeftText(int usesLeft, bool separatedBySpace = true)
		{
			return null;
		}

		public static bool AttemptedLevelUpOnActivable(IPlayer player, MergeBoard mergeBoard, Coordinate from, Coordinate to)
		{
			return false;
		}

		public static string GetItemsNeededCountString(int itemsNeededCount, IPlayer player)
		{
			return null;
		}

		public static string GetItemsNeededCountString(int itemsNeededCount, int displayMax)
		{
			return null;
		}

		public static string GetOverrideItemFeaturesDisplayValueText(OverrideItemFeatures overrideItemFeatures)
		{
			return null;
		}

		public static string GetQuantityText(IPlayer player, IPlayerReward playerReward, ILoanedReward loanedReward)
		{
			return null;
		}

		public static string DefaultToOpenChestSkin(string defaultSkin)
		{
			return null;
		}
	}
}
