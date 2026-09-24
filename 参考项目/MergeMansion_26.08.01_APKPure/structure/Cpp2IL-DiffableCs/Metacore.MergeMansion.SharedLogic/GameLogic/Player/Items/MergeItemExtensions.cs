namespace GameLogic.Player.Items;

[Extension]
public static class MergeItemExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<String> <>9__46_0; //Field offset: 0x8
		public static Func<ValueTuple`2<IItemDefinition, Int32>, IItemDefinition> <>9__109_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal IItemDefinition <FillChestWithLoot>b__109_0(ValueTuple<IItemDefinition, Int32> element) { }

		internal bool <IsProducerSellable>b__46_0(string tag) { }

	}

	[CompilerGenerated]
	private sealed class <GetSpawnItems>d__81 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IMergeItem mergeItem; //Field offset: 0x38
		public IMergeItem <>3__mergeItem; //Field offset: 0x40
		private IBoard board; //Field offset: 0x48
		public IBoard <>3__board; //Field offset: 0x50
		private IMergeMansionGameConfig <config>5__2; //Field offset: 0x58
		private IEnumerator<IItemDefinition> <>7__wrap2; //Field offset: 0x60
		private IEnumerator<OrderStateReward> <>7__wrap3; //Field offset: 0x68

		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <GetSpawnItems>d__81(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IItemDefinition> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.IItemDefinition>.GetEnumerator() { }

		[DebuggerHidden]
		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private const string HotspotTagKey = "FinishHotspotID"; //Field offset: 0x0

	[Extension]
	public static bool ActivatedWithNoCost(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	private static bool AllowCooldownRemover(IMergeItem item, IPlayer player) { }

	[Extension]
	private static bool AllowOnFire(IMergeItem item, IPlayer player) { }

	[Extension]
	public static bool AllowRemovingCooldown(IMergeItem item, IPlayer player, bool boardHasCooldownRemoverState, bool boardHasOnFireState) { }

	[Extension]
	public static BubbleState BubbleStateMaybe(IMergeItem mergeItem) { }

	[Extension]
	private static int CalculateSameProducerTypes(IMergeItem item, IEnumerable<MergeItem> mergeItems, IPlayer player) { }

	[Extension]
	public static bool CanBeActivated(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static bool CanBeActivatedWithCapacityConsumption(IMergeItem mergeItem, IPlayer player, int capacityConsumption) { }

	[Extension]
	public static bool CanBeOpened(IMergeItem mergeItem) { }

	[Extension]
	public static bool CanBeSold(IMergeItem mergeItem, IPlayer player, IBoard board, bool checkTagRestriction = false) { }

	[Extension]
	public static bool CanBeSold(IMergeItem mergeItem, IPlayer player, MergeBoardId boardId) { }

	[Extension]
	public static bool CanBeSpedUpWithBooster(IMergeItem item, MetacoreTime currentTime, IPlayer player, IBoard board) { }

	[Extension]
	public static bool CanBeSpedUpWithGems(IMergeItem mergeItem, IPlayer player, IBoard board) { }

	[Extension]
	public static bool CanBeUnlocked(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool CanNotBeSpedUp(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool CanSpawn(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static int ConsumeCharges(IMergeItem item, int quantity) { }

	[Extension]
	public static MetacoreDuration ConsumeTime(IMergeItem item, MetacoreDuration duration) { }

	[Extension]
	public static bool DecayOnActivation(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static void DoConsumeAction(IMergeItem item, IPlayer player, MergeBoard mergeBoard, MergeItem itemToModify, Coordinate itemPosition, MetacoreTime timestamp, ICollection<MergeBoardAct> mergeBoardActs) { }

	[Extension]
	public static IConsumptionCheckResult DoesConsumeWorkWithItem(IMergeItem item, IPlayer player, MergeItem itemToCheck, IBoard mergeBoard, MetacoreTime currentTime) { }

	[Extension]
	public static void FillChestWithLoot(IMergeItem item, IPlayer player, IBoard board) { }

	[Extension]
	public static void FillChestWithLoot(IMergeItem item, IPlayer player, IGenerationContext generationContext, IBoard board) { }

	[Extension]
	public static void ForceCompleteChestCountdown(IMergeItem item) { }

	[Extension]
	public static MetacoreDuration GetAge(IMergeItem item, MetacoreTime now) { }

	[Extension]
	public static int GetBaseExperienceValue(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static MetacoreTime GetBubbleEndTime(IMergeItem mergeItem) { }

	[Extension]
	public static ValueTuple<Currencies, Int32> GetBubbleOpenCost(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static IItemDefinition GetBubbleReplacementItem(IMergeItem item, IPlayer player) { }

	[Extension]
	public static IMergeChainDefinition GetChain(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static MergeChainId GetChainId(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static MetacoreTime GetChestEstimatedOpeningTime(IMergeItem mergeItem) { }

	[Extension]
	public static MetaDuration GetChestOpenDuration(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static Nullable<MetacoreDuration> GetCurrentActivationStateDuration(IMergeItem mergeItem, IPlayer player, MetacoreTime timestamp) { }

	[Extension]
	public static int GetCurrentAmountInActivationStorage(IMergeItem item) { }

	[Extension]
	public static Option<MetacoreDuration> GetCurrentSpawnStateDuration(IMergeItem mergeItem, IPlayer player, MetacoreTime timestamp) { }

	[Extension]
	public static Nullable<MetaTime> GetEstimatedLifeEndTime(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static int GetExperience(IMergeItem mergeItem) { }

	[Extension]
	public static int GetExperienceAfterMerge(IMergeItem mergeItem, IMergeItem fromItem, IPlayer player) { }

	[Extension]
	public static float GetExperienceProgress(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static float GetExperienceProgressAfterMerge(IMergeItem mergeItem, IMergeItem fromItem, IPlayer player) { }

	[Extension]
	public static int GetExperienceRequired(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static ValueTuple<Currencies, Int32> GetFastOpenCost(IMergeItem mergeItem, MetacoreTime timestamp, IPlayer player) { }

	[Extension]
	public static IItemEffectFeatures GetItemActivationEffects(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static int GetItemLevel(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static int GetLevelAfterMerge(IMergeItem mergeItem, IMergeItem fromItem, IMergeMansionGameConfig gameConfig, IPlayer player) { }

	[Extension]
	public static Nullable<MetaDuration> GetLifetime(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static IEnumerable<MergeReward> GetMergeRewards(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static Nullable<MetaTime> GetNextEstimatedActivationStorageFillStep(IMergeItem mergeItem) { }

	[Extension]
	public static IItemDefinition GetOneLoot(IMergeItem item, IPlayer player) { }

	[Extension]
	public static OrderPhase GetOrderPhase(IMergeItem item, IMergeMansionGameConfig config) { }

	[Extension]
	public static Nullable<MetacoreDuration> GetRemainingDuration(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static ISinkState GetSinkState(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetSpawnItems>d__81))]
	public static IEnumerable<IItemDefinition> GetSpawnItems(IMergeItem mergeItem, IPlayer player, IBoard board) { }

	[Extension]
	public static ValueTuple<Currencies, Int32> GetSpeedUpCost(IMergeItem mergeItem, IGenerationContext context, MetacoreTime currentTimestamp, IPlayer player) { }

	private static int GetSpeedUpCost34(SpeedUpCostBehavior speedUpCostBehavior, MetaDuration durationToStorageFillStep) { }

	[Extension]
	public static int GetTotalExperience(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static int GetTotalExperienceRequired(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static string GetType(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static string GetUniqueId(IMergeItem mergeItem) { }

	[Extension]
	public static bool HasActivationMiniGame(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool HasActivationVfx(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool HasItemInfiniteEnergy(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool HasPersistentState(IMergeItem mergeItem) { }

	[Extension]
	public static bool HasUnlockedSpawnItems(IMergeItem mergeItem, IPlayer player, IBoard board) { }

	[Extension]
	public static bool HideSinkUndiscoveredItemsInHints(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static Nullable<MetaDuration> HowFarIsNextActivationStorageFillStep(IMergeItem mergeItem, MetacoreTime timestamp) { }

	[Extension]
	public static Option<MetaDuration> HowFarIsNextSpawnStorageFillStep(IMergeItem mergeItem, MetacoreTime timestamp) { }

	[Extension]
	public static Nullable<MetacoreDuration> InfiniteEnergyDuration(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsActivableOrder(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsActivationItem(IMergeItem item, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsActivationStorageFull(IMergeItem item, IPlayer player) { }

	[Extension]
	public static bool IsChest(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsCollectable(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static bool IsConfirmableMergeResult(IMergeItem mergeItem, MergeResult mergeResult, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsDecayableOrder(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsItemDecayable(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsItemDecayableWithBoosterAcceleration(IMergeItem item, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsItemSupportingCharges(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsItemTimeStorage(IMergeItem item, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsLargeItem2x2(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsLevelUpItem(IMergeItem item, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsNonAllowCooldownRemoverActivationItem(IMergeItem item, IMergeMansionGameConfig gameConfig) { }

	[Extension]
	public static bool IsOnSpawnCycleDelay(IMergeItem mergeItem) { }

	[Extension]
	public static bool IsOpening(IMergeItem mergeItem, MetacoreTime currentTime, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsPortal(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static bool IsPreserveRatioItem(IMergeItem item, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsPreserveRatioItemMergeResult(IMergeItem item, IPlayer player) { }

	private static bool IsProducerSellable(IMergeItem mergeItem, IBoard board, IPlayer player) { }

	[Extension]
	public static bool IsReadyForOpen(IMergeItem mergeItem, MetacoreTime currentTime) { }

	[Extension]
	public static bool IsSink(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsSinkableOrder(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsSinkCompleted(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsSpawnableOrder(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static void PauseAllActions(IMergeItem item) { }

	[Extension]
	public static void SetWeight(IMergeItem item, F32 weight, WeightCategory weightCategory, int rodItem) { }

	[Extension]
	public static bool ShouldDisableDecayAnimations(IMergeItem mergeItem) { }

	[Extension]
	public static bool ShouldLogMerge(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool ShowTutorialFingerOnDiscovery(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	[Obsolete("use the version with MetacoreTime instead")]
	public static void StartChestOpen(IMergeItem item, MetaTime currentTime, IPlayer player) { }

	[Extension]
	public static void StartChestOpen(IMergeItem item, MetacoreTime currentTime, IPlayer player) { }

	[Extension]
	public static bool SupportsActivation(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool SupportsFishingRodTap(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool SupportsMerge(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool SupportsSpawning(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static TakeItemFromChestResult TakeItemFromChest(IMergeItem item, IMergeMansionGameConfig config) { }

	public static bool TryGetTransformsIntoBooster(IMergeItem mergeItem, IPlayer player, out IItemDefinition itemDefinition) { }

	[Extension]
	public static void TryRemoveCooldown(IMergeItem item, IPlayer player, bool boardHasCooldownRemoverState, bool boardHasOnFireState) { }

	[Extension]
	public static ValueTuple<Currencies, Int32> UnlockValue(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static void UnpauseAllActions(IMergeItem item) { }

	[Extension]
	public static bool UseCalendarBasedCycle(IMergeItem mergeItem, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool VisibilityAllowsMerge(IMergeItem mergeItem) { }

}

