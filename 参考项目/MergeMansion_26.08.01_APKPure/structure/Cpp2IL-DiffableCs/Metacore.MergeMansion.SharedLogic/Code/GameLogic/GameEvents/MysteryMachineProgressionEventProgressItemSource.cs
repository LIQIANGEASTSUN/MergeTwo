namespace Code.GameLogic.GameEvents;

public class MysteryMachineProgressionEventProgressItemSource : IConfigItemSource<MysteryMachineProgressionEventProgressItemInfo, MysteryMachineProgressionEventProgressItemId>, IGameConfigSourceItem<MysteryMachineProgressionEventProgressItemId, MysteryMachineProgressionEventProgressItemInfo>, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineProgressionEventProgressItemId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x20

	private int Amount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override MysteryMachineProgressionEventProgressItemId ConfigKey
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

	public MysteryMachineProgressionEventProgressItemSource() { }

	[CompilerGenerated]
	private int get_Amount() { }

	[CompilerGenerated]
	public override MysteryMachineProgressionEventProgressItemId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineProgressionEventProgressItemId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	public override MysteryMachineProgressionEventProgressItemInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

