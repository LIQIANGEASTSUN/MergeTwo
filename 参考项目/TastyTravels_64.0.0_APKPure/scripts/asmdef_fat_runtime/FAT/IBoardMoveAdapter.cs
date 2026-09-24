using FAT.Merge;

namespace FAT
{
	public interface IBoardMoveAdapter
	{
		int GetMoveNeedRowCount(int detailId);

		int GetMoveCountByRowId(int rowId);

		Board GetBoard();

		void OnDepthIndexUpdate(int newDepth);
	}
}
