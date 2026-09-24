using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineCurrencyItemChainSource : IConfigItemSource<MysteryMachineCurrencyItemChainInfo, MysteryMachineCurrencyItemChainId>, IGameConfigSourceItem<MysteryMachineCurrencyItemChainId, MysteryMachineCurrencyItemChainInfo>, IHasGameConfigKey<MysteryMachineCurrencyItemChainId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineCurrencyItemChainId ConfigKey { get; set; }

		public List<MetaRef<MysteryMachineCurrencyItemInfo>> Items { get; set; }

		public MysteryMachineCurrencyItemChainInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
