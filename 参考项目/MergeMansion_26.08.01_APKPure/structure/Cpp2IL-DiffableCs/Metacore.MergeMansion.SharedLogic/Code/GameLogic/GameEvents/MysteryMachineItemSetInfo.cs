namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineItemSetInfo : IGameConfigData<MysteryMachineItemSetId>, IGameConfigData, IHasGameConfigKey<MysteryMachineItemSetId>
{
	[CompilerGenerated]
	private MysteryMachineItemSetId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<MetaRef`1<MysteryMachineItemInfo>> <ItemRefs>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineItemSetId ConfigKey
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
	public private List<MetaRef`1<MysteryMachineItemInfo>> ItemRefs
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineItemSetInfo() { }

	public MysteryMachineItemSetInfo(MysteryMachineItemSetId configKey, List<MetaRef`1<MysteryMachineItemInfo>> itemRefs, int experimentPriority) { }

	[CompilerGenerated]
	public override MysteryMachineItemSetId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<MetaRef`1<MysteryMachineItemInfo>> get_ItemRefs() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineItemSetId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemRefs(List<MetaRef`1<MysteryMachineItemInfo>> value) { }

}

