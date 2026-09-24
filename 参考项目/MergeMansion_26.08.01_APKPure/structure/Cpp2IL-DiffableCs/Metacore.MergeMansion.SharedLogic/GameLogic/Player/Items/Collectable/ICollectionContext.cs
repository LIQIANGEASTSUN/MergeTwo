namespace GameLogic.Player.Items.Collectable;

public interface ICollectionContext : IGenerationContext
{

	public CurrencySource AnalyticsContext
	{
		 get { } //Length: 0
	}

	public MergeBoard Board
	{
		 get { } //Length: 0
	}

	public IPlayer Player
	{
		 get { } //Length: 0
	}

	public Wallet Wallet
	{
		 get { } //Length: 0
	}

	public CurrencySource get_AnalyticsContext() { }

	public MergeBoard get_Board() { }

	public IPlayer get_Player() { }

	public Wallet get_Wallet() { }

}

