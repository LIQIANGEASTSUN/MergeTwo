namespace GameLogic.Player;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {5, 8, 9, 10, 13})]
[MetaSerializable]
public sealed class Wallet
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<IBoardItem, Int32> <>9__157_0; //Field offset: 0x8
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Value", "Index"})]
		public static Func<ValueTuple`2<IBoardItem, Int32>, Int32> <>9__173_1; //Field offset: 0x10
		public static Func<IBoardItem, IBoardItem> <>9__176_0; //Field offset: 0x18
		public static Func<IGrouping`2<IBoardItem, IBoardItem>, <>f__AnonymousType2`2<Int32, Int32>> <>9__176_1; //Field offset: 0x20
		public static Func<Int64> <>9__189_1; //Field offset: 0x28
		public static Action<Int64> <>9__189_3; //Field offset: 0x30

		private static <>c() { }

		public <>c() { }

		internal IBoardItem <ClearWallet>b__176_0(IBoardItem i) { }

		internal <>f__AnonymousType2<Int32, Int32> <ClearWallet>b__176_1(IGrouping<IBoardItem, IBoardItem> group) { }

		internal int <GetAllItemsInPocket>b__157_0(IBoardItem item) { }

		internal long <GetEnergyCurrencyCounts>b__189_1() { }

		internal void <GetEnergyCurrencyCounts>b__189_3(long val) { }

		internal int <ReplaceItemsInPocket>b__173_1(ValueTuple<IBoardItem, Int32> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass159_0
	{
		public IMergeMansionGameConfig gameConfig; //Field offset: 0x10

		public <>c__DisplayClass159_0() { }

		internal string <GetAllItemTypesInPocket>b__0(IBoardItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass163_0
	{
		public int itemId; //Field offset: 0x10

		public <>c__DisplayClass163_0() { }

		internal bool <FindAndRemoveAllItemTypesFromPocket>b__0(IBoardItem mergeItem) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass167_0
	{
		public int itemId; //Field offset: 0x10

		public <>c__DisplayClass167_0() { }

		internal bool <FindAndRemoveAllItemTypesFromPocketAndAddSellAmount>b__0(IBoardItem mergeItem) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass168_0
	{
		public IEnumerable<Int32> itemIds; //Field offset: 0x10
		public Func<IItemDefinition, Boolean> <>9__0; //Field offset: 0x18

		public <>c__DisplayClass168_0() { }

		internal bool <FindAndRemoveAllItemTypesFromPocketChests>b__0(IItemDefinition p) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass168_1
	{
		public KeyValuePair<Int32, Int32> pair; //Field offset: 0x10

		public <>c__DisplayClass168_1() { }

		internal bool <FindAndRemoveAllItemTypesFromPocketChests>b__1(IBoardItem mergeItem) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass170_0
	{
		public int itemId; //Field offset: 0x10

		public <>c__DisplayClass170_0() { }

		internal bool <FindAndRemoveFirstOfTypeFromPocket>b__0(IBoardItem item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass173_0
	{
		public Predicate<Int32> itemMatcher; //Field offset: 0x10

		public <>c__DisplayClass173_0() { }

		internal bool <ReplaceItemsInPocket>b__0(ValueTuple<IBoardItem, Int32> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass174_0
	{
		public MergeBoardId boardId; //Field offset: 0x10

		public <>c__DisplayClass174_0() { }

		internal bool <ReplaceItemsInPocket>b__0(IBoardEventModel e) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass188_0
	{
		public Wallet <>4__this; //Field offset: 0x10
		public EventCurrencyId id; //Field offset: 0x18

		public <>c__DisplayClass188_0() { }

		internal long <GetEventCurrencyCounts>b__0() { }

		internal long <GetEventCurrencyCounts>b__1() { }

		internal void <GetEventCurrencyCounts>b__2(long val) { }

		internal void <GetEventCurrencyCounts>b__3(long val) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass189_0
	{
		public Wallet <>4__this; //Field offset: 0x10
		public EnergyType type; //Field offset: 0x18
		public IPlayer player; //Field offset: 0x20

		public <>c__DisplayClass189_0() { }

		internal long <GetEnergyCurrencyCounts>b__0() { }

		internal void <GetEnergyCurrencyCounts>b__2(long val) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass194_0
	{
		public IItemDefinition itemDefinition; //Field offset: 0x10

		public <>c__DisplayClass194_0() { }

		internal bool <HasItemInPocket>b__1(IBoardItem boardItem) { }

		internal bool <HasItemInPocket>g__PocketHasItem|0(List<IBoardItem> pocket) { }

	}

	private struct CurrencyCounts
	{
		[CompilerGenerated]
		private Func<Int64> <Soft>k__BackingField; //Field offset: 0x0
		[CompilerGenerated]
		private Action<Int64> <SoftSetter>k__BackingField; //Field offset: 0x8
		[CompilerGenerated]
		private Func<Int64> <Hard>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private Action<Int64> <HardSetter>k__BackingField; //Field offset: 0x18

		public private Func<Int64> Hard
		{
			[CompilerGenerated]
			[IsReadOnly]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public private Action<Int64> HardSetter
		{
			[CompilerGenerated]
			[IsReadOnly]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public private Func<Int64> Soft
		{
			[CompilerGenerated]
			[IsReadOnly]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public private Action<Int64> SoftSetter
		{
			[CompilerGenerated]
			[IsReadOnly]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		public long Total
		{
			 get { } //Length: 96
		}

		public CurrencyCounts(Func<Int64> soft, Func<Int64> hard, Action<Int64> softSet, Action<Int64> hardSet) { }

		[CompilerGenerated]
		[IsReadOnly]
		public Func<Int64> get_Hard() { }

		[CompilerGenerated]
		[IsReadOnly]
		public Action<Int64> get_HardSetter() { }

		[CompilerGenerated]
		[IsReadOnly]
		public Func<Int64> get_Soft() { }

		[CompilerGenerated]
		[IsReadOnly]
		public Action<Int64> get_SoftSetter() { }

		public long get_Total() { }

		[CompilerGenerated]
		private void set_Hard(Func<Int64> value) { }

		[CompilerGenerated]
		private void set_HardSetter(Action<Int64> value) { }

		[CompilerGenerated]
		private void set_Soft(Func<Int64> value) { }

		[CompilerGenerated]
		private void set_SoftSetter(Action<Int64> value) { }

	}

	[CompilerGenerated]
	private long <Coins>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private long <Experience>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private long <Diamonds>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Int64> <BoughtDiamonds>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private long <Energy>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private Nullable<MetaTime> <NextPossibleEnergyRefillTime>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<IBoardItem> <PocketItems>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<IBoardItem> <EventPocketItems>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private long <HardDiamonds>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private long <HardCoins>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private MetaDictionary<EventCurrencyId, Int64> <EventCurrencies>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private MetaDictionary<EventCurrencyId, Int64> <BoughtEventCurrencies>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private List<AuthenticationPlatform> <CollectedRewards>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<Int64> <BoughtCoins>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private SecondaryEnergyState <SecondaryEnergyState_DEPRECATED>k__BackingField; //Field offset: 0x88
	[MetaMember(21, MetaMemberFlags::None (0))]
	public MetaDictionary<EnergyType, AuxEnergyState> AuxEnergyStates; //Field offset: 0x90
	[CompilerGenerated]
	private long <CardCollectionStars>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private long <DigEventTaps>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private MetaDictionary<CoreSupportEventTokenId, Int64> <CoreSupportEventTokens>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private MetaDictionary<Currencies, SortedDictionary`2<Int32, Int64>> <CurrencySpentPerDay>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private MetaDictionary<EnergyType, Int64> <InitialEnergyTotalThisSession>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private Int64[] <CurrenciesGainedThisSession>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private Int64[] <CurrenciesSpentThisSession>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private Int64[] <InitialCurrenciesThisSession>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private LogChannel <Log>k__BackingField; //Field offset: 0xD8
	public PocketChangedEvent PocketContentChanged; //Field offset: 0xE0
	public PocketChangedEvent EventPocketContentChanged; //Field offset: 0xE8
	public PocketChangedEvent LiveOpsEventPocketContentChanged; //Field offset: 0xF0
	public CurrencyAddedEvent CurrencyAdded; //Field offset: 0xF8
	public CurrencyRemovedEvent CurrencyRemoved; //Field offset: 0x100

	[IgnoreDataMember]
	public IEnumerable<EventCurrencyId> AllEventCurrencies
	{
		 get { } //Length: 220
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	private List<Int64> BoughtCoins
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private List<Int64> BoughtDiamonds
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	private MetaDictionary<EventCurrencyId, Int64> BoughtEventCurrencies
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(22, MetaMemberFlags::None (0))]
	public private long CardCollectionStars
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private long Coins
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	private List<AuthenticationPlatform> CollectedRewards
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(24, MetaMemberFlags::None (0))]
	public MetaDictionary<CoreSupportEventTokenId, Int64> CoreSupportEventTokens
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public private Int64[] CurrenciesGainedThisSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public private Int64[] CurrenciesSpentThisSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(25, MetaMemberFlags::None (0))]
	public MetaDictionary<Currencies, SortedDictionary`2<Int32, Int64>> CurrencySpentPerDay
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private long Diamonds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(23, MetaMemberFlags::None (0))]
	public private long DigEventTaps
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private long Energy
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	private MetaDictionary<EventCurrencyId, Int64> EventCurrencies
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(19, MetaMemberFlags::None (0))]
	private List<IBoardItem> EventPocketItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public List<IBoardItem> EventPocketItemsNonAlloc
	{
		 get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private long Experience
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	public private long HardCoins
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private long HardDiamonds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public private Int64[] InitialCurrenciesThisSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(26, MetaMemberFlags::None (0))]
	public private MetaDictionary<EnergyType, Int64> InitialEnergyTotalThisSession
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public LogChannel Log
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	private Nullable<MetaTime> NextPossibleEnergyRefillTime
	{
		[CompilerGenerated]
		private get { } //Length: 12
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	private List<IBoardItem> PocketItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public List<IBoardItem> PocketItemsNonAlloc
	{
		 get { } //Length: 8
	}

	[IgnoreDataMember]
	public long PurchasedCoinsSum
	{
		 get { } //Length: 12
	}

	[IgnoreDataMember]
	public long PurchasedDiamondsSum
	{
		 get { } //Length: 12
	}

	[MetaMember(20, MetaMemberFlags::None (0))]
	[Obsolete("Replaced by AuxEnergyStates. Required for migration.")]
	public SecondaryEnergyState SecondaryEnergyState_DEPRECATED
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public long TotalCoins
	{
		 get { } //Length: 16
	}

	[IgnoreDataMember]
	public long TotalDiamonds
	{
		 get { } //Length: 16
	}

	public Wallet() { }

	public Wallet(long coins, long experience, long diamonds, long energy) { }

	[CompilerGenerated]
	private long <CoinsCounts>b__186_0() { }

	[CompilerGenerated]
	private long <CoinsCounts>b__186_1() { }

	[CompilerGenerated]
	private void <CoinsCounts>b__186_2(long val) { }

	[CompilerGenerated]
	private void <CoinsCounts>b__186_3(long val) { }

	[CompilerGenerated]
	private long <DiamondCounts>b__187_0() { }

	[CompilerGenerated]
	private long <DiamondCounts>b__187_1() { }

	[CompilerGenerated]
	private void <DiamondCounts>b__187_2(long val) { }

	[CompilerGenerated]
	private void <DiamondCounts>b__187_3(long val) { }

	public void AddCardCollectionStars(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context) { }

	public void AddCoins(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context) { }

	public void AddCurrency(IPlayer player, ValueTuple<Currencies, Int64> add, CurrencySource currencySource, int itemType, EventCurrencyId eventCurrencyId, AnalyticsContext context) { }

	public void AddDiamonds(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context) { }

	private void AddDigEventTaps(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context) { }

	private void AddEnergy(IPlayer player, EnergyType type, long addAmount) { }

	public void AddEnergy(IPlayer player, EnergyType type, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context) { }

	public void AddEventCurrency(IPlayer player, EventCurrencyId eventCurrencyId, long addAmount, CurrencySource currencySource, AnalyticsContext context) { }

	public void AddExperience(IPlayer player, long addAmount, CurrencySource currencySource, int itemId, AnalyticsContext context) { }

	public void AddItemToFirstSlotInPocket(IBoardItem item, IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel = null) { }

	public void AddItemToFirstSlotInPocket(int itemIdToAdd, IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel = null) { }

	public void AddItemToPocket(int itemIdToAdd, IMergeMansionGameConfig gameConfig, MergeBoardId mergeBoardId, IBoardEventModel eventModel = null) { }

	public void AddItemToPocket(IBoardItem item, IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel = null) { }

	public bool CanAfford(IPlayer player, CurrencyCost cost, out long diff) { }

	public ValueTuple<Boolean, Int64> CanAfford(ValueTuple<Currencies, Int64> cost) { }

	public CurrencyUsageResult CanSpendCoreSupportEventTokens(CoreSupportEventTokenId tokenId, long amount) { }

	public void CheckIfEnergyShouldBeRegenerated(IPlayer player, MetacoreTime currentTimestamp, MetaDuration energyRestoreInterval) { }

	public void ClearWallet(MergeBoardId boardId, IBoardEventModel eventModel) { }

	private CurrencyCounts CoinsCounts() { }

	private CurrencyCounts DiamondCounts() { }

	private void EnsureEventCurrencies(ICost cost) { }

	public void FindAndMoveItemAsFirstInPocket(MergeBoardId boardId, IBoardEventModel eventModel, int itemId) { }

	public void FindAndRemoveAllItemTypesFromPocket(MergeBoardId boardId, IBoardEventModel eventModel, int itemId) { }

	public void FindAndRemoveAllItemTypesFromPocketAndAddSellAmount(PlayerModel playerModel, MergeBoardId boardId, IBoardEventModel eventModel, int itemId) { }

	public void FindAndRemoveAllItemTypesFromPocketChests(IPlayer player, MergeBoardId boardId, IBoardEventModel eventModel, IEnumerable<Int32> itemIds, bool addSellPrice = false) { }

	public bool FindAndRemoveFirstOfTypeFromPocket(MergeBoardId boardId, int itemId, IBoardEventModel eventModel) { }

	public void FindAndRemoveMatchingItemsFromPocket(MergeBoardId boardId, IBoardEventModel eventModel, Predicate<IBoardItem> predicate) { }

	public IEnumerable<EventCurrencyId> get_AllEventCurrencies() { }

	[CompilerGenerated]
	private List<Int64> get_BoughtCoins() { }

	[CompilerGenerated]
	private List<Int64> get_BoughtDiamonds() { }

	[CompilerGenerated]
	private MetaDictionary<EventCurrencyId, Int64> get_BoughtEventCurrencies() { }

	[CompilerGenerated]
	public long get_CardCollectionStars() { }

	[CompilerGenerated]
	public long get_Coins() { }

	[CompilerGenerated]
	private List<AuthenticationPlatform> get_CollectedRewards() { }

	[CompilerGenerated]
	public MetaDictionary<CoreSupportEventTokenId, Int64> get_CoreSupportEventTokens() { }

	[CompilerGenerated]
	public Int64[] get_CurrenciesGainedThisSession() { }

	[CompilerGenerated]
	public Int64[] get_CurrenciesSpentThisSession() { }

	[CompilerGenerated]
	public MetaDictionary<Currencies, SortedDictionary`2<Int32, Int64>> get_CurrencySpentPerDay() { }

	[CompilerGenerated]
	public long get_Diamonds() { }

	[CompilerGenerated]
	public long get_DigEventTaps() { }

	[CompilerGenerated]
	public long get_Energy() { }

	[CompilerGenerated]
	private MetaDictionary<EventCurrencyId, Int64> get_EventCurrencies() { }

	[CompilerGenerated]
	private List<IBoardItem> get_EventPocketItems() { }

	public List<IBoardItem> get_EventPocketItemsNonAlloc() { }

	[CompilerGenerated]
	public long get_Experience() { }

	[CompilerGenerated]
	public long get_HardCoins() { }

	[CompilerGenerated]
	public long get_HardDiamonds() { }

	[CompilerGenerated]
	public Int64[] get_InitialCurrenciesThisSession() { }

	[CompilerGenerated]
	public MetaDictionary<EnergyType, Int64> get_InitialEnergyTotalThisSession() { }

	[CompilerGenerated]
	public LogChannel get_Log() { }

	[CompilerGenerated]
	private Nullable<MetaTime> get_NextPossibleEnergyRefillTime() { }

	[CompilerGenerated]
	private List<IBoardItem> get_PocketItems() { }

	public List<IBoardItem> get_PocketItemsNonAlloc() { }

	public long get_PurchasedCoinsSum() { }

	public long get_PurchasedDiamondsSum() { }

	[CompilerGenerated]
	public SecondaryEnergyState get_SecondaryEnergyState_DEPRECATED() { }

	public long get_TotalCoins() { }

	public long get_TotalDiamonds() { }

	public IEnumerable<IBoardItem> GetAllBoardItemsInPocket(MergeBoardId boardId) { }

	public IEnumerable<Int32> GetAllItemsInPocket(MergeBoardId boardId) { }

	public IEnumerable<String> GetAllItemTypesInPocket(IMergeMansionGameConfig gameConfig, MergeBoardId boardId) { }

	public Dictionary<EventCurrencyId, Int64> GetAmountOfEventCurrencies() { }

	private CurrencyCounts GetAmountsFromPrice(IPlayer player, ICost cost) { }

	public long GetCoreSupportEventTokenAmount(CoreSupportEventTokenId tokenId) { }

	public long GetCurrencyAmount(Currencies currencies, EventCurrencyId eventCurrencyId) { }

	public long GetCurrencyAmountFree(Currencies currency, EventCurrencyId eventCurrencyId) { }

	public long GetCurrencyAmountHard(Currencies currency, EventCurrencyId eventCurrencyId) { }

	public long GetCurrencyAmountIgnoreExceptions(Currencies currency, EventCurrencyId eventCurrencyId) { }

	public long GetEnergy(EnergyType type) { }

	public ValueTuple<Int64, Nullable`1<MetaTime>> GetEnergyAmountAndNextRestoreTime(EnergyType energyType) { }

	private CurrencyCounts GetEnergyCurrencyCounts(IPlayer player, EnergyType type) { }

	private long GetEventCurrencyAmountHard(EventCurrencyId eventCurrencyId) { }

	private long GetEventCurrencyAmountSoft(EventCurrencyId eventCurrencyId) { }

	public long GetEventCurrencyCount(EventCurrencyId eventCurrencyId) { }

	private CurrencyCounts GetEventCurrencyCounts(EventCurrencyId id) { }

	public IBoardItem GetFirstItemInPocket(MergeBoardId boardId, IBoardEventModel eventModel) { }

	public Nullable<MetaTime> GetNextPossibleEnergyRefillTime(EnergyType type) { }

	public Nullable<MetaTime> GetNextPossibleEnergyRefillTime() { }

	public List<IBoardItem> GetPocket(MergeBoardId boardId, IBoardEventModel eventModel) { }

	public int GetPocketItemCount(MergeBoardId boardId) { }

	private ValueTuple<List`1<IBoardItem>, PocketChangedEvent> GetPocketItemsAndChangedEvent(MergeBoardId boardId, IBoardEventModel eventModel) { }

	private MetaDictionary<EventCurrencyId, Int64> GetTargetEventCurrency(bool isPurchase) { }

	public void GiveCoreSupportEventTokens(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySource source, AnalyticsContext analyticsContext) { }

	public bool HasCollectedSocialAuthReward(AuthenticationPlatform platform) { }

	public bool HasEnoughDiamonds(long howMuchIsNeeded) { }

	public bool HasEnoughEnergy(EnergyType type, long howMuchIsNeeded) { }

	public bool HasItemInPocket(IItemDefinition itemDefinition) { }

	public long HowMuchEnergyTimeFillCanGive(IPlayer player) { }

	public bool IsWalletAtMax(Currencies currency) { }

	public void MarkSocialAuthRewardAsCollected(AuthenticationPlatform platform) { }

	private void OnCoreSupportEventTokenAmountChanged(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySource source) { }

	public bool PocketContainsItemWithinRange(MergeBoardId boardId, IBoardEventModel eventModel, int maxCount, Int32[] itemIds) { }

	public void RemoveAttachmentsFromPocket(Predicate<IItemAttachment> matcher) { }

	public void RemoveDigEventData() { }

	public IBoardItem RemoveFirstItemFromPocket(IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel) { }

	public bool RemoveItemFromPocket(IMergeMansionGameConfig gameConfig, MergeBoardId mergeBoardId, IBoardEventModel eventBoardModel, int index, string itemType) { }

	public void RemoveItems(MergeBoardId boardId, Predicate<Int32> itemMatcher, Action<Int32> onRemoved) { }

	public void RemoveSocialAuthRewardCollected(AuthenticationPlatform platform) { }

	public ValueTuple<Boolean, Int32> ReOrderItemsInPocket(MergeBoardId boardId, IBoardEventModel eventBoardModel, int source, int target) { }

	public void ReplaceExpiredCardCollectionItems(IPlayer player, MergeBoardId mergeBoardId, RestoredStateFixupChangeLog changeLog = null) { }

	public void ReplaceItemsInPocket(IMergeMansionGameConfig gameConfig, MergeBoardId boardId, IBoardEventModel eventModel, Dictionary<Int32, Int32> replacementMapping) { }

	public void ReplaceItemsInPocket(IPlayer player, MergeBoardId boardId, Predicate<IItemDefinition> matcher, IItemDefinition replacementItem) { }

	public void ResetCardCollectionStars() { }

	[CompilerGenerated]
	private void set_BoughtCoins(List<Int64> value) { }

	[CompilerGenerated]
	private void set_BoughtDiamonds(List<Int64> value) { }

	[CompilerGenerated]
	private void set_BoughtEventCurrencies(MetaDictionary<EventCurrencyId, Int64> value) { }

	[CompilerGenerated]
	private void set_CardCollectionStars(long value) { }

	[CompilerGenerated]
	private void set_Coins(long value) { }

	[CompilerGenerated]
	private void set_CollectedRewards(List<AuthenticationPlatform> value) { }

	[CompilerGenerated]
	public void set_CoreSupportEventTokens(MetaDictionary<CoreSupportEventTokenId, Int64> value) { }

	[CompilerGenerated]
	private void set_CurrenciesGainedThisSession(Int64[] value) { }

	[CompilerGenerated]
	private void set_CurrenciesSpentThisSession(Int64[] value) { }

	[CompilerGenerated]
	public void set_CurrencySpentPerDay(MetaDictionary<Currencies, SortedDictionary`2<Int32, Int64>> value) { }

	[CompilerGenerated]
	private void set_Diamonds(long value) { }

	[CompilerGenerated]
	private void set_DigEventTaps(long value) { }

	[CompilerGenerated]
	private void set_Energy(long value) { }

	[CompilerGenerated]
	private void set_EventCurrencies(MetaDictionary<EventCurrencyId, Int64> value) { }

	[CompilerGenerated]
	private void set_EventPocketItems(List<IBoardItem> value) { }

	[CompilerGenerated]
	private void set_Experience(long value) { }

	[CompilerGenerated]
	private void set_HardCoins(long value) { }

	[CompilerGenerated]
	private void set_HardDiamonds(long value) { }

	[CompilerGenerated]
	private void set_InitialCurrenciesThisSession(Int64[] value) { }

	[CompilerGenerated]
	private void set_InitialEnergyTotalThisSession(MetaDictionary<EnergyType, Int64> value) { }

	[CompilerGenerated]
	public void set_Log(LogChannel value) { }

	[CompilerGenerated]
	private void set_NextPossibleEnergyRefillTime(Nullable<MetaTime> value) { }

	[CompilerGenerated]
	private void set_PocketItems(List<IBoardItem> value) { }

	[CompilerGenerated]
	public void set_SecondaryEnergyState_DEPRECATED(SecondaryEnergyState value) { }

	public void SetAmountOfExperience(long experience) { }

	public void SetCoreSupportEventTokenAmount(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySource source, AnalyticsContext analyticsContext) { }

	public void SetInitialEnergyTotalsThisSession(PlayerModel playerModel) { }

	public void SetInitialValues(int initialCoins, int initialDiamonds, int initialEnergy) { }

	public void SetNextPossibleEnergyRefillTimeIfNeeded(IPlayer player, MetacoreTime nextPossibleRefillTime, bool energyRegenerated) { }

	public void SpendCoreSupportEventTokens(IPlayer player, CoreSupportEventTokenId tokenId, long amount, CurrencySink sinkSource, AnalyticsContext analyticsContext) { }

	public void StartRefillEnergyIfBugged(IPlayer player) { }

	private void TrackCurrencySpent(IPlayer player, Currencies currency, long amount) { }

	public CurrencyUsageResult TryToPayCost(IPlayer player, CurrencyCost cost, CurrencySink currencySink, int itemId, AnalyticsContext context) { }

	public CurrencyUsageResult TryToUse(IPlayer player, ValueTuple<Currencies, Int64> cost, CurrencySink currencySink, int itemType, EventCurrencyId eventCurrencyId, AnalyticsContext context, string flashSaleContext = "None") { }

	public CurrencyUsageResult TryToUseCardCollectionStars(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context) { }

	public CurrencyUsageResult TryToUseCoins(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context, string flashSaleContext) { }

	public CurrencyUsageResult TryToUseDiamonds(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context, string flashSaleContext) { }

	public CurrencyUsageResult TryToUseDigEventTaps(IPlayer player, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context) { }

	public CurrencyUsageResult TryToUseEnergy(IPlayer player, EnergyType type, long howMuchToUse, CurrencySink currencySink, int itemId, AnalyticsContext context) { }

}

