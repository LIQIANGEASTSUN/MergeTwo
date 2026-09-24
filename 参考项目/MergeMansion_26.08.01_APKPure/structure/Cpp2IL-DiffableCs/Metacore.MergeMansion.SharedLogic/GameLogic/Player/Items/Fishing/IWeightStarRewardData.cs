namespace GameLogic.Player.Items.Fishing;

public interface IWeightStarRewardData
{

	public PlayerReward Reward
	{
		 get { } //Length: 0
	}

	public F32 Weight
	{
		 get { } //Length: 0
	}

	public PlayerReward get_Reward() { }

	public F32 get_Weight() { }

}

