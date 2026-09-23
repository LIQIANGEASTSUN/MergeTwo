using System;
using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Merge;
using GameLogic.Player;
using GameLogic.Player.Requirements;
using Merge;
using Metacore.MergeMansion.Common.Options;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace Code.GameLogic.ExtraSpawns
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 13 })]
	public class ExtraSpawnInfo : IGameConfigData<string>, IGameConfigData, IHasGameConfigKey<string>
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public string ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IExtraSpawnTrigger Trigger { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int? ItemMinLevel { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public int? ItemMaxLevel { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public List<string> EventFilters { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public List<string> IncludeTags { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public List<string> ExcludeTags { get; set; }

		[MetaMember(8, MetaMemberFlags.None)]
		public List<MergeBoardId> IncludeBoards { get; set; }

		[MetaMember(9, MetaMemberFlags.None)]
		public List<MergeBoardId> ExcludeBoards { get; set; }

		[MetaMember(10, MetaMemberFlags.None)]
		public F32 SpawnChance { get; set; }

		[MetaMember(11, MetaMemberFlags.None)]
		public List<(Currencies currency, ExtraSpawnAmountRange baseAmountRange, IExtraSpawnFormula formula)> SpawnCurrencies { get; set; }

		[MetaMember(12, MetaMemberFlags.None)]
		public List<(CoreSupportEventTokenId currency, ExtraSpawnAmountRange baseAmountRange, IExtraSpawnFormula formula)> SpawnTokens { get; set; }

		[MetaMember(14, MetaMemberFlags.None)]
		public int VisualPriority { get; set; }

		[MetaMember(15, MetaMemberFlags.None)]
		public CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> SegmentFeature { get; set; }

		[MetaMember(16, MetaMemberFlags.None)]
		public List<CoreSupportEventType> EventTypeFilters { get; set; }

		[MetaMember(17, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerRequirements")]
		public List<PlayerRequirement> Requirements { get; set; }

		[MetaMember(18, MetaMemberFlags.None)]
		public List<(ItemDef itemDef, long amount)> SpawnItems { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public Option<CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId>> SegmentFeatureOption => default(Option<CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId>>);

		public Option<List<(Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula)>> SpawnCurrenciesOption => default(Option<List<(Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula)>>);

		public Option<List<(CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula)>> SpawnTokensOption => default(Option<List<(CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula)>>);

		public ExtraSpawnInfo()
		{
		}

		public ExtraSpawnInfo(string configKey, IExtraSpawnTrigger trigger, int? itemMinLevel, int? itemMaxLevel, List<string> eventFilters, List<string> includeTags, List<string> excludeTags, List<MergeBoardId> includeBoards, List<MergeBoardId> excludeBoards, F32 spawnChance, List<(Currencies, ExtraSpawnAmountRange, IExtraSpawnFormula)> spawnCurrencies, List<(CoreSupportEventTokenId, ExtraSpawnAmountRange, IExtraSpawnFormula)> spawnTokens, List<(int, long)> spawnItems, int visualPriority, CoreSupportEventSegmentFeature<CoreSupportEventExtraSpawnGroupId> segmentFeature, List<CoreSupportEventType> eventTypeFilters, List<PlayerRequirement> requirements, int experimentPriority)
		{
		}

		public bool Matches(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption)
		{
			return false;
		}

		public void HandleSpawn(PlayerModel player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, AnalyticsContext analyticsContext, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public static Option<List<(TId, long)>> GetSpawnEntries<TId>(PlayerModel player, Option<List<(TId id, ExtraSpawnAmountRange baseAmountRange, IExtraSpawnFormula formula)>> entriesOption, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Func<PlayerModel, TId, bool> filter, RandomPCG random)
		{
			return default(Option<List<(TId, long)>>);
		}

		public static bool MatchesCurrency(PlayerModel player, Currencies currency)
		{
			return false;
		}

		public static bool MatchesCoreSupportEventToken(PlayerModel player, CoreSupportEventTokenId tokenId)
		{
			return false;
		}

		public static bool MatchesItemMinLevel(int itemLevel, int? minLevel)
		{
			return false;
		}

		public static bool MatchesItemMaxLevel(int itemLevel, int? maxLevel)
		{
			return false;
		}

		public static bool MatchesEventTypeFilters(IPlayer player, Option<List<CoreSupportEventType>> eventTypeFiltersOption)
		{
			return false;
		}

		public static bool MatchesEventFilters(IEnumerable<string> activeEventIds, List<string> eventFilters)
		{
			return false;
		}

		public static bool MatchesIncludeTags(List<string> itemTags, List<string> includeTags)
		{
			return false;
		}

		public static bool MatchesExcludeTags(List<string> itemTags, List<string> excludeTags)
		{
			return false;
		}

		public static bool MatchesTags(List<string> itemTags, List<string> tags, bool containsResult)
		{
			return false;
		}

		public static bool MatchesIncludeBoards(MergeBoardId board, List<MergeBoardId> includeBoards)
		{
			return false;
		}

		public static bool MatchesExcludeBoards(MergeBoardId board, List<MergeBoardId> excludeBoards)
		{
			return false;
		}

		public static bool MatchesBoards(MergeBoardId board, List<MergeBoardId> boards, bool containsResult)
		{
			return false;
		}

		public static bool MatchesRequirements(IPlayer player, Option<List<PlayerRequirement>> requirementsOption)
		{
			return false;
		}

		public static void HandleSpawnCurrencies(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, Option<List<(Currencies, long)>> spawnCurrenciesOption, AnalyticsContext analyticsContext)
		{
		}

		public static void HandleSpawnTokens(IPlayer player, IExtraSpawnTrigger trigger, Option<List<(CoreSupportEventTokenId, long)>> spawnTokensOption, AnalyticsContext analyticsContext)
		{
		}

		public static void HandleSpawnItems(IPlayer player, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, List<(ItemDef, long)> spawnItems, ICollection<MergeBoardAct> collectedActs)
		{
		}

		public static List<PlayerRequirement> FixPlayerRequirements(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
