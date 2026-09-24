using MergeEngine.Configuration;

namespace MergeEngine.Signal.Items
{
	public class MergeItemSignalBase
	{
		public IMergeItem Item { get; }

		public int Level { get; }

		public MergeItemSignalBase(IMergeItem item)
		{
		}

		public MergeItemSignalBase(IMergeItem item, int level)
		{
		}
	}
}
