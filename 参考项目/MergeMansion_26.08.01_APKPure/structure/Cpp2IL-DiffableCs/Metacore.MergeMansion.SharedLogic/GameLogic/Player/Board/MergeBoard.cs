namespace GameLogic.Player.Board;

[DefaultMember("Item")]
[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {4})]
[MetaSerializable]
public sealed class MergeBoard : IBoard, IBoardQuery
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, Int32, Coordinate> <>9__82_1; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal Coordinate <get_Coordinates>b__82_1(int y, int x) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass121_0
	{
		public IPlayer player; //Field offset: 0x10
		public IItemDefinition itemDefinition; //Field offset: 0x18

		public <>c__DisplayClass121_0() { }

		internal bool <AddSpawnAmountToAllItems>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass155_0
	{
		public Predicate<MergeItem> matcher; //Field offset: 0x10
		public MergeBoard <>4__this; //Field offset: 0x18
		public IPlayer player; //Field offset: 0x20
		public MetacoreTime replacementTimestamp; //Field offset: 0x28
		public IItemDefinition replacementItem; //Field offset: 0x30
		public IGenerationContext generationContext; //Field offset: 0x38

		public <>c__DisplayClass155_0() { }

		internal bool <ReplaceItems>b__0(ValueTuple<Coordinate, MergeItem> position) { }

		internal MergeBoardAct <ReplaceItems>b__1(ValueTuple<Coordinate, MergeItem> position) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass156_0
	{
		public Predicate<MergeItem> matcher; //Field offset: 0x10
		public MetacoreTime sellTimestamp; //Field offset: 0x18
		public IPlayer player; //Field offset: 0x20

		public <>c__DisplayClass156_0() { }

		internal bool <EnqueueAutoSellItemsFromBoard>b__0(ValueTuple<Coordinate, MergeItem> position) { }

		internal MergeBoardAct <EnqueueAutoSellItemsFromBoard>b__1(ValueTuple<Coordinate, MergeItem> position) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass166_0
	{
		public IEnumerable<Int32> itemIds; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public Func<ValueTuple`2<Coordinate, MergeItem>, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass166_0() { }

		internal bool <FindAndRemoveFirstVisibleItemOfCertainType>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass167_0
	{
		public IEnumerable<Int32> itemIds; //Field offset: 0x10
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Coordinate", "Item"})]
		public Func<ValueTuple`2<Coordinate, MergeItem>, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass167_0() { }

		internal bool <FindAndRemoveFirstVisibleItemOfCertainType>b__0(ValueTuple<Coordinate, MergeItem> pair) { }

	}

	[CompilerGenerated]
	private sealed class <get_Items>d__91 : IEnumerable<ValueTuple`2<Coordinate, MergeItem>>, IEnumerable, IEnumerator<ValueTuple`2<Coordinate, MergeItem>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<Coordinate, MergeItem> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public MergeBoard <>4__this; //Field offset: 0x30
		private int <y>5__2; //Field offset: 0x38
		private int <x>5__3; //Field offset: 0x3C

		private override ValueTuple<Coordinate, MergeItem> System.Collections.Generic.IEnumerator<(GameLogic.Player.Board.Coordinate,GameLogic.Player.Items.MergeItem)>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 12
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 92
		}

		[DebuggerHidden]
		public <get_Items>d__91(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`2<Coordinate, MergeItem>> System.Collections.Generic.IEnumerable<(GameLogic.Player.Board.Coordinate,GameLogic.Player.Items.MergeItem)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<Coordinate, MergeItem> System.Collections.Generic.IEnumerator<(GameLogic.Player.Board.Coordinate,GameLogic.Player.Items.MergeItem)>.get_Current() { }

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
	private sealed class <ManualSpawnMultipleItemsToBoard>d__112 : IEnumerable<MergeBoardAct>, IEnumerable, IEnumerator<MergeBoardAct>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeBoardAct <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x68
		private IEnumerable<Coordinate> coordinates; //Field offset: 0x70
		public IEnumerable<Coordinate> <>3__coordinates; //Field offset: 0x78
		private int howManyToSpawn; //Field offset: 0x80
		public int <>3__howManyToSpawn; //Field offset: 0x84
		public MergeBoard <>4__this; //Field offset: 0x88
		private IPlayer player; //Field offset: 0x90
		public IPlayer <>3__player; //Field offset: 0x98
		private IItemDefinition definition; //Field offset: 0xA0
		public IItemDefinition <>3__definition; //Field offset: 0xA8
		private IGenerationContext generationContext; //Field offset: 0xB0
		public IGenerationContext <>3__generationContext; //Field offset: 0xB8
		private MetacoreTime timeForActivation; //Field offset: 0xC0
		public MetacoreTime <>3__timeForActivation; //Field offset: 0xC8
		private ItemVisibility spawnVisibility; //Field offset: 0xD0
		public ItemVisibility <>3__spawnVisibility; //Field offset: 0xD4
		private AuxEnergyAttachmentChance auxEnergyAttachmentChance; //Field offset: 0xD8
		public AuxEnergyAttachmentChance <>3__auxEnergyAttachmentChance; //Field offset: 0xE0
		private Coordinate spawnerCoordinate; //Field offset: 0xE8
		public Coordinate <>3__spawnerCoordinate; //Field offset: 0xF0
		private IEnumerator<Coordinate> <>7__wrap1; //Field offset: 0xF8

		private override MergeBoardAct System.Collections.Generic.IEnumerator<GameLogic.Merge.MergeBoardAct>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 16
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 100
		}

		[DebuggerHidden]
		public <ManualSpawnMultipleItemsToBoard>d__112(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeBoardAct> System.Collections.Generic.IEnumerable<GameLogic.Merge.MergeBoardAct>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeBoardAct System.Collections.Generic.IEnumerator<GameLogic.Merge.MergeBoardAct>.get_Current() { }

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
	private sealed class <ManualSpawnMultipleItemsToBoard>d__113 : IEnumerable<MergeBoardAct>, IEnumerable, IEnumerator<MergeBoardAct>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private MergeBoardAct <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x68
		private IEnumerable<Coordinate> coordinates; //Field offset: 0x70
		public IEnumerable<Coordinate> <>3__coordinates; //Field offset: 0x78
		private int howManyToSpawn; //Field offset: 0x80
		public int <>3__howManyToSpawn; //Field offset: 0x84
		public MergeBoard <>4__this; //Field offset: 0x88
		private IPlayer player; //Field offset: 0x90
		public IPlayer <>3__player; //Field offset: 0x98
		private IItemDefinition definition; //Field offset: 0xA0
		public IItemDefinition <>3__definition; //Field offset: 0xA8
		private IGenerationContext generationContext; //Field offset: 0xB0
		public IGenerationContext <>3__generationContext; //Field offset: 0xB8
		private MetacoreTime timeForActivation; //Field offset: 0xC0
		public MetacoreTime <>3__timeForActivation; //Field offset: 0xC8
		private ItemVisibility spawnVisibility; //Field offset: 0xD0
		public ItemVisibility <>3__spawnVisibility; //Field offset: 0xD4
		private AuxEnergyAttachmentChance auxEnergyAttachmentChance; //Field offset: 0xD8
		public AuxEnergyAttachmentChance <>3__auxEnergyAttachmentChance; //Field offset: 0xE0
		private Coordinate spawnerCoordinate; //Field offset: 0xE8
		public Coordinate <>3__spawnerCoordinate; //Field offset: 0xF0
		private IEnumerator<Coordinate> <>7__wrap1; //Field offset: 0xF8

		private override MergeBoardAct System.Collections.Generic.IEnumerator<GameLogic.Merge.MergeBoardAct>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 16
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 100
		}

		[DebuggerHidden]
		public <ManualSpawnMultipleItemsToBoard>d__113(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<MergeBoardAct> System.Collections.Generic.IEnumerable<GameLogic.Merge.MergeBoardAct>.GetEnumerator() { }

		[DebuggerHidden]
		private override MergeBoardAct System.Collections.Generic.IEnumerator<GameLogic.Merge.MergeBoardAct>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal struct CoordinateBoosts
	{
		public F32 BoostFactor; //Field offset: 0x0
		public F32 SpawnBoostFactor; //Field offset: 0x4

	}

	[CompilerGenerated]
	private List<MergeItem> <BoardItems>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MetaTime <BoardCreationTime>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MetaTime <LastModificationTime>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <Width>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <Height>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private MergeBoardId <BoardIdentifier>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private bool <HasEnded>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private BoardBubbleState <BubbleState>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private long <MergeCount>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<MetaDuration> <PendingTimeSkips>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private MetaTime <ProducerCooldownRemoverEndTime>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private MetaTime <ProducerCooldownRemoverStartTime>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private MetaDuration <PendingCooldownRemover>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private OrderedSet<Int32> <DiscoveredItems>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private MetaDuration <PendingOnFire>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private MetaTime <OnFireStartTime>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private MetaTime <OnFireEndTime>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private readonly IPlacement <DefaultPlacement>k__BackingField; //Field offset: 0x90
	private readonly SortedDictionary<MetaTime, ValueTuple`3<ItemActionType, MergeItem, Coordinate>> timeResolveDictionary; //Field offset: 0x98
	private readonly Dictionary<Coordinate, CoordinateBoosts> boostOfCoordinate; //Field offset: 0xA0
	[IgnoreDataMember]
	private ICollection<Coordinate> itemCoordinates; //Field offset: 0xA8

	[MetaMember(2, MetaMemberFlags::None (0))]
	public MetaTime BoardCreationTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"width", "height"})]
	public override ValueTuple<Int32, Int32> BoardDimensions
	{
		 get { } //Length: 108
	}

	[JsonProperty("boardId")]
	[MetaMember(7, MetaMemberFlags::None (0))]
	public private override MergeBoardId BoardIdentifier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<MergeItem> BoardItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public int BoardSize
	{
		 get { } //Length: 12
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public override BoardBubbleState BubbleState
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IEnumerable<Coordinate> Coordinates
	{
		 get { } //Length: 420
	}

	[IgnoreDataMember]
	public IPlacement DefaultPlacement
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	public private OrderedSet<Int32> DiscoveredItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	private override MetacoreTime GameLogic.Player.Board.IBoard.BoardCreationTime
	{
		private get { } //Length: 92
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public bool HasEnded
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public int Height
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public private override MergeItem Item
	{
		 get { } //Length: 148
		private set { } //Length: 292
	}

	[IgnoreDataMember]
	public IEnumerable<ValueTuple`2<Coordinate, MergeItem>> Items
	{
		[IteratorStateMachine(typeof(<get_Items>d__91))]
		 get { } //Length: 116
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private MetaTime LastModificationTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public long MergeCount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public override IEnumerable<MergeItem> MergeItems
	{
		 get { } //Length: 72
	}

	[IgnoreDataMember]
	public override List<MergeItem> MergeItemsNonAlloc
	{
		 get { } //Length: 8
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	public private MetaTime OnFireEndTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	public private MetaTime OnFireStartTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public MetaDuration PendingCooldownRemover
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	public private MetaDuration PendingOnFire
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public List<MetaDuration> PendingTimeSkips
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public MetaTime ProducerCooldownRemoverEndTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(13, MetaMemberFlags::None (0))]
	public MetaTime ProducerCooldownRemoverStartTime
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public int Width
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MergeBoard() { }

	public MergeBoard(MergeBoardId identifier, int boardWidth, int boardHeight, MetacoreTime creationTime) { }

	public MergeBoard(IPlayer player, MergeBoardId identifier, int boardWidth, int boardHeight, MetacoreTime creationTime, IEnumerable<ValueTuple`2<ItemDefinition, ItemVisibility>> items, IGenerationContext generationContext) { }

	[CompilerGenerated]
	private IEnumerable<Int32> <get_Coordinates>b__82_0(int y) { }

	public MergeItem AddItem(IPlayer player, Coordinate coordinate, IItemDefinition itemDefinition, IGenerationContext generationContext, MetacoreTime timestamp, ItemVisibility itemVisibility = 2, bool isInBubble = false) { }

	public MergeItem AddItem(IPlayer player, Coordinate coordinate, MergeItem mergeItem, IGenerationContext generationContext, MetacoreTime timestamp, ItemVisibility itemVisibility = 2, bool isInBubble = false) { }

	public MergeItem AddMergeItem(Coordinate itemCoordinate, MergeItem mergeItem, MetacoreTime timestamp, IGenerationContext generationContext, IPlayer player) { }

	public void AddPendingOnFireDuration(MetaDuration duration) { }

	public void AddSpawnAmountToAllItems(IPlayer player, MetacoreTime timestamp, IItemDefinition itemDefinition, int numCycles) { }

	private void AddSpawnAmountToItem(IPlayer player, MetacoreTime timestamp, MergeItem item, int numCycles) { }

	public bool AllCobwebsCleared() { }

	private void ApplyBoosts(IPlayer player, MetacoreTime timestamp) { }

	private bool CheckPhotoOfItemAlreadyTaken(IPlayer player, IItemDefinition itemA, IItemDefinition itemB) { }

	public void ClearBoard(MetacoreTime timestamp) { }

	public void ClearBoardExceptCoordinates(List<Coordinate> coordinates, MetacoreTime timestamp) { }

	public void ConsumePendingOnFireDuration(IPlayer player) { }

	private MergeItem DoRemoveItem(Coordinate coordinate, IPlayer player, bool consumeAttachments = true) { }

	public override IEnumerable<MergeBoardAct> EnqueueAutoSellItemsFromBoard(MergeBoardId mergeBoardId, IPlayer player, Predicate<MergeItem> matcher, MetacoreTime sellTimestamp) { }

	private static void FillActivationStorageMax(IPlayer player, MergeItem item) { }

	private static void FillSpawnStorageMax(IPlayer player, MergeItem item) { }

	public bool FindAndRemoveFirstVisibleItemOfCertainType(IPlayer player, IEnumerable<Int32> itemIds, MetacoreTime timestamp, bool areBubbleItemsAllowed = false) { }

	public bool FindAndRemoveFirstVisibleItemOfCertainType(IPlayer player, int itemId, MetacoreTime timestamp, bool areBubbleItemsAllowed = false) { }

	public bool FindAndRemoveFirstVisibleItemOfCertainType(IPlayer player, IEnumerable<Int32> itemIds, MetaTime timestamp, out KeyValuePair<Int32, Coordinate>& removedItem, bool areBubbleItemsAllowed = false) { }

	public void FindAndRemoveMatchingItems(IPlayer player, Predicate<MergeItem> predicate) { }

	private MetaTime FindNextFreeSpotInTimeResolveDictionary(MetaTime startValue) { }

	private override MetacoreTime GameLogic.Player.Board.IBoard.get_BoardCreationTime() { }

	[CompilerGenerated]
	public MetaTime get_BoardCreationTime() { }

	public override ValueTuple<Int32, Int32> get_BoardDimensions() { }

	[CompilerGenerated]
	public override MergeBoardId get_BoardIdentifier() { }

	[CompilerGenerated]
	private List<MergeItem> get_BoardItems() { }

	public int get_BoardSize() { }

	[CompilerGenerated]
	public override BoardBubbleState get_BubbleState() { }

	public override IEnumerable<Coordinate> get_Coordinates() { }

	[CompilerGenerated]
	public IPlacement get_DefaultPlacement() { }

	[CompilerGenerated]
	public OrderedSet<Int32> get_DiscoveredItems() { }

	[CompilerGenerated]
	public bool get_HasEnded() { }

	[CompilerGenerated]
	public int get_Height() { }

	public override MergeItem get_Item(Coordinate coord) { }

	[IteratorStateMachine(typeof(<get_Items>d__91))]
	public IEnumerable<ValueTuple`2<Coordinate, MergeItem>> get_Items() { }

	[CompilerGenerated]
	public MetaTime get_LastModificationTime() { }

	[CompilerGenerated]
	public long get_MergeCount() { }

	public override IEnumerable<MergeItem> get_MergeItems() { }

	public override List<MergeItem> get_MergeItemsNonAlloc() { }

	[CompilerGenerated]
	public MetaTime get_OnFireEndTime() { }

	[CompilerGenerated]
	public MetaTime get_OnFireStartTime() { }

	[CompilerGenerated]
	public MetaDuration get_PendingCooldownRemover() { }

	[CompilerGenerated]
	public MetaDuration get_PendingOnFire() { }

	[CompilerGenerated]
	public List<MetaDuration> get_PendingTimeSkips() { }

	[CompilerGenerated]
	public MetaTime get_ProducerCooldownRemoverEndTime() { }

	[CompilerGenerated]
	public MetaTime get_ProducerCooldownRemoverStartTime() { }

	[CompilerGenerated]
	public int get_Width() { }

	public Dictionary<Coordinate, CoordinateBoosts> GetBoostedCoordinates() { }

	private Coordinate GetCoord(int index) { }

	public string GetEventId(IPlayer player) { }

	private static int GetIndex(int x, int y, int width) { }

	private int GetIndex(Coordinate coordinate) { }

	public MergeItem GetMergeItemFromCoordinate(Coordinate coordinate) { }

	public MergeResult GetMoveResult(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime actionTimestamp) { }

	public bool HasActiveProducerCooldownRemover(IPlayer player, bool checkPending = true) { }

	private bool InvalidOrSameCoordinates(Coordinate fromPosition, Coordinate toPosition) { }

	public override bool IsEmpty(Coordinate coordinate) { }

	public bool IsItemAffectedBySpecificBooster(IPlayer player, Coordinate itemCoordinate, string id) { }

	public bool IsOnFireActive(IPlayer player) { }

	public override bool IsOnFireActive(IPlayer player, MetacoreTime timestamp) { }

	public bool IsOnFirePending(IPlayer player) { }

	public override bool IsValid(Coordinate coordinate) { }

	[IteratorStateMachine(typeof(<ManualSpawnMultipleItemsToBoard>d__112))]
	private IEnumerable<MergeBoardAct> ManualSpawnMultipleItemsToBoard(IPlayer player, IItemDefinition definition, Coordinate spawnerCoordinate, IEnumerable<Coordinate> coordinates, int howManyToSpawn, MetacoreTime timeForActivation, ItemVisibility spawnVisibility, IGenerationContext generationContext, AuxEnergyAttachmentChance auxEnergyAttachmentChance) { }

	[IteratorStateMachine(typeof(<ManualSpawnMultipleItemsToBoard>d__113))]
	private IEnumerable<MergeBoardAct> ManualSpawnMultipleItemsToBoard(IPlayer player, IItemDefinition definition, Coordinate spawnerCoordinate, IEnumerable<Coordinate> coordinates, int howManyToSpawn, MetacoreTime timeForActivation, ItemVisibility spawnVisibility, IGenerationContext generationContext, AuxEnergyAttachmentChance auxEnergyAttachmentChance, MergeItem spawner) { }

	public override bool MatchesActionRequirements(IPlayer player, BoardActionType actionType) { }

	public bool NeedsUpdate(IPlayer player, MetacoreTime endTimestamp) { }

	public void PauseBoardItems() { }

	public void ProcessActivationForCoordinate(IPlayer player, Coordinate coordinate, MetacoreTime timeForActivation, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, ActivationAuxiliarContext activationAuxiliarContext, out ActivationCostData activationCostData) { }

	public void ProcessBubblePurchase(IPlayer player, Coordinate coordinate, MetacoreTime timestamp, ICollection<MergeBoardAct> outcomes) { }

	public void ProcessChestClickForCoordinate(IPlayer player, Coordinate coordinate, MetacoreTime timestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs) { }

	public ICollection<MergeBoardAct> ProcessCollectForCoordinate(IPlayer player, Coordinate coordinate, MetaTime timeForCollecting, IGenerationContext generationContext) { }

	public void ProcessConsumeIn(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForConsume, ICollection<MergeBoardAct> collectedActs, IBubbleSpawner bubbleSpawner, MetacoreTime timeForConsumeIn) { }

	private void ProcessDigEventSink(PlayerModel playerModel, MergeItem sinkableItem) { }

	public void ProcessFishingRodTapForCoordinate(PlayerModel player, Coordinate coordinate, MetacoreTime timestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, LuckyType luckyType) { }

	public void ProcessLevelUpItem(Coordinate coordinate, MetacoreTime timeForUpgrade, IPlayer player, ICollection<MergeBoardAct> collectedActs) { }

	public void ProcessMerge(Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove, IPlayer player, IBubbleSpawner bubbleSpawner, IProgressionEventItemSpawner progressionEventItemSpawner, ICollection<MergeBoardAct> collectedActs) { }

	public MergeResult ProcessMergeOrMoveAttempt(Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove, IPlayer player, IBubbleSpawner bubbleSpawner, IProgressionEventItemSpawner progressionEventItemSpawner, ICollection<MergeBoardAct> collectedActs) { }

	public Coordinate ProcessMove(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove) { }

	public bool ProcessSellForCoordinate(Coordinate sellCoordinate, MetacoreTime timeForSelling, ICollection<MergeBoardAct> collectedActs, IPlayer player, bool checkTagRestriction) { }

	public void ProcessSinkIn(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForSinkIn, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, bool isReverse) { }

	public bool ProcessSpeedUpForCoordinate(Coordinate speedupCoordinate, MetacoreTime timeForSpeedingUp, ICollection<MergeBoardAct> collectedActs, SpeedUpBehavior speedUpBehavior, IPlayer player) { }

	public bool ProcessSpeedUpForCoordinate(Coordinate speedupCoordinate, MetacoreDuration timeForSpeedingUp, ICollection<MergeBoardAct> collectedActs, SpeedUpBehavior speedUpBehavior, IPlayer player) { }

	public Coordinate ProcessSwap(Coordinate fromPosition, Coordinate toPosition, MetacoreTime timeForMergeOrMove, IPlayer player, bool checkForEmptySlots = true) { }

	public void ProcessTakePhoto(PlayerModel player, Coordinate itemCoordinate, Coordinate cameraCoordinate, MetacoreTime timestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs, LuckyType luckyType) { }

	public void ProcessUnlockItemForCoordinate(IPlayer player, Coordinate coordinate, MetacoreTime currentTime, ICollection<MergeBoardAct> collectedActs) { }

	private void RefundSankItems(IPlayer player, ISinkState sinkState, MergeItem fromItem, Coordinate fromCoordinate, MetaTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public void RemoveCooldown(IPlayer player) { }

	public MergeItem RemoveItem(IPlayer player, Coordinate coordinate, MetacoreTime timestamp, bool consumeAttachments = true) { }

	public List<MergeItem> RemoveItems(IPlayer player, List<Coordinate> coordinatesToRemove, MetacoreTime timestamp, bool consumeAttachments = true) { }

	public MergeItem ReplaceItem(IPlayer player, Coordinate itemCoord, IItemDefinition replacementItem, MetaTime replacementTimestamp, ICollection<MergeBoardAct> collectedActs) { }

	public override IEnumerable<MergeBoardAct> ReplaceItems(IPlayer player, MetacoreTime replacementTimestamp, Predicate<MergeItem> matcher, IGenerationContext generationContext, IItemDefinition replacementItem) { }

	public void RestoreInternalState(MetacoreTime restorationTime, IPlayer player) { }

	public ValueTuple<Currencies, Int64> SellPrice(IMergeItem mergeItem, IMergeMansionGameConfig gameConfig) { }

	private ValueTuple<Currencies, Int64> SellPrice(IItemDefinition itemDefinition, IMergeMansionGameConfig gameConfig) { }

	private void SendAddMergeItemAnalytics(IPlayer player, MergeItem mergeItem) { }

	[CompilerGenerated]
	public void set_BoardCreationTime(MetaTime value) { }

	[CompilerGenerated]
	private void set_BoardIdentifier(MergeBoardId value) { }

	[CompilerGenerated]
	private void set_BoardItems(List<MergeItem> value) { }

	[CompilerGenerated]
	public void set_BubbleState(BoardBubbleState value) { }

	[CompilerGenerated]
	private void set_DiscoveredItems(OrderedSet<Int32> value) { }

	[CompilerGenerated]
	public void set_HasEnded(bool value) { }

	[CompilerGenerated]
	public void set_Height(int value) { }

	private void set_Item(Coordinate coord, MergeItem value) { }

	[CompilerGenerated]
	private void set_LastModificationTime(MetaTime value) { }

	[CompilerGenerated]
	public void set_MergeCount(long value) { }

	[CompilerGenerated]
	private void set_OnFireEndTime(MetaTime value) { }

	[CompilerGenerated]
	private void set_OnFireStartTime(MetaTime value) { }

	[CompilerGenerated]
	public void set_PendingCooldownRemover(MetaDuration value) { }

	[CompilerGenerated]
	private void set_PendingOnFire(MetaDuration value) { }

	[CompilerGenerated]
	public void set_PendingTimeSkips(List<MetaDuration> value) { }

	[CompilerGenerated]
	public void set_ProducerCooldownRemoverEndTime(MetaTime value) { }

	[CompilerGenerated]
	public void set_ProducerCooldownRemoverStartTime(MetaTime value) { }

	[CompilerGenerated]
	public void set_Width(int value) { }

	private static bool ShouldAddEnergyAttachment(IItemDefinition itemDefinition, MetacoreTime timeForActivation, AuxEnergyAttachmentChance attachmentChance) { }

	public void SkipGameTime(MetacoreDuration numMillisecondToSkip, MetacoreTime currentTime, IMergeMansionGameConfig config) { }

	private MergeBoardAct SpawnToBoard(IPlayer player, IItemDefinition definition, Coordinate spawnedFrom, MetacoreTime timeForActivation, bool bubbled, IGenerationContext generationContext, ItemActSource source) { }

	private static void SpeedUpActivation(IPlayer player, MergeItem item, MetacoreDuration timeAdjust, SpeedUpBehavior speedUpBehavior) { }

	private static void SpeedUpSpawn(IPlayer player, MergeItem item, MetacoreDuration timeAdjust, SpeedUpBehavior speedUpBehavior) { }

	private static Option<ValueTuple`2<IItemDefinition, ActivationCostData>> TryGetLeveledUpItem(IPlayer player, IBoard board, IItemDefinition producerItem, IItemDefinition spawnedItem, EnergyType energyType, EnergyModeInfo energyMode) { }

	private static Option<ValueTuple`2<IItemDefinition, ActivationCostData>> TryGetLeveledUpItemWithFallbacks(IPlayer player, IBoard board, IItemDefinition producerItem, IItemDefinition spawnedItem, EnergyType energyType, EnergyModeInfo energyMode) { }

	public bool TryToPlacePocketItemToBoard(IPlayer player, Coordinate primaryCoordinate, IBoardItem item, IGenerationContext generationContext, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public bool TryToPlaceRentableInventoryItemToBoard(IPlayer player, BoardInventory inventory, Coordinate primaryCoordinate, IBoardItem item, IGenerationContext generationContext, MetaTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	public void TryToRemoveCooldown(IPlayer player, IMergeItem item) { }

	private void TryToSpawnEnergyModeProgressionEventItemBasedOnChance(IPlayer player, MergeItem fromItem, Coordinate fromCoordinate, ICollection<MergeBoardAct> collectedActs) { }

	private bool TryToSpawnFromSpawner(IPlayer player, MetaTime timestamp, MergeItem item, ICollection<Coordinate> possibleSpawnCoordinates, bool takeFromStorage, IGenerationContext generationContext, out Coordinate spawnCoordinate) { }

	public void UnpauseBoardItems() { }

	public void Update(IPlayer player, MetacoreTime endTimestamp, IGenerationContext generationContext, ICollection<MergeBoardAct> collectedActs) { }

	private void UpdateBoostedCoordinatesFrom(Coordinate boosterCoord, MergeItem boosterItem, MetacoreTime time, IPlayer player) { }

	private void UpdateListOfBoostedCoordinates(MetacoreTime time, IPlayer player) { }

	public override void UpdateListOfBoostedCoordinatesAndApplyBoosts(MetacoreTime timestamp, IPlayer player) { }

	private void UpdateTimeResolveDictionary(IPlayer player, MetacoreTime timestamp) { }

	private void UpdateVisibilityOfNeighborsRecursive(IPlayer player, ICollection<MergeBoardAct> mergeBoardActs, Coordinate position, MetacoreTime currentTime) { }

	public void UpgradeItem(Coordinate coordinate, IPlayer player, MetacoreTime timestamp) { }

	public IConsumptionCheckResult WouldBeValidConsumeAttempt(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetacoreTime currentTime) { }

	public bool WouldBeValidMergeAttempt(IPlayer player, Coordinate fromPosition, Coordinate toPosition, MetaTime actionTimestamp) { }

	public bool WouldBeValidSinkAttempt(IPlayer player, Coordinate fromPosition, Coordinate toPosition, out bool outIsReverse) { }

	public bool WouldBeValidTakePhotoAttempt(PlayerModel player, Coordinate itemCoordinate, Coordinate cameraCoordinate, LuckyType luckyType) { }

}

