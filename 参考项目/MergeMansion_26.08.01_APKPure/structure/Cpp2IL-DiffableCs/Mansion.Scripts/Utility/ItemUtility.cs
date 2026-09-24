namespace Utility;

public static class ItemUtility
{
	public const string OpenChestSkinSuffix = "_Open"; //Field offset: 0x0

	public static bool AttemptedLevelUpOnActivable(IPlayer player, MergeBoard mergeBoard, Coordinate from, Coordinate to) { }

	public static string DefaultToOpenChestSkin(string defaultSkin) { }

	public static string GetItemsNeededCountString(int itemsNeededCount, IPlayer player) { }

	public static string GetItemsNeededCountString(int itemsNeededCount, int displayMax) { }

	public static string GetOverrideItemFeaturesDisplayValueText(OverrideItemFeatures overrideItemFeatures) { }

	public static string GetQuantityText(IPlayer player, IPlayerReward playerReward, ILoanedReward loanedReward) { }

	public static string GetUsesLeftText(IMergeItem item) { }

	public static string GetUsesLeftText(int usesLeft, bool separatedBySpace = true) { }

}

