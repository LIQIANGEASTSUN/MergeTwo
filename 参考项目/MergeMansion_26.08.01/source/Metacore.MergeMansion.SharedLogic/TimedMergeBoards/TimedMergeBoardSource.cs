using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Events;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace TimedMergeBoards
{
	public class TimedMergeBoardSource : IConfigItemSource<TimedMergeBoard, MergeBoardId>, IGameConfigSourceItem<MergeBoardId, TimedMergeBoard>, IHasGameConfigKey<MergeBoardId>
	{
		public int ExperimentPriority { get; set; }

		public MergeBoardId EventId { get; set; }

		public MergeBoardGeneratorId GeneratorId { get; set; }

		public MetaDuration Duration { get; set; }

		public string FinalItemId { get; set; }

		public List<string> RequirementType { get; set; }

		public List<string> RequirementId { get; set; }

		public List<string> RequirementAmount { get; set; }

		public List<string> RequirementAux0 { get; set; }

		public List<string> CompleteRequirementType { get; set; }

		public List<string> CompleteRequirementId { get; set; }

		public List<string> CompleteRequirementAmount { get; set; }

		public List<string> CompleteRequirementAux0 { get; set; }

		public List<MetaRef<EventLevelInfo>> LevelInfos { get; set; }

		public MergeBoardId ConfigKey => null;

		public TimedMergeBoard ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
