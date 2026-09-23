using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Fishing
{
	public class FramesFeaturesSource : IItemConfigPart<FramesFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string WeightItem;

		public string ConfigKey => null;

		public string ItemType => null;

		public FramesFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
