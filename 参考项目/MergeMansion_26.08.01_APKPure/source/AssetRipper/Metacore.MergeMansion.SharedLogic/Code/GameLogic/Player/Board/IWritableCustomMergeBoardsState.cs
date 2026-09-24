using System.Collections.Generic;
using GameLogic.Player.Board;
using Merge;

namespace Code.GameLogic.Player.Board
{
	public interface IWritableCustomMergeBoardsState
	{
		SortedDictionary<MergeBoardId, MergeBoard> MergeBoards { get; }
	}
}
