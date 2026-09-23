using Code.GameLogic.GameEvents;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11085)]
	public class TryTakePhoto : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate ItemCoordinate { get; set; }

		public Coordinate CameraCoordinate { get; set; }

		public LuckyType LuckyType { get; set; }

		public TryTakePhoto()
		{
		}

		public TryTakePhoto(MergeBoardId boardId, Coordinate itemCoordinate, Coordinate cameraCoordinate, LuckyType luckyType)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
