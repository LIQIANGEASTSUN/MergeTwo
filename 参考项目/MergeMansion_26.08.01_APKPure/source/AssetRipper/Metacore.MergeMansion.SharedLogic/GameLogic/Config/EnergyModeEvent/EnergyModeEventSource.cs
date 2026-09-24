using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Modes;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Schedule;

namespace GameLogic.Config.EnergyModeEvent
{
	public class EnergyModeEventSource : IConfigItemSource<EnergyModeEventInfo, EnergyModeEventId>, IGameConfigSourceItem<EnergyModeEventId, EnergyModeEventInfo>, IHasGameConfigKey<EnergyModeEventId>
	{
		public int ExperimentPriority { get; set; }

		public EnergyModeEventId ConfigKey { get; set; }

		public string DisplayName { get; set; }

		public string Description { get; set; }

		public List<MetaRef<PlayerSegmentInfo>> Segments { get; set; }

		public bool IsEnabled { get; set; }

		public MetaScheduleBase Schedule { get; set; }

		public string NameLocId { get; set; }

		public bool IsTransient { get; set; }

		public EnergyModeEnableType EnergyModeEnableType { get; set; }

		public List<MetaRef<EnergyModeInfo>> EnergyModes { get; set; }

		public string PrefabsOverride { get; set; }

		public string StartPopupDescLocId { get; set; }

		public string EndPopupDescLocId { get; set; }

		public string TaskDescLocId { get; set; }

		public string InfoPopupDescLocId { get; set; }

		public string UnlockRequirementType { get; set; }

		public string UnlockRequirementId { get; set; }

		public string UnlockRequirementAmount { get; set; }

		public string UnlockRequirementAux0 { get; set; }

		public string ContextCategory { get; set; }

		public string ContextSubCategory { get; set; }

		public EventGroupId GroupId { get; set; }

		public int Priority { get; set; }

		public EnergyModeEventInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
