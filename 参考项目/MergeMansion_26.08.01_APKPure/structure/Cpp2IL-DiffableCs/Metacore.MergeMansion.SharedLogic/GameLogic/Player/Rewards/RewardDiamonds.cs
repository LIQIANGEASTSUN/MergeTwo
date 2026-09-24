namespace GameLogic.Player.Rewards;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {2})]
[MetaSerializableDerived(3)]
public class RewardDiamonds : PlayerReward, ICurrencyReward
{
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x14

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[JsonIgnore]
	public override Currencies Currency
	{
		 get { } //Length: 8
	}

	public RewardDiamonds() { }

	public RewardDiamonds(int amount, CurrencySource currencySource) { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public override int get_Amount() { }

	public override Currencies get_Currency() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

