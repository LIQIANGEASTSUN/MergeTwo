using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.Player;
using GameLogic.Player.Modes;
using GameLogic.Player.Requirements;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Config.EnergyModeEvent
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 4 })]
	[MetaActivableConfigData("EnergyModeEvent", false, true)]
	public class EnergyModeEventInfo : IMetaActivableConfigData<EnergyModeEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<EnergyModeEventId>, IHasGameConfigKey<EnergyModeEventId>, IMetaActivableInfo<EnergyModeEventId>, IEventSharedInfo, IValidatable, IHasRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EnergyModeEventId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaActivableParams ActivableParams { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement UnlockRequirement { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public string NameLocId { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public EventCategoryInfo CategoryInfo { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public EnergyModeEnableType EnergyModeEnableType { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public List<MetaRef<EnergyModeInfo>> EnergyModeRefs { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public string PrefabsOverride { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public EventGroupId GroupId { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public string StartPopupDescLocId { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public string EndPopupDescLocId { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public string TaskDescLocId { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public string InfoPopupDescLocId { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public EnergyModeEventId ActivableId => null;

		public string DisplayShortInfo => null;

		public string SharedEventId => null;

		public Option<EventGroupId> GroupIdOption => default(Option<EventGroupId>);

		PlayerRequirement IHasRequirement.Requirement => null;

		public EnergyModeEventInfo()
		{
		}

		public EnergyModeEventInfo(EnergyModeEventId configKey, string displayName, string description, MetaActivableParams activableParams, PlayerRequirement unlockRequirement, string nameLocId, EventCategoryInfo categoryInfo, EnergyModeEnableType energyModeEnableType, List<MetaRef<EnergyModeInfo>> energyModeRefs, string prefabsOverride, EventGroupId groupId, int priority, string startPopupDescLocId, string endPopupDescLocId, string taskDescLocId, string infoPopupDescLocId, int experimentPriority)
		{
		}

		public bool IsEndingSoon(PlayerModel player)
		{
			return false;
		}

		public EnergyModeInfo GetInitialEnergyMode()
		{
			return null;
		}

		public bool SupportsEnergyMode(PlayerModeId modeId)
		{
			return false;
		}

		public string GetEventPrefabsId()
		{
			return null;
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
