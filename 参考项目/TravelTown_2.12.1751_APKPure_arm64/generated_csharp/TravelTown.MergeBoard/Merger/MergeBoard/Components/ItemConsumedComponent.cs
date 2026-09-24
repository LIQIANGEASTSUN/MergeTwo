using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct ItemConsumedComponent : IComponent
	{
		public int ConsumerPosition { get; set; }

		public string ConsumerItemId { get; set; }
	}
}
