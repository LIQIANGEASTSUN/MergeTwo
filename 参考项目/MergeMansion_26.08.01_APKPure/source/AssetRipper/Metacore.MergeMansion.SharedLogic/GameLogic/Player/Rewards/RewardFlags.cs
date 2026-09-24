using System;

namespace GameLogic.Player.Rewards
{
	[Flags]
	public enum RewardFlags
	{
		None = 0,
		IgnoreRewardContainers = 1,
		Everything = 1,
		Default = 0
	}
}
