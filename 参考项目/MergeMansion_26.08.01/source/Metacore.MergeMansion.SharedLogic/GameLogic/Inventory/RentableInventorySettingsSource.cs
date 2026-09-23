using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.Inventory
{
	public class RentableInventorySettingsSource : IConfigItemSource<RentableInventorySettings, RentableInventorySettingsId>, IGameConfigSourceItem<RentableInventorySettingsId, RentableInventorySettings>, IHasGameConfigKey<RentableInventorySettingsId>
	{
		public List<long> BatchPrices;

		public Currencies BatchPriceCurrency;

		public int BatchSlotCount;

		public int BatchExpireTime;

		public int MaximumBatches;

		public int ExperimentPriority { get; set; }

		public RentableInventorySettingsId ConfigKey { get; set; }

		public RentableInventorySettings ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
