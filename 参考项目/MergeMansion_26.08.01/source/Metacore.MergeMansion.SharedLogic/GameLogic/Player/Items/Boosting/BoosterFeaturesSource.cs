using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Boosting
{
	public class BoosterFeaturesSource : IItemConfigPart<BoosterFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public BoostAreaStyle Area;

		public List<string> AffectsOnly;

		public F32 BoostFactor;

		public F32 SpawnBoostFactor;

		public string ConfigKey => null;

		public string ItemType => null;

		public BoosterFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
