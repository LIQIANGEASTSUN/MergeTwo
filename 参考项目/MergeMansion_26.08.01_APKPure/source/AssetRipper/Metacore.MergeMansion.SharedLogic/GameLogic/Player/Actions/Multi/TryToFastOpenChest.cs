using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10907)]
	public class TryToFastOpenChest : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ChestPosition { get; set; }

		[IgnoreDataMember]
		public List<CurrencyUsageResult> ReturnList { get; set; }

		public TryToFastOpenChest()
		{
		}

		public TryToFastOpenChest(MergeBoardId boardId, Coordinate chestCoordinate, List<CurrencyUsageResult> returnList)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
