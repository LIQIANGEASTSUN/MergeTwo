namespace GameLogic.Player.Items.Leaderboard;

public class LeaderboardFeaturesSource : IItemConfigPart<LeaderboardFeatures>, IItemConfigPart, IHasGameConfigKey<String>
{
	public string ItemKey; //Field offset: 0x10
	public int ScoreContribution; //Field offset: 0x18
	public LeaderboardEventId EventId; //Field offset: 0x20

	public override string ConfigKey
	{
		 get { } //Length: 8
	}

	public string ItemType
	{
		 get { } //Length: 8
	}

	public LeaderboardFeaturesSource() { }

	public override string get_ConfigKey() { }

	public string get_ItemType() { }

	public override LeaderboardFeatures ToConfigData(IProducerFactory producerFactory) { }

}

