using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Story;
using Merge;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Offers;

namespace Code.GameLogic.GameEvents
{
	public class ShortLeaderboardEventStageSource : IConfigItemSource<ShortLeaderboardEventStageInfo, ShortLeaderboardEventStageId>, IGameConfigSourceItem<ShortLeaderboardEventStageId, ShortLeaderboardEventStageInfo>, IHasGameConfigKey<ShortLeaderboardEventStageId>
	{
		public int ExperimentPriority { get; set; }

		public ShortLeaderboardEventStageId ConfigKey { get; set; }

		public MergeBoardId BoardId { get; set; }

		public MetaDuration StartTime { get; set; }

		public MetaDuration Duration { get; set; }

		public Currencies ReplayCostCurrency { get; set; }

		public List<long> ReplayCostAmount { get; set; }

		public MetaDuration ReplayCostCooldown { get; set; }

		public OfferPlacementId BoardShopPlacementId { get; set; }

		public int AuxEnergyAttachmentChance { get; set; }

		public int StarsToComplete { get; set; }

		public List<MetaRef<EventLevelInfo>> Levels { get; set; }

		public StoryDefinitionId EnterBoardDialogue { get; set; }

		public StoryDefinitionId CompletionDialogue { get; set; }

		public List<string> CompletionRewardType { get; set; }

		public List<string> CompletionRewardId { get; set; }

		public List<string> CompletionRewardAux0 { get; set; }

		public List<string> CompletionRewardAux1 { get; set; }

		public List<int> CompletionRewardAmount { get; set; }

		public List<int> RankingPositionStars { get; set; }

		public ShortLeaderboardEventStageInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
