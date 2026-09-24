using GameCore.Configuration.Definitions;

namespace Merger.Rewards.Interfaces.Datas
{
	public interface IRewardData
	{
		string ConfigurationId { get; }

		string Name { get; }

		string Type { get; }

		IRewardType RewardType { get; }

		RewardAmount RewardAmount { get; }
	}
}
