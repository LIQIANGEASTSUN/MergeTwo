namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(32)]
public class RewardMysteryMachineIncreaseBaseScoreMultiplier : PlayerReward
{
	[CompilerGenerated]
	private F64 <ScoreMultiplierIncrease>k__BackingField; //Field offset: 0x18

	[MetaFormFieldCustomValidator(typeof(GameLogic.Player.Rewards.RewardAmountValidator`1<Metaplay.Core.Math.F64>))]
	[MetaMember(1, MetaMemberFlags::None (0))]
	public private F64 ScoreMultiplierIncrease
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardMysteryMachineIncreaseBaseScoreMultiplier() { }

	public RewardMysteryMachineIncreaseBaseScoreMultiplier(F64 scoreMultiplierIncrease) { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public F64 get_ScoreMultiplierIncrease() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_ScoreMultiplierIncrease(F64 value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

