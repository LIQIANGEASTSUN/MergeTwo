namespace GameLogic.Player.Rewards;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {1})]
[MetaSerializableDerived(14)]
public class RewardEventPoints : PlayerReward
{
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x14

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardEventPoints() { }

	public RewardEventPoints(int amount, CurrencySource currencySource) { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public int get_Amount() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

