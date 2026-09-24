namespace GameLogic.Player.Items.Leaderboard;

[MetaSerializable]
public class LeaderboardFeatures : ILeaderboardFeatures
{
	public static readonly LeaderboardFeatures NoLeaderboardFeatures; //Field offset: 0x0
	[CompilerGenerated]
	private bool <HasLeaderboardFeatures>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ScoreContribution>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private LeaderboardEventId <EventId>k__BackingField; //Field offset: 0x18

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private override LeaderboardEventId EventId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override bool HasLeaderboardFeatures
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int ScoreContribution
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private static LeaderboardFeatures() { }

	private LeaderboardFeatures() { }

	public LeaderboardFeatures(bool hasLeaderboardFeatures, int scoreContribution, LeaderboardEventId eventId) { }

	[CompilerGenerated]
	public override LeaderboardEventId get_EventId() { }

	[CompilerGenerated]
	public override bool get_HasLeaderboardFeatures() { }

	[CompilerGenerated]
	public override int get_ScoreContribution() { }

	[CompilerGenerated]
	private void set_EventId(LeaderboardEventId value) { }

	[CompilerGenerated]
	private void set_HasLeaderboardFeatures(bool value) { }

	[CompilerGenerated]
	private void set_ScoreContribution(int value) { }

}

