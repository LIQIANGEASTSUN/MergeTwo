namespace Code.GameLogic.GameEvents;

[MetaSerializable]
public class MysteryMachineItemScore : IGameConfigData<MysteryMachineItemScoreId>, IGameConfigData, IHasGameConfigKey<MysteryMachineItemScoreId>
{
	[CompilerGenerated]
	private MysteryMachineItemScoreId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private string <ItemId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Score>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <Multiplier>k__BackingField; //Field offset: 0x24
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override MysteryMachineItemScoreId ConfigKey
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
	public private string ItemId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private int Multiplier
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private int Score
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public MysteryMachineItemScore() { }

	public MysteryMachineItemScore(MysteryMachineItemScoreId configKey, string item, int score, int multiplier, int experimentPriority) { }

	[CompilerGenerated]
	public override MysteryMachineItemScoreId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public string get_ItemId() { }

	[CompilerGenerated]
	public int get_Multiplier() { }

	[CompilerGenerated]
	public int get_Score() { }

	[CompilerGenerated]
	private void set_ConfigKey(MysteryMachineItemScoreId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_ItemId(string value) { }

	[CompilerGenerated]
	private void set_Multiplier(int value) { }

	[CompilerGenerated]
	private void set_Score(int value) { }

}

