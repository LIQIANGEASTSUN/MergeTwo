using System.Collections.Generic;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Inventory
{
	[MetaSerializable]
	public class RentableInventorySettings : IGameConfigData<RentableInventorySettingsId>, IGameConfigData, IHasGameConfigKey<RentableInventorySettingsId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public RentableInventorySettingsId Id { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<long> BatchPrice { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public Currencies BatchPriceCurrency { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int BatchSlotCount { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int BatchExpireTime { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public int MaximumBatches { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public RentableInventorySettingsId ConfigKey => null;

		public RentableInventorySettings()
		{
		}

		public RentableInventorySettings(RentableInventorySettingsId id, List<long> batchPrice, Currencies batchPriceCurrency, int batchSlotCount, int batchExpireTime, int maximumBatches, int experimentPriority)
		{
		}
	}
}
