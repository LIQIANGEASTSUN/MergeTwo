using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using GameLogic.Player.Board;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Development
{
	[ModelAction(20029)]
	[DevelopmentOnlyAction]
	public class AddNeededItemsFromActiveBoardEventsToBoard : PlayerAction
	{
		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}

		public static void AddItemsFromTasks(PlayerModel player, List<EventTaskId> taskIds, MergeBoard addToThisBoard)
		{
		}
	}
}
