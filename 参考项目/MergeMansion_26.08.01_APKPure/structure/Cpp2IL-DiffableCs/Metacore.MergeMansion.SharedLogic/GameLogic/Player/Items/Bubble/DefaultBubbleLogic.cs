namespace GameLogic.Player.Items.Bubble;

[MetaSerializableDerived(1)]
public class DefaultBubbleLogic : IBubbleLogic, IProvidesDebugOutput
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass59_0
	{
		public DefaultBubbleLogic <>4__this; //Field offset: 0x10
		public MetaTime debugOutputTimestamp; //Field offset: 0x18

		public <>c__DisplayClass59_0() { }

		internal string <DebugOutput>b__0(IBoard board) { }

	}

	[CompilerGenerated]
	private int <MaxBubblesOnBoard>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private F32 <FirstEncounterQuotient>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <RollScale>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <BubbleCountAdjustmentQuotient>k__BackingField; //Field offset: 0x1C
	[CompilerGenerated]
	private F32 <GraceRecoverySpeed>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private F32 <GraceChanceReduction>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private F32 <MaxGraceChance>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private F32 <MinGraceChance>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private F32 <BehaviorChanceRecoverySpeed>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private F32 <BehaviourChanceReduction>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private F32 <MaxBubbleBehaviourChance>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private F32 <MinBubbleBehaviourChance>k__BackingField; //Field offset: 0x3C

	[MetaMember(9, MetaMemberFlags::None (0))]
	private F32 BehaviorChanceRecoverySpeed
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	private F32 BehaviourChanceReduction
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private int BubbleCountAdjustmentQuotient
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private F32 FirstEncounterQuotient
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	private F32 GraceChanceReduction
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	private F32 GraceRecoverySpeed
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	private F32 MaxBubbleBehaviourChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private int MaxBubblesOnBoard
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	private F32 MaxGraceChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(12, MetaMemberFlags::None (0))]
	private F32 MinBubbleBehaviourChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	private F32 MinGraceChance
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private int RollScale
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public DefaultBubbleLogic(int maxBubblesOnBoard, F32 firstEncounterQuotient, int rollScale, int bubbleCountAdjustmentQuotient, F32 graceRecoverySpeed, F32 graceChanceReduction, F32 maxGraceChance, F32 minGraceChance, F32 behaviorChanceRecoverySpeed, F32 behaviourChanceReduction, F32 maxBubbleBehaviourChance, F32 minBubbleBehaviourChance) { }

	public DefaultBubbleLogic(int maxBubblesOnBoard, F32 firstEncounterQuotient, int rollScale, int bubbleCountAdjustmentQuotient) { }

	private DefaultBubbleLogic() { }

	private F32 ComputeBubbleBehaviourChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime) { }

	private F32 ComputeBubbleGraceChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime) { }

	public override string DebugOutput(IPlayer playerState, ISharedBoardController boardController, MetaTime debugOutputTimestamp) { }

	[CompilerGenerated]
	private F32 get_BehaviorChanceRecoverySpeed() { }

	[CompilerGenerated]
	private F32 get_BehaviourChanceReduction() { }

	[CompilerGenerated]
	private int get_BubbleCountAdjustmentQuotient() { }

	[CompilerGenerated]
	private F32 get_FirstEncounterQuotient() { }

	[CompilerGenerated]
	private F32 get_GraceChanceReduction() { }

	[CompilerGenerated]
	private F32 get_GraceRecoverySpeed() { }

	[CompilerGenerated]
	private F32 get_MaxBubbleBehaviourChance() { }

	[CompilerGenerated]
	private int get_MaxBubblesOnBoard() { }

	[CompilerGenerated]
	private F32 get_MaxGraceChance() { }

	[CompilerGenerated]
	private F32 get_MinBubbleBehaviourChance() { }

	[CompilerGenerated]
	private F32 get_MinGraceChance() { }

	[CompilerGenerated]
	private int get_RollScale() { }

	private int GetSpawnChance(IBoard mergeBoard, MetacoreTime currentTime) { }

	public override void RegisterExpiration(IBoard currentBoard, MetacoreTime spawnTime) { }

	public override void RegisterSpawn(IBoard currentBoard, MetacoreTime spawnTime) { }

	[CompilerGenerated]
	private void set_BehaviorChanceRecoverySpeed(F32 value) { }

	[CompilerGenerated]
	private void set_BehaviourChanceReduction(F32 value) { }

	[CompilerGenerated]
	private void set_BubbleCountAdjustmentQuotient(int value) { }

	[CompilerGenerated]
	private void set_FirstEncounterQuotient(F32 value) { }

	[CompilerGenerated]
	private void set_GraceChanceReduction(F32 value) { }

	[CompilerGenerated]
	private void set_GraceRecoverySpeed(F32 value) { }

	[CompilerGenerated]
	private void set_MaxBubbleBehaviourChance(F32 value) { }

	[CompilerGenerated]
	private void set_MaxBubblesOnBoard(int value) { }

	[CompilerGenerated]
	private void set_MaxGraceChance(F32 value) { }

	[CompilerGenerated]
	private void set_MinBubbleBehaviourChance(F32 value) { }

	[CompilerGenerated]
	private void set_MinGraceChance(F32 value) { }

	[CompilerGenerated]
	private void set_RollScale(int value) { }

	public override IItemDefinition ShouldSpawn(IPlayer player, IBoard mergeBoard, IItemDefinition mergedItem, MetacoreTime mergeTimestamp) { }

	private void UpdateBubbleBehaviourChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime) { }

	private void UpdateBubbleGraceChance(BoardBubbleState boardBubbleState, MetacoreTime updateTime) { }

}

