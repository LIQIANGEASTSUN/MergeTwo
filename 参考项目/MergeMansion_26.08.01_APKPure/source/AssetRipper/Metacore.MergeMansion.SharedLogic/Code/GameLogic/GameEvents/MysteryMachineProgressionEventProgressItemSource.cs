using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineProgressionEventProgressItemSource : IConfigItemSource<MysteryMachineProgressionEventProgressItemInfo, MysteryMachineProgressionEventProgressItemId>, IGameConfigSourceItem<MysteryMachineProgressionEventProgressItemId, MysteryMachineProgressionEventProgressItemInfo>, IHasGameConfigKey<MysteryMachineProgressionEventProgressItemId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineProgressionEventProgressItemId ConfigKey { get; set; }

		public int Amount { get; set; }

		public MysteryMachineProgressionEventProgressItemInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
