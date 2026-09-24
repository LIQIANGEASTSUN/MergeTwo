namespace Code.GameLogic.GameEvents;

public class MysteryMachineItemSource : IConfigItemSource<MysteryMachineItemInfo, MysteryMachineItemId>, IGameConfigSourceItem<MysteryMachineItemId, MysteryMachineItemInfo>, IHasGameConfigKey<MysteryMachineItemId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineItemId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <ItemType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <ItemId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private List<Int32> <WeightsBasedClicks>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private List<Int32> <WeightsBasedHeat>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private F64 <CameraMultiplier>k__BackingField; //Field offset: 0x40

	private F64 CameraMultiplier
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public private override MysteryMachineItemId ConfigKey
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

	private string ItemId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string ItemType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> WeightsBasedClicks
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private List<Int32> WeightsBasedHeat
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineItemSource() { }

	[CompilerGenerated]
	private F64 get_CameraMultiplier() { }

	[CompilerGenerated]
	public override MysteryMachineItemId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_ItemId() { }

	[CompilerGenerated]
	private string get_ItemType() { }

	[CompilerGenerated]
	private List<Int32> get_WeightsBasedClicks() { }

	[CompilerGenerated]
	private List<Int32> get_WeightsBasedHeat() { }

	private IMysteryMachineItem ResolveItem() { }

	[CompilerGenerated]
	private void set_CameraMultiplier(F64 value) { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineItemId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemId(string value) { }

	[CompilerGenerated]
	private void set_ItemType(string value) { }

	[CompilerGenerated]
	private void set_WeightsBasedClicks(List<Int32> value) { }

	[CompilerGenerated]
	private void set_WeightsBasedHeat(List<Int32> value) { }

	public override MysteryMachineItemInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

