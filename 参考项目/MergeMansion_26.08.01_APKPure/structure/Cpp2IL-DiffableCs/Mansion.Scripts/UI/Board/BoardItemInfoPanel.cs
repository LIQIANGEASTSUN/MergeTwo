namespace UI.Board;

public class BoardItemInfoPanel : MonoBehaviour, IItemInfoPanel
{
	[SerializeField]
	private AnimatedText titleText; //Field offset: 0x20
	[SerializeField]
	private AnimatedText descriptionText; //Field offset: 0x28

	public override event Action UndoButtonClicked
	{
		 add { } //Length: 4
		 remove { } //Length: 4
	}

	public override IPanelContent Content
	{
		 set { } //Length: 4
	}

	public BoardItemInfoPanel() { }

	public override void add_UndoButtonClicked(Action value) { }

	public override void remove_UndoButtonClicked(Action value) { }

	public override void set_Content(IPanelContent value) { }

	private void UpdateInfoPanel(IPanelContent content) { }

}

