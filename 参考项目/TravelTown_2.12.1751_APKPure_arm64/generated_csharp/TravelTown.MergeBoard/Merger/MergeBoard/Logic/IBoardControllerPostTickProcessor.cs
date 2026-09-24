using ContextualizedECS.Context;

namespace Merger.MergeBoard.Logic
{
	public interface IBoardControllerPostTickProcessor
	{
		void Process(TickArgs result);
	}
}
