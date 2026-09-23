using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Multi
{
	[ModelAction(10901)]
	public class TryMergeBoardProcessActivationForCoordinate : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ActivationCoordinate { get; set; }

		public TryMergeBoardProcessActivationForCoordinate()
		{
		}

		public TryMergeBoardProcessActivationForCoordinate(MergeBoardId boardId, Coordinate activationCoordinate)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
