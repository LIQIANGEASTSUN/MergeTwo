using ContextualizedECS;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public interface IExpendableResult
	{
		Entity Entity { get; set; }

		int Position { get; set; }

		string Reason { get; set; }
	}
}
