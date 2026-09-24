namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class SoloMilestoneTokenSpawnsInfo : IGameConfigData<SoloMilestoneTokenSpawnsId>, IGameConfigData, IHasGameConfigKey<SoloMilestoneTokenSpawnsId>, IComparable<SoloMilestoneTokenSpawnsInfo>
{
	[CompilerGenerated]
	private SoloMilestoneTokenSpawnsId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private SoloMilestoneEventId <EventId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Milestone>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private PlayerSegmentId <Segment>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private StatsTrackingType <TokenSource>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <BaseTokenSpawnChance>k__BackingField; //Field offset: 0x34
	[CompilerGenerated]
	private bool <BaseTokenSpawnEnabled>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private F32 <BaseTokenSpawnMultiplierMin>k__BackingField; //Field offset: 0x3C
	[CompilerGenerated]
	private F32 <BaseTokenSpawnMultiplierMax>k__BackingField; //Field offset: 0x40
	[CompilerGenerated]
	private List<Int32> <Parameters>k__BackingField; //Field offset: 0x48
	[CompilerGenerated]
	private int <SegmentPriority>k__BackingField; //Field offset: 0x50
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x54

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private int BaseTokenSpawnChance
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private bool BaseTokenSpawnEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(9, MetaMemberFlags::None (0))]
	public private F32 BaseTokenSpawnMultiplierMax
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(8, MetaMemberFlags::None (0))]
	public private F32 BaseTokenSpawnMultiplierMin
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override SoloMilestoneTokenSpawnsId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private SoloMilestoneEventId EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
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

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Milestone
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(10, MetaMemberFlags::None (0))]
	public private List<Int32> Parameters
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private PlayerSegmentId Segment
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(11, MetaMemberFlags::None (0))]
	public private int SegmentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private StatsTrackingType TokenSource
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public SoloMilestoneTokenSpawnsInfo() { }

	public SoloMilestoneTokenSpawnsInfo(SoloMilestoneTokenSpawnsId configKey, SoloMilestoneEventId eventId, int milestone, PlayerSegmentId segment, int segmentPriority, StatsTrackingType tokenSource, int baseTokenSpawnChance, bool baseTokenSpawnEnabled, F32 baseTokenSpawnMultiplierMin, F32 baseTokenSpawnMultiplierMax, List<Int32> parameters, int experimentPriority) { }

	public override int CompareTo(SoloMilestoneTokenSpawnsInfo other) { }

	[CompilerGenerated]
	public int get_BaseTokenSpawnChance() { }

	[CompilerGenerated]
	public bool get_BaseTokenSpawnEnabled() { }

	[CompilerGenerated]
	public F32 get_BaseTokenSpawnMultiplierMax() { }

	[CompilerGenerated]
	public F32 get_BaseTokenSpawnMultiplierMin() { }

	[CompilerGenerated]
	public override SoloMilestoneTokenSpawnsId get_ConfigKey() { }

	[CompilerGenerated]
	public SoloMilestoneEventId get_EventId() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public int get_Milestone() { }

	[CompilerGenerated]
	public List<Int32> get_Parameters() { }

	[CompilerGenerated]
	public PlayerSegmentId get_Segment() { }

	[CompilerGenerated]
	public int get_SegmentPriority() { }

	[CompilerGenerated]
	public StatsTrackingType get_TokenSource() { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnChance(int value) { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnEnabled(bool value) { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnMultiplierMax(F32 value) { }

	[CompilerGenerated]
	private void set_BaseTokenSpawnMultiplierMin(F32 value) { }

	[CompilerGenerated]
	private void set_ConfigKey(SoloMilestoneTokenSpawnsId value) { }

	[CompilerGenerated]
	private void set_EventId(SoloMilestoneEventId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Milestone(int value) { }

	[CompilerGenerated]
	private void set_Parameters(List<Int32> value) { }

	[CompilerGenerated]
	private void set_Segment(PlayerSegmentId value) { }

	[CompilerGenerated]
	private void set_SegmentPriority(int value) { }

	[CompilerGenerated]
	private void set_TokenSource(StatsTrackingType value) { }

}

