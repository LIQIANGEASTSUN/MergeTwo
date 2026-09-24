using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Fallbacks;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(47)]
	public class RewardOnFire : PlayerReward, IMutablePlayerReward, IPlayerReward
	{
		public const string BOOSTER_NAME = "AutoActivatedBooster_OnFire";

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration Duration { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public FallbackPlayerRewardId FallbackRewardId { get; set; }

		public int Amount => 0;

		public override bool ShouldShowInfoButton => false;

		public bool MayMutateAtRuntime(IMergeMansionGameConfig _)
		{
			return false;
		}

		public RewardOnFire()
		{
		}

		public RewardOnFire(MetaDuration duration, FallbackPlayerRewardId fallbackRewardId)
		{
		}

		public override void Consume(IPlayer player, AnalyticsContext analyticsContext, IRewardContext rewardContext)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public IPlayerReward GetMutatedReward(IPlayer player, Option<RewardSourceContext> rewardSourceContextOption)
		{
			return null;
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
