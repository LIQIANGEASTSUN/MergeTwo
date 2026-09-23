using System;
using System.Collections.Generic;
using Code.GameLogic.ExtraSpawns;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.Hotspots.CardStack;
using GameLogic.Player.Items;
using GameLogic.Player.Items.Production;
using Metaplay.Core.Config;

namespace GameLogic.Config
{
	public class MergeMansionGameConfigBuild : GameConfigBuildTemplate<SharedGameConfig, ServerGameConfig, MergeMansionGameConfigBuildParameters>
	{
		public enum BoardConfigField
		{
			ConfigKey = 0,
			Name = 1,
			Description = 2,
			ItemSellOverride = 3,
			AssetPackId = 4,
			BubbleLogic = 5,
			BoardToggleSfxOverride = 6,
			BoardMusicOverride = 7,
			DisableAutospawns = 8,
			EnergyType = 9,
			ClearCobwebPoints = 10,
			DisableSelling = 11,
			MaxEnergyConsumptionMultiplier = 12,
			Display = 13,
			UIStyle = 14,
			Scale = 15,
			Offset = 16
		}

		public enum ConfigField
		{
			ConfigKey = 0,
			Theme = 1
		}

		public enum StackMiniGameConfigField
		{
			ConfigKey = 0,
			GroupingStyle = 1,
			Theme = 2
		}

		public static readonly string[] itemEntries;

		public static readonly (string name, bool fetchGroups)[] areaEntries;

		public static readonly (string name, bool fetchGroups)[] hotspotEntries;

		public static readonly string[] cardCollectionSupportingEventsEntries;

		public override ConfigEntryBuilder? GetEntryBuilder(Type configType, string entryName)
		{
			return null;
		}

		public ConfigEntryBuilder? GetMergeMansionBuilder(Type configType, string entryName)
		{
			return null;
		}

		public ConfigEntryBuilder CustomMultiSourceBuilder<TKey, TInfo>(string entryName, IEnumerable<string> sheetNames, Func<IGameConfigBuilder, string, IDictionary<string, SpreadsheetContent>, List<VariantConfigItem<TKey, TInfo>>> buildFunc) where TInfo : class, IGameConfigData<TKey>, new()
		{
			return default(ConfigEntryBuilder);
		}

		public ConfigEntryBuilder CustomMultiSourceBuilder<TKey, TInfo>(string entryName, IEnumerable<(string name, bool fetchGroups)> sheetList, Func<IGameConfigBuilder, string, IDictionary<string, SpreadsheetContent>, List<VariantConfigItem<TKey, TInfo>>> buildFunc) where TInfo : class, IGameConfigData<TKey>, new()
		{
			return default(ConfigEntryBuilder);
		}

		public static Dictionary<BoardConfigField, int> ParseBoardConfigFieldIndices(List<SpreadsheetCell> columns)
		{
			return null;
		}

		public static void ValidateBoardColumnFields(List<SpreadsheetCell> columns)
		{
		}

		public ConfigEntryBuilder BoardsBuilder(string entryName)
		{
			return default(ConfigEntryBuilder);
		}

		public static Dictionary<T, int> ParseConfigFieldIndices<T>(List<SpreadsheetCell> columns) where T : struct
		{
			return null;
		}

		public static void ValidateColumnFields(List<SpreadsheetCell> columns)
		{
		}

		public static void ValidateCardStackRow(CardStackId tableId, List<SpreadsheetCell> row, int rowIndex, GroupingStyle groupingStyle)
		{
		}

		public ConfigEntryBuilder CardStackBuilder(string entryName)
		{
			return default(ConfigEntryBuilder);
		}

		public ConfigEntryBuilder TransformKeyValueConfig<TValue, TSource>(string entryName, IKeyValueStructureTransformer<TValue, TSource> transformer) where TValue : GameConfigKeyValue<TValue>, new() where TSource : GameConfigKeyValue<TSource>, new()
		{
			return default(ConfigEntryBuilder);
		}

		public static List<VariantConfigItem<string, TComponent>> ParseItemPart<TComponent>(IGameConfigBuilder shared, string configEntryName, SpreadsheetContent content) where TComponent : IItemConfigPart, new()
		{
			return null;
		}

		public static List<(string, string, TComponent)> ParseItemPart<TSource, TComponent>(IGameConfigBuilder shared, string configEntryName, SpreadsheetContent content, IProducerFactory producerFactory) where TSource : IItemConfigPart<TComponent>, new()
		{
			return null;
		}

		public static IDictionary<string, IList<int>> ParseItemSequences(IGameConfigBuilder shared, string configEntryName, SpreadsheetContent itemSequencesSheet)
		{
			return null;
		}

		public static List<VariantConfigItem<int, ItemDefinition>> CreateItemsLibrary(IGameConfigBuilder shared, string configEntryName, IDictionary<string, SpreadsheetContent> sheets)
		{
			return null;
		}

		public static List<VariantConfigItem<AreaId, AreaInfo>> ParseAreaHotSpots(IGameConfigBuilder shared, string entryName, IDictionary<string, SpreadsheetContent> sheets)
		{
			return null;
		}

		public static List<VariantConfigItem<HotspotId, HotspotDefinition>> ParseHotspotDefinitions(IGameConfigBuilder shared, string entryName, IDictionary<string, SpreadsheetContent> sheets)
		{
			return null;
		}

		public static void CreateEnergyModeProgressionEventItemsLibrary(IGameConfigBuilder shared, SpreadsheetContent sheet)
		{
		}

		public static void BuildMiniEventVariantInfo(IGameConfigBuilder serverEntryBuilder, SpreadsheetContent sheet)
		{
		}

		public static void CreateExtraSpawnValuesLibrary<TId, TInfo>(IGameConfigBuilder builder, SpreadsheetContent sheet, string libraryName, ExtraSpawnValueType type, Func<ExtraSpawnValueSource, TInfo> createInfo) where TInfo : class, IGameConfigData<TId>, new()
		{
		}
	}
}
