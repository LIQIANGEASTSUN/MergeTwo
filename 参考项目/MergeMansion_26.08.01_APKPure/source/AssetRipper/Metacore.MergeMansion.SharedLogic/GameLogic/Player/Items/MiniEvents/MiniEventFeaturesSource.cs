using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.MiniEvents
{
	public class MiniEventFeaturesSource : IItemConfigPart<MiniEventFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string ConfigKey => null;

		public List<string> ProducerTimeSkipPrice { get; set; }

		public List<int> ProducerCapacity { get; set; }

		public List<string> ProducerTimer { get; set; }

		public List<int> BubblePrice { get; set; }

		public MiniEventFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
