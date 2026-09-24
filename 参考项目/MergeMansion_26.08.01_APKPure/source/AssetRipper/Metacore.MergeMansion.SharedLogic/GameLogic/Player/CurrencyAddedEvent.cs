using Code.GameLogic.GameEvents;
using Metaplay.Core;

namespace GameLogic.Player
{
	public sealed class CurrencyAddedEvent : CopyableEvent<CurrencyAddedEvent, Currencies, long, long, CurrencySource, int, EventCurrencyId, AnalyticsContext>
	{
		public new void Invoke(Currencies currency, long softAmount, long hardAmount, CurrencySource currencySource, int itemId, EventCurrencyId eventCurrencyId, AnalyticsContext context)
		{
		}
	}
}
