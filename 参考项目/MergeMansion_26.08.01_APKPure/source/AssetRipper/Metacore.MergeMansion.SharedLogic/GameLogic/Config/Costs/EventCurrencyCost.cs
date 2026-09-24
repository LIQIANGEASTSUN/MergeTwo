using Code.GameLogic.GameEvents;
using GameLogic.Player;
using Metaplay.Core.Model;

namespace GameLogic.Config.Costs
{
	[MetaSerializableDerived(2)]
	public class EventCurrencyCost : CurrencyCost
	{
		[MetaMember(2, MetaMemberFlags.None)]
		public EventCurrencyId EventCurrencyId { get; set; }

		public override Currencies Currency => default(Currencies);

		public EventCurrencyCost()
		{
		}

		public EventCurrencyCost(EventCurrencyId eventCurrencyId, long currencyAmount)
		{
		}

		public override string ToString()
		{
			return null;
		}

		public override void WithdrawFrom(PlayerModel playerModel)
		{
		}

		public override CurrencyCost Clone(long currencyAmount)
		{
			return null;
		}
	}
}
