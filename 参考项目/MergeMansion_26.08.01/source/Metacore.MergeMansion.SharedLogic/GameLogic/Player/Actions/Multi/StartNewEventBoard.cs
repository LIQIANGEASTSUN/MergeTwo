using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10930)]
	public class StartNewEventBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public StartNewEventBoard()
		{
		}

		public StartNewEventBoard(MergeBoardId mergeBoardId)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
