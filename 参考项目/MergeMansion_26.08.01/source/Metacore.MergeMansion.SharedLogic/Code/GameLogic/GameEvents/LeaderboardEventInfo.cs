using System.Collections.Generic;
using System.Runtime.Serialization;
using Code.GameLogic.Config;
using Code.GameLogic.IAP;
using GameLogic.Config;
using GameLogic.Decorations;
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
	[MetaActivableConfigData("LeaderboardEvent", false, true)]
	[MetaBlockedMembers(new int[] { 7, 10, 16 })]
	public class LeaderboardEventInfo : IMetaActivableConfigData<LeaderboardEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<LeaderboardEventId>, IHasGameConfigKey<LeaderboardEventId>, IMetaActivableInfo<LeaderboardEventId>, IBoardEventInfo, IHasRequirement, IBubbleBonusEvent, IEventSharedInfo, IPrioritizedEvent, IVisibilityStrategy<LeaderboardEventId, LeaderboardEventInfo, LeaderboardEventModel>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public LeaderboardEventId LeaderboardEventId { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string NameLocId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public MetaActivableParams ActivableParams { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public MetaRef<BoardInfo> BoardRef { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement UnlockRequirement { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public OfferPlacementId BoardShopPlacementId { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public List<MetaRef<EventLevelInfo>> RankingRewardLevelRefs { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public List<MetaRef<EventLevelInfo>> LevelRefs { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public StoryDefinitionId EnterBoardDialogue { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public StoryDefinitionId EndDialogue { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public F32? BubbleBonusDivisor { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public MetaDuration? AuxEnergyUnitRestoreDuration { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public int AuxEnergyAttachmentChance { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public bool DisableBubbleBonus { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public EventGroupId GroupId { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public List<BubbleBonusInfo> SecondaryBoardBubbleBonus { get; set; }

		[MetaMember(22, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(23, MetaMemberFlags.None)]
		[ServerOnly]
		public LeaderboardEventMatchmakingBucketsId MatchmakingBuckets { get; set; }

		[MetaMember(24, MetaMemberFlags.None)]
		public EventCategoryInfo CategoryInfo { get; set; }

		[MetaMember(25, MetaMemberFlags.None)]
		public bool ForceLocationTravel { get; set; }

		[MetaMember(26, MetaMemberFlags.None)]
		public int StaticPriority { get; set; }

		[MetaMember(27, MetaMemberFlags.None)]
		public int DynamicPriorityTriggerThreshold { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public string SharedEventId => null;

		public Option<EventGroupId> GroupIdOption => default(Option<EventGroupId>);

		public LeaderboardEventId ConfigKey => null;

		public LeaderboardEventId ActivableId => null;

		public string DisplayShortInfo => null;

		[IgnoreDataMember]
		public BoardInfo Board => null;

		[IgnoreDataMember]
		public IEnumerable<EventLevelInfo> Levels => null;

		public OfferPlacementId BoardShopFlashPlacementId => null;

		[IgnoreDataMember]
		IStringId IBoardEventInfo.BoardEventId => null;

		[IgnoreDataMember]
		DecorationInfo IBoardEventInfo.ActiveDecoration => null;

		[IgnoreDataMember]
		ExtendableEventParams IBoardEventInfo.ExtendableEventParams => null;

		[IgnoreDataMember]
		MetaRef<InAppProductInfo> IBoardEventInfo.ExtensionInAppProduct => null;

		[IgnoreDataMember]
		MetaDuration IBoardEventInfo.ExtensionPurchaseSafetyMargin => default(MetaDuration);

		[IgnoreDataMember]
		MergeBoardId IBoardEventInfo.MergeBoardId => null;

		PlayerRequirement IHasRequirement.Requirement => null;

		public List<IPlayerReward> GetExtensionRewards(IPlayer player)
		{
			return null;
		}

		public LeaderboardEventInfo()
		{
		}

		public LeaderboardEventInfo(LeaderboardEventId leaderboardEventId, string nameLocId, string displayName, string description, MetaActivableParams activableParams, MetaRef<BoardInfo> boardRef, PlayerRequirement unlockRequirement, OfferPlacementId boardShopPlacementId, List<MetaRef<EventLevelInfo>> rankingRewardLevelRefs, List<MetaRef<EventLevelInfo>> levelRefs, StoryDefinitionId enterBoardDialogue, StoryDefinitionId endDialogue, MetaDuration? auxEnergyUnitRestoreDuration, int auxEnergyAttachmentChance, EventGroupId eventGroupId, bool disableBubbleBonus, F32? bubbleBonusDivisor, List<BubbleBonusInfo> secondaryBoardBubbleBonus, int priority, LeaderboardEventMatchmakingBucketsId matchmakingBuckets, EventCategoryInfo categoryInfo, bool forceLocationTravel, int staticPriority, int dynamicPriorityTriggerThreshold, int experimentPriority)
		{
		}

		public EventLevelInfo GetEventLevelInfo(int level)
		{
			return null;
		}

		public string GetEventPrefabsId()
		{
			return null;
		}

		public List<IPlayerReward> GetRankingRewardsForPosition(int position, IPlayer player)
		{
			return null;
		}

		public bool CanExtendLatestActivation(PlayerModel player)
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

		public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<LeaderboardEventModel> eventModelOption)
		{
			return false;
		}
	}
}
