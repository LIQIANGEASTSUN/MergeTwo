using MergeEngine.Configuration;

namespace MergeEngine.Signal.Items
{
	public class ItemUnlockStartedSignal : MergeItemSignalBase
	{
		public ItemUnlockStartedSignal(IMergeItem item, int level)
			: base(null)
		{
		}
	}
}
