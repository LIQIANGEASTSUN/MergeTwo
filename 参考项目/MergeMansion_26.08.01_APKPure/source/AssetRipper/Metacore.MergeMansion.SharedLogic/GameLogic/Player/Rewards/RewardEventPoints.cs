using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(14)]
	[MetaBlockedMembers(new int[] { 1 })]
	public class RewardEventPoints : PlayerReward
	{
		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		public RewardEventPoints()
		{
		}

		public RewardEventPoints(int amount, CurrencySource currencySource)
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
