namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(33)]
public class RewardMysteryMachineLevelUp : PlayerReward
{

	public RewardMysteryMachineLevelUp() { }

	public virtual void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext) { }

	public virtual string Name(IPlayer player) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

