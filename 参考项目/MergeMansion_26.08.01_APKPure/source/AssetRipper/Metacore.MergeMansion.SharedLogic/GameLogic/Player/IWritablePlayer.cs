using GameLogic.Random;

namespace GameLogic.Player
{
	public interface IWritablePlayer : IPlayer, IGenerationContext
	{
		void SetWallet(Wallet wallet);
	}
}
