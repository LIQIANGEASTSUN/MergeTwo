using System.Collections.Generic;
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
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[MetaActivableConfigData("ShortLeaderboardEvent", false, true)]
	public class ShortLeaderboardEventInfo : IMetaActivableConfigData<ShortLeaderboardEventId>, IMetaActivableConfigData, IGameConfigData, IMetaActivableInfo, IGameConfigData<ShortLeaderboardEventId>, IHasGameConfigKey<ShortLeaderboardEventId>, IMetaActivableInfo<ShortLeaderboardEventId>, IBoardEventInfo, IHasRequirement, IEventSharedInfo, IBubbleBonusEvent, IValidatable, IPrioritizedEvent, IVisibilityStrategy<ShortLeaderboardEventId, ShortLeaderboardEventInfo, ShortLeaderboardEventModel>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ShortLeaderboardEventId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string DisplayName { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string Description { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaActivableParams ActivableParams { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public EventGroupId GroupId { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int Priority { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public string NameLocalizationId { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<MetaRef<ShortLeaderboardEventStageInfo>> StageRefs { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement UnlockRequirement { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public MetaRef<RewardUpgradableInfo> FinalRewardRef { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public StoryDefinitionId IntroDialogue { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public StoryDefinitionId EndDialogue { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public bool DisableBubbleBonus { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public F32? BubbleBonusDivisor { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public List<BubbleBonusInfo> SecondaryBoardBubbleBonus { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirement")]
		public PlayerRequirement PreviewRequirement { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		public EventCategoryInfo CategoryInfo { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public int StaticPriority { get; set; }

		[MetaMember(19, MetaMemberFlags.None)]
		public int DynamicPriorityTriggerThreshold { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public ShortLeaderboardEventId ActivableId => null;

		public string DisplayShortInfo => null;

		public IStringId BoardEventId => null;

		public DecorationInfo ActiveDecoration => null;

		public MergeBoardId MergeBoardId => null;

		public ExtendableEventParams ExtendableEventParams => null;

		public MetaRef<InAppProductInfo> ExtensionInAppProduct => null;

		public MetaDuration ExtensionPurchaseSafetyMargin => default(MetaDuration);

		public string SharedEventId => null;

		public Option<EventGroupId> GroupIdOption => default(Option<EventGroupId>);

		PlayerRequirement IHasRequirement.Requirement => null;

		public List<IPlayerReward> GetExtensionRewards(IPlayer player)
		{
			return null;
		}

		public ShortLeaderboardEventInfo()
		{
		}

		public ShortLeaderboardEventInfo(ShortLeaderboardEventId configKey, string displayName, string description, MetaActivableParams activableParams, EventGroupId groupId, int priority, string nameLocalizationId, List<MetaRef<ShortLeaderboardEventStageInfo>> stageRefs, PlayerRequirement unlockRequirement, MetaRef<RewardUpgradableInfo> finalRewardRef, StoryDefinitionId introDialogue, StoryDefinitionId endDialogue, bool disableBubbleBonus, F32? bubbleBonusDivisor, List<BubbleBonusInfo> secondaryBoardBubbleBonus, PlayerRequirement previewRequirement, EventCategoryInfo categoryInfo, int staticPriority, int dynamicPriorityTriggerThreshold, int experimentPriority)
		{
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

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public void ValidateStageRefs()
		{
		}

		public void ValidateFinalRewardRef()
		{
		}

		public void ValidateReviewPeriodDuration()
		{
		}

		public int GetStageIndex(ShortLeaderboardEventStageId stageId)
		{
			return 0;
		}

		public EnergyType GetEnergyType(IPlayer player)
		{
			return default(EnergyType);
		}

		public static PlayerRequirement FixPlayerRequirement(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}

		public bool ShouldBeVisible(PlayerModel playerModel, MetaActivableVisibleStatus visibleStatus, Option<ShortLeaderboardEventModel> eventModelOption)
		{
			return false;
		}
	}
}
