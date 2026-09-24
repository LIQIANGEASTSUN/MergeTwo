namespace GameLogic.Config;

[MetaSerializable]
public class SharedProducerSettings : IGameConfigData<SharedProducerSettingsId>, IGameConfigData, IHasGameConfigKey<SharedProducerSettingsId>
{
	[CompilerGenerated]
	private SharedProducerSettingsId <SettingsId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"segment", "value"})]
	private List<ValueTuple`2<PlayerSegmentId, Int32>> <Overrides>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x20

	public override SharedProducerSettingsId ConfigKey
	{
		 get { } //Length: 8
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

	[MetaMember(2, MetaMemberFlags::None (0))]
	[TupleElementNames(new IL2CPP_TYPE_STRING[] {"segment", "value"})]
	private List<ValueTuple`2<PlayerSegmentId, Int32>> Overrides
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private SharedProducerSettingsId SettingsId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public SharedProducerSettings() { }

	public SharedProducerSettings(SharedProducerSettingsId settingsId, List<ValueTuple`2<PlayerSegmentId, Int32>> overrides, int experimentPriority) { }

	public override SharedProducerSettingsId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<ValueTuple`2<PlayerSegmentId, Int32>> get_Overrides() { }

	[CompilerGenerated]
	private SharedProducerSettingsId get_SettingsId() { }

	public bool GetSegmentedMinValue(IPlayer player, out int segmentValue) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Overrides(List<ValueTuple`2<PlayerSegmentId, Int32>> value) { }

	[CompilerGenerated]
	private void set_SettingsId(SharedProducerSettingsId value) { }

}

