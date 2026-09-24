namespace GameLogic.Player;

[MetaDeserializationConvertFromConcreteDerivedType(typeof(DefaultAnalyticsContext))]
[MetaReservedMembers(1, 9)]
[MetaSerializable]
public abstract class AnalyticsContext : IRewardSource
{
	public static readonly string ContextIAP; //Field offset: 0x0
	private const string CardCollectionSource = "CardCollection"; //Field offset: 0x0
	private const string NONE_CONTEXT = "None"; //Field offset: 0x0
	private const string MAIN_HUD_CONTEXT = "MainHud"; //Field offset: 0x0
	[CompilerGenerated]
	private string <Context>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <Target>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <FlashSaleContext>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private string Context
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private string FlashSaleContext
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public static AnalyticsContext None
	{
		 get { } //Length: 88
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private string Target
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static AnalyticsContext() { }

	protected AnalyticsContext(string context, string target, string flashSaleContext = "None") { }

	protected AnalyticsContext() { }

	[Obsolete("Replaced by ForAuxEnergyItemAttachment.")]
	public static AnalyticsContext DEPRECATED_ForSecondaryEnergyItemAttachment(MergeBoardId mergeBoardId, string itemType) { }

	public static AnalyticsContext ForAreaCompletionReward(IPlayer player, AreaId areaId, IPlayerReward reward) { }

	public static AnalyticsContext ForAuxEnergyItemAttachment(MergeBoardId mergeBoardId, string itemType) { }

	public static AnalyticsContext ForBadgeCompletionReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForBoultonLeagueEventFinishReward(IPlayer player, BoultonLeagueEventId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForBoultonLeagueEventLeaderboardPlacementReward(IPlayer player, BoultonLeagueEventId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForBoultonLeagueEventPromotionReward(IPlayer player, BoultonLeagueEventId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForCardCollection(string reward) { }

	public static AnalyticsContext ForCardCollection(IPlayer player, IPlayerReward reward = null) { }

	public static EventAnalyticsContext ForClassicRacesEventReward(CoreSupportEventId eventId, string target, int stageNumber) { }

	public static AnalyticsContext ForCollectibleBoardEventTask(CollectibleBoardEventId eventId, EventTaskId target = null) { }

	public static AnalyticsContext ForCoreSupportEvent(CoreSupportEventId eventId) { }

	public static AnalyticsContext ForDailyChallengesEvent(CoreSupportEventId eventId) { }

	public static AnalyticsContext ForDailyScoopClaimReward(DailyScoopEventId eventId, string itemType) { }

	public static AnalyticsContext ForDailyScoopEvent(IStringId eventId) { }

	public static AnalyticsContext ForDailyTasksRefreshPurchase(int purchasesCount) { }

	public static AnalyticsContext ForDailyTasksV2() { }

	public static AnalyticsContext ForDecorationShopPurchase(DecorationShopId decorationShopId, DecorationId decorationId) { }

	public static AnalyticsContext ForDigEvent(string eventId, string boardId) { }

	public static AnalyticsContext ForDigEventCollectionCompleteReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForDigEventLevelReward(IPlayer player, string context, IPlayerReward reward) { }

	public static AnalyticsContext ForDigEventMuseumReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForDiscovery(MergeBoardId mergeBoardId, MergeChainId mergeChainId) { }

	public static AnalyticsContext ForEvent(EventId eventId, EventOfferId target = null, EventLevelId eventLevelId = null, string impressionId = null) { }

	public static AnalyticsContext ForEventExtensionReward(IPlayer player, IStringId eventId, IPlayerReward extensionReward) { }

	public static AnalyticsContext ForEventGenericReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForEventLevelReward(IPlayer player, IStringId eventId, IPlayerReward reward, EventLevelId eventLevelId) { }

	public static AnalyticsContext ForEventTask(MergeBoardId mergeBoard, EventTaskId target = null) { }

	public static AnalyticsContext ForEventTask(EventId eventId, EventTaskId target = null) { }

	public static AnalyticsContext ForFishCaught(IStringId eventId, string itemType) { }

	public static AnalyticsContext ForFlashSale(MergeBoardId mergeBoardId, string target, Nullable<Int32> slotId, string impressionId, string shopItemId = null, string flashSaleContext = "None") { }

	public static AnalyticsContext ForGarageCleanupLevel(GarageCleanupEventId eventId, int level) { }

	public static AnalyticsContext ForGarageCleanupPattern(GarageCleanupEventId eventId, int level, GarageCleanupPatternId patternId) { }

	public static AnalyticsContext ForHotspot(MergeBoardId mergeBoardId, HotspotId target) { }

	public static AnalyticsContext ForIAP(string context, string name, string offerId, string transactionId) { }

	public static AnalyticsContext ForItem(MergeBoardId mergeBoardId, string target = "None", List<String> spawnedItems = null, bool isProducerBoosterActive = false) { }

	public static AnalyticsContext ForItemCreation(IMergeItem createdItem, IMergeMansionGameConfig config) { }

	public static AnalyticsContext ForItemFromInventory(MergeBoardId mergeBoardId, string target) { }

	public static AnalyticsContext ForItemFromPocket(MergeBoardId mergeBoardId, string target) { }

	public static AnalyticsContext ForLeaderboardEventRankingRewards(IPlayer player, LeaderboardEventId eventId, IPlayerReward rankingReward) { }

	public static AnalyticsContext ForLetterOpenedReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForMail(string mailType, string target) { }

	public static AnalyticsContext ForMergeBoard(MergeBoardId mergeBoard) { }

	public static AnalyticsContext ForMinigameCompletion(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForMixABooster(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForMysteryMachineEvent(IStringId eventId) { }

	public static AnalyticsContext ForMysteryMachineEventSpecialSale(IStringId eventId, string itemType) { }

	public static AnalyticsContext ForOffer(string context, MetaOfferId offerId, string impressionId, string flashSaleContext, int slotId = -1) { }

	public static AnalyticsContext ForProgressionEventStreakReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForReEngagement(IPlayer player, ReEngagementSettingsId id, IPlayerReward reward) { }

	public static AnalyticsContext ForRollTheDice(string eventId, string levelId) { }

	public static AnalyticsContext ForRollTheDiceReward(IPlayer player, IStringId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForShortLeaderboardEvent(ShortLeaderboardEventId eventId) { }

	public static AnalyticsContext ForShortLeaderboardEventReward(IPlayer player, ShortLeaderboardEventId eventId, IPlayerReward reward) { }

	public static AnalyticsContext ForSoloMilestoneEvent(IStringId eventId) { }

	public static AnalyticsContext ForWeightStarReward(IPlayer player, IStringId eventId, IPlayerReward reward, string itemType, int starIndex) { }

	public static AnalyticsContext ForWildItemConsume(string hotspotId, string target = "None") { }

	public static AnalyticsContext ForXpMerge(IMergeChainDefinition mergeChain) { }

	[CompilerGenerated]
	public string get_Context() { }

	[CompilerGenerated]
	public string get_FlashSaleContext() { }

	public static AnalyticsContext get_None() { }

	[CompilerGenerated]
	public string get_Target() { }

	public static string GetTargetForEnergyType(EnergyType energyType) { }

	public static string GetTargetForReward(IPlayer player, IPlayerReward reward) { }

	[CompilerGenerated]
	private void set_Context(string value) { }

	[CompilerGenerated]
	private void set_FlashSaleContext(string value) { }

	[CompilerGenerated]
	private void set_Target(string value) { }

}

