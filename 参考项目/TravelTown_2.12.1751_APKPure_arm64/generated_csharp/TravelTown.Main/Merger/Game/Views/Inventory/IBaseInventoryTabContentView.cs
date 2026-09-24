using Merger.Game.ViewModel;

namespace Merger.Game.Views.Inventory
{
	public interface IBaseInventoryTabContentView<out T> where T : GameBaseViewModel
	{
		float GetViewportHeight();
	}
}
