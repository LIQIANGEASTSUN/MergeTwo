namespace GameLogic.Player.Items.Fishing;

[MetaSerializable]
public class WeightStarRewardData : IWeightStarRewardData
{
	[CompilerGenerated]
	private F32 <Weight>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private PlayerReward <Reward>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixPlayerReward")]
	public private override PlayerReward Reward
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override F32 Weight
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private WeightStarRewardData() { }

	public WeightStarRewardData(F32 weight, PlayerReward reward) { }

	private static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public override PlayerReward get_Reward() { }

	[CompilerGenerated]
	public override F32 get_Weight() { }

	[CompilerGenerated]
	private void set_Reward(PlayerReward value) { }

	[CompilerGenerated]
	private void set_Weight(F32 value) { }

}

