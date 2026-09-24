namespace GameLogic.Player.Items.Bubble;

[MetaSerializableDerived(2)]
public class BracketedBubbleLogic : IBubbleLogic, IProvidesDebugOutput
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"quot", "min", "max"})]
		public static Func<ValueTuple`3<F32, Nullable`1<MetaDuration>, Nullable`1<MetaDuration>>, Bracket> <>9__25_0; //Field offset: 0x8
		public static Func<MergeChainId, MergeChainDef> <>9__25_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal Bracket <.ctor>b__25_0(ValueTuple<F32, Nullable`1<MetaDuration>, Nullable`1<MetaDuration>> triplet) { }

		internal MergeChainDef <.ctor>b__25_1(MergeChainId id) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass27_0
	{
		public MetacoreDuration timeSinceLastBubble; //Field offset: 0x10
		public IPlayer player; //Field offset: 0x18

		public <>c__DisplayClass27_0() { }

		internal bool <ComputeSpawnChance>b__0(Bracket bracket) { }

		internal F64 <ComputeSpawnChance>b__2(MergeTask task) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass27_1
	{
		public IEnumerable<IItemDefinition> mergeChainItems; //Field offset: 0x10
		public <>c__DisplayClass27_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass27_1() { }

		internal bool <ComputeSpawnChance>b__1(MergeTask task) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass27_2
	{
		public F64 mostDifficultTaskPrice; //Field offset: 0x10
		public <>c__DisplayClass27_1 CS$<>8__locals2; //Field offset: 0x18

		public <>c__DisplayClass27_2() { }

		internal bool <ComputeSpawnChance>b__3(MergeTask taskState) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass30_0
	{
		public IItemDefinition itemDefinition; //Field offset: 0x10
		public IPlayer player; //Field offset: 0x18

		public <>c__DisplayClass30_0() { }

		internal bool <HasSimplifiedLogic>b__0(MergeChainDef chain) { }

	}

	[MetaSerializable]
	internal class Bracket
	{
		[CompilerGenerated]
		private Nullable<MetaDuration> <Min>k__BackingField; //Field offset: 0x10
		[CompilerGenerated]
		private Nullable<MetaDuration> <Max>k__BackingField; //Field offset: 0x20
		[CompilerGenerated]
		private F32 <Quotient>k__BackingField; //Field offset: 0x30

		[MetaMember(2, MetaMemberFlags::None (0))]
		public private Nullable<MetaDuration> Max
		{
			[CompilerGenerated]
			 get { } //Length: 12
			[CompilerGenerated]
			private set { } //Length: 8
		}

		[MetaMember(1, MetaMemberFlags::None (0))]
		public private Nullable<MetaDuration> Min
		{
			[CompilerGenerated]
			 get { } //Length: 12
			[CompilerGenerated]
			private set { } //Length: 8
		}

		[MetaMember(3, MetaMemberFlags::None (0))]
		public private F32 Quotient
		{
			[CompilerGenerated]
			 get { } //Length: 8
			[CompilerGenerated]
			private set { } //Length: 8
		}

		private Bracket() { }

		public Bracket(Nullable<MetaDuration> min, Nullable<MetaDuration> max, F32 quotient) { }

		[CompilerGenerated]
		public Nullable<MetaDuration> get_Max() { }

		[CompilerGenerated]
		public Nullable<MetaDuration> get_Min() { }

		[CompilerGenerated]
		public F32 get_Quotient() { }

		public bool Matches(MetaDuration timestamp) { }

		public static Bracket op_Explicit(ValueTuple<F32, Nullable`1<MetaDuration>, Nullable`1<MetaDuration>> triplet) { }

		[CompilerGenerated]
		private void set_Max(Nullable<MetaDuration> value) { }

		[CompilerGenerated]
		private void set_Min(Nullable<MetaDuration> value) { }

		[CompilerGenerated]
		private void set_Quotient(F32 value) { }

		public virtual string ToString() { }

	}

	[CompilerGenerated]
	private List<Bracket> <Brackets>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F32 <NonNeededPenalty>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F32 <HardestTaskBoost>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private F32 <NormalizationQuot>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <MaxBubblesOnBoard>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private List<MergeChainDef> <ChainsWithSimplifiedLogic>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<Bracket> Brackets
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixMergeChainRefList")]
	private List<MergeChainDef> ChainsWithSimplifiedLogic
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private F32 HardestTaskBoost
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	private int MaxBubblesOnBoard
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private F32 NonNeededPenalty
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private F32 NormalizationQuot
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BracketedBubbleLogic(IEnumerable<ValueTuple`3<F32, Nullable`1<MetaDuration>, Nullable`1<MetaDuration>>> brackets, F32 nonNeededPenalty, F32 hardestTaskBoost, F32 normalizationQuot, int maxBubblesOnBoard, IEnumerable<MergeChainId> chainsWithSimplifiedLogic) { }

	private BracketedBubbleLogic() { }

	private F32 ComputeSpawnChance(IPlayer player, IBoard mergeBoard, IItemDefinition itemDefinition, MetacoreTime metaTime, out Bracket selectedBracket, out bool mostDifficult, out bool neededForTask, out F32 taskQuot, out F32 baseChance, out F32 existingBubblesChance, out bool neededForSinkItem) { }

	public override string DebugOutput(IPlayer playerState, ISharedBoardController boardController, MetaTime debugOutputTimestamp) { }

	public static List<MergeChainDef> FixMergeChainRefList(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	private List<Bracket> get_Brackets() { }

	[CompilerGenerated]
	private List<MergeChainDef> get_ChainsWithSimplifiedLogic() { }

	[CompilerGenerated]
	private F32 get_HardestTaskBoost() { }

	[CompilerGenerated]
	private int get_MaxBubblesOnBoard() { }

	[CompilerGenerated]
	private F32 get_NonNeededPenalty() { }

	[CompilerGenerated]
	private F32 get_NormalizationQuot() { }

	private bool HasSimplifiedLogic(IItemDefinition itemDefinition, IPlayer player) { }

	public override void RegisterExpiration(IBoard currentBoard, MetacoreTime spawnTime) { }

	public override void RegisterSpawn(IBoard currentBoard, MetacoreTime spawnTime) { }

	[CompilerGenerated]
	private void set_Brackets(List<Bracket> value) { }

	[CompilerGenerated]
	private void set_ChainsWithSimplifiedLogic(List<MergeChainDef> value) { }

	[CompilerGenerated]
	private void set_HardestTaskBoost(F32 value) { }

	[CompilerGenerated]
	private void set_MaxBubblesOnBoard(int value) { }

	[CompilerGenerated]
	private void set_NonNeededPenalty(F32 value) { }

	[CompilerGenerated]
	private void set_NormalizationQuot(F32 value) { }

	public override IItemDefinition ShouldSpawn(IPlayer player, IBoard currentBoard, IItemDefinition mergedItem, MetacoreTime mergeTimestamp) { }

}

