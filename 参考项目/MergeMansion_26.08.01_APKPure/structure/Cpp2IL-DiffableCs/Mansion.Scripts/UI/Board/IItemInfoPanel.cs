namespace UI.Board;

public interface IItemInfoPanel
{

	public event Action UndoButtonClicked
	{
		[CompilerGenerated]
		 add { } //Length: 0
		[CompilerGenerated]
		 remove { } //Length: 0
	}

	public IPanelContent Content
	{
		 set { } //Length: 0
	}

	[CompilerGenerated]
	public void add_UndoButtonClicked(Action value) { }

	[CompilerGenerated]
	public void remove_UndoButtonClicked(Action value) { }

	public void set_Content(IPanelContent value) { }

}

