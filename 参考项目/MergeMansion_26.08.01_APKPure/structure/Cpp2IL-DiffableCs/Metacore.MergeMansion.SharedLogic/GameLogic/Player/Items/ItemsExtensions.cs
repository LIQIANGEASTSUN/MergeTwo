namespace GameLogic.Player.Items;

[Extension]
public static class ItemsExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ValueTuple`2<IItemDefinition, Int32>, Boolean> <>9__8_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemType", "weight"})]
		public static Func<Int32, Int32, ValueTuple`2<Int32, Int32>> <>9__17_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal ValueTuple<Int32, Int32> <CreateItemTypeWeightPairs>b__17_0(int itemType, int weight) { }

		internal bool <Produces>b__8_0(ValueTuple<IItemDefinition, Int32> entry) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass8_0
	{
		public int totalWeight; //Field offset: 0x10

		public <>c__DisplayClass8_0() { }

		internal ValueTuple<IItemDefinition, F32> <Produces>b__1(ValueTuple<IItemDefinition, Int32> entry) { }

	}

	[CompilerGenerated]
	private sealed class <AllPossibleItemsProduced>d__7 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IItemProducer producer; //Field offset: 0x28
		public IItemProducer <>3__producer; //Field offset: 0x30
		private IMergeMansionGameConfig config; //Field offset: 0x38
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x40
		private IEnumerator<ValueTuple`2<IItemDefinition, Int32>> <>7__wrap1; //Field offset: 0x48

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
		public <AllPossibleItemsProduced>d__7(int <>1__state) { }

		private void <>m__Finally1() { }

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

	[CompilerGenerated]
	private sealed class <Produces>d__6 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IItemProducer producer; //Field offset: 0x28
		public IItemProducer <>3__producer; //Field offset: 0x30
		private IMergeMansionGameConfig config; //Field offset: 0x38
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x40
		private IEnumerator<ValueTuple`2<IItemDefinition, Int32>> <>7__wrap1; //Field offset: 0x48

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
		public <Produces>d__6(int <>1__state) { }

		private void <>m__Finally1() { }

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

	[CompilerGenerated]
	private sealed class <SinkReward>d__9 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private ISinkStateFactory sinkStateFactory; //Field offset: 0x28
		public ISinkStateFactory <>3__sinkStateFactory; //Field offset: 0x30
		private IMergeMansionGameConfig config; //Field offset: 0x38
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x40

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
		public <SinkReward>d__9(int <>1__state) { }

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

	internal class RemainingDurationComparer : IComparer<MergeItem>
	{
		private static readonly IComparer<Nullable`1<MetaDuration>> durationComparer; //Field offset: 0x0
		public static readonly IComparer<MergeItem> Instance; //Field offset: 0x8
		public static readonly IComparer<MergeItem> Inverse; //Field offset: 0x10
		private readonly int correctionQuotient; //Field offset: 0x10

		private static RemainingDurationComparer() { }

		private RemainingDurationComparer(int quotient) { }

		public override int Compare(MergeItem x, MergeItem y) { }

	}


	public static string ExperienceProgressPreviewTextFormat
	{
		 get { } //Length: 64
	}

	public static string ExperienceProgressTextFormat
	{
		 get { } //Length: 64
	}

	[Extension]
	public static bool AllItemsAreUnlocked(IEnumerable<IItemDefinition> itemDefinitions, IPlayer player, bool replaceLockedItemsWithFallbackItems, out IEnumerable<IItemDefinition>& result) { }

	[Extension]
	[IteratorStateMachine(typeof(<AllPossibleItemsProduced>d__7))]
	public static IEnumerable<IItemDefinition> AllPossibleItemsProduced(IItemProducer producer, IMergeMansionGameConfig config) { }

	private static void ApplyChargesOverride(MergeItem mergeItem, OverrideItemFeatures overrideItemFeatures) { }

	private static void ApplyTimeContainerOverride(MergeItem mergeItem, OverrideItemFeatures overrideItemFeatures) { }

	[Extension]
	public static bool CanBeAddedToInventory(MergeItem mergeItem, IPlayer player, MetacoreTime timestamp) { }

	[Extension]
	public static ValueTuple<ActivationState, StorageState> Combine(IActivationFeatures activationFeatures, IActivationFeatures sourceFeatures, ActivationState sourceState, StorageState sourceStorage, IActivationFeatures targetFeatures, ActivationState targetState, StorageState targetStorage, StorageActionType storageAction, MetaTime timestamp) { }

	public static IBoardItem CreateBoardItem(IPlayer player, IItemDefinition itemDefinition, OverrideItemFeatures overrideItemFeatures, MetacoreTime timestamp, MergeBoardId boardId) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<Int32, Int32>> CreateItemTypeWeightPairs(IEnumerable<Int32> itemIds, IEnumerable<Int32> weights) { }

	[Extension]
	public static ValueTuple<ActivationState, StorageState> FromExisting(IActivationFeatures activationFeatures, MetaTime timestamp) { }

	public static string get_ExperienceProgressPreviewTextFormat() { }

	public static string get_ExperienceProgressTextFormat() { }

	[Extension]
	public static int GetDecayAnimationIndex(MergeItem mergeItem) { }

	[Extension]
	public static string GetExperienceProgressPreviewTextFormat(IMergeItem mergeItem) { }

	[Extension]
	public static string GetExperienceProgressText(IMergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static string GetExperienceProgressTextFormat(IMergeItem mergeItem) { }

	[Extension]
	public static GarageCleanupEventModel GetGarageCleanupEventModel(IMergeItem mergeItem, PlayerModel player) { }

	public static ValueTuple<Currencies, Int64> GetItemSellPrice(MergeBoardId mergeBoardId, IItemDefinition itemDefinition, IMergeMansionGameConfig gameConfig) { }

	public static IMergeMechanic GetMergeMechanic(IPlayer player, int itemId) { }

	[Extension]
	public static bool HasProducersOrVariantsInChain(MergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static bool IsProducerOrVariant(MergeItem mergeItem, IPlayer player) { }

	[Extension]
	public static bool OrderItemCompleted(MergeItem mergeItem) { }

	[Extension]
	public static IEnumerable<ValueTuple`2<IItemDefinition, F32>> Produces(ISinkStateFactory sinkStateFactory, IMergeMansionGameConfig config) { }

	[Extension]
	[IteratorStateMachine(typeof(<Produces>d__6))]
	public static IEnumerable<IItemDefinition> Produces(IItemProducer producer, IMergeMansionGameConfig config) { }

	[Extension]
	public static bool ShouldUseProducerInventory(MergeItem mergeItem, IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<SinkReward>d__9))]
	public static IEnumerable<IItemDefinition> SinkReward(ISinkStateFactory sinkStateFactory, IMergeMansionGameConfig config) { }

	private static PlayerReward ToPlayerReward(Currencies currencyType, int amount, CurrencySource source) { }

	public static PlayerReward ToPlayerReward(Currencies currencyType, long amount, CurrencySource source) { }

	public static bool TryGetLeveledUpItem(IPlayer player, IItemDefinition sourceItem, IBoard board, int levelUpCount, out IItemDefinition leveledUpItem) { }

	private static bool TryGetLeveledUpItemByMerging(IPlayer player, IItemDefinition item, IBoard board, int levelUpCount, out IItemDefinition resultItem) { }

	private static bool TryGetLeveledUpItemFromChain(IPlayer player, IItemDefinition item, int levelUpCount, out IItemDefinition resultItem) { }

	[Extension]
	public static bool TryGetPortalPieceChainAnalyticsType(MergeItem item, IPlayer player, out PortalPieceChainAnalyticsType type) { }

}

