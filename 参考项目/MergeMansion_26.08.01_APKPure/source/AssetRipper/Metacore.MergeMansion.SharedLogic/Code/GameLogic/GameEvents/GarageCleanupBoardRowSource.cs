using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class GarageCleanupBoardRowSource : IConfigItemSource<GarageCleanupBoardRowInfo, GarageCleanupBoardRowId>, IGameConfigSourceItem<GarageCleanupBoardRowId, GarageCleanupBoardRowInfo>, IHasGameConfigKey<GarageCleanupBoardRowId>
	{
		public int ExperimentPriority { get; set; }

		public GarageCleanupBoardId ConfigKey { get; set; }

		public int RowNumber { get; set; }

		public List<string> ColumnNumber { get; set; }

		GarageCleanupBoardRowId IHasGameConfigKey<GarageCleanupBoardRowId>.ConfigKey => default(GarageCleanupBoardRowId);

		public GarageCleanupBoardRowInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
