//Type is in global namespace

public static class MasterFunctions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, IEnumerable`1<Int32>> <>9__0_0; //Field offset: 0x8
		public static Func<Int32, IEnumerable`1<Int32>> <>9__2_0; //Field offset: 0x10
		public static Func<Int32, IEnumerable`1<Int32>> <>9__13_0; //Field offset: 0x18
		public static Func<Int32, IEnumerable`1<Int32>> <>9__17_0; //Field offset: 0x20
		public static Func<ValueTuple`2<Coordinate, MergeItem>, MergeItem> <>9__20_4; //Field offset: 0x28
		public static Func<MergeItem, MergeItem> <>9__20_5; //Field offset: 0x30
		public static Comparison<DailyTaskV2Info> <>9__104_0; //Field offset: 0x38

		private static <>c() { }

		public <>c() { }

		internal IEnumerable<Int32> <AllItemsCanBeFoundFromBoards>b__0_0(int item) { }

		internal IEnumerable<Int32> <AllItemsCanBeFoundFromBoardsOrInventories>b__2_0(int item) { }

		internal IEnumerable<Int32> <RemoveItemsFromBoards>b__13_0(int item) { }

		internal IEnumerable<Int32> <RemoveItemsFromBoardsAndInventories>b__17_0(int item) { }

		internal MergeItem <RemoveItemsFromBoardsAndInventories>b__20_4(ValueTuple<Coordinate, MergeItem> pair) { }

		internal MergeItem <RemoveItemsFromBoardsAndInventories>b__20_5(MergeItem item) { }

		internal int <StartNewDailyTasksV2>b__104_0(DailyTaskV2Info t1, DailyTaskV2Info t2) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass100_0
	{
		public PlayerModel playerModel; //Field offset: 0x10

		public <>c__DisplayClass100_0() { }

		internal bool <RollNewDailyTasks>b__0(DailyTaskState taskState) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass101_0
	{
		public PlayerModel playerModel; //Field offset: 0x10

		public <>c__DisplayClass101_0() { }

		internal bool <RollPurchasedDailyTasks>b__0(DailyTaskState taskState) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass11_0
	{
		public IPlayer player; //Field offset: 0x10
		public IEnumerable<Int32> itemIds; //Field offset: 0x18

		public <>c__DisplayClass11_0() { }

		internal int <CountVisibleItemTypesInBoardsAndInventories>b__0(IBoard mb) { }

		internal int <CountVisibleItemTypesInBoardsAndInventories>b__1(IBoardInventory bi) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass12_0
	{
		public IEnumerable<Int32> itemTypes; //Field offset: 0x10

		public <>c__DisplayClass12_0() { }

		internal int <CountVisibleItemTypes>b__0(IBoardInventory mb) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass20_0
	{
		public IEnumerable<IItemDefinition> items; //Field offset: 0x10

		public <>c__DisplayClass20_0() { }

		internal bool <RemoveItemsFromBoardsAndInventories>g__ItemInventoryMatch|1(MergeItem instance) { }

		internal bool <RemoveItemsFromBoardsAndInventories>g__ItemMatch|0(MergeItem instance) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass20_1
	{
		public MergeItem instance; //Field offset: 0x10

		public <>c__DisplayClass20_1() { }

		internal bool <RemoveItemsFromBoardsAndInventories>b__2(IItemDefinition item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass20_2
	{
		public MergeItem instance; //Field offset: 0x10

		public <>c__DisplayClass20_2() { }

		internal bool <RemoveItemsFromBoardsAndInventories>b__3(IItemDefinition item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass29_0
	{
		public CollectionContext collectionContext; //Field offset: 0x10
		public MetacoreTime currentTime; //Field offset: 0x18
		public IEnumerable<Int32> itemsToCollect; //Field offset: 0x20

		public <>c__DisplayClass29_0() { }

		internal bool <TryToCollectItemFromChestOnBoard>g__CanBeCollected|0(IItemDefinition def) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass31_0
	{
		public IItemDefinition itemToSell; //Field offset: 0x10
		public Wallet wallet; //Field offset: 0x18
		public IPlayer player; //Field offset: 0x20
		public SharedGlobals sharedGlobals; //Field offset: 0x28

		public <>c__DisplayClass31_0() { }

		internal bool <SellItemFromAllInventories>g__ItemInventoryMatch|0(MergeItem instance) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass31_1
	{
		public IBoardInventory inventory; //Field offset: 0x10
		public <>c__DisplayClass31_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass31_1() { }

		internal void <SellItemFromAllInventories>b__1(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass32_0
	{
		public PlayerModel player; //Field offset: 0x10
		public MergeBoardId boardId; //Field offset: 0x18
		public List<Int32> itemsToSell; //Field offset: 0x20
		public Wallet wallet; //Field offset: 0x28
		public SharedGlobals sharedGlobals; //Field offset: 0x30
		public Action<MergeItem> <>9__1; //Field offset: 0x38

		public <>c__DisplayClass32_0() { }

		internal void <SellItemsFromBoardInventory>b__1(MergeItem removedItem) { }

		internal bool <SellItemsFromBoardInventory>g__ItemInventoryMatch|0(MergeItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass33_0
	{
		public IItemDefinition itemToSell; //Field offset: 0x10
		public Wallet wallet; //Field offset: 0x18
		public IPlayer player; //Field offset: 0x20
		public SharedGlobals sharedGlobals; //Field offset: 0x28
		public MergeBoardId mergeBoardId; //Field offset: 0x30

		public <>c__DisplayClass33_0() { }

		internal void <SellItemFromPocket>b__1(int item) { }

		internal bool <SellItemFromPocket>g__ItemPocketMatch|0(int itemId) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass34_0
	{
		public IPlayer player; //Field offset: 0x10
		public List<Int32> itemsToSell; //Field offset: 0x18
		public SharedGlobals sharedGlobals; //Field offset: 0x20
		public Wallet wallet; //Field offset: 0x28
		public MergeBoardId mergeBoardId; //Field offset: 0x30

		public <>c__DisplayClass34_0() { }

		internal bool <SellItemsFromPocket>g__ItemPocketMatch|0(int itemId) { }

		internal void <SellItemsFromPocket>g__ItemRemoved|1(int itemId) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass38_0
	{
		public MergeBoardId boardId; //Field offset: 0x10

		public <>c__DisplayClass38_0() { }

		internal bool <TryToUndoSellItem>b__0(IBoardEventModel ev) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass64_0
	{
		public PlayerModel playerModel; //Field offset: 0x10
		public HotspotDefinition hotspotDefinition; //Field offset: 0x18

		public <>c__DisplayClass64_0() { }

		internal void <TryToCompleteHotspot>b__0(PlayerReward r) { }

		internal void <TryToCompleteHotspot>b__1(PlayerReward r) { }

		internal void <TryToCompleteHotspot>b__2(PlayerReward r) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass8_0
	{
		public IPlayer player; //Field offset: 0x10
		public IEnumerable<Int32> itemTypes; //Field offset: 0x18

		public <>c__DisplayClass8_0() { }

		internal int <CountVisibleItemTypes>b__0(IBoard mb) { }

	}

	private struct SimultaneousMultistepTaskProgress : IComparable<SimultaneousMultistepTaskProgress>
	{
		public HotspotDefinition Hotspot; //Field offset: 0x0
		public int Completed; //Field offset: 0x8
		public int Total; //Field offset: 0xC

		public override int CompareTo(SimultaneousMultistepTaskProgress other) { }

	}


	public static void AddSpawnAmountToAllItems(IPlayer player, IItemDefinition itemDefinition, int cycles) { }

	public static bool AllAreaUnlockHotspotTeasingRequirementsCompleted(IHotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static bool AllHotspotUnlockingParentsCompleted(IHotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static bool AllItemsCanBeFoundFromBoards(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, Int32[] items, Int32[] amounts) { }

	public static bool AllItemsCanBeFoundFromBoards(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<Int32>[] items, Int32[] amounts) { }

	public static bool AllItemsCanBeFoundFromBoardsOrInventories(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, Int32[] items, Int32[] amounts, out bool isUsingInventorySink) { }

	public static bool AllItemsCanBeFoundFromBoardsOrInventories(IPlayer player, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, Span<IEnumerable`1<Int32>> items, Span<Int32> amounts, out bool isUsingInventorySink) { }

	public static bool AllItemsCanBeFoundFromBoardsOrInventories(IPlayer player, IReadOnlyCollection<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IEnumerable<ValueTuple`2<IEnumerable`1<IItemDefinition>, Int32>> quantities, out bool isUsingInventorySink) { }

	public static int AvailablePlayerLevelUpsCount(PlayerModel playerModel) { }

	public static bool CanAreaBeMarkedCompleted(PlayerModel player, IAreaInfo area) { }

	public static bool CanAreaBeMarkedCompleted(PlayerModel player, AreaId areaId) { }

	public static bool CanHotspotBeVisible(IHotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static bool CanItemBeMovedFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IEnumerable<IBoardInventory> inventories, MetacoreTime currentTime) { }

	public static bool CanMoveItemFromInventoryToBoard(IBoardInventory inventory, int itemIndex, MergeBoard board) { }

	public static bool CanPlayerLevelUp(PlayerModel playerModel) { }

	public static bool CanUnlockAreaHotspotBeCompleted(IHotspotDefinition hotspotDefinition, IPlayer player) { }

	public static HotspotCompletionAttempt CheckIfHotspotCanBeCompleted(HotspotId hotspotId, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IPlayer playerModel) { }

	public static HotspotMakeHiddenAttempt CheckIfHotspotCanBeHidden(HotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static HotspotMakeVisibleAttempt CheckIfHotspotCanBeMadeVisible(IHotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static HotspotCompletionAttempt CheckIfHotspotCanBePartiallyCompleted(HotspotId hotspotId, IReadOnlyCollection<IBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IPlayer playerModel) { }

	public static void CheckSoloMilestoneProgress(PlayerModel player, SoloMilestoneEventModel activeSoloMilestoneEvent) { }

	public static void CheckSoloMilestoneProgressAndSendAnalytics(PlayerModel player, SoloMilestoneEventModel activeSoloMilestoneEvent, ValueTuple<Nullable`1<EnergyType>, Int32, Int32> itemActivationBonusChance, string itemName, string spawnSource, IShopItem mergeItem = null) { }

	public static void CleanupEmptyRentableInventorySlots(PlayerModel player) { }

	public static void ClearAllPlayerSteps(PlayerModel player) { }

	public static void CompletePlayerStep(PlayerModel player, PlayerStep playerStep) { }

	public static int CountVisibleItemTypes(IEnumerable<IBoardInventory> inventories, IEnumerable<Int32> itemTypes) { }

	public static int CountVisibleItemTypes(IPlayer player, IEnumerable<IBoard> mergeBoards, int itemId) { }

	public static int CountVisibleItemTypes(IPlayer player, IEnumerable<IBoard> mergeBoards, IEnumerable<Int32> itemTypes) { }

	public static int CountVisibleItemTypesInBoardsAndInventories(IPlayer player, IEnumerable<IBoard> mergeBoards, IEnumerable<IBoardInventory> inventories, int itemId) { }

	public static int CountVisibleItemTypesInBoardsAndInventories(IPlayer player, IBoard mergeBoard, IEnumerable<IBoardInventory> inventories, int itemId) { }

	public static int CountVisibleItemTypesInBoardsAndInventories(IPlayer player, IEnumerable<IBoard> mergeBoards, IEnumerable<IBoardInventory> inventories, IEnumerable<Int32> itemIds) { }

	public static void DismissBubble(MergeBoard board, PlayerModel player, Coordinate bubbleCoordinate, MergeItem mergeItem) { }

	public static void DoPlayerLevelUp(PlayerModel playerModel) { }

	public static void ExecuteSuccessfulInAppPurchase(PlayerModel player, InAppProductInfo productInfo, string offerId, string transactionId) { }

	public static void ExpireRentableInventory(PlayerModel player) { }

	private static CurrencySink GetCurrencySinkForEnergyType(EnergyType energyType) { }

	public static ValueTuple<Int32, Int32> GetHotspotGroupCompletion(IEnumerable<HotspotDefinition> hotspots, IPlayer playerModel) { }

	public static ValueTuple<Int32, Int32> GetMultistepGroupCompletion(MultistepGroupId multistepGroupId, IPlayer playerModel) { }

	public static float GetMultistepGroupCompletionPercentage(MultistepGroupId multistepGroupId, IPlayer playerModel) { }

	public static List<HotspotDefinition> GetMultistepGroupHotspots(MultistepGroupId multistepGroupId, IPlayer playerModel, bool allowOnlyUncompleted = false, bool allowOnlyVisible = false) { }

	public static HotspotDefinition[] GetMultistepGroupHotspotsInOrder(MultistepGroupId multistepGroupId, IPlayer playerModel) { }

	public static IHotspotDefinition GetNextMultistepGroupHotspot(IHotspotDefinition currentHotspotDefinition, IPlayer playerModel, bool allowOnlyUncompleted = false) { }

	public static HotspotDefinition GetNextMultistepGroupHotspot(MultistepGroupId multistepGroupId, HotspotId currentHotspotId, IPlayer playerModel, bool allowOnlyUncompleted = false) { }

	public static Option<HotspotDefinition> GetNextSimultaneousMultistepGroupHotspot(MultistepGroupId multistepGroupId, IPlayer playerModel, bool allowOnlyUncompleted = false) { }

	public static IHotspotDefinition GetPreviousMultistepGroupHotspot(IHotspotDefinition hotspotDef, IPlayer playerModel) { }

	private static HotspotDefinition[] GetSimultaneousMultistepTasksOrderedByProgress(List<HotspotDefinition> multistepTasks, IPlayer player) { }

	public static HotspotDefinition[] GetSimultaneousMultistepTasksOrderedByProgress(MultistepGroupId multistepGroupId, IPlayer playerModel, bool allowOnlyUncompleted = false, bool allowOnlyVisible = false) { }

	public static int GetUnlockAreaHotspotLevel(IHotspotDefinition unlockAreaHotspot, IPlayer playerModel) { }

	private static PlayerLevelRequirement GetUnlockAreaHotspotLevelRequirement(IHotspotDefinition unlockAreaHotspot, IPlayer playerModel) { }

	public static List<IAreaInfo> GetUnlockedAreas(IPlayer player, bool allowCompletedAreas = false) { }

	private static void HandleHotspotCompletionBonus(PlayerModel playerModel, HotspotDefinition hotspotDefinition, MetacoreTime currentTime) { }

	public static bool HasNextMultistepTaskInGroup(HotspotId hotspotId, IPlayer playerModel, bool allowOnlyUncompleted = false) { }

	public static bool HasNextMultistepTaskInGroup(HotspotDefinition hotspotDef, IPlayer playerModel, bool allowOnlyUncompleted = false) { }

	public static bool HasPlayerSeenItem(int item, ProgressState progressState) { }

	public static bool HasVisibleItemType(IPlayer player, int itemId, int amount) { }

	public static bool HasVisibleItemTypes(IPlayer player, IEnumerable<Int32> itemIds, int requiredAmount, bool includeEvents = true, int inventoryTypeFlags = 7) { }

	public static void InputWantedDailyTaskItem(PlayerModel player, DailyTaskState taskStatus, MergeBoard mainMergeBoard) { }

	public static bool IsAreaUnlocked(IPlayer player, IAreaInfo area) { }

	public static bool IsFirstUncompletedMultistepHotspot(IHotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static bool IsMultistepGroupFinalTaskAvailable(MultistepGroupId multistepGroupId, IPlayer playerModel) { }

	public static bool IsSimultaneousMultistepGroup(MultistepGroupId multistepGroupId, IPlayer playerModel) { }

	private static bool IsSimultaneousMultistepGroup(List<HotspotDefinition> multistepTasks, IPlayer playerModel) { }

	public static bool IsValidHotspotForReEngagement(PlayerModel player, HotspotId hotspotId) { }

	public static void MarkAreaCompleted(PlayerModel player, IAreaInfo area) { }

	public static void MarkAreaCompletedAndConsumeRewards(PlayerModel player, IAreaInfo area) { }

	public static void OnSpawnItem(PlayerModel playerModel, MergeBoard board, MergeItem spawner, Coordinate spawnerPosition, IEnumerable<MergeBoardAct> boardActs, bool skipEnergyUsage) { }

	public static bool PassesMultistepVisibilityValidation(IHotspotDefinition hotspotDefinition, IPlayer playerModel) { }

	public static void PauseAllBoardItems(MergeBoard mergeBoard) { }

	public static void ProcessSoloMilestoneProgressForAnalytics(PlayerModel player, SoloMilestoneEventModel activeEvent, ValueTuple<Nullable`1<EnergyType>, Int32, Int32> itemActivationBonusChance, string itemName, string spawnSource, IShopItem mergeItem = null) { }

	public static void PurchaseRentableInventoryBatch(PlayerModel player, RentableInventorySettings settings, int amountToAdd) { }

	public static bool RefreshDailyTaskV2(PlayerModel player, int taskIndex, bool logEnabled) { }

	public static void RemoveItemFromBoardAndInventories(IPlayer player, MergeBoard board, IEnumerable<IBoardInventory> inventories, int itemId, MetacoreTime timestamp) { }

	public static void RemoveItemsFromBoards(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<Int32>[] items, Int32[] amounts, MetaTime currentTime) { }

	public static void RemoveItemsFromBoards(IPlayer player, IEnumerable<MergeBoard> mergeBoards, Int32[] items, Int32[] amounts, MetaTime currentTime) { }

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, Int32[] items, Int32[] amounts, MetacoreTime currentTime) { }

	private static void RemoveItemsFromBoardsAndInventories(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, int item, int amount, MetacoreTime currentTime) { }

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IReadOnlyCollection<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IEnumerable<ValueTuple`2<IEnumerable`1<IItemDefinition>, Int32>> quantities, IComparer<MergeItem> preference, MetacoreTime timestamp) { }

	public static void RemoveItemsFromBoardsAndInventories(IPlayer player, IEnumerable<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IEnumerable<Int32>[] items, Int32[] amounts, MetacoreTime currentTime) { }

	public static void ResolveDailyTaskV2Step(PlayerModel player, int taskIndex, bool logEnabled, bool hasInfiniteTasks) { }

	public static void RollNewDailyTasks(PlayerModel playerModel, bool clearOldTasks = false) { }

	public static void RollPurchasedDailyTasks(PlayerModel playerModel) { }

	private static void RunDailyTasksV2TaskGeneratorAlgorithm(PlayerModel player, int taskIndex, bool logEnabled, bool isRefresh = false) { }

	public static void SellItemFromAllInventories(IPlayer player, IItemDefinition itemToSell) { }

	public static void SellItemFromPocket(IPlayer player, MergeBoardId mergeBoardId, IItemDefinition itemToSell) { }

	public static void SellItemsFromBoardInventory(PlayerModel player, MergeBoardId boardId, List<Int32> itemsToSell) { }

	public static void SellItemsFromPocket(IPlayer player, MergeBoardId mergeBoardId, List<Int32> itemsToSell) { }

	public static void SetItemsDiscoveredBasedOnBoardAct(IPlayer player, MergeBoardAct act, MergeBoard board, ProgressState progressState) { }

	public static void SetItemsDiscoveredBasedOnBoardActs(IPlayer player, IEnumerable<MergeBoardAct> boardActs, MergeBoard board, ProgressState progressState) { }

	public static void SetRelevantItemsDiscoveredForItemOnBoard(IPlayer player, MergeBoard mergeBoard, IMergeItem itemOnBoard, ProgressState progressState) { }

	private static void SkipGameTime(MetaDuration numMillisecondToSkip, PlayerModel player, MergeBoardId boardId) { }

	public static void SkipGameTimeDebug(MetaDuration numMillisecondToSkip, PlayerModel player) { }

	public static void StartNewDailyTasks(List<DailyTaskDefinition> tasks, PlayerModel playerModel, bool clearOldTasks = false) { }

	public static void StartNewDailyTasksV2(PlayerModel player, bool logEnabled) { }

	public static bool TryResolveDailyTasksV2Completion(PlayerModel player) { }

	public static bool TryStepDailyTaskV2(PlayerModel player, int taskIndex, bool logEnabled) { }

	public static ValueTuple<CurrencyUsageResult, Currencies, Int64> TryToBuyEnergy(IPlayer playerModel, EnergyItem energyItem, AnalyticsContext context) { }

	public static ValueTuple<Boolean, Currencies, Int64> TryToBuyExtraInventorySlot(IBoardInventory boardInventory, int inventoryTypeFlag, IPlayer playerModel) { }

	public static bool TryToCollectItemFromBoard(MergeBoard mergeBoard, MergeItem itemToCollect, Coordinate collectCoordinate, PlayerModel player, MetacoreTime currentTime, CurrencySource currencySource, ICollection<MergeBoardAct> collectedActs) { }

	[Obsolete("Use the overload with MetacoreTime instead")]
	public static bool TryToCollectItemFromBoard(MergeBoard mergeBoard, MergeItem itemToCollect, Coordinate collectCoordinate, PlayerModel player, MetaTime currentTime, CurrencySource currencySource, ICollection<MergeBoardAct> collectedActs) { }

	public static void TryToCollectItemFromChestOnBoard(MergeBoard mergeBoard, MergeItem chestItem, IEnumerable<Int32> itemsToCollect, Coordinate collectCoordinate, PlayerModel player, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs) { }

	public static bool TryToCompleteHotspot(HotspotDefinition hotspotDefinition, PlayerModel playerModel, bool giveBonusReward = false) { }

	public static ValueTuple<CurrencyUsageResult, Currencies, Int64> TryToFastOpenChest(IPlayer player, MergeItem chest, MetacoreTime currentTime, MergeBoardId boardId) { }

	public static bool TryToForceCompleteHotspot(HotspotDefinition hotspotDefinition, PlayerModel playerModel) { }

	public static bool TryToMakeDirectorControlledItemActivable(MergeBoard board, Coordinate coord, MetacoreTime currentTime, bool isPaused, ICollection<MergeBoardAct> collectedActs, IPlayer player) { }

	public static bool TryToMoveItemFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IBoardInventory inventory, MetacoreTime currentTime) { }

	public static bool TryToMoveItemFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IEnumerable<IBoardInventory> inventories, MetacoreTime currentTime) { }

	public static bool TryToMoveItemFromBoardToRentableInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, BoardInventory inventory, MetacoreTime currentTime) { }

	public static bool TryToMoveItemFromInventoryToBoard(MergeBoard mergeBoard, IBoardInventory bi, int itemIndex, MetacoreTime timestamp, IGenerationContext generationContext, IPlayer player, bool shouldAddMergeAct = false) { }

	public static void TryToMoveItemsFromRentableInventoryToBoard(PlayerModel player) { }

	private static bool TryToMoveStackItemFromBoardToInventory(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, IBoardInventory[] boardInventories, MetacoreTime currentTime) { }

	public static void TryToRemoveItemFromBoard(IPlayer player, MergeBoard mergeBoard, Coordinate coordinate, MetacoreTime currentTime, ICollection<MergeBoardAct> acts) { }

	public static bool TryToRollNewDailyTasks(PlayerModel playerModel) { }

	public static void TryToSellItemFromBoard(MergeBoard mergeBoard, MergeItem itemToSell, Coordinate sellCoordinate, PlayerModel player, MetacoreTime currentTime, CurrencySource currencySource, ICollection<MergeBoardAct> collectedActs, bool checkTagRestriction) { }

	public static void TryToSpeedUpItemOnBoard(IPlayer player, IGenerationContext context, MergeBoard mergeBoard, MergeItem itemToSpeedUp, Coordinate speedUpCoordinate, MetacoreTime currentTime, MetacoreDuration duration, ICollection<MergeBoardAct> collectedActs) { }

	public static void TryToSpeedUpItemOnBoard(IPlayer player, IGenerationContext context, MergeBoard mergeBoard, MergeItem itemToSpeedUp, Coordinate speedUpCoordinate, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs) { }

	public static void TryToUndoSellItem(PlayerModel player, MergeBoard mergeBoard, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs) { }

	public static bool TryToUnlockProducerInventorySlot(ProducerInventorySlotConfig producerInventorySlot, IPlayer player, bool commit) { }

	public static bool TryToUseRequirements(IPlayer player, IReadOnlyCollection<MergeBoard> mergeBoards, IEnumerable<IBoardInventory> boardInventories, IReadOnlyCollection<ValueTuple`2<IEnumerable`1<IItemDefinition>, Int32>> requirements, IComparer<MergeItem> preference, MetacoreTime currentTime) { }

	public static void UnpauseAllBoardItems(MergeBoard mergeBoard) { }

	public static bool UseAreaGlobalRequirements(PlayerModel playerModel) { }

}

