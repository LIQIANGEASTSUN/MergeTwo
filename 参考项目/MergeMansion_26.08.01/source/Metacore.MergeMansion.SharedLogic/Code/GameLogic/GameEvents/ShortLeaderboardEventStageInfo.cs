using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Config.Costs;
using GameLogic.Player.Rewards;
using GameLogic.Story;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Offers;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class ShortLeaderboardEventStageInfo : IGameConfigData<ShortLeaderboardEventStageId>, IGameConfigData, IHasGameConfigKey<ShortLeaderboardEventStageId>, IValidatable
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ShortLeaderboardEventStageId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeBoardId BoardId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public MetaDuration StartTime { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public MetaDuration Duration { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<GameCurrencyCost> ReplayCosts { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRewards")]
		public List<PlayerReward> CompletionRewards { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<int> RankingPositionStars { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public OfferPlacementId BoardShopPlacementId { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public int AuxEnergyAttachmentChance { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public int StarsToComplete { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public List<MetaRef<EventLevelInfo>> LevelRefs { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public StoryDefinitionId EnterBoardDialogue { get; set; }

		[MetaMember(13, MetaMemberFlags.None)]
		public StoryDefinitionId CompletionDialogue { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public MetaDuration ReplayCostCooldown { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public ShortLeaderboardEventStageInfo()
		{
		}

		public ShortLeaderboardEventStageInfo(ShortLeaderboardEventStageId configKey, MergeBoardId boardId, MetaDuration startTime, MetaDuration duration, List<GameCurrencyCost> replayCosts, List<PlayerReward> completionRewards, List<int> rankingPositionStars, OfferPlacementId boardShopPlacementId, int auxEnergyAttachmentChance, int starsToComplete, List<MetaRef<EventLevelInfo>> levelRefs, StoryDefinitionId enterBoardDialogue, StoryDefinitionId completionDialogue, MetaDuration replayCostCooldown, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public void ValidateRankingPositionStars()
		{
		}

		public void ValidateStarsToComplete()
		{
		}

		public void ValidateDialogues(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static List<PlayerReward> FixPlayerRewards(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
