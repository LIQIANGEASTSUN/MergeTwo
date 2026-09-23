using Code.GameLogic.GameEvents;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Player.Items.Leaderboard
{
	public class LeaderboardFeaturesSource : IItemConfigPart<LeaderboardFeatures>, IItemConfigPart, IHasGameConfigKey<string>
	{
		public string ItemKey;

		public int ScoreContribution;

		public LeaderboardEventId EventId;

		public string ConfigKey => null;

		public string ItemType => null;

		public LeaderboardFeatures ToConfigData(IProducerFactory producerFactory)
		{
			return null;
		}
	}
}
