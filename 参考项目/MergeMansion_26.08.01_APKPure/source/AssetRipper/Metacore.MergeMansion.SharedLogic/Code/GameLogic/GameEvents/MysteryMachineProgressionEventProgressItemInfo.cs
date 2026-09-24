using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineProgressionEventProgressItemInfo : IGameConfigData<MysteryMachineProgressionEventProgressItemId>, IGameConfigData, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineProgressionEventProgressItemId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineProgressionEventProgressItemInfo()
		{
		}

		public MysteryMachineProgressionEventProgressItemInfo(MysteryMachineProgressionEventProgressItemId configKey, int amount, int experimentPriority)
		{
		}
	}
}
