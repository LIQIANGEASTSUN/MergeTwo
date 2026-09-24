namespace Code.GameLogic.ExtraSpawns;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {13})]
[MetaSerializable]
public class ExtraSpawnInfo : IGameConfigData<String>, IGameConfigData, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private string <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IExtraSpawnTrigger <Trigger>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private Nullable<Int32> <ItemMinLevel>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private Nullable<Int32> <ItemMaxLevel>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<String> <EventFilters>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <IncludeTags>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <ExcludeTags>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<MergeBoardId> <IncludeBoards>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<MergeBoardId> <ExcludeBoards>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private F32 <SpawnChance>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"currency", "baseAmountRange", "formula"})]
	private List<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>> <SpawnCurrencies>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"currency", "baseAmountRange", "formula"})]
	private List<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>> <SpawnTokens>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private int <VisualPriority>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> <SegmentFeature>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<CoreSupportEventType> <EventTypeFilters>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private List<PlayerRequirement> <Requirements>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemDef", "amount"})]
	private List<ValueTuple`2<ItemDef, Int64>> <SpawnItems>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x98

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override string ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private List<String> EventFilters
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(16, MetaMemberFlags::None (0))]
	private List<CoreSupportEventType> EventTypeFilters
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public List<MergeBoardId> ExcludeBoards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public List<String> ExcludeTags
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public private override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public List<MergeBoardId> IncludeBoards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public List<String> IncludeTags
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private Nullable<Int32> ItemMaxLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private Nullable<Int32> ItemMinLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(17, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
	private List<PlayerRequirement> Requirements
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(15, MetaMemberFlags::None (0))]
	private CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> SegmentFeature
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public Option<CoreSupportEventSegmentFeature`1<CoreSupportEventExtraSpawnGroupId>> SegmentFeatureOption
	{
		 get { } //Length: 132
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private F32 SpawnChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"currency", "baseAmountRange", "formula"})]
	private List<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>> SpawnCurrencies
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public Option<List`1<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>>> SpawnCurrenciesOption
	{
		 get { } //Length: 132
	}

	[MetaMember(18, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"itemDef", "amount"})]
	private List<ValueTuple`2<ItemDef, Int64>> SpawnItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"currency", "baseAmountRange", "formula"})]
	private List<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>> SpawnTokens
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public Option<List`1<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>>> SpawnTokensOption
	{
		 get { } //Length: 132
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private IExtraSpawnTrigger Trigger
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(14, MetaMemberFlags::None (0))]
	public private int VisualPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ExtraSpawnInfo(string configKey, IExtraSpawnTrigger trigger, Nullable<Int32> itemMinLevel, Nullable<Int32> itemMaxLevel, List<String> eventFilters, List<String> includeTags, List<String> excludeTags, List<MergeBoardId> includeBoards, List<MergeBoardId> excludeBoards, F32 spawnChance, List<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>> spawnCurrencies, List<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>> spawnTokens, List<ValueTuple`2<Int32, Int64>> spawnItems, int visualPriority, CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> segmentFeature, List<CoreSupportEventType> eventTypeFilters, List<PlayerRequirement> requirements, int experimentPriority) { }

	public ExtraSpawnInfo() { }

	private static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public List<String> get_EventFilters() { }

	[CompilerGenerated]
	private List<CoreSupportEventType> get_EventTypeFilters() { }

	[CompilerGenerated]
	public List<MergeBoardId> get_ExcludeBoards() { }

	[CompilerGenerated]
	public List<String> get_ExcludeTags() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<MergeBoardId> get_IncludeBoards() { }

	[CompilerGenerated]
	public List<String> get_IncludeTags() { }

	[CompilerGenerated]
	private Nullable<Int32> get_ItemMaxLevel() { }

	[CompilerGenerated]
	private Nullable<Int32> get_ItemMinLevel() { }

	[CompilerGenerated]
	private List<PlayerRequirement> get_Requirements() { }

	[CompilerGenerated]
	private CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> get_SegmentFeature() { }

	public Option<CoreSupportEventSegmentFeature`1<CoreSupportEventExtraSpawnGroupId>> get_SegmentFeatureOption() { }

	[CompilerGenerated]
	public F32 get_SpawnChance() { }

	[CompilerGenerated]
	private List<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>> get_SpawnCurrencies() { }

	public Option<List`1<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>>> get_SpawnCurrenciesOption() { }

	[CompilerGenerated]
	private List<ValueTuple`2<ItemDef, Int64>> get_SpawnItems() { }

	[CompilerGenerated]
	private List<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>> get_SpawnTokens() { }

	public Option<List`1<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>>> get_SpawnTokensOption() { }

	[CompilerGenerated]
	public IExtraSpawnTrigger get_Trigger() { }

	[CompilerGenerated]
	public int get_VisualPriority() { }

	private static Option<List`1<ValueTuple`2<TId, Int64>>> GetSpawnEntries(PlayerModel player, Option<List`1<ValueTuple`3<TId, ExtraSpawnAmountRange, IExtraSpawnFormula>>> entriesOption, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Func<PlayerModel, TId, Boolean> filter, RandomPCG random) { }

	public void HandleSpawn(PlayerModel player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, AnalyticsContext analyticsContext, ICollection<MergeBoardAct> collectedActs) { }

	public static void HandleSpawnCurrencies(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Option<List`1<ValueTuple`2<Currencies, Int64>>> spawnCurrenciesOption, AnalyticsContext analyticsContext) { }

	public static void HandleSpawnItems(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, List<ValueTuple`2<ItemDef, Int64>> spawnItems, ICollection<MergeBoardAct> collectedActs) { }

	public static void HandleSpawnTokens(IPlayer player, IExtraSpawnTrigger trigger, Option<List`1<ValueTuple`2<CoreSupportEventTokenId, Int64>>> spawnTokensOption, AnalyticsContext analyticsContext) { }

	public bool Matches(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption) { }

	public static bool MatchesBoards(MergeBoardId board, List<MergeBoardId> boards, bool containsResult) { }

	public static bool MatchesCoreSupportEventToken(PlayerModel player, CoreSupportEventTokenId tokenId) { }

	public static bool MatchesCurrency(PlayerModel player, Currencies currency) { }

	public static bool MatchesEventFilters(IEnumerable<String> activeEventIds, List<String> eventFilters) { }

	private static bool MatchesEventTypeFilters(IPlayer player, Option<List`1<CoreSupportEventType>> eventTypeFiltersOption) { }

	public static bool MatchesExcludeBoards(MergeBoardId board, List<MergeBoardId> excludeBoards) { }

	public static bool MatchesExcludeTags(List<String> itemTags, List<String> excludeTags) { }

	public static bool MatchesIncludeBoards(MergeBoardId board, List<MergeBoardId> includeBoards) { }

	public static bool MatchesIncludeTags(List<String> itemTags, List<String> includeTags) { }

	public static bool MatchesItemMaxLevel(int itemLevel, Nullable<Int32> maxLevel) { }

	public static bool MatchesItemMinLevel(int itemLevel, Nullable<Int32> minLevel) { }

	private static bool MatchesRequirements(IPlayer player, Option<List`1<PlayerRequirement>> requirementsOption) { }

	private static bool MatchesTags(List<String> itemTags, List<String> tags, bool containsResult) { }

	[CompilerGenerated]
	private void set_ConfigKey(string value) { }

	[CompilerGenerated]
	private void set_EventFilters(List<String> value) { }

	[CompilerGenerated]
	private void set_EventTypeFilters(List<CoreSupportEventType> value) { }

	[CompilerGenerated]
	public void set_ExcludeBoards(List<MergeBoardId> value) { }

	[CompilerGenerated]
	public void set_ExcludeTags(List<String> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_IncludeBoards(List<MergeBoardId> value) { }

	[CompilerGenerated]
	public void set_IncludeTags(List<String> value) { }

	[CompilerGenerated]
	private void set_ItemMaxLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_ItemMinLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_Requirements(List<PlayerRequirement> value) { }

	[CompilerGenerated]
	private void set_SegmentFeature(CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> value) { }

	[CompilerGenerated]
	private void set_SpawnChance(F32 value) { }

	[CompilerGenerated]
	private void set_SpawnCurrencies(List<ValueTuple`3<Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula>> value) { }

	[CompilerGenerated]
	private void set_SpawnItems(List<ValueTuple`2<ItemDef, Int64>> value) { }

	[CompilerGenerated]
	private void set_SpawnTokens(List<ValueTuple`3<CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula>> value) { }

	[CompilerGenerated]
	private void set_Trigger(IExtraSpawnTrigger value) { }

	[CompilerGenerated]
	private void set_VisualPriority(int value) { }

}

