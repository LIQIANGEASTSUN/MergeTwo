using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializable]
	public class MysteryMachineTaskInfo : IGameConfigData<MysteryMachineTaskId>, IGameConfigData, IHasGameConfigKey<MysteryMachineTaskId>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MysteryMachineTaskId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IMysteryMachineTask Task { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerReward")]
		public PlayerReward Reward { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public bool Recurring { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int RecurringIncrease { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public MysteryMachineTaskInfo()
		{
		}

		public MysteryMachineTaskInfo(MysteryMachineTaskId configKey, IMysteryMachineTask task, PlayerReward reward, bool recurring, int recurringIncrease, int experimentPriority)
		{
		}

		public static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
