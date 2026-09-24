using System;
using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;
using Merger.Metagame.Data;

namespace MergeEngine.ECS.Systems.Items
{
	public class ToolsRequiredByBuildingsHelper
	{
		public class BuildingUpgradeToBoostData : IComparable<BuildingUpgradeToBoostData>
		{
			public HashSet<PlayerResourceEnum> tools;

			public int futureUpgradeCount;

			public int numMissingTools;

			public int CompareTo(BuildingUpgradeToBoostData other)
			{
				return 0;
			}
		}

		public HashSet<PlayerResourceEnum> FindToolsNeededByUpgrade(List<BuildingInstanceProgression> unlockedBuildings, Dictionary<PlayerResourceEnum, int> currentToolAmounts)
		{
			return null;
		}

		public BuildingUpgradeToBoostData GetCandidateUpgrade(BuildingInstanceProgression building, Dictionary<PlayerResourceEnum, int> currentToolAmounts)
		{
			return null;
		}

		public List<ResourceMultiple> GetRequiredToolsForStage(IBuildingStage stage)
		{
			return null;
		}
	}
}
