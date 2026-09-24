using GameLogic.Player.Rewards;
using Metaplay.Core.Math;

namespace GameLogic.Player.Items.Fishing
{
	public interface IWeightStarRewardData
	{
		F32 Weight { get; }

		PlayerReward Reward { get; }
	}
}
