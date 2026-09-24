namespace GameLogic.Player.Items.Collectable;

public interface ITimeSkipCollectAction : ICollectAction
{

	public double DurationToSkipMinutes
	{
		 get { } //Length: 0
	}

	public double get_DurationToSkipMinutes() { }

}

