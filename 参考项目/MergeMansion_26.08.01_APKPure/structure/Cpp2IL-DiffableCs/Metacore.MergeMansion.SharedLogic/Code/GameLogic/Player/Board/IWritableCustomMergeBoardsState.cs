namespace Code.GameLogic.Player.Board;

public interface IWritableCustomMergeBoardsState
{

	public SortedDictionary<MergeBoardId, MergeBoard> MergeBoards
	{
		 get { } //Length: 0
	}

	public SortedDictionary<MergeBoardId, MergeBoard> get_MergeBoards() { }

}

