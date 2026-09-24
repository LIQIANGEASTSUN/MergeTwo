namespace GameLogic.Codex;

[MetaSerializable]
public class CodexDiscoveryRewardInfo : IGameConfigData<CodexDiscoveryRewardId>, IGameConfigData, IHasGameConfigKey<CodexDiscoveryRewardId>
{
	[CompilerGenerated]
	private CodexDiscoveryRewardId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private PlayerReward <DiscoveryCompletionReward>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<PlayerReward> <DiscoveryRewards>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x28

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override CodexDiscoveryRewardId ConfigKey
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerReward")]
	public PlayerReward DiscoveryCompletionReward
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
	public List<PlayerReward> DiscoveryRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
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

	public CodexDiscoveryRewardInfo() { }

	public CodexDiscoveryRewardInfo(CodexDiscoveryRewardId configKey, PlayerReward discoveryCompletionReward, List<PlayerReward> discoveryRewards, int experimentPriority) { }

	private static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams) { }

	private static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override CodexDiscoveryRewardId get_ConfigKey() { }

	[CompilerGenerated]
	public PlayerReward get_DiscoveryCompletionReward() { }

	[CompilerGenerated]
	public List<PlayerReward> get_DiscoveryRewards() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	private void set_ConfigKey(CodexDiscoveryRewardId value) { }

	[CompilerGenerated]
	public void set_DiscoveryCompletionReward(PlayerReward value) { }

	[CompilerGenerated]
	public void set_DiscoveryRewards(List<PlayerReward> value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

}

