using GameLogic.Player.Board;
using GameLogic.Random;

namespace GameLogic.Player.Items.Collectable
{
	public interface ICollectionContext : IGenerationContext
	{
		IPlayer Player { get; }

		MergeBoard Board { get; }

		Wallet Wallet { get; }

		CurrencySource AnalyticsContext { get; }
	}
}
