using System;
using Merger.MergeBoard.Logic;
using Zenject;

namespace Merger.MergeBoardInfoBar.Logic.ItemInfoPopup.Strategy
{
	public class ItemSelectionBoxPopupStrategy : IItemInfoPopupOpenStrategy
	{
		[Inject]
		[NonSerialized]
		public IItemSelectionBoxPickHandler _itemSelectionBoxPickHandler;

		public bool TryOpenPopup(ItemInfoPopupOpenData data)
		{
			return false;
		}
	}
}
