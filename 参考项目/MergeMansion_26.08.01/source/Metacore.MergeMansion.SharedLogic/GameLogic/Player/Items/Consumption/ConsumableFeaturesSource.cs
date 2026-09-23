using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Consumption
{
	public class ConsumableFeaturesSource : IItemConfigPart<ConsumableFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string LogicType;

		public List<string> LogicArgs;

		public bool AllowNearMatching;

		public bool DragSafeAreaEnabled;

		public int ItemStackCap;

		public bool CanSpawnBubbles;

		public string ConfigKey => null;

		public string ItemType => null;

		public ConsumableFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
