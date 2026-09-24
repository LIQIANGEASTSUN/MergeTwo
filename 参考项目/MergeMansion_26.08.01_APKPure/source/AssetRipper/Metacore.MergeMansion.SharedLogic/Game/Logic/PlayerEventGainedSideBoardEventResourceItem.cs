using GameLogic.Player;
using Metaplay.Core.Analytics;

namespace Game.Logic
{
	[AnalyticsEvent(24, "Gained sideBoardEvent resourceItem", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "item", "event" })]
	public class PlayerEventGainedSideBoardEventResourceItem : PlayerEventGainedCurrency
	{
		public override string EventDescription => null;

		public PlayerEventGainedSideBoardEventResourceItem()
		{
		}

		public PlayerEventGainedSideBoardEventResourceItem(long amount, CurrencySource currencySource, long total, AnalyticsContext context)
		{
		}
	}
}
