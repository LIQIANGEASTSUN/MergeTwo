using ContextualizedECS;
using Merger.Game.Views.Popups.Data;

namespace Merger.MergeBoard.Data.TickInputActions
{
	public class ItemsCombinationConfirmationAction
	{
		public bool IsConfirmed { get; set; }

		public Entity FirstItem { get; set; }

		public Entity SecondItem { get; set; }

		public MergeCheckItemType MergeCheckItemType { get; set; }
	}
}
