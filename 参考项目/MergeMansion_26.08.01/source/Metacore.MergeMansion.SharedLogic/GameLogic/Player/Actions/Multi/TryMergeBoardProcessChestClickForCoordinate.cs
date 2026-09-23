using System.Collections.Generic;
using GameLogic.Merge;
using GameLogic.Player.Board;
using GameLogic.Player.Items;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10902)]
	public class TryMergeBoardProcessChestClickForCoordinate : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ChestCoordinate { get; set; }

		public TryMergeBoardProcessChestClickForCoordinate()
		{
		}

		public TryMergeBoardProcessChestClickForCoordinate(MergeBoardId boardId, Coordinate chestCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public void SendAnalyticsEventCurrencySink(MergeBoard boardToProcess, PlayerModel player, MergeBoardAct act, MergeItem currentItem, List<string> actItemTypes)
		{
		}
	}
}
