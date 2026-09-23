namespace Merger.MergeBoardInfoBar.Logic.ItemInfoPopup.Strategy
{
	public interface IItemInfoPopupOpenStrategy
	{
		bool TryOpenPopup(ItemInfoPopupOpenData data);
	}
}
