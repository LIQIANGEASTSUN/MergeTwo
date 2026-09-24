namespace GameLogic.Player;

[Extension]
public static class PlayerExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ItemDefinition, Boolean> <>9__2_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__45_1; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__46_1; //Field offset: 0x18
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public static Func<ValueTuple`2<Coordinate, MergeItem>, Coordinate> <>9__48_2; //Field offset: 0x20
		public static Func<ItemDefinition, Int32> <>9__52_1; //Field offset: 0x28
		public static Func<ItemDefinition, Int32> <>9__60_1; //Field offset: 0x30
		public static Func<Int32, Boolean> <>9__61_0; //Field offset: 0x38
		public static Func<GameFeatureSetting, Boolean> <>9__62_0; //Field offset: 0x40
		public static Func<PlayerDivisionHistoryEntry, MetaTime> <>9__123_0; //Field offset: 0x48
		public static Func<BoultonLeagueDivisionHistoryEntry, MetaTime> <>9__124_0; //Field offset: 0x50
		public static Comparison<ExtraSpawnInfo> <>9__140_0; //Field offset: 0x58
		public static Func<ItemDef, Int32> <>9__160_0; //Field offset: 0x60
		public static Func<MergeChainDef, MergeChainId> <>9__160_1; //Field offset: 0x68

		private static <>c() { }

		public <>c() { }

		internal int <BuildVisibleItemsExtraLookup>b__160_0(ItemDef d) { }

		internal MergeChainId <BuildVisibleItemsExtraLookup>b__160_1(MergeChainDef d) { }

		internal MetaTime <CalculateAverageHistoricalBoultonLeagueEventScore>b__124_0(BoultonLeagueDivisionHistoryEntry entry) { }

		internal MetaTime <CalculateAverageHistoricalLeaderboardEventScore>b__123_0(PlayerDivisionHistoryEntry entry) { }

		internal int <GetItemIdsBasedOnItemTag>b__60_1(ItemDefinition item) { }

		internal bool <GetItemsWithUnlockRequirements>b__2_0(ItemDefinition item) { }

		internal bool <GetMaxDiscoveredLoveStoryItemType>b__61_0(int item) { }

		internal bool <PersistFeatureUnlocks>b__62_0(GameFeatureSetting feature) { }

		internal Coordinate <RemoveItemsFromBoard>b__48_2(ValueTuple<Coordinate, MergeItem> pair) { }

		internal Coordinate <RemoveItemsFromGarageBoard>b__46_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal Coordinate <RemoveItemsFromGarageBoardV2>b__45_1(ValueTuple<Coordinate, MergeItem> pair) { }

		internal int <RemoveItemsFromInventories>b__52_1(ItemDefinition item) { }

		internal int <ResetAndAddEligibleExtraSpawns>b__140_0(ExtraSpawnInfo a, ExtraSpawnInfo b) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass108_0
	{
		public IItemDefinition definition; //Field offset: 0x0
		public IBoard board; //Field offset: 0x8
		public IPlayer player; //Field offset: 0x10
		public MergeItem item; //Field offset: 0x18

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass131_0
	{
		public IReadOnlyDictionary<PlayerModeId, EnergyModeInfo> energyModes; //Field offset: 0x10

		public <>c__DisplayClass131_0() { }

		internal bool <SetModeActive>b__0(PlayerModeId m) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass141_0
	{
		public IPlayer player; //Field offset: 0x0

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass144_0
	{
		public CoreSupportEventMinigameId minigameId; //Field offset: 0x10

		public <>c__DisplayClass144_0() { }

		internal bool <CreateCoreSupportEventMinigameModel>b__0(KeyValuePair<CoreSupportEventId, CoreSupportEventInfo> kvp) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass157_0
	{
		public PlayerModel playerModel; //Field offset: 0x0
		public EnergyType auxEnergyType; //Field offset: 0x8

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass160_0
	{
		public IPlayer player; //Field offset: 0x0
		public bool anyFilter; //Field offset: 0x8
		public HashSet<Int32> itemIdFilter; //Field offset: 0x10
		public HashSet<MergeChainId> chainIdFilter; //Field offset: 0x18
		public Dictionary<Int32, List`1<MergeItemExtra>> itemIdToItemInstanceLookup; //Field offset: 0x20

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass18_0
	{
		public PlayerModel playerModel; //Field offset: 0x10

		public <>c__DisplayClass18_0() { }

		internal bool <IsCalendarAvailable>b__0(TimedMergeBoard tm) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass34_0
	{
		public IPlayer player; //Field offset: 0x10
		public IItemDefinition definition; //Field offset: 0x18
		public Func<MetaPlayerRewardBase, Boolean> <>9__7; //Field offset: 0x20

		public <>c__DisplayClass34_0() { }

		internal bool <HasItem>b__4(IBoard board) { }

		internal bool <HasItem>b__5(IBoardInventory inventory) { }

		internal bool <HasItem>b__6(IMailMessage mail) { }

		internal bool <HasItem>b__7(MetaPlayerRewardBase reward) { }

		internal bool <HasItem>g__ItemInInbox|3() { }

		internal bool <HasItem>g__ItemInInventory|1() { }

		internal bool <HasItem>g__ItemInPocket|2() { }

		internal bool <HasItem>g__ItemOnAnyBoard|0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass42_0
	{
		public IEnumerable<Int32> items; //Field offset: 0x10

		public <>c__DisplayClass42_0() { }

		internal bool <CollectItemsFromInventories>g__ShouldCollectItem|0(MergeItem item) { }

		internal bool <CollectItemsFromInventories>g__ShouldCollectItemFromChest|1(IItemDefinition item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass43_0
	{
		public PlayerModel player; //Field offset: 0x10
		public List<Int32> itemTypes; //Field offset: 0x18

		public <>c__DisplayClass43_0() { }

		internal bool <CollectItemsFromInventory>g__ShouldCollectItem|0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass44_0
	{
		public PlayerModel player; //Field offset: 0x10
		public IEnumerable<Int32> itemIds; //Field offset: 0x18
		public ICollectionContext context; //Field offset: 0x20
		public MetaTime timestamp; //Field offset: 0x28

		public <>c__DisplayClass44_0() { }

		internal void <CollectItemsFromPocket>g__Removed|1(int itemId) { }

		internal bool <CollectItemsFromPocket>g__ShouldCollectItem|0(int itemId) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass45_0
	{
		public IEnumerable<Int32> itemIds; //Field offset: 0x10

		public <>c__DisplayClass45_0() { }

		internal bool <RemoveItemsFromGarageBoardV2>b__0(ValueTuple<Coordinate, MergeItem> item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass46_0
	{
		public IEnumerable<Int32> itemIds; //Field offset: 0x10

		public <>c__DisplayClass46_0() { }

		internal bool <RemoveItemsFromGarageBoard>b__0(ValueTuple<Coordinate, MergeItem> item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass47_0
	{
		public IEnumerable<Int32> itemIds; //Field offset: 0x10

		public <>c__DisplayClass47_0() { }

		internal bool <RemoveItemsFromGarageBoardAndAddSellAmount>b__0(ValueTuple<Coordinate, MergeItem> item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass48_0
	{
		public MergeBoardId mergeBoardId; //Field offset: 0x10
		public IEnumerable<Int32> itemIds; //Field offset: 0x18

		public <>c__DisplayClass48_0() { }

		internal bool <RemoveItemsFromBoard>b__0(MergeBoard mb) { }

		internal bool <RemoveItemsFromBoard>b__1(ValueTuple<Coordinate, MergeItem> item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass50_0
	{
		public IEnumerable<Int32> items; //Field offset: 0x10
		public Predicate<MergeItem> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass50_0() { }

		internal bool <RemoveItemsFromInventories>b__0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass51_0
	{
		public IEnumerable<Int32> items; //Field offset: 0x10
		public IPlayer player; //Field offset: 0x18
		public Predicate<MergeItem> <>9__0; //Field offset: 0x20
		public Action<MergeItem> <>9__1; //Field offset: 0x28

		public <>c__DisplayClass51_0() { }

		internal bool <RemoveItemsFromInventoriesAndAddSellAmount>b__0(MergeItem item) { }

		internal void <RemoveItemsFromInventoriesAndAddSellAmount>b__1(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass52_0
	{
		public string itemTag; //Field offset: 0x10

		public <>c__DisplayClass52_0() { }

		internal bool <RemoveItemsFromInventories>b__0(ItemDefinition itemDef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass53_0
	{
		public IEnumerable<Int32> items; //Field offset: 0x10
		public Predicate<MergeItem> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass53_0() { }

		internal bool <RemoveItemsFromInventories>b__0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass57_0
	{
		public IEnumerable<Int32> items; //Field offset: 0x10
		public IPlayer player; //Field offset: 0x18
		public Predicate<PlayerReward> <>9__1; //Field offset: 0x20

		public <>c__DisplayClass57_0() { }

		internal bool <RemoveItemsFromMailInbox>b__1(PlayerReward reward) { }

		internal bool <RemoveItemsFromMailInbox>b__2(IItemDefinition p) { }

		internal bool <RemoveItemsFromMailInbox>g__RemoveChest|0(RewardItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass60_0
	{
		public string itemTag; //Field offset: 0x10

		public <>c__DisplayClass60_0() { }

		internal bool <GetItemIdsBasedOnItemTag>b__0(ItemDefinition itemDef) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass63_0
	{
		public IPlayer player; //Field offset: 0x10

		public <>c__DisplayClass63_0() { }

		internal bool <IsOwnedDecorationOffer>b__1(PlayerReward reward) { }

		internal bool <IsOwnedDecorationOffer>g__IsOwnedDecorationReward|0(PlayerReward reward) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass67_0
	{
		public PlayerModel player; //Field offset: 0x0
		public PlayerProgressionEventsModel progressionEventsModel; //Field offset: 0x8

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass74_0
	{
		public string id; //Field offset: 0x10

		public <>c__DisplayClass74_0() { }

		internal bool <IsPendingPopup>b__0(ScriptedEvent e) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass84_0
	{
		public List<AuxEnergyAttachmentChance> result; //Field offset: 0x0

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass89_0
	{
		public OrderedSet<HotspotId> hotspotsCompletedByPlayer; //Field offset: 0x10

		public <>c__DisplayClass89_0() { }

		internal bool <GetAreaCompletedHotspotCount>b__0(IHotspotDefinition hotspot) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass92_0
	{
		public EnergyType auxEnergyType; //Field offset: 0x10

		public <>c__DisplayClass92_0() { }

		internal bool <RemoveAuxEnergyAttachments>g__IsAuxEnergyAttachment|0(IItemAttachment attachment) { }

	}

	[CompilerGenerated]
	private struct <>c__DisplayClass94_0
	{
		public Nullable<MetaDuration> unitRestoreDurationFromEvents; //Field offset: 0x0

	}

	[CompilerGenerated]
	private sealed class <GetActiveUnlockedEventIds>d__141 : IEnumerable<String>, IEnumerable, IEnumerator<String>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private string <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private <>c__DisplayClass141_0 <>8__1; //Field offset: 0x38
		private IEnumerator<IBoardEventModel> <>7__wrap1; //Field offset: 0x40
		private IEnumerator<GarageCleanupEventModel> <>7__wrap2; //Field offset: 0x48
		private IEnumerator<ProgressionEventModel> <>7__wrap3; //Field offset: 0x50
		private IEnumerator<SoloMilestoneEventModel> <>7__wrap4; //Field offset: 0x58
		private IEnumerator<DailyScoopEventModel> <>7__wrap5; //Field offset: 0x60
		private IEnumerator<MiniEventModel> <>7__wrap6; //Field offset: 0x68
		private IEnumerator<TemporaryCardCollectionEventModel> <>7__wrap7; //Field offset: 0x70
		private IEnumerator<CardCollectionSupportingEventModel> <>7__wrap8; //Field offset: 0x78
		private IEnumerator<CoreSupportEventModel> <>7__wrap9; //Field offset: 0x80

		private override string System.Collections.Generic.IEnumerator<System.String>.Current
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
		public <GetActiveUnlockedEventIds>d__141(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

		private void <>m__Finally3() { }

		private void <>m__Finally4() { }

		private void <>m__Finally5() { }

		private void <>m__Finally6() { }

		private void <>m__Finally7() { }

		private void <>m__Finally8() { }

		private void <>m__Finally9() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<String> System.Collections.Generic.IEnumerable<System.String>.GetEnumerator() { }

		[DebuggerHidden]
		private override string System.Collections.Generic.IEnumerator<System.String>.get_Current() { }

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
	private sealed class <GetAllInventories>d__97 : IEnumerable<IBoardInventory>, IEnumerable, IEnumerator<IBoardInventory>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IBoardInventory <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IPlayer player; //Field offset: 0x28
		public IPlayer <>3__player; //Field offset: 0x30
		private int inventoryTypeFlags; //Field offset: 0x38
		public int <>3__inventoryTypeFlags; //Field offset: 0x3C
		private IBoardInventory[] <inventories>5__2; //Field offset: 0x40
		private int <invCount>5__3; //Field offset: 0x48
		private int <i>5__4; //Field offset: 0x4C

		private override IBoardInventory System.Collections.Generic.IEnumerator<GameLogic.Player.IBoardInventory>.Current
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
		public <GetAllInventories>d__97(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IBoardInventory> System.Collections.Generic.IEnumerable<GameLogic.Player.IBoardInventory>.GetEnumerator() { }

		[DebuggerHidden]
		private override IBoardInventory System.Collections.Generic.IEnumerator<GameLogic.Player.IBoardInventory>.get_Current() { }

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
	private sealed class <GetHandlers>d__162 : IEnumerable<IEventModelHandler`1<TEvent>>, IEnumerable, IEnumerator<IEventModelHandler`1<TEvent>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x0
		private IEventModelHandler<TEvent> <>2__current; //Field offset: 0x0
		private int <>l__initialThreadId; //Field offset: 0x0
		private TEvent evt; //Field offset: 0x0
		public TEvent <>3__evt; //Field offset: 0x0

		private override IEventModelHandler<TEvent> System.Collections.Generic.IEnumerator<Metaplay.Core.Player.IEventModelHandler<TEvent>>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 40
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 40
		}

		[DebuggerHidden]
		public <GetHandlers>d__162`1(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IEventModelHandler`1<TEvent>> System.Collections.Generic.IEnumerable<Metaplay.Core.Player.IEventModelHandler<TEvent>>.GetEnumerator() { }

		[DebuggerHidden]
		private override IEventModelHandler<TEvent> System.Collections.Generic.IEnumerator<Metaplay.Core.Player.IEventModelHandler<TEvent>>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private static readonly string GET_ALL_INVENTORIES_ASSERT_MESSAGE; //Field offset: 0x0

	private static PlayerExtensions() { }

	[CompilerGenerated]
	internal static void <BuildVisibleItemsExtraLookup>g__TryAdd|160_2(IMergeItem mergeItem, ref <>c__DisplayClass160_0 unnamed_param_1) { }

	[CompilerGenerated]
	internal static bool <CanUseEnergyModeForItemInBoard>g__IsInInitialSequence|108_0(ref <>c__DisplayClass108_0 unnamed_param_0) { }

	[CompilerGenerated]
	internal static bool <GetActiveUnlockedEventIds>g__MatchesUnlockRequirement|141_0(PlayerRequirement requirement, ref <>c__DisplayClass141_0 unnamed_param_1) { }

	[CompilerGenerated]
	internal static void <GetAuxEnergyUnitRestoreDuration>g__CheckAssignUnitRestoreDuration|94_0(Nullable<MetaDuration> eventUnitRestoreDurationMaybe, ref <>c__DisplayClass94_0 unnamed_param_1) { }

	[CompilerGenerated]
	internal static void <GetEligibleAuxEnergyAttachmentChances>g__Add|84_0(EnergyType type, int chance, int amount, ref <>c__DisplayClass84_0 unnamed_param_3) { }

	[CompilerGenerated]
	internal static IReadOnlyList<ProgressionEventModel> <GetProgressionEventExtraInventoryData>g__GetProgressionEventModels|67_0(ref <>c__DisplayClass67_0 unnamed_param_0) { }

	[CompilerGenerated]
	internal static bool <HasAuxEnergyEventActiveAndUnlocked>g__Matches|157_0(Option<IBoardEventModel> eventModelOption, ref <>c__DisplayClass157_0 unnamed_param_1) { }

	[Extension]
	public static IPlayerModifier AddInfiniteEnergy(IPlayer playerModel, MetaDuration duration) { }

	[Extension]
	public static bool AddItemToInventory(IPlayer player, MergeItem itemToAdd, MetaTime timestamp) { }

	[Extension]
	public static bool AnyVisibleTaskRequiresItem(IPlayer player, int item) { }

	[Extension]
	public static bool ArtifactsEnabled(IPlayer player) { }

	[Extension]
	public static Dictionary<Int32, List`1<MergeItemExtra>> BuildVisibleItemsExtraLookup(IPlayer player, IReadOnlyList<ItemDef> itemDefs = null, IReadOnlyList<MergeChainDef> mergeChainDefs = null) { }

	[Extension]
	public static int CalculateAverageHistoricalBoultonLeagueEventScore(PlayerModel playerModel) { }

	[Extension]
	public static int CalculateAverageHistoricalLeaderboardEventScore(PlayerModel playerModel) { }

	[Extension]
	public static bool CanBubblesAppear(IPlayer playerModel) { }

	[Extension]
	public static bool CanPotentiallyUnlockArea(IPlayer player, IAreaInfo area) { }

	[Extension]
	private static bool CanSetEnergyModeActiveOnMergeBoard(IPlayer playerModel, IBoard board, BoardInfo boardInfo, EnergyModeInfo energyModeInfo) { }

	[Extension]
	public static bool CanUseEnergyModeForItemInBoard(IPlayer player, MergeItem item, IBoard board) { }

	[Extension]
	public static void CollectAllCollectablesFromBoard(PlayerModel player, MergeBoard board, CurrencySource currencySource, bool notifyClient = true) { }

	[Extension]
	public static void CollectItemsFromBoardRemoveInBubble(PlayerModel player, IEnumerable<Int32> items, CurrencySource currencySource) { }

	[Extension]
	public static void CollectItemsFromInventories(PlayerModel player, IEnumerable<Int32> items, ICollectionContext context) { }

	[Extension]
	public static void CollectItemsFromInventory(PlayerModel player, MergeBoardId boardId, List<Int32> itemTypes, ICollectionContext context) { }

	[Extension]
	public static void CollectItemsFromPocket(PlayerModel player, MergeBoardId boardId, IEnumerable<Int32> itemIds, ICollectionContext context) { }

	[Extension]
	public static ICoreSupportEventMinigameModel CreateCoreSupportEventMinigameModel(IPlayer player, CoreSupportEventType eventType, CoreSupportEventMinigameId minigameId, CoreSupportEventId eventId) { }

	[Extension]
	public static void DispatchEvent(IPlayer model, TEvent evt) { }

	[Extension]
	public static bool FeatureInPreview(IPlayer player, GameFeatureId featureId) { }

	[Extension]
	public static bool FeatureUnlocked(IPlayer player, GameFeatureId featureId) { }

	[Extension]
	public static IItemDefinition FirstItemInPocket(IPlayer playerModel, MergeBoardId boardId, IBoardEventModel boardEvent) { }

	[Extension]
	public static int GetActivationCost(IPlayer player, IItemDefinition item) { }

	[Extension]
	public static ActivationCostData GetActivationCostData(IPlayer player, IBoard board, MergeItem mergeItem) { }

	[Extension]
	public static Option<ICoreSupportEventModel> GetActiveCoreSupportEvent(IPlayer player, CoreSupportEventType eventType) { }

	[Extension]
	public static Option<ICoreSupportEventModel> GetActiveCoreSupportEventForPortalItem(IPlayer player, IItemDefinition portalItem) { }

	[Extension]
	public static Option<EnergyModeInfo> GetActiveEnergyModeOnBoard(IPlayer player, MergeBoardId boardId) { }

	[Extension]
	public static MysteryMachineEventModel GetActiveOrPreviousMysteryMachineEvent(PlayerModel player) { }

	[Extension]
	public static PetInfo GetActivePetInfo(IPlayer player) { }

	[Extension]
	private static Option<List`1<SoloMilestoneEventModel>> GetActiveSoloMilestoneEvents(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetActiveUnlockedEventIds>d__141))]
	public static IEnumerable<String> GetActiveUnlockedEventIds(IPlayer player) { }

	[Extension]
	[IteratorStateMachine(typeof(<GetAllInventories>d__97))]
	public static IEnumerable<IBoardInventory> GetAllInventories(IPlayer player, int inventoryTypeFlags = 7) { }

	[Extension]
	public static int GetAllInventories(IPlayer player, Span<IBoardInventory> results, int inventoryTypeFlags = 7) { }

	[Extension]
	public static Option<List`1<IPlayerReward>> GetAllMailMessageRewards(IPlayer player) { }

	[Extension]
	public static int GetAreaCompletedHotspotCount(IPlayer player, IAreaInfo area) { }

	[Extension]
	public static float GetAreaProgress(PlayerModel player, AreaInfo area) { }

	[Extension]
	public static float GetAreaProgress(IPlayer player, IAreaInfo area) { }

	[Extension]
	public static bool GetAutoMergeGatedInitialEnabledState(IPlayer player) { }

	[Extension]
	public static AuxEnergyAttachmentChance GetAuxEnergyItemAttachmentChance(PlayerModel player, MergeBoardId mergeBoardId, int activationCost) { }

	[Extension]
	public static Nullable<MetaDuration> GetAuxEnergyUnitRestoreDuration(IPlayer player, EnergyType energyType) { }

	[Extension]
	public static ProgressionEventPerkContext GetAvailableShopItemPerkContext(IPlayer player, ShopItemId shopItemId) { }

	[Extension]
	public static EnergyType GetBoardEventEnergyType(IPlayer player, IBoardEventModel boardEventModel) { }

	[Extension]
	public static Option<CoreSupportEventModel> GetCoreSupportEventForToken(IPlayer player, CoreSupportEventTokenId tokenId) { }

	[Extension]
	public static Option<CoreSupportEventInfo> GetCoreSupportEventInfoForToken(IPlayer player, CoreSupportEventTokenId tokenId) { }

	[Extension]
	public static int GetDaysFromEpoch(IPlayer player) { }

	[Extension]
	public static ActivationCostData GetDefaultActivationCostData(IPlayer player, IBoard board, IItemDefinition itemDefinition) { }

	private static Option<List`1<AuxEnergyAttachmentChance>> GetEligibleAuxEnergyAttachmentChances(PlayerModel player, StatsTrackingType statsTrackingType, int resourcesUsed) { }

	[Extension]
	public static int GetEligibleEnergyModesForBoard(IPlayer player, IBoard board, EnergyModeInfo[] resultBuffer) { }

	[Extension]
	public static Option<List`1<ExtraSpawnInfo>> GetEligibleExtraSpawns(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption) { }

	[Extension]
	public static EnergyType GetEnergyTypeForBoard(IPlayer player, MergeBoardId mergeBoardId) { }

	[Extension]
	public static MetaDuration GetEnergyUnitRestoreDuration(IPlayer player) { }

	[Extension]
	public static MetaTime GetEstimatedInfiniteEnergyEndTime(IPlayer playerModel) { }

	[Extension]
	public static F32 GetExtraSpawnCardStackValue(IPlayer player, CardStackId cardStackId, TId id) { }

	[Extension]
	public static F32 GetExtraSpawnCurrencyValue(IPlayer player, Currencies currency, TId id) { }

	[Extension]
	public static F32 GetExtraSpawnIllustrationValue(IPlayer player, CustomHotspotTableId illustrationId, TId id) { }

	[Extension]
	public static F32 GetExtraSpawnItemValue(IPlayer player, Option<IItemDefinition> itemOption, TId id) { }

	[Extension]
	public static int GetFirstCardDeckOnBoard(IPlayer player, MergeBoard board, bool areBubbleItemsAllowed = false) { }

	[Extension]
	public static int GetFishingRodActivationCost(IPlayer player) { }

	[Extension]
	public static ValueTuple<Currencies, Int32> GetFlashSaleResetPrice(IPlayer player, OfferPlacementId placementId) { }

	[IteratorStateMachine(typeof(<GetHandlers>d__162`1))]
	private static IEnumerable<IEventModelHandler`1<TEvent>> GetHandlers(TEvent evt) { }

	[Extension]
	public static int GetHashCodeWithSalt(EntityId entityId, string segmentSalt) { }

	[Extension]
	public static ValueTuple<Nullable`1<EnergyType>, Int64> GetHotspotCompletionBonusAmount(PlayerModel player, HotspotDefinition hotspotDefinition) { }

	[Extension]
	public static ValueTuple<Nullable`1<EnergyType>, Int64> GetHotspotCompletionExpBonusAmount(PlayerModel player, HotspotDefinition hotspotDefinition) { }

	[Extension]
	public static IBoardInventory GetInventory(IPlayer player, MergeBoardId boardId, int typeFlag) { }

	[Extension]
	public static IEnumerable<Int32> GetItemIdsBasedOnItemTag(IPlayer player, string itemTag) { }

	[Extension]
	public static IEnumerable<IItemDefinition> GetItemsWithUnlockRequirements(IPlayer player, Type filterRequirement = null) { }

	[Extension]
	public static ILevelEventModel GetLevelEventModel(PlayerModel playerModel, string eventId) { }

	[Extension]
	public static int GetMaxDiscoveredLoveStoryItemType(PlayerModel playerModel) { }

	[Extension]
	public static F64 GetMoneySpentInLastNDays(IPlayer player, int n) { }

	[Extension]
	public static int GetNumberOfInventorySlotsRequiredToUnlockProducerInventory(PlayerModel playerModel) { }

	[Extension]
	public static ValueTuple<ProgressionEventModel, ProgressionEventExtraInventorySlotsPerk, IBoardInventory> GetProgressionEventExtraInventoryData(PlayerModel player) { }

	[Extension]
	public static ProgressionPackEventInfo GetProgressionPackObjectiveData(IPlayer player, string objectiveId) { }

	[Extension]
	private static Option<SoloMilestoneEventModel> GetRandomActiveSoloMilestoneEvent(IPlayer player) { }

	[Extension]
	public static ValueTuple<Nullable`1<EnergyType>, Int32, Int32> GetSoloMilestoneTokenBonusChance(IPlayer player, StatsTrackingType trackingType, int resourcesUsed) { }

	[Extension]
	public static DailyScoopSpecialObjectiveData GetSpecialDailyScoopObjectiveData(IPlayer player, string objectiveId) { }

	[Extension]
	public static SpeedUpBehavior GetSpeedUpBehavior(IPlayer player) { }

	[Extension]
	public static DailyScoopStandardObjectiveData GetStandardDailyScoopObjectiveData(IPlayer player, string objectiveId) { }

	[Extension]
	public static F32 GetValueInRange(IPlayer player, F32 min, F32 max) { }

	[Extension]
	public static int GetValueInRange(IPlayer player, int min, int max) { }

	[Extension]
	public static void GrantAutoMergeDuration(IPlayer player, MetacoreTime startTime, MetacoreDuration duration, AutoMergeSource source) { }

	[Extension]
	public static void HandleExtraSpawns(PlayerModel player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, AnalyticsContext analyticsContext, ICollection<MergeBoardAct> collectedActs) { }

	[Extension]
	public static void HandleExtraSpawnsFromCompleteDailyTaskV2(PlayerModel player, int requiredItem, AnalyticsContext analyticsContext) { }

	[Extension]
	public static void HandleExtraSpawnsFromProduceItem(PlayerModel player, IExtraSpawnTrigger trigger, MergeBoard board, Coordinate coordinate, AnalyticsContext analyticsContext, ICollection<MergeBoardAct> collectedActs) { }

	[Extension]
	public static void HandleShortLeaderboardEventStuckJoining(PlayerModel playerModel) { }

	[Extension]
	public static bool HasActionableProducerInventorySlots(PlayerModel playerModel) { }

	[Extension]
	public static bool HasActiveUnlockedProgressionEvent(IPlayer player) { }

	[Extension]
	public static bool HasAnyEnergyModeEventActive(PlayerModel player) { }

	[Extension]
	public static bool HasAnyOfBoardEventsNowOrInFuture(IPlayer player, List<String> eventIds) { }

	[Extension]
	public static bool HasAuxEnergyEventActiveAndUnlocked(PlayerModel playerModel, EnergyType auxEnergyType) { }

	[Extension]
	public static bool HasCompletedAllRequirements(IPlayer player, IEnumerable<PlayerRequirement> requirements) { }

	[Extension]
	public static bool HasEnergyModeActiveOnBoard(IPlayer player, MergeBoardId boardId) { }

	[Extension]
	public static bool HasEnergyModeEventActive(PlayerModel player, PlayerModeId modeId) { }

	[Extension]
	public static bool HasEnteredMergeBoardForGarageCleanupEvent(PlayerModel playerModel, MergeBoardId mergeBoardId) { }

	[Extension]
	public static bool HasEventOffer(IPlayer player, EventOfferInfo eventOffer) { }

	[Extension]
	public static bool HasInfiniteDailyTasksV2(IPlayer player) { }

	[Extension]
	public static bool HasInfiniteEnergy(IPlayer playerModel) { }

	[Extension]
	public static bool HasItem(IPlayer player, IItemDefinition definition) { }

	[Extension]
	public static bool HasName(PlayerModel player) { }

	[Extension]
	public static IPlayerModifier InfiniteEnergyModifier(IPlayer playerModel) { }

	[Extension]
	public static bool IsAnimatedDialogueTextEnabled(IPlayer playerModel) { }

	[Extension]
	public static bool IsBoardEnergyModeAllowed(IPlayer player, MergeBoardId mergeBoardId) { }

	[Extension]
	public static bool IsCalendarAvailable(PlayerModel playerModel) { }

	[Extension]
	public static bool IsCodexAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsCurrencyBankAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsDailyTasksAvailable(IPlayer playerModel, out int outVersion) { }

	[Extension]
	public static bool IsInboxAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsInSegment(IPlayer player, PlayerSegmentId segmentId) { }

	[Extension]
	public static bool IsInSegmentorSegment(IPlayer player, string segmentId) { }

	[Extension]
	public static bool IsInSegmentorTag(IPlayer player, string tagId) { }

	[Extension]
	public static bool IsInventoryAtMaxSlots(IPlayer playerModel, IBoardInventory inventory) { }

	[Extension]
	public static bool IsInventoryAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsOwnedDecorationOffer(IPlayer player, EventOfferInfo eventOffer) { }

	[Extension]
	public static bool IsPendingPopup(PlayerModel playerModel, string id) { }

	[Extension]
	public static bool IsProducerInventoryAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsProducerInventoryLocked(PlayerModel playerModel) { }

	[Extension]
	public static bool IsRentableInventoryEnabled(IPlayer playerModel) { }

	[Extension]
	public static bool IsRewardEligibleForSoloMilestoneTokens(IPlayer player, List<Int32> energyAttachmentFlashSaleParameters, PlayerReward reward) { }

	[Extension]
	public static bool IsShopAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsShopOffersAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsSinkItemTooltipEnalbed(IPlayer playerModel) { }

	public static bool IsSMETokenRollSuccessful(IPlayer player, ValueTuple<Nullable`1<EnergyType>, Int32, Int32> soloMilestoneTokenBonusChance) { }

	[Extension]
	public static bool IsSoloMilestoneEventActive(IPlayer player, out SoloMilestoneEventModel soloMilestoneEventModel) { }

	[Extension]
	public static bool IsTodoAvailable(IPlayer playerModel) { }

	[Extension]
	public static bool IsWebShopAvailable(IPlayer playerModel) { }

	[Extension]
	public static int ItemCountInAllSources(IPlayer player, int itemId, Span<MergeBoard> boards, Span<IBoardInventory> inventories, Option<List`1<IPlayerReward>> rewardsOption) { }

	[Extension]
	public static int ItemCountInAllSources(IPlayer player, int item) { }

	private static int ItemCountInInventories(int itemId, Span<IBoardInventory> inventories) { }

	private static int ItemCountInRewards(int itemId, List<IPlayerReward> rewards) { }

	[Extension]
	private static int ItemCountOnBoards(IPlayer player, int itemId, Span<MergeBoard> boards) { }

	[Extension]
	public static bool ItemNeededBadgeEnabled(IPlayer playerModel) { }

	[Extension]
	public static bool MatchesHotspotRequirements(IPlayer player, IHotspotDefinition hotspotDefinition) { }

	[Extension]
	private static bool MeetsMergeChainLevel(IPlayer player, IItemDefinition itemDefinition, int levelOffset = 0) { }

	[Extension]
	public static bool MeetsMergeChainLevelForDisplay(IPlayer player, IItemDefinition itemDefinition) { }

	[Extension]
	public static bool MeetsMergeChainLevelForMerge(IPlayer player, IMergeItem item) { }

	[Extension]
	public static void PersistFeatureUnlocks(IPlayer player, bool executePersistAction) { }

	[Extension]
	public static void RemoveAuxEnergyAttachments(PlayerModel playerModel, EnergyType auxEnergyType) { }

	[Extension]
	public static void RemoveBubbleAuxEnergyBonuses(PlayerModel playerModel, EnergyType energyType) { }

	[Extension]
	public static void RemoveItemsFromBoard(IPlayer player, MergeBoardId mergeBoardId, string itemTag) { }

	[Extension]
	public static void RemoveItemsFromBoard(IPlayer player, MergeBoardId mergeBoardId, IEnumerable<Int32> itemIds) { }

	[Extension]
	public static void RemoveItemsFromGarageBoard(PlayerModel playerModel, IEnumerable<Int32> itemIds) { }

	[Extension]
	public static void RemoveItemsFromGarageBoardAndAddSellAmount(PlayerModel playerModel, IEnumerable<Int32> itemIds) { }

	[Extension]
	public static void RemoveItemsFromGarageBoardV2(PlayerModel playerModel, IEnumerable<Int32> itemIds) { }

	[Extension]
	public static void RemoveItemsFromInventories(PlayerModel player, IEnumerable<Int32> items, Action<MergeItem> onRemoved) { }

	[Extension]
	public static void RemoveItemsFromInventories(IPlayer player, string itemTag) { }

	[Extension]
	public static void RemoveItemsFromInventories(IPlayer player, IEnumerable<Int32> items) { }

	[Extension]
	public static void RemoveItemsFromInventoriesAndAddSellAmount(IPlayer player, IEnumerable<Int32> items) { }

	[Extension]
	public static void RemoveItemsFromMailInbox(IPlayer player, string itemTag) { }

	[Extension]
	public static void RemoveItemsFromMailInbox(IPlayer player, IEnumerable<Int32> items) { }

	[Extension]
	public static void RemoveItemsFromPockets(IPlayer player, string itemTag) { }

	[Extension]
	public static void RemoveItemsFromPockets(IPlayer player, IEnumerable<Int32> items) { }

	[Extension]
	public static void RemoveItemsFromPocketsAndAddSellAmount(PlayerModel playerModel, IEnumerable<Int32> itemIds) { }

	[Extension]
	public static void ResetAndAddEligibleExtraSpawns(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, List<ExtraSpawnInfo> outputEligibleExtraSpawns, Dictionary<CoreSupportEventExtraSpawnGroupId, ValueTuple`2<ExtraSpawnInfo, CoreSupportEventSegmentFeature`1<CoreSupportEventExtraSpawnGroupId>>> tmpSegmentMatchPass) { }

	[Extension]
	public static void ResetAuxEnergy(IPlayer player, EnergyType energyType) { }

	[Extension]
	public static void ResetCoreSupportEventProgress(PlayerModel playerModel, CoreSupportEventModel eventModel) { }

	private static void ResetDigEventData(PlayerModel playerModel) { }

	private static void ResetRollTheDiceData(PlayerModel playerModel) { }

	[Extension]
	public static void ServerSideEnsureRandomsByFishingRodType(IPlayer player) { }

	[Extension]
	public static void SetEnergyModeActiveForAllEligibleMergeBoards(PlayerModel playerModel, EnergyModeInfo energyModeInfo, bool triggerAnalytics) { }

	[Extension]
	public static void SetModeActive(IPlayer player, MergeBoardId boardId, PlayerModeId modeId, bool active, bool triggerAnalytics) { }

	[Extension]
	public static bool ShouldEnableMergeItemFlashSaleBuyButton(IPlayer player) { }

	[Extension]
	public static bool TryGetActiveBoardFishingEventModel(PlayerModel playerModel, out CollectibleBoardEventModel activeFishingEvents) { }

	[Extension]
	public static IBoardEventModel TryGetBoardEventState(PlayerModel player, string eventId) { }

	private static Option<ActivationCostData> TryGetEnergyModeActivationCostData(IPlayer player, IMergeItem item, int activationCost, EnergyType energyType, EnergyModeInfo energyMode) { }

	private static Option<ActivationCostData> TryGetEnergyModeActivationCostDataWithFallbacks(IPlayer player, IBoard board, IMergeItem item, int activationCost, EnergyType energyType, EnergyModeInfo energyMode) { }

	[Extension]
	public static Option<ProgressionTrackInfo> TryGetProgressionTrackInfoForEvent(IPlayer player, string eventId) { }

	[Extension]
	public static void UsePerk(IPlayer player, ProgressionEventPerkContext perkContext) { }

	[Extension]
	public static IEnumerable<HotspotDefinition> VisibleHotspots(IPlayer player) { }

}

