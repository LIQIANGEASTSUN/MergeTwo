namespace GameLogic.Player.Items.Bubble;

public class BubblesSetupSource : IConfigItemSource<BubblesSetup, BubblesSetupId>, IGameConfigSourceItem<BubblesSetupId, BubblesSetup>, IHasGameConfigKey<BubblesSetupId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private BubblesSetupId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <SetupType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <MaxBubblesOnBoard>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private F32 <FirstEncounterQuotient>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private int <RollScale>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <BubbleCountAdjustmentQuotient>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private F32 <GraceRecoverySpeed>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private F32 <GraceChanceReduction>k__BackingField; //Field offset: 0x3C
	[CompilerGenerated]
	private F32 <MaxGraceChance>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private F32 <MinGraceChance>k__BackingField; //Field offset: 0x44
	[CompilerGenerated]
	private F32 <BehaviorChanceRecoverySpeed>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private F32 <BehaviorChanceReduction>k__BackingField; //Field offset: 0x4C
	[CompilerGenerated]
	private F32 <MaxBubbleBehaviourChance>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private F32 <MinBubbleBehaviourChance>k__BackingField; //Field offset: 0x54
	[CompilerGenerated]
	private F32 <NormalizationQuot>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private F32 <NonNeededPenalty>k__BackingField; //Field offset: 0x5C
	[CompilerGenerated]
	private F32 <HardestTaskBoostQuot>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private List<Nullable`1<MetaDuration>> <MinTimeSinceBubble>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private List<Nullable`1<MetaDuration>> <MaxTimeSinceBubble>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private List<F32> <BracketQuot>k__BackingField; //Field offset: 0x78
	[CompilerGenerated]
	private List<MergeChainId> <SimplifiedLogicChains>k__BackingField; //Field offset: 0x80

	public F32 BehaviorChanceRecoverySpeed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 BehaviorChanceReduction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<F32> BracketQuot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int BubbleCountAdjustmentQuotient
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override BubblesSetupId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 FirstEncounterQuotient
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 GraceChanceReduction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 GraceRecoverySpeed
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 HardestTaskBoostQuot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 MaxBubbleBehaviourChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int MaxBubblesOnBoard
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 MaxGraceChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<Nullable`1<MetaDuration>> MaxTimeSinceBubble
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 MinBubbleBehaviourChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 MinGraceChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<Nullable`1<MetaDuration>> MinTimeSinceBubble
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 NonNeededPenalty
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public F32 NormalizationQuot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public int RollScale
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public string SetupType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<MergeChainId> SimplifiedLogicChains
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public BubblesSetupSource() { }

	[CompilerGenerated]
	public F32 get_BehaviorChanceRecoverySpeed() { }

	[CompilerGenerated]
	public F32 get_BehaviorChanceReduction() { }

	[CompilerGenerated]
	public List<F32> get_BracketQuot() { }

	[CompilerGenerated]
	public int get_BubbleCountAdjustmentQuotient() { }

	[CompilerGenerated]
	public override BubblesSetupId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public F32 get_FirstEncounterQuotient() { }

	[CompilerGenerated]
	public F32 get_GraceChanceReduction() { }

	[CompilerGenerated]
	public F32 get_GraceRecoverySpeed() { }

	[CompilerGenerated]
	public F32 get_HardestTaskBoostQuot() { }

	[CompilerGenerated]
	public F32 get_MaxBubbleBehaviourChance() { }

	[CompilerGenerated]
	public int get_MaxBubblesOnBoard() { }

	[CompilerGenerated]
	public F32 get_MaxGraceChance() { }

	[CompilerGenerated]
	public List<Nullable`1<MetaDuration>> get_MaxTimeSinceBubble() { }

	[CompilerGenerated]
	public F32 get_MinBubbleBehaviourChance() { }

	[CompilerGenerated]
	public F32 get_MinGraceChance() { }

	[CompilerGenerated]
	public List<Nullable`1<MetaDuration>> get_MinTimeSinceBubble() { }

	[CompilerGenerated]
	public F32 get_NonNeededPenalty() { }

	[CompilerGenerated]
	public F32 get_NormalizationQuot() { }

	[CompilerGenerated]
	public int get_RollScale() { }

	[CompilerGenerated]
	public string get_SetupType() { }

	[CompilerGenerated]
	public List<MergeChainId> get_SimplifiedLogicChains() { }

	[CompilerGenerated]
	public void set_BehaviorChanceRecoverySpeed(F32 value) { }

	[CompilerGenerated]
	public void set_BehaviorChanceReduction(F32 value) { }

	[CompilerGenerated]
	public void set_BracketQuot(List<F32> value) { }

	[CompilerGenerated]
	public void set_BubbleCountAdjustmentQuotient(int value) { }

	[CompilerGenerated]
	public void set_ConfigKey(BubblesSetupId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_FirstEncounterQuotient(F32 value) { }

	[CompilerGenerated]
	public void set_GraceChanceReduction(F32 value) { }

	[CompilerGenerated]
	public void set_GraceRecoverySpeed(F32 value) { }

	[CompilerGenerated]
	public void set_HardestTaskBoostQuot(F32 value) { }

	[CompilerGenerated]
	public void set_MaxBubbleBehaviourChance(F32 value) { }

	[CompilerGenerated]
	public void set_MaxBubblesOnBoard(int value) { }

	[CompilerGenerated]
	public void set_MaxGraceChance(F32 value) { }

	[CompilerGenerated]
	public void set_MaxTimeSinceBubble(List<Nullable`1<MetaDuration>> value) { }

	[CompilerGenerated]
	public void set_MinBubbleBehaviourChance(F32 value) { }

	[CompilerGenerated]
	public void set_MinGraceChance(F32 value) { }

	[CompilerGenerated]
	public void set_MinTimeSinceBubble(List<Nullable`1<MetaDuration>> value) { }

	[CompilerGenerated]
	public void set_NonNeededPenalty(F32 value) { }

	[CompilerGenerated]
	public void set_NormalizationQuot(F32 value) { }

	[CompilerGenerated]
	public void set_RollScale(int value) { }

	[CompilerGenerated]
	public void set_SetupType(string value) { }

	[CompilerGenerated]
	public void set_SimplifiedLogicChains(List<MergeChainId> value) { }

	public override BubblesSetup ToConfigData(GameConfigBuildLog buildLog) { }

}

