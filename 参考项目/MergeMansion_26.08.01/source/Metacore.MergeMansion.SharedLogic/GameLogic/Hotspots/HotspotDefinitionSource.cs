using System;
using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.Hotspots;
using GameLogic.Area;
using GameLogic.Config.Map.Characters;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Hotspots
{
	public class HotspotDefinitionSource : IConfigItemSource<HotspotDefinition, HotspotId>, IGameConfigSourceItem<HotspotId, HotspotDefinition>, IHasGameConfigKey<HotspotId>
	{
		public int ExperimentPriority { get; set; }

		public HotspotId HotspotId { get; set; }

		public HotspotType Type { get; set; }

		public string TitleId { get; set; }

		public MergeBoardId MergeBoardId { get; set; }

		public List<string> RewardType { get; set; }

		public List<string> RewardId { get; set; }

		public List<string> RewardAux0 { get; set; }

		public List<string> RewardAux1 { get; set; }

		public List<int> RewardAmount { get; set; }

		public List<string> RequirementType { get; set; }

		public List<string> RequirementId { get; set; }

		public List<string> RequirementAmount { get; set; }

		public List<string> RequirementAux0 { get; set; }

		public List<string> CompleteAction { get; set; }

		public int CompleteActionMax { get; set; }

		public HotspotId? CompleteFocusHotspotId { get; set; }

		public List<MetaRef<MapCharacterEventDefinition>> CompleteMapCharacterEvents { get; set; }

		public string CompleteVFXId { get; set; }

		public List<string> FinalizeAction { get; set; }

		public List<string> AppearAction { get; set; }

		public int AppearActionMax { get; set; }

		public List<MetaRef<MapCharacterEventDefinition>> AppearMapCharacterEvents { get; set; }

		public List<HotspotId> UnlockingParents { get; set; }

		public MapSpotId MapSpotId { get; set; }

		public bool IsIndependentTask { get; set; }

		public List<string> UnlockingRequirementType { get; set; }

		public List<string> UnlockingRequirementId { get; set; }

		public List<string> UnlockingRequirementAmount { get; set; }

		public List<string> UnlockingRequirementAux0 { get; set; }

		public List<string> BonusRewardType { get; set; }

		public List<string> BonusRewardId { get; set; }

		public List<string> BonusRewardAux0 { get; set; }

		public List<string> BonusRewardAux1 { get; set; }

		public List<int> BonusRewardAmount { get; set; }

		public MetaDuration BonusTimerDuration { get; set; }

		public string DescriptionLocalizationId { get; set; }

		public List<LocationTravelId> LocationTravelId { get; set; }

		public AreaId AreaInfoOverride { get; set; }

		public int SoloMilestoneHotspotValue { get; set; }

		public CustomHotspotTableId CustomHotspotTableId { get; set; }

		public MultistepGroupId MultistepGroupId { get; set; }

		public int BoultonLeaguePoints { get; set; }

		public bool DelayDebrisAnimation { get; set; }

		public int Difficulty { get; set; }

		public List<string> DifficultyRewardType { get; set; }

		public List<string> DifficultyRewardId { get; set; }

		public List<string> DifficultyRewardAux0 { get; set; }

		public List<string> DifficultyRewardAux1 { get; set; }

		public List<int> DifficultyRewardAmount { get; set; }

		public int Order { get; set; }

		public List<string> Tags { get; set; }

		public HotspotId ConfigKey
		{
			get
			{
				return default(HotspotId);
			}
			set
			{
			}
		}

		[Obsolete("Replaced by UnlockingParents")]
		public List<HotspotId> OpenedHotspotId { get; set; }

		public HotspotId SourceConfigKey => default(HotspotId);

		public HotspotDefinition ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
