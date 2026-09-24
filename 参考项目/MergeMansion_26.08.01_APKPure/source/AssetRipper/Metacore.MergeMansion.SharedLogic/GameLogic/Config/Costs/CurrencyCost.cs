using GameLogic.Player;
using Metaplay.Core.Model;

namespace GameLogic.Config.Costs
{
	public abstract class CurrencyCost : ICost
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public long CurrencyAmount { get; set; }

		public abstract Currencies Currency { get; }

		public CurrencyCost()
		{
		}

		public CurrencyCost(long currencyAmount)
		{
		}

		public virtual bool CanPay(IPlayer playerModel, out long missingQuantity)
		{
			missingQuantity = default(long);
			return false;
		}

		public virtual void Pay(IPlayer playerModel, CurrencySink currencySink, int itemId, AnalyticsContext analyticsContext)
		{
		}

		public abstract void WithdrawFrom(PlayerModel playerModel);

		public abstract CurrencyCost Clone(long currencyAmount);
	}
}
