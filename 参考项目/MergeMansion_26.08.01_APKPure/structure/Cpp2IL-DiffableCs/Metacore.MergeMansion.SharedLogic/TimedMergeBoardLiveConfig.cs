//Type is in global namespace

[MetaSerializable]
public sealed class TimedMergeBoardLiveConfig : IGameConfigData<MergeBoardId>, IGameConfigData, IHasGameConfigKey<MergeBoardId>
{
	[CompilerGenerated]
	private MergeBoardId <MergeBoardId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x1C

	public override MergeBoardId ConfigKey
	{
		 get { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public bool IsEnabled
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public MergeBoardId MergeBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public TimedMergeBoardLiveConfig() { }

	public override MergeBoardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	public MergeBoardId get_MergeBoardId() { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	public void set_MergeBoardId(MergeBoardId value) { }

}

