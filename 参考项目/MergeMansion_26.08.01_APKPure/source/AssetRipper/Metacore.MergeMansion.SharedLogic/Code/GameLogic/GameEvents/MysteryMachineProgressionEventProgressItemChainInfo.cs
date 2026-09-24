using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineProgressionEventProgressItemChainInfo : IGameConfigData<MysteryMachineProgressionEventProgressItemChainId>, IGameConfigData, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemChainId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineProgressionEventProgressItemChainId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<MetaRef<MysteryMachineProgressionEventProgressItemInfo>> ItemRefs { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineProgressionEventProgressItemChainInfo()
		{
		}

		public MysteryMachineProgressionEventProgressItemChainInfo(MysteryMachineProgressionEventProgressItemChainId configKey, List<MetaRef<MysteryMachineProgressionEventProgressItemInfo>> itemRefs, int experimentPriority)
		{
		}
	}
}
