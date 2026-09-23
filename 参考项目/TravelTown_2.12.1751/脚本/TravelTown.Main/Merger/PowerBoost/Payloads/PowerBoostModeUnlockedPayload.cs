using MergeEngine.Configuration.Definitions;
using MergeEngine.Model;

namespace Merger.PowerBoost.Payloads
{
	public class PowerBoostModeUnlockedPayload
	{
		public int UnlockedBoostMode { get; }

		public Reward Reward { get; }

		public string RewardId { get; }

		public PlayerResourceEnum ProducerResourceType { get; }

		public bool IsInBoardEvent { get; }

		public int EnergyThreshold { get; }

		public string TransactionId { get; }

		public PowerBoostModeUnlockedPayload(int unlockedBoostMode, Reward reward, string rewardId, PlayerResourceEnum producerResourceType, bool isInBoardEvent, int energyThreshold, string transactionId)
		{
		}
	}
}
