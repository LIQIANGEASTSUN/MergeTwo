using System.Collections.Generic;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineSpecialItemInfo : IGameConfigData<MysteryMachineSpecialItemItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineSpecialItemItemId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineSpecialItemItemId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ItemId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public List<MysteryMachineSpecialityType> SpecialityType { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineSpecialItemInfo()
		{
		}

		public MysteryMachineSpecialItemInfo(MysteryMachineSpecialItemItemId configKey, int itemId, List<MysteryMachineSpecialityType> specialityType, int experimentPriority)
		{
		}
	}
}
