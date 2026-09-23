using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Sink
{
	public class SinkFeaturesSource : IItemConfigPart<SinkFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string FactoryType;

		public List<string> Scores;

		public List<string> Reward;

		public string RewardTag;

		public int FinalScore;

		public string ConfigKey => null;

		public string ItemType => null;

		public bool HideProgressBar { get; set; }

		public bool HideUndiscoveredItemsInHints { get; set; }

		public bool AllowReverseSinking { get; set; }

		public SinkFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
