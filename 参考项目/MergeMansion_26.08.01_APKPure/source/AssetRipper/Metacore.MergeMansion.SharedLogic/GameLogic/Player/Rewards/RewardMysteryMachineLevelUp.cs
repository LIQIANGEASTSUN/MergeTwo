using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(33)]
	public class RewardMysteryMachineLevelUp : PlayerReward
	{
		public override void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext)
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
