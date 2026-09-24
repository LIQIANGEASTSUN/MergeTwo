namespace Code.GameLogic.GameEvents;

public class MysteryMachineSpecialItemSource : IConfigItemSource<MysteryMachineSpecialItemInfo, MysteryMachineSpecialItemItemId>, IGameConfigSourceItem<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo>, IHasGameConfigKey<MysteryMachineSpecialItemItemId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineSpecialItemItemId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <ItemId>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<MysteryMachineSpecialityType> <Speciality>k__BackingField; //Field offset: 0x28

	public private override MysteryMachineSpecialItemItemId ConfigKey
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

	private List<MysteryMachineSpecialityType> Speciality
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineSpecialItemSource() { }

	[CompilerGenerated]
	public override MysteryMachineSpecialItemItemId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_ItemId() { }

	[CompilerGenerated]
	private List<MysteryMachineSpecialityType> get_Speciality() { }

	private int ResolveItem() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineSpecialItemItemId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemId(string value) { }

	[CompilerGenerated]
	private void set_Speciality(List<MysteryMachineSpecialityType> value) { }

	public override MysteryMachineSpecialItemInfo ToConfigData(GameConfigBuildLog buildLog) { }

}

