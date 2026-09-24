namespace GameLogic.Player.Items.Collectable;

public interface ILeaderboardEventCollectAction : IProgressCollectAction, ICollectAction
{

	public LeaderboardEventInfo LeaderboardEvent
	{
		 get { } //Length: 0
	}

	public LeaderboardEventInfo get_LeaderboardEvent() { }

}

