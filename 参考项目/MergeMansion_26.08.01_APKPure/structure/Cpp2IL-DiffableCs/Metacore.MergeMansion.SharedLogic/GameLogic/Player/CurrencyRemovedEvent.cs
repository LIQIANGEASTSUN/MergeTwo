namespace GameLogic.Player;

public sealed class CurrencyRemovedEvent : CopyableEvent<CurrencyRemovedEvent, Currencies, Int64, Int64, CurrencySink, Int32, EventCurrencyId, AnalyticsContext>
{

	public CurrencyRemovedEvent() { }

	public void Invoke(Currencies currency, long softAmount, long hardAmount, CurrencySink currencySink, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context) { }

}

