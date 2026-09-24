namespace GameLogic.Fallbacks;

[MetaSerializable]
public class FallbackPlayerRewardInfo : IGameConfigData<FallbackPlayerRewardId>, IGameConfigData, IHasGameConfigKey<FallbackPlayerRewardId>, IValidatable
{
	public const string SHEET_NAME = "FallbackPlayerRewards"; //Field offset: 0x0
	[CompilerGenerated]
	private FallbackPlayerRewardId <ConfigKey>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private PlayerReward <Reward>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperimentPriority>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override FallbackPlayerRewardId ConfigKey
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
	[MetaOnMemberDeserializationFailure("FixPlayerReward")]
	public private PlayerReward Reward
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public FallbackPlayerRewardInfo() { }

	public FallbackPlayerRewardInfo(FallbackPlayerRewardId fallbackPlayerRewardId, PlayerReward reward, int experimentPriority) { }

	private static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override FallbackPlayerRewardId get_ConfigKey() { }

	[CompilerGenerated]
	public override int get_ExperimentPriority() { }

	[CompilerGenerated]
	public PlayerReward get_Reward() { }

	[CompilerGenerated]
	private void set_ConfigKey(FallbackPlayerRewardId value) { }

	[CompilerGenerated]
	private void set_ExperimentPriority(int value) { }

	[CompilerGenerated]
	private void set_Reward(PlayerReward value) { }

	public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

