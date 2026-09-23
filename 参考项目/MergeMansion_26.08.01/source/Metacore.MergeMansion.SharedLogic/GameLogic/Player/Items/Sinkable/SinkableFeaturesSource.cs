using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Sinkable
{
	public class SinkableFeaturesSource : IItemConfigPart<SinkableFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public List<string> SinkInAction;

		public string ConfigKey => null;

		public string ItemType => null;

		public SinkableFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
