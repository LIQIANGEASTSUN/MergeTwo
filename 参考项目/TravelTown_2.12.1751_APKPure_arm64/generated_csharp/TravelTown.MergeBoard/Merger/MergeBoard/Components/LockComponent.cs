using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct LockComponent : IComponent
	{
		public bool Locked { get; set; }
	}
}
