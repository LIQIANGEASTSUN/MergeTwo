namespace GameLogic.Config;

public class SharedProducerSettingsSource : IConfigItemSource<SharedProducerSettings, SharedProducerSettingsId>, IGameConfigSourceItem<SharedProducerSettingsId, SharedProducerSettings>, IHasGameConfigKey<SharedProducerSettingsId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private SharedProducerSettingsId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<PlayerSegmentId> <Segment>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Int32> <Value>k__BackingField; //Field offset: 0x28

	public override SharedProducerSettingsId ConfigKey
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

	private List<PlayerSegmentId> Segment
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> Value
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public SharedProducerSettingsSource() { }

	[CompilerGenerated]
	public override SharedProducerSettingsId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<PlayerSegmentId> get_Segment() { }

	[CompilerGenerated]
	private List<Int32> get_Value() { }

	[CompilerGenerated]
	public void set_ConfigKey(SharedProducerSettingsId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Segment(List<PlayerSegmentId> value) { }

	[CompilerGenerated]
	private void set_Value(List<Int32> value) { }

	public override SharedProducerSettings ToConfigData(GameConfigBuildLog buildLog) { }

}

