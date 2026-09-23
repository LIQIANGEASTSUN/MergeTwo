using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using Code.GameLogic.Hotspots;
using Game.Cloud.Config;
using GameLogic.Area;
using GameLogic.Config;
using GameLogic.Config.Map.Characters;
using GameLogic.Hotspots.CardStack;
using GameLogic.Player;
using GameLogic.Player.Director.Config;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Hotspots
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 12, 25, 30, 37 })]
	public class HotspotDefinition : IGameConfigData<HotspotId>, IGameConfigData, IHasGameConfigKey<HotspotId>, IValidatable, IHotspotDefinition, IHasRequirements
	{
		public HotspotId ConfigKey => default(HotspotId);

		[MetaMember(1, MetaMemberFlags.None)]
		public HotspotId Id { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public HotspotType Type { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaRef<AreaInfo> AreaRef { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MergeBoardId MergeBoardId { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> RequirementsList { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<HotspotDef> UnlockingParentRefs { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> Rewards { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<IDirectorAction> CompletionActions { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<IDirectorAction> FinalizationActions { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public List<IDirectorAction> AppearActions { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public MetaRef<MapSpotInfo> MapSpotRef { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> UnlockRequirementsList { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public bool IsIndependentTask { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public int AppearActionMax { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public int CompleteActionMax { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public HotspotDef CompleteFocusHotspotRef { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public List<MetaRef<MapCharacterEventDefinition>> AppearMapCharactersEventsRefs { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public List<MetaRef<MapCharacterEventDefinition>> CompleteMapCharactersEventsRefs { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public MetaDuration BonusTimerDuration { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> BonusRewards { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public string CompleteVFXId { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		public MetaRef<CardStackInfo> CardStackRef { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public string DescriptionLocalizationId { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public MetaRef<AreaInfo> AreaInfoOverride { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		public CustomHotspotTableId CustomHotspotTableId { get; set; }

		[MetaMember(28, MetaMemberFlags.None)]
		public int SoloMilestoneHotspotValue { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		public MultistepGroupId MultistepGroupId { get; set; }

		[MetaMember(31, MetaMemberFlags.None)]
		public int BoultonLeaguePoints { get; set; }

		[MetaMember(32, MetaMemberFlags.None)]
		public bool DelayDebrisAnimation { get; set; }

		[MetaMember(33, MetaMemberFlags.None)]
		public int Difficulty { get; set; }

		[MetaMember(34, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> DifficultyRewards { get; set; }

		[MetaMember(35, MetaMemberFlags.None)]
		public MetaRef<CustomHotspotTablesInfo> CustomHotspotTableInfoRef { get; set; }

		[MetaMember(36, MetaMemberFlags.None)]
		public int Order { get; set; }

		[MetaMember(38, MetaMemberFlags.None)]
		public List<string> Tags { get; set; }

		[MetaMember(39, MetaMemberFlags.None)]
		public List<MetaRef<LocationTravelInfo>> LocationTravelInfosRefs { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		[IgnoreDataMember]
		public bool IsAreaUnlockHotspot => false;

		[IgnoreDataMember]
		public bool IsMergeGoalHotspot => false;

		[IgnoreDataMember]
		public bool IsRepeatableTask => false;

		[IgnoreDataMember]
		public bool IsEventHotspot => false;

		[IgnoreDataMember]
		public bool IsOpenUIHotspot => false;

		[IgnoreDataMember]
		public bool IsCardStackTask => false;

		[IgnoreDataMember]
		public bool IsIllustrationParentTask => false;

		[IgnoreDataMember]
		public bool IsIllustrationChildTask => false;

		[IgnoreDataMember]
		public bool IsLocationTravelHotspot => false;

		[IgnoreDataMember]
		public bool IsCharacterTask => false;

		[IgnoreDataMember]
		public bool IsValidInAreaCompletion => false;

		[IgnoreDataMember]
		public IEnumerable<PlayerRequirement> Requirements => null;

		[IgnoreDataMember]
		public MapSpotInfo MapSpot => null;

		[IgnoreDataMember]
		public List<PlayerRequirement> UnlockRequirements => null;

		[IgnoreDataMember]
		public CardStackInfo CardStackInfo => null;

		[IgnoreDataMember]
		public IEnumerable<LocationTravelInfo> LocationTravelInfos => null;

		[IgnoreDataMember]
		public LocationTravelInfo FirstLocationTravelInfo => null;

		[IgnoreDataMember]
		public CustomHotspotTableId HotspotTableId => null;

		[IgnoreDataMember]
		public bool BelongsToMultistepGroup => false;

		[IgnoreDataMember]
		public bool IsDifficultTask => false;

		[IgnoreDataMember]
		public CustomHotspotTablesInfo HotspotTableInfo => null;

		[IgnoreDataMember]
		public IEnumerable<MapCharacterEventDefinition> AppearMapCharactersEvents => null;

		[IgnoreDataMember]
		public MapCharacterType AppearMapCharacter => default(MapCharacterType);

		[IgnoreDataMember]
		public IEnumerable<MapCharacterEventDefinition> CompleteMapCharactersEvents => null;

		[IgnoreDataMember]
		public MapCharacterType CompleteMapCharacter => default(MapCharacterType);

		[IgnoreDataMember]
		public bool HasVisualCompleteActions => false;

		[IgnoreDataMember]
		public string DescriptionLocId => null;

		public IEnumerable<IHotspotDefinition> UnlockingParents(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IEnumerable<IHotspotDefinition> UnlockingParents(IPlayer player)
		{
			return null;
		}

		public IAreaInfo MapSpotArea(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IAreaInfo MapSpotArea(IPlayer player)
		{
			return null;
		}

		public IAreaInfo Area(IMergeMansionGameConfig config)
		{
			return null;
		}

		public IAreaInfo Area(IPlayer player)
		{
			return null;
		}

		public IHotspotDefinition CompleteFocusHotspot(IPlayer player)
		{
			return null;
		}

		public bool TryGetAppearMapCharacterEvent(out MapCharacterEventDefinition mapCharacterEventDefinition)
		{
			mapCharacterEventDefinition = null;
			return false;
		}

		public IEnumerable<HotspotDefinition> GetOpensAfterCompletion(IMergeMansionGameConfig config)
		{
			return null;
		}

		public HotspotDefinition()
		{
		}

		public HotspotDefinition(HotspotId id, HotspotType type, MergeBoardId mergeBoardId, List<PlayerRequirement> requirements, IEnumerable<HotspotId> unlockingParents, List<PlayerReward> rewards, List<IDirectorAction> completionActions, List<IDirectorAction> finalizationActions, List<IDirectorAction> appearActions, MapSpotId mapSpot, List<PlayerRequirement> unlockRequirements, bool isIndependentTask, int appearActionMax, List<MetaRef<MapCharacterEventDefinition>> appearMapCharactersEvents, int completeActionMax, HotspotId completeFocusHotspotId, List<MetaRef<MapCharacterEventDefinition>> completeMapCharactersEvents, List<PlayerReward> bonusRewards, MetaDuration bonusTimerDuration, string completeVFXId, string descriptionLocalizationId, Option<List<LocationTravelId>> locationTravelIds, AreaId areaInfoOverride, int soloMilestoneHotspotValue, CustomHotspotTableId customHotspotTableId, MultistepGroupId multistepGroupId, int boultonLeaguePoints, bool delayDebrisAnimation, int difficulty, List<PlayerReward> difficultyRewards, int order, List<string> tags, int experimentPriority)
		{
		}

		public bool HasTag(string tag)
		{
			return false;
		}

		public bool HasUnlockingParent(HotspotId parentId)
		{
			return false;
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
