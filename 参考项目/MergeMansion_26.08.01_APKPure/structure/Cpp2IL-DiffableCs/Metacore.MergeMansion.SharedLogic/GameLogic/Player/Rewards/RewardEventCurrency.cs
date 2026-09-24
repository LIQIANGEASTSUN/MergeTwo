namespace GameLogic.Player.Rewards;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {3})]
[MetaSerializableDerived(12)]
public class RewardEventCurrency : PlayerReward
{
	[CompilerGenerated]
	private EventCurrencyId <EventCurrencyId>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x20

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private EventCurrencyId EventCurrencyId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public RewardEventCurrency() { }

	public RewardEventCurrency(EventCurrencyId eventCurrencyId, int amount, CurrencySource currencySource) { }

	public virtual void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext) { }

	[CompilerGenerated]
	public int get_Amount() { }

	[CompilerGenerated]
	public EventCurrencyId get_EventCurrencyId() { }

	public virtual string Name(IPlayer player) { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_EventCurrencyId(EventCurrencyId value) { }

	public virtual string ToString() { }

	public virtual string TypeString() { }

	public virtual void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries) { }

}

