using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct BornComponent : IComponent
	{
		public Entity SourceEntity { get; set; }
	}
}
