using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.ECS;

namespace Merger.Game.Data
{
	public class QueuedItem
	{
		public IItem Item { get; }

		public Entity Entity { get; set; }

		public string Id => null;

		public string UUIDInBoardQueue { get; }

		public string BoosterUUID { get; }

		public long EnqueueTimestamp { get; }

		public string Reason { get; set; }

		public BoardQueueOrder BoardQueueOrder { get; }

		public QueuedItem(IItem item, long enqueueTimestamp, BoardQueueOrder boardQueueOrder, string uuidInBoardQueue, Entity entityData = null, string boosterUuid = null, string reason = null)
		{
		}
	}
}
