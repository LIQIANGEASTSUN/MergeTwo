using Code.GameLogic.GameEvents;
using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(12)]
	[MetaBlockedMembers(new int[] { 3 })]
	public class RewardEventCurrency : PlayerReward
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EventCurrencyId EventCurrencyId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		public RewardEventCurrency()
		{
		}

		public RewardEventCurrency(EventCurrencyId eventCurrencyId, int amount, CurrencySource currencySource)
		{
		}

		public override void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext rewardContext)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override string Name(IPlayer player)
		{
			return null;
		}

		public override string TypeString()
		{
			return null;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
