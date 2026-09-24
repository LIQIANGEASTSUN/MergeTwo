using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Sink
{
	[MetaSerializable]
	public class TagRewardsInfo : IGameConfigData<string>, IGameConfigData, IHasGameConfigKey<string>
	{
		[MetaMember(2, MetaMemberFlags.None)]
		public int TotalPoints;

		[MetaMember(3, MetaMemberFlags.None)]
		public string RewardTagName;

		[MetaMember(4, MetaMemberFlags.None)]
		public IItemProducer ItemProducer;

		[MetaMember(1, MetaMemberFlags.None)]
		public string ConfigKey { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public TagRewardsInfo()
		{
		}

		public TagRewardsInfo(string configKey, int totalPoints, string rewardTagName, IItemProducer itemProducer, int experimentPriority)
		{
		}
	}
}
