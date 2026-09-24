namespace GameLogic.Config.Costs;

[MetaSerializableDerived(2)]
public class EventCurrencyCost : CurrencyCost
{
	[CompilerGenerated]
	private EventCurrencyId <EventCurrencyId>k__BackingField; //Field offset: 0x18

	public virtual Currencies Currency
	{
		 get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private EventCurrencyId EventCurrencyId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private EventCurrencyCost() { }

	public EventCurrencyCost(EventCurrencyId eventCurrencyId, long currencyAmount) { }

	public virtual CurrencyCost Clone(long currencyAmount) { }

	public virtual Currencies get_Currency() { }

	[CompilerGenerated]
	public EventCurrencyId get_EventCurrencyId() { }

	[CompilerGenerated]
	private void set_EventCurrencyId(EventCurrencyId value) { }

	public virtual string ToString() { }

	public virtual void WithdrawFrom(PlayerModel playerModel) { }

}

