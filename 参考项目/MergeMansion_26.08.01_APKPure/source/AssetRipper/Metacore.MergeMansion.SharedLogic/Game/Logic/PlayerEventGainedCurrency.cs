using System.Collections.Generic;
using GameLogic.Player;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Game.Logic
{
	[MetaSerializable]
	public abstract class PlayerEventGainedCurrency : PlayerEventBase
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public long Amount;

		[MetaMember(2, MetaMemberFlags.None)]
		public CurrencySource CurrencySource;

		[MetaMember(3, MetaMemberFlags.None)]
		public long TotalAfterAdd;

		[MetaMember(4, MetaMemberFlags.None)]
		public AnalyticsContext AnalyticsContext;

		public override IEnumerable<string> KeywordsForEventInstance => null;

		public PlayerEventGainedCurrency()
		{
		}

		public PlayerEventGainedCurrency(long amount, CurrencySource currencySource, long total, AnalyticsContext context)
		{
		}
	}
}
