using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace Code.GameLogic.GameEvents
{
	public class DigEventItemSource : IConfigItemSource<DigEventItemInfo, DigEventItemId>, IGameConfigSourceItem<DigEventItemId, DigEventItemInfo>, IHasGameConfigKey<DigEventItemId>
	{
		public int ExperimentPriority { get; set; }

		public DigEventItemId ConfigKey { get; set; }

		public string AssetId { get; set; }

		public bool GoesMuseum { get; set; }

		public int MuseumItemWidth { get; set; }

		public int MuseumItemHeight { get; set; }

		public bool CanBeShiny { get; set; }

		public DigEventItemId ShinyReplaces { get; set; }

		public string Coordinates { get; set; }

		public int Weight { get; set; }

		public MuseumItemRotation MuseumItemRotation { get; set; }

		public DigEventItemInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}

		public List<(int, int)> ParseCoordinates(string coordinatesString)
		{
			return null;
		}
	}
}
