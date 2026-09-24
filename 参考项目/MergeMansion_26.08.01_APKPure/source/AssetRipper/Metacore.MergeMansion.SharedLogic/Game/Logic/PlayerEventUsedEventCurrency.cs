using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;

namespace Game.Logic
{
	[AnalyticsEvent(18, "Event Currency used", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "event", "buysell" })]
	public class PlayerEventUsedEventCurrency : PlayerEventUsedCurrencyBase
	{
		public override Currencies Currency => default(Currencies);

		[MetaMember(101, MetaMemberFlags.None)]
		public EventCurrencyId EventCurrencyId { get; set; }

		public PlayerEventUsedEventCurrency()
		{
		}

		public PlayerEventUsedEventCurrency(Option<EventCurrencyId> eventCurrencyIdOption, long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse, AnalyticsContext context, string flashSaleContext)
		{
		}

		public override string GetCurrencyName()
		{
			return null;
		}
	}
}
