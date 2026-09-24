using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineProgressionEventProgressItemChainSource : IConfigItemSource<MysteryMachineProgressionEventProgressItemChainInfo, MysteryMachineProgressionEventProgressItemChainId>, IGameConfigSourceItem<MysteryMachineProgressionEventProgressItemChainId, MysteryMachineProgressionEventProgressItemChainInfo>, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemChainId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineProgressionEventProgressItemChainId ConfigKey { get; set; }

		public List<MetaRef<MysteryMachineProgressionEventProgressItemInfo>> Items { get; set; }

		public MysteryMachineProgressionEventProgressItemChainInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
