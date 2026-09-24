using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Fallbacks
{
	public class FallbackPlayerRewardInfoSource : IConfigItemSource<FallbackPlayerRewardInfo, FallbackPlayerRewardId>, IGameConfigSourceItem<FallbackPlayerRewardId, FallbackPlayerRewardInfo>, IHasGameConfigKey<FallbackPlayerRewardId>
	{
		public int ExperimentPriority { get; set; }

		public FallbackPlayerRewardId ConfigKey { get; set; }

		public string RewardType { get; set; }

		public string RewardId { get; set; }

		public string RewardAux0 { get; set; }

		public string RewardAux1 { get; set; }

		public int RewardAmount { get; set; }

		public FallbackPlayerRewardInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
