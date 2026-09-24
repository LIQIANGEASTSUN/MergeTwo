namespace GameLogic.Player.Items.Leaderboard;

public interface ILeaderboardFeatures
{

	public LeaderboardEventId EventId
	{
		 get { } //Length: 0
	}

	public bool HasLeaderboardFeatures
	{
		 get { } //Length: 0
	}

	public int ScoreContribution
	{
		 get { } //Length: 0
	}

	public LeaderboardEventId get_EventId() { }

	public bool get_HasLeaderboardFeatures() { }

	public int get_ScoreContribution() { }

}

