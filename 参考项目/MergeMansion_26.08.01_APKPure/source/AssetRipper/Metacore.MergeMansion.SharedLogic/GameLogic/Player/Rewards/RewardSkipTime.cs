using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Config;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(24)]
	[MetaFormDeprecated]
	public class RewardSkipTime : PlayerReward
	{
		public const string BOOSTER_NAME = "AutoActivatedBooster_SkipTime";

		[MetaMember(1, MetaMemberFlags.None)]
		public List<MergeBoardId> MergeBoardIds { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaDuration DurationToSkip { get; set; }

		[IgnoreDataMember]
		public override bool ShouldShowInfoButton => false;

		public RewardSkipTime()
		{
		}

		public RewardSkipTime(List<MergeBoardId> mergeBoardIds, MetaDuration durationToSkip)
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
