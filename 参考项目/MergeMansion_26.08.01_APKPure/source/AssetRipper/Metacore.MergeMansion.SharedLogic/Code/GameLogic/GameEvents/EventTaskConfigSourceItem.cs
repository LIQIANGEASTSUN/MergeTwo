using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace Code.GameLogic.GameEvents
{
	public class EventTaskConfigSourceItem : IConfigItemSource<EventTaskInfo, EventTaskId>, IGameConfigSourceItem<EventTaskId, EventTaskInfo>, IHasGameConfigKey<EventTaskId>
	{
		public int ExperimentPriority { get; set; }

		public EventTaskId EventTaskId { get; set; }

		public string DisplayName { get; set; }

		public string Description { get; set; }

		public string TaskTitleLocId { get; set; }

		public List<string> RewardType { get; set; }

		public List<string> RewardId { get; set; }

		public List<string> RewardAux0 { get; set; }

		public List<string> RewardAux1 { get; set; }

		public List<int> RewardAmount { get; set; }

		public List<string> RequirementType { get; set; }

		public List<string> RequirementId { get; set; }

		public List<string> RequirementAmount { get; set; }

		public List<string> RequirementAux0 { get; set; }

		public List<MetaRef<EventTaskInfo>> UnlocksTasks { get; set; }

		public List<string> CompleteAction { get; set; }

		public int? EventLevelMin { get; set; }

		public int? EventLevelMax { get; set; }

		public bool ForceHideOnEventLevelMax { get; set; }

		public bool IsDynamicTask { get; set; }

		public string DifficultyCurve_Item1 { get; set; }

		public string DefaultDifficultyCurve_Item1 { get; set; }

		public F32 RangeMin_Item1 { get; set; }

		public F32 RangeMax_Item1 { get; set; }

		public F32 LeftoversWeightMultiplier_Item1 { get; set; }

		public string DifficultyCurve_Item2 { get; set; }

		public string DefaultDifficultyCurve_Item2 { get; set; }

		public F32 RangeMin_Item2 { get; set; }

		public F32 RangeMax_Item2 { get; set; }

		public F32 LeftoversWeightMultiplier_Item2 { get; set; }

		public EventTaskId ConfigKey => null;

		public EventTaskInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
