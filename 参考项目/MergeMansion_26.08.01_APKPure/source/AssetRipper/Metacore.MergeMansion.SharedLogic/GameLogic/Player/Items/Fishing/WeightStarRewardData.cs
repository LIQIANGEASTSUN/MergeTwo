using GameLogic.Player.Rewards;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Items.Fishing
{
	[MetaSerializable]
	public class WeightStarRewardData : IWeightStarRewardData
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public F32 Weight { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerReward")]
		public PlayerReward Reward { get; set; }

		public WeightStarRewardData()
		{
		}

		public WeightStarRewardData(F32 weight, PlayerReward reward)
		{
		}

		public static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
