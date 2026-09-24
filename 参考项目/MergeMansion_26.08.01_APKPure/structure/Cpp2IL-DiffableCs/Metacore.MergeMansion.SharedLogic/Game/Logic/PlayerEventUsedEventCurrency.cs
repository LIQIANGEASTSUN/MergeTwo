namespace Game.Logic;

[AnalyticsEvent(18, "Event Currency used", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"event", "buysell"})]
public class PlayerEventUsedEventCurrency : PlayerEventUsedCurrencyBase
{
	[CompilerGenerated]
	private EventCurrencyId <EventCurrencyId>k__BackingField; //Field offset: 0x40

	public virtual Currencies Currency
	{
		 get { } //Length: 8
	}

	[MetaMember(101, MetaMemberFlags::None (0))]
	private EventCurrencyId EventCurrencyId
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PlayerEventUsedEventCurrency() { }

	public PlayerEventUsedEventCurrency(Option<EventCurrencyId> eventCurrencyIdOption, long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse, AnalyticsContext context, string flashSaleContext) { }

	public virtual Currencies get_Currency() { }

	[CompilerGenerated]
	private EventCurrencyId get_EventCurrencyId() { }

	public virtual string GetCurrencyName() { }

	[CompilerGenerated]
	private void set_EventCurrencyId(EventCurrencyId value) { }

}

