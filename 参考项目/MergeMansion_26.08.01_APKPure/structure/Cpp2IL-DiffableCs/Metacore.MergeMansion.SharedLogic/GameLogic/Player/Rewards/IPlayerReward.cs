namespace GameLogic.Player.Rewards;

public interface IPlayerReward
{

	public bool ShouldShowInfoButton
	{
		 get { } //Length: 0
	}

	public CurrencySource Source
	{
		 get { } //Length: 0
	}

	public void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext) { }

	public bool get_ShouldShowInfoButton() { }

	public CurrencySource get_Source() { }

	public string GetAmountString(Nullable<Int32> value) { }

	public string GetAmountString(Nullable<Int32> value, bool isPlusSigned) { }

	public CurrencySource GetCurrencySource(IRewardContext rewardContext) { }

	public string Name(IPlayer player) { }

	public string TypeString() { }

}

