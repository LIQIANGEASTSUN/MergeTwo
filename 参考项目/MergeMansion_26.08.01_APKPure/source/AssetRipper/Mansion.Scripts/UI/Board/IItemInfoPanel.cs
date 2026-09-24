using System;

namespace UI.Board
{
	public interface IItemInfoPanel
	{
		IPanelContent Content { set; }

		event Action UndoButtonClicked;
	}
}
