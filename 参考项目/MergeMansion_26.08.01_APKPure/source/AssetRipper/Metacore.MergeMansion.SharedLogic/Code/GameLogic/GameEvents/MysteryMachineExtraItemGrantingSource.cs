using System.Collections.Generic;
using Code.GameLogic.Config;
using GameLogic.MergeChains;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineExtraItemGrantingSource : IConfigItemSource<MysteryMachineExtraItemGrantingInfo, MysteryMachineExtraItemGrantingId>, IGameConfigSourceItem<MysteryMachineExtraItemGrantingId, MysteryMachineExtraItemGrantingInfo>, IHasGameConfigKey<MysteryMachineExtraItemGrantingId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineExtraItemGrantingId ConfigKey { get; set; }

		public MergeChainId ChainId { get; set; }

		public List<string> ItemId { get; set; }

		public List<int> ExtraItemCount { get; set; }

		public MysteryMachineExtraItemGrantingInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
