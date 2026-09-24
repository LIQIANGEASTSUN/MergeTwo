using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Bubble
{
	public class BubbleFeaturesSource : IItemConfigPart<BubbleFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public MetaDuration BubbleDuration;

		public Currencies OpenCurrency;

		public int OpenCost;

		public int SpawnOdds;

		public string ReplacementItem;

		public List<BubbleVariationId> BubbleVariants;

		public string ConfigKey => null;

		public string ItemType => null;

		public BubbleFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
