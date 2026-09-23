using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using GameLogic.MiniEvents;
using GameLogic.Player;
using Metaplay.Core.Config;
using Metaplay.Core.Player;

namespace GameLogic.Config
{
	public class ServerGameConfig : ServerGameConfigBase
	{
		[GameConfigEntry("PlayerExperiments", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ExperimentId -> ExperimentId #key" }, null, false)]
		public GameConfigLibrary<PlayerExperimentId, PlayerExperimentInfo> PlayerExperiments { get; set; }

		[GameConfigEntry("MiniEventsVariants", true, "MiniEvents")]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> MiniEventId #key" }, null, false)]
		[GameConfigSyntaxAdapter(new string[] { "#StartDate -> Schedule.Start.Date", "#StartTime -> Schedule.Start.Time" }, new string[] { "# -> Schedule." }, false)]
		public GameConfigLibrary<MiniEventId, MiniEventVariantInfo> MiniEventVariants { get; set; }

		[GameConfigEntry("BoultonLeagueEventScorePercentiles", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Percentile #key" }, null, false)]
		public GameConfigLibrary<int, BoultonLeagueEventScorePercentileInfo> BoultonLeagueEventScorePercentiles { get; set; }

		[GameConfigEntry("BoultonLeagueRanks", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Rank #key" }, null, false)]
		public GameConfigLibrary<int, BoultonLeagueRankInfo> BoultonLeagueRanks { get; set; }

		[GameConfigEntry("LeaderboardEventScorePercentiles", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> Percentile #key" }, null, false)]
		public GameConfigLibrary<int, LeaderboardEventScorePercentileInfo> LeaderboardEventScorePercentiles { get; set; }

		[GameConfigEntry("ShortLeaderboardEventBotSpeedConfig", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<int, ShortLeaderboardEventBotSpeedConfig> ShortLeaderboardEventBotSpeedConfigs { get; set; }

		[GameConfigEntry("ShortLeaderboardEventBotSelection", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<int, ShortLeaderboardEventBotSelection> ShortLeaderboardEventBotSelections { get; set; }

		[GameConfigEntry("ShortLeaderboardEventMatchmakingTime", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> TimeMax #key" }, null, false)]
		public GameConfigLibrary<ShortLeaderboardEventMatchmakingTimeId, ShortLeaderboardEventMatchmakingTime> ShortLeaderboardEventMatchmakingTimes { get; set; }

		[GameConfigEntry("LeaderboardEventMatchmakingBuckets", true, null)]
		[GameConfigEntryTransform(typeof(LeaderboardEventMatchmakingBucketsSource))]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<LeaderboardEventMatchmakingBucketsId, LeaderboardEventMatchmakingBucketsInfo> LeaderboardEventMatchmakingBuckets { get; set; }

		[GameConfigEntry("ClassicRacesEventBotSelection", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<int, ClassicRacesEventBotSelection> ClassicRacesEventBotSelections { get; set; }

		[GameConfigEntry("ClassicRacesEventMatchmakingTime", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> TimeMax #key" }, null, false)]
		public GameConfigLibrary<ClassicRacesEventMatchmakingTimeId, ClassicRacesEventMatchmakingTime> ClassicRacesEventMatchmakingTimes { get; set; }

		[GameConfigEntry("ClassicRacesEventBotBehaviorConfig", true, null)]
		[GameConfigSyntaxAdapter(new string[] { "ConfigKey -> ConfigKey #key" }, null, false)]
		public GameConfigLibrary<BotBehaviorId, ClassicRacesEventBotBehaviorConfig> ClassicRacesEventBotBehaviorConfigs { get; set; }

		public int[] BoultonLeagueEventScorePercentilesSorted { get; set; }

		public Dictionary<int, List<BoultonLeagueRankInfo>> BoultonLeagueRanksSorted { get; set; }

		public int[] LeaderboardEventScorePercentilesSorted { get; set; }

		public Dictionary<(string, int), Dictionary<int, LeaderboardBotPointVariance>> ShortLeaderboardEventBotSpeeds { get; set; }

		public List<string> ShortLeaderboardEventDefaultBotPool { get; set; }

		public int ShortLeaderboardEventMatchmakingDurationSeconds { get; set; }

		public List<string> ClassicRacesEventDefaultBotPool { get; set; }

		public int ClassicRacesEventMatchmakingDurationSeconds { get; set; }

		public IEnumerable<IValidatableServerGameConfig> ValidatableEntries => null;

		public override void BuildTimeValidate(GameConfigValidationResult validationResult)
		{
		}

		public override void OnLoaded()
		{
		}

		public Dictionary<int, List<BoultonLeagueRankInfo>> ConstructBoultonLeagueRanksSorted()
		{
			return null;
		}

		public int[] ConstructEventScorePercentilesSorted(IEnumerable<IEventScorePercentileInfo> entries)
		{
			return null;
		}

		public Dictionary<(string, int), Dictionary<int, LeaderboardBotPointVariance>> ConstructShortLeaderboardBotSpeeds(IEnumerable<ShortLeaderboardEventBotSpeedConfig> entries)
		{
			return null;
		}

		public List<string> ConstructShortLeaderboardEventDefaultBotPool()
		{
			return null;
		}

		public int ParseShortLeaderboardMatchmakingDurationSeconds()
		{
			return 0;
		}

		public BoultonLeagueRankInfo GetBoultonLeagueRankInfo(PlayerModel playerModel, int stageNumber, BoultonLeagueMatchmakingAlgorithm matchmakingAlgorithm)
		{
			return null;
		}

		public int GetBoultonLeagueEventScorePercentile(int score)
		{
			return 0;
		}

		public int GetLeaderboardEventScorePercentile(int score)
		{
			return 0;
		}

		public int GetBoultonLeagueTotalRankCount()
		{
			return 0;
		}

		public Dictionary<int, LeaderboardBotPointVariance> GetShortLeaderboardBotPointDistribution(string botName, int stage)
		{
			return null;
		}

		public List<string> GetLeaderboardBotEventBotPool(PlayerSegmentId segmentId, int leagueId)
		{
			return null;
		}

		public List<string> GetShortLeaderboardBotPool(PlayerSegmentId segmentId)
		{
			return null;
		}

		public List<string> GetClassicRacesBotPool(PlayerSegmentId segmentId)
		{
			return null;
		}

		public List<string> ConstructClassicRacesEventDefaultBotPool()
		{
			return null;
		}

		public int ParseClassicRacesMatchmakingDurationSeconds()
		{
			return 0;
		}

		public Dictionary<int, LeaderboardBotPointVariance> GetLeaderboardBotEventBotPointDistribution(int leagueId, string botType, int stage)
		{
			return null;
		}
	}
}
