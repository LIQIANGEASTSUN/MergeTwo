namespace GameLogic.Player;

public sealed class CurrencyAddedEvent : CopyableEvent<CurrencyAddedEvent, Currencies, Int64, Int64, CurrencySource, Int32, EventCurrencyId, AnalyticsContext>
{

	public CurrencyAddedEvent() { }

	public void Invoke(Currencies currency, long softAmount, long hardAmount, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context) { }

}

