using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Data;
using MergeEngine.ECS;
using Merger.Boosters.Declarations.Definitions.Interfaces;

namespace MergeEngine.Signal.Board
{
	public class EnqueueBoosterItemSignal
	{
		public IMergeItem MergeItem { get; }

		public Entity Entity { get; }

		public BoardItemPosition SourcePosition { get; }

		public BoardQueueOrder BoardQueueOrder { get; }

		public ResourceSource Source { get; }

		public bool SlideBoardItemToQueue { get; }

		public string BoosterUUId { get; }

		public string BoosterId { get; }

		public IBoosterItem BoosterItem { get; }

		public EnqueueBoosterItemSignal(IMergeItem mergeItem, Entity entity, BoardItemPosition sourcePosition, BoardQueueOrder boardQueueOrder, ResourceSource source, string boosterUuId, string boosterId, IBoosterItem boosterItem, bool slideBoardItemToQueue = false)
		{
		}
	}
}
