using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Persistent
{
	public class PersistentFeaturesSource : IItemConfigPart<PersistentFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public bool HasPersistentFeatures;

		public bool HasItemStates;

		public int DecayCycles;

		public int ItemStates;

		public string ResetToItem;

		public string ConfigKey => null;

		public string ItemType => null;

		public PersistentFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
