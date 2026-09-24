using System.Collections.Generic;
using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Codex
{
	[MetaSerializable]
	public class CodexDiscoveryRewardInfo : IGameConfigData<CodexDiscoveryRewardId>, IGameConfigData, IHasGameConfigKey<CodexDiscoveryRewardId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public CodexDiscoveryRewardId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerReward")]
		public PlayerReward DiscoveryCompletionReward { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> DiscoveryRewards { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public CodexDiscoveryRewardInfo()
		{
		}

		public CodexDiscoveryRewardInfo(CodexDiscoveryRewardId configKey, PlayerReward discoveryCompletionReward, List<PlayerReward> discoveryRewards, int experimentPriority)
		{
		}

		public static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
