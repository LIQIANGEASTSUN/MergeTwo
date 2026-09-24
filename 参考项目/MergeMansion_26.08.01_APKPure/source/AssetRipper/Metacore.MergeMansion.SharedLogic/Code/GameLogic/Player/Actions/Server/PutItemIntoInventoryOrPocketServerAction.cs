using GameLogic.Player;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;
using Metaplay.Core.Player;

namespace Code.GameLogic.Player.Actions.Server
{
	[ModelAction(20227)]
	public class PutItemIntoInventoryOrPocketServerAction : PlayerSynchronizedServerActionCore<PlayerModel>
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate Position { get; set; }

		public PutItemIntoInventoryOrPocketServerAction()
		{
		}

		public PutItemIntoInventoryOrPocketServerAction(MergeBoardId mergeBoardId, Coordinate source)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
