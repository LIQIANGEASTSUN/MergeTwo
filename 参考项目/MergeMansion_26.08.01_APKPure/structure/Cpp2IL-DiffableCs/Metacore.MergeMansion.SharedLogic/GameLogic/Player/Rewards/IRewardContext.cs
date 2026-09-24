namespace GameLogic.Player.Rewards;

public interface IRewardContext
{
	public static readonly IRewardContext None; //Field offset: 0x0

	public CurrencySource FallbackCurrencySource
	{
		 get { } //Length: 0
	}

	public CurrencySource get_FallbackCurrencySource() { }

}

