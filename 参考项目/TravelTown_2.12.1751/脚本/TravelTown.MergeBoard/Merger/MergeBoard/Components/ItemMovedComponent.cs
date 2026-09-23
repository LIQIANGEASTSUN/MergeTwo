using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct ItemMovedComponent : IComponent
	{
		public int FromPosition { get; set; }

		public int ToPosition { get; set; }
	}
}
