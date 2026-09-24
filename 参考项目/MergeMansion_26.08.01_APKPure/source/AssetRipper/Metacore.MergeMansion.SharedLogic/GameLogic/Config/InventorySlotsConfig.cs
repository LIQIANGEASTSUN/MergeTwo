using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Config
{
	[MetaSerializable]
	public class InventorySlotsConfig : IGameConfigData<InventorySlotId>, IGameConfigData, IHasGameConfigKey<InventorySlotId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public InventorySlotId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public Currencies Currency { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Cost { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public InventorySlotsConfig()
		{
		}

		public InventorySlotsConfig(InventorySlotId slotId, Currencies currency, int cost, int experimentPriority)
		{
		}
	}
}
