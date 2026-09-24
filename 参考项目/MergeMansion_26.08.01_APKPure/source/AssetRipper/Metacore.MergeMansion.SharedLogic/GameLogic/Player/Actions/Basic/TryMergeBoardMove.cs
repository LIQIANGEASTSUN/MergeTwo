using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11000)]
	public class TryMergeBoardMove : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate FromPosition { get; set; }

		public Coordinate ToPosition { get; set; }

		[IgnoreDataMember]
		public List<Coordinate> ReturnList { get; set; }

		public TryMergeBoardMove()
		{
		}

		public TryMergeBoardMove(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition, List<Coordinate> returnList)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
