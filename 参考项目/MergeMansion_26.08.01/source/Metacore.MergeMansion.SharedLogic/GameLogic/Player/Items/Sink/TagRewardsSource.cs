using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Sink
{
	public class TagRewardsSource : IConfigItemSource<TagRewardsInfo, string>, IGameConfigSourceItem<string, TagRewardsInfo>, IHasGameConfigKey<string>
	{
		public int TotalPoints;

		public string RewardTagName;

		public List<string> Item;

		public List<int> Weight;

		public int ExperimentPriority { get; set; }

		public string ConfigKey { get; set; }

		public TagRewardsInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public static string GetItemTypeForProducer(string configKey)
		{
			return null;
		}

		public static bool ShouldAddArtificialLevelForProducerItemId(string configKey)
		{
			return false;
		}
	}
}
