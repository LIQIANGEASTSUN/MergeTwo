namespace Code.GameLogic.GameEvents;

public class MysteryMachineItemSetSource : IConfigItemSource<MysteryMachineItemSetInfo, MysteryMachineItemSetId>, IGameConfigSourceItem<MysteryMachineItemSetId, MysteryMachineItemSetInfo>, IHasGameConfigKey<MysteryMachineItemSetId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineItemSetId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineItemInfo>> <Items>k__BackingField; //Field offset: 0x20

	public private override MysteryMachineItemSetId ConfigKey
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

	private List<MetaRef`1<MysteryMachineItemInfo>> Items
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineItemSetSource() { }

	[CompilerGenerated]
	public override MysteryMachineItemSetId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineItemInfo>> get_Items() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineItemSetId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Items(List<MetaRef`1<MysteryMachineItemInfo>> value) { }

	public override MysteryMachineItemSetInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

