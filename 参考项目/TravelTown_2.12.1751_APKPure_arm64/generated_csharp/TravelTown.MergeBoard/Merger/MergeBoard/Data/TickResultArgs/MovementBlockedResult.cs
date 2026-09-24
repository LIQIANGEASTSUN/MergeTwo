using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class MovementBlockedResult
	{
		public int StartingPositionOnBoard { get; set; }

		public Entity MovedEntity { get; set; }
	}
}
