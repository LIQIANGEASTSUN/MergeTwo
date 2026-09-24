using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineCurrencyItemInfo : IGameConfigData<MysteryMachineCurrencyItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineCurrencyItemId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineCurrencyItemId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public Currencies Currency { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int DisplayAmount { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineCurrencyItemInfo()
		{
		}

		public MysteryMachineCurrencyItemInfo(MysteryMachineCurrencyItemId configKey, Currencies currency, int amount, int displayAmount, int experimentPriority)
		{
		}
	}
}
