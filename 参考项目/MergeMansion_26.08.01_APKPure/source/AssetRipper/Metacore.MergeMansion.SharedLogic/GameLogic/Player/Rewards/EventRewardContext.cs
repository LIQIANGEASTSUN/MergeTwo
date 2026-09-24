using Metaplay.Core;

namespace GameLogic.Player.Rewards
{
	public class EventRewardContext : IRewardContext
	{
		public CurrencySource FallbackCurrencySource { get; set; }

		public IStringId EventId { get; set; }

		public EventRewardContext(IStringId eventId, CurrencySource fallbackCurrencySource)
		{
		}

		public static IRewardContext ForEvent(IStringId eventId, CurrencySource fallbackCurrencySource)
		{
			return null;
		}
	}
}
