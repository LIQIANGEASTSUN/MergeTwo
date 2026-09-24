using System.Collections.Generic;
using Code.GameLogic.Config;
using Code.GameLogic.GameEvents;
using Merge;
using Metaplay.Core.Config;
using Metaplay.Core.Math;
using Metaplay.Core.Player;

namespace Code.GameLogic.ExtraSpawns
{
	public class ExtraSpawnSource : IConfigItemSource<ExtraSpawnInfo, string>, IGameConfigSourceItem<string, ExtraSpawnInfo>, IHasGameConfigKey<string>
	{
		public int ExperimentPriority { get; set; }

		public string ConfigKey { get; set; }

		public ExtraSpawnTriggerType Trigger { get; set; }

		public string TriggerArgs { get; set; }

		public int? ItemMinLevel { get; set; }

		public int? ItemMaxLevel { get; set; }

		public List<string> EventFilter { get; set; }

		public List<string> IncludeTag { get; set; }

		public List<string> ExcludeTag { get; set; }

		public List<MergeBoardId> IncludeBoard { get; set; }

		public List<MergeBoardId> ExcludeBoard { get; set; }

		public F32 SpawnChance { get; set; }

		public List<Currencies> SpawnCurrency { get; set; }

		public List<F32?> SpawnCurrencyAmountMin { get; set; }

		public List<F32?> SpawnCurrencyAmountMax { get; set; }

		public List<ExtraSpawnFormulaType> SpawnCurrencyFormula { get; set; }

		public List<CoreSupportEventTokenId> SpawnToken { get; set; }

		public List<F32?> SpawnTokenAmountMin { get; set; }

		public List<F32?> SpawnTokenAmountMax { get; set; }

		public List<ExtraSpawnFormulaType> SpawnTokenFormula { get; set; }

		public List<string> SpawnItem { get; set; }

		public List<long> SpawnItemAmount { get; set; }

		public int VisualPriority { get; set; }

		public PlayerSegmentId Segment { get; set; }

		public CoreSupportEventExtraSpawnGroupId Group { get; set; }

		public int SegmentPriority { get; set; }

		public List<CoreSupportEventType> EventTypeFilter { get; set; }

		public List<string> RequirementType { get; set; }

		public List<string> RequirementId { get; set; }

		public List<string> RequirementAmount { get; set; }

		public List<string> RequirementAux0 { get; set; }

		public ExtraSpawnInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public static List<(T, ExtraSpawnAmountRange, IExtraSpawnFormula)> CreateSpawnEntries<T>(ExtraSpawnTriggerType triggerType, List<T> ids, List<F32?> baseAmountsMin, List<F32?> baseAmountsMax, List<ExtraSpawnFormulaType> formulas)
		{
			return null;
		}
	}
}
