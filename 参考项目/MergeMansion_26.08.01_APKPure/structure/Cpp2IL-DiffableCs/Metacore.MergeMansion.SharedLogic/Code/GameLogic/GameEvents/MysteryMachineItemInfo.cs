namespace Code.GameLogic.GameEvents;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
[MetaSerializable]
public class MysteryMachineItemInfo : IGameConfigData<MysteryMachineItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineItemId>
{
	[CompilerGenerated]
	private MysteryMachineItemId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private IMysteryMachineItem <Item>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private F64 <CameraMultiplier>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<Int32> <WeightsBasedClicks>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<Int32> <WeightsBasedHeat>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x38

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private F64 CameraMultiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineItemId ConfigKey
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
	public private IMysteryMachineItem Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private List<Int32> WeightsBasedClicks
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	public private List<Int32> WeightsBasedHeat
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineItemInfo() { }

	public MysteryMachineItemInfo(MysteryMachineItemId configKey, IMysteryMachineItem item, List<Int32> weightsBasedClicks, List<Int32> weightsBasedHeat, F64 cameraMultiplier, int experimentPriority) { }

	[CompilerGenerated]
	public F64 get_CameraMultiplier() { }

	[CompilerGenerated]
	public override MysteryMachineItemId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public IMysteryMachineItem get_Item() { }

	[CompilerGenerated]
	public List<Int32> get_WeightsBasedClicks() { }

	[CompilerGenerated]
	public List<Int32> get_WeightsBasedHeat() { }

	[CompilerGenerated]
	private void set_CameraMultiplier(F64 value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineItemId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Item(IMysteryMachineItem value) { }

	[CompilerGenerated]
	private void set_WeightsBasedClicks(List<Int32> value) { }

	[CompilerGenerated]
	private void set_WeightsBasedHeat(List<Int32> value) { }

}

