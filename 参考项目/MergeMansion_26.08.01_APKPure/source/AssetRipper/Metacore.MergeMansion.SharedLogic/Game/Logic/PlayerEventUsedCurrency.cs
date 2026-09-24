using System.Collections.Generic;
using Metaplay.Core.Analytics;
using Metaplay.Core.Model;
using Metaplay.Core.Player;
using Metaplay.Core.Serialization;

namespace Game.Logic
{
	[AnalyticsEvent(1, "Currency used", 1, null, true, false, false)]
	[AnalyticsEventKeywords(new string[] { "buysell" })]
	public class PlayerEventUsedCurrency : PlayerEventBase
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public Currencies Currency;

		[MetaMember(2, MetaMemberFlags.None)]
		public long Amount;

		[MetaMember(3, MetaMemberFlags.None)]
		public CurrencySink CurrencySink;

		[MetaOnMemberDeserializationFailure("FixItemType")]
		[MetaMember(4, MetaMemberFlags.None)]
		public string SpendOnItemType;

		[MetaMember(5, MetaMemberFlags.None)]
		public long TotalAfterUse;

		public override string EventDescription => null;

		public override IEnumerable<string> KeywordsForEventInstance => null;

		public PlayerEventUsedCurrency()
		{
		}

		public PlayerEventUsedCurrency(Currencies currency, long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse)
		{
		}

		public string GetSpendOnItem()
		{
			return null;
		}

		public static string FixItemType(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
