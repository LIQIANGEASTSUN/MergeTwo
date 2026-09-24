using System.Collections.Generic;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 3 })]
	public class MysteryMachineItemInfo : IGameConfigData<MysteryMachineItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineItemId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineItemId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IMysteryMachineItem Item { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public F64 CameraMultiplier { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<int> WeightsBasedClicks { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<int> WeightsBasedHeat { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineItemInfo()
		{
		}

		public MysteryMachineItemInfo(MysteryMachineItemId configKey, IMysteryMachineItem item, List<int> weightsBasedClicks, List<int> weightsBasedHeat, F64 cameraMultiplier, int experimentPriority)
		{
		}
	}
}
