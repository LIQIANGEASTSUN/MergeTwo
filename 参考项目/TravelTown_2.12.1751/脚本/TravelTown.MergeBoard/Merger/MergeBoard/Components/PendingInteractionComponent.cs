using ContextualizedECS;

namespace Merger.MergeBoard.Components
{
	public struct PendingInteractionComponent : IComponent
	{
		public bool Used;

		public string PendingItemUuidToConsume;

		public PendingInteractionComponent Use()
		{
			return default(PendingInteractionComponent);
		}
	}
}
