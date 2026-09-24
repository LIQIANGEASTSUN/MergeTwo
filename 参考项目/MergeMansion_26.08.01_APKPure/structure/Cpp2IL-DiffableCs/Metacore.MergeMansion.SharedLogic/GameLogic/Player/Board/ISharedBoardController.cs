namespace GameLogic.Player.Board;

public interface ISharedBoardController
{

	public MergeBoard CurrentBoard
	{
		 get { } //Length: 0
	}

	public Option<BoardInfo> CurrentBoardInfoOption
	{
		 get { } //Length: 0
	}

	public MergeItem SelectedItem
	{
		 get { } //Length: 0
	}

	public bool BoardActive(MergeBoardId boardId) { }

	public MergeBoard get_CurrentBoard() { }

	public Option<BoardInfo> get_CurrentBoardInfoOption() { }

	public MergeItem get_SelectedItem() { }

}

