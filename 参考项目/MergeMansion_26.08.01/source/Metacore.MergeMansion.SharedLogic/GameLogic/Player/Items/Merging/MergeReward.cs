using System.Collections.Generic;
using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Merging
{
	[MetaSerializable]
	public class MergeReward : IGameConfigData<MergeRewardId>, IGameConfigData, IHasGameConfigKey<MergeRewardId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeRewardId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ExperienceRequired { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> Rewards { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
