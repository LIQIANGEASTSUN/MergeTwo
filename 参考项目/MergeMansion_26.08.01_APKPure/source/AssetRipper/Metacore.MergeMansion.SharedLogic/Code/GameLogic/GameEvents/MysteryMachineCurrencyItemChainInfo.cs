using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineCurrencyItemChainInfo : IGameConfigData<MysteryMachineCurrencyItemChainId>, IGameConfigData, IHasGameConfigKey<MysteryMachineCurrencyItemChainId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineCurrencyItemChainId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<MetaRef<MysteryMachineCurrencyItemInfo>> ItemRefs { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineCurrencyItemChainInfo()
		{
		}

		public MysteryMachineCurrencyItemChainInfo(MysteryMachineCurrencyItemChainId configKey, List<MetaRef<MysteryMachineCurrencyItemInfo>> itemRefs, int experimentPriority)
		{
		}
	}
}
