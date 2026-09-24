using MergeEngine.Configuration;

namespace MergeEngine.Signal.Items
{
	public class ItemReadyForUndoSignal : MergeItemSignalBase
	{
		public ItemReadyForUndoSignal(IMergeItem item)
			: base(null)
		{
		}
	}
}
