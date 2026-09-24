using Code.GameLogic.GameEvents;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Leaderboard
{
	[MetaSerializable]
	public class LeaderboardFeatures : ILeaderboardFeatures
	{
		public static readonly LeaderboardFeatures NoLeaderboardFeatures;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool HasLeaderboardFeatures { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ScoreContribution { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public LeaderboardEventId EventId { get; set; }

		public LeaderboardFeatures()
		{
		}

		public LeaderboardFeatures(bool hasLeaderboardFeatures, int scoreContribution, LeaderboardEventId eventId)
		{
		}
	}
}
