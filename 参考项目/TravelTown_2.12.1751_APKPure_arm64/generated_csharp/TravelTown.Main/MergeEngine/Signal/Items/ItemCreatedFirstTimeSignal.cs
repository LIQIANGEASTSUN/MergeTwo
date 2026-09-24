using MergeEngine.Configuration;
using MergeEngine.Data;

namespace MergeEngine.Signal.Items
{
	public class ItemCreatedFirstTimeSignal : MergeItemSignalBase
	{
		public BoardItemPosition Position { get; }

		public ItemCreatedFirstTimeSignal(IMergeItem item, BoardItemPosition position)
			: base(null)
		{
		}
	}
}
