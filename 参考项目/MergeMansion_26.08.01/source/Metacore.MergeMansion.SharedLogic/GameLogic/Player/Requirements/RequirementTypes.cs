using System;

namespace GameLogic.Player.Requirements
{
	public static class RequirementTypes
	{
		public const int ItemRequirement = 1;

		public const int HotspotCompletedRequirement = 2;

		public const int HotspotVisibleRequirement = 3;

		public const int HotspotVisibleOrCompletedRequirement = 4;

		public const int ImpossibleRequirement = 5;

		public const int CostRequirement = 6;

		public const int ItemSeenRequirement = 7;

		public const int IsDeveloperRequirement = 8;

		public const int PlayerLevelRequirement = 9;

		public const int AreaCompletedRequirement = 10;

		public const int PlayerCurrentTimeRequirement = 11;

		public const int MergeChainItemNeededRequirement = 12;

		public const int ItemNeededRequirement = 13;

		public const int PlayerInitialClientVersionRequirement = 14;

		public const int SessionCountRequirement = 15;

		public const int ItemNeededAndConsumeRequirement = 16;

		public const int ProgressionEventPremiumPurchased = 17;

		public const int DaysSinceLastLoginRequirement = 18;

		public const int LeaderboardEventActive = 19;

		public const int ProgressionEventPerkActive = 20;

		public const int MergeChainItemNeededInVisibleTasksRequirement = 21;

		public const int CurrencyRequirement = 22;

		public const int OfferPriceRequirement = 23;

		public const int HotspotNotCompletedRequirement = 24;

		public const int BoardMergeCountRequirement = 25;

		public const int BoardItemDiscoveredRequirement = 26;

		public const int EventTaskCompletedRequirement = 27;

		public const int SideBoardEventActive = 28;

		public const int SideBoardEventPortalItemGiven = 29;

		public const int SideBoardEventLevelRequirement = 30;

		public const int SideBoardEventEnteredMergeBoardRequirement = 31;

		public const int AtLeastNInventorySlotsRequirement = 32;

		public const int HasAnyPetRequirement = 33;

		public const int CardStack = 34;

		public const int CardStackVisibleRequirement = 35;

		public const int CurrencyGainedRequirement = 36;

		public const int CurrencySpentRequirement = 37;

		public const int CurrencyComparedToSessionStartRequirement = 38;

		public const int ActiveTasksCanBeCompletedRequirement = 39;

		public const int OfferGroupTimeRemainingRequirement = 40;

		public const int HasAdsRequirement = 41;

		public const int CompleteIllustration = 42;

		public const int MergeChainItemRequirement = 43;

		public const int MergeChainItemSeenRequirement = 44;

		public const int MergeChainNoItemRequirement = 45;

		public const int MergeChainItemNotSeenRequirement = 46;

		public const int AreaNotCompletedRequirement = 47;

		public const int NoItemRequirement = 48;

		public const int ItemNotSeenRequirement = 49;

		public const int HotspotNotVisibleRequirement = 50;

		public const int MilestoneLevelRequirement = 51;

		public const int BoultonLeagueEventActive = 52;

		public const int TemporaryCardCollectionEventActiveRequirement = 53;

		public const int MergeBoardIdRequirement = 54;

		public const int CanAffordShopItemRequirement = 55;

		public const int LocalDaysSinceOfferPurchaseRequirement = 56;

		public const int DelayedRewardsOfferClaimable = 57;

		public const int PlayerMoneySpentInLastNDays = 58;

		public const int PlayerEnergyOnActiveMergeBoardRequirement = 59;

		[Obsolete("Task Groups was removed")]
		public const int TaskGroupCompletedRequirement = 60;

		public const int ClassicRacesRaceActiveRequirement = 61;

		public const int SegmentorSegmentRequirement = 62;

		public const int SegmentorTagRequirement = 63;

		public const int HasEnoughItemChargesRequirement = 64;

		public const int HasEnoughItemTimeRequirement = 65;

		public const int HasActivableKindActiveRequirement = 66;

		public const int CanCompleteHotspotFromMergeBoardRequirement = 67;

		public const int HasEnoughPendingTradesRequirement = 68;

		public const int HasUncompletedAreasRequirement = 69;

		public const int RollTheDiceLevelsRequirement = 70;

		public const int BuilderEventBuildsAvailableRequirement = 71;

		public const int PlayerRequirementStub = 72;
	}
}
