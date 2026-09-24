using System.Collections.Generic;
using System.Runtime.Serialization;
using GameLogic.Player.Board;
using Merge;
using Metaplay.Core.Model;

namespace GameLogic.Player.Actions.Basic
{
	[ModelAction(11001)]
	public class TryMergeBoardSwap : PlayerAction
	{
		public MergeBoardId MergeBoardId { get; set; }

		public Coordinate FromPosition { get; set; }

		public Coordinate ToPosition { get; set; }

		[IgnoreDataMember]
		public List<Coordinate> ReturnList { get; set; }

		public bool CheckForEmptySlots { get; set; }

		public TryMergeBoardSwap()
		{
		}

		public TryMergeBoardSwap(MergeBoardId boardId, Coordinate fromPosition, Coordinate toPosition, List<Coordinate> returnList, bool checkForEmptySlots = true)
		{
		}

		public override MetaActionResult Execute(PlayerModel player, bool commit)
		{
			return null;
		}
	}
}
