using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineSpecialItemSource : IConfigItemSource<MysteryMachineSpecialItemInfo, MysteryMachineSpecialItemItemId>, IGameConfigSourceItem<MysteryMachineSpecialItemItemId, MysteryMachineSpecialItemInfo>, IHasGameConfigKey<MysteryMachineSpecialItemItemId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineSpecialItemItemId ConfigKey { get; set; }

		public string ItemId { get; set; }

		public List<MysteryMachineSpecialityType> Speciality { get; set; }

		public MysteryMachineSpecialItemInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public int ResolveItem()
		{
			return 0;
		}
	}
}
