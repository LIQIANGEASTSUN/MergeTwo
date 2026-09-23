using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.IAP;
using Code.GameLogic.ProgressionTracks;
using GameLogic.Config;
using GameLogic.Cutscenes;
using GameLogic.Decorations;
using GameLogic.MergeChains;
using GameLogic.Story;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Offers;
using Metaplay.Core.Schedule;

namespace Code.GameLogic.GameEvents
{
	public class CollectibleBoardEventSource : IConfigItemSource<CollectibleBoardEventInfo, CollectibleBoardEventId>, IGameConfigSourceItem<CollectibleBoardEventId, CollectibleBoardEventInfo>, IHasGameConfigKey<CollectibleBoardEventId>
	{
		public int ExperimentPriority { get; set; }

		public CollectibleBoardEventId EventId { get; set; }

		public string NameLocId { get; set; }

		public string DisplayName { get; set; }

		public string Description { get; set; }

		public List<MetaRef<PlayerSegmentInfo>> Segments { get; set; }

		public bool IsEnabled { get; set; }

		public MetaScheduleBase Schedule { get; set; }

		public List<MetaRef<BoardInfo>> Board { get; set; }

		public List<MetaRef<EventLevelInfo>> Levels { get; set; }

		public List<MetaRef<EventLevelInfo>> RecurringLevels { get; set; }

		public string FallbackLevels { get; set; }

		public StoryDefinitionId EnterBoardDialogue { get; set; }

		public List<OfferPlacementId> BoardShopPlacementId { get; set; }

		public StoryDefinitionId EndDialogue { get; set; }

		public DecorationId ActiveDecoration { get; set; }

		public List<int> ProgressionPopupHeaderImageLevels { get; set; }

		public string EventInitTask { get; set; }

		public string EventTasks { get; set; }

		public StoryDefinitionId StartDialogue { get; set; }

		public CutsceneId StartCutscene { get; set; }

		public string PreviewRequirementType { get; set; }

		public string PreviewRequirementId { get; set; }

		public string PreviewRequirementAmount { get; set; }

		public string PreviewRequirementAux0 { get; set; }

		public string UnlockRequirementType { get; set; }

		public string UnlockRequirementId { get; set; }

		public string UnlockRequirementAmount { get; set; }

		public string UnlockRequirementAux0 { get; set; }

		public int MaxExtensions { get; set; }

		public MetaDuration ExtensionDuration { get; set; }

		public MetaDuration ExtensionReviewDuration { get; set; }

		public MetaRef<InAppProductInfo> ExtensionInAppProduct { get; set; }

		public MetaDuration ExtensionPurchaseSafetyMargin { get; set; }

		public List<string> ExtensionRewardType { get; set; }

		public List<string> ExtensionRewardId { get; set; }

		public List<int> ExtensionRewardAmount { get; set; }

		public List<string> ExtensionRewardAux0 { get; set; }

		public List<string> ExtensionRewardAux1 { get; set; }

		public EventGroupId GroupId { get; set; }

		public MetaDuration? AuxEnergyUnitRestoreDuration { get; set; }

		public int AuxEnergyAttachmentChance { get; set; }

		public bool DisableBubbleBonus { get; set; }

		public F32? BubbleBonusDivisor { get; set; }

		public List<int> SecondaryBoardDivisorEnergyType { get; set; }

		public List<F32> SecondaryBoardBubbleDivisorOverride { get; set; }

		public List<bool> SecondaryBoardBubbleDivisorEnabled { get; set; }

		public bool ShouldReset { get; set; }

		public MergeChainId PersistingChainID { get; set; }

		public LuckyType LuckyType { get; set; }

		public int Priority { get; set; }

		public string ContextCategory { get; set; }

		public string ContextSubCategory { get; set; }

		public string ConnectedMinigameId { get; set; }

		public string PrefabsOverride { get; set; }

		public bool ForceLocationTravel { get; set; }

		public List<ProgressionTrackId> EventProgressionTracks { get; set; }

		public int StaticPriority { get; set; }

		public int DynamicPriorityTriggerThreshold { get; set; }

		public MetaActivableTimelineSettings Timeline { get; set; }

		public CollectibleBoardEventId ConfigKey => null;

		public CollectibleBoardEventInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public List<MetaRef<EventTaskInfo>> ParseEventTasks()
		{
			return null;
		}
	}
}
