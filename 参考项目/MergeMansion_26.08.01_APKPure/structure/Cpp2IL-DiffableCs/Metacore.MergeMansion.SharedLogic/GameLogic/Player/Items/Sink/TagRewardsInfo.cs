namespace GameLogic.Player.Items.Sink;

[MetaSerializable]
public class TagRewardsInfo : IGameConfigData<String>, IGameConfigData, IHasGameConfigKey<String>
{
	[CompilerGenerated]
	private string <ConfigKey>k__BackingField; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	public int TotalPoints; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	public string RewardTagName; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	public IItemProducer ItemProducer; //Field offset: 0x28
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x30

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override string ConfigKey
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

	public TagRewardsInfo() { }

	public TagRewardsInfo(string configKey, int totalPoints, string rewardTagName, IItemProducer itemProducer, int experimentPriority) { }

	[CompilerGenerated]
	public override string get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private void set_ConfigKey(string value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

}

