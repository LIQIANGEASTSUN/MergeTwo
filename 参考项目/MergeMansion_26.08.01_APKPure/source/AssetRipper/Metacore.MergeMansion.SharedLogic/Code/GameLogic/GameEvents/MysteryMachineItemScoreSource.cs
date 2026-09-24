using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class MysteryMachineItemScoreSource : IConfigItemSource<MysteryMachineItemScore, MysteryMachineItemScoreId>, IGameConfigSourceItem<MysteryMachineItemScoreId, MysteryMachineItemScore>, IHasGameConfigKey<MysteryMachineItemScoreId>
	{
		public int ExperimentPriority { get; set; }

		public MysteryMachineItemScoreId ConfigKey { get; set; }

		public string ItemType { get; set; }

		public string ItemId { get; set; }

		public int Score { get; set; }

		public int Multiplier { get; set; }

		public MysteryMachineItemScore ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
