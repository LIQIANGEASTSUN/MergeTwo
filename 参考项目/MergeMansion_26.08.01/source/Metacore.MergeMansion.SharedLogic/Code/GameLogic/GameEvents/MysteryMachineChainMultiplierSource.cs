using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.MergeChains;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineChainMultiplierSource : IConfigItemSource<MysteryMachineChainMultiplierInfo, MysteryMachineChainMultiplierId>, IGameConfigSourceItem<MysteryMachineChainMultiplierId, MysteryMachineChainMultiplierInfo>, IHasGameConfigKey<MysteryMachineChainMultiplierId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineChainMultiplierId ConfigKey { get; set; }

		public MergeChainId MergeChainId { get; set; }

		public List<MysteryMachineMultiplier> MysteryMachineMultipliers { get; set; }

		public MysteryMachineChainMultiplierInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
