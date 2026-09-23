using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Area;
using GameLogic.MergeChains;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.DailyTasksV2
{
	public class DailyTasksV2MergeChainSource : IConfigItemSource<DailyTasksV2MergeChainInfo, MergeChainId>, IGameConfigSourceItem<MergeChainId, DailyTasksV2MergeChainInfo>, IHasGameConfigKey<MergeChainId>
	{
		public int ExperimentPriority { get; set; }

		public MergeChainId ConfigKey { get; set; }

		public int? MinLevel { get; set; }

		public int? MaxLevel { get; set; }

		public bool CanBeRequirement { get; set; }

		public bool CanBeReward { get; set; }

		public F32 RequirementMultiplier { get; set; }

		public F32 RewardMultiplier { get; set; }

		public bool RewardOnlyIfInHotspotRequirement { get; set; }

		public bool OnlyPossibleRequirementsHighPriority { get; set; }

		public List<AreaId> RewardOnlyIfHasAtLeastOneVisibleHotspotInAreas { get; set; }

		public List<string> RequireOnlyIfHaveProducer { get; set; }

		public DailyTasksV2MergeChainInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
