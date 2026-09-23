using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.StatsTracking;
using Metaplay.Core;

namespace Code.GameLogic.StatsTracking
{
	public static class StatsObjectiveFactory
	{
		public static IStatsObjective Create(IPlayer player, StatsObjectiveType objectiveType, List<int> objectiveRequirement, IStringId objectiveId, List<string> parameters, ObjectiveState initialState)
		{
			return null;
		}

		public static StatsObjective CreateUseItemsObjective(IPlayer player, List<int> objectiveRequirement, IStringId objectiveId, List<string> parameters)
		{
			return null;
		}

		public static StatsObjective CreateUseMergeChainObjective(IPlayer player, List<int> objectiveRequirement, IStringId objectiveId, List<string> parameters)
		{
			return null;
		}
	}
}
