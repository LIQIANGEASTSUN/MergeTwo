using System.Collections.Generic;
using FAT.Merge;

namespace FAT
{
	public interface IActivityOrderHandler
	{
		bool IsValidForBoard(int boardId)
		{
			return false;
		}

		bool OnPreUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		bool OnPostUpdate(OrderData order, IOrderHelper helper, MergeWorldTracer tracer)
		{
			return false;
		}

		void HandlerCollected()
		{
		}

		void CollectDetectorExcludeItemMap(List<IDictionary<int, int>> container)
		{
		}
	}
}
