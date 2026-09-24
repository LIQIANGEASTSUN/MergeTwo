using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using Code.GameLogic.IAP;
using Code.GameLogic.ProgressionTracks;
using GameLogic.Config;
using GameLogic.Cutscenes;
using GameLogic.Decorations;
using GameLogic.MergeChains;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Activables;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[MetaActivableConfigData("CollectibleBoardEvent", false, true)]
	[MetaBlockedMembers(new int[] { 6, 7, 13, 24, 27, 40 })]
	public class CollectibleBoardEventInfo : IMetaActivableConfigData<CollectibleBoardEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<CollectibleBoardEventId>, IHasGameConfigKey<CollectibleBoardEventId>, IMetaActivableInfo<CollectibleBoardEventId>, ILevelBoardEventInfo, ILevelEventInfo, IBoardEventInfo, IHasRequirement, IBubbleBonusEvent, IEventSharedInfo, IPrioritizedEvent, IVisibilityStrategy<CollectibleBoardEventId, CollectibleBoardEventInfo, CollectibleBoardEventModel>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public CollectibleBoardEventId CollectibleBoardEventId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string NameLocId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaActivableParams ActivableParams { get; set; }

		[MetaMember(32, MetaMemberFlags.None)]
		public List<MetaRef<BoardInfo>> BoardRefs { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<MetaRef<EventLevelInfo>> LevelRefs { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<MetaRef<EventLevelInfo>> RecurringLevelRefs { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public MetaDictionary<EventLevelId, MetaRef<EventLevelInfo>> FallbackLevelRefs { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public StoryDefinitionId EnterBoardDialogue { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement UnlockRequirement { get; set; }

		[MetaMember(33, MetaMemberFlags.None)]
		public List<OfferPlacementId> BoardShopPlacementIds { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public StoryDefinitionId EndDialogue { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public MetaRef<DecorationInfo> ActiveDecorationRef { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public List<int> ProgressionPopupHeaderImageLevels { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public MetaRef<EventTaskInfo> EventInitTask { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public List<MetaRef<EventTaskInfo>> EventTasks { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public MetaRef<StoryElementInfo> StartDialogueRef { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public ExtendableEventParams ExtendableEventParams { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public MetaRef<InAppProductInfo> ExtensionInAppProduct { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public MetaDuration ExtensionPurchaseSafetyMargin { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> ExtensionRewards { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement PreviewRequirement { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public F32? BubbleBonusDivisor { get; set; }

		[MetaMember(28, MetaMemberFlags.None)]
		public MetaDuration? AuxEnergyUnitRestoreDuration { get; set; }

		[MetaMember(29, MetaMemberFlags.None)]
		public int AuxEnergyAttachmentChance { get; set; }

		[MetaMember(30, MetaMemberFlags.None)]
		public bool DisableBubbleBonus { get; set; }

		[MetaMember(31, MetaMemberFlags.None)]
		public EventGroupId GroupId { get; set; }

		[MetaMember(34, MetaMemberFlags.None)]
		public MetaRef<CutsceneInfo> StartCutsceneRef { get; set; }

		[MetaMember(35, MetaMemberFlags.None)]
		public List<BubbleBonusInfo> SecondaryBoardBubbleBonus { get; set; }

		[MetaMember(36, MetaMemberFlags.None)]
		public bool ShouldReset { get; set; }

		[MetaMember(37, MetaMemberFlags.None)]
		public MergeChainId PersistingChainID { get; set; }

		[MetaMember(38, MetaMemberFlags.None)]
		public LuckyType LuckyType { get; set; }

		[MetaMember(39, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(41, MetaMemberFlags.None)]
		public EventCategoryInfo CategoryInfo { get; set; }

		[MetaMember(42, MetaMemberFlags.None)]
		public string ConnectedMinigameId { get; set; }

		[MetaMember(43, MetaMemberFlags.None)]
		public string PrefabsOverride { get; set; }

		[MetaMember(44, MetaMemberFlags.None)]
		public bool ForceLocationTravel { get; set; }

		[MetaMember(45, MetaMemberFlags.None)]
		public List<ProgressionTrackId> EventProgressionTracks { get; set; }

		[MetaMember(46, MetaMemberFlags.None)]
		public int StaticPriority { get; set; }

		[MetaMember(47, MetaMemberFlags.None)]
		public int DynamicPriorityTriggerThreshold { get; set; }

		[MetaMember(998, MetaMemberFlags.None)]
		[ServerOnly]
		public MetaActivableTimelineSettings Timeline { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public string SharedEventId => null;

		public Option<EventGroupId> GroupIdOption => default(Option<EventGroupId>);

		public CollectibleBoardEventId ConfigKey => null;

		public CollectibleBoardEventId ActivableId => null;

		public string EventId => null;

		public string DisplayShortInfo => null;

		[IgnoreDataMember]
		public BoardInfo InitialBoard => null;

		[IgnoreDataMember]
		IStringId IBoardEventInfo.BoardEventId => null;

		[IgnoreDataMember]
		MergeBoardId IBoardEventInfo.MergeBoardId => null;

		[IgnoreDataMember]
		public DecorationInfo ActiveDecoration => null;

		[IgnoreDataMember]
		public StoryElementInfo StartDialogue => null;

		[IgnoreDataMember]
		public CutsceneInfo StartCutscene => null;

		[IgnoreDataMember]
		public EventTaskInfo this[EventTaskId taskId] => null;

		[IgnoreDataMember]
		public IStringId LevelEventId => null;

		public List<PlayerReward> ConfiguredExtensionRewardsForValidation => null;

		PlayerRequirement IHasRequirement.Requirement => null;

		public bool TryGetTask(EventTaskId taskId, out EventTaskInfo info)
		{
			info = null;
			return false;
		}

		public CollectibleBoardEventInfo()
		{
		}

		public CollectibleBoardEventInfo(CollectibleBoardEventId collectibleBoardEventId, string nameLocId, string displayName, string description, MetaActivableParams activableParams, List<MetaRef<BoardInfo>> boardRefs, List<MetaRef<EventLevelInfo>> levelRefs, List<MetaRef<EventLevelInfo>> recurringLevelRefs, MetaDictionary<EventLevelId, MetaRef<EventLevelInfo>> fallbackLevelRefs, StoryDefinitionId enterBoardDialogue, PlayerRequirement unlockRequirement, List<OfferPlacementId> boardShopPlacementIds, StoryDefinitionId endDialogue, DecorationId activeDecoration, List<int> progressionPopupHeaderImageLevels, string initTask, List<MetaRef<EventTaskInfo>> eventTasks, StoryDefinitionId startDialogue, CutsceneId startCutscene, ExtendableEventParams extendableEventParams, MetaRef<InAppProductInfo> extensionInAppProduct, MetaDuration extensionPurchaseSafetyMargin, IEnumerable<PlayerReward> extensionRewards, PlayerRequirement previewRequirement, MetaDuration? auxEnergyUnitRestoreDuration, int auxEnergyAttachmentChance, EventGroupId groupId, bool disableBubbleBonus, F32? bubbleBonusDivisor, List<BubbleBonusInfo> secondaryBoardBubbleBonuses, bool shouldReset, MergeChainId persistingChainID, LuckyType luckyType, int priority, EventCategoryInfo categoryInfo, string connectedMinigameId, string prefabsOverride, bool forceLocationTravel, List<ProgressionTrackId> eventProgressionTracks, int staticPriority, int dynamicPriorityTriggerThreshold, MetaActivableTimelineSettings timeline, int experimentPriority)
		{
		}

		public string GetEventPrefabsId()
		{
			return null;
		}

		public List<IPlayerReward> GetExtensionRewards(IPlayer player)
		{
			return null;
		}

		public bool CanExtendLatestActivation(PlayerModel player)
		{
			return false;
		}

		public bool CanStartActivationBasedOnGroup(PlayerModel player)
		{
			return false;
		}

		public bool IsEndingSoon(PlayerModel player)
		{
			return false;
		}

		public bool TryGetVisibleStatus(PlayerModel player, out MetaActivableVisibleStatus visibleStatus)
		{
			visibleStatus = null;
			return false;
		}

		public static List<ItemDef> FixRefList(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<CollectibleBoardEventModel> eventModelOption)
		{
			return false;
		}
	}
}
