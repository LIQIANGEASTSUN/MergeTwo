using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS;

namespace MergeEngine.Signal.Board
{
	public class EnqueueUndoSellItemSignal
	{
		public IMergeItem MergeItem { get; }

		public Entity Entity { get; }

		public BoardItemPosition SourcePosition { get; }

		public BoardQueueOrder BoardQueueOrder { get; }

		public ResourceSource Source { get; }

		public bool SlideBoardItemToQueue { get; }

		public EnqueueUndoSellItemSignal(IMergeItem mergeItem, Entity entity, BoardItemPosition sourcePosition, BoardQueueOrder boardQueueOrder, ResourceSource source, bool slideBoardItemToQueue = false)
		{
		}
	}
}
