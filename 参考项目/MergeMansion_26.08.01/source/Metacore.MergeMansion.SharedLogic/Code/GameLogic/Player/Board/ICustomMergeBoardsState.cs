using System.Collections.Generic;
using GameLogic.Player.Board;
using Merge;

namespace Code.GameLogic.Player.Board
{
	public interface ICustomMergeBoardsState
	{
		IReadOnlyDictionary<MergeBoardId, MergeBoard> MergeBoards { get; }
	}
}
