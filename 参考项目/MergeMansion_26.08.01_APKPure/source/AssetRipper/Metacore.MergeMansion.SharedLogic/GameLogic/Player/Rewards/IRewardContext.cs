namespace GameLogic.Player.Rewards
{
	public interface IRewardContext
	{
		static readonly IRewardContext None;

		CurrencySource FallbackCurrencySource { get; }
	}
}
