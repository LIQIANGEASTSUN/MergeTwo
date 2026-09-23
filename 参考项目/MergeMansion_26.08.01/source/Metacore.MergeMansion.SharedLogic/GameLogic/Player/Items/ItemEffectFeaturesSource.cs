using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items
{
	public class ItemEffectFeaturesSource : IItemConfigPart<ItemEffectFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public string ActivationVFXPoolTag;

		public string ConfigKey => null;

		public string ItemType => null;

		public ItemEffectFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
