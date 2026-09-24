namespace Game.Logic;

[AnalyticsEvent(24, "Gained sideBoardEvent resourceItem", 1, null, True, False, False)]
[AnalyticsEventKeywords(new IL2CPP_TYPE_STRING[] {"item", "event"})]
public class PlayerEventGainedSideBoardEventResourceItem : PlayerEventGainedCurrency
{

	public virtual string EventDescription
	{
		 get { } //Length: 528
	}

	public PlayerEventGainedSideBoardEventResourceItem() { }

	public PlayerEventGainedSideBoardEventResourceItem(long amount, CurrencySource currencySource, long total, AnalyticsContext context) { }

	public virtual string get_EventDescription() { }

}

