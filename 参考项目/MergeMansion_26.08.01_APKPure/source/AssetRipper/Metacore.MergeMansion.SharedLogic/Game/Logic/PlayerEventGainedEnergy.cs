using GameLogic.Player;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;

namespace Game.Logic
{
	[AnalyticsEvent(13, "Gained energy", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "energy" })]
	public class PlayerEventGainedEnergy : PlayerEventGainedCurrency
	{
		[MetaMember(100, MetaMemberFlags.None)]
		public EnergyType EnergyType { get; set; }

		public override string EventDescription => null;

		public PlayerEventGainedEnergy()
		{
		}

		public PlayerEventGainedEnergy(EnergyType type, long amount, CurrencySource currencySource, long total, AnalyticsContext context)
		{
		}
	}
}
