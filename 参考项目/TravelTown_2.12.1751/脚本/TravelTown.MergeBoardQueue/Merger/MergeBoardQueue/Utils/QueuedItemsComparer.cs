using System.Collections.Generic;
using Merger.MergeBoardQueue.Data;

namespace Merger.MergeBoardQueue.Utils
{
	public class QueuedItemsComparer : IEqualityComparer<QueuedItem>
	{
		public bool Equals(QueuedItem leftQueuedItem, QueuedItem rightQueuedItem)
		{
			return false;
		}

		public int GetHashCode(QueuedItem obj)
		{
			return 0;
		}
	}
}
