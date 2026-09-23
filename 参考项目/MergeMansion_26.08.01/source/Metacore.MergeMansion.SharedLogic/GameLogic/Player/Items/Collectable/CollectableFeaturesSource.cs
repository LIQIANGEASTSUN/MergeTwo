using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Collectable
{
	public class CollectableFeaturesSource : IItemConfigPart<CollectableFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string ActionType;

		public List<string> ActionArg;

		public bool ConfirmCollectBelowMergeChainLevel;

		public bool CollectOnSpawn;

		public string ConfigKey => null;

		public string ItemType => null;

		public CollectableFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
