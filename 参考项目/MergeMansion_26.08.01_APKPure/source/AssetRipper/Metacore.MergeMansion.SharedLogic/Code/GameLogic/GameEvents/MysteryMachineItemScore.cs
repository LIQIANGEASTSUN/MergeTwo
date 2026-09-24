using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineItemScore : IGameConfigData<MysteryMachineItemScoreId>, IGameConfigData, IHasGameConfigKey<MysteryMachineItemScoreId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineItemScoreId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public string ItemId { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Score { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int Multiplier { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineItemScore()
		{
		}

		public MysteryMachineItemScore(MysteryMachineItemScoreId configKey, string item, int score, int multiplier, int experimentPriority)
		{
		}
	}
}
