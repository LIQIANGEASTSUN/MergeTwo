using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Hotspots;
using GameLogic.Player.Requirements;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Area
{
	public class AreaSource : IConfigItemSource<AreaInfo, AreaId>, IGameConfigSourceItem<AreaId, AreaInfo>, IHasGameConfigKey<AreaId>
	{
		public int ExperimentPriority { get; set; }

		public AreaId ConfigKey { get; set; }

		public LocationId LocationId { get; set; }

		public string TitleLocalizationId { get; set; }

		public string CategoryLocalizationId { get; set; }

		public List<string> TeaseRequirementType { get; set; }

		public List<string> TeaseRequirementId { get; set; }

		public List<string> TeaseRequirementAmount { get; set; }

		public List<string> TeaseRequirementAux0 { get; set; }

		public List<string> UnlockRequirementType { get; set; }

		public List<string> UnlockRequirementId { get; set; }

		public List<string> UnlockRequirementAmount { get; set; }

		public List<string> UnlockRequirementAux0 { get; set; }

		public string UnlockInstructionMergeChain { get; set; }

		public AreaId UnlockInstructionArea { get; set; }

		public AreaId NextAreaToUnlock { get; set; }

		public bool NotifyOnStart { get; set; }

		public bool ForceTravelOnNotify { get; set; }

		public int RowIndex { get; set; }

		public AreaCompleteRewardStyle CompleteRewardStyle { get; set; }

		public string UnlockSchedule { get; set; }

		public MetaDuration? UnlockSchedulePre { get; set; }

		public List<string> RewardType { get; set; }

		public List<string> RewardId { get; set; }

		public List<int> RewardAmount { get; set; }

		public List<string> RewardAux0 { get; set; }

		public List<string> RewardAux1 { get; set; }

		public HotspotId? UnlockingHotspot { get; set; }

		public string LockedDescriptionLocalizationId { get; set; }

		public string UnlockedDescriptionLocalizationId { get; set; }

		public string ShortDescriptionLocalizationId { get; set; }

		public AreaInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public AreaInfo ToConfigData(List<VariantConfigItem<HotspotId, HotspotDefinitionSource>> hotspots, List<VariantConfigItem<MapSpotId, MapSpotSource>> mapSpots, string variantMaybe)
		{
			return null;
		}

		public (IEnumerable<PlayerRequirement>, IEnumerable<PlayerRequirement>) ParseTeaseAndUnlockRequirements()
		{
			return default((IEnumerable<PlayerRequirement>, IEnumerable<PlayerRequirement>));
		}

		public static IEnumerable<PlayerRequirement> ParseRequirements(List<string> requirementType, List<string> requirementId, List<string> requirementAmount, List<string> requirementAux0)
		{
			return null;
		}
	}
}
