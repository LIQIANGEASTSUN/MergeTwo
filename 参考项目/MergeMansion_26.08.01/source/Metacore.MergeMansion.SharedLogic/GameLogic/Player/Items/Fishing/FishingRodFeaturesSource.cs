using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Fishing
{
	public class FishingRodFeaturesSource : IItemConfigPart<FishingRodFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public List<string> Item;

		public List<int> Weight;

		public FishingRodRarity Rarity;

		public string FishWeightCategoryOddsOverrides;

		public string FishWeightCategorySizePercentagesOverrides;

		public string WaterDropletOverride;

		public string ConfigKey => null;

		public string ItemType => null;

		public FishingRodFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
