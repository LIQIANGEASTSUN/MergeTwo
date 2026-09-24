using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Math;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineItemSource : IConfigItemSource<MysteryMachineItemInfo, MysteryMachineItemId>, IGameConfigSourceItem<MysteryMachineItemId, MysteryMachineItemInfo>, IHasGameConfigKey<MysteryMachineItemId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineItemId ConfigKey { get; set; }

		public string ItemType { get; set; }

		public string ItemId { get; set; }

		public List<int> WeightsBasedClicks { get; set; }

		public List<int> WeightsBasedHeat { get; set; }

		public F64 CameraMultiplier { get; set; }

		public MysteryMachineItemInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public IMysteryMachineItem ResolveItem()
		{
			return null;
		}
	}
}
