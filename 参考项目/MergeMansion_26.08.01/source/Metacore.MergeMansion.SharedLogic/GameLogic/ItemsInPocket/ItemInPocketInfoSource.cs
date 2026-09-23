using System.Collections.Generic;
using Code.GameLogic.Config;
using Metaplay.Core.Config;

namespace GameLogic.ItemsInPocket
{
	public class ItemInPocketInfoSource : IConfigItemSource<ItemInPocketInfo, ItemInPocketId>, IGameConfigSourceItem<ItemInPocketId, ItemInPocketInfo>, IHasGameConfigKey<ItemInPocketId>
	{
		public int ExperimentPriority { get; set; }

		public ItemInPocketId ConfigKey { get; set; }

		public string Item { get; set; }

		public bool IsNecessaryValidCoordinateToRunFromPocket { get; set; }

		public bool CanMoveToBoard { get; set; }

		public int PriorityInPocket { get; set; }

		public List<string> ActionsToRunFromPocket { get; set; }

		public ItemInPocketInfo ToConfigData(GameConfigBuildLog buildLog)
		{
			return null;
		}
	}
}
