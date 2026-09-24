namespace GameLogic.Player;

public interface IWritablePlayer : IPlayer, IGenerationContext
{

	public void SetWallet(Wallet wallet) { }

}

