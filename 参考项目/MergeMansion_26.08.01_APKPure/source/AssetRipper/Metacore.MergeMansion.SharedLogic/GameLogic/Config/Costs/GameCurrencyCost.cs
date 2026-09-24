using GameLogic.Player;
using Metaplay.Core.Model;

namespace GameLogic.Config.Costs
{
	[MetaSerializableDerived(1)]
	public class GameCurrencyCost : CurrencyCost
	{
		[MetaMember(2, MetaMemberFlags.None)]
		public Currencies Type { get; set; }

		public override Currencies Currency => default(Currencies);

		public GameCurrencyCost()
		{
		}

		public GameCurrencyCost(Currencies currencies, long currencyAmount)
		{
		}

		public override string ToString()
		{
			return null;
		}

		public static implicit operator (Currencies, long)(GameCurrencyCost cost)
		{
			return default((Currencies, long));
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
