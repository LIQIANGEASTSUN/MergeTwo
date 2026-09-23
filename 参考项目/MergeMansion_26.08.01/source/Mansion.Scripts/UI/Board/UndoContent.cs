namespace UI.Board
{
	public class UndoContent : IPanelContent
	{
		public string Title => null;

		public string Description { get; }

		public UndoContent(bool isCommonItem)
		{
		}
	}
}
