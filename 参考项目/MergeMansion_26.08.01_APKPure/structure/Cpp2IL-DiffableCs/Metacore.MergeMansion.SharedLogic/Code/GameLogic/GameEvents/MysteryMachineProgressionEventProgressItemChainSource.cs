namespace Code.GameLogic.GameEvents;

public class MysteryMachineProgressionEventProgressItemChainSource : IConfigItemSource<MysteryMachineProgressionEventProgressItemChainInfo, MysteryMachineProgressionEventProgressItemChainId>, IGameConfigSourceItem<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo>, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemChainId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineProgressionEventProgressItemChainId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineProgressionEventProgressItemInfo>> <Items>k__BackingField; //Field offset: 0x20

	public private override MysteryMachineProgressionEventProgressItemChainId ConfigKey
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

	private List<MetaRef`1<MysteryMachineProgressionEventProgressItemInfo>> Items
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineProgressionEventProgressItemChainSource() { }

	[CompilerGenerated]
	public override MysteryMachineProgressionEventProgressItemChainId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineProgressionEventProgressItemInfo>> get_Items() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineProgressionEventProgressItemChainId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Items(List<MetaRef`1<MysteryMachineProgressionEventProgressItemInfo>> value) { }

	public override MysteryMachineProgressionEventProgressItemChainInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

