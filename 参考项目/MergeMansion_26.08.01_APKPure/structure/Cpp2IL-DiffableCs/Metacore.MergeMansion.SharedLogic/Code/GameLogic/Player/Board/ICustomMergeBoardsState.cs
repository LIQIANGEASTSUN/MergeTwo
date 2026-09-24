namespace Code.GameLogic.Player.Board;

public interface ICustomMergeBoardsState
{

	public IReadOnlyDictionary<MergeBoardId, MergeBoard> MergeBoards
	{
		 get { } //Length: 0
	}

	public IReadOnlyDictionary<MergeBoardId, MergeBoard> get_MergeBoards() { }

}

