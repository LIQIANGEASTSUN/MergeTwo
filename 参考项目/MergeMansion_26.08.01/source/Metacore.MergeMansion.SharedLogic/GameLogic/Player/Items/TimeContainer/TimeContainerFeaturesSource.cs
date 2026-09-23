using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.TimeContainer
{
	public class TimeContainerFeaturesSource : IItemConfigPart<TimeContainerFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public MetaDuration InitialTime;

		public TimeContainerMergeBehavior MergeBehavior;

		public string ConfigKey => null;

		public string ItemType => null;

		public TimeContainerFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
