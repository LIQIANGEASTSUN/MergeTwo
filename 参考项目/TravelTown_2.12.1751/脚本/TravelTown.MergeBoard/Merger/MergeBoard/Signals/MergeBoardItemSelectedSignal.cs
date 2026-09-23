using ContextualizedECS;

namespace Merger.MergeBoard.Signals
{
	public class MergeBoardItemSelectedSignal
	{
		public Entity ItemViewEntity { get; }

		public MergeBoardItemSelectedSignal(Entity itemViewEntity)
		{
		}
	}
}
