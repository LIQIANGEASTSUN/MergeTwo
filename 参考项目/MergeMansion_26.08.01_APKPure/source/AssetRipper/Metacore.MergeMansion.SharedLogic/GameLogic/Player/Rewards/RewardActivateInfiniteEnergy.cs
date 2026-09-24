using System.Runtime.Serialization;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(23)]
	[MetaFormDeprecated]
	public class RewardActivateInfiniteEnergy : PlayerReward
	{
		public const string BOOSTER_NAME = "AutoActivatedBooster_InfiniteEnergy";

		[MetaMember(1, MetaMemberFlags.None)]
		public MetaDuration Duration { get; set; }

		[IgnoreDataMember]
		public override bool ShouldShowInfoButton => false;

		public RewardActivateInfiniteEnergy()
		{
		}

		public RewardActivateInfiniteEnergy(MetaDuration duration)
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
