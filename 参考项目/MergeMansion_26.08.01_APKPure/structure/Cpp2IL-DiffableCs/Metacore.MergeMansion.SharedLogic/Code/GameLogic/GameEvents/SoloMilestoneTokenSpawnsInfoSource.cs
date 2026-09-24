namespace Code.GameLogic.GameEvents;

public class SoloMilestoneTokenSpawnsInfoSource : IConfigItemSource<SoloMilestoneTokenSpawnsInfo, SoloMilestoneTokenSpawnsId>, IGameConfigSourceItem<SoloMilestoneTokenSpawnsId, SoloMilestoneTokenSpawnsInfo>, IHasGameConfigKey<SoloMilestoneTokenSpawnsId>
{
	private const char DashMarker = '\u2D'; //Field offset: 0x0
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private SoloMilestoneTokenSpawnsId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <BaseTokenSpawnMultiplier>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <BaseTokenSpawnChance>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private bool <BaseTokenSpawnEnabled>k__BackingField; //Field offset: 0x2C
	[CompilerGenerated]
	private string <EventId>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <Milestone>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private string <Segment>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private int <SegmentPriority>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private StatsTrackingType <TokenSource>k__BackingField; //Field offset: 0x4C
	[CompilerGenerated]
	private string <Parameters>k__BackingField; //Field offset: 0x50

	public private int BaseTokenSpawnChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private bool BaseTokenSpawnEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private string BaseTokenSpawnMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override SoloMilestoneTokenSpawnsId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private string EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
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

	public private int Milestone
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private string Parameters
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private string Segment
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private int SegmentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private StatsTrackingType TokenSource
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public SoloMilestoneTokenSpawnsInfoSource() { }

	[CompilerGenerated]
	public int get_BaseTokenSpawnChance() { }

	[CompilerGenerated]
	public bool get_BaseTokenSpawnEnabled() { }

	[CompilerGenerated]
	public string get_BaseTokenSpawnMultiplier() { }

	[CompilerGenerated]
	public override SoloMilestoneTokenSpawnsId get_ConfigKey() { }

	[CompilerGenerated]
	public string get_EventId() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public int get_Milestone() { }

	[CompilerGenerated]
	public string get_Parameters() { }

	[CompilerGenerated]
	public string get_Segment() { }

	[CompilerGenerated]
	public int get_SegmentPriority() { }

	[CompilerGenerated]
	public StatsTrackingType get_TokenSource() { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnChance(int value) { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnEnabled(bool value) { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnMultiplier(string value) { }

	[CompilerGenerated]
	private void set_ConfigKey(SoloMilestoneTokenSpawnsId value) { }

	[CompilerGenerated]
	private void set_EventId(string value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Milestone(int value) { }

	[CompilerGenerated]
	private void set_Parameters(string value) { }

	[CompilerGenerated]
	private void set_Segment(string value) { }

	[CompilerGenerated]
	private void set_SegmentPriority(int value) { }

	[CompilerGenerated]
	private void set_TokenSource(StatsTrackingType value) { }

	public override SoloMilestoneTokenSpawnsInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

