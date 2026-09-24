namespace GameLogic.Player.Rewards;

[Flags]
public enum RewardFlags : int
{
	None = 0,
	IgnoreRewardContainers = 1,
	Everything = 1,
	Default = 0,
}

