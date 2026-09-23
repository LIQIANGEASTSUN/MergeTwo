using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using Code.GameLogic.GameEvents.DailyScoop;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.Config.DecorationShop;
using GameLogic.Decorations;
using GameLogic.GameFeatures;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using GameLogic.Player.Rewards;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Rewards;
using Metaplay.Core.Serialization;

namespace GameLogic.Player
{
	[MetaSerializable]
	[MetaReservedMembers(1, 9)]
	[MetaDeserializationConvertFromConcreteDerivedType(typeof(DefaultAnalyticsContext))]
	public abstract class AnalyticsContext : IRewardSource
	{
		public static readonly string ContextIAP;

		public const string CardCollectionSource = "CardCollection";

		public const string NONE_CONTEXT = "None";

		public const string MAIN_HUD_CONTEXT = "MainHud";

		[MetaMember(1, MetaMemberFlags.None)]
		public string Context { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string Target { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string FlashSaleContext { get; set; }

		public static AnalyticsContext None => null;

		public AnalyticsContext()
		{
		}

		public AnalyticsContext(string context, string target, string flashSaleContext = "None")
		{
		}

		public static AnalyticsContext ForItem(MergeBoardId mergeBoardId, string target = "None", List<string> spawnedItems = null, bool isProducerBoosterActive = false)
		{
			return null;
		}

		public static AnalyticsContext ForWildItemConsume(string hotspotId, string target = "None")
		{
			return null;
		}

		public static AnalyticsContext ForItemFromInventory(MergeBoardId mergeBoardId, string target)
		{
			return null;
		}

		public static AnalyticsContext ForItemFromPocket(MergeBoardId mergeBoardId, string target)
		{
			return null;
		}

		public static AnalyticsContext ForHotspot(MergeBoardId mergeBoardId, HotspotId target)
		{
			return null;
		}

		public static AnalyticsContext ForEvent(EventId eventId, EventOfferId target = null, EventLevelId eventLevelId = null, string impressionId = null)
		{
			return null;
		}

		public static AnalyticsContext ForEventTask(EventId eventId, EventTaskId target = null)
		{
			return null;
		}

		public static AnalyticsContext ForCollectibleBoardEventTask(CollectibleBoardEventId eventId, EventTaskId target = null)
		{
			return null;
		}

		public static AnalyticsContext ForEventTask(MergeBoardId mergeBoard, EventTaskId target = null)
		{
			return null;
		}

		public static AnalyticsContext ForMergeBoard(MergeBoardId mergeBoard)
		{
			return null;
		}

		public static AnalyticsContext ForOffer(string context, MetaOfferId offerId, string impressionId, string flashSaleContext, int slotId = -1)
		{
			return null;
		}

		public static AnalyticsContext ForIAP(string context, string name, string offerId, string transactionId)
		{
			return null;
		}

		public static AnalyticsContext ForMail(string mailType, string target)
		{
			return null;
		}

		public static AnalyticsContext ForDailyTasksRefreshPurchase(int purchasesCount)
		{
			return null;
		}

		public static AnalyticsContext ForDailyTasksV2()
		{
			return null;
		}

		public static AnalyticsContext ForDiscovery(MergeBoardId mergeBoardId, MergeChainId mergeChainId)
		{
			return null;
		}

		public static AnalyticsContext ForGarageCleanupPattern(GarageCleanupEventId eventId, int level, GarageCleanupPatternId patternId)
		{
			return null;
		}

		public static AnalyticsContext ForGarageCleanupLevel(GarageCleanupEventId eventId, int level)
		{
			return null;
		}

		public static AnalyticsContext ForFlashSale(MergeBoardId mergeBoardId, string target, int? slotId, string impressionId, string shopItemId = null, string flashSaleContext = "None")
		{
			return null;
		}

		public static AnalyticsContext ForAreaCompletionReward(IPlayer player, AreaId areaId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForXpMerge(IMergeChainDefinition mergeChain)
		{
			return null;
		}

		public static AnalyticsContext ForItemCreation(IMergeItem createdItem, IMergeMansionGameConfig config)
		{
			return null;
		}

		public static AnalyticsContext ForEventLevelReward(IPlayer player, IStringId eventId, IPlayerReward reward, EventLevelId eventLevelId)
		{
			return null;
		}

		public static AnalyticsContext ForEventGenericReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForProgressionEventStreakReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		[Obsolete("Replaced by ForAuxEnergyItemAttachment.")]
		public static AnalyticsContext DEPRECATED_ForSecondaryEnergyItemAttachment(MergeBoardId mergeBoardId, string itemType)
		{
			return null;
		}

		public static AnalyticsContext ForAuxEnergyItemAttachment(MergeBoardId mergeBoardId, string itemType)
		{
			return null;
		}

		public static AnalyticsContext ForReEngagement(IPlayer player, ReEngagementSettingsId id, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForLeaderboardEventRankingRewards(IPlayer player, LeaderboardEventId eventId, IPlayerReward rankingReward)
		{
			return null;
		}

		public static AnalyticsContext ForBoultonLeagueEventLeaderboardPlacementReward(IPlayer player, BoultonLeagueEventId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForBoultonLeagueEventFinishReward(IPlayer player, BoultonLeagueEventId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForBoultonLeagueEventPromotionReward(IPlayer player, BoultonLeagueEventId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForEventExtensionReward(IPlayer player, IStringId eventId, IPlayerReward extensionReward)
		{
			return null;
		}

		public static AnalyticsContext ForFishCaught(IStringId eventId, string itemType)
		{
			return null;
		}

		public static AnalyticsContext ForWeightStarReward(IPlayer player, IStringId eventId, IPlayerReward reward, string itemType, int starIndex)
		{
			return null;
		}

		public static AnalyticsContext ForDecorationShopPurchase(DecorationShopId decorationShopId, DecorationId decorationId)
		{
			return null;
		}

		public static AnalyticsContext ForMysteryMachineEvent(IStringId eventId)
		{
			return null;
		}

		public static AnalyticsContext ForSoloMilestoneEvent(IStringId eventId)
		{
			return null;
		}

		public static AnalyticsContext ForDailyScoopEvent(IStringId eventId)
		{
			return null;
		}

		public static AnalyticsContext ForDailyScoopClaimReward(DailyScoopEventId eventId, string itemType)
		{
			return null;
		}

		public static AnalyticsContext ForDailyChallengesEvent(CoreSupportEventId eventId)
		{
			return null;
		}

		public static AnalyticsContext ForMysteryMachineEventSpecialSale(IStringId eventId, string itemType)
		{
			return null;
		}

		public static AnalyticsContext ForCardCollection(IPlayer player, IPlayerReward reward = null)
		{
			return null;
		}

		public static AnalyticsContext ForCardCollection(string reward)
		{
			return null;
		}

		public static AnalyticsContext ForShortLeaderboardEvent(ShortLeaderboardEventId eventId)
		{
			return null;
		}

		public static AnalyticsContext ForShortLeaderboardEventReward(IPlayer player, ShortLeaderboardEventId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static string GetTargetForReward(IPlayer player, IPlayerReward reward)
		{
			return null;
		}

		public static string GetTargetForEnergyType(EnergyType energyType)
		{
			return null;
		}

		public static AnalyticsContext ForMinigameCompletion(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForBadgeCompletionReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForLetterOpenedReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForDigEventLevelReward(IPlayer player, string context, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForDigEventCollectionCompleteReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForDigEventMuseumReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static AnalyticsContext ForDigEvent(string eventId, string boardId)
		{
			return null;
		}

		public static AnalyticsContext ForCoreSupportEvent(CoreSupportEventId eventId)
		{
			return null;
		}

		public static AnalyticsContext ForMixABooster(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}

		public static EventAnalyticsContext ForClassicRacesEventReward(CoreSupportEventId eventId, string target, int stageNumber)
		{
			return null;
		}

		public static AnalyticsContext ForRollTheDice(string eventId, string levelId)
		{
			return null;
		}

		public static AnalyticsContext ForRollTheDiceReward(IPlayer player, IStringId eventId, IPlayerReward reward)
		{
			return null;
		}
	}
}
