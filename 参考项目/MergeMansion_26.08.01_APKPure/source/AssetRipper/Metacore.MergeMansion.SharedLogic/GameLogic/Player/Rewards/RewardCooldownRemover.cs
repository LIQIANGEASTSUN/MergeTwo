using System.Runtime.Serialization;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(26)]
	[MetaFormDeprecated]
	public class RewardCooldownRemover : PlayerReward
	{
		public const string BOOSTER_NAME = "AutoActivatedBooster_CooldownRemover";

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration Duration { get; set; }

		[IgnoreDataMember]
		public override bool ShouldShowInfoButton => false;

		public RewardCooldownRemover()
		{
		}

		public RewardCooldownRemover(MetaDuration duration)
		{
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

		public override string ToString()
		{
			return null;
		}
	}
}
