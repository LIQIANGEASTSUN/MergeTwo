using Code.GameLogic.GameEvents;
using Metaplay.Core;

namespace GameLogic.Player
{
	public sealed class CurrencyRemovedEvent : CopyableEvent<CurrencyRemovedEvent, Currencies, long, long, CurrencySink, int, EventCurrencyId, AnalyticsContext>
	{
		public new void Invoke(Currencies currency, long softAmount, long hardAmount, CurrencySink currencySink, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
		{
		}
	}
}
