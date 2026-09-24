using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineItemSetSource : IConfigItemSource<MysteryMachineItemSetInfo, MysteryMachineItemSetId>, IGameConfigSourceItem<MysteryMachineItemSetId, MysteryMachineItemSetInfo>, IHasGameConfigKey<MysteryMachineItemSetId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineItemSetId ConfigKey { get; set; }

		public List<MetaRef<MysteryMachineItemInfo>> Items { get; set; }

		public MysteryMachineItemSetInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
