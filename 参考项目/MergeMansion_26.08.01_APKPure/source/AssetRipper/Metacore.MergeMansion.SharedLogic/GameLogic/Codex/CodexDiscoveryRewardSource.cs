using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Codex
{
	public class CodexDiscoveryRewardSource : IConfigItemSource<CodexDiscoveryRewardInfo, CodexDiscoveryRewardId>, IGameConfigSourceItem<CodexDiscoveryRewardId, CodexDiscoveryRewardInfo>, IHasGameConfigKey<CodexDiscoveryRewardId>
	{
		public int ExperimentPriority { get; set; }

		public CodexDiscoveryRewardId ConfigKey { get; set; }

		public string CompletionRewardType { get; set; }

		public string CompletionRewardId { get; set; }

		public string CompletionRewardAux0 { get; set; }

		public string CompletionRewardAux1 { get; set; }

		public int CompletionRewardAmount { get; set; }

		public List<string> RewardType { get; set; }

		public List<string> RewardId { get; set; }

		public List<string> RewardAux0 { get; set; }

		public List<string> RewardAux1 { get; set; }

		public List<int> RewardAmount { get; set; }

		public CodexDiscoveryRewardInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
