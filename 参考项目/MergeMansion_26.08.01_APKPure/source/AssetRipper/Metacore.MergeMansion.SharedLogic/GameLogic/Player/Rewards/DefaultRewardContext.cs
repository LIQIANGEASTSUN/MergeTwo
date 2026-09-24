namespace GameLogic.Player.Rewards
{
	public class DefaultRewardContext : IRewardContext
	{
		public CurrencySource FallbackCurrencySource { get; }

		public DefaultRewardContext(CurrencySource fallbackCurrencySource)
		{
		}
	}
}
