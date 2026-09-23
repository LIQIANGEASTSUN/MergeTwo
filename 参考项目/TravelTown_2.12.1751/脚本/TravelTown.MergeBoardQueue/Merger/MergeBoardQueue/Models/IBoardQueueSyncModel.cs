using System.Collections.Generic;
using Merger.MergeBoardQueue.Data;

namespace Merger.MergeBoardQueue.Models
{
	public interface IBoardQueueSyncModel
	{
		void LoadFromBackendState(List<QueuedItem> backendItems);

		void SyncWithState();
	}
}
