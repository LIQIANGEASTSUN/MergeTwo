using GameLogic.Player;
using Metaplay.Core.Model;
using Metaplay.Core.Player;
using Metaplay.Core.Serialization;

namespace Game.Logic
{
	[MetaSerializable]
	public abstract class PlayerEventUsedCurrencyBase : PlayerEventBase
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public long Amount;

		[MetaMember(2, MetaMemberFlags.None)]
		public CurrencySink CurrencySink;

		[MetaOnMemberDeserializationFailure("FixItemType")]
		[MetaMember(3, MetaMemberFlags.None)]
		public string SpendOnItemType;

		[MetaMember(4, MetaMemberFlags.None)]
		public long TotalAfterUse;

		[MetaMember(5, MetaMemberFlags.None)]
		public AnalyticsContext AnalyticsContext;

		[MetaMember(6, MetaMemberFlags.None)]
		public string FlashSaleContext;

		public abstract Currencies Currency { get; }

		public override string EventDescription => null;

		public PlayerEventUsedCurrencyBase()
		{
		}

		public PlayerEventUsedCurrencyBase(long amount, CurrencySink currencySink, string spendOnItemType, long totalAfterUse, AnalyticsContext analyticsContext, string flashSaleContext = "None")
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

		public virtual string GetCurrencyName()
		{
			return null;
		}
	}
}
