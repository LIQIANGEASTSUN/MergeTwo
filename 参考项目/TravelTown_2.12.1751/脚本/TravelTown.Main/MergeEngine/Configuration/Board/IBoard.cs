using GameCore.Configuration.Definitions;

namespace MergeEngine.Configuration.Board
{
	public interface IBoard : IUniqueStringKeyAsset
	{
		MergeBoardItem[,] GetBoardItems();
	}
}
