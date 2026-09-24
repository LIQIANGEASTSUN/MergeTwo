namespace GameLogic.Player.Items;

[Extension]
public static class ItemDefinitionExtensions
{
	[CompilerGenerated]
	private sealed class <GetActivationSpawnItems>d__58 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private IItemDefinition itemDefinition; //Field offset: 0x38
		public IItemDefinition <>3__itemDefinition; //Field offset: 0x40
		private IBoard board; //Field offset: 0x48
		public IBoard <>3__board; //Field offset: 0x50
		private IMergeItem relatedMergeItem; //Field offset: 0x58
		public IMergeItem <>3__relatedMergeItem; //Field offset: 0x60
		private IEnumerator<IItemDefinition> <>7__wrap1; //Field offset: 0x68
		private IEnumerator<OrderStateReward> <>7__wrap2; //Field offset: 0x70

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
		public <GetActivationSpawnItems>d__58(int <>1__state) { }

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

	private static readonly F32 oddsMin; //Field offset: 0x0
	private static readonly F32 oddsMax; //Field offset: 0x4

	private static ItemDefinitionExtensions() { }

	[Extension]
	private static void AddProduces(IItemDefinition producer, IMergeMansionGameConfig gameConfig, HashSet<IItemDefinition> outputProducedItems) { }

	[Extension]
	public static bool AllItemsAreDiscovered(IEnumerable<IItemDefinition> itemDefinitions, IPlayer player) { }

	[Extension]
	public static bool AllItemsAreDiscovered(IEnumerable<IItemDefinition> itemDefinitions, IPlayer player, out List<IItemDefinition>& result) { }

	[Extension]
	public static bool AlwaysShowCanBeFoundIn(IItemDefinition itemDefinition) { }

	[Extension]
	public static XpState CombineExperience(IItemDefinition itemDefinition, XpState sourceState, XpState targetState) { }

	[Extension]
	public static bool DontShowSourcesInInfoPopup(IItemDefinition itemDefinition) { }

	[Extension]
	public static MetaDuration GetActivationCycleDelay(IItemDefinition itemDefinition, IPlayer player, CycleInfo cycleInfo) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetActivationSpawnItems>d__58))]
	public static IEnumerable<IItemDefinition> GetActivationSpawnItems(IItemDefinition itemDefinition, IPlayer player, IMergeItem relatedMergeItem, IBoard board) { }

	[Extension]
	public static int GetActivationStorageMax(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static int GetBaseExperienceValue(IItemDefinition itemDefinition) { }

	[Extension]
	public static ValueTuple<Currencies, Int32> GetBubbleOpenCost(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static PlayerReward GetCollectibleCurrencyAsReward(IItemDefinition itemToCollect) { }

	[Extension]
	public static int GetCollectibleItemCollectValue(IItemDefinition itemDefinition) { }

	[Extension]
	public static int GetExperienceRequired(IItemDefinition itemDefinition) { }

	[Extension]
	public static MetaDuration GetFirstActivationCycleDelay(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static MetaDuration GetFirstSpawnCycleDelay(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static IItemDefinition GetMergeChainFirstArtifact(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static int GetMergeChainFirstArtifactLevel(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static IMergeMechanic GetMergeMechanic(IItemDefinition itemDefinition) { }

	[Extension]
	public static IEnumerable<MergeReward> GetMergeRewards(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static PlayerReward GetRewardFromItemToSell(IItemDefinition itemToSell, SharedGlobals sharedGlobals) { }

	[Extension]
	public static MetaDuration GetSpawnCycleDelay(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static int GetSpawnStorageMax(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static int GetSpeedUpItemsPerCycle(IItemDefinition itemDefinition, IPlayer player, CycleInfo cycleInfo) { }

	[Extension]
	public static int GetTotalExperience(IItemDefinition itemDefinition) { }

	[Extension]
	public static int GetTotalExperienceRequired(IItemDefinition itemDefinition) { }

	[Extension]
	public static int GetUnlockedActivationSpawnItemCount(IItemDefinition itemDefinition, IMergeItem relatedMergeItem, IPlayer player) { }

	[Extension]
	public static bool HasDynamicDescription(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool HasTransformCollectAction(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool HasUnlockedActivationSpawnItems(IItemDefinition itemDefinition, IMergeItem relatedMergeItem, IPlayer player) { }

	[Extension]
	public static bool IsActivationItem(IItemDefinition item) { }

	[Extension]
	public static bool IsArtifactItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsBoosterAcceleratedDecayingItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsBoosterItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsBoosterShardItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsBoosterThatIsActive(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsBox(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsBoxOrChest(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsCardPack(IItemDefinition itemDefinition, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsChargeSupportingItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsChestContainingCardCollectionRewards(IItemDefinition itemDefinition, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsCoinItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsDecayingItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsDiamondItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsEnergyItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsEventProgressItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsExperienceItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsGarageCleanupEventProducer(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsInfiniteEnergyItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsInformantTip(IItemDefinition itemDefinition, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool IsItemUnlockedAndAvailable(IItemDefinition itemDefinition, IPlayer player, IItemContext itemContext = null) { }

	[Extension]
	public static bool IsLevelUpItem(IItemDefinition item) { }

	[Extension]
	public static bool IsPiggyBankItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsPreserveRatioItem(IItemDefinition item) { }

	[Extension]
	public static bool IsPreserveRatioItemMergeResult(IItemDefinition item, IPlayer player) { }

	[Extension]
	public static bool IsProducerOrVariant(IItemDefinition itemDefinition, IPlayer player) { }

	[Extension]
	public static bool IsScissorItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsTimeSkipBoosterShardItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsTimeSkipItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool IsTimeStorageItem(IItemDefinition itemDefinition) { }

	[Extension]
	public static int LevelNumberToAmountOfLevel1Items(IItemDefinition itemDefinition) { }

	[Extension]
	public static int OddsToSpawnBubble(IItemDefinition itemDefinition, int presentMaxLevelItemsCount, IPlayer player) { }

	[Extension]
	public static ItemVisibility ProductionVisibility(IItemDefinition definition) { }

	[Extension]
	public static void ResetAndAddProduces(IItemDefinition producer, IMergeMansionGameConfig gameConfig, HashSet<IItemDefinition> outputProducedItems) { }

	[Extension]
	public static bool ShouldIgnoreEnergyMode(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool ShouldUseAutomaticDescription(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool StartsAsDiscovered(IItemDefinition itemDefinition) { }

	[Extension]
	public static bool TryGetMergeResultItem(IItemDefinition itemDefinition, IMergeMansionGameConfig config, out IItemDefinition result) { }

	[Extension]
	public static bool TryGetUnlockedMergeResultItem(IItemDefinition itemDefinition, IPlayer player, out IItemDefinition result) { }

}

