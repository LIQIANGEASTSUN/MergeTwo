namespace Code.GameLogic.GameEvents;

public class MysteryMachineItemScoreSource : IConfigItemSource<MysteryMachineItemScore, MysteryMachineItemScoreId>, IGameConfigSourceItem<MysteryMachineItemScoreId, MysteryMachineItemScore>, IHasGameConfigKey<MysteryMachineItemScoreId>
{
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private MysteryMachineItemScoreId <ConfigKey>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private string <ItemType>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private string <ItemId>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private int <Score>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private int <Multiplier>k__BackingField; //Field offset: 0x34

	public private override MysteryMachineItemScoreId ConfigKey
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

	private int Multiplier
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private int Score
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineItemScoreSource() { }

	[CompilerGenerated]
	public override MysteryMachineItemScoreId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private string get_ItemId() { }

	[CompilerGenerated]
	private string get_ItemType() { }

	[CompilerGenerated]
	private int get_Multiplier() { }

	[CompilerGenerated]
	private int get_Score() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineItemScoreId value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemId(string value) { }

	[CompilerGenerated]
	private void set_ItemType(string value) { }

	[CompilerGenerated]
	private void set_Multiplier(int value) { }

	[CompilerGenerated]
	private void set_Score(int value) { }

	public override MysteryMachineItemScore ToConfigData(GameConfigBuildLog buildLog) { }

}

