using System.Collections.Generic;
using GameLogic.MergeChains;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineChainMultiplierInfo : IGameConfigData<MysteryMachineChainMultiplierId>, IGameConfigData, IHasGameConfigKey<MysteryMachineChainMultiplierId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineChainMultiplierId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MergeChainId ChainId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<MysteryMachineMultiplier> MultipliersList { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineChainMultiplierInfo()
		{
		}

		public MysteryMachineChainMultiplierInfo(MysteryMachineChainMultiplierId configKey, MergeChainId chainId, List<MysteryMachineMultiplier> multipliersList, int experimentPriority)
		{
		}
	}
}
