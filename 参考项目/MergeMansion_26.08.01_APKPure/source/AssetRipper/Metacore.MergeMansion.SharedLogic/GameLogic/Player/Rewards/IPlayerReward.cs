namespace GameLogic.Player.Rewards
{
	public interface IPlayerReward
	{
		CurrencySource Source { get; }

		bool ShouldShowInfoButton { get; }

		void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext);

		string GetAmountString(int? value);

		string GetAmountString(int? value, bool isPlusSigned);

		string Name(IPlayer player);

		string TypeString();

		CurrencySource GetCurrencySource(IRewardContext rewardContext);
	}
}
