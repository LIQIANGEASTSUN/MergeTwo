namespace GameLogic.Player.Items.Bubble;

[MetaSerializable]
public class BubblesSetup : IGameConfigData<BubblesSetupId>, IGameConfigData, IHasGameConfigKey<BubblesSetupId>
{
	[CompilerGenerated]
	private BubblesSetupId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IBubbleLogic <Logic>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override BubblesSetupId ConfigKey
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

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private IBubbleLogic Logic
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public BubblesSetup() { }

	public BubblesSetup(BubblesSetupId configKey, IBubbleLogic logic, int experimentPriority) { }

	[CompilerGenerated]
	public override BubblesSetupId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public IBubbleLogic get_Logic() { }

	[CompilerGenerated]
	private void set_ConfigKey(BubblesSetupId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Logic(IBubbleLogic value) { }

}

