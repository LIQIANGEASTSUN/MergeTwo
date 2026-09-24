namespace GameLogic.Player.Items.Merging;

[MetaSerializable]
public class MergeReward : IGameConfigData<MergeRewardId>, IGameConfigData, IHasGameConfigKey<MergeRewardId>
{
	[CompilerGenerated]
	private MergeRewardId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ExperienceRequired>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<PlayerReward> <Rewards>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public override MergeRewardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int ExperienceRequired
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(999, MetaMemberFlags::None (0))]
	[MetaSerializerOmitNull]
	public override int ExperimentPriority
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public List<PlayerReward> Rewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public MergeReward() { }

	private static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override MergeRewardId get_ConfigKey() { }

	[CompilerGenerated]
	public int get_ExperienceRequired() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public List<PlayerReward> get_Rewards() { }

	[CompilerGenerated]
	public void set_ConfigKey(MergeRewardId value) { }

	[CompilerGenerated]
	public void set_ExperienceRequired(int value) { }

	[CompilerGenerated]
	public void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	public void set_Rewards(List<PlayerReward> value) { }

}

