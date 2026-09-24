namespace GameLogic.Player.Rewards;

public interface ICurrencyReward
{

	public int Amount
	{
		 get { } //Length: 0
	}

	public Currencies Currency
	{
		 get { } //Length: 0
	}

	public int get_Amount() { }

	public Currencies get_Currency() { }

}

