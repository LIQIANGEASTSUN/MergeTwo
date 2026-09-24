namespace Code.GameLogic.ExtraSpawns;

public class ExtraSpawnSource : IConfigItemSource<ExtraSpawnInfo, String>, IGameConfigSourceItem<String, ExtraSpawnInfo>, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {null, "amount"})]
		public static Func<String, Int64, ValueTuple`2<Int32, Int64>> <>9__124_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ValueTuple<Int32, Int64> <ToConfigData>b__124_0(string id, long amount) { }

	}

	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private ExtraSpawnTriggerType <Trigger>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <TriggerArgs>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private Nullable<Int32> <ItemMinLevel>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private Nullable<Int32> <ItemMaxLevel>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <EventFilter>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <IncludeTag>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<String> <ExcludeTag>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<MergeBoardId> <IncludeBoard>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<MergeBoardId> <ExcludeBoard>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private F32 <SpawnChance>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private List<Currencies> <SpawnCurrency>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private List<Nullable`1<F32>> <SpawnCurrencyAmountMin>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<Nullable`1<F32>> <SpawnCurrencyAmountMax>k__BackingField; //Field offset: 0x80
	[CompilerGenerated]
	private List<ExtraSpawnFormulaType> <SpawnCurrencyFormula>k__BackingField; //Field offset: 0x88
	[CompilerGenerated]
	private List<CoreSupportEventTokenId> <SpawnToken>k__BackingField; //Field offset: 0x90
	[CompilerGenerated]
	private List<Nullable`1<F32>> <SpawnTokenAmountMin>k__BackingField; //Field offset: 0x98
	[CompilerGenerated]
	private List<Nullable`1<F32>> <SpawnTokenAmountMax>k__BackingField; //Field offset: 0xA0
	[CompilerGenerated]
	private List<ExtraSpawnFormulaType> <SpawnTokenFormula>k__BackingField; //Field offset: 0xA8
	[CompilerGenerated]
	private List<String> <SpawnItem>k__BackingField; //Field offset: 0xB0
	[CompilerGenerated]
	private List<Int64> <SpawnItemAmount>k__BackingField; //Field offset: 0xB8
	[CompilerGenerated]
	private int <VisualPriority>k__BackingField; //Field offset: 0xC0
	[CompilerGenerated]
	private PlayerSegmentId <Segment>k__BackingField; //Field offset: 0xC8
	[CompilerGenerated]
	private CoreSupportEventExtraSpawnGroupId <Group>k__BackingField; //Field offset: 0xD0
	[CompilerGenerated]
	private int <SegmentPriority>k__BackingField; //Field offset: 0xD8
	[CompilerGenerated]
	private List<CoreSupportEventType> <EventTypeFilter>k__BackingField; //Field offset: 0xE0
	[CompilerGenerated]
	private List<String> <RequirementType>k__BackingField; //Field offset: 0xE8
	[CompilerGenerated]
	private List<String> <RequirementId>k__BackingField; //Field offset: 0xF0
	[CompilerGenerated]
	private List<String> <RequirementAmount>k__BackingField; //Field offset: 0xF8
	[CompilerGenerated]
	private List<String> <RequirementAux0>k__BackingField; //Field offset: 0x100

	public private override string ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> EventFilter
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<CoreSupportEventType> EventTypeFilter
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MergeBoardId> ExcludeBoard
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> ExcludeTag
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	private CoreSupportEventExtraSpawnGroupId Group
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<MergeBoardId> IncludeBoard
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> IncludeTag
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> ItemMaxLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private Nullable<Int32> ItemMinLevel
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 16
	}

	private List<String> RequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> RequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerSegmentId Segment
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int SegmentPriority
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private F32 SpawnChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Currencies> SpawnCurrency
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Nullable`1<F32>> SpawnCurrencyAmountMax
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Nullable`1<F32>> SpawnCurrencyAmountMin
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<ExtraSpawnFormulaType> SpawnCurrencyFormula
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> SpawnItem
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int64> SpawnItemAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<CoreSupportEventTokenId> SpawnToken
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Nullable`1<F32>> SpawnTokenAmountMax
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Nullable`1<F32>> SpawnTokenAmountMin
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<ExtraSpawnFormulaType> SpawnTokenFormula
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ExtraSpawnTriggerType Trigger
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string TriggerArgs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int VisualPriority
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public ExtraSpawnSource() { }

	private static List<ValueTuple`3<T, ExtraSpawnAmountRange, IExtraSpawnFormula>> CreateSpawnEntries(ExtraSpawnTriggerType triggerType, List<T> ids, List<Nullable`1<F32>> baseAmountsMin, List<Nullable`1<F32>> baseAmountsMax, List<ExtraSpawnFormulaType> formulas) { }

	[CompilerGenerated]
	public override string get_ConfigKey() { }

	[CompilerGenerated]
	private List<String> get_EventFilter() { }

	[CompilerGenerated]
	private List<CoreSupportEventType> get_EventTypeFilter() { }

	[CompilerGenerated]
	private List<MergeBoardId> get_ExcludeBoard() { }

	[CompilerGenerated]
	private List<String> get_ExcludeTag() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private CoreSupportEventExtraSpawnGroupId get_Group() { }

	[CompilerGenerated]
	private List<MergeBoardId> get_IncludeBoard() { }

	[CompilerGenerated]
	private List<String> get_IncludeTag() { }

	[CompilerGenerated]
	private Nullable<Int32> get_ItemMaxLevel() { }

	[CompilerGenerated]
	private Nullable<Int32> get_ItemMinLevel() { }

	[CompilerGenerated]
	private List<String> get_RequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_RequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_RequirementId() { }

	[CompilerGenerated]
	private List<String> get_RequirementType() { }

	[CompilerGenerated]
	private PlayerSegmentId get_Segment() { }

	[CompilerGenerated]
	private int get_SegmentPriority() { }

	[CompilerGenerated]
	private F32 get_SpawnChance() { }

	[CompilerGenerated]
	private List<Currencies> get_SpawnCurrency() { }

	[CompilerGenerated]
	private List<Nullable`1<F32>> get_SpawnCurrencyAmountMax() { }

	[CompilerGenerated]
	private List<Nullable`1<F32>> get_SpawnCurrencyAmountMin() { }

	[CompilerGenerated]
	private List<ExtraSpawnFormulaType> get_SpawnCurrencyFormula() { }

	[CompilerGenerated]
	private List<String> get_SpawnItem() { }

	[CompilerGenerated]
	private List<Int64> get_SpawnItemAmount() { }

	[CompilerGenerated]
	private List<CoreSupportEventTokenId> get_SpawnToken() { }

	[CompilerGenerated]
	private List<Nullable`1<F32>> get_SpawnTokenAmountMax() { }

	[CompilerGenerated]
	private List<Nullable`1<F32>> get_SpawnTokenAmountMin() { }

	[CompilerGenerated]
	private List<ExtraSpawnFormulaType> get_SpawnTokenFormula() { }

	[CompilerGenerated]
	private ExtraSpawnTriggerType get_Trigger() { }

	[CompilerGenerated]
	private string get_TriggerArgs() { }

	[CompilerGenerated]
	private int get_VisualPriority() { }

	[CompilerGenerated]
	private void set_ConfigKey(string value) { }

	[CompilerGenerated]
	private void set_EventFilter(List<String> value) { }

	[CompilerGenerated]
	private void set_EventTypeFilter(List<CoreSupportEventType> value) { }

	[CompilerGenerated]
	private void set_ExcludeBoard(List<MergeBoardId> value) { }

	[CompilerGenerated]
	private void set_ExcludeTag(List<String> value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Group(CoreSupportEventExtraSpawnGroupId value) { }

	[CompilerGenerated]
	private void set_IncludeBoard(List<MergeBoardId> value) { }

	[CompilerGenerated]
	private void set_IncludeTag(List<String> value) { }

	[CompilerGenerated]
	private void set_ItemMaxLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_ItemMinLevel(Nullable<Int32> value) { }

	[CompilerGenerated]
	private void set_RequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementType(List<String> value) { }

	[CompilerGenerated]
	private void set_Segment(PlayerSegmentId value) { }

	[CompilerGenerated]
	private void set_SegmentPriority(int value) { }

	[CompilerGenerated]
	private void set_SpawnChance(F32 value) { }

	[CompilerGenerated]
	private void set_SpawnCurrency(List<Currencies> value) { }

	[CompilerGenerated]
	private void set_SpawnCurrencyAmountMax(List<Nullable`1<F32>> value) { }

	[CompilerGenerated]
	private void set_SpawnCurrencyAmountMin(List<Nullable`1<F32>> value) { }

	[CompilerGenerated]
	private void set_SpawnCurrencyFormula(List<ExtraSpawnFormulaType> value) { }

	[CompilerGenerated]
	private void set_SpawnItem(List<String> value) { }

	[CompilerGenerated]
	private void set_SpawnItemAmount(List<Int64> value) { }

	[CompilerGenerated]
	private void set_SpawnToken(List<CoreSupportEventTokenId> value) { }

	[CompilerGenerated]
	private void set_SpawnTokenAmountMax(List<Nullable`1<F32>> value) { }

	[CompilerGenerated]
	private void set_SpawnTokenAmountMin(List<Nullable`1<F32>> value) { }

	[CompilerGenerated]
	private void set_SpawnTokenFormula(List<ExtraSpawnFormulaType> value) { }

	[CompilerGenerated]
	private void set_Trigger(ExtraSpawnTriggerType value) { }

	[CompilerGenerated]
	private void set_TriggerArgs(string value) { }

	[CompilerGenerated]
	private void set_VisualPriority(int value) { }

	public override ExtraSpawnInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

