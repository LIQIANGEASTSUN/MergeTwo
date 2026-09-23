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
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 8, 10, 11, 17 })]
	[MetaActivableConfigData("MysteryMachineEvent", false, true)]
	public class MysteryMachineEventInfo : IMetaActivableConfigData<MysteryMachineEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<MysteryMachineEventId>, IHasGameConfigKey<MysteryMachineEventId>, IMetaActivableInfo<MysteryMachineEventId>, IBoardEventInfo, IHasRequirement, IEventSharedInfo, IPrioritizedEvent, IVisibilityStrategy<MysteryMachineEventId, MysteryMachineEventInfo, MysteryMachineEventModel>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineEventId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaActivableParams ActivableParams { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public string NameLocId { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public MysteryMachineId MysteryMachineId { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public MetaRef<BoardInfo> BoardRef { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement UnlockRequirement { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public OfferPlacementId BoardShopPlacementId { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public StoryDefinitionId EnterBoardDialogue { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public StoryDefinitionId StartMachineDialogue { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public MetaRef<MysteryMachineLeaderboardConfigInfo> LeaderboardConfigRef { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public MetaRef<MysteryMachineScreenInfo> ScreenRef { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public EventCategoryInfo CategoryInfo { get; set; }

		[MetaMember(20, MetaMemberFlags.None)]
		public int StaticPriority { get; set; }

		[MetaMember(21, MetaMemberFlags.None)]
		public int DynamicPriorityTriggerThreshold { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public string SharedEventId => null;

		public Option<EventGroupId> GroupIdOption => default(Option<EventGroupId>);

		public MysteryMachineEventId ActivableId => null;

		public string DisplayShortInfo => null;

		[IgnoreDataMember]
		public IStringId BoardEventId => null;

		[IgnoreDataMember]
		public DecorationInfo ActiveDecoration => null;

		[IgnoreDataMember]
		public MergeBoardId MergeBoardId => null;

		[IgnoreDataMember]
		public ExtendableEventParams ExtendableEventParams => null;

		[IgnoreDataMember]
		public MetaRef<InAppProductInfo> ExtensionInAppProduct => null;

		[IgnoreDataMember]
		public MetaDuration ExtensionPurchaseSafetyMargin => default(MetaDuration);

		[IgnoreDataMember]
		public List<int> ProgressionPopupHeaderImageLevels => null;

		[IgnoreDataMember]
		public Dictionary<MetaRef<EventLevelInfo>, MetaRef<EventLevelInfo>> FallbackLevelRefs => null;

		PlayerRequirement IHasRequirement.Requirement => null;

		public List<IPlayerReward> GetExtensionRewards(IPlayer player)
		{
			return null;
		}

		public bool CanExtendLatestActivation(PlayerModel player)
		{
			return false;
		}

		public MysteryMachineEventInfo()
		{
		}

		public MysteryMachineEventInfo(MysteryMachineEventId configKey, string displayName, string description, MetaActivableParams activableParams, string nameLocId, MysteryMachineId mysteryMachineId, MetaRef<BoardInfo> boardRef, PlayerRequirement unlockRequirement, OfferPlacementId boardShopPlacementId, StoryDefinitionId enterBoardDialogue, StoryDefinitionId startMachineDialogue, MetaRef<MysteryMachineLeaderboardConfigInfo> leaderboardConfigRef, MetaRef<MysteryMachineScreenInfo> screenRef, int priority, EventCategoryInfo categoryInfo, int staticPriority, int dynamicPriorityTriggerThreshold, int experimentPriority)
		{
		}

		public static ItemDef FixRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
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

		public MysteryMachineLeaderboardConfigInfo GetLeaderboardConfig()
		{
			return null;
		}

		public MysteryMachineLeaderboardConfigId GetLeaderboardConfigId()
		{
			return null;
		}

		public bool UsesLeaderboard()
		{
			return false;
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<MysteryMachineEventModel> eventModelOption)
		{
			return false;
		}
	}
}
