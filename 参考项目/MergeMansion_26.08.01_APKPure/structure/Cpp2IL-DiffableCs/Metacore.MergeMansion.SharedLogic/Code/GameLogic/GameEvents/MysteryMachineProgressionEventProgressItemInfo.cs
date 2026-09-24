namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineProgressionEventProgressItemInfo : IGameConfigData<MysteryMachineProgressionEventProgressItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemId>
{
	[CompilerGenerated]
	private MysteryMachineProgressionEventProgressItemId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x1C

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineProgressionEventProgressItemId ConfigKey
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

	public MysteryMachineProgressionEventProgressItemInfo() { }

	public MysteryMachineProgressionEventProgressItemInfo(MysteryMachineProgressionEventProgressItemId configKey, int amount, int experimentPriority) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public override MysteryMachineProgressionEventProgressItemId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineProgressionEventProgressItemId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

}

