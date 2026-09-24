namespace GameLogic.Player.Rewards;

[MetaSerializableDerived(36)]
public class RewardProgressionEventPoints : PlayerReward
{
	private const string DailyChallengeReward = "DailyChallengeReward"; //Field offset: 0x0
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x14

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardProgressionEventPoints() { }

	public RewardProgressionEventPoints(int amount, CurrencySource source) { }

	public virtual void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public int get_Amount() { }

	public IItemDefinition GetEventItem(IPlayer player) { }

	public Option<ProgressionEventModel> GetEventModel(IPlayer player) { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

