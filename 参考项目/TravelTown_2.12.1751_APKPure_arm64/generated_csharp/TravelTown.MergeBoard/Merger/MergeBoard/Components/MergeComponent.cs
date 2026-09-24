using ContextualizedECS;
using Merger.MergeBoard.Data;

namespace Merger.MergeBoard.Components
{
	public struct MergeComponent : IComponent
	{
		public MergeType MergeType;

		public string SpecificMergeItem;
	}
}
