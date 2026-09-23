using System.Collections.Generic;
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
using Metaplay.Core;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Hotspots
{
	[MetaSerializable]
	[MetaDeserializationConvertFromConcreteDerivedType(typeof(HotspotDefinition))]
	public interface IHotspotDefinition : IHasRequirements
	{
		HotspotId ConfigKey { get; }

		HotspotId Id { get; }

		HotspotType Type { get; }

		MergeBoardId MergeBoardId { get; }

		List<PlayerRequirement> RequirementsList { get; }

		List<HotspotDef> UnlockingParentRefs { get; }

		List<PlayerReward> Rewards { get; }

		List<IDirectorAction> CompletionActions { get; }

		List<IDirectorAction> FinalizationActions { get; }

		List<IDirectorAction> AppearActions { get; }

		List<PlayerRequirement> UnlockRequirementsList { get; }

		bool IsIndependentTask { get; }

		int AppearActionMax { get; }

		int CompleteActionMax { get; }

		HotspotDef CompleteFocusHotspotRef { get; }

		MultistepGroupId MultistepGroupId { get; }

		int Order { get; }

		List<MetaRef<MapCharacterEventDefinition>> AppearMapCharactersEventsRefs { get; }

		List<MetaRef<MapCharacterEventDefinition>> CompleteMapCharactersEventsRefs { get; }

		MetaDuration BonusTimerDuration { get; }

		List<PlayerReward> BonusRewards { get; }

		string CompleteVFXId { get; }

		string DescriptionLocalizationId { get; }

		int SoloMilestoneHotspotValue { get; }

		int BoultonLeaguePoints { get; }

		bool DelayDebrisAnimation { get; }

		int Difficulty { get; }

		List<PlayerReward> DifficultyRewards { get; }

		List<string> Tags { get; }

		bool IsAreaUnlockHotspot { get; }

		bool IsMergeGoalHotspot { get; }

		bool IsRepeatableTask { get; }

		bool IsEventHotspot { get; }

		bool IsOpenUIHotspot { get; }

		bool IsCardStackTask { get; }

		bool IsIllustrationParentTask { get; }

		bool IsIllustrationChildTask { get; }

		bool IsLocationTravelHotspot { get; }

		bool IsValidInAreaCompletion { get; }

		bool IsCharacterTask { get; }

		new IEnumerable<PlayerRequirement> Requirements { get; }

		MapSpotInfo MapSpot { get; }

		List<PlayerRequirement> UnlockRequirements { get; }

		CardStackInfo CardStackInfo { get; }

		IEnumerable<LocationTravelInfo> LocationTravelInfos { get; }

		LocationTravelInfo FirstLocationTravelInfo { get; }

		CustomHotspotTableId HotspotTableId { get; }

		bool BelongsToMultistepGroup { get; }

		bool IsDifficultTask { get; }

		CustomHotspotTablesInfo HotspotTableInfo { get; }

		IEnumerable<MapCharacterEventDefinition> AppearMapCharactersEvents { get; }

		MapCharacterType AppearMapCharacter { get; }

		IEnumerable<MapCharacterEventDefinition> CompleteMapCharactersEvents { get; }

		MapCharacterType CompleteMapCharacter { get; }

		bool HasVisualCompleteActions { get; }

		string DescriptionLocId { get; }

		IEnumerable<IHotspotDefinition> UnlockingParents(IMergeMansionGameConfig config);

		IEnumerable<IHotspotDefinition> UnlockingParents(IPlayer player);

		IAreaInfo MapSpotArea(IMergeMansionGameConfig config);

		IAreaInfo MapSpotArea(IPlayer player);

		IAreaInfo Area(IMergeMansionGameConfig config);

		IAreaInfo Area(IPlayer player);

		IHotspotDefinition CompleteFocusHotspot(IPlayer player);

		bool TryGetAppearMapCharacterEvent(out MapCharacterEventDefinition mapCharacterEventDefinition);

		IEnumerable<HotspotDefinition> GetOpensAfterCompletion(IMergeMansionGameConfig config);

		bool HasTag(string tag);

		bool HasUnlockingParent(HotspotId parentId);
	}
}
