using System.Collections.Generic;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineItemSetInfo : IGameConfigData<MysteryMachineItemSetId>, IGameConfigData, IHasGameConfigKey<MysteryMachineItemSetId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineItemSetId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public List<MetaRef<MysteryMachineItemInfo>> ItemRefs { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineItemSetInfo()
		{
		}

		public MysteryMachineItemSetInfo(MysteryMachineItemSetId configKey, List<MetaRef<MysteryMachineItemInfo>> itemRefs, int experimentPriority)
		{
		}
	}
}
