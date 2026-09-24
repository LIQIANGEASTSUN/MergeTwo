using Merge;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10903)]
	public class SetActiveMergeBoard : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public F64 LoadDuration { get; set; }

		public SetActiveMergeBoard()
		{
		}

		public SetActiveMergeBoard(MergeBoardId mergeBoardId)
		{
		}

		public SetActiveMergeBoard(MergeBoardId mergeBoardId, F64 loadDuration)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
