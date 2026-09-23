using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.Codex;
using Metaplay.Core.Config;

namespace GameLogic.MergeChains
{
	public class MergeChainSource : IConfigItemSource<MergeChainDefinition, MergeChainId>, IGameConfigSourceItem<MergeChainId, MergeChainDefinition>, IHasGameConfigKey<MergeChainId>
	{
		public int ExperimentPriority { get; set; }

		public MergeChainId ConfigKey { get; set; }

		public List<string> Item { get; set; }

		public List<string> FallbackItem { get; set; }

		public CodexCategoryId CodexCategory { get; set; }

		public CodexDiscoveryRewardId DiscoveryReward { get; set; }

		public string CompletionSfx { get; set; }

		public string OverrideMergeChainSfx { get; set; }

		public int? InitialLevel { get; set; }

		public int? UnsellableUntilPlayerLevel { get; set; }

		public int? ShowSellConfirmationUntilPlayerLevel { get; set; }

		public MergeChainDefinition ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
