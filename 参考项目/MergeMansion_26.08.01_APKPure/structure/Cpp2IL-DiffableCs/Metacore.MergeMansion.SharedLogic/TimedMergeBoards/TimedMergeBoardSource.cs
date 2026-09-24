namespace TimedMergeBoards;

public class TimedMergeBoardSource : IConfigItemSource<TimedMergeBoard, MergeBoardId>, IGameConfigSourceItem<MergeBoardId, TimedMergeBoard>, IHasGameConfigKey<MergeBoardId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MergeBoardId <EventId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private MergeBoardGeneratorId <GeneratorId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private MetaDuration <Duration>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private string <FinalItemId>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<String> <RequirementType>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private List<String> <RequirementId>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<String> <RequirementAmount>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private List<String> <RequirementAux0>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private List<String> <CompleteRequirementType>k__BackingField; //Field offset: 0x58
	[CompilerGenerated]
	private List<String> <CompleteRequirementId>k__BackingField; //Field offset: 0x60
	[CompilerGenerated]
	private List<String> <CompleteRequirementAmount>k__BackingField; //Field offset: 0x68
	[CompilerGenerated]
	private List<String> <CompleteRequirementAux0>k__BackingField; //Field offset: 0x70
	[CompilerGenerated]
	private List<MetaRef`1<EventLevelInfo>> <LevelInfos>k__BackingField; //Field offset: 0x78

	private List<String> CompleteRequirementAmount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> CompleteRequirementAux0
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> CompleteRequirementId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<String> CompleteRequirementType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override MergeBoardId ConfigKey
	{
		 get { } //Length: 8
	}

	private MetaDuration Duration
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeBoardId EventId
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

	private string FinalItemId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeBoardGeneratorId GeneratorId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private List<MetaRef`1<EventLevelInfo>> LevelInfos
	{
		[CompilerGenerated]
		 get { } //Length: 8
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
		private set { } //Length: 8
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

	public TimedMergeBoardSource() { }

	[CompilerGenerated]
	private List<String> get_CompleteRequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_CompleteRequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_CompleteRequirementId() { }

	[CompilerGenerated]
	private List<String> get_CompleteRequirementType() { }

	public override MergeBoardId get_ConfigKey() { }

	[CompilerGenerated]
	private MetaDuration get_Duration() { }

	[CompilerGenerated]
	private MergeBoardId get_EventId() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_FinalItemId() { }

	[CompilerGenerated]
	private MergeBoardGeneratorId get_GeneratorId() { }

	[CompilerGenerated]
	public List<MetaRef`1<EventLevelInfo>> get_LevelInfos() { }

	[CompilerGenerated]
	private List<String> get_RequirementAmount() { }

	[CompilerGenerated]
	private List<String> get_RequirementAux0() { }

	[CompilerGenerated]
	private List<String> get_RequirementId() { }

	[CompilerGenerated]
	private List<String> get_RequirementType() { }

	[CompilerGenerated]
	private void set_CompleteRequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_CompleteRequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_CompleteRequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_CompleteRequirementType(List<String> value) { }

	[CompilerGenerated]
	private void set_Duration(MetaDuration value) { }

	[CompilerGenerated]
	private void set_EventId(MergeBoardId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_FinalItemId(string value) { }

	[CompilerGenerated]
	private void set_GeneratorId(MergeBoardGeneratorId value) { }

	[CompilerGenerated]
	private void set_LevelInfos(List<MetaRef`1<EventLevelInfo>> value) { }

	[CompilerGenerated]
	private void set_RequirementAmount(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementAux0(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementId(List<String> value) { }

	[CompilerGenerated]
	private void set_RequirementType(List<String> value) { }

	public override TimedMergeBoard ToConfigData(GameConfigBuildLog buildLog) { }

}

