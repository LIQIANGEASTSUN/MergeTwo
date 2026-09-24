using Framework.Core.DataBinding;
using MergeEngine.Configuration;

namespace MergeEngine.ECS.Components.Board
{
	public class DisplayedItem
	{
		public string UUID { get; set; }

		public IItem Item { get; set; }

		public MutableBindableProperty<bool> IsLoading { get; }

		public long ItemAdditionTimestamp { get; set; }

		public string Reason { get; set; }

		public void Wipe()
		{
		}
	}
}
