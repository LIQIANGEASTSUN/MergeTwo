using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Schedule;

namespace Code.GameLogic.GameEvents
{
	public class GarageCleanupEventSourceConfigItem : IConfigItemSource<GarageCleanupEventInfo, GarageCleanupEventId>, IGameConfigSourceItem<GarageCleanupEventId, GarageCleanupEventInfo>, IHasGameConfigKey<GarageCleanupEventId>
	{
		public int ExperimentPriority { get; set; }

		public GarageCleanupEventId ConfigKey { get; set; }

		public string DisplayName { get; set; }

		public string Description { get; set; }

		public bool IsEnabled { get; set; }

		public List<string> SpawnerItem { get; set; }

		public List<GarageCleanupBoardId> Board { get; set; }

		public List<MetaRef<GarageCleanupPatternSetInfo>> PatternSet { get; set; }

		public List<int> BoardCost { get; set; }

		public List<MetaRef<GarageCleanupRewardInfo>> SlotFillReward { get; set; }

		public List<MetaRef<PlayerSegmentInfo>> Segments { get; set; }

		public MetaScheduleBase Schedule { get; set; }

		public MergeBoardId MergeBoardId { get; set; }

		public string UnlockRequirementType { get; set; }

		public string UnlockRequirementId { get; set; }

		public string UnlockRequirementAmount { get; set; }

		public string UnlockRequirementAux0 { get; set; }

		public string PrefabsOverride { get; set; }

		public bool AlwaysShowPatternsAndRewards { get; set; }

		public EventGroupId GroupId { get; set; }

		public int Priority { get; set; }

		public string ContextCategory { get; set; }

		public string ContextSubCategory { get; set; }

		public bool ForceLocationTravel { get; set; }

		public int StaticPriority { get; set; }

		public int DynamicPriorityTriggerThreshold { get; set; }

		public MetaActivableTimelineSettings Timeline { get; set; }

		public GarageCleanupEventInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
