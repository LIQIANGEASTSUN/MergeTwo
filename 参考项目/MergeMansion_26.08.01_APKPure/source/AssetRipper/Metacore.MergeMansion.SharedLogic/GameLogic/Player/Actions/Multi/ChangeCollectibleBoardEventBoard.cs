using Code.GameLogic.GameEvents;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(30008)]
	public class ChangeCollectibleBoardEventBoard : PlayerAction
	{
		public CollectibleBoardEventId EventId { get; set; }

		public MergeBoardId TargetBoardId { get; set; }

		public ChangeCollectibleBoardEventBoard()
		{
		}

		public ChangeCollectibleBoardEventBoard(CollectibleBoardEventId eventId, MergeBoardId targetBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
