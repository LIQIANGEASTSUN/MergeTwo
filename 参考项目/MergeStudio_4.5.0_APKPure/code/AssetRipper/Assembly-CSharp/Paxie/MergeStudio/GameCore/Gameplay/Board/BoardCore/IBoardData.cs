using MergePuzzle;

namespace Paxie.MergeStudio.GameCore.Gameplay.Board.BoardCore
{
	public interface IBoardData
	{
		BoardItemData GetBoardItemDataFallback(int setID, int level, bool skipWarning = false, bool fromEventBoard = false);
	}
}
