namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineSpecialItemInfo : IGameConfigData<MysteryMachineSpecialItemItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineSpecialItemItemId>
{
	[CompilerGenerated]
	private MysteryMachineSpecialItemItemId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ItemId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<MysteryMachineSpecialityType> <SpecialityType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineSpecialItemItemId ConfigKey
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
	public private int ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private List<MysteryMachineSpecialityType> SpecialityType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineSpecialItemInfo() { }

	public MysteryMachineSpecialItemInfo(MysteryMachineSpecialItemItemId configKey, int itemId, List<MysteryMachineSpecialityType> specialityType, int experimentPriority) { }

	[CompilerGenerated]
	public override MysteryMachineSpecialItemItemId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public int get_ItemId() { }

	[CompilerGenerated]
	public List<MysteryMachineSpecialityType> get_SpecialityType() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineSpecialItemItemId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemId(int value) { }

	[CompilerGenerated]
	private void set_SpecialityType(List<MysteryMachineSpecialityType> value) { }

}

