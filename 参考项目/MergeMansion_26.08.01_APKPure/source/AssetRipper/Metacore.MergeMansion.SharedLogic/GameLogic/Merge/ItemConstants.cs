using System;

namespace GameLogic.Merge
{
	public static class ItemConstants
	{
		public const int MaxItemLevels = 30;

		public const int IdForFirstEditorTestItem = 251658240;

		public const string LeaderboardEventRankingRewardTag = "LBE_RankingReward";

		[Obsolete("Refactored to ActivationFeatures.AllowEnergyMode")]
		public const string IgnoresEnergyModeTag = "IgnoresEnergyMode";

		public const string UseAutomaticDescriptionTag = "UseAutomaticDescription";

		public const string StartAsDiscoveredTag = "StartAsDiscovered";

		public const string AlwaysShowCanBeFoundInTag = "AlwaysShowCanBeFoundIn";

		public const string DontShowSourcesInInfoPopup = "InfoPopupNoProducers";

		public const string BoxMayContainHintLocId = "BoxInfo_ThisBoxMayContain";

		public const string HasDynamicDescription = "HasDynamicDescription";

		public const int TUTORIAL_POUCH_2_TARGET_ITEM = 184;
	}
}
