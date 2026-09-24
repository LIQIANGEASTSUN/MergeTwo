using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(36)]
	public class RewardProgressionEventPoints : PlayerReward
	{
		public const string DailyChallengeReward = "DailyChallengeReward";

		[MetaMember(1, MetaMemberFlags.None)]
		public int Amount { get; set; }

		public RewardProgressionEventPoints()
		{
		}

		public RewardProgressionEventPoints(int amount, CurrencySource source)
		{
		}

		public IItemDefinition GetEventItem(IPlayer player)
		{
			return null;
		}

		public Option<ProgressionEventModel> GetEventModel(IPlayer player)
		{
			return default(Option<ProgressionEventModel>);
		}

		public override void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext)
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
	}
}
