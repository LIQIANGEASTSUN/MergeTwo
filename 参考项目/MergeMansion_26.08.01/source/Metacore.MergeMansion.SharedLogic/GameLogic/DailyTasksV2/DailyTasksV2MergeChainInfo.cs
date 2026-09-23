using System.Collections.Generic;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.MergeChains;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.DailyTasksV2
{
	[MetaSerializable]
	public class DailyTasksV2MergeChainInfo : IGameConfigData<MergeChainId>, IGameConfigData, IHasGameConfigKey<MergeChainId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MergeChainId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int? MinLevel { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int? MaxLevel { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool CanBeRequirement { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public bool CanBeReward { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public F32 RequirementMultiplier { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public F32 RewardMultiplier { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public bool RewardOnlyIfInHotspotRequirement { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public bool OnlyPossibleRequirementsHighPriority { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public List<AreaId> RewardOnlyIfHasAtLeastOneVisibleHotspotInAreas { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixRefList")]
		public List<ItemDef> RequireOnlyIfHaveProducer { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public DailyTasksV2MergeChainInfo()
		{
		}

		public DailyTasksV2MergeChainInfo(MergeChainId configKey, int? minLevel, int? maxLevel, bool canBeRequirement, bool canBeReward, F32 requirementMultiplier, F32 rewardMultiplier, bool rewardOnlyIfInHotspotRequirement, bool onlyPossibleRequirementsHighPriority, List<AreaId> rewardOnlyIfHasAtLeastOneVisibleHotspotInAreas, List<int> requireOnlyIfHaveProducer, int experimentPriority)
		{
		}

		public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
